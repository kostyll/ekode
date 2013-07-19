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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(256);
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
} _KLkeyword_signatureGVKe;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(16);

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(3);
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_sequence_;
  D stream_error_count_;
} _KLincomplete_read_errorGYstreams_protocolVcommon_dylan;

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
} _KLsequenceGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KPadd_nonsiblinged_domainVKnI (D, D);
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D KmakeVKdMM33I (D, D, D, D);
D KEEVKdI (D, D);
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe Kdo_next_input_bufferYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kdo_get_input_bufferYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kdo_next_output_bufferYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kdo_get_output_bufferYstreamsVioRD_ioRD_0;
D Kensure_readableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe Kstream_limitYstreamsVio;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLincremental_generic_functionGVKe KAVKd;
D Kcopy_sequenceVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJcount_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLincomplete_read_errorGYstreams_protocolVcommon_dylanW;
D KsignalVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
D Kend_of_stream_valueYstreams_internalsVioI (D, D);
D Kensure_writableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsealed_generic_functionGVKe Kgrow_for_streamYstreams_internalsVio;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLsimple_copy_down_methodGVKi Kwrite_elementYstreams_protocolVcommon_dylanMioM3;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM3I (D, D);
extern _KLkeyword_copy_down_methodGVKi KwriteYstreams_protocolVcommon_dylanMioM3;
D KwriteYstreams_protocolVcommon_dylanMioM3I (D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi Kread_elementYstreams_protocolVcommon_dylanMioM3;
D Kread_elementYstreams_protocolVcommon_dylanMioM3I (D, D, D);
extern _KLkeyword_copy_down_methodGVKi KpeekYstreams_protocolVcommon_dylanMioM3;
D KpeekYstreams_protocolVcommon_dylanMioM3I (D, D, D);
extern _KLkeyword_copy_down_methodGVKi KreadYstreams_protocolVcommon_dylanMioM3;
D KreadYstreams_protocolVcommon_dylanMioM3I (D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi Kread_intoXYstreams_protocolVcommon_dylanMioM3;
D Kread_intoXYstreams_protocolVcommon_dylanMioM3I (D, D, D, D, D, D);
extern _KLstandalone_domainGVKe_1 Kdo_get_output_bufferYstreamsVioRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kdo_next_output_bufferYstreamsVioRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kdo_get_input_bufferYstreamsVioRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kdo_next_input_bufferYstreamsVioRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kdo_release_output_bufferYstreamsVioRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kdo_release_input_bufferYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kread_text_intoXYstreamsVioRD_ioRD_0;
extern _KLkeyword_copy_down_methodGVKi Kread_text_intoXYstreamsVioMM2;
D Kread_text_intoXYstreamsVioMM2I (D, D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi Kwrite_textYstreamsVioMM2;
D Kwrite_textYstreamsVioMM2I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kwrite_textYstreamsVioRD_ioRD_0;
extern _KLkeyword_copy_down_methodGVKi Kread_textYstreamsVioMM1;
D Kread_textYstreamsVioMM1I (D, D, D, D);
extern _KLmethod_domainGVKe Kread_textYstreamsVioRD_ioRD_0;
extern _KLkeyword_copy_down_methodGVKi Kwrite_lineYstreamsVioMM3;
D Kwrite_lineYstreamsVioMM3I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kwrite_lineYstreamsVioRD_ioRD_0;
static _KLkeyword_signatureGVKe K44;
static _KLsimple_object_vectorGVKd_4 K45;
static _KLsimple_object_vectorGVKd_2 K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLsimple_object_vectorGVKd_2 K48;
static _KLkeyword_signatureGVKe K49;
static _KLsimple_object_vectorGVKd_2 K50;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K52;
static _KLsimple_object_vectorGVKd_2 K53;
static _KLsimple_object_vectorGVKd_1 K54;
static _KLsimple_object_vectorGVKd_4 K55;
static _KLkeyword_signatureGVKe K56;
static _KLsimple_object_vectorGVKd_4 K57;
static _KLsimple_object_vectorGVKd_3 K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLsymbolGVKd KJstream_;
static _KLsymbolGVKd KJsequence_;
static _KLbyte_stringGVKd_8 K62;
static _KLbyte_stringGVKd_6 K63;
static _KLkeyword_signatureGVKe K64;
static _KLsimple_object_vectorGVKd_1 K65;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K66;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K67;
static _KLsignatureGVKe K68;
static _KLsimple_object_vectorGVKd_2 K69;

/* Indirection variables */

static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJstream_ = &KJstream_;
static D IKJsequence_ = &KJsequence_;

/* Variables */


/* Objects */

_KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLbyte_stringGVKd
};

_KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 13,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLbyte_stringGVKd
};

_KLsimple_copy_down_methodGVKi Kwrite_elementYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K68,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM3I
};

