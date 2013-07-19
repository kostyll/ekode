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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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

#define  define__KLbufferGYstreamsVio(nrepeated) \
  typedef struct { \
    D wrapper; \
    D buffer_next_; \
    D buffer_end_; \
    D buffer_position_; \
    D buffer_dirtyQ_; \
    D buffer_start_; \
    D buffer_on_page_bits_; \
    D buffer_off_page_bits_; \
    D buffer_use_count_; \
    D buffer_owning_stream_; \
    D size_; \
    char buffer_element_[nrepeated+1]; \
  } _KLbufferGYstreamsVio_##nrepeated;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(54);

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D actual_stream_input_buffer_;
  D actual_stream_output_buffer_;
} _KLbuffered_streamGYstreamsVio;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLend_of_stream_errorGYstreams_protocolVcommon_dylan;

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
} _KLsequenceGVKd;


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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLincremental_generic_functionGVKe Kdo_next_output_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_get_output_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kparse_integerYformat_internalsVioMM0I (D, D);
D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJoutput_;
D KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW;
extern _KLsimple_methodGVKe Kdo_dispatchYformat_internalsVioMM0;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D Kstream_contentsYstreams_protocolVcommon_dylanMioM0I (D, D, D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kprint_messageYformatVio;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe Kprint_objectYprintVio;
D KlistVKdI (D);
extern _KLsimple_methodGVKe KapplyVKd;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kassertion_failureVKiI (D, D);
D KprintYprintVioMM0I (D, D, D, D, D, D, D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbuffered_streamGYstreamsVioW;
D Kuninitialized_instanceQ_functionVKiI (D, D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLvalue_classGVKi KLdouble_integerGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_integerGVKeW;
extern _KLsealed_generic_functionGVKe Kcoerce_from_elementYstreams_internalsVio;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsealed_generic_functionGVKe Kcoerce_from_sequenceYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLend_of_stream_errorGYstreams_protocolVcommon_dylanW;
D KsignalVKdMM0I (D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern D char_classesYformat_internalsVio;
extern D Tprint_escapeQTYprintVio;
extern D DdigitsYformat_internalsVio;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLsimple_methodGVKe KformatYformatVioMM1;
D KformatYformatVioMM1I (D, D, D);
static _KLsymbolGVKd KJbytes_;
extern _KLkeyword_methodGVKe Kbuffered_writeYformat_internalsVioMM0;
D Kbuffered_writeYformat_internalsVioMM0I (D, D, D, D, D, D);
static _KLsymbolGVKd KJdigit_;
static _KLsymbolGVKd KJcontents_;
extern _KLsimple_methodGVKe Kbuffered_do_dispatchYformat_internalsVioMM0;
D Kbuffered_do_dispatchYformat_internalsVioMM0I (D, D, D, D);
D Kbuffered_write_elementYformat_internalsVioMM0I (D, D, D);
static _KLbyte_stringGVKd_54 K10;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K11;
extern _KLsealed_generic_functionGVKe Kbuffered_format_integerYformat_internalsVio;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K13;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K14;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K15;
static _KLbyte_stringGVKd_37 K16;
extern _KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM0;
D Kbuffered_format_integerYformat_internalsVioMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM1;
D Kbuffered_format_integerYformat_internalsVioMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM2;
D Kbuffered_format_integerYformat_internalsVioMM2I (D, D, D, D);
static _KLpairGVKd K23;
static _KLpairGVKd K24;
static _KLpairGVKd K25;
static _KLbyte_stringGVKd_23 K26;
static _KLbyte_stringGVKd_32 K27;
static _KLsignatureGVKe K28;
static _KLsimple_object_vectorGVKd_4 K29;
static _KLlimited_integerGVKe K30;
static D KrepeatF32I (D, D, D, D, D);
static _KLsignatureGVKe K33;
static _KLsimple_object_vectorGVKd_4 K34;
static _KLsignatureGVKe K35;
static _KLsimple_object_vectorGVKd_4 K36;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K37;
static _KLsignatureAvaluesGVKi K38;
static _KLsimple_object_vectorGVKd_4 K39;
static _KLbyte_stringGVKd_8 K40;
static _KLbyte_stringGVKd_5 K41;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K42;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_6 K44;
static _KLkeyword_signatureGVKe K45;
static _KLsimple_object_vectorGVKd_4 K46;
static _KLsimple_object_vectorGVKd_3 K47;
static _KLsimple_object_vectorGVKd_2 K48;
static _KLbyte_stringGVKd_5 K49;
static _KLsignatureGVKe K50;
static _KLsimple_object_vectorGVKd_2 K51;

/* Indirection variables */

static D IKJbytes_ = &KJbytes_;
static D IKJdigit_ = &KJdigit_;
static D IKJcontents_ = &KJcontents_;
static D IKJstream_ = &KJstream_;

/* Variables */


/* Objects */

_KLsimple_methodGVKe KformatYformatVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K50,
  &KformatYformatVioMM1I
};

static _KLsymbolGVKd KJbytes_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K49
};

_KLkeyword_methodGVKe Kbuffered_writeYformat_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K45,
  &key_mep_6,
  &Kbuffered_writeYformat_internalsVioMM0I,
  &K46
};

static _KLsymbolGVKd KJdigit_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K41
};

