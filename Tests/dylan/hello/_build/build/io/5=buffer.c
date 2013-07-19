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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(26);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kelement_typeVKe;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLkeyword_methodGVKe KmakeVKdMioM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KmakeVKdMM51;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLgetter_methodGVKi Kbuffer_startYstreamsVioMM0;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_sequenceG_typesVKi;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D, D);
D KmakeVKdMM25I (D, D, D, D);
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM3I (D, D, D, D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D KmakeVKdMM33I (D, D, D, D);
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM0I (D, D, D, D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kelement_typeVKeMioM0;
D Kelement_typeVKeMioM0I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMioM0;
D Ktype_for_copyVKdMioM0I (D);
extern _KLsealed_generic_functionGVKe Kbuffer_startYstreamsVio;
D Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I (D, D, D, D);
D Kround_to_power_of_twoYstreams_internalsVioI (D);
static _KLbyte_stringGVKd_26 K9;
static _KLpairGVKd K10;
extern _KLsimple_methodGVKe Kround_to_power_of_twoYstreams_internalsVio;
static _KLsignatureAvaluesGVKi K12;
static _KLpairGVKd K13;
static _KLsignatureAvaluesGVKi K14;
static _KLbyte_stringGVKd_12 K15;
static _KLsimple_object_vectorGVKd_1 K16;
static _KLsignatureAvaluesGVKi K17;
extern _KLincremental_generic_functionGVKe Kcopy_from_bufferXYstreamsVio;
extern _KLkeyword_methodGVKe Kcopy_from_bufferXYstreamsVioMM0;
D Kcopy_from_bufferXYstreamsVioMM0I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kcopy_from_bufferXYstreamsVioMM1;
D Kcopy_from_bufferXYstreamsVioMM1I (D, D, D, D, D, D);
extern _KLmethod_domainGVKe Kcopy_from_bufferXYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kcopy_from_bufferXYstreamsVioRD_ioRD_1;
static _KLpairGVKd K25;
static _KLpairGVKd K26;
static _KLkeyword_signatureGVKe K27;
static _KLbyte_stringGVKd_17 K28;
static _KLsimple_object_vectorGVKd_3 K29;
static _KLsimple_object_vectorGVKd_2 K30;
static _KLkeyword_signatureGVKe K31;
static _KLsimple_object_vectorGVKd_4 K32;
static _KLsimple_object_vectorGVKd_3 K33;
static _KLkeyword_signatureGVKe K34;
static _KLsimple_object_vectorGVKd_3 K35;
extern _KLincremental_generic_functionGVKe Kcopy_into_bufferXYstreamsVio;
extern _KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM0;
D Kcopy_into_bufferXYstreamsVioMM0I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM1;
D Kcopy_into_bufferXYstreamsVioMM1I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM2;
D Kcopy_into_bufferXYstreamsVioMM2I (D, D, D, D, D, D);
extern _KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_1;
extern _KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_2;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLpairGVKd K48;
static _KLkeyword_signatureGVKe K49;
static _KLbyte_stringGVKd_17 K50;
static _KLsimple_object_vectorGVKd_3 K51;
static _KLkeyword_signatureGVKe K52;
static _KLsimple_object_vectorGVKd_3 K53;
extern _KLincremental_generic_functionGVKe Kbuffer_subsequenceYstreamsVio;
extern _KLsimple_methodGVKe Kbuffer_subsequenceYstreamsVioMM0;
D Kbuffer_subsequenceYstreamsVioMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kbuffer_subsequenceYstreamsVioMM1;
D Kbuffer_subsequenceYstreamsVioMM1I (D, D, D, D);
extern _KLmethod_domainGVKe Kbuffer_subsequenceYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kbuffer_subsequenceYstreamsVioRD_ioRD_1;
static _KLpairGVKd K61;
static _KLpairGVKd K62;
static _KLsignatureAvaluesGVKi K63;
static _KLbyte_stringGVKd_18 K64;
static _KLsimple_object_vectorGVKd_4 K65;
static _KLsubclassGVKe K66;
static _KLsignatureAvaluesGVKi K67;
static _KLsimple_object_vectorGVKd_4 K68;
static _KLsimple_object_vectorGVKd_1 K69;
static _KLsingletonGVKd K70;
static _KLsignatureAvaluesGVKi K71;
static _KLsimple_object_vectorGVKd_4 K72;
static _KLsingletonGVKd K73;
static _KLsignatureAvaluesGVKi K74;
extern _KLkeyword_methodGVKe Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0;
static _KLkeyword_signatureAvaluesGVKi K76;
static _KLsimple_object_vectorGVKd_6 K77;
static _KLsymbolGVKd KJknown_power_of_two_sizeQ_;
static _KLbyte_stringGVKd_24 K79;
static _KLsimple_object_vectorGVKd_3 K80;
static _KLsimple_object_vectorGVKd_3 K81;

/* Indirection variables */

static D IKJknown_power_of_two_sizeQ_ = &KJknown_power_of_two_sizeQ_;

/* Variables */

D make_Lpower_of_two_bufferGYstreams_internalsVio = &Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0;
D Lbuffer_indexGYstreamsVio = &KLintegerGVKd;
D buffer_startYstreamsVio = &Kbuffer_startYstreamsVio;
D Lpower_of_two_bufferGYstreams_internalsVio = &KLbufferGYstreamsVio;
D round_to_power_of_twoYstreams_internalsVio = &Kround_to_power_of_twoYstreams_internalsVio;
D buffer_subsequenceYstreamsVio = &Kbuffer_subsequenceYstreamsVio;
D copy_into_bufferXYstreamsVio = &Kcopy_into_bufferXYstreamsVio;
D copy_from_bufferXYstreamsVio = &Kcopy_from_bufferXYstreamsVio;

/* Objects */

_KLsimple_methodGVKe Kelement_typeVKeMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K74,
  &Kelement_typeVKeMioM0I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K17,
  &Ktype_for_copyVKdMioM0I
};

_KLsealed_generic_functionGVKe Kbuffer_startYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K14,
  &KPfalseVKi,
  &K15,
  &K13,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLbyte_stringGVKd_26 K9 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "requested-size, %d is <= 0"
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM51,
  &KPempty_listVKi
};

