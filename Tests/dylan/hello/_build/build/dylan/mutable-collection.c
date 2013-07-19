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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_mutable_explicit_key_collection_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(30);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;


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
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLlimited_mutable_explicit_key_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_explicit_key_collection_typeGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM0;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM1;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM3;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM4;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM5;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM6;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM7;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM8;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM9;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM10;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM11;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM12;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM13;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM14;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM15;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM16;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM17;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM18;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM19;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM20;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM21;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM22;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM23;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM24;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM25;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM26;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM27;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_13;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_15;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_18;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_23;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_24;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_25;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_26;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kobject_classVKdI (D);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_collectionG_typesVKi;
extern _KLsimple_methodGVKe Kelement_setterVKdMM0;
extern _KLsimple_methodGVKe Kelement_setterVKdMM1;
extern _KLsimple_methodGVKe Kelement_setterVKdMM2;
extern _KLsimple_methodGVKe Kelement_setterVKdMM3;
extern _KLsimple_methodGVKe Kelement_setterVKdMM4;
extern _KLsimple_methodGVKe Kelement_setterVKdMM5;
extern _KLsimple_methodGVKe Kelement_setterVKdMM6;
extern _KLsimple_methodGVKe Kelement_setterVKdMM7;
extern _KLsimple_methodGVKe Kelement_setterVKdMM8;
extern _KLsimple_methodGVKe Kelement_setterVKdMM9;
extern _KLsimple_methodGVKe Kelement_setterVKdMM10;
extern _KLsimple_methodGVKe Kelement_setterVKdMM11;
extern _KLsimple_methodGVKe Kelement_setterVKdMM12;
extern _KLsimple_methodGVKe Kelement_setterVKdMM13;
extern _KLsimple_methodGVKe Kelement_setterVKdMM14;
extern _KLsimple_methodGVKe Kelement_setterVKdMM15;
extern _KLsimple_methodGVKe Kelement_setterVKdMM16;
extern _KLsimple_methodGVKe Kelement_setterVKdMM17;
extern _KLsimple_methodGVKe Kelement_setterVKdMM18;
extern _KLsimple_methodGVKe Kelement_setterVKdMM19;
extern _KLsimple_methodGVKe Kelement_setterVKdMM20;
extern _KLsimple_methodGVKe Kelement_setterVKdMM21;
extern _KLsimple_methodGVKe Kelement_setterVKdMM22;
extern _KLsimple_methodGVKe Kelement_setterVKdMM23;
extern _KLsimple_methodGVKe Kelement_setterVKdMM24;
extern _KLsimple_methodGVKe Kelement_setterVKdMM25;
extern _KLsimple_methodGVKe Kelement_setterVKdMM26;
extern _KLsimple_methodGVKe Kelement_setterVKdMM27;
extern _KLsimple_methodGVKe Kelement_setterVKdMM28;
extern _KLsimple_methodGVKe Kelement_setterVKdMM29;
extern _KLsimple_methodGVKe Kelement_setterVKdMM30;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_28;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_29;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLkeyword_methodGVKe KfillXVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLkeyword_methodGVKe KfillXVKdMM2;
extern _KLkeyword_methodGVKe KfillXVKdMM3;
extern _KLkeyword_methodGVKe KfillXVKdMM4;
extern _KLkeyword_methodGVKe KfillXVKdMM5;
extern _KLkeyword_methodGVKe KfillXVKdMM6;
extern _KLkeyword_methodGVKe KfillXVKdMM7;
extern _KLkeyword_methodGVKe KfillXVKdMM8;
extern _KLkeyword_methodGVKe KfillXVKdMM9;
extern _KLkeyword_methodGVKe KfillXVKdMM10;
extern _KLkeyword_methodGVKe KfillXVKdMM11;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_0;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_8;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLkeyword_methodGVKe Kreplace_elementsXVKdMM1;
extern _KLkeyword_copy_down_methodGVKi Kreplace_elementsXVKdMM2;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLmethod_domainGVKe Kreplace_elementsXVKdRD_dylanRD_0;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM2;
D Ktype_for_copyVKdMM2I (D);
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLunionGVKe KLmutable_explicit_key_collection_typeGVKi;
static _KLsubclassGVKe K5;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM2;
D Kelement_no_bounds_check_setterVKeMM2I (D new_value_, D collection_, D key_);
static _KLpairGVKd K8;
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
static _KLpairGVKd K25;
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
static _KLsignatureGVKe K36;
static _KLbyte_stringGVKd_30 K37;
static _KLsimple_object_vectorGVKd_3 K38;
static _KLsubclassGVKe K39;
static _KLsignatureAvaluesGVKi K40;
static _KLsimple_object_vectorGVKd_1 K41;
static _KLsubclassGVKe K42;
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
static _KLpairGVKd K62;
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLpairGVKd K68;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLpairGVKd K71;
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLsignatureGVKe K74;
static _KLbyte_stringGVKd_14 K75;
static _KLsimple_object_vectorGVKd_3 K76;
extern _KLincremental_generic_functionGVKe KfillXVKd;
extern _KLkeyword_methodGVKe KfillXVKdMM0;
D KfillXVKdMM0I (D, D, D, D, D);
static _KLpairGVKd K80;
static _KLpairGVKd K81;
static _KLpairGVKd K82;
static _KLpairGVKd K83;
static _KLpairGVKd K84;
static _KLpairGVKd K85;
static _KLpairGVKd K86;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLkeyword_signatureAvaluesGVKi K92;
static _KLbyte_stringGVKd_5 K93;
static _KLsimple_object_vectorGVKd_2 K94;
static _KLsimple_object_vectorGVKd_2 K95;
static _KLkeyword_signatureAvaluesGVKi K96;
static _KLsimple_object_vectorGVKd_4 K97;
extern _KLincremental_generic_functionGVKe Kreplace_elementsXVKd;
extern _KLkeyword_methodGVKe Kreplace_elementsXVKdMM0;
D Kreplace_elementsXVKdMM0I (D collection_, D predicateQ_, D new_value_function_, D Urest_, D count_);
static _KLpairGVKd K101;
static _KLpairGVKd K102;
static _KLpairGVKd K103;
static _KLkeyword_signatureAvaluesGVKi K104;
static _KLbyte_stringGVKd_17 K105;
static _KLsimple_object_vectorGVKd_3 K106;
static _KLsimple_object_vectorGVKd_1 K107;
static _KLsimple_object_vectorGVKd_1 K108;
static _KLunionGVKe K109;
static _KLsingletonGVKd K110;
static _KLsimple_object_vectorGVKd_2 K111;

