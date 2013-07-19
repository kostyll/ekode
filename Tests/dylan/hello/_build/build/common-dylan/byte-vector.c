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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(10);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
} _KLintegerGVKd;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
} _KLbyte_characterGVKe;


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
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_no_rest_value_5VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kbyte_vector_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D KerrorVKdMM1I (D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM0;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM0I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM1;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM1I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM2;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM2I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM3;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM3I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM4;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM4I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM5;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM5I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM6;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM6I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM7;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM7I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM8;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM8I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM9;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM9I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM10;
D Kcopy_bytesYbyte_vectorVcommon_dylanMM10I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_2;
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_3;
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_4;
extern _KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_5;
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLpairGVKd K39;
static _KLbyte_stringGVKd_10 K40;
D Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI (D, D, D, D, D);
static _KLbyte_stringGVKd_63 K42;
static _KLsignatureGVKe K43;
static _KLsimple_object_vectorGVKd_5 K44;
static _KLsignatureGVKe K45;
static _KLsimple_object_vectorGVKd_5 K46;
static _KLsignatureGVKe K47;
static _KLsimple_object_vectorGVKd_5 K48;
static _KLsignatureGVKe K49;
static _KLsimple_object_vectorGVKd_5 K50;
static _KLsignatureGVKe K51;
static _KLsimple_object_vectorGVKd_5 K52;
static _KLsignatureGVKe K53;
static _KLsimple_object_vectorGVKd_5 K54;
static _KLsignatureGVKe K55;
static _KLsimple_object_vectorGVKd_5 K56;
static _KLsignatureGVKe K57;
static _KLsimple_object_vectorGVKd_5 K58;
static _KLsignatureGVKe K59;
static _KLsimple_object_vectorGVKd_5 K60;
static _KLsignatureGVKe K61;
static _KLsimple_object_vectorGVKd_5 K62;
static _KLsignatureGVKe K63;
static _KLsimple_object_vectorGVKd_5 K64;
extern _KLsimple_methodGVKe Kbyte_vector_ref_setterYbyte_vectorVcommon_dylan;
D Kbyte_vector_ref_setterYbyte_vectorVcommon_dylanI (D, D, D);
static _KLsignatureGVKe K67;
static _KLsimple_object_vectorGVKd_3 K68;
extern _KLsimple_methodGVKe Kbyte_vector_refYbyte_vectorVcommon_dylan;
D Kbyte_vector_refYbyte_vectorVcommon_dylanI (D, D);
static _KLsignatureGVKe K71;
static _KLsimple_object_vectorGVKd_2 K72;
extern _KLsealed_generic_functionGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylan;
extern _KLkeyword_methodGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0;
D Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1;
D Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1I (D, D, D, D, D);
static _KLpairGVKd K78;
static _KLpairGVKd K79;
static _KLkeyword_signatureGVKe K80;
static _KLbyte_stringGVKd_16 K81;
static _KLkeyword_signatureGVKe K82;
static _KLsimple_object_vectorGVKd_4 K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLsimple_object_vectorGVKd_2 K85;
static _KLsimple_object_vectorGVKd_2 K86;
static _KLkeyword_signatureGVKe K87;

/* Indirection variables */


/* Variables */

D byte_vector_fillYbyte_vectorVcommon_dylan = &Kbyte_vector_fillYbyte_vectorVcommon_dylan;
D Lbyte_vectorGYbyte_vectorVcommon_dylan = &KLsimple_byte_vectorGVKe;
D byte_vector_refYbyte_vectorVcommon_dylan = &Kbyte_vector_refYbyte_vectorVcommon_dylan;
D byte_vector_ref_setterYbyte_vectorVcommon_dylan = &Kbyte_vector_ref_setterYbyte_vectorVcommon_dylan;
D copy_bytesYbyte_vectorVcommon_dylan = &Kcopy_bytesYbyte_vectorVcommon_dylan;

/* Objects */

_KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &KPfalseVKi,
  &K40,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbyte_vector_moduleYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K63,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K61,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K59,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM2I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K57,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM3I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K55,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM4I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K53,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM5I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K51,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM6I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K49,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM7I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K47,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM8I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K45,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM9I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K43,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM10I
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM10
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_0,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM9
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_1,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM8
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_2,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM7
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_3,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM6
};

_KLmethod_domainGVKe Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Kcopy_bytesYbyte_vectorVcommon_dylanRD_common_dylanRD_4,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM5
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM1,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM2,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM3,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM4,
  &K34
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM5,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM6,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM7,
  &K37
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM8,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM9,
  &K39
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMM10,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "copy-bytes"
};