static _KLsymbolGVKd KJcontents_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K40
};

_KLsimple_methodGVKe Kbuffered_do_dispatchYformat_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K38,
  &Kbuffered_do_dispatchYformat_internalsVioMM0I
};

static _KLbyte_stringGVKd_54 K10 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "The %%C format directive only works for characters: %="
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K11 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 917561,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbuffered_format_integerYformat_internalsVio
};

_KLsealed_generic_functionGVKe Kbuffered_format_integerYformat_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 57,
  &K26,
  &K23,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K13 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 917561,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbuffered_format_integerYformat_internalsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K14 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 917561,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbuffered_format_integerYformat_internalsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K15 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 917561,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbuffered_format_integerYformat_internalsVio
};

static _KLbyte_stringGVKd_37 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Unknown format dispatch character, %c"
};

_KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K35,
  &Kbuffered_format_integerYformat_internalsVioMM0I
};

_KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K33,
  &Kbuffered_format_integerYformat_internalsVioMM1I
};

_KLsimple_methodGVKe Kbuffered_format_integerYformat_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K28,
  &Kbuffered_format_integerYformat_internalsVioMM2I
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffered_format_integerYformat_internalsVioMM0,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffered_format_integerYformat_internalsVioMM1,
  &K25
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffered_format_integerYformat_internalsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "buffered-format-integer"
};

static _KLbyte_stringGVKd_32 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Can only print floats in base 10"
};

static _KLsignatureGVKe K28 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K29
};

static _KLsimple_object_vectorGVKd_4 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLfloatGVKd,
  &K30,
  &KLbuffered_streamGYstreamsVio,
  &KLbufferGYstreamsVio
};

static _KLlimited_integerGVKe K30 = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 9,
  (D) 145
};

static _KLsignatureGVKe K33 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K34
};

static _KLsimple_object_vectorGVKd_4 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &K30,
  &KLbuffered_streamGYstreamsVio,
  &KLbufferGYstreamsVio
};

static _KLsignatureGVKe K35 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K36
};

static _KLsimple_object_vectorGVKd_4 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLdouble_integerGVKe,
  &K30,
  &KLbuffered_streamGYstreamsVio,
  &KLbufferGYstreamsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K37 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_from_elementYstreams_internalsVio
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K39,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_characterGVKe,
  &KLbuffered_streamGYstreamsVio,
  &KLbufferGYstreamsVio,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_8 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "contents"
};

static _KLbyte_stringGVKd_5 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "digit"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K42 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 4063289,
  &KPfalseVKi,
  &cache_header_engine_6,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_from_sequenceYstreams_internalsVio
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K44
};

static _KLbyte_stringGVKd_6 K44 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLkeyword_signatureGVKe K45 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K47,
  &K48,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbuffered_streamGYstreamsVio,
  &KLbufferGYstreamsVio,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLbyte_stringGVKd_5 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "bytes"
};

static _KLsignatureGVKe K50 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991625,
  &K51
};

static _KLsimple_object_vectorGVKd_2 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbuffered_streamGYstreamsVio,
  &KLbyte_stringGVKd
};

/* Code */