_KLkeyword_copy_down_methodGVKi KwriteYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K44,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM3I,
  &K45
};

_KLkeyword_copy_down_methodGVKi Kread_elementYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_3,
  &K64,
  &key_mep_3,
  &Kread_elementYstreams_protocolVcommon_dylanMioM3I,
  &K50
};

_KLkeyword_copy_down_methodGVKi KpeekYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_3,
  &K64,
  &key_mep_3,
  &KpeekYstreams_protocolVcommon_dylanMioM3I,
  &K50
};

_KLkeyword_copy_down_methodGVKi KreadYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K49,
  &key_mep_4,
  &KreadYstreams_protocolVcommon_dylanMioM3I,
  &K50
};

_KLkeyword_copy_down_methodGVKi Kread_intoXYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_6,
  &K56,
  &key_mep_6,
  &Kread_intoXYstreams_protocolVcommon_dylanMioM3I,
  &K57
};

_KLstandalone_domainGVKe_1 Kdo_get_output_bufferYstreamsVioRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kdo_get_output_bufferYstreamsVioRD_ioRD_0,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kdo_next_output_bufferYstreamsVioRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kdo_next_output_bufferYstreamsVioRD_ioRD_0,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kdo_get_input_bufferYstreamsVioRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kdo_get_input_bufferYstreamsVioRD_ioRD_0,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kdo_next_input_bufferYstreamsVioRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kdo_next_input_bufferYstreamsVioRD_ioRD_0,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kdo_release_output_bufferYstreamsVioRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kdo_release_input_bufferYstreamsVioRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLmethod_domainGVKe Kread_text_intoXYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kread_text_intoXYstreamsVioMM2
};

_KLkeyword_copy_down_methodGVKi Kread_text_intoXYstreamsVioMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_6,
  &K56,
  &key_mep_6,
  &Kread_text_intoXYstreamsVioMM2I,
  &K57
};

_KLkeyword_copy_down_methodGVKi Kwrite_textYstreamsVioMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K44,
  &key_mep_5,
  &Kwrite_textYstreamsVioMM2I,
  &K55
};

_KLmethod_domainGVKe Kwrite_textYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kwrite_textYstreamsVioMM2
};

_KLkeyword_copy_down_methodGVKi Kread_textYstreamsVioMM1 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K49,
  &key_mep_4,
  &Kread_textYstreamsVioMM1I,
  &K50
};

_KLmethod_domainGVKe Kread_textYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kread_textYstreamsVioMM1
};

_KLkeyword_copy_down_methodGVKi Kwrite_lineYstreamsVioMM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K44,
  &key_mep_5,
  &Kwrite_lineYstreamsVioMM3I,
  &K45
};

_KLmethod_domainGVKe Kwrite_lineYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kwrite_lineYstreamsVioMM3
};

static _KLkeyword_signatureGVKe K44 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K46,
  &K47,
  &K48
};

static _KLsimple_object_vectorGVKd_4 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLbyte_stringGVKd
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K49 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K53,
  &K54,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K52
};