/* Indirection variables */


/* Variables */

D element_setterVKd = &Kelement_setterVKd;
D replace_elementsXVKd = &Kreplace_elementsXVKd;
D fillXVKd = &KfillXVKd;
D element_no_bounds_check_setterVKe = &Kelement_no_bounds_check_setterVKe;

/* Objects */

_KLincremental_generic_functionGVKe Kelement_setterVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K74,
  (D) 1,
  &K75,
  &K43,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_29,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K40,
  &Ktype_for_copyVKdMM2I
};

_KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K36,
  (D) 1,
  &K37,
  &K8,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_26,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLmutable_explicit_key_collection_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K5,
  &KLlimited_mutable_explicit_key_collection_typeGVKe
};

static _KLsubclassGVKe K5 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_explicit_key_collectionGVKd
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &Kelement_no_bounds_check_setterVKeMM2I
};

static _KLpairGVKd K8 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM0,
  &K9
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM1,
  &K10
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM2,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM3,
  &K12
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM4,
  &K13
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM5,
  &K14
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM6,
  &K15
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM7,
  &K16
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM8,
  &K17
};

static _KLpairGVKd K17 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM9,
  &K18
};

static _KLpairGVKd K18 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM10,
  &K19
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM11,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM12,
  &K21
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM13,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM14,
  &K23
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM15,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM16,
  &K25
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM17,
  &K26
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM18,
  &K27
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM19,
  &K28
};

