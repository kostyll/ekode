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
} _KLsealed_generic_functionGVKe;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLslot_descriptorGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_slot_errorGVKi;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(29);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

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
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D KmakeVKdMM23I (D, D, D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KsubiclassQVKiI (D xiclass_, D x_, D yiclass_, D y_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Kobject_classVKdI (D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLsealed_generic_functionGVKe Khas_instancesQVKe;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D KmemberQVKdMM2I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
D KPregister_subclass_dependent_genericVKeI (D generic_, D class_);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D KEEVKdI (D, D);
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_slot_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_slot_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D Kunbound_class_slotVKeI (D, D);
D Kgrounded_subtypeQVKeI (D, D);
D Kconcrete_subtypeQVKeI (D, D, D);
D Kgrounded_has_instancesQVKeI (D, D);
D Kconcatenate_2VKeMM1I (D, D);
D Kapplicable_method_assuming_number_requiredQVKiI (D, D);
D Kevery_2QVKiI (D, D, D);
extern _KLsimple_methodGVKe Kapplicable_argumentQVKi;
D Kapplicable_argumentQVKiI (D, D);
static _KLsignatureAvaluesGVKi K9;
D Kconcrete_subtypeQ_internalVKiI (D, D);
static _KLbyte_stringGVKd_29 K11;
extern _KLsimple_methodGVKe Kunbound_class_slotVKe;
static _KLsignatureAvaluesGVKi K13;
static _KLsimple_object_vectorGVKd_2 K14;
static _KLsimple_object_vectorGVKd_1 K15;
extern _KLsimple_methodGVKe Kunbound_repeated_slotVKe;
D Kunbound_repeated_slotVKeI (D, D);
static _KLbyte_stringGVKd_32 K18;
extern _KLsimple_methodGVKe Kunbound_instance_slotVKe;
D Kunbound_instance_slotVKeI (D, D);
extern _KLsimple_methodGVKe Kgrounded_has_instancesQVKe;
static _KLsignatureGVKe K22;
static _KLsimple_object_vectorGVKd_2 K23;
extern _KLsimple_methodGVKe Kconcrete_subtypeQVKe;
static _KLsignatureAvaluesGVKi K25;
static _KLsimple_object_vectorGVKd_3 K26;
static _KLunionGVKe K27;
static _KLsingletonGVKd K28;
extern _KLsimple_methodGVKe Kgrounded_subtypeQVKe;
static _KLsignatureGVKe K30;
extern _KLsimple_methodGVKe Kgrounded_instanceQVKe;
D Kgrounded_instanceQVKeI (D o_, D type_);
static _KLsignatureGVKe K33;
static _KLsimple_object_vectorGVKd_2 K34;
extern _KLsealed_generic_functionGVKe Kconcatenate_2VKe;
extern _KLsimple_methodGVKe Kconcatenate_2VKeMM0;
D Kconcatenate_2VKeMM0I (D, D);
extern _KLsimple_methodGVKe Kconcatenate_2VKeMM1;
static _KLpairGVKd K39;
static _KLpairGVKd K40;
static _KLbyte_stringGVKd_13 K41;
static _KLsignatureAvaluesGVKi K42;
static _KLsignatureAvaluesGVKi K43;

/* Indirection variables */


/* Variables */

D concatenate_2VKe = &Kconcatenate_2VKe;
D grounded_instanceQVKe = &Kgrounded_instanceQVKe;
D grounded_subtypeQVKe = &Kgrounded_subtypeQVKe;
D concrete_subtypeQVKe = &Kconcrete_subtypeQVKe;
D grounded_has_instancesQVKe = &Kgrounded_has_instancesQVKe;
D unbound_instance_slotVKe = &Kunbound_instance_slotVKe;
D unbound_repeated_slotVKe = &Kunbound_repeated_slotVKe;
D unbound_class_slotVKe = &Kunbound_class_slotVKe;
D Tconservative_concrete_subtypeQVKi = &KPfalseVKi;

/* Objects */

_KLsimple_methodGVKe Kapplicable_argumentQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K9,
  &Kapplicable_argumentQVKiI
};

static _KLsignatureAvaluesGVKi K9 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_29 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "The %s slot is unbound in %s."
};

_KLsimple_methodGVKe Kunbound_class_slotVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K13,
  &Kunbound_class_slotVKeI
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K14,
  &K15
};

static _KLsimple_object_vectorGVKd_2 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

_KLsimple_methodGVKe Kunbound_repeated_slotVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K13,
  &Kunbound_repeated_slotVKeI
};

