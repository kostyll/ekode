#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

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
} _KLbooleanGVKd;

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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(6);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLstringGVKd;

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
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D initial_position_;
  D current_position_;
  D final_position_;
  D stream_sequence_;
  D stream_limit_;
} _KLbyte_string_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  DWORD PPdouble_integer_low_;
  DWORD PPdouble_integer_high_;
} _KLdouble_integerGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
} _KLconditionGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
D Kelement_range_errorVKeI (D, D);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe KformatYformatVioMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KmakeVKdMM33I (D, D, D, D);
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJoutput_;
D KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW;
extern _KLincremental_generic_functionGVKe KelementVKd;
D Kstream_contentsYstreams_protocolVcommon_dylanMioM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kprint_objectYprintVio;
D KlistVKdI (D);
extern _KLsimple_methodGVKe KapplyVKd;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
D Kassertion_failureVKiI (D, D);
extern _KLsealed_generic_functionGVKe KprintYprintVio;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
D Kuninitialized_instanceQ_functionVKiI (D, D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLvalue_classGVKi KLdouble_integerGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_integerGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLmoduleGVKe Kformat_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLincremental_generic_functionGVKe Kwrite_textYstreamsVio;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern D Tprint_escapeQTYprintVio;

/* Defined object declarations */

static _KLsymbolGVKd KJdigit_;
extern _KLincremental_generic_functionGVKe Kprint_messageYformatVio;
D Kparse_integerYformat_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kdo_dispatchYformat_internalsVioMM0;
D Kdo_dispatchYformat_internalsVioMM0I (D, D, D);
extern _KLsealed_generic_functionGVKe KformatYformatVio;
extern _KLsimple_methodGVKe KformatYformatVioMM0;
D KformatYformatVioMM0I (D, D, D);
static _KLpairGVKd K11;
static _KLpairGVKd K12;
static _KLsignatureGVKe K13;
static _KLbyte_stringGVKd_6 K14;
static _KLsimple_object_vectorGVKd_2 K15;
static _KLsymbolGVKd KJcontents_;
static _KLsymbolGVKd KJstream_lock_;
static _KLbyte_stringGVKd_11 K18;
static _KLbyte_stringGVKd_8 K19;
static _KLsignatureGVKe K20;
static _KLsimple_object_vectorGVKd_2 K21;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K22;
extern _KLsealed_generic_functionGVKe Kformat_integerYformat_internalsVio;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K24;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K25;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K26;
static _KLbyte_stringGVKd_37 K27;
extern _KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM0;
D Kformat_integerYformat_internalsVioMM0I (D, D, D);
extern _KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM1;
D Kformat_integerYformat_internalsVioMM1I (D, D, D);
extern _KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM2;
D Kformat_integerYformat_internalsVioMM2I (D, D, D);
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_14 K37;
static _KLbyte_stringGVKd_32 K38;
static _KLsignatureGVKe K39;
static _KLsimple_object_vectorGVKd_3 K40;
static _KLlimited_integerGVKe K41;
static D KrepeatF43I (D, D, D, D);
static _KLsignatureGVKe K44;
static _KLsimple_object_vectorGVKd_3 K45;
static _KLsignatureGVKe K46;
static _KLsimple_object_vectorGVKd_3 K47;
static _KLsignatureAvaluesGVKi K48;
static _KLsimple_object_vectorGVKd_3 K49;
extern _KLsimple_methodGVKe Kprint_messageYformatVioMM0;
D Kprint_messageYformatVioMM0I (D, D);
extern _KLsimple_methodGVKe Kprint_messageYformatVioMM1;
D Kprint_messageYformatVioMM1I (D, D);
extern _KLsimple_methodGVKe Kprint_messageYformatVioMM2;
D Kprint_messageYformatVioMM2I (D, D);
extern _KLsimple_methodGVKe Kprint_messageYformatVioMM3;
D Kprint_messageYformatVioMM3I (D, D);
extern _KLsimple_methodGVKe Kprint_messageYformatVioMM4;
D Kprint_messageYformatVioMM4I (D, D);
extern _KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_1;
extern _KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_2;
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLsignatureGVKe K68;
static _KLbyte_stringGVKd_13 K69;
static _KLsimple_object_vectorGVKd_2 K70;
static _KLsignatureGVKe K71;
static _KLsimple_object_vectorGVKd_2 K72;
static _KLsignatureGVKe K73;
static _KLsimple_object_vectorGVKd_2 K74;
static _KLsignatureGVKe K75;
static _KLsimple_object_vectorGVKd_2 K76;
static _KLsignatureGVKe K77;
static _KLsimple_object_vectorGVKd_2 K78;
static _KLbyte_stringGVKd_36 K79;
static _KLbyte_stringGVKd_5 K80;
extern _KLsealed_generic_functionGVKe Kformat_to_stringYformatVio;
extern _KLsimple_methodGVKe Kformat_to_stringYformatVioMM0;
D Kformat_to_stringYformatVioMM0I (D, D);
static _KLpairGVKd K84;
static _KLsignatureAvaluesGVKi K85;
static _KLbyte_stringGVKd_16 K86;
static _KLsignatureAvaluesGVKi K87;

/* Indirection variables */

static D IKJdigit_ = &KJdigit_;
static D IKJcontents_ = &KJcontents_;
static D IKJstream_lock_ = &KJstream_lock_;

/* Variables */

D do_dispatchYformat_internalsVio = &Kdo_dispatchYformat_internalsVioMM0;
D format_to_stringYformatVio = &Kformat_to_stringYformatVio;
D print_messageYformatVio = &Kprint_messageYformatVio;
D char_classesYformat_internalsVio = &KPunboundVKi;
D formatYformatVio = &KformatYformatVio;
D DdigitsYformat_internalsVio = &K79;

/* Objects */

static _KLsymbolGVKd KJdigit_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K80
};

_KLincremental_generic_functionGVKe Kprint_messageYformatVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K68,
  (D) 1,
  &K69,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kformat_moduleYdylan_userVio,
  &Kprint_messageYformatVioRD_ioRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kdo_dispatchYformat_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K48,
  &Kdo_dispatchYformat_internalsVioMM0I
};

_KLsealed_generic_functionGVKe KformatYformatVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K13,
  &KPfalseVKi,
  &K14,
  &K11,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KformatYformatVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K20,
  &KformatYformatVioMM0I
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &KformatYformatVioMM0,
  &K12
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &KformatYformatVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K13 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991625,
  &K15
};

static _KLbyte_stringGVKd_6 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "format"
};

static _KLsimple_object_vectorGVKd_2 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLstringGVKd
};

static _KLsymbolGVKd KJcontents_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K19
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K18
};

static _KLbyte_stringGVKd_11 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLbyte_stringGVKd_8 K19 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "contents"
};

static _KLsignatureGVKe K20 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991625,
  &K21
};

static _KLsimple_object_vectorGVKd_2 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbyte_stringGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K22 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kformat_integerYformat_internalsVio
};

_KLsealed_generic_functionGVKe Kformat_integerYformat_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 25,
  &K37,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K24 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kformat_integerYformat_internalsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K25 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kformat_integerYformat_internalsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K26 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kformat_integerYformat_internalsVio
};