static _KLbyte_stringGVKd_63 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "SRC-START %d DST-START %d AND N %d OUTSIDE OF SRC %= AND DST %="
};

static _KLsignatureGVKe K43 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K44
};

static _KLsimple_object_vectorGVKd_5 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K45 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K46
};

static _KLsimple_object_vectorGVKd_5 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K47 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K48
};

static _KLsimple_object_vectorGVKd_5 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K49 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K50
};

static _KLsimple_object_vectorGVKd_5 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K51 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K52
};

static _KLsimple_object_vectorGVKd_5 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K53 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K54
};

static _KLsimple_object_vectorGVKd_5 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K55 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K56
};

static _KLsimple_object_vectorGVKd_5 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLstringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K57 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K58
};

static _KLsimple_object_vectorGVKd_5 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLstringGVKd,
  &KLintegerGVKd,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K59 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K60
};

static _KLsimple_object_vectorGVKd_5 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLstringGVKd,
  &KLintegerGVKd,
  &KLstringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K61 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K62
};

static _KLsimple_object_vectorGVKd_5 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K63 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K64
};

static _KLsimple_object_vectorGVKd_5 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kbyte_vector_ref_setterYbyte_vectorVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K67,
  &Kbyte_vector_ref_setterYbyte_vectorVcommon_dylanI
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K68
};

static _KLsimple_object_vectorGVKd_3 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kbyte_vector_refYbyte_vectorVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K71,
  &Kbyte_vector_refYbyte_vectorVcommon_dylanI
};

static _KLsignatureGVKe K71 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K72
};

static _KLsimple_object_vectorGVKd_2 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K80,
  &KPfalseVKi,
  &K81,
  &K78,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K87,
  &key_mep_5,
  &Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0I,
  &K83
};

_KLkeyword_methodGVKe Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K82,
  &key_mep_5,
  &Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1I,
  &K83
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0,
  &K79
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K80 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302345,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_16 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "byte-vector-fill"
};

static _KLkeyword_signatureGVKe K82 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K84,
  &K85,
  &K86
};

static _KLsimple_object_vectorGVKd_4 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLbyte_characterGVKe
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K87 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K72,
  &K85,
  &K86
};

/* Code */

