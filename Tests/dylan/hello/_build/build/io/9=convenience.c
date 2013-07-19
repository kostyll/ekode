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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(10);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D initial_position_;
  D current_position_;
  D final_position_;
  D stream_sequence_;
  D stream_limit_;
} _KLstring_streamGYstreamsVio;

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
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D actual_stream_input_buffer_;
  D actual_stream_output_buffer_;
} _KLbuffered_streamGYstreamsVio;


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
extern _KLkeyword_copy_down_methodGVKi Kwrite_textYstreamsVioMM2;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLmethod_domainGVKe Kwrite_textYstreamsVioRD_ioRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLstring_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstring_streamGYstreamsVioW;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLkeyword_methodGVKe Kread_toYstreamsVioMM1;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJtest_;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
D Kend_of_stream_valueYstreams_internalsVioI (D, D);
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D KaddXVKdMM3I (D, D);
extern _KLsealed_generic_functionGVKe Kstream_sequence_classYstreamsVio;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLkeyword_methodGVKe Kread_throughYstreamsVioMM1;
extern _KLsimple_methodGVKe Kread_to_endYstreamsVioMM1;
extern _KLsimple_methodGVKe Kread_to_endYstreamsVioMM2;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLkeyword_methodGVKe Kskip_throughYstreamsVioMM1;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLkeyword_methodGVKe Kread_lineYstreamsVioMM0;
extern _KLkeyword_methodGVKe Kread_lineYstreamsVioMM2;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
extern _KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM0;
extern _KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM2;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM0;
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM2;
extern _KLkeyword_copy_down_methodGVKi Kwrite_lineYstreamsVioMM3;
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM4;
extern _KLmethod_domainGVKe Kwrite_lineYstreamsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Knew_lineYstreamsVioMM1;
extern _KLsimple_methodGVKe Knew_lineYstreamsVioMM2;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_methodGVKe Knewline_sequenceYstreams_internalsVioMM0;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLkeyword_copy_down_methodGVKi Kread_text_intoXYstreamsVioMM2;
extern _KLmethod_domainGVKe Kread_text_intoXYstreamsVioRD_ioRD_0;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLkeyword_copy_down_methodGVKi Kread_textYstreamsVioMM1;
extern _KLmethod_domainGVKe Kread_textYstreamsVioRD_ioRD_0;
D KmakeVKdMM33I (D, D, D, D);
D KEEVKdI (D, D);
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbuffered_streamGYstreamsVioW;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe Knewline_sequenceYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLincremental_generic_functionGVKe Kwrite_lineYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_line_intoXYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_lineYstreamsVio;
extern _KLincremental_generic_functionGVKe Kskip_throughYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_to_endYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_throughYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_toYstreamsVio;
extern _KLincremental_generic_functionGVKe Kwrite_textYstreamsVio;
extern _KLkeyword_methodGVKe Kwrite_textYstreamsVioMM0;
D Kwrite_textYstreamsVioMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kwrite_textYstreamsVioMM1;
D Kwrite_textYstreamsVioMM1I (D stream_, D text_, D Urest_, D start_index_, D end_index_);
static _KLpairGVKd K14;
static _KLpairGVKd K15;
static _KLpairGVKd K16;
static _KLkeyword_signatureGVKe K17;
static _KLbyte_stringGVKd_10 K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLkeyword_signatureGVKe K21;
static _KLsimple_object_vectorGVKd_4 K22;
static _KLsimple_object_vectorGVKd_2 K23;
extern _KLkeyword_methodGVKe Kread_toYstreamsVioMM0;
D Kread_toYstreamsVioMM0I (D, D, D, D, D);
static _KLpairGVKd K26;
static _KLpairGVKd K27;
static _KLkeyword_signatureAvaluesGVKi K28;
static _KLbyte_stringGVKd_7 K29;
static _KLsimple_object_vectorGVKd_2 K30;
static _KLsimple_object_vectorGVKd_2 K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K34;
static _KLsimple_object_vectorGVKd_4 K35;
extern _KLkeyword_methodGVKe Kread_throughYstreamsVioMM0;
D Kread_throughYstreamsVioMM0I (D, D, D, D, D);
static _KLpairGVKd K38;
static _KLpairGVKd K39;
static _KLbyte_stringGVKd_12 K40;
extern _KLsimple_methodGVKe Kread_to_endYstreamsVioMM0;
D Kread_to_endYstreamsVioMM0I (D);
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLsignatureAvaluesGVKi K46;
static _KLbyte_stringGVKd_11 K47;
static _KLsimple_object_vectorGVKd_1 K48;
extern _KLkeyword_methodGVKe Kskip_throughYstreamsVioMM0;
D Kskip_throughYstreamsVioMM0I (D, D, D, D);
static _KLpairGVKd K51;
static _KLpairGVKd K52;
static _KLkeyword_signatureAvaluesGVKi K53;
static _KLbyte_stringGVKd_12 K54;
static _KLsimple_object_vectorGVKd_1 K55;
static _KLsimple_object_vectorGVKd_2 K56;
extern _KLkeyword_methodGVKe Kread_lineYstreamsVioMM1;
D Kread_lineYstreamsVioMM1I (D, D, D);
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLkeyword_signatureAvaluesGVKi K62;
static _KLbyte_stringGVKd_9 K63;
static _KLsimple_object_vectorGVKd_1 K64;
static _KLsimple_object_vectorGVKd_2 K65;
extern _KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM1;
D Kread_line_intoXYstreamsVioMM1I (D, D, D, D, D, D);
static _KLpairGVKd K68;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLkeyword_signatureAvaluesGVKi K71;
static _KLbyte_stringGVKd_15 K72;
static _KLsimple_object_vectorGVKd_3 K73;
static _KLsymbolGVKd KJgrowQ_;
static _KLbyte_stringGVKd_5 K75;
static _KLsimple_object_vectorGVKd_6 K76;
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM1;
D Kwrite_lineYstreamsVioMM1I (D stream_, D elements_, D Urest_, D start_index_, D Uend_);
static _KLpairGVKd K79;
static _KLpairGVKd K80;
static _KLpairGVKd K81;
static _KLpairGVKd K82;
static _KLpairGVKd K83;
static _KLkeyword_signatureGVKe K84;
static _KLbyte_stringGVKd_10 K85;
static _KLsimple_object_vectorGVKd_4 K86;
extern _KLsimple_methodGVKe Knew_lineYstreamsVioMM0;
D Knew_lineYstreamsVioMM0I (D);
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLsignatureGVKe K92;
static _KLbyte_stringGVKd_8 K93;
extern _KLsimple_methodGVKe Knewline_sequenceYstreams_internalsVioMM1;
D Knewline_sequenceYstreams_internalsVioMM1I (D);
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_16 K98;
static _KLbyte_stringGVKd_1 K99;
static _KLsignatureAvaluesGVKi K100;
extern _KLincremental_generic_functionGVKe Kread_text_intoXYstreamsVio;
extern _KLkeyword_methodGVKe Kread_text_intoXYstreamsVioMM0;
D Kread_text_intoXYstreamsVioMM0I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_text_intoXYstreamsVioMM1;
D Kread_text_intoXYstreamsVioMM1I (D stream_, D n_, D text_, D Urest_, D start_, D on_end_of_stream_);
static _KLpairGVKd K106;
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLkeyword_signatureGVKe K109;
static _KLbyte_stringGVKd_15 K110;
static _KLsimple_object_vectorGVKd_3 K111;
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsimple_object_vectorGVKd_2 K113;
static _KLkeyword_signatureGVKe K114;
static _KLsimple_object_vectorGVKd_4 K115;
static _KLsimple_object_vectorGVKd_3 K116;
extern _KLincremental_generic_functionGVKe Kread_textYstreamsVio;
extern _KLkeyword_methodGVKe Kread_textYstreamsVioMM0;
D Kread_textYstreamsVioMM0I (D stream_, D n_, D Urest_, D on_end_of_stream_);
static _KLpairGVKd K120;
static _KLpairGVKd K121;
static _KLkeyword_signatureGVKe K122;
static _KLbyte_stringGVKd_9 K123;
static _KLsimple_object_vectorGVKd_2 K124;
extern _KLincremental_generic_functionGVKe Kread_characterYstreamsVio;
extern _KLkeyword_methodGVKe Kread_characterYstreamsVioMM0;
D Kread_characterYstreamsVioMM0I (D, D, D);
static _KLpairGVKd K128;
static _KLkeyword_signatureGVKe K129;
static _KLbyte_stringGVKd_14 K130;
static _KLkeyword_signatureGVKe K131;
static _KLsimple_object_vectorGVKd_1 K132;