static _KLbyte_stringGVKd_16 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLsimple_object_vectorGVKd_4 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLkeyword_signatureGVKe K56 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K58,
  &K59,
  &K48
};

static _KLsimple_object_vectorGVKd_4 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLbyte_stringGVKd
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K63
};

static _KLsymbolGVKd KJsequence_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K62
};

static _KLbyte_stringGVKd_8 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "sequence"
};

static _KLbyte_stringGVKd_6 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLkeyword_signatureGVKe K64 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K65,
  &K54,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K66 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kgrow_for_streamYstreams_internalsVio
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K67 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kgrow_for_streamYstreams_internalsVio
};

static _KLsignatureGVKe K68 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K69
};

static _KLsimple_object_vectorGVKd_2 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLbyte_characterGVKe
};

/* Code */

D Kwrite_elementYstreams_protocolVcommon_dylanMioM3I (D stream_, D elt_) {
  D pos_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D seq_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  Kensure_writableYstreams_internalsVioI(stream_);
  T16 = SLOT_VALUE_INITD(stream_, 7);
  seq_ = T16;
  T17 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T17, &KLintegerGVKd);
  pos_ = T17;
  T15 = seq_;
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(T15);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T18 = CONGRUENT_CALL2(pos_, T4);
  if (T18 == &KPfalseVKi) {
  L0: ;
      T12 = seq_;
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T6 = CONGRUENT_CALL1(T12);
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T19 = CONGRUENT_CALL2(pos_, T6);
      if (T19 == &KPfalseVKi) {
        T20 = primitive_cast_integer_as_raw(pos_);
        T21 = primitive_machine_word_add_signal_overflow(T20,4);
        T22 = primitive_cast_raw_as_integer(T21);
        T14 = seq_;
        ENGINE_NODE_CALL_PROLOG(&Kgrow_for_streamYstreams_internalsVio, &K67, 2);
        T23 = ENGINE_NODE_CALL2(&K67, T14, T22);
        primitive_type_check(T23, &KLsequenceGVKd);
        T5 = T23;
        seq_ = T5;
        T13 = seq_;
        SLOT_VALUE_SETTER(T13, stream_, 7);
        goto L0;
      }
  }
  T11 = seq_;
  CALL3(&Kelement_setterVKd, elt_, T11, pos_);
  T24 = primitive_cast_integer_as_raw(pos_);
  T25 = primitive_machine_word_add_signal_overflow(T24,4);
  T26 = primitive_cast_raw_as_integer(T25);
  SLOT_VALUE_SETTER(T26, stream_, 5);
  T27 = SLOT_VALUE_INITD(stream_, 6);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T28 = CONGRUENT_CALL2(pos_, T27);
  if (T28 != &KPfalseVKi) {
    T8 = &KPfalseVKi;
    T9 = T8;
  } else {
    T29 = primitive_cast_integer_as_raw(pos_);
    T30 = primitive_machine_word_add_signal_overflow(T29,4);
    T31 = primitive_cast_raw_as_integer(T30);
    SLOT_VALUE_SETTER(T31, stream_, 6);
    T7 = &KPfalseVKi;
    T9 = T7;
  }
  MV_SET_COUNT(0);
  return(T9);
}

D KwriteYstreams_protocolVcommon_dylanMioM3I (D stream_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D pos_;
  D T7;
  D T8;
  D count_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D dst_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34;
  D T35_0;
  D T36;
  D T37;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  Kensure_writableYstreams_internalsVioI(stream_);
  T21 = SLOT_VALUE_INITD(stream_, 7);
  dst_ = T21;
  T22 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T22, &KLintegerGVKd);
  pos_ = T22;
  if (Uend_ != &KPfalseVKi) {
    T7 = Uend_;
  } else {
    T37 = SLOT_VALUE_INITD(elements_, 0);
    T7 = T37;
  }
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T8 = CONGRUENT_CALL2(T7, Ustart_);
  primitive_type_check(T8, &KLintegerGVKd);
  count_ = T8;
  T23 = primitive_cast_integer_as_raw(pos_);
  T24 = primitive_cast_integer_as_raw(count_);
  T25 = primitive_machine_word_logxor(T24,1);
  T26 = primitive_machine_word_add_signal_overflow(T23,T25);
  T27 = primitive_cast_raw_as_integer(T26);