D Kcopy_bytesYbyte_vectorVcommon_dylanMM0I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  DWORD i_T, i_;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:49
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    T9 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T11 = primitive_cast_integer_as_raw(src_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T12 = primitive_machine_word_logxor(i_,1);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T13 = primitive_machine_word_add_signal_overflow(T11,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T14 = primitive_cast_raw_as_integer(T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(src_, T14, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T15 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T16 = primitive_machine_word_add_signal_overflow(T15,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      T17 = primitive_cast_raw_as_integer(T16);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:54
      CALL3(&Kelement_setterVKd, T7, dst_, T17);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
    T8 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:49
  MV_SET_COUNT(0);
  return(T8);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM1I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  DWORD i_T, i_;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:58
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    T9 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T11 = primitive_cast_integer_as_raw(src_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T12 = primitive_machine_word_logxor(i_,1);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T13 = primitive_machine_word_add_signal_overflow(T11,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T14 = primitive_cast_raw_as_integer(T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(src_, T14, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T15 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T16 = primitive_machine_word_add_signal_overflow(T15,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      T17 = primitive_cast_raw_as_integer(T16);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:63
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T7, dst_, T17);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
    T8 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:62
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:58
  MV_SET_COUNT(0);
  return(T8);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM2I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  DWORD i_T, i_;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:67
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    T9 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T11 = primitive_cast_integer_as_raw(src_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T12 = primitive_machine_word_logxor(i_,1);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T13 = primitive_machine_word_add_signal_overflow(T11,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T14 = primitive_cast_raw_as_integer(T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(src_, T14, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T15 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T16 = primitive_machine_word_add_signal_overflow(T15,T12);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      T17 = primitive_cast_raw_as_integer(T16);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:72
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T7, dst_, T17);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
    T8 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:71
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:67
  MV_SET_COUNT(0);
  return(T8);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM3I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  DWORD i_T, i_;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:76
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    T10 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T12 = primitive_cast_integer_as_raw(src_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T13 = primitive_machine_word_logxor(i_,1);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T14 = primitive_machine_word_add_signal_overflow(T12,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T15 = primitive_cast_raw_as_integer(T14);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(src_, T15, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T8 = CONGRUENT_CALL2(&KLcharacterGVKd, T7);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T16 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T17 = primitive_machine_word_add_signal_overflow(T16,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:81
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T8, dst_, T18);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
      T19 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
      i_T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
    T9 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:76
  MV_SET_COUNT(0);
  return(T9);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM4I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  DWORD i_T, i_;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:85
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    T10 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T12 = primitive_cast_integer_as_raw(src_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T13 = primitive_machine_word_logxor(i_,1);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T14 = primitive_machine_word_add_signal_overflow(T12,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T15 = primitive_cast_raw_as_integer(T14);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(src_, T15, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T8 = CONGRUENT_CALL2(&KLintegerGVKd, T7);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T16 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T17 = primitive_machine_word_add_signal_overflow(T16,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:90
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T8, dst_, T18);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
      T19 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
      i_T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
    T9 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:89
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:85
  MV_SET_COUNT(0);
  return(T9);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM5I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:101
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:104
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:104
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:104
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:104
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:105
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:105
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:108
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:109
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:110
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:107
    primitive_replace_bytesX(dst_,2,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:107
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:112
    T11 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:101
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM6I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:119
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:119
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:119
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:119
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:120
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:120
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:123
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:124
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:125
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:122
    primitive_replace_bytesX(dst_,2,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:122
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:127
    T11 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:121
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:116
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM7I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:134
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:134
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:134
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:134
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:135
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:135
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:138
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:139
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:140
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:137
    primitive_replace_bytesX(dst_,2,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:137
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:142
    T11 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:131
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM8I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:146
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:149
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:149
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:149
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:149
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:150
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:150
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:153
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:154
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:155
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:152
    primitive_replace_bytesX(dst_,2,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:152
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:157
    T11 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:151
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:146
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM9I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD src_i_T, src_i_;
  DWORD dst_i_T, dst_i_;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:161
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:164
  T15 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:164
  T16 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:164
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:164
  T18 = primitive_machine_word_add_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:165
  T19 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:165
  T20 = primitive_machine_word_add_signal_overflow(T19,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  T21 = primitive_machine_word_less_thanQ(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  if (T21 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T23 = primitive_machine_word_less_thanQ(T15,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T22 = primitive_not(T23);
    T6 = T22;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T25 = primitive_machine_word_less_thanQ(T19,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T24 = primitive_not(T25);
    T7 = T24;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T26 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T28 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T29 = primitive_machine_word_less_thanQ(T28,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T27 = primitive_not(T29);
    T8 = T27;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T30 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T32 = primitive_cast_integer_as_raw(T30);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T33 = primitive_machine_word_less_thanQ(T32,T20);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
    T31 = primitive_not(T33);
    T9 = T31;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
    src_i_T = T15;
    dst_i_T = T19;
  L0: ;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      src_i_ = src_i_T;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      dst_i_ = dst_i_T;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      T38 = primitive_cast_raw_as_integer(dst_i_);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      T34 = primitive_machine_word_less_thanQ(src_i_,T18);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:170
        T35 = REPEATED_D_SLOT_VALUE_TAGGED(src_, 1, src_i_);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:170
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
        CONGRUENT_CALL3(T35, dst_, T38);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
        T36 = primitive_machine_word_add_signal_overflow(src_i_,4);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
        T37 = primitive_machine_word_add_signal_overflow(dst_i_,4);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
        src_i_T = T36;
        dst_i_T = T37;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
      T12 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:168
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:174
    T13 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:166
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:161
  MV_SET_COUNT(0);
  return(T14);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMM10I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD src_i_T, src_i_;
  DWORD dst_i_T, dst_i_;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35_0;
  DBYTE T36;
  D T37_0;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:178
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:182
  T15 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:182
  T16 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:182
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:182
  T18 = primitive_machine_word_add_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:183
  T19 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:183
  T20 = primitive_machine_word_add_signal_overflow(T19,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  T21 = primitive_machine_word_less_thanQ(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  if (T21 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T23 = primitive_machine_word_less_thanQ(T15,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T22 = primitive_not(T23);
    T6 = T22;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T25 = primitive_machine_word_less_thanQ(T19,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T24 = primitive_not(T25);
    T7 = T24;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T26 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T28 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T29 = primitive_machine_word_less_thanQ(T28,T18);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T27 = primitive_not(T29);
    T8 = T27;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T30 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T32 = primitive_cast_integer_as_raw(T30);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T33 = primitive_machine_word_less_thanQ(T32,T20);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
    T31 = primitive_not(T33);
    T9 = T31;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
    src_i_T = T15;
    dst_i_T = T19;
  L0: ;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      src_i_ = src_i_T;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      dst_i_ = dst_i_T;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      T34 = primitive_machine_word_less_thanQ(src_i_,T18);
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T36 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(src_, 1, src_i_);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T38 = primitive_machine_word_shift_left_signal_overflow(T36,2);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T39 = primitive_machine_word_logior(T38,1);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T40 = primitive_cast_raw_as_integer(T39);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T37_0 = T40;
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T35_0 = T37_0;
        {
          MV_CHECK_TYPE_PROLOGUE(T37_0);
          primitive_type_check(T35_0, &KLbyteGVKe);
          MV_CHECK_TYPE_EPILOGUE();
        }
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        T41 = T35_0;
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:188
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T41, dst_, 1, dst_i_);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
        T42 = primitive_machine_word_add_signal_overflow(src_i_,4);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
        T43 = primitive_machine_word_add_signal_overflow(dst_i_,4);
        // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
        src_i_T = T42;
        dst_i_T = T43;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
      T12 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:186
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:192
    T13 = Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI(src_, src_start_, dst_, dst_start_, n_);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:184
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:178
  MV_SET_COUNT(0);
  return(T14);
}

D Kcopy_bytes_range_errorYcommon_dylan_internalsVcommon_dylanI (D src_, D src_start_, D dst_, D dst_start_, D n_) {
  _KLsimple_object_vectorGVKd_5 T5 = {&KLsimple_object_vectorGVKdW, (D) 21};
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:94
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:97
  T5.vector_element_[0] = src_start_;
  T5.vector_element_[1] = dst_start_;
  T5.vector_element_[2] = n_;
  T5.vector_element_[3] = src_;
  T5.vector_element_[4] = dst_;
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:97
  T6 = KerrorVKdMM1I(&K42, &T5);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:94
  MV_SET_COUNT(0);
  return(T6);
}

D Kbyte_vector_ref_setterYbyte_vectorVcommon_dylanI (D value_, D byte_vector_, D index_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:22
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:24
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(value_, byte_vector_, index_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:24
  T3 = value_;
  MV_SET_ELT(0, value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:22
  return(T3);
}

D Kbyte_vector_refYbyte_vectorVcommon_dylanI (D byte_vector_, D index_) {
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;
  DBYTE T10;
  D T11_0;
  DWORD T12;
  DWORD T13;
  D T14;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:17
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  T5 = SLOT_VALUE_INITD(byte_vector_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  T8 = primitive_machine_word_unsigned_less_thanQ(T6,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T10 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(byte_vector_, 1, T6);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T12 = primitive_machine_word_shift_left_signal_overflow(T10,2);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T13 = primitive_machine_word_logior(T12,1);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T14 = primitive_cast_raw_as_integer(T13);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T11_0 = T14;
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T9_0 = T11_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T11_0);
      primitive_type_check(T9_0, &KLbyteGVKe);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T4_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
    T3_0 = Kelement_range_errorVKeI(byte_vector_, index_);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:19
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:17
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kbyte_vector_fillYbyte_vectorVcommon_dylanMM0I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D lastF8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  T11 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:30
    T12 = SLOT_VALUE_INITD(target_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
    T7 = T12;
    lastF8 = T7;
  } else {
    lastF8 = last_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:31
  T9 = Kcheck_start_compute_endVKeMM0I(target_, startF6, lastF8);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:33
  T14 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:33
  T13 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T15 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T16 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T18 = primitive_machine_word_subtract_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T19 = primitive_machine_word_add_signal_overflow(T18,4);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T20 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T22 = primitive_cast_integer_as_raw(value_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:34
  T21 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:32
  primitive_fill_bytesX(target_,2,T13,T20,T21);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:32
  T10 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:28
  MV_SET_COUNT(0);
  return(T10);
}

D Kbyte_vector_fillYbyte_vectorVcommon_dylanMM1I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D lastF8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DSINT T21;

  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  T11 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:39
    T12 = SLOT_VALUE_INITD(target_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
    T7 = T12;
    lastF8 = T7;
  } else {
    lastF8 = last_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:40
  T9 = Kcheck_start_compute_endVKeMM0I(target_, startF6, lastF8);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:42
  T14 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:42
  T13 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T15 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T16 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T18 = primitive_machine_word_subtract_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T19 = primitive_machine_word_add_signal_overflow(T18,4);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T20 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:43
  T21 = primitive_byte_character_as_raw(value_);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:41
  primitive_fill_bytesX(target_,2,T13,T20,T21);
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:41
  T10 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/byte-vector.dylan:37
  MV_SET_COUNT(0);
  return(T10);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_byte_vector_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_byte_vector_for_user () {
  return;
}


/* eof */
