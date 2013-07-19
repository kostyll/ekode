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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);

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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(1);

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

#define  define__KLpartial_dispatch_cache_header_engine_nodeGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D cache_header_engine_node_next_; \
    D cache_header_engine_node_parent_; \
    D number_types_; \
    D partial_dispatch_type_[nrepeated+1]; \
  } _KLpartial_dispatch_cache_header_engine_nodeGVKg_##nrepeated;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;


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
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe KLVKdMM0;
extern _KLsimple_methodGVKe KLVKdMM1;
extern _KLsimple_methodGVKe KLVKdMM2;
extern _KLsimple_methodGVKe KLVKdMM3;
extern _KLsimple_methodGVKe KLVKdMM4;
extern _KLsimple_methodGVKe KLVKdMM5;
extern _KLsimple_methodGVKe KLVKdMM6;
extern _KLsimple_methodGVKe KLVKdMM7;
extern _KLsimple_methodGVKe KLVKdMM8;
extern _KLsimple_methodGVKe KLVKdMM9;
extern _KLsimple_methodGVKe KLVKdMM10;
extern _KLsimple_methodGVKe KLVKdMM11;
extern _KLsimple_methodGVKe KLVKdMM12;
extern _KLsimple_methodGVKe KLVKdMM13;
extern _KLsimple_methodGVKe KLVKdMM14;
extern _KLsimple_methodGVKe KLVKdMM15;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KLVKdRD_dylanRD_14;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_15;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe KEVKdMM0;
extern _KLsimple_methodGVKe KEVKdMM1;
extern _KLsimple_methodGVKe KEVKdMM2;
extern _KLsimple_methodGVKe KEVKdMM3;
extern _KLsimple_methodGVKe KEVKdMM4;
extern _KLsimple_methodGVKe KEVKdMM5;
extern _KLsimple_methodGVKe KEVKdMM6;
extern _KLsimple_methodGVKe KEVKdMM7;
extern _KLsimple_methodGVKe KEVKdMM8;
extern _KLsimple_methodGVKe KEVKdMM9;
extern _KLsimple_methodGVKe KEVKdMM10;
extern _KLsimple_methodGVKe KEVKdMM11;
extern _KLsimple_methodGVKe KEVKdMM12;
extern _KLsimple_methodGVKe KEVKdMM13;
extern _KLsimple_methodGVKe KEVKdMM14;
extern _KLsimple_methodGVKe KEVKdMM15;
extern _KLsimple_methodGVKe KEVKdMM16;
extern _KLsimple_methodGVKe KEVKdMM17;
extern _KLsimple_methodGVKe KEVKdMM18;
extern _KLsimple_methodGVKe KEVKdMM19;
extern _KLsimple_methodGVKe KEVKdMM20;
extern _KLsimple_methodGVKe KEVKdMM21;
extern _KLsimple_methodGVKe KEVKdMM22;
extern _KLsimple_methodGVKe KEVKdMM23;
extern _KLsimple_methodGVKe KEVKdMM24;
extern _KLsimple_methodGVKe KEVKdMM25;
extern _KLsimple_methodGVKe KEVKdMM26;
extern _KLsimple_methodGVKe KEVKdMM27;
extern _KLsimple_methodGVKe KEVKdMM28;
extern _KLsimple_methodGVKe KEVKdMM29;
extern _KLsimple_methodGVKe KEVKdMM30;
extern _KLsimple_methodGVKe KEVKdMM31;
extern _KLsimple_methodGVKe KEVKdMM32;
extern _KLsimple_methodGVKe KEVKdMM33;
extern _KLsimple_methodGVKe KEVKdMM34;
extern _KLsimple_methodGVKe KEVKdMM35;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_2 KEVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_22;
extern _KLsealed_generic_functionGVKe Kvalue_class_comparitorVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLpartial_dispatch_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLpartial_dispatch_cache_header_engine_nodeGVKgW;
extern _KLsealed_generic_functionGVKe Kvalue_class_comparitor_setterVKi;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern D Dabsent_engine_nodeVKg;

/* Defined object declarations */