_KLsimple_methodGVKe Kround_to_power_of_twoYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K12,
  &Kround_to_power_of_twoYstreams_internalsVioI
};

static _KLsignatureAvaluesGVKi K12 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_startYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K14 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K16,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_12 K15 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "buffer-start"
};

static _KLsimple_object_vectorGVKd_1 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

static _KLsignatureAvaluesGVKi K17 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K16,
  &KDsignature_LclassG_typesVKi
};

_KLincremental_generic_functionGVKe Kcopy_from_bufferXYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K27,
  &KPfalseVKi,
  &K28,
  &K25,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kcopy_from_bufferXYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kcopy_from_bufferXYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K34,
  &key_mep_6,
  &Kcopy_from_bufferXYstreamsVioMM0I,
  &K32
};

_KLkeyword_methodGVKe Kcopy_from_bufferXYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K31,
  &key_mep_6,
  &Kcopy_from_bufferXYstreamsVioMM1I,
  &K32
};

_KLmethod_domainGVKe Kcopy_from_bufferXYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kcopy_from_bufferXYstreamsVioMM1
};

_KLmethod_domainGVKe Kcopy_from_bufferXYstreamsVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kcopy_from_bufferXYstreamsVioRD_ioRD_0,
  &Kcopy_from_bufferXYstreamsVioMM0
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_from_bufferXYstreamsVioMM0,
  &K26
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_from_bufferXYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K27 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K29,
  &K30,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_17 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "copy-from-buffer!"
};

static _KLsimple_object_vectorGVKd_3 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureGVKe K31 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K33,
  &K30,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsimple_byte_vectorGVKe
};

static _KLkeyword_signatureGVKe K34 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K35,
  &K30,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLbyte_stringGVKd
};

_KLincremental_generic_functionGVKe Kcopy_into_bufferXYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K49,
  &KPfalseVKi,
  &K50,
  &K46,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kcopy_into_bufferXYstreamsVioRD_ioRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K34,
  &key_mep_6,
  &Kcopy_into_bufferXYstreamsVioMM0I,
  &K32
};

_KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K31,
  &key_mep_6,
  &Kcopy_into_bufferXYstreamsVioMM1I,
  &K32
};

_KLkeyword_methodGVKe Kcopy_into_bufferXYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K52,
  &key_mep_6,
  &Kcopy_into_bufferXYstreamsVioMM2I,
  &K32
};

_KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kcopy_into_bufferXYstreamsVioMM2
};

_KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kcopy_into_bufferXYstreamsVioRD_ioRD_0,
  &Kcopy_into_bufferXYstreamsVioMM1
};

