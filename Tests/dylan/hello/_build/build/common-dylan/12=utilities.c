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
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

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
} _KLintegerGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(10);

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

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan;

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan;

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan;


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
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
D KPadd_nonsiblinged_domainVKnI (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);

/* Defined object declarations */

extern _KLclassGVKd KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylanW;
D Kinvalid_bit_indexYcommon_dylan_internalsVcommon_dylanI (D);
D Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI (D);
static _KLsymbolGVKd KJbit_number_;
D KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D);
extern _KLclassGVKd KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylanW;
static _KLimplementation_classGVKe K9;
static _KLsimple_object_vectorGVKd_1 K10;
extern _KLkeyword_methodGVKe KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
static _KLsimple_object_vectorGVKd_1 K12;
static _KLsimple_object_vectorGVKd_6 K13;
static _KLkeyword_signatureAvaluesGVKi K14;
static _KLsimple_object_vectorGVKd_2 K15;
static _KLsimple_object_vectorGVKd_1 K16;
static _KLsimple_object_vectorGVKd_1 K17;
extern _KLinstance_slot_descriptorGVKe Kbit_numberYcommon_dylan_internalsVcommon_dylanHLinvalid_bit_numberG;
extern _KLsealed_generic_functionGVKe Kbit_numberYcommon_dylan_internalsVcommon_dylan;
extern _KLgetter_methodGVKi Kbit_numberYcommon_dylan_internalsVcommon_dylanMM0;
static _KLpairGVKd K21;
static _KLbyte_stringGVKd_10 K22;
static _KLbyte_stringGVKd_24 K23;
static _KLbyte_stringGVKd_23 K24;
D KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D);
extern _KLclassGVKd KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylanW;
static _KLimplementation_classGVKe K28;
extern _KLkeyword_methodGVKe KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
static _KLsimple_object_vectorGVKd_6 K30;
static _KLkeyword_signatureAvaluesGVKi K31;
static _KLsimple_object_vectorGVKd_1 K32;
static _KLbyte_stringGVKd_19 K33;
static _KLimplementation_classGVKe K34;
static _KLsimple_object_vectorGVKd_1 K35;
static _KLsimple_object_vectorGVKd_6 K36;
static _KLbyte_stringGVKd_20 K37;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_common_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_common_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_common_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_common_dylanRD_2;
static _KLsingletonGVKd K46;
static _KLsingletonGVKd K47;
static _KLpairGVKd K48;
static _KLpairGVKd K49;

/* Indirection variables */

static D IKJbit_number_ = &KJbit_number_;

/* Variables */

D Linvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan = &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan;
D Linvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan = &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan;
D Linvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan = &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan;

/* Objects */

_KLclassGVKd KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K37,
  &K34,
  (D) 1,
  &Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K34,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJbit_number_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K22
};

_KLclassGVKd KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K23,
  &K9,
  (D) 1,
  &Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K9,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K9 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylanW,
  &KPfalseVKi,
  &K10,
  (D) -3,
  &KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K12,
  &K13,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K10,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K10 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kbit_numberYcommon_dylan_internalsVcommon_dylanHLinvalid_bit_numberG
};

_KLkeyword_methodGVKe KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K14,
  &key_mep_2,
  &KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K15
};

static _KLsimple_object_vectorGVKd_1 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan
};

static _KLsimple_object_vectorGVKd_6 K13 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K14 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K16,
  &KDsignature_LobjectG_typesVKi,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbit_number_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbit_number_
};

static _KLsimple_object_vectorGVKd_1 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan
};

_KLinstance_slot_descriptorGVKe Kbit_numberYcommon_dylan_internalsVcommon_dylanHLinvalid_bit_numberG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KJbit_number_,
  &Kbit_numberYcommon_dylan_internalsVcommon_dylan,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kbit_numberYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K22,
  &K21,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kbit_numberYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbit_numberYcommon_dylan_internalsVcommon_dylanHLinvalid_bit_numberG
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Kbit_numberYcommon_dylan_internalsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "bit-number"
};

static _KLbyte_stringGVKd_24 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<invalid-shift-quantity>"
};

static _KLbyte_stringGVKd_23 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