extern _KLsimple_methodGVKe KEEVKd;
D KEEVKdI (D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsimple_methodGVKe KGEVKd;
D KGEVKdI (D x_, D y_);
extern _KLsimple_methodGVKe KLEVKd;
D KLEVKdI (D x_, D y_);
static _KLsignatureAvaluesGVKi K8;
static _KLpairGVKd K9;
static _KLpairGVKd K10;
static _KLpairGVKd K11;
static _KLpairGVKd K12;
static _KLpairGVKd K13;
static _KLpairGVKd K14;
static _KLpairGVKd K15;
static _KLpairGVKd K16;
static _KLpairGVKd K17;
static _KLpairGVKd K18;
static _KLpairGVKd K19;
static _KLpairGVKd K20;
static _KLpairGVKd K21;
static _KLpairGVKd K22;
static _KLpairGVKd K23;
static _KLpairGVKd K24;
static _KLbyte_stringGVKd_1 K25;
static _KLpairGVKd K26;
static _KLpairGVKd K27;
static _KLpairGVKd K28;
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLpairGVKd K39;
static _KLpairGVKd K40;
static _KLpairGVKd K41;
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLpairGVKd K48;
static _KLpairGVKd K49;
static _KLpairGVKd K50;
static _KLpairGVKd K51;
static _KLpairGVKd K52;
static _KLpairGVKd K53;
static _KLpairGVKd K54;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_1 K62;
D Kinit_value_class_comparitorVKiI (D);
extern _KLsimple_methodGVKe KmaxVKd;
D KmaxVKdI (D, D);
static _KLsignatureGVKe K66;
extern _KLsimple_methodGVKe Kbinary_maxVKi;
D Kbinary_maxVKiI (D x_, D y_);
extern _KLsimple_methodGVKe KminVKd;
D KminVKdI (D, D);
extern _KLsimple_methodGVKe Kbinary_minVKi;
D Kbinary_minVKiI (D x_, D y_);
extern _KLsimple_methodGVKe KGVKd;
D KGVKdI (D x_, D y_);
extern _KLsimple_methodGVKe KNEEVKd;
D KNEEVKdI (D x_, D y_);
extern _KLsimple_methodGVKe KNEVKd;
D KNEVKdI (D x_, D y_);
extern _KLsimple_methodGVKe KNVKd;
D KNVKdI (D x_);
static _KLsignatureAvaluesGVKi K81;

/* Indirection variables */


/* Variables */

D EEVKd = &KEEVKd;
D NVKd = &KNVKd;
D EVKd = &KEVKd;
D LVKd = &KLVKd;
D NEVKd = &KNEVKd;
D NEEVKd = &KNEEVKd;
D GVKd = &KGVKd;
D LEVKd = &KLEVKd;
D GEVKd = &KGEVKd;
D binary_minVKi = &Kbinary_minVKi;
D minVKd = &KminVKd;
D binary_maxVKi = &Kbinary_maxVKi;
D maxVKd = &KmaxVKd;

/* Objects */

_KLsimple_methodGVKe KEEVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KEEVKdI
};

_KLincremental_generic_functionGVKe KEVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K8,
  (D) 1,
  &K62,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KEVKdRD_dylanRD_22,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KLVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K8,
  (D) 1,
  &K25,
  &K9,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KLVKdRD_dylanRD_15,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KGEVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KGEVKdI
};

_KLsimple_methodGVKe KLEVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KLEVKdI
};

static _KLsignatureAvaluesGVKi K8 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM0,
  &K10
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM1,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM2,
  &K12
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM3,
  &K13
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM4,
  &K14
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM5,
  &K15
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM6,
  &K16
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM7,
  &K17
};

static _KLpairGVKd K17 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM8,
  &K18
};

static _KLpairGVKd K18 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM9,
  &K19
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM10,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM11,
  &K21
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM12,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM13,
  &K23
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM14,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &KLVKdMM15,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "<"
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM0,
  &K27
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM1,
  &K28
};

static _KLpairGVKd K28 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM2,
  &K29
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM3,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM4,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM5,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM6,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM7,
  &K34
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM8,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM9,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM10,
  &K37
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM11,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM12,
  &K39
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM13,
  &K40
};