_KLmethod_domainGVKe Kcopy_into_bufferXYstreamsVioRD_ioRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kcopy_into_bufferXYstreamsVioRD_ioRD_1,
  &Kcopy_into_bufferXYstreamsVioMM0
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_into_bufferXYstreamsVioMM0,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_into_bufferXYstreamsVioMM1,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_into_bufferXYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K49 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K51,
  &K30,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_17 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "copy-into-buffer!"
};

static _KLsimple_object_vectorGVKd_3 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsequenceGVKd
};

static _KLkeyword_signatureGVKe K52 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K53,
  &K30,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio
};

_KLincremental_generic_functionGVKe Kbuffer_subsequenceYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K63,
  &KPfalseVKi,
  &K64,
  &K61,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kbuffer_subsequenceYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kbuffer_subsequenceYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K71,
  &Kbuffer_subsequenceYstreamsVioMM0I
};

_KLsimple_methodGVKe Kbuffer_subsequenceYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K67,
  &Kbuffer_subsequenceYstreamsVioMM1I
};

_KLmethod_domainGVKe Kbuffer_subsequenceYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kbuffer_subsequenceYstreamsVioMM1
};

_KLmethod_domainGVKe Kbuffer_subsequenceYstreamsVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kbuffer_subsequenceYstreamsVioRD_ioRD_0,
  &Kbuffer_subsequenceYstreamsVioMM0
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_subsequenceYstreamsVioMM0,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_subsequenceYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K65,
  &KDsignature_Lmutable_sequenceG_typesVKi
};

static _KLbyte_stringGVKd_18 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "buffer-subsequence"
};

static _KLsimple_object_vectorGVKd_4 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbufferGYstreamsVio,
  &K66,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsubclassGVKe K66 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_sequenceGVKd
};

static _KLsignatureAvaluesGVKi K67 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K68,
  &K69
};

static _KLsimple_object_vectorGVKd_4 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbufferGYstreamsVio,
  &K70,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

static _KLsingletonGVKd K70 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_byte_vectorGVKe
};

static _KLsignatureAvaluesGVKi K71 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K72,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbufferGYstreamsVio,
  &K73,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsingletonGVKd K73 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLsignatureAvaluesGVKi K74 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K16,
  &KDsignature_LtypeG_typesVKi
};

_KLkeyword_methodGVKe Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K76,
  &key_mep_4,
  &Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I,
  &K77
};

static _KLkeyword_signatureAvaluesGVKi K76 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390465,
  &KPempty_vectorVKi,
  &K80,
  &K81,
  &K16
};

static _KLsimple_object_vectorGVKd_6 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJknown_power_of_two_sizeQ_,
  &KPfalseVKi,
  &KJsize_,
  &KPfalseVKi,
  &KJfill_,
  C('\x0')
};

static _KLsymbolGVKd KJknown_power_of_two_sizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K79
};

static _KLbyte_stringGVKd_24 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "known-power-of-two-size?"
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJknown_power_of_two_sizeQ_,
  &KJsize_,
  &KJfill_
};

static _KLsimple_object_vectorGVKd_3 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbooleanGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

/* Code */