L0: ;
    T18 = dst_;
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T11 = CONGRUENT_CALL1(T18);
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T12 = CONGRUENT_CALL2(T11, T27);
    if (T12 != &KPfalseVKi) {
      T20 = dst_;
      ENGINE_NODE_CALL_PROLOG(&Kgrow_for_streamYstreams_internalsVio, &K66, 2);
      T28 = ENGINE_NODE_CALL2(&K66, T20, T27);
      primitive_type_check(T28, &KLsequenceGVKd);
      T10 = T28;
      dst_ = T10;
      T19 = dst_;
      SLOT_VALUE_SETTER(T19, stream_, 7);
      goto L0;
    }
  T17 = dst_;
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(T17, pos_, elements_, Ustart_, count_);
  T29 = primitive_cast_integer_as_raw(pos_);
  T30 = primitive_cast_integer_as_raw(count_);
  T31 = primitive_machine_word_logxor(T30,1);
  T32 = primitive_machine_word_add_signal_overflow(T29,T31);
  T33 = primitive_cast_raw_as_integer(T32);
  SLOT_VALUE_SETTER(T33, stream_, 5);
  T34 = SLOT_VALUE_INITD(stream_, 6);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T35_0 = CONGRUENT_CALL2(T34, T33);
  T36 = T35_0;
  if (T36 != &KPfalseVKi) {
    SLOT_VALUE_SETTER(T33, stream_, 6);
    T13 = &KPfalseVKi;
    T15 = T13;
  } else {
    T14 = &KPfalseVKi;
    T15 = T14;
  }
  MV_SET_COUNT(0);
  return(T15);
}

D Kread_elementYstreams_protocolVcommon_dylanMioM3I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D pos_;
  D Utmp_;
  DWORD T8;
  D elt_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T13 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T13 != &KPfalseVKi) {
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  Kensure_readableYstreams_internalsVioI(stream_);
  T14 = SLOT_VALUE_INITD(stream_, 7);
  T15 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T15, &KLintegerGVKd);
  pos_ = T15;
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  if (Utmp_ != &KPfalseVKi) {
    T26 = Utmp_;
    primitive_type_check(T26, &KLintegerGVKd);
    T17 = T26;
    T21 = primitive_cast_integer_as_raw(T17);
    T8 = T21;
  } else {
    T16 = SLOT_VALUE_INITD(stream_, 6);
    primitive_type_check(T16, &KLintegerGVKd);
    T18 = T16;
    T22 = primitive_cast_integer_as_raw(T18);
    T8 = T22;
  }
  T19 = primitive_cast_integer_as_raw(pos_);
  T20 = primitive_machine_word_less_thanQ(T19,T8);
  if (T20 != &KPfalseVKi) {
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    elt_ = CONGRUENT_CALL3(T14, pos_, &KPempty_vectorVKi);
    T23 = primitive_cast_integer_as_raw(pos_);
    T24 = primitive_machine_word_add_signal_overflow(T23,4);
    T25 = primitive_cast_raw_as_integer(T24);
    SLOT_VALUE_SETTER(T25, stream_, 5);
    T10_0 = elt_;
    T12_0 = T10_0;
  } else {
    T11_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    T12_0 = T11_0;
  }
  MV_SET_COUNT(1);
  return(T12_0);
}