_KLclassGVKd KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K33,
  &K28,
  (D) 1,
  &Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K28,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K28 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylanW,
  &KPfalseVKi,
  &K10,
  (D) -3,
  &KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K12,
  &K30,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K10,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K31,
  &key_mep_2,
  &KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K15
};

static _KLsimple_object_vectorGVKd_6 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K31 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K16,
  &KDsignature_LobjectG_typesVKi,
  &K32
};

static _KLsimple_object_vectorGVKd_1 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan
};

static _KLbyte_stringGVKd_19 K33 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<invalid-bit-index>"
};

static _KLimplementation_classGVKe K34 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylanW,
  &KPfalseVKi,
  &K10,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K35,
  &K36,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K48,
  &KPempty_vectorVKi,
  &K10,
  &K10,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_6 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_20 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<invalid-bit-number>"
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_common_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  (D) 5,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_common_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  (D) 5,
  &K47
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_common_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  (D) 5,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_common_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  (D) 5,
  &K46
};

static _KLsingletonGVKd K46 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan
};

static _KLsingletonGVKd K47 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan,
  &KPempty_listVKi
};

/* Code */

D Kinvalid_bit_indexYcommon_dylan_internalsVcommon_dylanI (D index_) {
  D T2;
  D T3_0;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T5;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:61
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:62
  T4.vector_element_[0] = IKJbit_number_;
  T4.vector_element_[1] = index_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:62
  T3_0 = KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I(&KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan, &T4, index_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:62
  T2 = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:62
  T5 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:61
  return(T5);
}

D Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI (D count_) {
  D T2;
  D T3_0;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T5;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:40
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:41
  T4.vector_element_[0] = IKJbit_number_;
  T4.vector_element_[1] = count_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:41
  T3_0 = KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I(&KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan, &T4, count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:41
  T2 = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:41
  T5 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:40
  return(T5);
}

D KLinvalid_shift_quantityGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_bit_number_) {
  D T4;
  D Uunique_bit_numberF5;
  D T6;
  D Uunique_bit_numberF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
  T9 = primitive_idQ(Uunique_bit_number_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = IKJbit_number_;
    T11 = KerrorVKdMM1I(&K24, &T10);
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
    T4 = T11;
    Uunique_bit_numberF5 = T4;
  } else {
    Uunique_bit_numberF5 = Uunique_bit_number_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
  T6 = primitive_object_allocate_filled(2,&KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  primitive_type_check(Uunique_bit_numberF5, &KLintegerGVKd);
  Uunique_bit_numberF7 = Uunique_bit_numberF5;
  SLOT_VALUE_SETTER(Uunique_bit_numberF7, T6, 0);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:32
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLinvalid_bit_indexGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_bit_number_) {
  D T4;
  D Uunique_bit_numberF5;
  D T6;
  D Uunique_bit_numberF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
  T9 = primitive_idQ(Uunique_bit_number_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = IKJbit_number_;
    T11 = KerrorVKdMM1I(&K24, &T10);
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
    T4 = T11;
    Uunique_bit_numberF5 = T4;
  } else {
    Uunique_bit_numberF5 = Uunique_bit_number_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
  T6 = primitive_object_allocate_filled(2,&KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  primitive_type_check(Uunique_bit_numberF5, &KLintegerGVKd);
  Uunique_bit_numberF7 = Uunique_bit_numberF5;
  SLOT_VALUE_SETTER(Uunique_bit_numberF7, T6, 0);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:53
  MV_SET_COUNT(1);
  return(T8_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_12Eutilities_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbit_number_);
    if (T0 != &KJbit_number_) {
      IKJbit_number_ = T0;
      primitive_slot_value_setter(T0, &Kbit_numberYcommon_dylan_internalsVcommon_dylanHLinvalid_bit_numberG, 3);
      primitive_repeated_slot_value_setter(T0, &K16, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K15, 1, 0);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:14
  T0 = KPadd_classVKeI(&KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_12Eutilities_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:35
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_common_dylanRD_2);
  goto I45;
}
I45:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:36
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_common_dylanRD_1);
  goto I43;
}
I43:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:56
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_common_dylanRD_1);
  goto I41;
}
I41:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/utilities.dylan:57
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_common_dylanRD_0);
  goto I39;
}
I39:

  return;
}


/* eof */
