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
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(41);

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
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

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
define__KLstandalone_domainGVKe(1);

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;


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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D Kslot_descriptorVKiMM0I (D instance_, D getter_);
extern _KLincremental_generic_functionGVKe Kslot_initializedQVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM0;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM1;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM2;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM3;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM4;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM5;
extern _KLsimple_copy_down_methodGVKi Kshallow_copyVKdMM6;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM7;
extern _KLmethod_domainGVKe Kshallow_copyVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_1;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_8;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Ksize_setterVKdMM0;
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM1;
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM2;
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM3;
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM4;
extern _KLsimple_methodGVKe Ksize_setterVKdMM5;
extern _KLsetter_methodGVKi Ksize_setterVKdMM6;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLsetter_methodGVKi Ksize_setterVKdMM7;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_6;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM1;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM2;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM3;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM4;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM5;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM6;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM7;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM8;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM9;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM10;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM11;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM12;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM13;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM14;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM15;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM16;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM17;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM18;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM19;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM20;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM21;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM22;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_20;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D Kobject_classVKdI (D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_methodGVKe KemptyQVKdMM0;
extern _KLsimple_methodGVKe KemptyQVKdMM1;
extern _KLsimple_methodGVKe KemptyQVKdMM2;
extern _KLsimple_methodGVKe KemptyQVKdMM3;
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM4;
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM5;
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM6;
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM7;
extern _KLsimple_methodGVKe KemptyQVKdMM8;
extern _KLsimple_methodGVKe KemptyQVKdMM9;
extern _KLsimple_methodGVKe KemptyQVKdMM10;
extern _KLsimple_methodGVKe KemptyQVKdMM11;
extern _KLsimple_methodGVKe KemptyQVKdMM12;
extern _KLsimple_methodGVKe KemptyQVKdMM13;
extern _KLsimple_methodGVKe KemptyQVKdMM14;
extern _KLsimple_methodGVKe KemptyQVKdMM15;
extern _KLsimple_methodGVKe KemptyQVKdMM16;
extern _KLsimple_methodGVKe KemptyQVKdMM17;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_27;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_28;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_29;
D KEEVKdI (D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsetter_methodGVKi Kdebug_name_setterVKeMM0;
extern _KLsetter_methodGVKi Kdebug_name_setterVKeMM1;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLgetter_methodGVKi Kdebug_nameVKeMM0;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLgetter_methodGVKi Kdebug_nameVKeMM1;
extern _KLsimple_methodGVKe Kdebug_nameVKeMM2;
extern _KLsimple_methodGVKe Kdebug_nameVKeMM4;
extern _KLgetter_methodGVKi KsizeVKdMM0;
extern _KLgetter_methodGVKi KsizeVKdMM1;
extern _KLsimple_methodGVKe KsizeVKdMM2;
extern _KLsimple_methodGVKe KsizeVKdMM3;
extern _KLsimple_methodGVKe KsizeVKdMM4;
extern _KLsimple_methodGVKe KsizeVKdMM5;
extern _KLgetter_methodGVKi KsizeVKdMM6;
extern _KLgetter_methodGVKi KsizeVKdMM7;
extern _KLgetter_methodGVKi KsizeVKdMM8;
extern _KLgetter_methodGVKi KsizeVKdMM9;
extern _KLgetter_methodGVKi KsizeVKdMM10;
extern _KLgetter_methodGVKi KsizeVKdMM11;
extern _KLgetter_methodGVKi KsizeVKdMM12;
extern _KLgetter_methodGVKi KsizeVKdMM13;
extern _KLgetter_methodGVKi KsizeVKdMM14;
extern _KLgetter_methodGVKi KsizeVKdMM15;
extern _KLgetter_methodGVKi KsizeVKdMM16;
extern _KLgetter_methodGVKi KsizeVKdMM17;
extern _KLgetter_methodGVKi KsizeVKdMM18;
extern _KLgetter_methodGVKi KsizeVKdMM19;
extern _KLgetter_methodGVKi KsizeVKdMM20;
extern _KLsimple_methodGVKe KsizeVKdMM21;
extern _KLgetter_methodGVKi KsizeVKdMM22;
extern _KLsimple_methodGVKe KsizeVKdMM23;
extern _KLgetter_methodGVKi KsizeVKdMM24;
extern _KLsimple_methodGVKe KsizeVKdMM25;
extern _KLgetter_methodGVKi KsizeVKdMM26;
extern _KLsimple_methodGVKe KsizeVKdMM27;
extern _KLgetter_methodGVKi KsizeVKdMM28;
extern _KLgetter_methodGVKi KsizeVKdMM29;
extern _KLsimple_methodGVKe KsizeVKdMM30;
extern _KLsimple_methodGVKe KsizeVKdMM31;
extern _KLgetter_methodGVKi KsizeVKdMM32;
extern _KLsimple_methodGVKe KsizeVKdMM33;
extern _KLgetter_methodGVKi KsizeVKdMM34;
extern _KLgetter_methodGVKi KsizeVKdMM35;
extern _KLsimple_methodGVKe KsizeVKdMM36;
extern _KLsimple_methodGVKe KsizeVKdMM37;
extern _KLgetter_methodGVKi KsizeVKdMM38;
extern _KLsimple_methodGVKe KsizeVKdMM39;
extern _KLsimple_methodGVKe KsizeVKdMM40;
extern _KLsimple_methodGVKe KsizeVKdMM41;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_29;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_31;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_33;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_34;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_36;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_37;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_38;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_39;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_40;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_41;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_42;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_43;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_44;
extern _KLsimple_methodGVKe Kas_uppercaseXVKdMM0;
extern _KLsimple_methodGVKe Kas_uppercaseXVKdMM1;
extern _KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kas_lowercaseXVKdMM0;
extern _KLsimple_methodGVKe Kas_lowercaseXVKdMM1;
extern _KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_1;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLincremental_generic_functionGVKe Kdebug_name_setterVKe;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
D KinitializeVKdMM1I (D instance_, D Urest_);
extern _KLsimple_methodGVKe KEVKdMM4;
D KEVKdMM4I (D, D);
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLincremental_generic_functionGVKe Ksize_setterVKd;
extern _KLincremental_generic_functionGVKe Kshallow_copyVKd;
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM0;
D Kslot_initializedQVKdMM0I (D, D);
extern _KLsimple_methodGVKe KasVKdMM16;
D KasVKdMM16I (D, D);
static _KLbyte_stringGVKd_41 K15;
static _KLsignatureGVKe K16;
static _KLsimple_object_vectorGVKd_2 K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLpairGVKd K20;
static _KLpairGVKd K21;
static _KLpairGVKd K22;
static _KLpairGVKd K23;
static _KLpairGVKd K24;
static _KLpairGVKd K25;
static _KLpairGVKd K26;
static _KLpairGVKd K27;
static _KLbyte_stringGVKd_12 K28;
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_11 K37;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM0;
D Ktype_for_copyVKdMM0I (D);
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
static _KLpairGVKd K62;
static _KLsignatureAvaluesGVKi K63;
static _KLbyte_stringGVKd_13 K64;
static _KLsignatureAvaluesGVKi K65;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLpairGVKd K68;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLpairGVKd K71;
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLpairGVKd K74;
static _KLpairGVKd K75;
static _KLpairGVKd K76;
static _KLpairGVKd K77;
static _KLpairGVKd K78;
static _KLpairGVKd K79;
static _KLpairGVKd K80;
static _KLpairGVKd K81;
static _KLpairGVKd K82;
static _KLpairGVKd K83;
static _KLsignatureAvaluesGVKi K84;
static _KLbyte_stringGVKd_6 K85;
static _KLsignatureAvaluesGVKi K86;
static _KLkeyword_signatureGVKe K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLbyte_stringGVKd_17 K90;
extern _KLsimple_methodGVKe Kdebug_nameVKeMM3;
D Kdebug_nameVKeMM3I (D);
static _KLpairGVKd K93;
static _KLpairGVKd K94;
static _KLpairGVKd K95;
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_10 K98;
static _KLpairGVKd K99;
static _KLpairGVKd K100;
static _KLpairGVKd K101;
static _KLpairGVKd K102;
static _KLpairGVKd K103;
static _KLpairGVKd K104;
static _KLpairGVKd K105;
static _KLpairGVKd K106;
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLpairGVKd K114;
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLpairGVKd K117;
static _KLpairGVKd K118;
static _KLpairGVKd K119;
static _KLpairGVKd K120;
static _KLpairGVKd K121;
static _KLpairGVKd K122;
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLpairGVKd K125;
static _KLpairGVKd K126;
static _KLpairGVKd K127;
static _KLpairGVKd K128;
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLpairGVKd K131;
static _KLpairGVKd K132;
static _KLpairGVKd K133;
static _KLpairGVKd K134;
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLbyte_stringGVKd_4 K141;
extern _KLincremental_generic_functionGVKe Kas_uppercaseXVKd;
static _KLpairGVKd K143;
static _KLpairGVKd K144;
static _KLsignatureGVKe K145;
static _KLbyte_stringGVKd_13 K146;
extern _KLincremental_generic_functionGVKe Kas_lowercaseXVKd;
static _KLpairGVKd K148;
static _KLpairGVKd K149;
static _KLbyte_stringGVKd_13 K150;

/* Indirection variables */


/* Variables */

D type_for_copyVKd = &Ktype_for_copyVKd;
D shallow_copyVKd = &Kshallow_copyVKd;
D debug_nameVKe = &Kdebug_nameVKe;
D debug_name_setterVKe = &Kdebug_name_setterVKe;
D sizeVKd = &KsizeVKd;
D size_setterVKd = &Ksize_setterVKd;
D emptyQVKd = &KemptyQVKd;
D as_lowercaseXVKd = &Kas_lowercaseXVKd;
D as_uppercaseXVKd = &Kas_uppercaseXVKd;

/* Objects */

_KLincremental_generic_functionGVKe KsizeVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K141,
  &K99,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_44,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdebug_nameVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K98,
  &K93,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdebug_name_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K90,
  &K88,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KinitializeVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K87,
  &key_mep_2,
  &KinitializeVKdMM1I,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe KEVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K86,
  &KEVKdMM4I
};

_KLincremental_generic_functionGVKe KemptyQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K84,
  (D) 1,
  &K85,
  &K66,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_29,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Ktype_for_copyVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K63,
  (D) 1,
  &K64,
  &K40,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_20,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Ksize_setterVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K37,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_6,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kshallow_copyVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K28,
  &K20,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kslot_initializedQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kslot_initializedQVKdMM0I
};

