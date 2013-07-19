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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(14);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(256);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLexclusive_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLsynchronizationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

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
  D handle1_;
  D synchronization_name_;
  D associated_lock_;
} _KLnotificationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
  D initial_count_;
  D maximum_count_;
} _KLsemaphoreGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLthreadGYthreadsVdylan;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D handle1_;
} _KLportable_containerGYthreads_primitivesVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
} _KLportable_double_containerGYthreads_primitivesVdylan;


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
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kthreads_primitives_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLexclusive_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLexclusive_lockGYthreadsVdylanW;
extern _KLclassGVKd KLsynchronizationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronizationGYthreadsVdylanW;
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLnotificationGYthreadsVdylan;
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLclassGVKd KLrecursive_lockGYthreadsVdylan;
extern _KLclassGVKd KLsemaphoreGYthreadsVdylan;
extern _KLclassGVKd KLthreadGYthreadsVdylan;

/* Defined object declarations */

extern _KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan;
extern _KLclassGVKd KLportable_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_containerGYthreads_primitivesVdylanW;
extern _KLclassGVKd KLportable_double_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_double_containerGYthreads_primitivesVdylanW;
extern _KLinstance_slot_descriptorGVKe Khandle1Ythreads_primitivesVdylanHLportable_containerG;
extern _KLinstance_slot_descriptorGVKe Khandle2Ythreads_primitivesVdylanHLportable_double_containerG;
extern _KLsealed_generic_functionGVKe Khandle2Ythreads_primitivesVdylan;
extern _KLsealed_generic_functionGVKe Khandle2_setterYthreads_primitivesVdylan;
extern _KLsetter_methodGVKi Khandle2_setterYthreads_primitivesVdylanMM0;
static _KLpairGVKd K10;
static _KLsignatureGVKe K11;
static _KLbyte_stringGVKd_14 K12;
extern _KLgetter_methodGVKi Khandle2Ythreads_primitivesVdylanMM0;
static _KLpairGVKd K14;
static _KLsignatureGVKe K15;
static _KLbyte_stringGVKd_7 K16;
extern _KLsealed_generic_functionGVKe Khandle1Ythreads_primitivesVdylan;
extern _KLsealed_generic_functionGVKe Khandle1_setterYthreads_primitivesVdylan;
extern _KLsetter_methodGVKi Khandle1_setterYthreads_primitivesVdylanMM0;
static _KLpairGVKd K20;
static _KLsignatureAvaluesGVKi K21;
static _KLbyte_stringGVKd_14 K22;
static _KLsimple_object_vectorGVKd_2 K23;
static _KLsimple_object_vectorGVKd_1 K24;
extern _KLgetter_methodGVKi Khandle1Ythreads_primitivesVdylanMM0;
static _KLpairGVKd K26;
static _KLsignatureAvaluesGVKi K27;
static _KLbyte_stringGVKd_7 K28;
static _KLimplementation_classGVKe K29;
static _KLsimple_object_vectorGVKd_2 K30;
static _KLsimple_object_vectorGVKd_1 K31;
static _KLsimple_object_vectorGVKd_6 K32;
static _KLsimple_object_vectorGVKd_1 K33;
static _KLbyte_stringGVKd_27 K34;
static _KLimplementation_classGVKe K35;
static _KLsimple_object_vectorGVKd_1 K36;
static _KLsimple_object_vectorGVKd_1 K37;
static _KLsimple_object_vectorGVKd_6 K38;
static _KLsimple_object_vectorGVKd_3 K39;
static _KLsimple_object_vectorGVKd_3 K40;
static _KLbyte_stringGVKd_20 K41;
static _KLsingletonGVKd K42;
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLpairGVKd K48;

/* Indirection variables */


/* Variables */

D handle1Ythreads_primitivesVdylan = &Khandle1Ythreads_primitivesVdylan;
D handle1_setterYthreads_primitivesVdylan = &Khandle1_setterYthreads_primitivesVdylan;
D handle2Ythreads_primitivesVdylan = &Khandle2Ythreads_primitivesVdylan;
D handle2_setterYthreads_primitivesVdylan = &Khandle2_setterYthreads_primitivesVdylan;
D Lportable_containerGYthreads_primitivesVdylan = &KLportable_containerGYthreads_primitivesVdylan;
D Lportable_double_containerGYthreads_primitivesVdylan = &KLportable_double_containerGYthreads_primitivesVdylan;
D Loptional_nameGYthreads_primitivesVdylan = &KLoptional_nameGYthreads_primitivesVdylan;

