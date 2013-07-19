#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(26);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D failing_allocation_class_;
  D failing_allocation_size_;
} _KLout_of_memory_conditionGVKe;

typedef struct {
  D wrapper;
} _KLkeyboard_interruptGVKe;


/* Referenced object declarations */

extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KcerrorVKdMM0I (D, D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
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
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLincremental_generic_functionGVKe KmakeVKd;
D KsignalVKdMM0I (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kdefault_handlerVKdMM4;
D Kdefault_handlerVKdMM4I (D);
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM3;
D Kdefault_handlerVKdMM3I (D);
static _KLbyte_stringGVKd_26 K5;
static _KLbyte_stringGVKd_63 K6;
static _KLsignatureGVKe K7;
static _KLsimple_object_vectorGVKd_1 K8;
extern _KLclassGVKd KLout_of_memory_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLout_of_memory_conditionGVKeW;
static _KLimplementation_classGVKe K11;
static _KLsimple_object_vectorGVKd_2 K12;
extern _KLkeyword_methodGVKe KLout_of_memory_conditionGZ32ZconstructorVKiMM0;
D KLout_of_memory_conditionGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K15;
static _KLsimple_object_vectorGVKd_6 K16;
static _KLbyte_stringGVKd_23 K17;
static _KLkeyword_signatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_4 K19;
static _KLsimple_object_vectorGVKd_2 K20;
extern _KLinstance_slot_descriptorGVKe Kfailing_allocation_classVKiHLout_of_memory_conditionG;
extern _KLinstance_slot_descriptorGVKe Kfailing_allocation_sizeVKiHLout_of_memory_conditionG;
extern _KLsealed_generic_functionGVKe Kfailing_allocation_sizeVKi;
extern _KLgetter_methodGVKi Kfailing_allocation_sizeVKiMM0;
static _KLpairGVKd K25;
static _KLbyte_stringGVKd_23 K26;
extern _KLsealed_generic_functionGVKe Kfailing_allocation_classVKi;
extern _KLgetter_methodGVKi Kfailing_allocation_classVKiMM0;
static _KLpairGVKd K29;
static _KLbyte_stringGVKd_24 K30;
static _KLbyte_stringGVKd_25 K31;
static _KLsignatureGVKe K32;
static _KLsimple_object_vectorGVKd_1 K33;
extern _KLclassGVKd KLkeyboard_interruptGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyboard_interruptGVKeW;
static _KLimplementation_classGVKe K36;
extern _KLkeyword_methodGVKe KLkeyboard_interruptGZ32ZconstructorVKiMM0;
D KLkeyboard_interruptGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_6 K39;
static _KLkeyword_signatureAvaluesGVKi K40;
static _KLbyte_stringGVKd_20 K41;
extern _KLsimple_methodGVKe Kkeyboard_interrupt_polling_threadQ_setterVKe;
D Kkeyboard_interrupt_polling_threadQ_setterVKeI (D);
static _KLsignatureAvaluesGVKi K44;
extern _KLsimple_methodGVKe Kkeyboard_interrupt_polling_threadQVKe;
D Kkeyboard_interrupt_polling_threadQVKeI ();
static _KLsignatureAvaluesGVKi K47;
extern _KLsimple_methodGVKe Kkeyboard_interrupt_pollingQ_setterVKe;
D Kkeyboard_interrupt_pollingQ_setterVKeI (D);
extern _KLsimple_methodGVKe Kkeyboard_interrupt_pollingQVKe;
D Kkeyboard_interrupt_pollingQVKeI ();
extern _KLsimple_methodGVKe Kkeyboard_interruptQ_setterVKe;
D Kkeyboard_interruptQ_setterVKeI (D);
extern _KLsimple_methodGVKe Kkeyboard_interruptQVKe;
D Kkeyboard_interruptQVKeI ();
extern _KLsimple_methodGVKe Kkeyboard_break_handlerVKe;
D Kkeyboard_break_handlerVKeI ();
static _KLsignatureGVKe K58;
extern _KLsimple_methodGVKe Ksignal_low_memoryVKe;
D Ksignal_low_memoryVKeI (D, D);
static _KLsignatureAvaluesGVKi K61;
static _KLsimple_object_vectorGVKd_2 K62;

/* Indirection variables */


/* Variables */

D Thandling_low_memoryQTVKi = &KPunboundVKi;
D Lout_of_memory_conditionGVKe = &KLout_of_memory_conditionGVKe;
D signal_low_memoryVKe = &Ksignal_low_memoryVKe;
D Lkeyboard_interruptGVKe = &KLkeyboard_interruptGVKe;
D keyboard_break_handlerVKe = &Kkeyboard_break_handlerVKe;
D keyboard_interruptQVKe = &Kkeyboard_interruptQVKe;
D keyboard_interruptQ_setterVKe = &Kkeyboard_interruptQ_setterVKe;
D keyboard_interrupt_pollingQVKe = &Kkeyboard_interrupt_pollingQVKe;
D keyboard_interrupt_pollingQ_setterVKe = &Kkeyboard_interrupt_pollingQ_setterVKe;
D keyboard_interrupt_polling_threadQVKe = &Kkeyboard_interrupt_polling_threadQVKe;
D keyboard_interrupt_polling_threadQ_setterVKe = &Kkeyboard_interrupt_polling_threadQ_setterVKe;

/* Objects */

_KLsimple_methodGVKe Kdefault_handlerVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K32,
  &Kdefault_handlerVKdMM4I
};

_KLsimple_methodGVKe Kdefault_handlerVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K7,
  &Kdefault_handlerVKdMM3I
};