_KLsimple_methodGVKe KasVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KasVKdMM16I
};

static _KLbyte_stringGVKd_41 K15 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Object %= cannot be converted to class %="
};

static _KLsignatureGVKe K16 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K19,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLfunctionGVKd
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM0,
  &K21
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM1,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM2,
  &K23
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM3,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM4,
  &K25
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM5,
  &K26
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM6,
  &K27
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &Kshallow_copyVKdMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "shallow-copy"
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM1,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM2,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM3,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM4,
  &K34
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM5,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM6,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_setterVKdMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "size-setter"
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K65,
  &Ktype_for_copyVKdMM0I
};

static _KLpairGVKd K40 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM0,
  &K41
};

static _KLpairGVKd K41 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM1,
  &K42
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM2,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM3,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM4,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM5,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM6,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM7,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM8,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM9,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM10,
  &K51
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM11,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM12,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM13,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM14,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM15,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM16,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM17,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM18,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM19,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM20,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM21,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_copyVKdMM22,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_13 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "type-for-copy"
};

static _KLsignatureAvaluesGVKi K65 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM0,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM1,
  &K68
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM2,
  &K69
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM3,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM4,
  &K71
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM5,
  &K72
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM6,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM7,
  &K74
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM8,
  &K75
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM9,
  &K76
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM10,
  &K77
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM11,
  &K78
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM12,
  &K79
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM13,
  &K80
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM14,
  &K81
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM15,
  &K82
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM16,
  &K83
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyQVKdMM17,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K84 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_6 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "empty?"
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLkeyword_signatureGVKe K87 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42729477,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_name_setterVKeMM0,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_name_setterVKeMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K90 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "debug-name-setter"
};