static _KLbyte_stringGVKd_37 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Unknown format dispatch character, %c"
};

_KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K46,
  &Kformat_integerYformat_internalsVioMM0I
};

_KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K44,
  &Kformat_integerYformat_internalsVioMM1I
};

_KLsimple_methodGVKe Kformat_integerYformat_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K39,
  &Kformat_integerYformat_internalsVioMM2I
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kformat_integerYformat_internalsVioMM0,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kformat_integerYformat_internalsVioMM1,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kformat_integerYformat_internalsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "format-integer"
};

static _KLbyte_stringGVKd_32 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Can only print floats in base 10"
};

static _KLsignatureGVKe K39 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K40
};

static _KLsimple_object_vectorGVKd_3 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfloatGVKd,
  &K41,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLlimited_integerGVKe K41 = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 9,
  (D) 145
};

static _KLsignatureGVKe K44 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K45
};

static _KLsimple_object_vectorGVKd_3 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &K41,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K46 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K47
};

static _KLsimple_object_vectorGVKd_3 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_integerGVKe,
  &K41,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K49,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_characterGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kprint_messageYformatVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K68,
  &Kprint_messageYformatVioMM0I
};

_KLsimple_methodGVKe Kprint_messageYformatVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K77,
  &Kprint_messageYformatVioMM1I
};

_KLsimple_methodGVKe Kprint_messageYformatVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K75,
  &Kprint_messageYformatVioMM2I
};

_KLsimple_methodGVKe Kprint_messageYformatVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K73,
  &Kprint_messageYformatVioMM3I
};

_KLsimple_methodGVKe Kprint_messageYformatVioMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K71,
  &Kprint_messageYformatVioMM4I
};

_KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kprint_messageYformatVioMM4
};

_KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_messageYformatVioRD_ioRD_0,
  &Kprint_messageYformatVioMM3
};

_KLmethod_domainGVKe Kprint_messageYformatVioRD_ioRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_messageYformatVioRD_ioRD_1,
  &Kprint_messageYformatVioMM2
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_messageYformatVioMM0,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_messageYformatVioMM1,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_messageYformatVioMM2,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_messageYformatVioMM3,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_messageYformatVioMM4,
  &KPempty_listVKi
};

static _KLsignatureGVKe K68 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K70
};

static _KLbyte_stringGVKd_13 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "print-message"
};

static _KLsimple_object_vectorGVKd_2 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K71 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K72
};

static _KLsimple_object_vectorGVKd_2 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsymbolGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K73 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K74
};

static _KLsimple_object_vectorGVKd_2 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcharacterGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K75 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K76
};

static _KLsimple_object_vectorGVKd_2 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstringGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K77 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K78
};

static _KLsimple_object_vectorGVKd_2 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconditionGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_36 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
};

static _KLbyte_stringGVKd_5 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "digit"
};

_KLsealed_generic_functionGVKe Kformat_to_stringYformatVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K85,
  &KPfalseVKi,
  &K86,
  &K84,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kformat_to_stringYformatVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K87,
  &Kformat_to_stringYformatVioMM0I
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &Kformat_to_stringYformatVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K85 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LstringG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_16 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "format-to-string"
};

static _KLsignatureAvaluesGVKi K87 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

/* Code */