static _KLpairGVKd K28 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM20,
  &K29
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM21,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM22,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM23,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM24,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM25,
  &K34
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM26,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_check_setterVKeMM27,
  &KPempty_listVKi
};

static _KLsignatureGVKe K36 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K38
};

static _KLbyte_stringGVKd_30 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "element-no-bounds-check-setter"
};

static _KLsimple_object_vectorGVKd_3 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLmutable_collectionGVKd,
  &KLobjectGVKd
};

static _KLsubclassGVKe K39 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_collectionGVKd
};

static _KLsignatureAvaluesGVKi K40 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmutable_collectionG_typesVKi,
  &K41
};

static _KLsimple_object_vectorGVKd_1 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K42
};

static _KLsubclassGVKe K42 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_collectionGVKd
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM0,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM1,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM2,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM3,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM4,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM5,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM6,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM7,
  &K51
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM8,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM9,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM10,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM11,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM12,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM13,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM14,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM15,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM16,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM17,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM18,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM19,
  &K63
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM20,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM21,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM22,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM23,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM24,
  &K68
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM25,
  &K69
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM26,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM27,
  &K71
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM28,
  &K72
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM29,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_setterVKdMM30,
  &KPempty_listVKi
};

static _KLsignatureGVKe K74 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K76
};

static _KLbyte_stringGVKd_14 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "element-setter"
};

static _KLsimple_object_vectorGVKd_3 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLmutable_object_with_elementsGVKe,
  &KLobjectGVKd
};

_KLincremental_generic_functionGVKe KfillXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K92,
  &KPfalseVKi,
  &K93,
  &K80,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KfillXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K96,
  &key_mep_5,
  &KfillXVKdMM0I,
  &K97
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM0,
  &K81
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM1,
  &K82
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM2,
  &K83
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM3,
  &K84
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM4,
  &K85
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM5,
  &K86
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM6,
  &K87
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM7,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM8,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM9,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM10,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &KfillXVKdMM11,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K92 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K94,
  &K95,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_5 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "fill!"
};

static _KLsimple_object_vectorGVKd_2 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_collectionGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureAvaluesGVKi K96 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K94,
  &K95,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KPfalseVKi,
  &KJend_,
  &KPunboundVKi
};

_KLincremental_generic_functionGVKe Kreplace_elementsXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K104,
  &KPfalseVKi,
  &K105,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kreplace_elementsXVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kreplace_elementsXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K104,
  &key_mep_5,
  &Kreplace_elementsXVKdMM0I,
  &K111
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_elementsXVKdMM0,
  &K102
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_elementsXVKdMM1,
  &K103
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_elementsXVKdMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K104 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817613,
  &K106,
  &K107,
  &K108,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_17 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "replace-elements!"
};

static _KLsimple_object_vectorGVKd_3 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collectionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_1 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_1 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K109
};

static _KLunionGVKe K109 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K110,
  &KLintegerGVKd
};

static _KLsingletonGVKd K110 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcount_,
  &KPfalseVKi
};

/* Code */