_KLsimple_methodGVKe Kdebug_nameVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kdebug_nameVKeMM3I
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_nameVKeMM0,
  &K94
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_nameVKeMM1,
  &K95
};

static _KLpairGVKd K95 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_nameVKeMM2,
  &K96
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_nameVKeMM3,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Kdebug_nameVKeMM4,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "debug-name"
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM0,
  &K100
};

static _KLpairGVKd K100 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM1,
  &K101
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM2,
  &K102
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM3,
  &K103
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM4,
  &K104
};

static _KLpairGVKd K104 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM5,
  &K105
};

static _KLpairGVKd K105 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM6,
  &K106
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM7,
  &K107
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM8,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM9,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM10,
  &K110
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM11,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM12,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM13,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM14,
  &K114
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM15,
  &K115
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM16,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM17,
  &K117
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM18,
  &K118
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM19,
  &K119
};

static _KLpairGVKd K119 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM20,
  &K120
};

static _KLpairGVKd K120 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM21,
  &K121
};

static _KLpairGVKd K121 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM22,
  &K122
};

static _KLpairGVKd K122 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM23,
  &K123
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM24,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM25,
  &K125
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM26,
  &K126
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM27,
  &K127
};

static _KLpairGVKd K127 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM28,
  &K128
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM29,
  &K129
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM30,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM31,
  &K131
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM32,
  &K132
};