static _KLbyte_stringGVKd_26 K5 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "Retry allocation of object"
};

static _KLbyte_stringGVKd_63 K6 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "Out of Memory: failed allocation of object; class: %=  size: %="
};

static _KLsignatureGVKe K7 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K8
};

static _KLsimple_object_vectorGVKd_1 K8 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLout_of_memory_conditionGVKe
};

_KLclassGVKd KLout_of_memory_conditionGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K31,
  &K11,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLout_of_memory_conditionGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K11,
  (D) 1,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K11 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLout_of_memory_conditionGVKe,
  &KLout_of_memory_conditionGVKeW,
  &KPfalseVKi,
  &K12,
  (D) 7433,
  &KLout_of_memory_conditionGZ32ZconstructorVKiMM0,
  &K15,
  &K16,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K12,
  &K12,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kfailing_allocation_classVKiHLout_of_memory_conditionG,
  &Kfailing_allocation_sizeVKiHLout_of_memory_conditionG
};

_KLkeyword_methodGVKe KLout_of_memory_conditionGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K18,
  &key_mep_2,
  &KLout_of_memory_conditionGZ32ZconstructorVKiMM0I,
  &K19
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLserious_conditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLout_of_memory_conditionGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K18 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K20,
  &KDsignature_LobjectG_typesVKi,
  &K8
};

static _KLsimple_object_vectorGVKd_4 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJclass_,
  &KPunboundVKi,
  &KJsize_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJclass_,
  &KJsize_
};

_KLinstance_slot_descriptorGVKe Kfailing_allocation_classVKiHLout_of_memory_conditionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLout_of_memory_conditionGVKe,
  &KJclass_,
  &Kfailing_allocation_classVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kfailing_allocation_sizeVKiHLout_of_memory_conditionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLout_of_memory_conditionGVKe,
  &KJsize_,
  &Kfailing_allocation_sizeVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kfailing_allocation_sizeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K26,
  &K25,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kfailing_allocation_sizeVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfailing_allocation_sizeVKiHLout_of_memory_conditionG
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &Kfailing_allocation_sizeVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "failing-allocation-size"
};

_KLsealed_generic_functionGVKe Kfailing_allocation_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K30,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kfailing_allocation_classVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfailing_allocation_classVKiHLout_of_memory_conditionG
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kfailing_allocation_classVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "failing-allocation-class"
};

static _KLbyte_stringGVKd_25 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "<out-of-memory-condition>"
};