/* Indirection variables */

static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJgrowQ_ = &KJgrowQ_;

/* Variables */

D read_toYstreamsVio = &Kread_toYstreamsVio;
D read_throughYstreamsVio = &Kread_throughYstreamsVio;
D read_to_endYstreamsVio = &Kread_to_endYstreamsVio;
D skip_throughYstreamsVio = &Kskip_throughYstreamsVio;
D read_lineYstreamsVio = &Kread_lineYstreamsVio;
D read_line_intoXYstreamsVio = &Kread_line_intoXYstreamsVio;
D write_lineYstreamsVio = &Kwrite_lineYstreamsVio;
D new_lineYstreamsVio = &Knew_lineYstreamsVio;
D newline_sequenceYstreams_internalsVio = &Knewline_sequenceYstreams_internalsVio;
D read_characterYstreamsVio = &Kread_characterYstreamsVio;
D read_textYstreamsVio = &Kread_textYstreamsVio;
D read_text_intoXYstreamsVio = &Kread_text_intoXYstreamsVio;
D write_textYstreamsVio = &Kwrite_textYstreamsVio;

/* Objects */

_KLsealed_generic_functionGVKe Knewline_sequenceYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K46,
  (D) 1,
  &K98,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe Knew_lineYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K92,
  (D) 1,
  &K93,
  &K89,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kwrite_lineYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K84,
  (D) 1,
  &K85,
  &K79,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kwrite_lineYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kread_line_intoXYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K71,
  &KPfalseVKi,
  &K72,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kread_lineYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K62,
  &KPfalseVKi,
  &K63,
  &K59,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kskip_throughYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K53,
  &KPfalseVKi,
  &K54,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kread_to_endYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K46,
  (D) 1,
  &K47,
  &K43,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kread_throughYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K28,
  &KPfalseVKi,
  &K40,
  &K38,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kread_toYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K28,
  &KPfalseVKi,
  &K29,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kwrite_textYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K17,
  (D) 1,
  &K18,
  &K14,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kwrite_textYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kwrite_textYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K17,
  &key_mep_5,
  &Kwrite_textYstreamsVioMM0I,
  &K22
};

