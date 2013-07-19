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
  D raw_pointer_address_;
} _KLc_raw_signed_charTGVKc;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D alignment_of_;
  D size_of_;
  D referenced_type_;
  D concrete_pointer_type_;
  D abstract_pointer_type_;
} _KLc_automatic_pointer_designator_classGVKi;

typedef struct {
  D wrapper;
} _KLc_raw_signed_charGVKc;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D alignment_of_;
  D size_of_;
  D referenced_type_;
  D concrete_pointer_type_;
  D abstract_pointer_type_;
} _KLdesignator_classGVKc;

typedef struct {
  D wrapper;
  D raw_pointer_address_;
} _KLc_pointerGVKc;

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
} _KLkeyword_methodGVKe;

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(19);

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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);

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
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
extern _KLc_automatic_pointer_designator_classGVKi KLc_raw_signed_charTGVKc;
extern _KLclassGVKd KLc_automatic_pointer_designator_classGVKi;
extern _KLmm_wrapperGVKi_0 KLc_automatic_pointer_designator_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLc_raw_signed_charTGVKcW;
extern _KLdesignator_classGVKc KLc_raw_signed_charGVKc;
extern _KLclassGVKd KLdesignator_classGVKc;
extern _KLmm_wrapperGVKi_0 KLdesignator_classGVKcW;
extern _KLmm_wrapperGVKi_0 KLc_raw_signed_charGVKcW;
extern _KLdesignator_classGVKc KLc_pointerGVKc;
extern _KLmm_wrapperGVKi_1 KLc_pointerGVKcW;
D Kdefaulted_initialization_argumentsVKiI (D);
D Kconcatenate_2VKeMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLkeyword_methodGVKe Kdefault_initializeVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kfind_or_create_class_slot_storageVKiI (D, D, D);
D Kallocation_attributesVKiMM0I (D, D);
extern _KLsealed_generic_functionGVKe Ksystem_allocate_repeated_instanceVKe;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLmoduleGVKe Kdylan_c_ffi_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);

/* Defined object declarations */

extern _KLsimple_methodGVKe Kmake_c_pointer_internalVKc;
D Kmake_c_pointer_internalVKcI (D, D, D);
D Kallocate_c_pointer_instanceVKiI (D, D);
static _KLsymbolGVKd KJraw_pointer_address_;
static _KLbyte_stringGVKd_19 K4;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K5;
static _KLsignatureAvaluesGVKi K6;
static _KLsimple_object_vectorGVKd_3 K7;
static _KLsimple_object_vectorGVKd_1 K8;
extern _KLincremental_generic_functionGVKe Kpointer_value_addressVKc;
static _KLkeyword_signatureAvaluesGVKi K10;
static _KLbyte_stringGVKd_21 K11;
static _KLsimple_object_vectorGVKd_1 K12;
static _KLsymbolGVKd KJindex_;
static _KLbyte_stringGVKd_5 K14;
extern _KLincremental_generic_functionGVKe Kpointer_value_setterVKc;
static _KLkeyword_signatureGVKe K16;
static _KLbyte_stringGVKd_20 K17;
static _KLsimple_object_vectorGVKd_2 K18;
extern _KLincremental_generic_functionGVKe Kpointer_valueVKc;
static _KLkeyword_signatureGVKe K20;
static _KLbyte_stringGVKd_13 K21;
extern _KLsimple_methodGVKe Kconcrete_classVKcMM0;
D Kconcrete_classVKcMM0I (D class_);
static _KLsignatureAvaluesGVKi K24;
static _KLsimple_object_vectorGVKd_1 K25;
static _KLsimple_object_vectorGVKd_1 K26;
static _KLunionGVKe K27;
static _KLsingletonGVKd K28;
extern _KLsimple_methodGVKe Kconcrete_class_setterVKcMM0;
D Kconcrete_class_setterVKcMM0I (D cclass_, D class_);
static _KLsignatureAvaluesGVKi K31;
static _KLsimple_object_vectorGVKd_2 K32;

/* Indirection variables */

static D IKJraw_pointer_address_ = &KJraw_pointer_address_;
static D IKJindex_ = &KJindex_;

/* Variables */

D concrete_class_setterVKc = &Kconcrete_class_setterVKcMM0;
D concrete_classVKc = &Kconcrete_classVKcMM0;
D pointer_valueVKc = &Kpointer_valueVKc;
D pointer_value_setterVKc = &Kpointer_value_setterVKc;
D pointer_value_addressVKc = &Kpointer_value_addressVKc;
D make_c_pointer_internalVKc = &Kmake_c_pointer_internalVKc;
D Lc_raw_charGVKc = &KLc_raw_signed_charGVKc;
D Lc_raw_charTGVKc = &KLc_raw_signed_charTGVKc;

/* Objects */

_KLsimple_methodGVKe Kmake_c_pointer_internalVKc = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K6,
  &Kmake_c_pointer_internalVKcI
};

static _KLsymbolGVKd KJraw_pointer_address_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K4
};

static _KLbyte_stringGVKd_19 K4 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "raw-pointer-address"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K5 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 524345,
  &KPfalseVKi,
  &cache_header_engine_5,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksystem_allocate_repeated_instanceVKe
};

static _KLsignatureAvaluesGVKi K6 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K7,
  &K8
};