static _KLsignatureGVKe K32 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K33
};

static _KLsimple_object_vectorGVKd_1 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLkeyboard_interruptGVKe
};

_KLclassGVKd KLkeyboard_interruptGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K41,
  &K36,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLkeyboard_interruptGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K36,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K36 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLkeyboard_interruptGVKe,
  &KLkeyboard_interruptGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 7441,
  &KLkeyboard_interruptGZ32ZconstructorVKiMM0,
  &K15,
  &K39,
  (D) 13,
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

_KLkeyword_methodGVKe KLkeyboard_interruptGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K40,
  &key_mep_2,
  &KLkeyboard_interruptGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLkeyboard_interruptGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K40 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K33
};

static _KLbyte_stringGVKd_20 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<keyboard-interrupt>"
};

_KLsimple_methodGVKe Kkeyboard_interrupt_polling_threadQ_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K44,
  &Kkeyboard_interrupt_polling_threadQ_setterVKeI
};

static _KLsignatureAvaluesGVKi K44 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LbooleanG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kkeyboard_interrupt_polling_threadQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K47,
  &Kkeyboard_interrupt_polling_threadQVKeI
};

static _KLsignatureAvaluesGVKi K47 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kkeyboard_interrupt_pollingQ_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K44,
  &Kkeyboard_interrupt_pollingQ_setterVKeI
};

_KLsimple_methodGVKe Kkeyboard_interrupt_pollingQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K47,
  &Kkeyboard_interrupt_pollingQVKeI
};

_KLsimple_methodGVKe Kkeyboard_interruptQ_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K44,
  &Kkeyboard_interruptQ_setterVKeI
};

_KLsimple_methodGVKe Kkeyboard_interruptQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K47,
  &Kkeyboard_interruptQVKeI
};

_KLsimple_methodGVKe Kkeyboard_break_handlerVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K58,
  &Kkeyboard_break_handlerVKeI
};

static _KLsignatureGVKe K58 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Ksignal_low_memoryVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K61,
  &Ksignal_low_memoryVKeI
};

static _KLsignatureAvaluesGVKi K61 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K62,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLintegerGVKd
};

/* Code */