static _KLpairGVKd K132 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM33,
  &K133
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM34,
  &K134
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM35,
  &K135
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM36,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM37,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM38,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM39,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM40,
  &K140
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &KsizeVKdMM41,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "size"
};

_KLincremental_generic_functionGVKe Kas_uppercaseXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K145,
  &KPfalseVKi,
  &K146,
  &K143,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kas_uppercaseXVKdRD_dylanRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_uppercaseXVKdMM0,
  &K144
};

static _KLpairGVKd K144 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_uppercaseXVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K145 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_13 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "as-uppercase!"
};

_KLincremental_generic_functionGVKe Kas_lowercaseXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K145,
  &KPfalseVKi,
  &K150,
  &K148,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kas_lowercaseXVKdRD_dylanRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K148 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseXVKdMM0,
  &K149
};

static _KLpairGVKd K149 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseXVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K150 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "as-lowercase!"
};

/* Code */

D KinitializeVKdMM1I (D instance_, D Urest_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:14
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:14
  MV_SET_COUNT(0);
  return(T3);
}

D KEVKdMM4I (D object_1_, D object_2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:92
  T3_0 = KEEVKdI(object_1_, object_2_);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:91
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kslot_initializedQVKdMM0I (D instance_, D getter_) {
  D T3_0;
  D descriptor_;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:19
  descriptor_ = Kslot_descriptorVKiMM0I(instance_, getter_);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:21
  CONGRUENT_CALL_PROLOG(&Kslot_initializedQVKd, 2);
  T3_0 = CONGRUENT_CALL2(instance_, descriptor_);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:17
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM16I (D class_, D object_) {
  D T3_0;
  D T4_0;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:30
  T5 = primitive_instanceQ(object_,class_);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:30
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/object.dylan:31
    T3_0 = object_;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/object.dylan:33
    T6.vector_element_[0] = object_;
    T6.vector_element_[1] = class_;
    // /opt/opendylan-2013.1/sources/dylan/object.dylan:33
    T7_0 = KerrorVKdMM1I(&K15, &T6);
    T4_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:29
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_for_copyVKdMM0I (D object_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:38
  T2_0 = Kobject_classVKdI(object_);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:37
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdebug_nameVKeMM3I (D object_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/object.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:99
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/object.dylan:98
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_object_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_object_for_user () {
  return;
}


/* eof */
