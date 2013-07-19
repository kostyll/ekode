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
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
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

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLend_of_stream_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(0);

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
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
  D class_properties_;
  D iclass_class_;
  D class_mm_wrapper_;
  D repeated_slot_descriptor_;
  D instance_slot_descriptors_;
  D iclass_dispatch_key_;
  D class_constructor_;
  D direct_superclasses_;
  D class_rcpl_vector_;
  D class_rcpl_position_;
  D class_rcpl_other_positions_;
  D class_known_joint_;
  D iclass_dependent_generics_;
  D iclass_subclass_dependent_generics_;
  D direct_subclasses_;
  D direct_methods_;
  D direct_slot_descriptors_;
  D slot_descriptors_;
  D direct_inherited_slot_descriptors_;
  D direct_initialization_argument_descriptors_;
  D class_slot_descriptors_;
  D defaulted_initialization_arguments_slot_;
  D class_slot_storage_;
} _KLimplementation_classGVKe;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_errorGYstreams_protocolVcommon_dylan;

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
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLinstance_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
} _KLstream_positionGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_requested_position_;
  D stream_error_size_of_stream_;
} _KLstream_position_errorGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_closed_errorGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_not_writableGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_not_readableGYstreamsVio;


/* Referenced object declarations */

D KPadd_classVKeI (D);
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
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLend_of_stream_errorGYstreams_protocolVcommon_dylanW;
D KsignalVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_methodGVKe KreadableQYstreams_internalsVio;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe KclosedQYstreams_internalsVio;
extern _KLsymbolGVKd KJformat_string_;
D KerrorVKdMM0I (D, D);
extern _KLsimple_methodGVKe Kwrite_onlyQYstreams_internalsVio;
D KerrorVKdMM1I (D, D);
extern _KLsimple_methodGVKe KwritableQYstreams_internalsVio;
extern _KLsimple_methodGVKe Kread_onlyQYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_limitYstreamsVio;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLstream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstream_errorGYstreams_protocolVcommon_dylanW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLstream_positionGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_positionGYstreamsVioW;
extern _KLclassGVKd KLstream_position_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_position_errorGYstreamsVioW;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW;
extern _KLclassGVKd KLstream_not_writableGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_not_writableGYstreamsVioW;
extern _KLclassGVKd KLstream_not_readableGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_not_readableGYstreamsVioW;
D Kstream_limit_or_errorYstreams_internalsVioI (D);
D Kensure_writableYstreams_internalsVioI (D);
D Kensure_readableYstreams_internalsVioI (D);
D Kend_of_stream_valueYstreams_internalsVioI (D, D);
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_6 K20;
static _KLbyte_stringGVKd_29 K21;
static _KLbyte_stringGVKd_33 K22;
static _KLbyte_stringGVKd_38 K23;
static _KLbyte_stringGVKd_28 K24;
static _KLbyte_stringGVKd_31 K25;
static _KLbyte_stringGVKd_38 K26;
static _KLbyte_stringGVKd_35 K27;
extern _KLsimple_methodGVKe Kensure_writableYstreams_internalsVio;
static _KLsignatureGVKe K29;
static _KLsimple_object_vectorGVKd_1 K30;
extern _KLsimple_methodGVKe Kensure_readableYstreams_internalsVio;
extern _KLsimple_methodGVKe Kend_of_stream_valueYstreams_internalsVio;
static _KLsignatureGVKe K33;
static _KLsimple_object_vectorGVKd_2 K34;
static _KLimplementation_classGVKe K35;
static _KLsimple_object_vectorGVKd_3 K36;
extern _KLkeyword_methodGVKe KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0;
D KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K39;
static _KLsimple_object_vectorGVKd_7 K40;
static _KLbyte_stringGVKd_23 K41;
static _KLkeyword_signatureAvaluesGVKi K42;
static _KLsimple_object_vectorGVKd_6 K43;
static _KLsimple_object_vectorGVKd_3 K44;
static _KLsimple_object_vectorGVKd_1 K45;
static _KLbyte_stringGVKd_21 K46;
static _KLimplementation_classGVKe K47;
extern _KLkeyword_methodGVKe KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0;
D KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K50;
static _KLkeyword_signatureAvaluesGVKi K51;
static _KLsimple_object_vectorGVKd_1 K52;
static _KLbyte_stringGVKd_21 K53;
static _KLimplementation_classGVKe K54;
extern _KLkeyword_methodGVKe KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0;
D KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K57;
static _KLkeyword_signatureAvaluesGVKi K58;
static _KLsimple_object_vectorGVKd_1 K59;
static _KLbyte_stringGVKd_21 K60;
static _KLimplementation_classGVKe K61;
static _KLsimple_object_vectorGVKd_5 K62;
extern _KLkeyword_methodGVKe KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0;
D KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K65;
static _KLsimple_object_vectorGVKd_2 K66;
extern _KLinstance_slot_descriptorGVKe Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG;
extern _KLinstance_slot_descriptorGVKe Kstream_error_size_of_streamYstreams_internalsVioHLstream_position_errorG;
extern _KLsealed_generic_functionGVKe Kstream_error_size_of_streamYstreams_internalsVio;
extern _KLgetter_methodGVKi Kstream_error_size_of_streamYstreams_internalsVioMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_27 K72;
static _KLsymbolGVKd KJposition_;
extern _KLsealed_generic_functionGVKe Kstream_error_requested_positionYstreams_internalsVio;
extern _KLgetter_methodGVKi Kstream_error_requested_positionYstreams_internalsVioMM0;
static _KLpairGVKd K76;
static _KLbyte_stringGVKd_31 K77;
static _KLbyte_stringGVKd_8 K78;
static _KLkeyword_signatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_10 K80;
static _KLsimple_object_vectorGVKd_5 K81;
static _KLsimple_object_vectorGVKd_1 K82;
static _KLbyte_stringGVKd_23 K83;
static _KLimplementation_classGVKe K84;
static _KLsimple_object_vectorGVKd_1 K85;
static _KLsimple_object_vectorGVKd_6 K86;
static _KLbyte_stringGVKd_17 K87;