D Kdefault_handlerVKdMM4I (D cond_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:74
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:75
  primitive_exit_application(0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:77
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:74
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdefault_handlerVKdMM3I (D cond_) {
  D T2_0;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:29
  T3 = SLOT_VALUE_INITD(cond_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:30
  T4 = SLOT_VALUE_INITD(cond_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:27
  T5.vector_element_[0] = T3;
  T5.vector_element_[1] = T4;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:27
  KcerrorVKdMM0I(&K5, &K6, &T5);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:31
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:25
  MV_SET_COUNT(1);
  return(T2_0);
}

D KLout_of_memory_conditionGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_failing_allocation_class_, D Uunique_failing_allocation_size_) {
  D T5;
  D Uunique_failing_allocation_classF6;
  D T7;
  D Uunique_failing_allocation_sizeF8;
  D T9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  T11 = primitive_idQ(Uunique_failing_allocation_class_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = &KJclass_;
    T13 = KerrorVKdMM1I(&K17, &T12);
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
    T5 = T13;
    Uunique_failing_allocation_classF6 = T5;
  } else {
    Uunique_failing_allocation_classF6 = Uunique_failing_allocation_class_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  T14 = primitive_idQ(Uunique_failing_allocation_size_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  if (T14 != &KPfalseVKi) {
    T15.vector_element_[0] = &KJsize_;
    T16 = KerrorVKdMM1I(&K17, &T15);
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
    T7 = T16;
    Uunique_failing_allocation_sizeF8 = T7;
  } else {
    Uunique_failing_allocation_sizeF8 = Uunique_failing_allocation_size_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  T9 = primitive_object_allocate_filled(3,&KLout_of_memory_conditionGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_failing_allocation_classF6, T9, 0);
  SLOT_VALUE_SETTER(Uunique_failing_allocation_sizeF8, T9, 1);
  APPLY2(&KinitializeVKd, T9, init_args_);
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:14
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLkeyboard_interruptGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:67
  T3 = primitive_object_allocate_filled(1,&KLkeyboard_interruptGVKeW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:67
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kkeyboard_interrupt_polling_threadQ_setterVKeI (D interrupt_pollingQ_) {
  DBOOL T1;
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:137
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:140
  T1 = primitive_boolean_as_raw(interrupt_pollingQ_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:139
  T2 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:139
  T4 = SLOT_VALUE(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:139
  primitive_keyboard_interrupt_polling_thread_setter(T1,T4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:141
  T3_0 = interrupt_pollingQ_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:137
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kkeyboard_interrupt_polling_threadQVKeI () {
  D T0;
  DBOOL T1;
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:130
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:130
  T4 = SLOT_VALUE(T0, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:130
  T1 = primitive_keyboard_interrupt_polling_thread(T4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:129
  T2 = primitive_raw_as_boolean(T1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:129
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:127
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kkeyboard_interrupt_pollingQ_setterVKeI (D interrupt_pollingQ_) {
  DBOOL T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:121
  T1 = primitive_boolean_as_raw(interrupt_pollingQ_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:120
  primitive_keyboard_interrupt_polling_setter(T1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:122
  T2_0 = interrupt_pollingQ_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:118
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkeyboard_interrupt_pollingQVKeI () {
  DBOOL T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:112
  T0 = primitive_keyboard_interrupt_polling();
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:111
  T1 = primitive_raw_as_boolean(T0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:111
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:109
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkeyboard_interruptQ_setterVKeI (D interruptQ_) {
  DBOOL T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:101
  T1 = primitive_boolean_as_raw(interruptQ_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:100
  primitive_keyboard_interrupt_signaled_setter(T1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:102
  T2_0 = interruptQ_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:98
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkeyboard_interruptQVKeI () {
  DBOOL T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:92
  T0 = primitive_keyboard_interrupt_signaled();
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:91
  T1 = primitive_raw_as_boolean(T0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:91
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:90
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkeyboard_break_handlerVKeI () {
  D T0;
  D T1;
  D T2;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:83
  T0 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:83
  if (T0 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:84
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T1 = CONGRUENT_CALL2(&KLkeyboard_interruptGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:84
    T4 = KsignalVKdMM0I(T1, &KPempty_vectorVKi);
    T3 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:83
    T2 = &KPfalseVKi;
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:83
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:82
  MV_SET_COUNT(0);
  return(T3);
}

D Ksignal_low_memoryVKeI (D class_, D obj_size_) {
  D T2;
  D T3;
  D T4_0;
  D Pold_valueP_;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:45
  T2 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:45
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:46
    T3 = primitive_read_thread_variable(Thandling_low_memoryQTVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:46
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:47
      T4_0 = &KPtrueVKi;
      T9_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
      Pold_valueP_ = primitive_read_thread_variable(Thandling_low_memoryQTVKi);
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
      ENTER_UNWIND_FRAME(T6);
      if (!nlx_setjmp(FRAME_DEST(T6))) {
        // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
        primitive_write_thread_variable(Thandling_low_memoryQTVKi, &KPtrueVKi);
        // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:51
        T12.vector_element_[0] = &KJclass_;
        T12.vector_element_[1] = class_;
        T12.vector_element_[2] = &KJsize_;
        T12.vector_element_[3] = obj_size_;
        // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:51
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T7 = CONGRUENT_CALL2(&KLout_of_memory_conditionGVKe, &T12);
        // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:51
        KsignalVKdMM0I(T7, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
        FALL_THROUGH_UNWIND(&KPfalseVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
      primitive_write_thread_variable(Thandling_low_memoryQTVKi, Pold_valueP_);
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:49
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:53
      T8_0 = &KPfalseVKi;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:46
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:56
    T10_0 = &KPtrueVKi;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:42
  MV_SET_COUNT(1);
  return(T11_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dylan_mm_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dylan_mm_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:12
  Thandling_low_memoryQTVKi = primitive_allocate_thread_variable(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-mm.dylan:12
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
