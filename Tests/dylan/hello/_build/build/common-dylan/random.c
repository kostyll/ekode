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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
} _KLintegerGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(4);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

#define  define__KLsimple_closure_methodGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D xep_; \
    D function_signature_; \
    D mep_; \
    D environment_size_; \
    D environment_element_[nrepeated+1]; \
  } _KLsimple_closure_methodGVKi_##nrepeated;
define__KLsimple_closure_methodGVKi(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D recent_;
  D recent_index_;
} _KLrandomGYsimple_randomVcommon_dylan;


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
D Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI ();
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe KabsVKd;
extern _KLsealed_generic_functionGVKe KmoduloVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Ksimple_random_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;

/* Defined object declarations */

extern _KLclassGVKd KLrandomGYsimple_randomVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLrandomGYsimple_randomVcommon_dylanW;
extern _KLkeyword_methodGVKe KinitializeVKdMcommon_dylanM0;
D KinitializeVKdMcommon_dylanM0I (D, D, D);
extern _KLsimple_methodGVKe Klcg_randYcommon_dylan_internalsVcommon_dylan;
D Klcg_randYcommon_dylan_internalsVcommon_dylanI (D);
D Krandom_29Ycommon_dylan_internalsVcommon_dylanI (D);
static D KtapF11I (D, D, D);
static _KLsignatureAvaluesGVKi K12;
static _KLkeyword_signatureGVKe K13;
static _KLsimple_object_vectorGVKd_2 K14;
static _KLsymbolGVKd KJseed_;
static _KLbyte_stringGVKd_4 K16;
static _KLsimple_object_vectorGVKd_1 K17;
static _KLsimple_object_vectorGVKd_1 K18;
static _KLimplementation_classGVKe K19;
static _KLsimple_object_vectorGVKd_2 K20;
extern _KLkeyword_methodGVKe KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K23;
static _KLsimple_object_vectorGVKd_6 K24;
static D K26I ();
static _KLkeyword_signatureAvaluesGVKi K27;
extern _KLinstance_slot_descriptorGVKe KrecentYcommon_dylan_internalsVcommon_dylanHLrandomG;
extern _KLinstance_slot_descriptorGVKe Krecent_indexYcommon_dylan_internalsVcommon_dylanHLrandomG;
extern _KLsealed_generic_functionGVKe Krecent_indexYcommon_dylan_internalsVcommon_dylan;
extern _KLsealed_generic_functionGVKe Krecent_index_setterYcommon_dylan_internalsVcommon_dylan;
extern _KLsetter_methodGVKi Krecent_index_setterYcommon_dylan_internalsVcommon_dylanMM0;
static _KLpairGVKd K33;
static _KLbyte_stringGVKd_19 K34;
extern _KLgetter_methodGVKi Krecent_indexYcommon_dylan_internalsVcommon_dylanMM0;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_12 K37;
static _KLsimple_closure_methodGVKi_0 K44;
static D K44I ();
extern _KLsealed_generic_functionGVKe KrecentYcommon_dylan_internalsVcommon_dylan;
extern _KLgetter_methodGVKi KrecentYcommon_dylan_internalsVcommon_dylanMM0;
static _KLpairGVKd K42;
static _KLbyte_stringGVKd_6 K43;
static _KLsignatureGVKe K45;
static _KLbyte_stringGVKd_8 K46;
extern _KLkeyword_methodGVKe KrandomYsimple_randomVcommon_dylanMM0;
D KrandomYsimple_randomVcommon_dylanMM0I (D, D, D);
static _KLkeyword_signatureAvaluesGVKi K49;
static _KLsimple_object_vectorGVKd_2 K50;
static _KLsymbolGVKd KJrandom_;
static _KLbyte_stringGVKd_6 K52;
static _KLsimple_object_vectorGVKd_1 K53;

/* Indirection variables */

static D IKJseed_ = &KJseed_;
static D IKJrandom_ = &KJrandom_;

/* Variables */

D randomYsimple_randomVcommon_dylan = &KrandomYsimple_randomVcommon_dylanMM0;
D LrandomGYsimple_randomVcommon_dylan = &KLrandomGYsimple_randomVcommon_dylan;
D Ddefault_randomYcommon_dylan_internalsVcommon_dylan = &KPunboundVKi;

/* Objects */

_KLclassGVKd KLrandomGYsimple_randomVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K46,
  &K19,
  (D) 1,
  &Ksimple_random_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLrandomGYsimple_randomVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K19,
  (D) 1,
  9,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KinitializeVKdMcommon_dylanM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K13,
  &key_mep_3,
  &KinitializeVKdMcommon_dylanM0I,
  &K14
};