_KLkeyword_methodGVKe Kwrite_textYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K21,
  &key_mep_5,
  &Kwrite_textYstreamsVioMM1I,
  &K22
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_textYstreamsVioMM0,
  &K15
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_textYstreamsVioMM1,
  &K16
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_textYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K17 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K19,
  &K20,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_10 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "write-text"
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureGVKe K21 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K23,
  &K20,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstring_streamGYstreamsVio,
  &KLstringGVKd
};

_KLkeyword_methodGVKe Kread_toYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K28,
  &key_mep_5,
  &Kread_toYstreamsVioMM0I,
  &K35
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_toYstreamsVioMM0,
  &K27
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_toYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K28 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818633,
  &K30,
  &K31,
  &KDsignature_LobjectG_typesVKi,
  &K32
};

static _KLbyte_stringGVKd_7 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "read-to"
};

static _KLsimple_object_vectorGVKd_2 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KJtest_
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLbooleanGVKd
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K34
};

static _KLbyte_stringGVKd_16 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_4 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJon_end_of_stream_,
  &KPunboundVKi,
  &KJtest_,
  &KEEVKd
};

_KLkeyword_methodGVKe Kread_throughYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K28,
  &key_mep_5,
  &Kread_throughYstreamsVioMM0I,
  &K35
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_throughYstreamsVioMM0,
  &K39
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_throughYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "read-through"
};

_KLsimple_methodGVKe Kread_to_endYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K46,
  &Kread_to_endYstreamsVioMM0I
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_to_endYstreamsVioMM0,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_to_endYstreamsVioMM1,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_to_endYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K48,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_11 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "read-to-end"
};

static _KLsimple_object_vectorGVKd_1 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLkeyword_methodGVKe Kskip_throughYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K53,
  &key_mep_4,
  &Kskip_throughYstreamsVioMM0I,
  &K56
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Kskip_throughYstreamsVioMM0,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Kskip_throughYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K53 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K30,
  &K55,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_12 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "skip-through"
};

static _KLsimple_object_vectorGVKd_1 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsimple_object_vectorGVKd_2 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

_KLkeyword_methodGVKe Kread_lineYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K62,
  &key_mep_3,
  &Kread_lineYstreamsVioMM1I,
  &K65
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_lineYstreamsVioMM0,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_lineYstreamsVioMM1,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_lineYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K62 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818629,
  &K48,
  &K64,
  &KDsignature_LobjectG_typesVKi,
  &K32
};

static _KLbyte_stringGVKd_9 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "read-line"
};

static _KLsimple_object_vectorGVKd_1 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLsimple_object_vectorGVKd_2 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

_KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K71,
  &key_mep_6,
  &Kread_line_intoXYstreamsVioMM1I,
  &K76
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_line_intoXYstreamsVioMM0,
  &K69
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_line_intoXYstreamsVioMM1,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_line_intoXYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K71 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818633,
  &K19,
  &K73,
  &KDsignature_LobjectG_typesVKi,
  &K32
};

static _KLbyte_stringGVKd_15 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "read-line-into!"
};

static _KLsimple_object_vectorGVKd_3 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstart_,
  &KJon_end_of_stream_,
  &KJgrowQ_
};

static _KLsymbolGVKd KJgrowQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K75
};

static _KLbyte_stringGVKd_5 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "grow?"
};

static _KLsimple_object_vectorGVKd_6 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi,
  &KJgrowQ_,
  &KPfalseVKi
};

_KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K84,
  &key_mep_5,
  &Kwrite_lineYstreamsVioMM1I,
  &K86
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_lineYstreamsVioMM0,
  &K80
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_lineYstreamsVioMM1,
  &K81
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_lineYstreamsVioMM2,
  &K82
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_lineYstreamsVioMM3,
  &K83
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_lineYstreamsVioMM4,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K84 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K19,
  &K20,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_10 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "write-line"
};

static _KLsimple_object_vectorGVKd_4 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

_KLsimple_methodGVKe Knew_lineYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K92,
  &Knew_lineYstreamsVioMM0I
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Knew_lineYstreamsVioMM0,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Knew_lineYstreamsVioMM1,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Knew_lineYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLsignatureGVKe K92 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K48
};

static _KLbyte_stringGVKd_8 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "new-line"
};

_KLsimple_methodGVKe Knewline_sequenceYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K100,
  &Knewline_sequenceYstreams_internalsVioMM1I
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Knewline_sequenceYstreams_internalsVioMM0,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Knewline_sequenceYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "newline-sequence"
};

static _KLbyte_stringGVKd_1 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "\n"
};

static _KLsignatureAvaluesGVKi K100 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K48,
  &KDsignature_LstringG_typesVKi
};

_KLincremental_generic_functionGVKe Kread_text_intoXYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K109,
  (D) 1,
  &K110,
  &K106,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kread_text_intoXYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kread_text_intoXYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K109,
  &key_mep_6,
  &Kread_text_intoXYstreamsVioMM0I,
  &K115
};

_KLkeyword_methodGVKe Kread_text_intoXYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K114,
  &key_mep_6,
  &Kread_text_intoXYstreamsVioMM1I,
  &K115
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_text_intoXYstreamsVioMM0,
  &K107
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_text_intoXYstreamsVioMM1,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_text_intoXYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K109 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K111,
  &K112,
  &K113
};

static _KLbyte_stringGVKd_15 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "read-text-into!"
};

static _KLsimple_object_vectorGVKd_3 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLintegerGVKd,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsimple_object_vectorGVKd_2 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K114 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K116,
  &K112,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstring_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLstringGVKd
};

_KLincremental_generic_functionGVKe Kread_textYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K122,
  &KPfalseVKi,
  &K123,
  &K120,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kread_textYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kread_textYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K122,
  &key_mep_4,
  &Kread_textYstreamsVioMM0I,
  &K65
};

static _KLpairGVKd K120 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_textYstreamsVioMM0,
  &K121
};

static _KLpairGVKd K121 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_textYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K122 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K124,
  &K64,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_9 K123 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "read-text"
};

static _KLsimple_object_vectorGVKd_2 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLintegerGVKd
};

_KLincremental_generic_functionGVKe Kread_characterYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K129,
  &KPfalseVKi,
  &K130,
  &K128,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kread_characterYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K131,
  &key_mep_3,
  &Kread_characterYstreamsVioMM0I,
  &K65
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_characterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K129 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K48,
  &K64,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_14 K130 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "read-character"
};

static _KLkeyword_signatureGVKe K131 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K132,
  &K64,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbuffered_streamGYstreamsVio
};

/* Code */