D Ktype_for_copyVKdMM2I (D collection_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:108
  T2_0 = Kobject_classVKdI(collection_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:106
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:106
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_no_bounds_check_setterVKeMM2I (D new_value_, D collection_, D key_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:122
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  T4_0 = CONGRUENT_CALL3(new_value_, collection_, key_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:120
  MV_SET_COUNT(1);
  return(T4_0);
}

D KfillXVKdMM0I (D collection_, D value_, D Urest_, D start_, D last_) {
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D state_T, state_;
  D T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6_0 = CONGRUENT_CALL1(collection_);
  T6_1 = MV_GET_ELT(1);
  T6_2 = MV_GET_ELT(2);
  T6_3 = MV_GET_ELT(3);
  T6_4 = MV_GET_ELT(4);
  T6_5 = MV_GET_ELT(5);
  T6_6 = MV_GET_ELT(6);
  T6_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  initial_state_ = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  limit_ = T6_1;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  next_state_ = T6_2;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  finished_stateQ_ = T6_3;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:86
  current_element_setter_ = T6_6;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
  state_T = initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:88
    T14 = CALL3(finished_stateQ_, collection_, state_, limit_);
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:89
      CALL3(current_element_setter_, value_, collection_, state_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
      T13 = CALL2(next_state_, collection_, state_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
      state_T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:92
  T15_0 = collection_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:82
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kreplace_elementsXVKdMM0I (D collection_, D predicateQ_, D new_value_function_, D Urest_, D count_) {
  D countF6;
  D T7_0;
  D T7_1;
  D T7_2;
  D T7_3;
  D T7_4;
  D T7_5;
  D T7_6;
  D T7_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_;
  D current_element_setter_;
  D stateF14T, stateF14;
  D elementF15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D stateF21T, stateF21;
  D elementF22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D countF28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  DWORD T34;
  DWORD T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:48
  primitive_type_check(count_, &K109);
  countF6 = count_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T7_0 = CONGRUENT_CALL1(collection_);
  T7_1 = MV_GET_ELT(1);
  T7_2 = MV_GET_ELT(2);
  T7_3 = MV_GET_ELT(3);
  T7_4 = MV_GET_ELT(4);
  T7_5 = MV_GET_ELT(5);
  T7_6 = MV_GET_ELT(6);
  T7_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  initial_state_ = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  limit_ = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  next_state_ = T7_2;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  finished_stateQ_ = T7_3;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  current_element_ = T7_5;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:53
  current_element_setter_ = T7_6;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:54
  if (countF6 != &KPfalseVKi) {
    T31 = countF6;
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:55
    countF28 = T31;
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
    stateF14T = initial_state_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
      stateF14 = stateF14T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
      T29 = countF28;
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
      T32 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
      T33 = primitive_machine_word_equalQ(T32,1);
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
      if (T33 != &KPfalseVKi) {
        T20 = T33;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
        T19 = CALL3(finished_stateQ_, collection_, stateF14, limit_);
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:57
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:58
        elementF15 = CALL2(current_element_, collection_, stateF14);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:59
        T16 = CALL1(predicateQ_, elementF15);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:59
        if (T16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:60
          T17 = CALL1(new_value_function_, elementF15);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:60
          CALL3(current_element_setter_, T17, collection_, stateF14);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:61
          T30 = countF28;
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:61
          T34 = primitive_cast_integer_as_raw(T30);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:61
          T35 = primitive_machine_word_subtract_signal_overflow(T34,4);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:61
          T36 = primitive_cast_raw_as_integer(T35);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:61
          countF28 = T36;
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:59
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
        T18 = CALL2(next_state_, collection_, stateF14);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
        stateF14T = T18;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:56
  } else {
    // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
    stateF21T = initial_state_;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
      stateF21 = stateF21T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:66
      T26 = CALL3(finished_stateQ_, collection_, stateF21, limit_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
      if (T26 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:67
        elementF22 = CALL2(current_element_, collection_, stateF21);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:68
        T23 = CALL1(predicateQ_, elementF22);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:68
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:69
          T24 = CALL1(new_value_function_, elementF22);
          // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:69
          CALL3(current_element_setter_, T24, collection_, stateF21);
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:68
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
        T25 = CALL2(next_state_, collection_, stateF21);
        // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
        stateF21T = T25;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
      // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:65
  }
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:73
  T27_0 = collection_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-collection.dylan:48
  MV_SET_COUNT(1);
  return(T27_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_mutable_collection_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_mutable_collection_for_user () {
  return;
}


/* eof */