/* Indirection variables */

static D IKJstream_ = &KJstream_;
static D IKJposition_ = &KJposition_;

/* Variables */

D stream_error_requested_positionYstreams_internalsVio = &Kstream_error_requested_positionYstreams_internalsVio;
D stream_error_size_of_streamYstreams_internalsVio = &Kstream_error_size_of_streamYstreams_internalsVio;
D Lstream_positionGYstreamsVio = &KLstream_positionGYstreamsVio;
D Lposition_typeGYstreamsVio = &KLobjectGVKd;
D Lstream_position_errorGYstreamsVio = &KLstream_position_errorGYstreamsVio;
D Lstream_closed_errorGYstreamsVio = &KLstream_closed_errorGYstreamsVio;
D Lstream_not_writableGYstreamsVio = &KLstream_not_writableGYstreamsVio;
D Lstream_not_readableGYstreamsVio = &KLstream_not_readableGYstreamsVio;
D end_of_stream_valueYstreams_internalsVio = &Kend_of_stream_valueYstreams_internalsVio;
D ensure_readableYstreams_internalsVio = &Kensure_readableYstreams_internalsVio;
D ensure_writableYstreams_internalsVio = &Kensure_writableYstreams_internalsVio;

/* Objects */

_KLclassGVKd KLstream_positionGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K87,
  &K84,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstream_positionGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K84,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLstream_position_errorGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K83,
  &K61,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstream_position_errorGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K61,
  (D) 2049,
  21,
  33554439,
  (D) 1
};

_KLclassGVKd KLstream_closed_errorGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K60,
  &K54,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K54,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

_KLclassGVKd KLstream_not_writableGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K53,
  &K47,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstream_not_writableGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K47,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

_KLclassGVKd KLstream_not_readableGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K46,
  &K35,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstream_not_readableGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K35,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K20
};

static _KLbyte_stringGVKd_6 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLbyte_stringGVKd_29 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "Can\'t read from closed stream"
};

static _KLbyte_stringGVKd_33 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Can\'t read from write-only stream"
};

static _KLbyte_stringGVKd_38 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "Stream %= not readable, don\'t know why"
};

static _KLbyte_stringGVKd_28 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "Can\'t write to closed stream"
};

static _KLbyte_stringGVKd_31 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Can\'t write to read-only stream"
};

static _KLbyte_stringGVKd_38 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "Stream %= not writable, don\'t know why"
};

static _KLbyte_stringGVKd_35 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Stream %= has no well-defined limit"
};

_KLsimple_methodGVKe Kensure_writableYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K29,
  &Kensure_writableYstreams_internalsVioI
};

static _KLsignatureGVKe K29 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K30
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsimple_methodGVKe Kensure_readableYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K29,
  &Kensure_readableYstreams_internalsVioI
};

_KLsimple_methodGVKe Kend_of_stream_valueYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K33,
  &Kend_of_stream_valueYstreams_internalsVioI
};