D Kelement_typeVKeMioM0I (D buffer_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:13
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:14
  T2_0 = &KLbyteGVKe;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:13
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMioM0I (D object_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:220
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:222
  T2_0 = &KLbufferGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:220
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I (D initialization_arguments_, D known_power_of_two_sizeQ_, D requested_buffer_size_, D fill_) {
  D known_power_of_two_sizeQF5;
  D T6;
  D the_buffer_;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:65
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:65
  primitive_type_check(known_power_of_two_sizeQ_, &KLbooleanGVKd);
  known_power_of_two_sizeQF5 = known_power_of_two_sizeQ_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:73
  if (known_power_of_two_sizeQF5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:74
    T9 = MEP_APPLY2(&KmakeVKdMioM1, &K10, &KLbufferGYstreamsVio, initialization_arguments_);
    the_buffer_ = T9;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:77
    T6 = CALL1(&Kround_to_power_of_twoYstreams_internalsVio, requested_buffer_size_);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:76
    T10 = MEP_APPLY4(&KmakeVKdMioM1, &K10, &KLbufferGYstreamsVio, &KJsize_, T6, initialization_arguments_);
    the_buffer_ = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:73
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:80
  T11 = SLOT_VALUE_INITD(the_buffer_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:80
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:80
  T13 = primitive_machine_word_subtract_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:80
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:80
  SLOT_VALUE_SETTER(T14, the_buffer_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T15 = SLOT_VALUE(the_buffer_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T16 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T17 = primitive_machine_word_lognot(T16);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T18 = primitive_machine_word_logand(T17,-4);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T19 = primitive_machine_word_logior(T18,1);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  T20 = primitive_cast_raw_as_integer(T19);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:81
  SLOT_VALUE_SETTER(T20, the_buffer_, 6);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:82
  T8_0 = the_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:65
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kround_to_power_of_twoYstreams_internalsVioI (D requested_size_) {
  D T1;
  D T2_0;
  D T2_1;
  D requested_sizeF3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D rounded_size_;
  D T11;
  D T12;
  D number_of_shifts_;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D shiftF31;
  D T32;
  D T33;
  D T34;
  DWORD mx_;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  D T49;
  D T50_0;
  D T50_1;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:85
  requested_sizeF3 = requested_size_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  T9 = requested_sizeF3;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  T16 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  T17 = primitive_machine_word_less_thanQ(1,T16);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  if (T17 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:89
    T8 = requested_sizeF3;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:89
    T18.vector_element_[0] = T8;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:89
    KerrorVKdMM1I(&K9, &T18);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:88
  rounded_size_ = (D) 9;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:92
  number_of_shifts_ = (D) 5;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:93
  T7 = requested_sizeF3;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:93
  T19 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:93
  T20 = primitive_machine_word_less_thanQ(9,T19);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:93
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:94
    T6 = requested_sizeF3;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:94
    T21 = primitive_cast_integer_as_raw(T6);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:94
    T22 = primitive_machine_word_subtract_signal_overflow(T21,4);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:94
    T23 = primitive_cast_raw_as_integer(T22);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:94
    requested_sizeF3 = T23;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:95
    rounded_size_ = (D) 5;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:96
    number_of_shifts_ = (D) 1;
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
      T4 = requested_sizeF3;
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
      T24 = primitive_cast_integer_as_raw(T4);
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
      T25 = primitive_machine_word_equalQ(T24,1);
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
      if (T25 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T5 = requested_sizeF3;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T26 = primitive_cast_integer_as_raw(T5);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T27 = primitive_machine_word_shift_right(T26,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T28 = primitive_machine_word_logand(T27,-4);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T29 = primitive_machine_word_logior(T28,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        T30 = primitive_cast_raw_as_integer(T29);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:99
        requested_sizeF3 = T30;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T12 = rounded_size_;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        shiftF31 = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T38 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T39 = primitive_machine_word_logxor(T38,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        mx_ = T39;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T34 = shiftF31;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T40 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T41 = primitive_machine_word_equalQ(T40,257);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        if (T41 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          shiftF31 = (D) 129;
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          T33 = shiftF31;
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          T37 = mx_;
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          T44 = primitive_cast_integer_as_raw(T33);
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          T43 = primitive_machine_word_shift_right(T44,2);
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          T42 = primitive_machine_word_shift_left_signal_overflow(T37,T43);
          // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
          mx_ = T42;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T32 = shiftF31;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T36 = mx_;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T47 = primitive_cast_integer_as_raw(T32);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T46 = primitive_machine_word_shift_right(T47,2);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T45 = primitive_machine_word_shift_left_signal_overflow(T36,T46);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T48 = primitive_machine_word_logior(T45,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        T49 = primitive_cast_raw_as_integer(T48);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:101
        rounded_size_ = T49;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:102
        T15 = number_of_shifts_;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:102
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T1 = CONGRUENT_CALL2(T15, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:102
        number_of_shifts_ = T1;
        // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
      // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:97
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:93
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:105
  T11 = rounded_size_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:105
  T14 = number_of_shifts_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:105
  T50_0 = T11;
  T50_1 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:85
  T2_0 = T50_0;
  T2_1 = T50_1;
  {
    MV_CHECK_TYPE_PROLOGUE(T50_0);
    primitive_type_check(T2_0, &KLobjectGVKd);
    primitive_type_check(T2_1, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:85
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Kcopy_from_bufferXYstreamsVioMM0I (D buffer_, D buffer_start_index_, D sequence_, D Urest_, D start_index_, D end_index_) {
  D T7;
  D end_indexF8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:205
    T12 = SLOT_VALUE_INITD(sequence_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
    T7 = T12;
    end_indexF8 = T7;
  } else {
    end_indexF8 = end_index_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:206
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(end_indexF8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:206
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T10 = CONGRUENT_CALL5(sequence_, start_index_, buffer_, buffer_start_index_, T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:202
  MV_SET_COUNT(0);
  return(T10);
}

D Kcopy_from_bufferXYstreamsVioMM1I (D buffer_, D buffer_start_index_, D sequence_, D Urest_, D start_index_, D end_index_) {
  D T7;
  D end_indexF8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:212
    T12 = SLOT_VALUE_INITD(sequence_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
    T7 = T12;
    end_indexF8 = T7;
  } else {
    end_indexF8 = end_index_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:213
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(end_indexF8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:213
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T10 = CONGRUENT_CALL5(sequence_, start_index_, buffer_, buffer_start_index_, T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:209
  MV_SET_COUNT(0);
  return(T10);
}

D Kcopy_into_bufferXYstreamsVioMM0I (D buffer_, D buffer_start_index_, D sequence_, D Urest_, D start_index_, D end_index_) {
  D T7;
  D end_indexF8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:177
    T12 = SLOT_VALUE_INITD(sequence_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
    T7 = T12;
    end_indexF8 = T7;
  } else {
    end_indexF8 = end_index_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:178
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(end_indexF8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:178
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T10 = CONGRUENT_CALL5(buffer_, buffer_start_index_, sequence_, start_index_, T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:174
  MV_SET_COUNT(0);
  return(T10);
}

D Kcopy_into_bufferXYstreamsVioMM1I (D buffer_, D buffer_start_index_, D sequence_, D Urest_, D start_index_, D end_index_) {
  D T7;
  D end_indexF8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:184
    T12 = SLOT_VALUE_INITD(sequence_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
    T7 = T12;
    end_indexF8 = T7;
  } else {
    end_indexF8 = end_index_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:185
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(end_indexF8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:185
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T10 = CONGRUENT_CALL5(buffer_, buffer_start_index_, sequence_, start_index_, T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:181
  MV_SET_COUNT(0);
  return(T10);
}

D Kcopy_into_bufferXYstreamsVioMM2I (D buffer_, D buffer_start_index_, D sequence_, D Urest_, D start_index_, D end_index_) {
  D T7;
  D end_indexF8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
  T11 = primitive_idQ(end_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:191
    T12 = SLOT_VALUE_INITD(sequence_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
    T7 = T12;
    end_indexF8 = T7;
  } else {
    end_indexF8 = end_index_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:192
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(end_indexF8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:192
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T10 = CONGRUENT_CALL5(buffer_, buffer_start_index_, sequence_, start_index_, T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:188
  MV_SET_COUNT(0);
  return(T10);
}

D Kbuffer_subsequenceYstreamsVioMM0I (D buffer_, D class_, D start_index_, D end_index_) {
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D seq_;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:130
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:134
  T6 = primitive_cast_integer_as_raw(end_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:134
  T7 = primitive_cast_integer_as_raw(start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:134
  T8 = primitive_machine_word_logxor(T7,1);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:134
  T9 = primitive_machine_word_subtract_signal_overflow(T6,T8);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:134
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:135
  seq_ = KmakeVKdMM33I(class_, &KPempty_vectorVKi, C(' '), T10);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:136
  Kcopy_bytesYbyte_vectorVcommon_dylanMioM0I(seq_, (D) 1, buffer_, start_index_, T10);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:137
  T5_0 = seq_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:130
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbuffer_subsequenceYstreamsVioMM1I (D buffer_, D class_, D start_index_, D end_index_) {
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D seq_;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:140
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:144
  T6 = primitive_cast_integer_as_raw(end_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:144
  T7 = primitive_cast_integer_as_raw(start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:144
  T8 = primitive_machine_word_logxor(T7,1);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:144
  T9 = primitive_machine_word_subtract_signal_overflow(T6,T8);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:144
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:145
  seq_ = KmakeVKdMM25I(class_, &KPempty_vectorVKi, (D) 1, T10);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:146
  Kcopy_bytesYbyte_vectorVcommon_dylanMioM3I(seq_, (D) 1, buffer_, start_index_, T10);
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:147
  T5_0 = seq_;
  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:140
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_5Ebuffer_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJknown_power_of_two_sizeQ_);
    if (T0 != &KJknown_power_of_two_sizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K80, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K77, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_5Ebuffer_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:13
  T0 = KPadd_a_methodVKnI(&Kelement_typeVKe, &Kelement_typeVKeMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I2;
}
I2:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffer.dylan:220
  T0 = KPadd_a_methodVKnI(&Ktype_for_copyVKd, &Ktype_for_copyVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I5;
}
I5:

  return;
}


/* eof */