static _KLpairGVKd K40 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM14,
  &K41
};

static _KLpairGVKd K41 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM15,
  &K42
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM16,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM17,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM18,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM19,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM20,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM21,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM22,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM23,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM24,
  &K51
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM25,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM26,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM27,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM28,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM29,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM30,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM31,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM32,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM33,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM34,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &KEVKdMM35,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "="
};

_KLsimple_methodGVKe KmaxVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K66,
  &KmaxVKdI
};

static _KLsignatureGVKe K66 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992645,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe Kbinary_maxVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kbinary_maxVKiI
};

_KLsimple_methodGVKe KminVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K66,
  &KminVKdI
};

_KLsimple_methodGVKe Kbinary_minVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kbinary_minVKiI
};

_KLsimple_methodGVKe KGVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KGVKdI
};

_KLsimple_methodGVKe KNEEVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KNEEVKdI
};

_KLsimple_methodGVKe KNEVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K8,
  &KNEVKdI
};

_KLsimple_methodGVKe KNVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K81,
  &KNVKdI
};

static _KLsignatureAvaluesGVKi K81 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

/* Code */

D KEEVKdI (D x_, D y_) {
  D UtmpF3;
  D T4_0;
  D T5;
  D T6;
  D UtmpF7;
  D T8;
  D e_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  DADDR T15;
  DADDR T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D mm_wrapperF21;
  D T22;
  D mm_wrapperF23;
  DADDR T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  _KLsimple_object_vectorGVKd_2 T30 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T31;
  D T32_0;
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
  UtmpF3 = primitive_idQ(x_,y_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
  if (UtmpF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T4_0 = UtmpF3;
    T14_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T15 = primitive_cast_pointer_as_raw(x_);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T16 = primitive_cast_pointer_as_raw(y_);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T17 = primitive_machine_word_logior(T15,T16);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T18 = primitive_machine_word_logand(T17,3);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T19 = primitive_machine_word_equalQ(T18,0);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:58
      T20 = primitive_element(x_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:58
      mm_wrapperF21 = T20;
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:59
      T22 = primitive_element(y_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:59
      mm_wrapperF23 = T22;
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
      T5 = primitive_idQ(mm_wrapperF21,mm_wrapperF23);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:61
        T27 = SLOT_VALUE_INITD(mm_wrapperF21, 1);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:61
        T24 = primitive_cast_pointer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:61
        T25 = primitive_machine_word_logand(T24,4);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:61
        T26 = primitive_machine_word_not_equalQ(T25,0);
        T6 = T26;
      } else {
        T6 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:63
        T28 = SLOT_VALUE_INITD(mm_wrapperF21, 0);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:63
        T29 = SLOT_VALUE_INITD(T28, 1);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:64
        UtmpF7 = CALL1(&Kvalue_class_comparitorVKi, T29);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:64
        if (UtmpF7 != &KPfalseVKi) {
          e_ = UtmpF7;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:64
          T8 = Kinit_value_class_comparitorVKiI(T29);
          e_ = T8;
        }
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:64
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:65
        T30.vector_element_[0] = x_;
        T30.vector_element_[1] = y_;
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:65
        T31 = primitive_engine_node_apply_with_optionals(e_,&KEVKd,&T30);
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:65
        T32_0 = T31;
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:65
        T33_0 = T32_0;
        T11_0 = T33_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
        T10_0 = &KPfalseVKi;
        T11_0 = T10_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:60
      T13_0 = T11_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
      T12_0 = &KPfalseVKi;
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:55
  MV_SET_COUNT(1);
  return(T14_0);
}

D KGEVKdI (D x_, D y_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:142
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:143
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T2 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:143
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:143
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:142
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLEVKdI (D x_, D y_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:139
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T2 = CONGRUENT_CALL2(y_, x_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:139
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:139
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:138
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinit_value_class_comparitorVKiI (D c_) {
  D e_;
  D Utmp_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14_0;
  D T15;
  D T16_0;
  D mm_wrapper_;
  DWORD T18;
  DWORD T19;
  DWORD T20;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T6 = SLOT_VALUE(&KLpartial_dispatch_cache_header_engine_nodeGVKg, 2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T8 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T10 = primitive_machine_word_logand(T9,262140);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T12 = primitive_machine_word_add_signal_overflow(5,T10);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T13 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T15 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T16_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T14_0 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  mm_wrapper_ = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T18 = primitive_machine_word_subtract_signal_overflow(T11,4);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T19 = primitive_machine_word_shift_right(T18,2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T20 = primitive_machine_word_shift_right(T10,2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:73
  T7 = primitive_object_allocate_filled(T13,mm_wrapper_,T19,&KPfalseVKi,2,T20,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:72
  e_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:75
  SLOT_VALUE_SETTER((D) 196665, e_, 0);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:77
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(c_, e_, 6, 1);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:78
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(c_, e_, 6, 5);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:79
  SLOT_VALUE_SETTER(&KEVKd, e_, 4);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:80
  SLOT_VALUE_SETTER(Dabsent_engine_nodeVKg, e_, 3);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:81
  primitive_initialize_engine_node(e_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
  Utmp_ = CALL1(&Kvalue_class_comparitorVKi, c_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
    T3 = Utmp_;
    MV_SET_ELT(0, Utmp_);
    MV_SET_COUNT(1);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
    CALL2(&Kvalue_class_comparitor_setterVKi, e_, c_);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
    T4 = e_;
    MV_SET_ELT(0, e_);
    MV_SET_COUNT(1);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:71
  return(T5);
}

D KmaxVKdI (D object_, D objects_) {
  D result_T, result_;
  DWORD T4T, T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
  T6 = SLOT_VALUE_INITD(objects_, 0);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
  result_T = object_;
  T4T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    T8 = primitive_machine_word_equalQ(T4,T7);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(objects_, 1, T4);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T10_0 = CONGRUENT_CALL2(T9, result_);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      T11 = T10_0;
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      if (T11 != &KPfalseVKi) {
        T12 = result_;
      } else {
        T12 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      T13 = primitive_machine_word_add_signal_overflow(T4,4);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
      result_T = T12;
      T4T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:166
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbinary_maxVKiI (D x_, D y_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:158
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:159
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T5_0 = CONGRUENT_CALL2(y_, x_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:159
  T6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:159
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:160
    T2 = x_;
    MV_SET_ELT(0, x_);
    MV_SET_COUNT(1);
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:162
    T3 = y_;
    MV_SET_ELT(0, y_);
    MV_SET_COUNT(1);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:158
  return(T4);
}

D KminVKdI (D object_, D objects_) {
  D result_T, result_;
  DWORD T4T, T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
  T6 = SLOT_VALUE_INITD(objects_, 0);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
  result_T = object_;
  T4T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    T8 = primitive_machine_word_equalQ(T4,T7);
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(objects_, 1, T4);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T10 = CONGRUENT_CALL2(result_, T9);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      if (T10 != &KPfalseVKi) {
        T11 = result_;
      } else {
        T11 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      T12 = primitive_machine_word_add_signal_overflow(T4,4);
      // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
      result_T = T11;
      T4T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:155
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:154
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbinary_minVKiI (D x_, D y_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:146
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:147
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T2 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:147
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:148
    T3 = x_;
    MV_SET_ELT(0, x_);
    MV_SET_COUNT(1);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:150
    T4 = y_;
    MV_SET_ELT(0, y_);
    MV_SET_COUNT(1);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:146
  return(T5);
}

D KGVKdI (D x_, D y_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:135
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T2_0 = CONGRUENT_CALL2(y_, x_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:134
  MV_SET_COUNT(1);
  return(T2_0);
}

D KNEEVKdI (D x_, D y_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:131
  T2 = KEEVKdI(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:131
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:131
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:130
  MV_SET_COUNT(1);
  return(T3_0);
}

D KNEVKdI (D x_, D y_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:127
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T2 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:127
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:127
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:126
  MV_SET_COUNT(1);
  return(T3_0);
}

D KNVKdI (D x_) {
  D T1_0;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:119
  T2 = primitive_not(x_);
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:119
  T1_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/comparison.dylan:118
  MV_SET_COUNT(1);
  return(T1_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_comparison_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_comparison_for_user () {
  return;
}


/* eof */