static _KLsignatureGVKe K33 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K34
};

static _KLsimple_object_vectorGVKd_2 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K35 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLstream_not_readableGYstreamsVio,
  &KLstream_not_readableGYstreamsVioW,
  &KPfalseVKi,
  &K36,
  (D) -3,
  &KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0,
  &K39,
  &K40,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K36,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG
};

_KLkeyword_methodGVKe KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K42,
  &key_mep_2,
  &KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0I,
  &K43
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_7 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLstream_not_readableGYstreamsVio
};

static _KLbyte_stringGVKd_23 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K42 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K44,
  &KDsignature_LobjectG_typesVKi,
  &K45
};

static _KLsimple_object_vectorGVKd_6 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJstream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJstream_
};

static _KLsimple_object_vectorGVKd_1 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_not_readableGYstreamsVio
};

static _KLbyte_stringGVKd_21 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<stream-not-readable>"
};

static _KLimplementation_classGVKe K47 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLstream_not_writableGYstreamsVio,
  &KLstream_not_writableGYstreamsVioW,
  &KPfalseVKi,
  &K36,
  (D) -3,
  &KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0,
  &K39,
  &K50,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K36,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K51,
  &key_mep_2,
  &KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0I,
  &K43
};

static _KLsimple_object_vectorGVKd_7 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLstream_not_writableGYstreamsVio
};

static _KLkeyword_signatureAvaluesGVKi K51 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K44,
  &KDsignature_LobjectG_typesVKi,
  &K52
};

static _KLsimple_object_vectorGVKd_1 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_not_writableGYstreamsVio
};

static _KLbyte_stringGVKd_21 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<stream-not-writable>"
};

static _KLimplementation_classGVKe K54 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLstream_closed_errorGYstreamsVio,
  &KLstream_closed_errorGYstreamsVioW,
  &KPfalseVKi,
  &K36,
  (D) -3,
  &KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0,
  &K39,
  &K57,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K36,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K58,
  &key_mep_2,
  &KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0I,
  &K43
};

static _KLsimple_object_vectorGVKd_7 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLstream_closed_errorGYstreamsVio
};

static _KLkeyword_signatureAvaluesGVKi K58 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K44,
  &KDsignature_LobjectG_typesVKi,
  &K59
};

static _KLsimple_object_vectorGVKd_1 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_closed_errorGYstreamsVio
};

static _KLbyte_stringGVKd_21 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<stream-closed-error>"
};

static _KLimplementation_classGVKe K61 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102101,
  &KLstream_position_errorGYstreamsVio,
  &KLstream_position_errorGYstreamsVioW,
  &KPfalseVKi,
  &K62,
  (D) -3,
  &KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0,
  &K39,
  &K65,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K66,
  &K62,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG,
  &Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG,
  &Kstream_error_size_of_streamYstreams_internalsVioHLstream_position_errorG
};

_KLkeyword_methodGVKe KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K79,
  &key_mep_2,
  &KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0I,
  &K80
};

static _KLsimple_object_vectorGVKd_7 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLstream_position_errorGYstreamsVio
};

static _KLsimple_object_vectorGVKd_2 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG,
  &Kstream_error_size_of_streamYstreams_internalsVioHLstream_position_errorG
};

_KLinstance_slot_descriptorGVKe Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLstream_position_errorGYstreamsVio,
  &KJposition_,
  &Kstream_error_requested_positionYstreams_internalsVio,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kstream_error_size_of_streamYstreams_internalsVioHLstream_position_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLstream_position_errorGYstreamsVio,
  &KJsize_,
  &Kstream_error_size_of_streamYstreams_internalsVio,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kstream_error_size_of_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_error_size_of_streamYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_size_of_streamYstreams_internalsVioHLstream_position_errorG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_size_of_streamYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "stream-error-size-of-stream"
};

static _KLsymbolGVKd KJposition_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K78
};

_KLsealed_generic_functionGVKe Kstream_error_requested_positionYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K77,
  &K76,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_error_requested_positionYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_requested_positionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_31 K77 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "stream-error-requested-position"
};

static _KLbyte_stringGVKd_8 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "position"
};

static _KLkeyword_signatureAvaluesGVKi K79 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K81,
  &KDsignature_LobjectG_typesVKi,
  &K82
};

static _KLsimple_object_vectorGVKd_10 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJstream_,
  &KPunboundVKi,
  &KJposition_,
  &KPunboundVKi,
  &KJsize_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_5 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJstream_,
  &KJposition_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_position_errorGYstreamsVio
};