static _KLbyte_stringGVKd_32 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "%s at index %s is unbound in %s."
};

_KLsimple_methodGVKe Kunbound_instance_slotVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K13,
  &Kunbound_instance_slotVKeI
};

_KLsimple_methodGVKe Kgrounded_has_instancesQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K22,
  &Kgrounded_has_instancesQVKeI
};

static _KLsignatureGVKe K22 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K23
};

static _KLsimple_object_vectorGVKd_2 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLtypeGVKd
};

_KLsimple_methodGVKe Kconcrete_subtypeQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K25,
  &Kconcrete_subtypeQVKeI
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K26,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLtypeGVKd,
  &K27
};

static _KLunionGVKe K27 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K28,
  &KLgeneric_functionGVKd
};

static _KLsingletonGVKd K28 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kgrounded_subtypeQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K30,
  &Kgrounded_subtypeQVKeI
};

static _KLsignatureGVKe K30 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &KDsignature_LtypeG_typesVKi
};

_KLsimple_methodGVKe Kgrounded_instanceQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K33,
  &Kgrounded_instanceQVKeI
};

static _KLsignatureGVKe K33 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K34
};

static _KLsimple_object_vectorGVKd_2 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLtypeGVKd
};

_KLsealed_generic_functionGVKe Kconcatenate_2VKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K41,
  &K39,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kconcatenate_2VKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K43,
  &Kconcatenate_2VKeMM0I
};

_KLsimple_methodGVKe Kconcatenate_2VKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K42,
  &Kconcatenate_2VKeMM1I
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_2VKeMM0,
  &K40
};

static _KLpairGVKd K40 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_2VKeMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "concatenate-2"
};

static _KLsignatureAvaluesGVKi K42 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lsimple_object_vectorG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsignatureAvaluesGVKi K43 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

/* Code */