D Kparse_integerYformat_internalsVioMM0I (D input_, D index_) {
  D negativeQ_;
  DWORD i_T, i_;
  DWORD len_T, len_;
  DWORD ascii_zero_T, ascii_zero_;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T10_1;
  D indexF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D result_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DBCHR T26;
  D T27;
  DBCHR T28;
  DWORD T29;
  DWORD T30;
  DSINT T31;
  D T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39_0;
  D T40;
  DBCHR T41;
  D T42;
  DBCHR T43;
  D T44_0;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48_0;
  D T49;
  DSINT T50;
  D T51;
  D T52;
  D T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  D T58_0;
  D T59;
  DBCHR T60;
  D T61;
  DBCHR T62;
  D T63_0;
  DWORD T64;
  DWORD T65;
  D T66;
  D T67_0;
  D T68;
  DSINT T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  D T74;
  DWORD T75;
  DWORD T76;
  D T77;
  DWORD T78;
  DWORD T79;
  D T80;
  D T81_0;
  D T81_1;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  DWORD T85;
  D T86;
  D T87_0;
  D T87_1;

  // /opt/opendylan-2013.1/sources/io/format.dylan:239
  indexF11 = index_;
  // /opt/opendylan-2013.1/sources/io/format.dylan:241
  result_ = (D) 1;
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T15 = indexF11;
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T22 = SLOT_VALUE_INITD(input_, 0);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T23 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T24 = primitive_cast_integer_as_raw(T22);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T25 = primitive_machine_word_unsigned_less_thanQ(T23,T24);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:242
    T26 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(input_, 1, T23);
    T28 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:242
    T21_0 = Kelement_range_errorVKeI(input_, T15);
    // /opt/opendylan-2013.1/sources/io/format.dylan:242
    T27 = T21_0;
    // /opt/opendylan-2013.1/sources/io/format.dylan:242
    T31 = primitive_byte_character_as_raw(T27);
    T28 = T31;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T29 = primitive_machine_word_shift_left_signal_overflow(T28,2);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T30 = primitive_machine_word_logior(T29,1);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  T32 = primitive_machine_word_equalQ(T30,181);
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:243
    T14 = indexF11;
    // /opt/opendylan-2013.1/sources/io/format.dylan:243
    T33 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/io/format.dylan:243
    T34 = primitive_machine_word_add_signal_overflow(T33,4);
    // /opt/opendylan-2013.1/sources/io/format.dylan:243
    T35 = primitive_cast_raw_as_integer(T34);
    // /opt/opendylan-2013.1/sources/io/format.dylan:243
    indexF11 = T35;
    negativeQ_ = T35;
  } else {
    negativeQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:242
  // /opt/opendylan-2013.1/sources/io/format.dylan:245
  T13 = indexF11;
  // /opt/opendylan-2013.1/sources/io/format.dylan:248
  T37 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/io/format.dylan:245
  i_T = T37;
  len_T = T24;
  ascii_zero_T = 193;
L0: ;
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:248
    T38 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
    len_ = len_T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
    ascii_zero_ = ascii_zero_T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:250
    T74 = primitive_cast_raw_as_integer(ascii_zero_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:248
    T36 = primitive_machine_word_equalQ(i_,len_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:248
    if (T36 != &KPfalseVKi) {
      T8 = T36;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T40 = primitive_machine_word_unsigned_less_thanQ(i_,T24);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:249
        T41 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(input_, 1, i_);
        T43 = T41;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:249
        T39_0 = Kelement_range_errorVKeI(input_, T38);
        // /opt/opendylan-2013.1/sources/io/format.dylan:249
        T42 = T39_0;
        // /opt/opendylan-2013.1/sources/io/format.dylan:249
        T50 = primitive_byte_character_as_raw(T42);
        T43 = T50;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T45 = primitive_machine_word_shift_left_signal_overflow(T43,2);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T46 = primitive_machine_word_logior(T45,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T47 = primitive_cast_raw_as_integer(T46);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T48_0 = T47;
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T44_0 = T48_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T48_0);
        primitive_type_check(T44_0, &KLbyteGVKe);
        MV_CHECK_TYPE_EPILOGUE();
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T49 = T44_0;
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T51 = KelementVKdMM11I(char_classesYformat_internalsVio, T49, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T52 = primitive_idQ(T51,IKJdigit_);
      // /opt/opendylan-2013.1/sources/io/format.dylan:249
      T53 = primitive_not(T52);
      T8 = T53;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:248
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T20 = result_;
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T54 = primitive_cast_integer_as_raw(T20);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T55 = primitive_machine_word_logxor(T54,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T56 = primitive_machine_word_multiply_signal_overflow(T55,10);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T57 = primitive_machine_word_logior(T56,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T59 = primitive_machine_word_unsigned_less_thanQ(i_,T24);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      if (T59 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:250
        T60 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(input_, 1, i_);
        T62 = T60;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:250
        T58_0 = Kelement_range_errorVKeI(input_, T38);
        // /opt/opendylan-2013.1/sources/io/format.dylan:250
        T61 = T58_0;
        // /opt/opendylan-2013.1/sources/io/format.dylan:250
        T69 = primitive_byte_character_as_raw(T61);
        T62 = T69;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T64 = primitive_machine_word_shift_left_signal_overflow(T62,2);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T65 = primitive_machine_word_logior(T64,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T66 = primitive_cast_raw_as_integer(T65);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T67_0 = T66;
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T63_0 = T67_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T67_0);
        primitive_type_check(T63_0, &KLbyteGVKe);
        MV_CHECK_TYPE_EPILOGUE();
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T68 = T63_0;
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T70 = primitive_cast_integer_as_raw(T68);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T71 = primitive_machine_word_logxor(ascii_zero_,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T72 = primitive_machine_word_subtract_signal_overflow(T70,T71);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T75 = primitive_machine_word_logxor(T72,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T76 = primitive_machine_word_add_signal_overflow(T57,T75);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T77 = primitive_cast_raw_as_integer(T76);
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      result_ = T77;
      // /opt/opendylan-2013.1/sources/io/format.dylan:245
      T78 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/io/format.dylan:245
      primitive_type_check(T74, &KLbyteGVKe);
      T7 = T74;
      // /opt/opendylan-2013.1/sources/io/format.dylan:250
      T73 = primitive_cast_integer_as_raw(T7);
      // /opt/opendylan-2013.1/sources/io/format.dylan:245
      i_T = T78;
      len_T = len_;
      ascii_zero_T = T73;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
    // /opt/opendylan-2013.1/sources/io/format.dylan:252
    T19 = result_;
    // /opt/opendylan-2013.1/sources/io/format.dylan:252
    T79 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/io/format.dylan:252
    T80 = primitive_machine_word_equalQ(T79,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:252
    if (T80 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:253
      T12 = indexF11;
      // /opt/opendylan-2013.1/sources/io/format.dylan:253
      T81_0 = &KPfalseVKi;
      T81_1 = T12;
      T10_0 = T81_0;
      T10_1 = T81_1;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:255
      if (negativeQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T18 = result_;
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T82 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T83 = primitive_machine_word_logxor(T82,1);
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T84 = primitive_machine_word_negative_signal_overflow(T83);
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T85 = primitive_machine_word_logior(T84,1);
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T86 = primitive_cast_raw_as_integer(T85);
        T9 = T86;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:255
        T17 = result_;
        T9 = T17;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:255
      // /opt/opendylan-2013.1/sources/io/format.dylan:255
      T87_0 = T9;
      T87_1 = T38;
      T10_0 = T87_0;
      T10_1 = T87_1;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:252
    // /opt/opendylan-2013.1/sources/io/format.dylan:245
  // /opt/opendylan-2013.1/sources/io/format.dylan:239
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D Kdo_dispatchYformat_internalsVioMM0I (D char_, D stream_, D arg_) {
  D UtmpF4;
  D UtmpF5;
  D T6;
  D T7_0;
  D Pold_valueP_;
  D T9;
  D T10_0;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  D T16_0;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21_0;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29_0;
  D T30_0;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  _KLsimple_object_vectorGVKd_1 T46 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T47;
  _KLsimple_object_vectorGVKd_1 T48 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T49_0;

  // /opt/opendylan-2013.1/sources/io/format.dylan:197
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  T31 = primitive_idQ(char_,C('s'));
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  if (T31 != &KPfalseVKi) {
    UtmpF4 = T31;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    T32 = primitive_idQ(char_,C('S'));
    UtmpF4 = T32;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  if (UtmpF4 != &KPfalseVKi) {
    UtmpF5 = UtmpF4;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    T33 = primitive_idQ(char_,C('c'));
    UtmpF5 = T33;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  if (UtmpF5 != &KPfalseVKi) {
    T6 = UtmpF5;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    T34 = primitive_idQ(char_,C('C'));
    T6 = T34;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:201
    CONGRUENT_CALL_PROLOG(&Kprint_messageYformatVio, 2);
    CONGRUENT_CALL2(arg_, stream_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:202
    T7_0 = &KPtrueVKi;
    T30_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    T35 = primitive_idQ(char_,C('='));
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:204
      Pold_valueP_ = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
      // /opt/opendylan-2013.1/sources/io/format.dylan:204
      ENTER_UNWIND_FRAME(T9);
      if (!nlx_setjmp(FRAME_DEST(T9))) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:204
        primitive_write_thread_variable(Tprint_escapeQTYprintVio, &KPtrueVKi);
        // /opt/opendylan-2013.1/sources/io/format.dylan:205
        CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
        CONGRUENT_CALL2(arg_, stream_);
        // /opt/opendylan-2013.1/sources/io/format.dylan:204
        FALL_THROUGH_UNWIND(&KPfalseVKi);
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:204
      primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valueP_);
      // /opt/opendylan-2013.1/sources/io/format.dylan:204
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/io/format.dylan:207
      T10_0 = &KPtrueVKi;
      T29_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:199
      T36 = primitive_idQ(char_,C('d'));
      // /opt/opendylan-2013.1/sources/io/format.dylan:199
      if (T36 != &KPfalseVKi) {
        T11 = T36;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        T37 = primitive_idQ(char_,C('D'));
        T11 = T37;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:199
      // /opt/opendylan-2013.1/sources/io/format.dylan:199
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:209
        ENGINE_NODE_CALL_PROLOG(&Kformat_integerYformat_internalsVio, &K22, 3);
        ENGINE_NODE_CALL3(&K22, arg_, (D) 41, stream_);
        // /opt/opendylan-2013.1/sources/io/format.dylan:210
        T12_0 = &KPtrueVKi;
        T28_0 = T12_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        T38 = primitive_idQ(char_,C('b'));
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        if (T38 != &KPfalseVKi) {
          T13 = T38;
        } else {
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          T39 = primitive_idQ(char_,C('B'));
          T13 = T39;
        }
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/format.dylan:212
          ENGINE_NODE_CALL_PROLOG(&Kformat_integerYformat_internalsVio, &K24, 3);
          ENGINE_NODE_CALL3(&K24, arg_, (D) 9, stream_);
          // /opt/opendylan-2013.1/sources/io/format.dylan:213
          T14_0 = &KPtrueVKi;
          T27_0 = T14_0;
        } else {
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          T40 = primitive_idQ(char_,C('o'));
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          if (T40 != &KPfalseVKi) {
            T15 = T40;
          } else {
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            T41 = primitive_idQ(char_,C('O'));
            T15 = T41;
          }
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          if (T15 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/format.dylan:215
            ENGINE_NODE_CALL_PROLOG(&Kformat_integerYformat_internalsVio, &K25, 3);
            ENGINE_NODE_CALL3(&K25, arg_, (D) 33, stream_);
            // /opt/opendylan-2013.1/sources/io/format.dylan:216
            T16_0 = &KPtrueVKi;
            T26_0 = T16_0;
          } else {
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            T42 = primitive_idQ(char_,C('x'));
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            if (T42 != &KPfalseVKi) {
              T17 = T42;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              T43 = primitive_idQ(char_,C('X'));
              T17 = T43;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            if (T17 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:218
              ENGINE_NODE_CALL_PROLOG(&Kformat_integerYformat_internalsVio, &K26, 3);
              ENGINE_NODE_CALL3(&K26, arg_, (D) 65, stream_);
              // /opt/opendylan-2013.1/sources/io/format.dylan:219
              T18_0 = &KPtrueVKi;
              T25_0 = T18_0;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              T44 = primitive_idQ(char_,C('m'));
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              if (T44 != &KPfalseVKi) {
                T19 = T44;
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:199
                T45 = primitive_idQ(char_,C('M'));
                T19 = T45;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              if (T19 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:221
                T46.vector_element_[0] = stream_;
                // /opt/opendylan-2013.1/sources/io/format.dylan:221
                T20 = KlistVKdI(&T46);
                // /opt/opendylan-2013.1/sources/io/format.dylan:221
                CALL2(&KapplyVKd, arg_, T20);
                // /opt/opendylan-2013.1/sources/io/format.dylan:222
                T21_0 = &KPtrueVKi;
                T24_0 = T21_0;
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:199
                T47 = primitive_idQ(char_,C('%'));
                // /opt/opendylan-2013.1/sources/io/format.dylan:199
                if (T47 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/format.dylan:224
                  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
                  CONGRUENT_CALL2(stream_, C('%'));
                  // /opt/opendylan-2013.1/sources/io/format.dylan:225
                  T22_0 = &KPfalseVKi;
                  T23_0 = T22_0;
                } else {
                  // /opt/opendylan-2013.1/sources/io/format.dylan:227
                  T48.vector_element_[0] = char_;
                  // /opt/opendylan-2013.1/sources/io/format.dylan:227
                  T49_0 = KerrorVKdMM1I(&K27, &T48);
                  T23_0 = T49_0;
                }
                // /opt/opendylan-2013.1/sources/io/format.dylan:199
                T24_0 = T23_0;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:199
              T25_0 = T24_0;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:199
            T26_0 = T25_0;
          }
          // /opt/opendylan-2013.1/sources/io/format.dylan:199
          T27_0 = T26_0;
        }
        // /opt/opendylan-2013.1/sources/io/format.dylan:199
        T28_0 = T27_0;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:199
      T29_0 = T28_0;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:199
    T30_0 = T29_0;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:199
  // /opt/opendylan-2013.1/sources/io/format.dylan:197
  MV_SET_COUNT(1);
  return(T30_0);
}

D KformatYformatVioMM0I (D stream_, D control_string_, D args_) {
  volatile D T4;
  volatile D exitPexit_54_;
  volatile D T6;
  volatile DWORD i_T, i_;
  volatile D Utmp_;
  volatile D T9;
  volatile D T10_0;
  volatile D T10_1;
  volatile D T11_0;
  volatile D T11_1;
  volatile D T12_0;
  volatile D T12_1;
  volatile D field_;
  volatile D field_spec_end_;
  volatile D T15;
  volatile D T16;
  volatile D output_;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D start_;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D arg_i_;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile DWORD T40;
  volatile DWORD T41;
  volatile D T42;
  volatile D T43;
  volatile D T44_0;
  volatile D T45;
  volatile DBCHR T46;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile DWORD T50;
  volatile D T51;
  volatile D T52;
  volatile D T53_0;
  volatile D T54;
  volatile DBCHR T55;
  volatile D T56;
  volatile D T57;
  volatile D T58;
  volatile D T59;
  volatile DWORD T60;
  volatile D T61;
  volatile _KLsimple_object_vectorGVKd_4 T62 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T63;
  volatile DWORD T64;
  volatile D T65;
  volatile DWORD T66;
  volatile DWORD T67;
  volatile D T68;
  volatile D T69_0;
  volatile D T70;
  volatile DBCHR T71;
  volatile D T72;
  volatile D T73;
  volatile D T74;
  volatile D T75;
  volatile D T76_0;
  volatile DWORD T77;
  volatile D T78;
  volatile DBCHR T79;
  volatile D T80;
  volatile DBCHR T81;
  volatile D T82_0;
  volatile DWORD T83;
  volatile DWORD T84;
  volatile D T85;
  volatile D T86_0;
  volatile D T87;
  volatile DSINT T88;
  volatile D T89;
  volatile D T90;
  volatile D T91;
  volatile D T92;
  volatile D T93_0;
  volatile _KLsimple_object_vectorGVKd_6 T94 = {&KLsimple_object_vectorGVKdW, (D) 25};
  volatile D T95;
  volatile DWORD T96;
  volatile DWORD T97;
  volatile D T98;
  volatile D T99;
  volatile D T100;
  volatile DWORD T101;
  volatile DWORD T102;
  volatile DWORD T103;
  volatile DWORD T104;
  volatile DWORD T105;
  volatile DWORD T106;
  volatile DWORD T107;
  volatile D T108;
  volatile D T109;
  volatile DWORD T110;
  volatile D T111;
  volatile D T112;
  volatile D T113;
  volatile D T114_0;
  volatile DWORD T115;
  volatile D T116;
  volatile DBCHR T117;
  volatile D T118;
  volatile D T119;
  volatile D T120;
  volatile D T121;
  volatile DWORD T122;
  volatile DWORD T123;
  volatile D T124;
  volatile DWORD T125;
  volatile DWORD T126;
  volatile D T127;

  // /opt/opendylan-2013.1/sources/io/format.dylan:120
  // /opt/opendylan-2013.1/sources/io/format.dylan:123
  T39 = SLOT_VALUE_INITD(control_string_, 0);
  // /opt/opendylan-2013.1/sources/io/format.dylan:124
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:124
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:125
    ENTER_EXIT_FRAME(exitPexit_54_);
    if (nlx_setjmp(FRAME_DEST(exitPexit_54_))) {
        T22 = FRAME_RETVAL(exitPexit_54_);
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:126
      start_ = (D) 1;
      // /opt/opendylan-2013.1/sources/io/format.dylan:127
      arg_i_ = (D) 1;
      // /opt/opendylan-2013.1/sources/io/format.dylan:128
    L0: ;
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        T24 = start_;
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        T40 = primitive_cast_integer_as_raw(T24);
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        T41 = primitive_cast_integer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        T42 = primitive_machine_word_less_thanQ(T40,T41);
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        if (T42 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/format.dylan:130
          T32 = start_;
          // /opt/opendylan-2013.1/sources/io/format.dylan:132
          T50 = primitive_cast_integer_as_raw(T32);
          // /opt/opendylan-2013.1/sources/io/format.dylan:130
          i_T = T50;
        L1: ;
            // /opt/opendylan-2013.1/sources/io/format.dylan:130
            i_ = i_T;
            // /opt/opendylan-2013.1/sources/io/format.dylan:132
            T51 = primitive_cast_raw_as_integer(i_);
            // /opt/opendylan-2013.1/sources/io/format.dylan:131
            T43 = primitive_idQ(T51,T39);
            // /opt/opendylan-2013.1/sources/io/format.dylan:131
            if (T43 != &KPfalseVKi) {
              Utmp_ = T43;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:132
              T45 = primitive_machine_word_unsigned_less_thanQ(i_,T41);
              // /opt/opendylan-2013.1/sources/io/format.dylan:132
              if (T45 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:132
                T46 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, i_);
                // /opt/opendylan-2013.1/sources/io/format.dylan:132
                T47 = primitive_raw_as_byte_character(T46);
                T49 = T47;
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:132
                T44_0 = Kelement_range_errorVKeI(control_string_, T51);
                // /opt/opendylan-2013.1/sources/io/format.dylan:132
                T48 = T44_0;
                T49 = T48;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:132
              // /opt/opendylan-2013.1/sources/io/format.dylan:132
              T52 = primitive_idQ(T49,C('%'));
              Utmp_ = T52;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:131
            // /opt/opendylan-2013.1/sources/io/format.dylan:131
            if (Utmp_ != &KPfalseVKi) {
              T9 = Utmp_;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:133
              T54 = primitive_machine_word_unsigned_less_thanQ(i_,T41);
              // /opt/opendylan-2013.1/sources/io/format.dylan:133
              if (T54 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:133
                T55 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, i_);
                // /opt/opendylan-2013.1/sources/io/format.dylan:133
                T56 = primitive_raw_as_byte_character(T55);
                T58 = T56;
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:133
                T53_0 = Kelement_range_errorVKeI(control_string_, T51);
                // /opt/opendylan-2013.1/sources/io/format.dylan:133
                T57 = T53_0;
                T58 = T57;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:133
              // /opt/opendylan-2013.1/sources/io/format.dylan:133
              T59 = primitive_idQ(T58,C('\n'));
              T9 = T59;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:131
            // /opt/opendylan-2013.1/sources/io/format.dylan:130
            if (T9 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:130
              T60 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/io/format.dylan:130
              i_T = T60;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:130
            // /opt/opendylan-2013.1/sources/io/format.dylan:135
            T31 = start_;
            // /opt/opendylan-2013.1/sources/io/format.dylan:135
            T61 = primitive_idQ(T51,T31);
            // /opt/opendylan-2013.1/sources/io/format.dylan:135
            if (T61 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:136
              T30 = start_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:136
              T62.vector_element_[0] = &KJstart_;
              T62.vector_element_[1] = T30;
              T62.vector_element_[2] = &KJend_;
              T62.vector_element_[3] = T51;
              // /opt/opendylan-2013.1/sources/io/format.dylan:136
              CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
              CONGRUENT_CALL3(stream_, control_string_, &T62);
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:135
            // /opt/opendylan-2013.1/sources/io/format.dylan:138
            if (T43 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:125
              T63 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
              // /opt/opendylan-2013.1/sources/io/format.dylan:125
              NLX(exitPexit_54_, T63);
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:141
              T64 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/io/format.dylan:141
              T65 = primitive_cast_raw_as_integer(T64);
              // /opt/opendylan-2013.1/sources/io/format.dylan:141
              start_ = T65;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:138
            // /opt/opendylan-2013.1/sources/io/format.dylan:130
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T29 = start_;
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T66 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T67 = primitive_machine_word_subtract_signal_overflow(T66,4);
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T68 = primitive_cast_raw_as_integer(T67);
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T70 = primitive_machine_word_unsigned_less_thanQ(T67,T41);
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          if (T70 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/format.dylan:144
            T71 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T67);
            // /opt/opendylan-2013.1/sources/io/format.dylan:144
            T72 = primitive_raw_as_byte_character(T71);
            T74 = T72;
          } else {
            // /opt/opendylan-2013.1/sources/io/format.dylan:144
            T69_0 = Kelement_range_errorVKeI(control_string_, T68);
            // /opt/opendylan-2013.1/sources/io/format.dylan:144
            T73 = T69_0;
            T74 = T73;
          }
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          T75 = primitive_idQ(T74,C('\n'));
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          if (T75 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/format.dylan:145
            CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
            CONGRUENT_CALL1(stream_);
          } else {
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T28 = start_;
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T77 = primitive_cast_integer_as_raw(T28);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T78 = primitive_machine_word_unsigned_less_thanQ(T77,T41);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            if (T78 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:149
              T79 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T77);
              T81 = T79;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:149
              T76_0 = Kelement_range_errorVKeI(control_string_, T28);
              // /opt/opendylan-2013.1/sources/io/format.dylan:149
              T80 = T76_0;
              // /opt/opendylan-2013.1/sources/io/format.dylan:149
              T88 = primitive_byte_character_as_raw(T80);
              T81 = T88;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T83 = primitive_machine_word_shift_left_signal_overflow(T81,2);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T84 = primitive_machine_word_logior(T83,1);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T85 = primitive_cast_raw_as_integer(T84);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T86_0 = T85;
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T82_0 = T86_0;
            {
              MV_CHECK_TYPE_PROLOGUE(T86_0);
              primitive_type_check(T82_0, &KLbyteGVKe);
              MV_CHECK_TYPE_EPILOGUE();
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T87 = T82_0;
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T89 = KelementVKdMM11I(char_classesYformat_internalsVio, T87, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            T90 = primitive_idQ(T89,IKJdigit_);
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            if (T90 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:150
              T27 = start_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:150
              T10_0 = Kparse_integerYformat_internalsVioMM0I(control_string_, T27);
              T10_1 = MV_GET_ELT(1);
              T12_0 = T10_0;
              T12_1 = T10_1;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:149
              T11_0 = &KPfalseVKi;
              T11_1 = &KPfalseVKi;
              T12_0 = T11_0;
              T12_1 = T11_1;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:149
            // /opt/opendylan-2013.1/sources/io/format.dylan:148
            field_ = T12_0;
            // /opt/opendylan-2013.1/sources/io/format.dylan:148
            field_spec_end_ = T12_1;
            // /opt/opendylan-2013.1/sources/io/format.dylan:152
            if (field_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/format.dylan:53
              T38 = field_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:157
              T91 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 321);
              // /opt/opendylan-2013.1/sources/io/format.dylan:156
              T94.vector_element_[0] = IKJcontents_;
              T94.vector_element_[1] = T91;
              T94.vector_element_[2] = &KJdirection_;
              T94.vector_element_[3] = &KJoutput_;
              T94.vector_element_[4] = IKJstream_lock_;
              T94.vector_element_[5] = &KPfalseVKi;
              // /opt/opendylan-2013.1/sources/io/format.dylan:156
              T93_0 = KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I(&KLbyte_string_streamGYstreamsVio, &T94, &KPunboundVKi, &KLobjectGVKd, &KPfalseVKi, T91);
              // /opt/opendylan-2013.1/sources/io/format.dylan:156
              T92 = T93_0;
              // /opt/opendylan-2013.1/sources/io/format.dylan:160
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T15 = CONGRUENT_CALL3(control_string_, field_spec_end_, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/io/format.dylan:161
              T37 = arg_i_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:161
              T95 = KelementVKdMM11I(args_, T37, &KPempty_vectorVKi, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/io/format.dylan:160
              T16 = CALL3(&Kdo_dispatchYformat_internalsVioMM0, T15, T92, T95);
              // /opt/opendylan-2013.1/sources/io/format.dylan:160
              if (T16 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:162
                T36 = arg_i_;
                // /opt/opendylan-2013.1/sources/io/format.dylan:162
                T96 = primitive_cast_integer_as_raw(T36);
                // /opt/opendylan-2013.1/sources/io/format.dylan:162
                T97 = primitive_machine_word_add_signal_overflow(T96,4);
                // /opt/opendylan-2013.1/sources/io/format.dylan:162
                T98 = primitive_cast_raw_as_integer(T97);
                // /opt/opendylan-2013.1/sources/io/format.dylan:162
                arg_i_ = T98;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:160
              // /opt/opendylan-2013.1/sources/io/format.dylan:164
              T99 = Kstream_contentsYstreams_protocolVcommon_dylanMioM0I(T92, &KPempty_vectorVKi, &KPtrueVKi);
              // /opt/opendylan-2013.1/sources/io/format.dylan:160
              primitive_type_check(T99, &KLbyte_stringGVKd);
              output_ = T99;
              // /opt/opendylan-2013.1/sources/io/format.dylan:165
              T100 = SLOT_VALUE_INITD(output_, 0);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T101 = primitive_cast_integer_as_raw(T38);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T102 = primitive_machine_word_logxor(T101,1);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T103 = primitive_machine_word_abs_signal_overflow(T102);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T104 = primitive_machine_word_logior(T103,1);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T105 = primitive_cast_integer_as_raw(T100);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T106 = primitive_machine_word_logxor(T105,1);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T107 = primitive_machine_word_subtract_signal_overflow(T104,T106);
              // /opt/opendylan-2013.1/sources/io/format.dylan:166
              T108 = primitive_cast_raw_as_integer(T107);
              // /opt/opendylan-2013.1/sources/io/format.dylan:168
              T109 = primitive_machine_word_less_thanQ(T107,1);
              // /opt/opendylan-2013.1/sources/io/format.dylan:167
              if (T109 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:169
                CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                CONGRUENT_CALL3(stream_, output_, &KPempty_vectorVKi);
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:170
                T110 = primitive_cast_integer_as_raw(T38);
                // /opt/opendylan-2013.1/sources/io/format.dylan:170
                T111 = primitive_machine_word_less_thanQ(1,T110);
                // /opt/opendylan-2013.1/sources/io/format.dylan:167
                if (T111 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/format.dylan:171
                  T112 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T108);
                  // /opt/opendylan-2013.1/sources/io/format.dylan:171
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, T112, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/format.dylan:172
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, output_, &KPempty_vectorVKi);
                } else {
                  // /opt/opendylan-2013.1/sources/io/format.dylan:174
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, output_, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/format.dylan:175
                  T113 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T108);
                  // /opt/opendylan-2013.1/sources/io/format.dylan:175
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, T113, &KPempty_vectorVKi);
                }
                // /opt/opendylan-2013.1/sources/io/format.dylan:167
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:167
              // /opt/opendylan-2013.1/sources/io/format.dylan:177
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T18 = CONGRUENT_CALL2(field_spec_end_, (D) 5);
              // /opt/opendylan-2013.1/sources/io/format.dylan:177
              primitive_type_check(T18, &KLintegerGVKd);
              T19 = T18;
              // /opt/opendylan-2013.1/sources/io/format.dylan:177
              start_ = T19;
            } else {
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              T26 = start_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              T115 = primitive_cast_integer_as_raw(T26);
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              T116 = primitive_machine_word_unsigned_less_thanQ(T115,T41);
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              if (T116 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:179
                T117 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T115);
                // /opt/opendylan-2013.1/sources/io/format.dylan:179
                T118 = primitive_raw_as_byte_character(T117);
                T120 = T118;
              } else {
                // /opt/opendylan-2013.1/sources/io/format.dylan:179
                T114_0 = Kelement_range_errorVKeI(control_string_, T26);
                // /opt/opendylan-2013.1/sources/io/format.dylan:179
                T119 = T114_0;
                T120 = T119;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              // /opt/opendylan-2013.1/sources/io/format.dylan:180
              T35 = arg_i_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:180
              T121 = KelementVKdMM11I(args_, T35, &KPempty_vectorVKi, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              T20 = Kdo_dispatchYformat_internalsVioMM0I(T120, stream_, T121);
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              if (T20 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/format.dylan:181
                T34 = arg_i_;
                // /opt/opendylan-2013.1/sources/io/format.dylan:181
                T122 = primitive_cast_integer_as_raw(T34);
                // /opt/opendylan-2013.1/sources/io/format.dylan:181
                T123 = primitive_machine_word_add_signal_overflow(T122,4);
                // /opt/opendylan-2013.1/sources/io/format.dylan:181
                T124 = primitive_cast_raw_as_integer(T123);
                // /opt/opendylan-2013.1/sources/io/format.dylan:181
                arg_i_ = T124;
              }
              // /opt/opendylan-2013.1/sources/io/format.dylan:179
              // /opt/opendylan-2013.1/sources/io/format.dylan:183
              T25 = start_;
              // /opt/opendylan-2013.1/sources/io/format.dylan:183
              T125 = primitive_cast_integer_as_raw(T25);
              // /opt/opendylan-2013.1/sources/io/format.dylan:183
              T126 = primitive_machine_word_add_signal_overflow(T125,4);
              // /opt/opendylan-2013.1/sources/io/format.dylan:183
              T127 = primitive_cast_raw_as_integer(T126);
              // /opt/opendylan-2013.1/sources/io/format.dylan:183
              start_ = T127;
            }
            // /opt/opendylan-2013.1/sources/io/format.dylan:152
          }
          // /opt/opendylan-2013.1/sources/io/format.dylan:144
          // /opt/opendylan-2013.1/sources/io/format.dylan:128
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
        // /opt/opendylan-2013.1/sources/io/format.dylan:128
      // /opt/opendylan-2013.1/sources/io/format.dylan:128
      T21 = &KPfalseVKi;
      MV_SET_COUNT(0);
      // /opt/opendylan-2013.1/sources/io/format.dylan:125
    T22 = T21;
      /* invalidate exitPexit_54_ */
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:125
    // /opt/opendylan-2013.1/sources/io/format.dylan:124
    FALL_THROUGH_UNWIND(T22);
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:124
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:124
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/format.dylan:120
  MV_SET_COUNT(0);
  return(T22);
}

D Kformat_integerYformat_internalsVioMM0I (D arg_, D radix_, D stream_) {
  D T4;

  // /opt/opendylan-2013.1/sources/io/format.dylan:268
  // /opt/opendylan-2013.1/sources/io/format.dylan:271
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  T4 = CONGRUENT_CALL3(arg_, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/format.dylan:268
  MV_SET_COUNT(0);
  return(T4);
}

D Kformat_integerYformat_internalsVioMM1I (D arg_, D radix_, D stream_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15_0;
  DWORD T15_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28_0;
  D T29;
  DWORD T30;
  D T31;
  DBCHR T32;
  D T33;
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_1 T36 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T37;
  DWORD T38;
  D T39;
  D T40_0;
  D T41;
  DWORD T42;
  D T43;
  DBCHR T44;
  D T45;
  D T46;
  D T47;

  // /opt/opendylan-2013.1/sources/io/format.dylan:274
  // /opt/opendylan-2013.1/sources/io/format.dylan:292
  T10 = primitive_cast_integer_as_raw(arg_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:292
  T11 = primitive_machine_word_less_thanQ(T10,1);
  // /opt/opendylan-2013.1/sources/io/format.dylan:292
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:293
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    CONGRUENT_CALL2(stream_, C('-'));
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T12 = primitive_machine_word_shift_right(T10,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T14 = primitive_cast_integer_as_raw(radix_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T13 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T15_0 = primitive_machine_word_truncateS_byref(T12,T13,(DWORD*)&T15_1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    quotient_ = T15_0;
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    remainder_ = T15_1;
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T18 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:300
    T20 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:301
    T21 = primitive_machine_word_equalQ(T19,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:301
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T37 = primitive_machine_word_negative_signal_overflow(T20);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T38 = primitive_machine_word_logior(T37,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T39 = primitive_cast_raw_as_integer(T38);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T41 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T42 = primitive_cast_integer_as_raw(T41);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      T43 = primitive_machine_word_unsigned_less_thanQ(T38,T42);
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:304
        T44 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T38);
        // /opt/opendylan-2013.1/sources/io/format.dylan:304
        T45 = primitive_raw_as_byte_character(T44);
        T47 = T45;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:304
        T40_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T39);
        // /opt/opendylan-2013.1/sources/io/format.dylan:304
        T46 = T40_0;
        T47 = T46;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      // /opt/opendylan-2013.1/sources/io/format.dylan:304
      CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
      T6 = CONGRUENT_CALL2(stream_, T47);
      T7 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T22 = primitive_machine_word_negative_signal_overflow(T18);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T23 = primitive_machine_word_logior(T22,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T24 = primitive_cast_raw_as_integer(T23);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T25 = primitive_machine_word_negative_signal_overflow(T20);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T26 = primitive_machine_word_logior(T25,1);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T27 = primitive_cast_raw_as_integer(T26);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T29 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T30 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T31 = primitive_machine_word_unsigned_less_thanQ(T26,T30);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/format.dylan:302
        T32 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T26);
        // /opt/opendylan-2013.1/sources/io/format.dylan:302
        T33 = primitive_raw_as_byte_character(T32);
        T35 = T33;
      } else {
        // /opt/opendylan-2013.1/sources/io/format.dylan:302
        T28_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T27);
        // /opt/opendylan-2013.1/sources/io/format.dylan:302
        T34 = T28_0;
        T35 = T34;
      }
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T36.vector_element_[0] = T35;
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T4 = KlistVKdI(&T36);
      // /opt/opendylan-2013.1/sources/io/format.dylan:302
      T5 = KrepeatF43I(stream_, radix_, T24, T4);
      T7 = T5;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:301
    T9 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:307
    T8 = KrepeatF43I(stream_, radix_, arg_, &KPempty_listVKi);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:292
  // /opt/opendylan-2013.1/sources/io/format.dylan:274
  MV_SET_COUNT(0);
  return(T9);
}

D Kformat_integerYformat_internalsVioMM2I (D arg_, D radix_, D stream_) {
  D T4;
  DWORD T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/format.dylan:311
  // /opt/opendylan-2013.1/sources/io/format.dylan:315
  T5 = primitive_cast_integer_as_raw(radix_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:315
  T6 = primitive_machine_word_equalQ(T5,41);
  // /opt/opendylan-2013.1/sources/io/format.dylan:315
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:315
    Kassertion_failureVKiI(&K38, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:315
  // /opt/opendylan-2013.1/sources/io/format.dylan:316
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  T4 = CONGRUENT_CALL3(arg_, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/format.dylan:311
  MV_SET_COUNT(0);
  return(T4);
}

static D KrepeatF43I (D stream_, D radix_, D arg_, D digits_) {
  D T5T, T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12_0;
  DWORD T12_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21_0;
  D T22;
  DWORD T23;
  D T24;
  DBCHR T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T34;
  D T35_0;
  D T36;
  D T37;
  D argF38T, argF38;
  D T39;
  D digitsF40T, digitsF40;
  D T41;

  // /opt/opendylan-2013.1/sources/io/format.dylan:279
  // /opt/opendylan-2013.1/sources/io/format.dylan:288
  argF38T = arg_;
  digitsF40T = digits_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/format.dylan:288
    argF38 = argF38T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:288
    primitive_type_check(argF38, &KLintegerGVKd);
    T39 = argF38;
    // /opt/opendylan-2013.1/sources/io/format.dylan:288
    digitsF40 = digitsF40T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:288
    primitive_type_check(digitsF40, &KLlistGVKd);
    T41 = digitsF40;
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T9 = primitive_cast_integer_as_raw(T39);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T8 = primitive_machine_word_shift_right(T9,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T11 = primitive_cast_integer_as_raw(radix_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T10 = primitive_machine_word_shift_right(T11,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T12_0 = primitive_machine_word_floorS_byref(T8,T10,(DWORD*)&T12_1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    quotient_ = T12_0;
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    remainder_ = T12_1;
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T15 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T16 = primitive_machine_word_logior(T15,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T17 = primitive_cast_raw_as_integer(T16);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T18 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:281
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    T22 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    T23 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    T24 = primitive_machine_word_unsigned_less_thanQ(T19,T23);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:282
      T25 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T19);
      // /opt/opendylan-2013.1/sources/io/format.dylan:282
      T26 = primitive_raw_as_byte_character(T25);
      T28 = T26;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:282
      T21_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T20);
      // /opt/opendylan-2013.1/sources/io/format.dylan:282
      T27 = T21_0;
      T28 = T27;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    T29 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    SLOT_VALUE_SETTER(T28, T29, 0);
    // /opt/opendylan-2013.1/sources/io/format.dylan:282
    SLOT_VALUE_SETTER(T41, T29, 1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:283
    T30 = primitive_machine_word_equalQ(T16,1);
    // /opt/opendylan-2013.1/sources/io/format.dylan:283
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:284
      T5T = T29;
    L1: ;
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
        T5 = T5T;
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
        T31 = primitive_idQ(T5,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
        if (T31 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T32 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/io/format.dylan:285
          CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
          CONGRUENT_CALL2(stream_, T32);
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T34 = SLOT_VALUE_INITD(T5, 1);
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T35_0 = T34;
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T33_0 = T35_0;
          {
            MV_CHECK_TYPE_PROLOGUE(T35_0);
            primitive_type_check(T33_0, &KLlistGVKd);
            MV_CHECK_TYPE_EPILOGUE();
          }
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T36 = T33_0;
          // /opt/opendylan-2013.1/sources/io/format.dylan:284
          T5T = T36;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
        T6 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        // /opt/opendylan-2013.1/sources/io/format.dylan:284
      T7 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/io/format.dylan:288
      argF38T = T17;
      digitsF40T = T29;
      goto L0;
      T7 = T37;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:283
    // /opt/opendylan-2013.1/sources/io/format.dylan:288
  // /opt/opendylan-2013.1/sources/io/format.dylan:279
  return(T7);
}

D Kprint_messageYformatVioMM0I (D object_, D stream_) {
  D Pold_valueP_;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/io/format.dylan:67
  // /opt/opendylan-2013.1/sources/io/format.dylan:69
  Pold_valueP_ = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/format.dylan:69
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:69
    primitive_write_thread_variable(Tprint_escapeQTYprintVio, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/format.dylan:70
    CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
    T5 = CONGRUENT_CALL2(object_, stream_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:69
    FALL_THROUGH_UNWIND(T5);
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:69
  primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valueP_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:69
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/format.dylan:67
  MV_SET_COUNT(0);
  return(T5);
}

D Kprint_messageYformatVioMM1I (D object_, D stream_) {
  D Pold_valueP_;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/io/format.dylan:74
  // /opt/opendylan-2013.1/sources/io/format.dylan:80
  Pold_valueP_ = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/format.dylan:80
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:80
    primitive_write_thread_variable(Tprint_escapeQTYprintVio, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/format.dylan:81
    CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
    T5 = CONGRUENT_CALL2(object_, stream_);
    // /opt/opendylan-2013.1/sources/io/format.dylan:80
    FALL_THROUGH_UNWIND(T5);
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:80
  primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valueP_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:80
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/format.dylan:74
  MV_SET_COUNT(0);
  return(T5);
}

D Kprint_messageYformatVioMM2I (D object_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/format.dylan:85
  // /opt/opendylan-2013.1/sources/io/format.dylan:87
  CONGRUENT_CALL_PROLOG(&Kwrite_textYstreamsVio, 3);
  T3 = CONGRUENT_CALL3(stream_, object_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/format.dylan:85
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_messageYformatVioMM3I (D object_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/format.dylan:90
  // /opt/opendylan-2013.1/sources/io/format.dylan:92
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  T3 = CONGRUENT_CALL2(stream_, object_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:90
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_messageYformatVioMM4I (D object_, D stream_) {
  D T3;
  D T4_0;
  D T5;
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/format.dylan:95
  // /opt/opendylan-2013.1/sources/io/format.dylan:97
  T5 = SLOT_VALUE_INITD(object_, 0);
  // /opt/opendylan-2013.1/sources/io/format.dylan:97
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/io/format.dylan:97
  T4_0 = T6_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T6_0);
    primitive_type_check(T4_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:97
  T7 = T4_0;
  // /opt/opendylan-2013.1/sources/io/format.dylan:97
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, T7, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/format.dylan:95
  MV_SET_COUNT(0);
  return(T3);
}

D Kformat_to_stringYformatVioMM0I (D control_string_, D args_) {
  D T3_0;
  D T4;
  D T5;
  D T6_0;
  _KLsimple_object_vectorGVKd_6 T7 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/format.dylan:46
  // /opt/opendylan-2013.1/sources/io/format.dylan:52
  T4 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 129);
  // /opt/opendylan-2013.1/sources/io/format.dylan:51
  T7.vector_element_[0] = IKJcontents_;
  T7.vector_element_[1] = T4;
  T7.vector_element_[2] = &KJdirection_;
  T7.vector_element_[3] = &KJoutput_;
  T7.vector_element_[4] = IKJstream_lock_;
  T7.vector_element_[5] = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/format.dylan:51
  T6_0 = KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I(&KLbyte_string_streamGYstreamsVio, &T7, &KPunboundVKi, &KLobjectGVKd, &KPfalseVKi, T4);
  // /opt/opendylan-2013.1/sources/io/format.dylan:51
  T5 = T6_0;
  // /opt/opendylan-2013.1/sources/io/format.dylan:53
  KformatYformatVioMM0I(T5, control_string_, args_);
  // /opt/opendylan-2013.1/sources/io/format.dylan:54
  T8_0 = Kstream_contentsYstreams_protocolVcommon_dylanMioM0I(T5, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/io/format.dylan:46
  T3_0 = T8_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T8_0);
    primitive_type_check(T3_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:46
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_format_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdigit_);
    if (T0 != &KJdigit_) {
      IKJdigit_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcontents_);
    if (T0 != &KJcontents_) {
      IKJcontents_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      IKJstream_lock_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_format_for_user () {
{
  D T0;
  D T1_0;
  D T2;

  // /opt/opendylan-2013.1/sources/io/format.dylan:108
  T1_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 1025);
  // /opt/opendylan-2013.1/sources/io/format.dylan:108
  T2 = T1_0;
  // /opt/opendylan-2013.1/sources/io/format.dylan:107
  char_classesYformat_internalsVio = T2;
  // /opt/opendylan-2013.1/sources/io/format.dylan:107
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D i_T, i_;
  D T1;
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/format.dylan:110
  i_T = (D) 193;
L0: ;
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T1 = CONGRUENT_CALL2(i_, (D) 233);
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
    if (T1 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/format.dylan:111
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(IKJdigit_, char_classesYformat_internalsVio, i_);
      // /opt/opendylan-2013.1/sources/io/format.dylan:110
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T2 = CONGRUENT_CALL2(i_, (D) 5);
      // /opt/opendylan-2013.1/sources/io/format.dylan:110
      i_T = T2;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
    T3 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/format.dylan:110
  goto I1;
}
I1:

{
  D T0;
  D T1;
  DWORD T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  T1 = SLOT_VALUE_INITD(char_classesYformat_internalsVio, 0);
  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  T3 = primitive_machine_word_unsigned_less_thanQ(181,T2);
  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format.dylan:113
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(IKJdigit_, char_classesYformat_internalsVio, 1, 181);
  } else {
    // /opt/opendylan-2013.1/sources/io/format.dylan:113
    Kelement_range_errorVKeI(char_classesYformat_internalsVio, (D) 181);
  }
  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  // /opt/opendylan-2013.1/sources/io/format.dylan:113
  T0 = &KPfalseVKi;
  goto I3;
}
I3:

  return;
}


/* eof */