_KLsimple_methodGVKe Klcg_randYcommon_dylan_internalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K12,
  &Klcg_randYcommon_dylan_internalsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K12 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLkeyword_signatureGVKe K13 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K17,
  &K18,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJseed_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJseed_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K16
};

static _KLbyte_stringGVKd_4 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "seed"
};

static _KLsimple_object_vectorGVKd_1 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrandomGYsimple_randomVcommon_dylan
};

static _KLsimple_object_vectorGVKd_1 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJseed_
};

static _KLimplementation_classGVKe K19 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLrandomGYsimple_randomVcommon_dylan,
  &KLrandomGYsimple_randomVcommon_dylanW,
  &KPfalseVKi,
  &K20,
  (D) -3,
  &KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K23,
  &K24,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K20,
  &K20,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KrecentYcommon_dylan_internalsVcommon_dylanHLrandomG,
  &Krecent_indexYcommon_dylan_internalsVcommon_dylanHLrandomG
};

_KLkeyword_methodGVKe KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K27,
  &key_mep_2,
  &KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLrandomGYsimple_randomVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K27 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K17
};

_KLinstance_slot_descriptorGVKe KrecentYcommon_dylan_internalsVcommon_dylanHLrandomG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K44,
  &KLrandomGYsimple_randomVcommon_dylan,
  &KPfalseVKi,
  &KrecentYcommon_dylan_internalsVcommon_dylan,
  &KPfalseVKi,
  &KLsimple_object_vectorGVKd
};

_KLinstance_slot_descriptorGVKe Krecent_indexYcommon_dylan_internalsVcommon_dylanHLrandomG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLrandomGYsimple_randomVcommon_dylan,
  &KPfalseVKi,
  &Krecent_indexYcommon_dylan_internalsVcommon_dylan,
  &Krecent_index_setterYcommon_dylan_internalsVcommon_dylan,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krecent_indexYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K37,
  &K36,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krecent_index_setterYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K34,
  &K33,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krecent_index_setterYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krecent_indexYcommon_dylan_internalsVcommon_dylanHLrandomG
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Krecent_index_setterYcommon_dylan_internalsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "recent-index-setter"
};

_KLgetter_methodGVKi Krecent_indexYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krecent_indexYcommon_dylan_internalsVcommon_dylanHLrandomG
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Krecent_indexYcommon_dylan_internalsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "recent-index"
};

static _KLsimple_closure_methodGVKi_0 K44 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K45,
  &K44I,
  (D) 1
};

_KLsealed_generic_functionGVKe KrecentYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K43,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KrecentYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KrecentYcommon_dylan_internalsVcommon_dylanHLrandomG
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &KrecentYcommon_dylan_internalsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K43 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "recent"
};

static _KLsignatureGVKe K45 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_8 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "<random>"
};

_KLkeyword_methodGVKe KrandomYsimple_randomVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K49,
  &key_mep_3,
  &KrandomYsimple_randomVcommon_dylanMM0I,
  &K50
};

static _KLkeyword_signatureAvaluesGVKi K49 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LintegerG_typesVKi,
  &K53,
  &K17,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJrandom_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJrandom_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K52
};

static _KLbyte_stringGVKd_6 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "random"
};

static _KLsimple_object_vectorGVKd_1 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJrandom_
};

/* Code */