static _KLbyte_stringGVKd_23 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<stream-position-error>"
};

static _KLimplementation_classGVKe K84 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLstream_positionGYstreamsVio,
  &KLstream_positionGYstreamsVioW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K85,
  &K86,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLstream_positionGYstreamsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_17 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<stream-position>"
};

/* Code */

D Kstream_limit_or_errorYstreams_internalsVioI (D stream_) {
  D Utmp_;
  D T3_0;
  D T4_0;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:46
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:48
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:48
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:48
    T3_0 = Utmp_;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:49
    T5.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:49
    T6_0 = KerrorVKdMM1I(&K27, &T5);
    T4_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:48
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:46
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kensure_writableYstreams_internalsVioI (D stream_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:72
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:73
  T1 = CALL1(&KwritableQYstreams_internalsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:73
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:73
    T8 = &KPfalseVKi;
    T9 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:75
    T2 = CALL1(&KclosedQYstreams_internalsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:75
    if (T2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:76
      T10.vector_element_[0] = IKJstream_;
      T10.vector_element_[1] = stream_;
      T10.vector_element_[2] = &KJformat_string_;
      T10.vector_element_[3] = &K24;
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:76
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T3 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T10);
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:76
      T11 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
      T7 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:79
      T4 = CALL1(&Kread_onlyQYstreams_internalsVio, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:75
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:80
        T12.vector_element_[0] = IKJstream_;
        T12.vector_element_[1] = stream_;
        T12.vector_element_[2] = &KJformat_string_;
        T12.vector_element_[3] = &K25;
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:80
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T5 = CONGRUENT_CALL2(&KLstream_not_writableGYstreamsVio, &T12);
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:80
        T13 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
        T6 = T13;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:84
        T14.vector_element_[0] = stream_;
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:84
        T15 = KerrorVKdMM1I(&K26, &T14);
        T6 = T15;
      }
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:75
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:75
    T9 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:73
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:72
  MV_SET_COUNT(0);
  return(T9);
}

D Kensure_readableYstreams_internalsVioI (D stream_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:55
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:56
  T1 = CALL1(&KreadableQYstreams_internalsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:56
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:56
    T8 = &KPfalseVKi;
    T9 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:58
    T2 = CALL1(&KclosedQYstreams_internalsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:58
    if (T2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:59
      T10.vector_element_[0] = IKJstream_;
      T10.vector_element_[1] = stream_;
      T10.vector_element_[2] = &KJformat_string_;
      T10.vector_element_[3] = &K21;
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:59
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T3 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T10);
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:59
      T11 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
      T7 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:62
      T4 = CALL1(&Kwrite_onlyQYstreams_internalsVio, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:58
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:63
        T12.vector_element_[0] = IKJstream_;
        T12.vector_element_[1] = stream_;
        T12.vector_element_[2] = &KJformat_string_;
        T12.vector_element_[3] = &K22;
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:63
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T5 = CONGRUENT_CALL2(&KLstream_not_readableGYstreamsVio, &T12);
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:63
        T13 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
        T6 = T13;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:67
        T14.vector_element_[0] = stream_;
        // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:67
        T15 = KerrorVKdMM1I(&K23, &T14);
        T6 = T15;
      }
      // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:58
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:58
    T9 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:56
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:55
  MV_SET_COUNT(0);
  return(T9);
}

D Kend_of_stream_valueYstreams_internalsVioI (D stream_, D value_) {
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:38
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:39
  T5 = primitive_idQ(value_,DunsuppliedYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:39
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:42
    T6.vector_element_[0] = IKJstream_;
    T6.vector_element_[1] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:42
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLend_of_stream_errorGYstreams_protocolVcommon_dylan, &T6);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:42
    T7 = KsignalVKdMM0I(T3, &KPempty_vectorVKi);
    T4 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:40
    T2 = value_;
    MV_SET_ELT(0, value_);
    MV_SET_COUNT(1);
    T4 = T2;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:39
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:38
  return(T4);
}

D KLstream_not_readableGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_) {
  D T6;
  D Uunique_stream_error_streamF7;
  D T8;
  D Uunique_stream_error_streamF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  T11 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = IKJstream_;
    T13 = KerrorVKdMM1I(&K41, &T12);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
    T6 = T13;
    Uunique_stream_error_streamF7 = T6;
  } else {
    Uunique_stream_error_streamF7 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  T8 = primitive_object_allocate_filled(4,&KLstream_not_readableGYstreamsVioW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  primitive_type_check(Uunique_stream_error_streamF7, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF9 = Uunique_stream_error_streamF7;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF9, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T10_0 = T8;
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLstream_not_writableGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_) {
  D T6;
  D Uunique_stream_error_streamF7;
  D T8;
  D Uunique_stream_error_streamF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  T11 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = IKJstream_;
    T13 = KerrorVKdMM1I(&K41, &T12);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
    T6 = T13;
    Uunique_stream_error_streamF7 = T6;
  } else {
    Uunique_stream_error_streamF7 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  T8 = primitive_object_allocate_filled(4,&KLstream_not_writableGYstreamsVioW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  primitive_type_check(Uunique_stream_error_streamF7, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF9 = Uunique_stream_error_streamF7;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF9, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T10_0 = T8;
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLstream_closed_errorGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_) {
  D T6;
  D Uunique_stream_error_streamF7;
  D T8;
  D Uunique_stream_error_streamF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  T11 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = IKJstream_;
    T13 = KerrorVKdMM1I(&K41, &T12);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
    T6 = T13;
    Uunique_stream_error_streamF7 = T6;
  } else {
    Uunique_stream_error_streamF7 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  T8 = primitive_object_allocate_filled(4,&KLstream_closed_errorGYstreamsVioW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  primitive_type_check(Uunique_stream_error_streamF7, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF9 = Uunique_stream_error_streamF7;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF9, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T10_0 = T8;
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLstream_position_errorGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_, D Uunique_stream_error_requested_position_, D Uunique_stream_error_size_of_stream_) {
  D T8;
  D Uunique_stream_error_streamF9;
  D T10;
  D Uunique_stream_error_requested_positionF11;
  D T12;
  D Uunique_stream_error_size_of_streamF13;
  D T14;
  D Uunique_stream_error_streamF15;
  D T16_0;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  T17 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = IKJstream_;
    T19 = KerrorVKdMM1I(&K41, &T18);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
    T8 = T19;
    Uunique_stream_error_streamF9 = T8;
  } else {
    Uunique_stream_error_streamF9 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  T20 = primitive_idQ(Uunique_stream_error_requested_position_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = IKJposition_;
    T22 = KerrorVKdMM1I(&K41, &T21);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
    T10 = T22;
    Uunique_stream_error_requested_positionF11 = T10;
  } else {
    Uunique_stream_error_requested_positionF11 = Uunique_stream_error_requested_position_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  T23 = primitive_idQ(Uunique_stream_error_size_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJsize_;
    T25 = KerrorVKdMM1I(&K41, &T24);
    // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
    T12 = T25;
    Uunique_stream_error_size_of_streamF13 = T12;
  } else {
    Uunique_stream_error_size_of_streamF13 = Uunique_stream_error_size_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  T14 = primitive_object_allocate_filled(6,&KLstream_position_errorGYstreamsVioW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T14, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T14, 1);
  primitive_type_check(Uunique_stream_error_streamF9, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF15 = Uunique_stream_error_streamF9;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF15, T14, 2);
  SLOT_VALUE_SETTER(Uunique_stream_error_requested_positionF11, T14, 3);
  SLOT_VALUE_SETTER(Uunique_stream_error_size_of_streamF13, T14, 4);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T16_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  MV_SET_COUNT(1);
  return(T16_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_1Edefs_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      primitive_repeated_slot_value_setter(T0, &K81, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K80, 1, 4);
      IKJstream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K44, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K43, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJposition_);
    if (T0 != &KJposition_) {
      primitive_repeated_slot_value_setter(T0, &K81, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K80, 1, 6);
      IKJposition_ = T0;
      primitive_slot_value_setter(T0, &Kstream_error_requested_positionYstreams_internalsVioHLstream_position_errorG, 3);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:12
  T0 = KPadd_classVKeI(&KLstream_positionGYstreamsVio);
  goto I0;
}
I0:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:20
  T0 = KPadd_classVKeI(&KLstream_position_errorGYstreamsVio);
  goto I3;
}
I3:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:27
  T0 = KPadd_classVKeI(&KLstream_closed_errorGYstreamsVio);
  goto I6;
}
I6:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:30
  T0 = KPadd_classVKeI(&KLstream_not_writableGYstreamsVio);
  goto I9;
}
I9:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/defs.dylan:33
  T0 = KPadd_classVKeI(&KLstream_not_readableGYstreamsVio);
  goto I12;
}
I12:

  return;
}

/* USER INIT CODE */

void _Init_io__X_1Edefs_for_user () {
  return;
}


/* eof */