D Kwrite_textYstreamsVioMM0I (D stream_, D text_, D Urest_, D start_index_, D end_index_) {
  D start_indexF6;
  D T7;
  D T8;
  DWORD end_indexF9;
  D T10;
  DWORD index_T, index_;
  D T12;
  D T13;
  D old_index_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_4 T27 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T28;
  D T29;
  DWORD T30;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  primitive_type_check(start_index_, &KLintegerGVKd);
  start_indexF6 = start_index_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  T17 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:307
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(text_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
    T8 = T7;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
    primitive_type_check(T8, &KLintegerGVKd);
    T18 = T8;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
    T23 = primitive_cast_integer_as_raw(T18);
    end_indexF9 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
    primitive_type_check(end_index_, &KLintegerGVKd);
    T19 = end_index_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
    T24 = primitive_cast_integer_as_raw(T19);
    end_indexF9 = T24;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
  T25 = primitive_cast_raw_as_integer(end_indexF9);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:309
  ENTER_UNWIND_FRAME(T10);
  if (!nlx_setjmp(FRAME_DEST(T10))) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:309
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:310
    old_index_ = start_indexF6;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
    T21 = primitive_cast_integer_as_raw(start_indexF6);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
    index_T = T21;
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
      T22 = primitive_cast_raw_as_integer(index_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
      T20 = primitive_machine_word_less_thanQ(index_,end_indexF9);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:312
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T12 = CONGRUENT_CALL3(text_, T22, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:312
        T26 = primitive_idQ(T12,C('\n'));
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:312
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:313
          T16 = old_index_;
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:313
          T27.vector_element_[0] = &KJstart_;
          T27.vector_element_[1] = T16;
          T27.vector_element_[2] = &KJend_;
          T27.vector_element_[3] = T22;
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:313
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          CONGRUENT_CALL3(stream_, text_, &T27);
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:314
          CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
          CONGRUENT_CALL1(stream_);
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:315
          T28 = primitive_machine_word_add_signal_overflow(index_,4);
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:315
          T29 = primitive_cast_raw_as_integer(T28);
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:315
          old_index_ = T29;
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:312
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
        T30 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
        index_T = T30;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:311
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:318
    T15 = old_index_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:318
    T31.vector_element_[0] = &KJstart_;
    T31.vector_element_[1] = T15;
    T31.vector_element_[2] = &KJend_;
    T31.vector_element_[3] = T25;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:318
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    CONGRUENT_CALL3(stream_, text_, &T31);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:309
    FALL_THROUGH_UNWIND(&KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:309
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:309
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:320
  T13 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:304
  MV_SET_COUNT(0);
  return(T13);
}

D Kwrite_textYstreamsVioMM1I (D stream_, D text_, D Urest_, D start_index_, D end_index_) {
  D start_indexF6;
  D T7;
  D T8;
  D end_indexF9;
  D T10;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  primitive_type_check(start_index_, &KLintegerGVKd);
  start_indexF6 = start_index_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:326
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(text_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
    T8 = T7;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
    primitive_type_check(T8, &KLintegerGVKd);
    T12 = T8;
    end_indexF9 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
    primitive_type_check(end_index_, &KLintegerGVKd);
    T13 = end_index_;
    end_indexF9 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:328
  T14.vector_element_[0] = &KJstart_;
  T14.vector_element_[1] = start_indexF6;
  T14.vector_element_[2] = &KJend_;
  T14.vector_element_[3] = end_indexF9;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:328
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T10 = CONGRUENT_CALL3(stream_, text_, &T14);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:323
  MV_SET_COUNT(0);
  return(T10);
}

D Kread_toYstreamsVioMM0I (D stream_, D elt_, D Urest_, D on_end_of_stream_, D test_) {
  D T6;
  D on_end_of_streamF7;
  D T8;
  D T9;
  D next_elt_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D matchedQ_;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T22_1;
  D T23_0;
  D seq_;
  D T25;
  D T26_0;
  D T26_1;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
  T21 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
    T6 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF7 = T6;
  } else {
    on_end_of_streamF7 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:35
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T8 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:35
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:36
    T9 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF7);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:36
    T22_0 = T9;
    T22_1 = &KPfalseVKi;
    T17_0 = T22_0;
    T17_1 = T22_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:38
    T23_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:38
    seq_ = T23_0;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:39
    matchedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
      CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
      T13 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
      if (T13 != &KPfalseVKi) {
        T14 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
        T20 = matchedQ_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
        T25 = primitive_not(T20);
        T14 = T25;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:41
        CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
        next_elt_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:42
        primitive_type_check(test_, &KLfunctionGVKd);
        T11 = test_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:42
        T12 = CALL2(T11, next_elt_, elt_);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:42
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:43
          matchedQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:45
          KaddXVKdMM3I(seq_, next_elt_);
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:42
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:40
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:48
    CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
    T15 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:48
    T16 = CALL2(&KasVKd, T15, seq_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:48
    T19 = matchedQ_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:48
    T26_0 = T16;
    T26_1 = T19;
    T17_0 = T26_0;
    T17_1 = T26_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:35
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:29
  MV_SET_ELT(1, T17_1);
  MV_SET_COUNT(2);
  return(T17_0);
}

D Kread_throughYstreamsVioMM0I (D stream_, D elt_, D Urest_, D on_end_of_stream_, D test_) {
  D T6;
  D on_end_of_streamF7;
  D T8;
  D T9;
  D next_elt_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D matchedQ_;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T22_1;
  D T23_0;
  D seq_;
  D T25;
  D T26_0;
  D T26_1;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
  T21 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
    T6 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF7 = T6;
  } else {
    on_end_of_streamF7 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:58
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T8 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:58
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:59
    T9 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF7);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:59
    T22_0 = T9;
    T22_1 = &KPfalseVKi;
    T17_0 = T22_0;
    T17_1 = T22_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:61
    T23_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:61
    seq_ = T23_0;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:62
    matchedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
      CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
      T13 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
      if (T13 != &KPfalseVKi) {
        T14 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
        T20 = matchedQ_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
        T25 = primitive_not(T20);
        T14 = T25;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:64
        CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
        next_elt_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:65
        KaddXVKdMM3I(seq_, next_elt_);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:66
        primitive_type_check(test_, &KLfunctionGVKd);
        T11 = test_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:66
        T12 = CALL2(T11, next_elt_, elt_);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:66
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:67
          matchedQ_ = &KPtrueVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:66
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:63
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:70
    CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
    T15 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:70
    T16 = CALL2(&KasVKd, T15, seq_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:70
    T19 = matchedQ_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:70
    T26_0 = T16;
    T26_1 = T19;
    T17_0 = T26_0;
    T17_1 = T26_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:58
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:52
  MV_SET_ELT(1, T17_1);
  MV_SET_COUNT(2);
  return(T17_0);
}

D Kread_to_endYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D seq_;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:74
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:77
  T7_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:77
  seq_ = T7_0;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
    CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
    if (T3 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:79
      CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
      T2 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:79
      KaddXVKdMM3I(seq_, T2);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:78
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:81
  CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:81
  T5_0 = CALL2(&KasVKd, T4, seq_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:74
  T6_0 = T5_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T5_0);
    primitive_type_check(T6_0, &KLsequenceGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:74
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kskip_throughYstreamsVioMM0I (D stream_, D elt_, D Urest_, D test_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
  D foundQ_;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:84
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:87
  foundQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
    CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
    T8 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
    if (T8 != &KPfalseVKi) {
      T9 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
      T15 = foundQ_;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
      T16 = primitive_not(T15);
      T9 = T16;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:89
      primitive_type_check(test_, &KLfunctionGVKd);
      T5 = test_;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:89
      CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
      T6 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:89
      T7 = CALL2(T5, T6, elt_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:89
      foundQ_ = T7;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:88
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:91
  T14 = foundQ_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:91
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:91
    T10_0 = &KPtrueVKi;
    T12_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:91
    T11_0 = &KPfalseVKi;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:91
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:84
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kread_lineYstreamsVioMM1I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D T6;
  D T7;
  D next_elt_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;
  D matchedQ_;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T19_1;
  D T20_0;
  D seq_;
  D T22;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_2 T25 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T26;
  D T27_0;
  D T27_1;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
  T18 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:133
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:133
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:134
    T7 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:134
    T19_0 = T7;
    T19_1 = &KPfalseVKi;
    T14_0 = T19_0;
    T14_1 = T19_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:136
    T20_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:136
    seq_ = T20_0;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:137
    matchedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
      CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
      T10 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
      if (T10 != &KPfalseVKi) {
        T11 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
        T17 = matchedQ_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
        T22 = primitive_not(T17);
        T11 = T22;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:139
        CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
        next_elt_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:140
        T23 = primitive_idQ(next_elt_,C('\n'));
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:140
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:141
          matchedQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:142
          T24 = primitive_idQ(next_elt_,C('\r'));
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:140
          if (T24 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:143
            matchedQ_ = &KPtrueVKi;
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:145
            T25.vector_element_[0] = IKJon_end_of_stream_;
            T25.vector_element_[1] = &KPfalseVKi;
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:145
            CONGRUENT_CALL_PROLOG(&KpeekYstreams_protocolVcommon_dylan, 2);
            T9 = CONGRUENT_CALL2(stream_, &T25);
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:145
            T26 = primitive_idQ(T9,C('\n'));
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:145
            if (T26 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:146
              CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
              CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:145
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:149
            KaddXVKdMM3I(seq_, next_elt_);
          }
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:140
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:140
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:138
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:152
    CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
    T12 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:152
    T13 = CALL2(&KasVKd, T12, seq_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:152
    T16 = matchedQ_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:152
    T27_0 = T13;
    T27_1 = T16;
    T14_0 = T27_0;
    T14_1 = T27_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:133
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:127
  MV_SET_ELT(1, T14_1);
  MV_SET_COUNT(2);
  return(T14_0);
}

D Kread_line_intoXYstreamsVioMM1I (D stream_, D string_, D Urest_, D start_, D on_end_of_stream_, D growQ_) {
  D T7;
  D on_end_of_streamF8;
  D T9;
  D ssize_;
  D indexF11;
  D T12;
  D T13;
  D next_elt_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T19_1;
  D stringF20;
  D T21;
  D T22;
  D T23;
  D indexF24;
  D overflow_;
  D T26;
  D T27;
  D matchedQ_;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T32_1;
  D T33;
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_2 T36 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  D T50_0;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_4 T53 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T54_0;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  _KLsimple_object_vectorGVKd_1 T59 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T60;
  D T61_0;
  D T62;
  D T63_0;
  D T63_1;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
  stringF20 = string_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
  T31 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:160
  T23 = stringF20;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:160
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T9 = CONGRUENT_CALL1(T23);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:160
  primitive_type_check(T9, &KLintegerGVKd);
  ssize_ = T9;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:161
  primitive_type_check(start_, &KLintegerGVKd);
  indexF11 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:161
  indexF24 = indexF11;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:162
  overflow_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:177
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T12 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:177
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:178
    T13 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF8);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:178
    T32_0 = T13;
    T32_1 = &KPfalseVKi;
    T19_0 = T32_0;
    T19_1 = T32_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:180
    matchedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
      CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
      T16 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
      if (T16 != &KPfalseVKi) {
        T17 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
        T30 = matchedQ_;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
        T33 = primitive_not(T30);
        T17 = T33;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:182
        CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
        next_elt_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:183
        T34 = primitive_idQ(next_elt_,C('\n'));
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:183
        if (T34 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:184
          matchedQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:185
          T35 = primitive_idQ(next_elt_,C('\r'));
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:183
          if (T35 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:186
            matchedQ_ = &KPtrueVKi;
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:188
            T36.vector_element_[0] = IKJon_end_of_stream_;
            T36.vector_element_[1] = &KPfalseVKi;
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:188
            CONGRUENT_CALL_PROLOG(&KpeekYstreams_protocolVcommon_dylan, 2);
            T15 = CONGRUENT_CALL2(stream_, &T36);
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:188
            T37 = primitive_idQ(T15,C('\n'));
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:188
            if (T37 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:189
              CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
              CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:188
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
            if (growQ_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
              T43 = indexF24;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
              T47 = primitive_cast_integer_as_raw(T43);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
              T48 = primitive_cast_integer_as_raw(ssize_);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
              T49 = primitive_machine_word_less_thanQ(T47,T48);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
              T46 = primitive_not(T49);
              T38 = T46;
            } else {
              T38 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
            if (T38 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:165
              T45 = overflow_;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:165
              if (T45 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:167
                CONGRUENT_CALL_PROLOG(&K_VKd, 2);
                T39 = CONGRUENT_CALL2(start_, ssize_);
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:167
                CONGRUENT_CALL_PROLOG(&KLVKd, 2);
                T50_0 = CONGRUENT_CALL2(T39, (D) 1);
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:167
                T51 = T50_0;
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:167
                if (T51 != &KPfalseVKi) {
                  T52 = (D) 1;
                } else {
                  T52 = T39;
                }
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:167
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:166
                T53.vector_element_[0] = &KJsize_;
                T53.vector_element_[1] = T52;
                T53.vector_element_[2] = &KJfill_;
                T53.vector_element_[3] = C(' ');
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:166
                T54_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &T53);
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:166
                T55 = T54_0;
                // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:166
                overflow_ = T55;
              }
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:165
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:170
              T44 = overflow_;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:170
              CALL2(&KaddXVKd, T44, next_elt_);
            } else {
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:172
              T40 = stringF20;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:172
              T42 = indexF24;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:172
              CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
              CONGRUENT_CALL3(next_elt_, T40, T42);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:173
              T41 = indexF24;
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:173
              T56 = primitive_cast_integer_as_raw(T41);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:173
              T57 = primitive_machine_word_add_signal_overflow(T56,4);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:173
              T58 = primitive_cast_raw_as_integer(T57);
              // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:173
              indexF24 = T58;
            }
            // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:164
          }
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:183
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:183
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:181
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:195
    T26 = overflow_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:195
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      T22 = stringF20;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      T27 = overflow_;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      T59.vector_element_[0] = T27;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
      T60 = CONGRUENT_CALL1(T22);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      T61_0 = APPLY3(&Kconcatenate_asVKd, T60, T22, &T59);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      T62 = T61_0;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      primitive_type_check(T62, &KLstringGVKd);
      T18 = T62;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:196
      stringF20 = T18;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:195
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:198
    T21 = stringF20;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:198
    T29 = matchedQ_;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:198
    T63_0 = T21;
    T63_1 = T29;
    T19_0 = T63_0;
    T19_1 = T63_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:177
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:156
  MV_SET_ELT(1, T19_1);
  MV_SET_COUNT(2);
  return(T19_0);
}

D Kwrite_lineYstreamsVioMM1I (D stream_, D elements_, D Urest_, D start_index_, D Uend_) {
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:202
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:205
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:205
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:206
    if (Uend_ != &KPfalseVKi) {
      T8 = Uend_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:206
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T7 = CONGRUENT_CALL1(elements_);
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:206
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:206
    T10.vector_element_[0] = &KJstart_;
    T10.vector_element_[1] = start_index_;
    T10.vector_element_[2] = &KJend_;
    T10.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:206
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    CONGRUENT_CALL3(stream_, elements_, &T10);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:207
    CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:205
    FALL_THROUGH_UNWIND(&KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:205
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:205
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:209
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:202
  MV_SET_COUNT(0);
  return(T9);
}

D Knew_lineYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:112
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:113
  CONGRUENT_CALL_PROLOG(&Knewline_sequenceYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:113
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:112
  MV_SET_COUNT(0);
  return(T3);
}

D Knewline_sequenceYstreams_internalsVioMM1I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:120
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:122
  T2_0 = &K99;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:120
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kread_text_intoXYstreamsVioMM0I (D stream_, D n_, D text_, D Urest_, D start_, D on_end_of_stream_) {
  D startF7;
  D T8;
  D on_end_of_streamF9;
  D returnPexit_47_;
  D T11;
  DWORD count_T, count_;
  DWORD index_T, index_;
  D T14;
  D T15;
  D character_;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21;
  DWORD T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_2 T27 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  primitive_type_check(start_, &KLintegerGVKd);
  startF7 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  T21 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
    T8 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF9 = T8;
  } else {
    on_end_of_streamF9 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:274
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
  T32 = primitive_cast_integer_as_raw(startF7);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
  count_T = 1;
  index_T = T32;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    count_ = count_T;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    T33 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    T22 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    T23 = primitive_machine_word_less_thanQ(count_,T22);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:277
      CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
      T14 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:277
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:278
        T15 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF9);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:278
        T24.vector_element_[0] = T15;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:274
        T25 = MV_SET_REST_AT(&T24, 0);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:274
        T20_0 = T25;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:277
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:280
      CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
      character_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:282
      T26 = primitive_idQ(character_,C('\r'));
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:282
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:284
        T27.vector_element_[0] = IKJon_end_of_stream_;
        T27.vector_element_[1] = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:284
        CONGRUENT_CALL_PROLOG(&KpeekYstreams_protocolVcommon_dylan, 2);
        T17 = CONGRUENT_CALL2(stream_, &T27);
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:284
        T28 = primitive_idQ(T17,C('\n'));
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:284
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:285
          CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
          CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:284
        T18 = C('\n');
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:280
        primitive_type_check(character_, &KLcharacterGVKd);
        T29 = character_;
        T18 = T29;
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:282
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:291
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T18, text_, T33);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
      T30 = primitive_machine_word_add_signal_overflow(count_,4);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
      T31 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
      count_T = T30;
      index_T = T31;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:275
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:293
  T19 = n_;
  MV_SET_ELT(0, n_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:274
  T20_0 = T19;
  L1: ;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:274
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:269
  MV_SET_COUNT(1);
  return(T20_0);
}

D Kread_text_intoXYstreamsVioMM1I (D stream_, D n_, D text_, D Urest_, D start_, D on_end_of_stream_) {
  D T7;
  D on_end_of_streamF8;
  D T9_0;
  D T10;
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
  T10 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:301
  T11.vector_element_[0] = &KJstart_;
  T11.vector_element_[1] = start_;
  T11.vector_element_[2] = IKJon_end_of_stream_;
  T11.vector_element_[3] = on_end_of_streamF8;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:301
  CONGRUENT_CALL_PROLOG(&Kread_intoXYstreams_protocolVcommon_dylan, 4);
  T9_0 = CONGRUENT_CALL4(stream_, n_, text_, &T11);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:297
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kread_textYstreamsVioMM0I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D value_;
  D T8;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D text_;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
  T12 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:260
  text_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), n_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:261
  T14.vector_element_[0] = IKJon_end_of_stream_;
  T14.vector_element_[1] = on_end_of_streamF6;
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:261
  CONGRUENT_CALL_PROLOG(&Kread_text_intoXYstreamsVio, 4);
  value_ = CONGRUENT_CALL4(stream_, n_, text_, &T14);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:262
  T8 = KEEVKdI(value_, on_end_of_streamF6);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:262
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:263
    T9_0 = value_;
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:265
    T10_0 = text_;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:262
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:256
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kread_characterYstreamsVioMM0I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D T6;
  D T7_0;
  D character_;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T17;

  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
  T14 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:238
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:238
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:239
    T7_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    T13_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:241
    CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
    character_ = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:242
    T15 = primitive_idQ(character_,C('\r'));
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:242
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:244
      T16.vector_element_[0] = IKJon_end_of_stream_;
      T16.vector_element_[1] = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:244
      CONGRUENT_CALL_PROLOG(&KpeekYstreams_protocolVcommon_dylan, 2);
      T9 = CONGRUENT_CALL2(stream_, &T16);
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:244
      T17 = primitive_idQ(T9,C('\n'));
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:244
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:245
        CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
        CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:244
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:247
      T10_0 = C('\n');
      T12_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:249
      T11_0 = character_;
      T12_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:242
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:238
  // /opt/opendylan-2013.1/sources/io/streams/convenience.dylan:234
  MV_SET_COUNT(1);
  return(T13_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_9Econvenience_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      IKJon_end_of_stream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K115, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K112, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K76, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K73, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K65, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K64, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K35, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K31, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJgrowQ_);
    if (T0 != &KJgrowQ_) {
      primitive_repeated_slot_value_setter(T0, &K76, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K73, 1, 2);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_9Econvenience_for_user () {
  return;
}


/* eof */