D Kunbound_class_slotVKeI (D inst_, D offset_) {
  D T2;
  D T3;
  D sd_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T16 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:299
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:301
  T8 = primitive_instanceQ(inst_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:301
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:301
    T9 = inst_;
    T3 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:304
    T2 = Kobject_classVKdI(inst_);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:301
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:307
  T10 = SLOT_VALUE(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:307
  T11 = SLOT_VALUE_INITD(T10, 20);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:307
  T13 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:307
  T12 = REPEATED_D_SLOT_VALUE_TAGGED(T11, 1, T13);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:306
  sd_ = T12;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:310
  T14 = SLOT_VALUE_INITD(sd_, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:310
  if (T14 != &KPfalseVKi) {
    T5 = T14;
  } else {
    T5 = sd_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:310
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:310
  T15.vector_element_[0] = T5;
  T15.vector_element_[1] = inst_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:310
  T6 = KlistVKdI(&T15);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:308
  T16.vector_element_[0] = &KJformat_string_;
  T16.vector_element_[1] = &K11;
  T16.vector_element_[2] = &KJformat_arguments_;
  T16.vector_element_[3] = T6;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:308
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T16);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:308
  T17_0 = KerrorVKdMM0I(T7, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:299
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kgrounded_subtypeQVKeI (D type1_, D type2_) {
  D T2;
  D type1F3;
  D type2F4;
  D T5;
  D T6;
  D T7;
  D type1F8;
  D type2F9;
  D T10;
  D type1F11;
  D type2F12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:118
  T19 = primitive_instanceQ(type1_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:118
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:118
    T20 = primitive_instanceQ(type2_,&KLclassGVKd);
    T2 = T20;
  } else {
    T2 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:119
    type1F3 = type1_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:120
    type2F4 = type2_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:121
    T22 = SLOT_VALUE(type1F3, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:121
    T23 = SLOT_VALUE(type2F4, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:121
    T21_0 = KsubiclassQVKiI(T22, type1F3, T23, type2F4);
    T18 = T21_0;
    MV_SET_COUNT(1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:122
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:122
      T24 = primitive_instanceQ(type2_,&KLsingletonGVKd);
      T5 = T24;
    } else {
      T5 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:122
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:123
      T6 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T17 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:124
      T25 = primitive_instanceQ(type1_,&KLsingletonGVKd);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:124
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:124
        T26 = primitive_instanceQ(type2_,&KLclassGVKd);
        T7 = T26;
      } else {
        T7 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:124
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:125
        type1F8 = type1_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:126
        type2F9 = type2_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:127
        T27 = SLOT_VALUE_INITD(type1F8, 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:127
        T28 = primitive_instanceQ(T27,type2F9);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:127
        T29 = T28;
        MV_SET_ELT(0, T28);
        MV_SET_COUNT(1);
        T16 = T29;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:128
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:128
          T30 = primitive_instanceQ(type2_,&KLsingletonGVKd);
          T10 = T30;
        } else {
          T10 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:128
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:129
          type1F11 = type1_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:130
          type2F12 = type2_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:131
          T31 = SLOT_VALUE_INITD(type1F11, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:131
          T32 = SLOT_VALUE_INITD(type2F12, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:131
          T13 = KEEVKdI(T31, T32);
          T15 = T13;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:133
          CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
          T14 = CONGRUENT_CALL2(type1_, type2_);
          T15 = T14;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
    T18 = T17;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:116
  return(T18);
}

D Kconcrete_subtypeQVKeI (D type1_, D type2_, D dep_) {
  D UtmpF4;
  D T5_0;
  D T6;
  D T7;
  D c1_;
  D c2_;
  D UtmpF10;
  D UtmpF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D stQ_;
  D T18;
  D T19_0;
  D T20_0;
  D T21_0;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  D T41_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:155
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:157
  UtmpF4 = Kgrounded_subtypeQVKeI(type1_, type2_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:157
  if (UtmpF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:157
    T5_0 = UtmpF4;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:157
    T41_0 = T5_0;
    T24_0 = T41_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    T25 = primitive_idQ(type1_,&KLobjectGVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    if (T25 != &KPfalseVKi) {
      T6 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:159
      T26 = primitive_instanceQ(type1_,&KLclassGVKd);
      T6 = T26;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:160
      T27 = primitive_instanceQ(type2_,&KLclassGVKd);
      T7 = T27;
    } else {
      T7 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:162
      c1_ = type1_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:163
      c2_ = type2_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:164
      T28 = SLOT_VALUE(c1_, 2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:165
      T29 = SLOT_VALUE(c2_, 2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      UtmpF10 = KsubiclassQVKiI(T29, c2_, T28, c1_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      if (UtmpF10 != &KPfalseVKi) {
        UtmpF11 = UtmpF10;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:170
        T30 = SLOT_VALUE_INITD(T29, 11);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:170
        T31 = KmemberQVKdMM2I(c1_, T30, &KPempty_vectorVKi, &KEEVKd);
        UtmpF11 = T31;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      if (UtmpF11 != &KPfalseVKi) {
        T12 = UtmpF11;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:171
        T32 = SLOT_VALUE_INITD(T28, 11);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:171
        T33 = KmemberQVKdMM2I(c2_, T32, &KPempty_vectorVKi, &KEEVKd);
        T12 = T33;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
        T13 = Tconservative_concrete_subtypeQVKi;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
        T34 = primitive_not(T13);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
          T35 = SLOT_VALUE_INITD(T28, 0);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
          T36 = primitive_cast_integer_as_raw(T35);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
          T37 = primitive_machine_word_logbitQ(27,T36);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
          if (T37 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
            T38 = SLOT_VALUE_INITD(T29, 0);
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
            T39 = primitive_cast_integer_as_raw(T38);
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
            T40 = primitive_machine_word_logbitQ(27,T39);
            T14 = T40;
          } else {
            T14 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
          T15 = T14;
        } else {
          T15 = T34;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:173
        T16 = T15;
      } else {
        T16 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:176
        stQ_ = Kconcrete_subtypeQ_internalVKiI(c1_, c2_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:177
        if (stQ_ != &KPfalseVKi) {
          T18 = dep_;
        } else {
          T18 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:177
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:177
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:178
          KPregister_subclass_dependent_genericVKeI(dep_, c1_);
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:177
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:180
        T19_0 = stQ_;
        T21_0 = T19_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
        T20_0 = &KPfalseVKi;
        T21_0 = T20_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:169
      T23_0 = T21_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
      T22_0 = &KPfalseVKi;
      T23_0 = T22_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:158
    T24_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:157
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:155
  MV_SET_COUNT(1);
  return(T24_0);
}

D Kgrounded_has_instancesQVKeI (D class_, D type_) {
  D typeF2;
  D T3;
  D typeF4;
  D T5;
  D typeF6;
  D T7;
  D typeF8;
  D T9;
  D typeF10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:200
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
  T18 = primitive_instanceQ(type_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:203
    typeF2 = type_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    T20 = SLOT_VALUE(class_, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    T21 = SLOT_VALUE(typeF2, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    T19_0 = KsubiclassQVKiI(T20, class_, T21, typeF2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    T22 = T19_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:205
      T23 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_ELT(1, &KPtrueVKi);
      MV_SET_COUNT(2);
      T3 = T23;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:207
      T24 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_ELT(1, &KPfalseVKi);
      MV_SET_COUNT(2);
      T3 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:204
    T17 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
    T25 = primitive_instanceQ(type_,&KLsingletonGVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:210
      typeF4 = type_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:211
      T26 = SLOT_VALUE_INITD(typeF4, 1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:211
      T5 = Kobject_classVKdI(T26);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:211
      T27 = primitive_idQ(class_,T5);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:211
      T28 = T27;
      MV_SET_ELT(0, T27);
      MV_SET_ELT(1, &KPfalseVKi);
      MV_SET_COUNT(2);
      T16 = T28;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
      T29 = primitive_instanceQ(type_,&KLunionGVKe);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:213
        typeF6 = type_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:214
        T7 = CALL3(&Khas_instancesQVKe, class_, typeF6, Dempty_subjunctive_class_universeVKe);
        T15 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
        T30 = primitive_instanceQ(type_,&KLsubclassGVKe);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
        if (T30 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:216
          typeF8 = type_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:217
          T9 = CALL3(&Khas_instancesQVKe, class_, typeF8, Dempty_subjunctive_class_universeVKe);
          T14 = T9;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
          T31 = primitive_instanceQ(type_,&KLlimited_integerGVKe);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
          if (T31 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:219
            typeF10 = type_;
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:220
            T11 = CALL3(&Khas_instancesQVKe, class_, typeF10, Dempty_subjunctive_class_universeVKe);
            T13 = T11;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:222
            T12 = CALL3(&Khas_instancesQVKe, class_, type_, Dempty_subjunctive_class_universeVKe);
            T13 = T12;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
          T14 = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
      T16 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:200
  return(T17);
}

D Kconcatenate_2VKeMM1I (D v1_, D v2_) {
  D T3_0;
  D T4_0;
  DWORD indexF5T, indexF5;
  DWORD index_2_T, index_2_;
  DWORD indexF7T, indexF7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  D T25;
  DWORD T26;
  DWORD T27;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:25
  T11 = SLOT_VALUE_INITD(v1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:26
  T12 = SLOT_VALUE_INITD(v2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:27
  T13 = primitive_idQ(T11,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:27
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:28
    T3_0 = v2_;
    T10_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:29
    T14 = primitive_idQ(T12,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:27
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:30
      T4_0 = v1_;
      T9_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T15 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T16 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T17 = primitive_machine_word_logxor(T16,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T18 = primitive_machine_word_add_signal_overflow(T15,T17);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T19 = primitive_cast_raw_as_integer(T18);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:33
      T20 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T19);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
      indexF5T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
        indexF5 = indexF5T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
        T21 = primitive_machine_word_less_thanQ(indexF5,T15);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:35
          T22 = REPEATED_D_SLOT_VALUE_TAGGED(v1_, 1, indexF5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:35
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T22, T20, 1, indexF5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
          T23 = primitive_machine_word_add_signal_overflow(indexF5,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
          indexF5T = T23;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:34
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
      index_2_T = 1;
      indexF7T = T15;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
        index_2_ = index_2_T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
        indexF7 = indexF7T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
        T24 = primitive_machine_word_less_thanQ(index_2_,T16);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:39
          T25 = REPEATED_D_SLOT_VALUE_TAGGED(v2_, 1, index_2_);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:39
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T25, T20, 1, indexF7);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
          T26 = primitive_machine_word_add_signal_overflow(index_2_,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
          T27 = primitive_machine_word_add_signal_overflow(indexF7,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
          index_2_T = T26;
          indexF7T = T27;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:37
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:41
      T8_0 = T20;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:27
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:22
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kapplicable_method_assuming_number_requiredQVKiI (D function_, D arguments_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:273
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:276
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  T2 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:276
  T3_0 = Kevery_2QVKiI(&Kapplicable_argumentQVKi, arguments_, T2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:273
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:273
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kevery_2QVKiI (D function_, D argument_1_, D argument_2_) {
  DWORD T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
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
  D T18;
  DWORD indexF19T, indexF19;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:235
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:239
  T4 = SLOT_VALUE_INITD(argument_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:240
  T5 = SLOT_VALUE_INITD(argument_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:242
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:242
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:242
  T8 = primitive_machine_word_less_thanQ(T6,T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:242
  if (T8 != &KPfalseVKi) {
    T3 = T6;
  } else {
    T3 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:242
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:254
  indexF19T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:254
    indexF19 = indexF19T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:249
    T14 = primitive_machine_word_equalQ(indexF19,T3);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:249
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:250
      T9 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T13 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:252
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(argument_1_, 1, indexF19);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:253
      T16 = REPEATED_D_SLOT_VALUE_TAGGED(argument_2_, 1, indexF19);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:252
      T10 = CALL2(function_, T15, T16);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:252
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:254
        T17 = primitive_machine_word_add_signal_overflow(indexF19,4);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:254
        indexF19T = T17;
        goto L0;
        T12 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:252
        T11 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:252
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:249
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:254
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:235
  return(T13);
}

D Kapplicable_argumentQVKiI (D argument_, D specializer_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:263
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:265
  T3 = primitive_instanceQ(argument_,specializer_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:265
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:263
  return(T4);
}

D Kconcrete_subtypeQ_internalVKiI (D c1_, D c2_) {
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13_0;
  D T14T, T14;
  D result_T, result_;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;
  D T21;
  D T22;
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:190
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:192
  T7 = SLOT_VALUE(c1_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:193
  T8 = SLOT_VALUE(c2_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  T9 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  T11 = primitive_machine_word_logbitQ(18,T10);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  if (T11 != &KPfalseVKi) {
    T4 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
    T3 = KsubiclassQVKiI(T7, c1_, T8, c2_);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
    T12 = SLOT_VALUE_INITD(T7, 14);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
    T14T = T12;
    result_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      T14 = T14T;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      result_ = result_T;
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      T16 = primitive_idQ(T14,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
        T17 = SLOT_VALUE_INITD(T14, 0);
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
        if (result_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T19 = SLOT_VALUE_INITD(T14, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T20_0 = T19;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T18_0 = T20_0;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T21 = T18_0;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T23 = Kconcrete_subtypeQ_internalVKiI(T17, c2_);
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T22 = T23;
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
          T14T = T21;
          result_T = T22;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
      // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:196
    T13_0 = result_;
    T6_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:194
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:190
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kunbound_repeated_slotVKeI (D object_, D idx_) {
  D T2;
  D sd_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_3 T10 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:292
  T2 = Kobject_classVKdI(object_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:292
  T7 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:292
  T8 = SLOT_VALUE_INITD(T7, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:292
  sd_ = T8;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:295
  T9 = SLOT_VALUE_INITD(sd_, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:295
  if (T9 != &KPfalseVKi) {
    T4 = T9;
  } else {
    T4 = sd_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:295
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:295
  T10.vector_element_[0] = T4;
  T10.vector_element_[1] = idx_;
  T10.vector_element_[2] = object_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:295
  T5 = KlistVKdI(&T10);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:293
  T11.vector_element_[0] = &KJformat_string_;
  T11.vector_element_[1] = &K18;
  T11.vector_element_[2] = &KJformat_arguments_;
  T11.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:293
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T11);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:293
  T12_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:290
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kunbound_instance_slotVKeI (D object_, D offset_) {
  D T2;
  D sd_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:279
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:282
  T2 = Kobject_classVKdI(object_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:282
  T7 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:282
  T8 = SLOT_VALUE_INITD(T7, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:282
  T10 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:282
  T9 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T10);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:281
  sd_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:286
  T11 = SLOT_VALUE_INITD(sd_, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:286
  if (T11 != &KPfalseVKi) {
    T4 = T11;
  } else {
    T4 = sd_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:286
  T12.vector_element_[0] = T4;
  T12.vector_element_[1] = object_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:286
  T5 = KlistVKdI(&T12);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:284
  T13.vector_element_[0] = &KJformat_string_;
  T13.vector_element_[1] = &K11;
  T13.vector_element_[2] = &KJformat_arguments_;
  T13.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:284
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T13);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:284
  T14_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:279
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kgrounded_instanceQVKeI (D o_, D type_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:112
  T2 = primitive_instanceQ(o_,type_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:112
  T3 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:111
  return(T3);
}

D Kconcatenate_2VKeMM0I (D list_1_, D list_2_) {
  D T3_0;
  D rest_;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:14
  T6 = primitive_idQ(list_1_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:14
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:15
    T3_0 = list_2_;
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:17
    T7 = SLOT_VALUE_INITD(list_1_, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:17
    rest_ = T7;
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    T8 = SLOT_VALUE_INITD(list_1_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    T9 = Kconcatenate_2VKeMM0I(rest_, list_2_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    SLOT_VALUE_SETTER(T8, T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    SLOT_VALUE_SETTER(T9, T10, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:18
    T11_0 = T10;
    T5_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:12
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dispatch_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dispatch_for_user () {
  return;
}


/* eof */