D KpeekYstreams_protocolVcommon_dylanMioM3I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D pos_;
  D Utmp_;
  DWORD T8;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T12 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T12 != &KPfalseVKi) {
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  Kensure_readableYstreams_internalsVioI(stream_);
  T13 = SLOT_VALUE_INITD(stream_, 7);
  T14 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T14, &KLintegerGVKd);
  pos_ = T14;
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  if (Utmp_ != &KPfalseVKi) {
    T22 = Utmp_;
    primitive_type_check(T22, &KLintegerGVKd);
    T16 = T22;
    T20 = primitive_cast_integer_as_raw(T16);
    T8 = T20;
  } else {
    T15 = SLOT_VALUE_INITD(stream_, 6);
    primitive_type_check(T15, &KLintegerGVKd);
    T17 = T15;
    T21 = primitive_cast_integer_as_raw(T17);
    T8 = T21;
  }
  T18 = primitive_cast_integer_as_raw(pos_);
  T19 = primitive_machine_word_less_thanQ(T18,T8);
  if (T19 != &KPfalseVKi) {
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T9_0 = CONGRUENT_CALL3(T13, pos_, &KPempty_vectorVKi);
    T11_0 = T9_0;
  } else {
    T10_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    T11_0 = T10_0;
  }
  MV_SET_COUNT(1);
  return(T11_0);
}