D KformatYformatVioMM1I (D stream_, D control_string_, D args_) {
  volatile D exitPexit_55_;
  volatile D T5;
  volatile D T6;
  volatile D i_T, i_;
  volatile D T8;
  volatile D T9;
  volatile D Utmp_;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15_0;
  volatile D T15_1;
  volatile D T16_0;
  volatile D T16_1;
  volatile D T17_0;
  volatile D T17_1;
  volatile D field_;
  volatile D field_spec_end_;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D output_len_;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D start_;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile D arg_i_;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43;
  volatile D T44;
  volatile D T45;
  volatile D sb_;
  volatile D T47_0;
  volatile D T48_0;
  volatile D T49;
  volatile D T50;
  volatile D T51;
  volatile DWORD T52;
  volatile DWORD T53;
  volatile D T54;
  volatile _KLsimple_object_vectorGVKd_2 T55 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile _KLsimple_object_vectorGVKd_2 T56 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T57;
  volatile D T58;
  volatile D T59;
  volatile D T60;
  volatile DWORD T61;
  volatile DWORD T62;
  volatile D T63;
  volatile D T64;
  volatile D T65;
  volatile D T66;
  volatile D T67;
  volatile D T68;
  volatile DWORD T69;
  volatile DWORD T70;
  volatile D T71;
  volatile D T72_0;
  volatile D T73;
  volatile DBCHR T74;
  volatile D T75;
  volatile D T76;
  volatile D T77;
  volatile D T78;
  volatile D T79_0;
  volatile DWORD T80;
  volatile D T81;
  volatile DBCHR T82;
  volatile D T83;
  volatile DBCHR T84;
  volatile D T85_0;
  volatile DWORD T86;
  volatile DWORD T87;
  volatile D T88;
  volatile D T89_0;
  volatile D T90;
  volatile DSINT T91;
  volatile D T92;
  volatile D T93;
  volatile D T94;
  volatile D s_;
  volatile D T96_0;
  volatile _KLsimple_object_vectorGVKd_4 T97 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T98;
  volatile DWORD T99;
  volatile DWORD T100;
  volatile D T101;
  volatile D output_;
  volatile DWORD T103;
  volatile DWORD T104;
  volatile DWORD T105;
  volatile DWORD T106;
  volatile DWORD T107;
  volatile DWORD T108;
  volatile DWORD T109;
  volatile D T110;
  volatile D T111;
  volatile DWORD T112;
  volatile D T113;
  volatile D T114;
  volatile D T115;
  volatile D T116_0;
  volatile DWORD T117;
  volatile D T118;
  volatile DBCHR T119;
  volatile D T120;
  volatile D T121;
  volatile D T122;
  volatile D T123;
  volatile DWORD T124;
  volatile DWORD T125;
  volatile D T126;
  volatile DWORD T127;
  volatile DWORD T128;
  volatile D T129;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:49
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:51
  T45 = SLOT_VALUE_INITD(control_string_, 0);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
  ENTER_EXIT_FRAME(exitPexit_55_);
  if (nlx_setjmp(FRAME_DEST(exitPexit_55_))) {
    T28 = FRAME_RETVAL(exitPexit_55_);
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:53
      start_ = (D) 1;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:54
      arg_i_ = (D) 1;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:56
      CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
      CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
      CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
      sb_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
      if (sb_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T49 = sb_;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T50 = SLOT_VALUE_INITD(T49, 0);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T51 = SLOT_VALUE_INITD(T49, 9);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T52 = primitive_cast_integer_as_raw(T50);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T53 = primitive_cast_integer_as_raw(T51);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T54 = primitive_machine_word_less_thanQ(T52,T53);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        if (T54 != &KPfalseVKi) {
          T58 = T49;
        } else {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
          T55.vector_element_[0] = IKJbytes_;
          T55.vector_element_[1] = (D) 5;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
          CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
          T47_0 = CONGRUENT_CALL2(stream_, &T55);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
          T57 = T47_0;
          T58 = T57;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T60 = T58;
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T56.vector_element_[0] = IKJbytes_;
        T56.vector_element_[1] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
        T48_0 = CONGRUENT_CALL2(stream_, &T56);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
        T59 = T48_0;
        T60 = T59;
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:58
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
    L0: ;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        T30 = start_;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        T61 = primitive_cast_integer_as_raw(T30);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        T62 = primitive_cast_integer_as_raw(T45);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        T63 = primitive_machine_word_less_thanQ(T61,T62);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        if (T63 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
          T38 = start_;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
          i_T = T38;
        L1: ;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
            i_ = i_T;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:64
            T64 = primitive_idQ(i_,T45);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:64
            if (T64 != &KPfalseVKi) {
              Utmp_ = T64;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:65
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T9 = CONGRUENT_CALL3(control_string_, i_, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:65
              T65 = primitive_idQ(T9,C('%'));
              Utmp_ = T65;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:64
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:64
            if (Utmp_ != &KPfalseVKi) {
              T12 = Utmp_;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:66
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T11 = CONGRUENT_CALL3(control_string_, i_, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:66
              T66 = primitive_idQ(T11,C('\n'));
              T12 = T66;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:64
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
            if (T12 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T8 = CONGRUENT_CALL2(i_, (D) 5);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
              i_T = T8;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:68
            T37 = start_;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:68
            T67 = primitive_idQ(i_,T37);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:68
            if (T67 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:69
              T36 = start_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:69
              CALL7(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, control_string_, &KJstart_, T36, &KJend_, i_);
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:68
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:71
            if (T64 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
              T68 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
              NLX(exitPexit_55_, T68);
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:74
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T13 = CONGRUENT_CALL2(i_, (D) 5);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:74
              primitive_type_check(T13, &KLintegerGVKd);
              T14 = T13;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:74
              start_ = T14;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:71
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:63
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T35 = start_;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T69 = primitive_cast_integer_as_raw(T35);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T70 = primitive_machine_word_subtract_signal_overflow(T69,4);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T71 = primitive_cast_raw_as_integer(T70);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T73 = primitive_machine_word_unsigned_less_thanQ(T70,T62);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          if (T73 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
            T74 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T70);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
            T75 = primitive_raw_as_byte_character(T74);
            T77 = T75;
          } else {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
            T72_0 = Kelement_range_errorVKeI(control_string_, T71);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
            T76 = T72_0;
            T77 = T76;
          }
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          T78 = primitive_idQ(T77,C('\n'));
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          if (T78 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:78
            CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
            CONGRUENT_CALL1(stream_);
          } else {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T34 = start_;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T80 = primitive_cast_integer_as_raw(T34);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T81 = primitive_machine_word_unsigned_less_thanQ(T80,T62);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            if (T81 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
              T82 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T80);
              T84 = T82;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
              T79_0 = Kelement_range_errorVKeI(control_string_, T34);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
              T83 = T79_0;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
              T91 = primitive_byte_character_as_raw(T83);
              T84 = T91;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T86 = primitive_machine_word_shift_left_signal_overflow(T84,2);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T87 = primitive_machine_word_logior(T86,1);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T88 = primitive_cast_raw_as_integer(T87);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T89_0 = T88;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T85_0 = T89_0;
            {
              MV_CHECK_TYPE_PROLOGUE(T89_0);
              primitive_type_check(T85_0, &KLbyteGVKe);
              MV_CHECK_TYPE_EPILOGUE();
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T90 = T85_0;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T92 = KelementVKdMM11I(char_classesYformat_internalsVio, T90, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            T93 = primitive_idQ(T92,IKJdigit_);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            if (T93 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:83
              T33 = start_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:83
              T15_0 = Kparse_integerYformat_internalsVioMM0I(control_string_, T33);
              T15_1 = MV_GET_ELT(1);
              T17_0 = T15_0;
              T17_1 = T15_1;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
              T16_0 = &KPfalseVKi;
              T16_1 = &KPfalseVKi;
              T17_0 = T16_0;
              T17_1 = T16_1;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:82
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:81
            field_ = T17_0;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:81
            field_spec_end_ = T17_1;
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:85
            if (field_ != &KPfalseVKi) {
              T44 = field_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:89
              T94 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 321);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:88
              T97.vector_element_[0] = IKJcontents_;
              T97.vector_element_[1] = T94;
              T97.vector_element_[2] = &KJdirection_;
              T97.vector_element_[3] = &KJoutput_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:88
              T96_0 = KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I(&KLbyte_string_streamGYstreamsVio, &T97, &KPunboundVKi, &KLobjectGVKd, &KPunboundVKi, T94);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:88
              s_ = T96_0;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:91
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T20 = CONGRUENT_CALL3(control_string_, field_spec_end_, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:92
              T43 = arg_i_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:92
              T98 = KelementVKdMM11I(args_, T43, &KPempty_vectorVKi, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:91
              T21 = CALL3(&Kdo_dispatchYformat_internalsVioMM0, T20, s_, T98);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:91
              if (T21 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:93
                T42 = arg_i_;
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:93
                T99 = primitive_cast_integer_as_raw(T42);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:93
                T100 = primitive_machine_word_add_signal_overflow(T99,4);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:93
                T101 = primitive_cast_raw_as_integer(T100);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:93
                arg_i_ = T101;
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:91
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:95
              output_ = Kstream_contentsYstreams_protocolVcommon_dylanMioM0I(s_, &KPempty_vectorVKi, &KPtrueVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:96
              CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
              T22 = CONGRUENT_CALL1(output_);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:96
              primitive_type_check(T22, &KLintegerGVKd);
              output_len_ = T22;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T103 = primitive_cast_integer_as_raw(T44);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T104 = primitive_machine_word_logxor(T103,1);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T105 = primitive_machine_word_abs_signal_overflow(T104);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T106 = primitive_machine_word_logior(T105,1);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T107 = primitive_cast_integer_as_raw(output_len_);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T108 = primitive_machine_word_logxor(T107,1);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T109 = primitive_machine_word_subtract_signal_overflow(T106,T108);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:97
              T110 = primitive_cast_raw_as_integer(T109);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:99
              T111 = primitive_machine_word_less_thanQ(T109,1);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:98
              if (T111 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:100
                CALL3(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, output_);
              } else {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:101
                T112 = primitive_cast_integer_as_raw(T44);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:101
                T113 = primitive_machine_word_less_thanQ(1,T112);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:98
                if (T113 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:102
                  T114 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T110);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:102
                  CALL3(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, T114);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:103
                  CALL3(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, output_);
                } else {
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:105
                  CALL3(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, output_);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:106
                  T115 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T110);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:106
                  CALL3(&Kbuffered_writeYformat_internalsVioMM0, stream_, T60, T115);
                }
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:98
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:98
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:108
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T24 = CONGRUENT_CALL2(field_spec_end_, (D) 5);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:108
              primitive_type_check(T24, &KLintegerGVKd);
              T25 = T24;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:108
              start_ = T25;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              T32 = start_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              T117 = primitive_cast_integer_as_raw(T32);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              T118 = primitive_machine_word_unsigned_less_thanQ(T117,T62);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              if (T118 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
                T119 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(control_string_, 1, T117);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
                T120 = primitive_raw_as_byte_character(T119);
                T122 = T120;
              } else {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
                T116_0 = Kelement_range_errorVKeI(control_string_, T32);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
                T121 = T116_0;
                T122 = T121;
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:111
              T41 = arg_i_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:111
              T123 = KelementVKdMM11I(args_, T41, &KPempty_vectorVKi, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              T26 = CALL4(&Kbuffered_do_dispatchYformat_internalsVioMM0, T122, stream_, T60, T123);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              if (T26 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:112
                T40 = arg_i_;
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:112
                T124 = primitive_cast_integer_as_raw(T40);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:112
                T125 = primitive_machine_word_add_signal_overflow(T124,4);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:112
                T126 = primitive_cast_raw_as_integer(T125);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:112
                arg_i_ = T126;
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:110
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:114
              T31 = start_;
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:114
              T127 = primitive_cast_integer_as_raw(T31);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:114
              T128 = primitive_machine_word_add_signal_overflow(T127,4);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:114
              T129 = primitive_cast_raw_as_integer(T128);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:114
              start_ = T129;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:85
          }
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:77
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:61
      T27 = &KPfalseVKi;
      MV_SET_COUNT(0);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
      FALL_THROUGH_UNWIND(T27);
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:119
    CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
  T28 = T27;
    /* invalidate exitPexit_55_ */
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:52
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:49
  MV_SET_COUNT(0);
  return(T28);
}

D Kbuffered_writeYformat_internalsVioMM0I (D stream_, D sb_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D T7;
  D UendF8;
  D iF9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D sbF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D iF24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  D T54;
  D T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64;
  D T65;
  DWORD T66;
  D T67;
  DWORD T68;
  D T69;
  _KLsimple_object_vectorGVKd_2 T70 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T71;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
  sbF16 = sb_;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
  T30 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    UendF8 = T7;
  } else {
    UendF8 = Uend_;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:28
  primitive_type_check(Ustart_, &KLintegerGVKd);
  iF9 = Ustart_;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:28
  iF24 = iF9;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:29
  T31 = primitive_idQ(UendF8,DunsuppliedYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:29
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:29
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T10 = CONGRUENT_CALL1(elements_);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:29
    primitive_type_check(T10, &KLintegerGVKd);
    T32 = T10;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    T36 = primitive_cast_integer_as_raw(T32);
    T11 = T36;
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
    primitive_type_check(UendF8, &KLintegerGVKd);
    T33 = UendF8;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    T37 = primitive_cast_integer_as_raw(T33);
    T11 = T37;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:29
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
L0: ;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    sbF16;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    T26 = iF24;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    T34 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    T35 = primitive_machine_word_less_thanQ(T34,T11);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:31
      T23 = sbF16;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:31
      T38 = SLOT_VALUE_INITD(T23, 0);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:32
      T22 = sbF16;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:32
      T39 = SLOT_VALUE_INITD(T22, 9);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:33
      T40 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:33
      T41 = primitive_cast_integer_as_raw(T39);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:33
      T42 = primitive_machine_word_less_thanQ(T40,T41);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:33
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T43 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T44 = primitive_machine_word_logxor(T43,1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T45 = primitive_machine_word_subtract_signal_overflow(T41,T44);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T29 = iF24;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T46 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T47 = primitive_machine_word_logxor(T46,1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T48 = primitive_machine_word_subtract_signal_overflow(T11,T47);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        T50 = primitive_machine_word_less_thanQ(T45,T48);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        if (T50 != &KPfalseVKi) {
          T49 = T45;
        } else {
          T49 = T48;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:36
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T55 = primitive_cast_raw_as_integer(T49);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:37
        T21 = sbF16;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:37
        T28 = iF24;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:37
        ENGINE_NODE_CALL_PROLOG(&Kcoerce_from_sequenceYstreams_internalsVio, &K42, 6);
        ENGINE_NODE_CALL6(&K42, stream_, T21, T38, elements_, T28, T55);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:38
        T20 = sbF16;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:38
        SLOT_VALUE_SETTER(&KPtrueVKi, T20, 3);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T27 = iF24;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T51 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T52 = primitive_machine_word_logxor(T49,1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T53 = primitive_machine_word_add_signal_overflow(T51,T52);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        T54 = primitive_cast_raw_as_integer(T53);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:39
        iF24 = T54;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        T56 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        T57 = primitive_machine_word_logxor(T49,1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        T58 = primitive_machine_word_add_signal_overflow(T56,T57);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        T59 = primitive_cast_raw_as_integer(T58);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        T19 = sbF16;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:40
        SLOT_VALUE_SETTER(T59, T19, 0);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T60 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T61 = primitive_machine_word_logxor(T49,1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T62 = primitive_machine_word_add_signal_overflow(T60,T61);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T63 = primitive_cast_raw_as_integer(T62);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T18 = sbF16;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T64 = SLOT_VALUE_INITD(T18, 1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T66 = primitive_cast_integer_as_raw(T64);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T67 = primitive_machine_word_less_thanQ(T66,T62);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        if (T67 != &KPfalseVKi) {
          T65 = T63;
        } else {
          T65 = T64;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        T17 = sbF16;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:41
        SLOT_VALUE_SETTER(T65, T17, 1);
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:34
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T12 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:34
        sbF16 = T12;
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:33
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:30
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
  T25 = iF24;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
  T68 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
  T69 = primitive_machine_word_less_thanQ(T68,T11);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
  if (T69 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:45
    T70.vector_element_[0] = IKJstream_;
    T70.vector_element_[1] = stream_;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:45
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(&KLend_of_stream_errorGYstreams_protocolVcommon_dylan, &T70);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:45
    T71 = KsignalVKdMM0I(T13, &KPempty_vectorVKi);
    T15 = T71;
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
    T14 = &KPfalseVKi;
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:44
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:25
  MV_SET_COUNT(0);
  return(T15);
}

D Kbuffered_do_dispatchYformat_internalsVioMM0I (D char_, D stream_, D sb_, D arg_) {
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D Pold_valueP_;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20;
  D T21;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29_0;
  D T30_0;
  D T31_0;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  _KLsimple_object_vectorGVKd_1 T41 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_1 T53 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T54;
  _KLsimple_object_vectorGVKd_1 T55 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T56_0;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:123
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
  T34 = primitive_idQ(char_,C('s'));
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
  if (T34 != &KPfalseVKi) {
    T5 = T34;
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    T35 = primitive_idQ(char_,C('S'));
    T5 = T35;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:128
    T36 = primitive_instanceQ(arg_,&KLbyte_stringGVKd);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:128
    if (T36 != &KPfalseVKi) {
      T33 = arg_;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:131
      Kbuffered_writeYformat_internalsVioMM0I(stream_, sb_, T33, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:133
      CONGRUENT_CALL_PROLOG(&Kprint_messageYformatVio, 2);
      CONGRUENT_CALL2(arg_, stream_);
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:128
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:135
    T6_0 = &KPtrueVKi;
    T32_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    T37 = primitive_idQ(char_,C('c'));
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    if (T37 != &KPfalseVKi) {
      T7 = T37;
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
      T38 = primitive_idQ(char_,C('C'));
      T7 = T38;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
      T39 = primitive_instanceQ(arg_,&KLbyte_characterGVKe);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:139
        Kbuffered_write_elementYformat_internalsVioMM0I(stream_, sb_, arg_);
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
        T40 = primitive_instanceQ(arg_,&KLcharacterGVKd);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
        if (T40 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:141
          CONGRUENT_CALL_PROLOG(&Kprint_messageYformatVio, 2);
          CONGRUENT_CALL2(arg_, stream_);
        } else {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:143
          T41.vector_element_[0] = arg_;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:143
          KerrorVKdMM1I(&K10, &T41);
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:137
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:145
      T8_0 = &KPtrueVKi;
      T31_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
      T42 = primitive_idQ(char_,C('='));
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
        Pold_valueP_ = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
        ENTER_UNWIND_FRAME(T10);
        if (!nlx_setjmp(FRAME_DEST(T10))) {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
          primitive_write_thread_variable(Tprint_escapeQTYprintVio, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:148
          CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
          CONGRUENT_CALL2(arg_, stream_);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
          FALL_THROUGH_UNWIND(&KPfalseVKi);
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
        primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valueP_);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:147
        CONTINUE_UNWIND();
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:150
        T11_0 = &KPtrueVKi;
        T30_0 = T11_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
        T43 = primitive_idQ(char_,C('d'));
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
        if (T43 != &KPfalseVKi) {
          T12 = T43;
        } else {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          T44 = primitive_idQ(char_,C('D'));
          T12 = T44;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:152
          ENGINE_NODE_CALL_PROLOG(&Kbuffered_format_integerYformat_internalsVio, &K11, 4);
          ENGINE_NODE_CALL4(&K11, arg_, (D) 41, stream_, sb_);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:153
          T13_0 = &KPtrueVKi;
          T29_0 = T13_0;
        } else {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          T45 = primitive_idQ(char_,C('b'));
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          if (T45 != &KPfalseVKi) {
            T14 = T45;
          } else {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            T46 = primitive_idQ(char_,C('B'));
            T14 = T46;
          }
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          if (T14 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:155
            ENGINE_NODE_CALL_PROLOG(&Kbuffered_format_integerYformat_internalsVio, &K13, 4);
            ENGINE_NODE_CALL4(&K13, arg_, (D) 9, stream_, sb_);
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:156
            T15_0 = &KPtrueVKi;
            T28_0 = T15_0;
          } else {
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            T47 = primitive_idQ(char_,C('o'));
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            if (T47 != &KPfalseVKi) {
              T16 = T47;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              T48 = primitive_idQ(char_,C('O'));
              T16 = T48;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            if (T16 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:158
              ENGINE_NODE_CALL_PROLOG(&Kbuffered_format_integerYformat_internalsVio, &K14, 4);
              ENGINE_NODE_CALL4(&K14, arg_, (D) 33, stream_, sb_);
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:159
              T17_0 = &KPtrueVKi;
              T27_0 = T17_0;
            } else {
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              T49 = primitive_idQ(char_,C('x'));
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              if (T49 != &KPfalseVKi) {
                T18 = T49;
              } else {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                T50 = primitive_idQ(char_,C('X'));
                T18 = T50;
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              if (T18 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:161
                ENGINE_NODE_CALL_PROLOG(&Kbuffered_format_integerYformat_internalsVio, &K15, 4);
                ENGINE_NODE_CALL4(&K15, arg_, (D) 65, stream_, sb_);
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:162
                T19_0 = &KPtrueVKi;
                T26_0 = T19_0;
              } else {
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                T51 = primitive_idQ(char_,C('m'));
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                if (T51 != &KPfalseVKi) {
                  T20 = T51;
                } else {
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                  T52 = primitive_idQ(char_,C('M'));
                  T20 = T52;
                }
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                if (T20 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:164
                  T53.vector_element_[0] = stream_;
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:164
                  T21 = KlistVKdI(&T53);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:164
                  CALL2(&KapplyVKd, arg_, T21);
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:165
                  T22_0 = &KPtrueVKi;
                  T25_0 = T22_0;
                } else {
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                  T54 = primitive_idQ(char_,C('%'));
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                  if (T54 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:167
                    Kbuffered_write_elementYformat_internalsVioMM0I(stream_, sb_, C('%'));
                    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:168
                    T23_0 = &KPfalseVKi;
                    T24_0 = T23_0;
                  } else {
                    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:170
                    T55.vector_element_[0] = char_;
                    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:170
                    T56_0 = KerrorVKdMM1I(&K16, &T55);
                    T24_0 = T56_0;
                  }
                  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                  T25_0 = T24_0;
                }
                // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
                T26_0 = T25_0;
              }
              // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
              T27_0 = T26_0;
            }
            // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
            T28_0 = T27_0;
          }
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
          T29_0 = T28_0;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
        T30_0 = T29_0;
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
      T31_0 = T30_0;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
    T32_0 = T31_0;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:126
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:123
  MV_SET_COUNT(1);
  return(T32_0);
}

D Kbuffered_write_elementYformat_internalsVioMM0I (D stream_, D sb_, D elt_) {
  D T4;
  D T5;
  D sbF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:12
  sbF6 = sb_;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T14 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T15 = SLOT_VALUE_INITD(T14, 0);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T13 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T16 = SLOT_VALUE_INITD(T13, 9);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T17 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T18 = primitive_cast_integer_as_raw(T16);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  T19 = primitive_machine_word_less_thanQ(T17,T18);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  if (T19 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:15
    T20.vector_element_[0] = IKJbytes_;
    T20.vector_element_[1] = (D) 5;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:15
    CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
    T4 = CONGRUENT_CALL2(stream_, &T20);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:15
    sbF6 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:14
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:17
  T12 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:17
  T21 = SLOT_VALUE_INITD(T12, 0);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:18
  T11 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:18
  ENGINE_NODE_CALL_PROLOG(&Kcoerce_from_elementYstreams_internalsVio, &K37, 4);
  ENGINE_NODE_CALL4(&K37, stream_, T11, T21, elt_);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:19
  T10 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:19
  SLOT_VALUE_SETTER(&KPtrueVKi, T10, 3);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:20
  T22 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:20
  T23 = primitive_machine_word_add_signal_overflow(T22,4);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:20
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:20
  T9 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:20
  SLOT_VALUE_SETTER(T24, T9, 0);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T25 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T26 = primitive_machine_word_add_signal_overflow(T25,4);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T27 = primitive_cast_raw_as_integer(T26);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T8 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T28 = SLOT_VALUE_INITD(T8, 1);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T30 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T31 = primitive_machine_word_less_thanQ(T30,T26);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  if (T31 != &KPfalseVKi) {
    T29 = T27;
  } else {
    T29 = T28;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T7 = sbF6;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  SLOT_VALUE_SETTER(T29, T7, 1);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:21
  T5 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:12
  MV_SET_COUNT(0);
  return(T5);
}

D Kbuffered_format_integerYformat_internalsVioMM0I (D arg_, D radix_, D stream_, D sb_) {
  D T5;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:176
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:179
  T5 = KprintYprintVioMM0I(arg_, stream_, &KPempty_vectorVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:176
  MV_SET_COUNT(0);
  return(T5);
}

D Kbuffered_format_integerYformat_internalsVioMM1I (D arg_, D radix_, D stream_, D sb_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16_0;
  DWORD T16_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29_0;
  D T30;
  DWORD T31;
  D T32;
  DBCHR T33;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_1 T37 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T38;
  DWORD T39;
  D T40;
  D T41_0;
  D T42;
  DWORD T43;
  D T44;
  DBCHR T45;
  D T46;
  D T47;
  D T48;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:182
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:198
  T11 = primitive_cast_integer_as_raw(arg_);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:198
  T12 = primitive_machine_word_less_thanQ(T11,1);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:198
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:199
    Kbuffered_write_elementYformat_internalsVioMM0I(stream_, sb_, C('-'));
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T13 = primitive_machine_word_shift_right(T11,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T15 = primitive_cast_integer_as_raw(radix_);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T14 = primitive_machine_word_shift_right(T15,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T16_0 = primitive_machine_word_truncateS_byref(T13,T14,(DWORD*)&T16_1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    quotient_ = T16_0;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    remainder_ = T16_1;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T19 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T20 = primitive_machine_word_logior(T19,1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:206
    T21 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:207
    T22 = primitive_machine_word_equalQ(T20,1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:207
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T38 = primitive_machine_word_negative_signal_overflow(T21);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T39 = primitive_machine_word_logior(T38,1);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T40 = primitive_cast_raw_as_integer(T39);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T42 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T43 = primitive_cast_integer_as_raw(T42);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T44 = primitive_machine_word_unsigned_less_thanQ(T39,T43);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      if (T44 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
        T45 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T39);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
        T46 = primitive_raw_as_byte_character(T45);
        T48 = T46;
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
        T41_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T40);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
        T47 = T41_0;
        T48 = T47;
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:210
      T7 = Kbuffered_write_elementYformat_internalsVioMM0I(stream_, sb_, T48);
      T8 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T23 = primitive_machine_word_negative_signal_overflow(T19);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T24 = primitive_machine_word_logior(T23,1);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T25 = primitive_cast_raw_as_integer(T24);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T26 = primitive_machine_word_negative_signal_overflow(T21);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T27 = primitive_machine_word_logior(T26,1);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T28 = primitive_cast_raw_as_integer(T27);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T30 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T31 = primitive_cast_integer_as_raw(T30);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T32 = primitive_machine_word_unsigned_less_thanQ(T27,T31);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
        T33 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T27);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
        T34 = primitive_raw_as_byte_character(T33);
        T36 = T34;
      } else {
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
        T29_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T28);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
        T35 = T29_0;
        T36 = T35;
      }
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T37.vector_element_[0] = T36;
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T5 = KlistVKdI(&T37);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:208
      T6 = KrepeatF32I(sb_, stream_, radix_, T25, T5);
      T8 = T6;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:207
    T10 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:213
    T9 = KrepeatF32I(sb_, stream_, radix_, arg_, &KPempty_listVKi);
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:198
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:182
  MV_SET_COUNT(0);
  return(T10);
}

D Kbuffered_format_integerYformat_internalsVioMM2I (D arg_, D radix_, D stream_, D buffer_) {
  DWORD T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:217
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:221
  T5 = primitive_cast_integer_as_raw(radix_);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:221
  T6 = primitive_machine_word_equalQ(T5,41);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:221
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:221
    Kassertion_failureVKiI(&K27, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:221
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:222
  T7 = KprintYprintVioMM0I(arg_, stream_, &KPempty_vectorVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:217
  MV_SET_COUNT(0);
  return(T7);
}

static D KrepeatF32I (D sb_, D stream_, D radix_, D arg_, D digits_) {
  D T6T, T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13_0;
  DWORD T13_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22_0;
  D T23;
  DWORD T24;
  D T25;
  DBCHR T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D argF39T, argF39;
  D T40;
  D digitsF41T, digitsF41;
  D T42;

  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:185
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
  argF39T = arg_;
  digitsF41T = digits_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
    argF39 = argF39T;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
    primitive_type_check(argF39, &KLintegerGVKd);
    T40 = argF39;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
    digitsF41 = digitsF41T;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
    primitive_type_check(digitsF41, &KLlistGVKd);
    T42 = digitsF41;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T10 = primitive_cast_integer_as_raw(T40);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T9 = primitive_machine_word_shift_right(T10,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T12 = primitive_cast_integer_as_raw(radix_);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T11 = primitive_machine_word_shift_right(T12,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T13_0 = primitive_machine_word_floorS_byref(T9,T11,(DWORD*)&T13_1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    quotient_ = T13_0;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    remainder_ = T13_1;
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T16 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T19 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T20 = primitive_machine_word_logior(T19,1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:187
    T21 = primitive_cast_raw_as_integer(T20);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    T23 = SLOT_VALUE_INITD(DdigitsYformat_internalsVio, 0);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    T24 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    T25 = primitive_machine_word_unsigned_less_thanQ(T20,T24);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
      T26 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(DdigitsYformat_internalsVio, 1, T20);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
      T27 = primitive_raw_as_byte_character(T26);
      T29 = T27;
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
      T22_0 = Kelement_range_errorVKeI(DdigitsYformat_internalsVio, T21);
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
      T28 = T22_0;
      T29 = T28;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    T30 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    SLOT_VALUE_SETTER(T29, T30, 0);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:188
    SLOT_VALUE_SETTER(T42, T30, 1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:189
    T31 = primitive_machine_word_equalQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:189
    if (T31 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
      T6T = T30;
    L1: ;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
        T6 = T6T;
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
        T32 = primitive_idQ(T6,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
        if (T32 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T33 = SLOT_VALUE_INITD(T6, 0);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:191
          Kbuffered_write_elementYformat_internalsVioMM0I(stream_, sb_, T33);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T35 = SLOT_VALUE_INITD(T6, 1);
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T36_0 = T35;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T34_0 = T36_0;
          {
            MV_CHECK_TYPE_PROLOGUE(T36_0);
            primitive_type_check(T34_0, &KLlistGVKd);
            MV_CHECK_TYPE_EPILOGUE();
          }
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T37 = T34_0;
          // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
          T6T = T37;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
        T7 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:190
      T8 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
      argF39T = T18;
      digitsF41T = T30;
      goto L0;
      T8 = T38;
    }
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:189
    // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:194
  // /opt/opendylan-2013.1/sources/io/buffered-format.dylan:185
  return(T8);
}


/* SYSTEM INIT CODE */

void _Init_io__X_buffered_format_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbytes_);
    if (T0 != &KJbytes_) {
      IKJbytes_ = T0;
    }
  }
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

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      IKJstream_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_buffered_format_for_user () {
  return;
}


/* eof */