D KinitializeVKdMcommon_dylanM0I (D r_, D Urest_, D seed_) {
  D T4;
  D T5;
  D seedF6;
  D T7;
  D prevF8;
  DWORD jF9T, jF9;
  D v1_;
  D v2_;
  DWORD jF12T, jF12;
  D T13;
  D prevF14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  DWORD rmremainderF23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD rmremainderF28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  D T37;
  DWORD T38;
  D T39;
  DWORD T40;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  T16 = primitive_idQ(seed_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
    T4 = Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI();
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
    T5 = T4;
    seedF6 = T5;
  } else {
    seedF6 = seed_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:25
  T17 = SLOT_VALUE_INITD(r_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
  T18 = SLOT_VALUE_INITD(T17, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
  T19 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
  T20 = primitive_machine_word_unsigned_less_thanQ(1,T19);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER((D) 0x7FFFFFFFFFFFFFFDL, T17, 1, 1);
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
    Kelement_range_errorVKeI(T17, (D) 1);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:27
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:28
  CONGRUENT_CALL_PROLOG(&KabsVKd, 1);
  T7 = CONGRUENT_CALL1(seedF6);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:28
  prevF8 = CALL2(&KmoduloVKd, T7, (D) 131073);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:28
  prevF14 = prevF8;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
  jF9T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
    jF9 = jF9T;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
    T22 = primitive_cast_raw_as_integer(jF9);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
    T21 = primitive_machine_word_less_thanQ(jF9,217);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:30
      T15 = prevF14;
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:30
      v1_ = CALL1(&Klcg_randYcommon_dylan_internalsVcommon_dylan, T15);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:31
      v2_ = Klcg_randYcommon_dylan_internalsVcommon_dylanI(v1_);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:32
      prevF14 = v2_;
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T25 = primitive_cast_integer_as_raw(v1_);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T24 = primitive_machine_word_shift_right(T25,2);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      rmremainderF23 = primitive_machine_word_floorS_remainder(T24,32768);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T26 = primitive_machine_word_shift_left_signal_overflow(rmremainderF23,2);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T27 = primitive_machine_word_logior(T26,1);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T30 = primitive_cast_integer_as_raw(v2_);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T29 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      rmremainderF28 = primitive_machine_word_floorS_remainder(T29,16384);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T31 = primitive_machine_word_shift_left_signal_overflow(rmremainderF28,2);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T32 = primitive_machine_word_multiply_signal_overflow(T31,32768);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T33 = primitive_machine_word_logior(T32,1);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T34 = primitive_machine_word_logxor(T33,1);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T35 = primitive_machine_word_add_signal_overflow(T27,T34);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T36 = primitive_cast_raw_as_integer(T35);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      T37 = primitive_machine_word_unsigned_less_thanQ(jF9,T19);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T36, T17, 1, jF9);
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
        Kelement_range_errorVKeI(T17, T22);
      }
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:34
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
      T38 = primitive_machine_word_add_signal_overflow(jF9,4);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
      jF9T = T38;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:29
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
  jF12T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
    jF12 = jF12T;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
    T39 = primitive_machine_word_less_thanQ(865,jF12);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
    if (T39 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:39
      Krandom_29Ycommon_dylan_internalsVcommon_dylanI(r_);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
      T40 = primitive_machine_word_add_signal_overflow(jF12,4);
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
      jF12T = T40;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
    T13 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:38
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  MV_SET_COUNT(0);
  return(T13);
}

D Klcg_randYcommon_dylan_internalsVcommon_dylanI (D prev_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD rmremainder_;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:19
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T2 = primitive_cast_integer_as_raw(prev_);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T3 = primitive_machine_word_logxor(T2,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T4 = primitive_machine_word_multiply_signal_overflow(T3,171);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T6 = primitive_machine_word_add_signal_overflow(T5,44852);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T8 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  rmremainder_ = primitive_machine_word_floorS_remainder(T8,53125);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T9 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:20
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:19
  MV_SET_COUNT(1);
  return(T12_0);
}

D Krandom_29Ycommon_dylan_internalsVcommon_dylanI (D r_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD rmremainder_;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T7 = SLOT_VALUE_INITD(r_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T9 = primitive_machine_word_add_signal_overflow(T8,4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T11 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  rmremainder_ = primitive_machine_word_floorS_remainder(T11,54);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T12 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:45
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:44
  SLOT_VALUE_SETTER(T14, r_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:46
  T15 = SLOT_VALUE_INITD(r_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T2 = KtapF11I(T15, T14, (D) 217);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T3 = KtapF11I(T15, T14, (D) 33);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T4 = KtapF11I(T15, T14, (D) 25);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T5 = KtapF11I(T15, T14, (D) 13);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T16 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T17 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T18 = primitive_machine_word_logxor(T16,T17);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T19 = primitive_machine_word_logand(T18,-4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T20 = primitive_machine_word_logior(T19,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T21 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T22 = primitive_machine_word_logxor(T20,T21);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T23 = primitive_machine_word_logand(T22,-4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T24 = primitive_machine_word_logior(T23,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T25 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T26 = primitive_machine_word_logxor(T24,T25);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T27 = primitive_machine_word_logand(T26,-4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T28 = primitive_machine_word_logior(T27,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T29 = primitive_cast_raw_as_integer(T28);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T30 = SLOT_VALUE_INITD(T15, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T31 = primitive_cast_integer_as_raw(T30);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T32 = primitive_machine_word_unsigned_less_thanQ(T13,T31);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T29, T15, 1, T13);
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
    Kelement_range_errorVKeI(T15, T14);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:53
  T6_0 = T29;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:43
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KtapF11I (D implicit_argumentF17, D implicit_argumentF16, D bit_) {
  D T3_0;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD rmremainder_;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:47
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T4 = primitive_cast_integer_as_raw(bit_);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T5 = primitive_machine_word_logxor(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T6 = primitive_machine_word_subtract_signal_overflow(217,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T7 = primitive_cast_integer_as_raw(implicit_argumentF16);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T8 = primitive_machine_word_logxor(T6,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T9 = primitive_machine_word_add_signal_overflow(T7,T8);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T11 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  rmremainder_ = primitive_machine_word_floorS_remainder(T11,54);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T12 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:48
  T15_0 = KelementVKdMM11I(implicit_argumentF17, T14, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:47
  T3_0 = T15_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T15_0);
    primitive_type_check(T3_0, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:47
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLrandomGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:11
  T3 = primitive_object_allocate_filled(3,&KLrandomGYsimple_randomVcommon_dylanW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  T4 = K26I();
  SLOT_VALUE_SETTER(T4, T3, 0);
  SLOT_VALUE_SETTER((D) 1, T3, 1);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T5_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:11
  MV_SET_COUNT(1);
  return(T5_0);
}

static D K26I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, (D) 1, (D) 217);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K44I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:13
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:13
  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, (D) 1, (D) 217);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:13
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:13
  MV_SET_COUNT(1);
  return(T0_0);
}

D KrandomYsimple_randomVcommon_dylanMM0I (D range_, D Urest_, D r_) {
  D T4;
  D rF5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD rmremainderF13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D value_;
  D T19_0;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;
  DWORD rmremainderF24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29_0;
  DWORD T30;
  DWORD T31;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
  T6 = primitive_idQ(r_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
    T4 = Ddefault_randomYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
    primitive_type_check(T4, &KLrandomGYsimple_randomVcommon_dylan);
    T7 = T4;
    rF5 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
    primitive_type_check(r_, &KLrandomGYsimple_randomVcommon_dylan);
    T8 = r_;
    rF5 = T8;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T9 = primitive_cast_integer_as_raw(range_);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T11 = primitive_machine_word_subtract_signal_overflow(0x7FFFFFFFFFFFFFFDL,T10);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T12 = primitive_machine_word_add_signal_overflow(T11,4);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T14 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T15 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  rmremainderF13 = primitive_machine_word_floorS_remainder(T14,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T16 = primitive_machine_word_shift_left_signal_overflow(rmremainderF13,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:62
  T17 = primitive_machine_word_subtract_signal_overflow(0x7FFFFFFFFFFFFFFDL,T16);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:68
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:64
    value_ = Krandom_29Ycommon_dylan_internalsVcommon_dylanI(rF5);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:65
    T22 = primitive_cast_integer_as_raw(value_);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:65
    T23 = primitive_machine_word_less_thanQ(T17,T22);
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:65
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:68
      goto L0;
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
      T20 = T19_0;
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
      T30 = primitive_cast_integer_as_raw(T20);
      T21 = T30;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
      T31 = primitive_cast_integer_as_raw(value_);
      T21 = T31;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:65
    // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:68
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  T25 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  rmremainderF24 = primitive_machine_word_floorS_remainder(T25,T15);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  T26 = primitive_machine_word_shift_left_signal_overflow(rmremainderF24,2);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  T27 = primitive_machine_word_logior(T26,1);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  T28 = primitive_cast_raw_as_integer(T27);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:71
  T29_0 = T28;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:58
  MV_SET_COUNT(1);
  return(T29_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_random_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJseed_);
    if (T0 != &KJseed_) {
      primitive_repeated_slot_value_setter(T0, &K18, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K14, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJrandom_);
    if (T0 != &KJrandom_) {
      primitive_repeated_slot_value_setter(T0, &K53, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K50, 1, 0);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:11
  T0 = KPadd_classVKeI(&KLrandomGYsimple_randomVcommon_dylan);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_random_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:23
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I5;
}
I5:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:56
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLrandomGYsimple_randomVcommon_dylan, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:56
  Ddefault_randomYcommon_dylan_internalsVcommon_dylan = T0;
  // /opt/opendylan-2013.1/sources/common-dylan/random.dylan:56
  T1 = &KPfalseVKi;
  goto I6;
}
I6:

  return;
}


/* eof */