D KreadYstreams_protocolVcommon_dylanMioM3I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D pos_;
  D Utmp_;
  D T9;
  D T10;
  D src_n_;
  D T12;
  D T13;
  D elements_;
  D T15_0;
  D nF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  _KLsimple_object_vectorGVKd_4 T33 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T34 = {&KLsimple_object_vectorGVKdW, (D) 25};
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  _KLsimple_object_vectorGVKd_4 T40 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  nF16 = n_;
  T20 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T20 != &KPfalseVKi) {
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  Kensure_readableYstreams_internalsVioI(stream_);
  T21 = SLOT_VALUE_INITD(stream_, 7);
  T22 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T22, &KLintegerGVKd);
  pos_ = T22;
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  if (Utmp_ != &KPfalseVKi) {
    T9 = Utmp_;
  } else {
    T23 = SLOT_VALUE_INITD(stream_, 6);
    T9 = T23;
  }
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T10 = CONGRUENT_CALL2(T9, pos_);
  primitive_type_check(T10, &KLintegerGVKd);
  src_n_ = T10;
  T19 = nF16;
  T24 = primitive_cast_integer_as_raw(src_n_);
  T25 = primitive_cast_integer_as_raw(T19);
  T26 = primitive_machine_word_less_thanQ(T24,T25);
  if (T26 != &KPfalseVKi) {
    T27 = primitive_idQ(on_end_of_streamF6,DunsuppliedYcommon_extensionsVcommon_dylan);
    if (T27 != &KPfalseVKi) {
      T28 = primitive_cast_integer_as_raw(pos_);
      T29 = primitive_cast_integer_as_raw(src_n_);
      T30 = primitive_machine_word_logxor(T29,1);
      T31 = primitive_machine_word_add_signal_overflow(T28,T30);
      T32 = primitive_cast_raw_as_integer(T31);
      T33.vector_element_[0] = &KJstart_;
      T33.vector_element_[1] = pos_;
      T33.vector_element_[2] = &KJend_;
      T33.vector_element_[3] = T32;
      CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
      T12 = CONGRUENT_CALL2(T21, &T33);
      T34.vector_element_[0] = IKJstream_;
      T34.vector_element_[1] = stream_;
      T34.vector_element_[2] = &KJcount_;
      T34.vector_element_[3] = src_n_;
      T34.vector_element_[4] = IKJsequence_;
      T34.vector_element_[5] = T12;
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T13 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T34);
      KsignalVKdMM0I(T13, &KPempty_vectorVKi);
    }
    nF16 = src_n_;
  }
  T18 = nF16;
  T35 = primitive_cast_integer_as_raw(pos_);
  T36 = primitive_cast_integer_as_raw(T18);
  T37 = primitive_machine_word_logxor(T36,1);
  T38 = primitive_machine_word_add_signal_overflow(T35,T37);
  T39 = primitive_cast_raw_as_integer(T38);
  T40.vector_element_[0] = &KJstart_;
  T40.vector_element_[1] = pos_;
  T40.vector_element_[2] = &KJend_;
  T40.vector_element_[3] = T39;
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  elements_ = CONGRUENT_CALL2(T21, &T40);
  T17 = nF16;
  T41 = primitive_cast_integer_as_raw(pos_);
  T42 = primitive_cast_integer_as_raw(T17);
  T43 = primitive_machine_word_logxor(T42,1);
  T44 = primitive_machine_word_add_signal_overflow(T41,T43);
  T45 = primitive_cast_raw_as_integer(T44);
  SLOT_VALUE_SETTER(T45, stream_, 5);
  T15_0 = elements_;
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kread_intoXYstreams_protocolVcommon_dylanMioM3I (D stream_, D n_, D seq_, D Urest_, D start_, D on_end_of_stream_) {
  D T7;
  D on_end_of_streamF8;
  D pos_;
  D Utmp_;
  D T11;
  D T12;
  D src_n_;
  D T14;
  D dst_n_;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_6 T45 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T46;
  D T47;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T21 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T21 != &KPfalseVKi) {
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  Kensure_readableYstreams_internalsVioI(stream_);
  T22 = SLOT_VALUE_INITD(stream_, 7);
  T23 = SLOT_VALUE_INITD(stream_, 5);
  primitive_type_check(T23, &KLintegerGVKd);
  pos_ = T23;
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  if (Utmp_ != &KPfalseVKi) {
    T11 = Utmp_;
  } else {
    T24 = SLOT_VALUE_INITD(stream_, 6);
    T11 = T24;
  }
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T12 = CONGRUENT_CALL2(T11, pos_);
  primitive_type_check(T12, &KLintegerGVKd);
  src_n_ = T12;
  T46 = SLOT_VALUE_INITD(seq_, 0);
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T14 = CONGRUENT_CALL2(T46, start_);
  primitive_type_check(T14, &KLintegerGVKd);
  dst_n_ = T14;
  T26 = primitive_cast_integer_as_raw(n_);
  T27 = primitive_cast_integer_as_raw(src_n_);
  T28 = primitive_machine_word_less_thanQ(T26,T27);
  if (T28 != &KPfalseVKi) {
    T25 = T26;
  } else {
    T32 = primitive_cast_integer_as_raw(src_n_);
    T25 = T32;
  }
  T30 = primitive_cast_integer_as_raw(dst_n_);
  T31 = primitive_machine_word_less_thanQ(T25,T30);
  if (T31 != &KPfalseVKi) {
    T29 = T25;
  } else {
    T37 = primitive_cast_integer_as_raw(dst_n_);
    T29 = T37;
  }
  T38 = primitive_cast_raw_as_integer(T29);
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(seq_, start_, T22, pos_, T38);
  T33 = primitive_cast_integer_as_raw(pos_);
  T34 = primitive_machine_word_logxor(T29,1);
  T35 = primitive_machine_word_add_signal_overflow(T33,T34);
  T36 = primitive_cast_raw_as_integer(T35);
  SLOT_VALUE_SETTER(T36, stream_, 5);
  T39 = primitive_cast_integer_as_raw(src_n_);
  T40 = primitive_machine_word_less_thanQ(T39,T26);
  if (T40 != &KPfalseVKi) {
    T41 = primitive_cast_integer_as_raw(src_n_);
    T42 = primitive_cast_integer_as_raw(dst_n_);
    T43 = primitive_machine_word_less_thanQ(T41,T42);
    T16 = T43;
  } else {
    T16 = &KPfalseVKi;
  }
  if (T16 != &KPfalseVKi) {
    T44 = primitive_idQ(on_end_of_streamF8,DunsuppliedYcommon_extensionsVcommon_dylan);
    T17 = T44;
  } else {
    T17 = &KPfalseVKi;
  }
  if (T17 != &KPfalseVKi) {
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T18 = CONGRUENT_CALL2(start_, T38);
    T47 = Kcopy_sequenceVKdMM3I(seq_, &KPempty_vectorVKi, start_, T18);
    T45.vector_element_[0] = IKJstream_;
    T45.vector_element_[1] = stream_;
    T45.vector_element_[2] = &KJcount_;
    T45.vector_element_[3] = T38;
    T45.vector_element_[4] = IKJsequence_;
    T45.vector_element_[5] = T47;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T19 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T45);
    KsignalVKdMM0I(T19, &KPempty_vectorVKi);
  }
  T20_0 = T38;
  MV_SET_COUNT(1);
  return(T20_0);
}