/* Objects */

_KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLbyte_stringGVKd,
  &K42
};

_KLclassGVKd KLportable_containerGYthreads_primitivesVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K41,
  &K35,
  (D) 1,
  &Kthreads_primitives_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLportable_containerGYthreads_primitivesVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K35,
  (D) 1,
  6,
  33554439,
  (D) 5,
  0
};

_KLclassGVKd KLportable_double_containerGYthreads_primitivesVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K34,
  &K29,
  (D) 1,
  &Kthreads_primitives_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLportable_double_containerGYthreads_primitivesVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K29,
  (D) 1,
  10,
  33554439,
  (D) 5,
  2
};

_KLinstance_slot_descriptorGVKe Khandle1Ythreads_primitivesVdylanHLportable_containerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KPfalseVKi,
  &Khandle1Ythreads_primitivesVdylan,
  &Khandle1_setterYthreads_primitivesVdylan,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Khandle2Ythreads_primitivesVdylanHLportable_double_containerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KPfalseVKi,
  &Khandle2Ythreads_primitivesVdylan,
  &Khandle2_setterYthreads_primitivesVdylan,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Khandle2Ythreads_primitivesVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K15,
  &KPfalseVKi,
  &K16,
  &K14,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khandle2_setterYthreads_primitivesVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K11,
  &KPfalseVKi,
  &K12,
  &K10,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Khandle2_setterYthreads_primitivesVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Khandle2Ythreads_primitivesVdylanHLportable_double_containerG
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &Khandle2_setterYthreads_primitivesVdylanMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K11 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_14 K12 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "handle2-setter"
};

_KLgetter_methodGVKi Khandle2Ythreads_primitivesVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandle2Ythreads_primitivesVdylanHLportable_double_containerG
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Khandle2Ythreads_primitivesVdylanMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K15 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_7 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "handle2"
};

_KLsealed_generic_functionGVKe Khandle1Ythreads_primitivesVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K27,
  &KPfalseVKi,
  &K28,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khandle1_setterYthreads_primitivesVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K21,
  &KPfalseVKi,
  &K22,
  &K20,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Khandle1_setterYthreads_primitivesVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &Khandle1_setterYthreads_primitivesVdylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K23,
  &K24
};

static _KLbyte_stringGVKd_14 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "handle1-setter"
};

static _KLsimple_object_vectorGVKd_2 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

_KLgetter_methodGVKi Khandle1Ythreads_primitivesVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Khandle1Ythreads_primitivesVdylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K27 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &K24
};

static _KLbyte_stringGVKd_7 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "handle1"
};

static _KLimplementation_classGVKe K29 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 461111305,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KLportable_double_containerGYthreads_primitivesVdylanW,
  &KPfalseVKi,
  &K30,
  (D) 7057,
  &Kdefault_class_constructorVKi,
  &K31,
  &K32,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K48,
  &KPempty_vectorVKi,
  &K33,
  &K30,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Khandle2Ythreads_primitivesVdylanHLportable_double_containerG
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLportable_containerGYthreads_primitivesVdylan
};

static _KLsimple_object_vectorGVKd_6 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Khandle2Ythreads_primitivesVdylanHLportable_double_containerG
};

static _KLbyte_stringGVKd_27 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<portable-double-container>"
};

static _KLimplementation_classGVKe K35 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 326893573,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLportable_containerGYthreads_primitivesVdylanW,
  &KPfalseVKi,
  &K36,
  (D) 7049,
  &Kdefault_class_constructorVKi,
  &K37,
  &K38,
  (D) 5,
  &K39,
  &K40,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K43,
  &KPempty_vectorVKi,
  &K36,
  &K36,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG
};

static _KLsimple_object_vectorGVKd_1 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  (D) 9,
  (D) 13,
  (D) 17
};

static _KLsimple_object_vectorGVKd_3 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLexclusive_lockGYthreadsVdylan,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan
};

static _KLbyte_stringGVKd_20 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<portable-container>"
};

static _KLsingletonGVKd K42 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &KLnotificationGYthreadsVdylan,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_lockGYthreadsVdylan,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &KLrecursive_lockGYthreadsVdylan,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &KLsemaphoreGYthreadsVdylan,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &KLthreadGYthreadsVdylan,
  &KPempty_listVKi
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_dylan__X_portable_container_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_portable_container_for_user () {
  return;
}


/* eof */
