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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(8);

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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
  D mep_;
} _KLsimple_methodGVKe;

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
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLlocatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLphysical_locatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLserver_locatorGYlocators_protocolVcommon_dylan;


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
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kcommon_extensions_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Klocators_protocol_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLlocatorGYlocators_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLlocatorGYlocators_protocolVcommon_dylanW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
static _KLimplementation_classGVKe K8;
static _KLsimple_object_vectorGVKd_1 K9;
static _KLsimple_object_vectorGVKd_6 K10;
static _KLbyte_stringGVKd_8 K11;
extern _KLincremental_generic_functionGVKe Klist_locatorYlocators_protocolVcommon_dylan;
static _KLsignatureAvaluesGVKi K13;
static _KLbyte_stringGVKd_12 K14;
static _KLsimple_object_vectorGVKd_1 K15;
extern _KLincremental_generic_functionGVKe Ksupports_list_locatorQYlocators_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0;
D Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K19;
static _KLsignatureAvaluesGVKi K20;
static _KLbyte_stringGVKd_22 K21;
extern _KLincremental_generic_functionGVKe Kopen_locatorYlocators_protocolVcommon_dylan;
static _KLkeyword_signatureAvaluesGVKi K23;
static _KLbyte_stringGVKd_12 K24;
static _KLsimple_object_vectorGVKd_1 K25;
extern _KLincremental_generic_functionGVKe Ksupports_open_locatorQYlocators_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0;
D Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K29;
static _KLbyte_stringGVKd_22 K30;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMM0;
D KcloseYcommon_extensionsVcommon_dylanMM0I (D, D);
static _KLpairGVKd K34;
static _KLkeyword_signatureGVKe K35;
static _KLbyte_stringGVKd_5 K36;
static _KLkeyword_signatureGVKe K37;
extern _KLclassGVKd KLphysical_locatorGYlocators_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLphysical_locatorGYlocators_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K40;
static _KLsimple_object_vectorGVKd_6 K41;
static _KLbyte_stringGVKd_18 K42;
extern _KLclassGVKd KLserver_locatorGYlocators_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLserver_locatorGYlocators_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K45;
static _KLsimple_object_vectorGVKd_6 K46;
static _KLbyte_stringGVKd_16 K47;
static _KLimplementation_classGVKe K48;
static _KLsimple_object_vectorGVKd_1 K49;
static _KLsimple_object_vectorGVKd_6 K50;
static _KLbyte_stringGVKd_9 K51;
static _KLimplementation_classGVKe K52;
static _KLsimple_object_vectorGVKd_6 K53;
static _KLbyte_stringGVKd_17 K54;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;

/* Indirection variables */


/* Variables */

D Lclosable_objectGYcommon_extensionsVcommon_dylan = &KLclosable_objectGYcommon_extensionsVcommon_dylan;
D LstreamGYcommon_extensionsVcommon_dylan = &KLstreamGYcommon_extensionsVcommon_dylan;
D LlocatorGYlocators_protocolVcommon_dylan = &KLlocatorGYlocators_protocolVcommon_dylan;
D Lserver_locatorGYlocators_protocolVcommon_dylan = &KLserver_locatorGYlocators_protocolVcommon_dylan;
D Lphysical_locatorGYlocators_protocolVcommon_dylan = &KLphysical_locatorGYlocators_protocolVcommon_dylan;
D closeYcommon_extensionsVcommon_dylan = &KcloseYcommon_extensionsVcommon_dylan;
D supports_open_locatorQYlocators_protocolVcommon_dylan = &Ksupports_open_locatorQYlocators_protocolVcommon_dylan;
D open_locatorYlocators_protocolVcommon_dylan = &Kopen_locatorYlocators_protocolVcommon_dylan;
D supports_list_locatorQYlocators_protocolVcommon_dylan = &Ksupports_list_locatorQYlocators_protocolVcommon_dylan;
D list_locatorYlocators_protocolVcommon_dylan = &Klist_locatorYlocators_protocolVcommon_dylan;

/* Objects */

_KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K54,
  &K52,
  (D) 1,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K52,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLlocatorGYlocators_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K51,
  &K48,
  (D) 1,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLlocatorGYlocators_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K48,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K11,
  &K8,
  (D) 1,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K8,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K8 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K9,
  &K10,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K56,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan
};

static _KLsimple_object_vectorGVKd_6 K10 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_8 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "<stream>"
};

_KLincremental_generic_functionGVKe Klist_locatorYlocators_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K13,
  &KPfalseVKi,
  &K14,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K15,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_12 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "list-locator"
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlocatorGYlocators_protocolVcommon_dylan
};

_KLincremental_generic_functionGVKe Ksupports_list_locatorQYlocators_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K20,
  &KPfalseVKi,
  &K21,
  &K19,
  &RSINGULAR_Labsent_engine_nodeG,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K20,
  &Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K20 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K15,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_22 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "supports-list-locator?"
};

_KLincremental_generic_functionGVKe Kopen_locatorYlocators_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K23,
  &KPfalseVKi,
  &K24,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureAvaluesGVKi K23 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K15,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K25
};

static _KLbyte_stringGVKd_12 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "open-locator"
};

static _KLsimple_object_vectorGVKd_1 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLincremental_generic_functionGVKe Ksupports_open_locatorQYlocators_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K20,
  &KPfalseVKi,
  &K30,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K20,
  &Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "supports-open-locator?"
};

_KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K35,
  &KPfalseVKi,
  &K36,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K37,
  &key_mep_2,
  &KcloseYcommon_extensionsVcommon_dylanMM0I,
  &KPempty_vectorVKi
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &KcloseYcommon_extensionsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K35 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43778053,
  &K9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_5 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "close"
};

static _KLkeyword_signatureGVKe K37 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLclassGVKd KLphysical_locatorGYlocators_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K42,
  &K40,
  (D) 1,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLphysical_locatorGYlocators_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K40,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K40 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLphysical_locatorGYlocators_protocolVcommon_dylan,
  &KLphysical_locatorGYlocators_protocolVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K15,
  &K41,
  (D) 9,
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

static _KLsimple_object_vectorGVKd_6 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KLphysical_locatorGYlocators_protocolVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_18 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<physical-locator>"
};

_KLclassGVKd KLserver_locatorGYlocators_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K47,
  &K45,
  (D) 1,
  &Klocators_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLserver_locatorGYlocators_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K45,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K45 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLserver_locatorGYlocators_protocolVcommon_dylan,
  &KLserver_locatorGYlocators_protocolVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K15,
  &K46,
  (D) 9,
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

static _KLsimple_object_vectorGVKd_6 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KLserver_locatorGYlocators_protocolVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_16 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<server-locator>"
};

static _KLimplementation_classGVKe K48 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KLlocatorGYlocators_protocolVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K49,
  &K50,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K57,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_9 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "<locator>"
};

static _KLimplementation_classGVKe K52 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLclosable_objectGYcommon_extensionsVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K49,
  &K53,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K55,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_17 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<closable-object>"
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KPempty_listVKi
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KPempty_listVKi
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &KLphysical_locatorGYlocators_protocolVcommon_dylan,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KLserver_locatorGYlocators_protocolVcommon_dylan,
  &KPempty_listVKi
};

/* Code */

D Ksupports_list_locatorQYlocators_protocolVcommon_dylanMM0I (D locator_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:65
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:63
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ksupports_open_locatorQYlocators_protocolVcommon_dylanMM0I (D locator_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:49
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:51
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:49
  MV_SET_COUNT(1);
  return(T2_0);
}

D KcloseYcommon_extensionsVcommon_dylanMM0I (D object_, D Urest_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:36
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:37
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:36
  MV_SET_COUNT(0);
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_locators_protocol_for_system () {
  extern D KPresolve_symbolVKiI(D);
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:14
  T0 = KPadd_classVKeI(&KLclosable_objectGYcommon_extensionsVcommon_dylan);
  goto I0;
}
I0:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/locators-protocol.dylan:20
  T0 = KPadd_classVKeI(&KLlocatorGYlocators_protocolVcommon_dylan);
  goto I3;
}
I3:

  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_locators_protocol_for_user () {
  return;
}


/* eof */