D Kread_text_intoXYstreamsVioMM2I (D stream_, D n_, D seq_, D Urest_, D start_, D on_end_of_stream_) {
  D T7;
  D on_end_of_streamF8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T9 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T9 != &KPfalseVKi) {
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  T10_0 = Kread_intoXYstreams_protocolVcommon_dylanMioM3I(stream_, n_, seq_, &KPempty_vectorVKi, start_, on_end_of_streamF8);
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kwrite_textYstreamsVioMM2I (D stream_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D start_index_;
  D T7;
  D end_index_;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  primitive_type_check(Ustart_, &KLintegerGVKd);
  start_index_ = Ustart_;
  T9 = primitive_idQ(Uend_,&KPunboundVKi);
  if (T9 != &KPfalseVKi) {
    T11 = SLOT_VALUE_INITD(elements_, 0);
    T7 = T11;
    end_index_ = T7;
  } else {
    primitive_type_check(Uend_, &KLintegerGVKd);
    T10 = Uend_;
    end_index_ = T10;
  }
  T12 = KwriteYstreams_protocolVcommon_dylanMioM3I(stream_, elements_, &KPempty_vectorVKi, start_index_, end_index_);
  MV_SET_COUNT(0);
  return(T12);
}

D Kread_textYstreamsVioMM1I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D text_;
  D value_;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T11 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  if (T11 != &KPfalseVKi) {
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  text_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), n_);
  value_ = Kread_text_intoXYstreamsVioMM2I(stream_, n_, text_, &KPempty_vectorVKi, (D) 1, on_end_of_streamF6);
  T7 = KEEVKdI(value_, on_end_of_streamF6);
  if (T7 != &KPfalseVKi) {
    T8_0 = value_;
    T10_0 = T8_0;
  } else {
    T9_0 = text_;
    T10_0 = T9_0;
  }
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kwrite_lineYstreamsVioMM3I (D stream_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    if (Uend_ != &KPfalseVKi) {
      T7 = Uend_;
    } else {
      T9 = SLOT_VALUE_INITD(elements_, 0);
      T7 = T9;
    }
    KwriteYstreams_protocolVcommon_dylanMioM3I(stream_, elements_, &KPempty_vectorVKi, Ustart_, T7);
    CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    FALL_THROUGH_UNWIND(&KPfalseVKi);
  }
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  CONTINUE_UNWIND();
  T8 = &KPfalseVKi;
  MV_SET_COUNT(0);
  return(T8);
}


/* SYSTEM INIT CODE */

void _Init_io__X_12Enative_speed_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K59, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K57, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K54, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K50, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      IKJstream_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsequence_);
    if (T0 != &KJsequence_) {
      IKJsequence_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_12Enative_speed_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_nonsiblinged_domainVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I1;
}
I1:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_nonsiblinged_domainVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I3;
}
I3:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_nonsiblinged_domainVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I5;
}
I5:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_nonsiblinged_domainVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I7;
}
I7:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I10;
}
I10:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I13;
}
I13:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I16;
}
I16:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I19;
}
I19:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I22;
}
I22:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-speed.dylan:76
  T0 = KPadd_a_methodVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I25;
}
I25:

  return;
}


/* eof */