static _KLsimple_object_vectorGVKd_3 K7 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdesignator_classGVKc,
  &KLmachine_wordGVKe,
  &KLsimple_object_vectorGVKd
};

static _KLsimple_object_vectorGVKd_1 K8 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLc_pointerGVKc
};

_KLincremental_generic_functionGVKe Kpointer_value_addressVKc = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K10,
  &KPfalseVKi,
  &K11,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_c_ffi_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureAvaluesGVKi K10 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K8,
  &K12,
  &KDsignature_LobjectG_typesVKi,
  &K8
};

static _KLbyte_stringGVKd_21 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "pointer-value-address"
};

static _KLsimple_object_vectorGVKd_1 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJindex_
};

static _KLsymbolGVKd KJindex_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K14
};

static _KLbyte_stringGVKd_5 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "index"
};

_KLincremental_generic_functionGVKe Kpointer_value_setterVKc = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K16,
  &KPfalseVKi,
  &K17,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_c_ffi_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureGVKe K16 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K18,
  &K12,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_20 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pointer-value-setter"
};

static _KLsimple_object_vectorGVKd_2 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLc_pointerGVKc
};

_KLincremental_generic_functionGVKe Kpointer_valueVKc = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K20,
  &KPfalseVKi,
  &K21,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_c_ffi_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureGVKe K20 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K8,
  &K12,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_13 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "pointer-value"
};

_KLsimple_methodGVKe Kconcrete_classVKcMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K24,
  &Kconcrete_classVKcMM0I
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K25,
  &K26
};

static _KLsimple_object_vectorGVKd_1 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdesignator_classGVKc
};

static _KLsimple_object_vectorGVKd_1 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K27
};

static _KLunionGVKe K27 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K28,
  &KLdesignator_classGVKc
};

static _KLsingletonGVKd K28 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kconcrete_class_setterVKcMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K31,
  &Kconcrete_class_setterVKcMM0I
};

static _KLsignatureAvaluesGVKi K31 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K32,
  &K26
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K27,
  &KLdesignator_classGVKc
};

/* Code */

D Kmake_c_pointer_internalVKcI (D class_, D address_, D init_args_) {
  D T3;
  D instance_;
  DWORD raw_address_;
  D T6;
  D T7_0;
  D init_argsF8;

  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:62
  T3 = Kallocate_c_pointer_instanceVKiI(class_, init_args_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:62
  instance_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:63
  raw_address_ = primitive_unwrap_machine_word(address_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:65
  T6 = Kdefaulted_initialization_argumentsVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:65
  init_argsF8 = Kconcatenate_2VKeMM1I(init_args_, T6);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:66
  APPLY5(&Kdefault_initializeVKi, class_, instance_, IKJraw_pointer_address_, raw_address_, init_argsF8);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:68
  APPLY2(&KinitializeVKd, instance_, init_argsF8);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:69
  T7_0 = instance_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:57
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kallocate_c_pointer_instanceVKiI (D class_, D init_args_) {
  DWORD i_T, i_;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D repeated_slotQ_;
  D repeated_slot_type_;
  D repeated_size_;
  D fillF7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D T24_0;
  D T25;
  D T26_0;
  D T27;
  DWORD T28;

  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:75
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:77
  T9 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  T10 = SLOT_VALUE_INITD(T9, 20);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  T11 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
    T14 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
    T13 = primitive_machine_word_less_thanQ(i_,T12);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:84
      Kfind_or_create_class_slot_storageVKiI(T9, T14, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:89
  T3_0 = Kallocation_attributesVKiMM0I(T9, init_args_);
  T3_1 = MV_GET_ELT(1);
  T3_2 = MV_GET_ELT(2);
  T3_3 = MV_GET_ELT(3);
  T3_4 = MV_GET_ELT(4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  repeated_slotQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  repeated_slot_type_ = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  repeated_size_ = T3_3;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:83
  fillF7 = T3_4;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:91
  if (repeated_slotQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:92
    ENGINE_NODE_CALL_PROLOG(&Ksystem_allocate_repeated_instanceVKe, &K5, 5);
    T16_0 = ENGINE_NODE_CALL5(&K5, class_, repeated_slot_type_, &KPunboundVKi, repeated_size_, fillF7);
    T8_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T19 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T20 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T21 = primitive_machine_word_logand(T20,262140);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T22 = primitive_machine_word_add_signal_overflow(5,T21);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T23 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T25 = SLOT_VALUE_INITD(T9, 2);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T26_0 = T25;
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T24_0 = T26_0;
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T27 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T28 = primitive_machine_word_shift_right(T21,2);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T17 = primitive_object_allocate_filled(T23,T27,T28,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:95
    T18 = T17;
    MV_SET_ELT(0, T17);
    MV_SET_COUNT(1);
    T8_0 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:75
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kconcrete_classVKcMM0I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:105
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:108
  T2_0 = class_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:105
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_class_setterVKcMM0I (D cclass_, D class_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:114
  T3_0 = cclass_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-c-ffi-stubs.dylan:111
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dylan_c_ffi_stubs_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJraw_pointer_address_);
    if (T0 != &KJraw_pointer_address_) {
      IKJraw_pointer_address_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJindex_);
    if (T0 != &KJindex_) {
      primitive_repeated_slot_value_setter(T0, &K12, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dylan_c_ffi_stubs_for_user () {
  return;
}


/* eof */
