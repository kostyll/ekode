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
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(20);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_rest_value_;
} _KLkeyword_signatureArest_valueGVKi;

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
  D signature_values_;
  D signature_rest_value_;
} _KLkeyword_signatureAvaluesArest_valueGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
  D signature_rest_value_;
} _KLsignatureAvaluesArest_valueGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_rest_value_;
} _KLsignatureArest_valueGVKi;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(53);
define__KLbyte_stringGVKd(105);
define__KLbyte_stringGVKd(56);
define__KLbyte_stringGVKd(90);
define__KLbyte_stringGVKd(59);
define__KLbyte_stringGVKd(78);
define__KLbyte_stringGVKd(83);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(76);
define__KLbyte_stringGVKd(64);
define__KLbyte_stringGVKd(57);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(68);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(46);

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_rest_value_;
} _KLsignature_rest_value_mixinGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignature_values_mixinGVKi;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;


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
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KEEVKdI (D, D);
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsymbolGVKd KJrest_valueQ_;
extern _KLsymbolGVKd KJrequired_;
extern _KLsymbolGVKd KJnumber_required_;
extern _KLsymbolGVKd KJnumber_values_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLkeyword_signatureArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureArest_valueGVKiW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLclassGVKd KLkeyword_signatureAvaluesArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesArest_valueGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsignatureAvaluesArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesArest_valueGVKiW;
extern _KLclassGVKd KLsignatureArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureArest_valueGVKiW;
extern _KLsymbolGVKd KJvalues_;
extern _KLsymbolGVKd KJrest_value_;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJkeyQ_;
extern _KLsymbolGVKd KJall_keysQ_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe;
extern _KLsymbolGVKd KJproperties_;
extern _KLsymbolGVKd KJnextQ_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsignatureG_typesVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe KcongruentQVKiMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe KcongruentQVKiMM2;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Klazy_subtypeQVKiMM0I (D type1_, D type2_);
D KmemberQVKdMM2I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsealed_generic_functionGVKe Ksignature_valuesVKi;
extern _KLsealed_generic_functionGVKe Ksignature_rest_valueVKi;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
D Ktype_completeQ_sovVKiI (D, D);
extern _KLclassGVKd KLsignature_rest_value_mixinGVKi;
extern _KLmm_wrapperGVKi_0 KLsignature_rest_value_mixinGVKiW;
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
extern _KLclassGVKd KLsignature_values_mixinGVKi;
extern _KLmm_wrapperGVKi_0 KLsignature_values_mixinGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kreduce_incomplete_classes_sovVKiI (D, D, D, D);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
D Kmap_congruency_classes_sovVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJrestQ_;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern D Dsignature_LobjectG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Ksignature_valuesVKiMM1;
D Ksignature_valuesVKiMM1I (D);
extern _KLsimple_methodGVKe Ksignature_keysVKiMM1;
D Ksignature_keysVKiMM1I (D);
extern _KLsimple_methodGVKe Ksignature_rest_valueVKiMM1;
D Ksignature_rest_valueVKiMM1I (D);
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM1;
D Kinitialize_packed_slotsVKeMM1I (D, D, D, D, D, D, D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM4;
D Kmap_congruency_classesVKiMM4I (D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM3;
D Kmap_congruency_classesVKiMM3I (D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM2;
D Kmap_congruency_classesVKiMM2I (D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM5;
D Kreduce_incomplete_classesVKiMM5I (D, D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM4;
D Kreduce_incomplete_classesVKiMM4I (D, D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM3;
D Kreduce_incomplete_classesVKiMM3I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM2;
D Ktype_completeQVKeMM2I (D sig_);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM1;
D Krecompute_type_completeXVKiMM1I (D sig_);
D Kinitialize_signature_completenessVKiI (D);
extern _KLsealed_generic_functionGVKe KcongruentQVKi;
extern _KLkeyword_methodGVKe KinitializeVKdMM8;
D KinitializeVKdMM8I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM47;
D KmakeVKdMM47I (D, D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF41;
static D Kanonymous_of_makeF41I (D);
static _KLbyte_stringGVKd_46 K32;
static _KLbyte_stringGVKd_51 K33;
static _KLbyte_stringGVKd_68 K34;
static _KLbyte_stringGVKd_32 K35;
static _KLbyte_stringGVKd_57 K36;
static _KLbyte_stringGVKd_64 K37;
static _KLbyte_stringGVKd_76 K38;
static _KLsymbolGVKd KJdefault_valuesQ_;
static _KLbyte_stringGVKd_15 K40;
static _KLbyte_stringGVKd_15 K42;
static _KLsignatureGVKe K43;
static _KLkeyword_signatureGVKe K44;
static _KLsimple_object_vectorGVKd_14 K45;
static _KLsimple_object_vectorGVKd_1 K46;
static _KLsimple_object_vectorGVKd_7 K47;
static _KLsingletonGVKd K48;
D Ksignature_nextQ_setterVKiMM0I (D, D);
D Ksignature_sealed_domainQ_setterVKiMM0I (D, D);
D Ksignature_default_valuesQ_setterVKiMM0I (D, D);
static _KLkeyword_signatureGVKe K52;
static _KLsimple_object_vectorGVKd_8 K53;
static _KLsymbolGVKd KJsealed_domainQ_;
static _KLbyte_stringGVKd_14 K55;
static _KLsimple_object_vectorGVKd_4 K56;
extern _KLsimple_methodGVKe KcongruentQVKiMM0;
D KcongruentQVKiMM0I (D, D);
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_10 K62;
static _KLsimple_closure_methodGVKi_0 KfailF71;
static D KfailF71I (D);
static _KLsymbolGVKd KJcongruent_;
static _KLbyte_stringGVKd_9 K66;
static _KLbyte_stringGVKd_51 K67;
static _KLbyte_stringGVKd_83 K68;
static _KLbyte_stringGVKd_78 K69;
static _KLbyte_stringGVKd_68 K70;
static _KLsignatureAvaluesGVKi K72;
static _KLsimple_object_vectorGVKd_2 K73;
D Ksignature_completeQ_setterVKeMM0I (D, D);
static _KLsignatureAvaluesGVKi K75;
static _KLsignatureGVKe K76;
static _KLsimple_object_vectorGVKd_3 K77;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78;
static _KLsignatureGVKe K79;
static _KLsimple_object_vectorGVKd_3 K80;
static _KLsignatureGVKe K81;
static _KLsimple_object_vectorGVKd_3 K82;
static _KLsignatureGVKe K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K85;
static _KLsignatureGVKe K86;
static _KLsimple_object_vectorGVKd_2 K87;
static _KLsignatureGVKe K88;
static _KLsimple_object_vectorGVKd_2 K89;
D Ksignature_number_required_setterVKiMM0I (D, D);
D Ksignature_number_values_setterVKiMM0I (D, D);
D Ksignature_keyQ_setterVKiMM0I (D, D);
D Ksignature_all_keysQ_setterVKiMM0I (D, D);
D Ksignature_restQ_setterVKiMM0I (D, D);
D Ksignature_rest_valueQ_setterVKiMM0I (D, D);
static _KLkeyword_signatureGVKe K96;
static _KLsimple_object_vectorGVKd_20 K97;
static _KLsymbolGVKd KJcompleteQ_;
static _KLbyte_stringGVKd_9 K99;
static _KLsimple_object_vectorGVKd_10 K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_1 K102;
static _KLunionGVKe K103;
static _KLsingletonGVKd K104;
static _KLsignatureGVKe K105;
static _KLsignatureAvaluesGVKi K106;
static _KLbyte_stringGVKd_59 K107;
static _KLbyte_stringGVKd_90 K108;
static _KLbyte_stringGVKd_57 K109;
static _KLbyte_stringGVKd_56 K110;
static _KLbyte_stringGVKd_105 K111;
static _KLbyte_stringGVKd_53 K112;
extern _KLsimple_methodGVKe Ksignature_number_requiredVKeMM0;
D Ksignature_number_requiredVKeMM0I (D x_);
static _KLsignatureAvaluesGVKi K115;
extern _KLsimple_methodGVKe Ksignature_number_valuesVKeMM0;
D Ksignature_number_valuesVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_keyQVKeMM0;
D Ksignature_keyQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_all_keysQVKeMM0;
D Ksignature_all_keysQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_restQVKeMM0;
D Ksignature_restQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_rest_valueQVKeMM0;
D Ksignature_rest_valueQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_sealed_domainQVKeMM0;
D Ksignature_sealed_domainQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_completeQVKeMM0;
D Ksignature_completeQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Ksignature_completeQ_setterVKeMM0;
static _KLsignatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_2 K132;
extern _KLsimple_methodGVKe Ksignature_optionalsQVKeMM0;
D Ksignature_optionalsQVKeMM0I (D sig_);

/* Indirection variables */

static D IKJdefault_valuesQ_ = &KJdefault_valuesQ_;
static D IKJsealed_domainQ_ = &KJsealed_domainQ_;
static D IKJcongruent_ = &KJcongruent_;
static D IKJcompleteQ_ = &KJcompleteQ_;

/* Variables */

D congruentQVKi = &KcongruentQVKi;
D signature_optionalsQVKe = &Ksignature_optionalsQVKeMM0;
D signature_completeQ_setterVKe = &Ksignature_completeQ_setterVKeMM0;
D signature_completeQVKe = &Ksignature_completeQVKeMM0;
D signature_sealed_domainQVKe = &Ksignature_sealed_domainQVKeMM0;
D signature_rest_valueQVKe = &Ksignature_rest_valueQVKeMM0;
D signature_restQVKe = &Ksignature_restQVKeMM0;
D signature_all_keysQVKe = &Ksignature_all_keysQVKeMM0;
D signature_keyQVKe = &Ksignature_keyQVKeMM0;
D signature_number_valuesVKe = &Ksignature_number_valuesVKeMM0;
D signature_number_requiredVKe = &Ksignature_number_requiredVKeMM0;
D Drequired_argument_countVKi = &K112;
D Drequired_argument_typeVKi = &K111;
D Dnot_both_keywordVKi = &K110;
D Dnot_both_variableVKi = &K109;
D Drequired_values_typeVKi = &K108;
D Drequired_values_count_too_smallVKi = &K107;
D Dmandatory_keywordVKi = &K70;
D Dgeneric_values_not_variableVKi = &K69;
D Drest_values_typeVKi = &K68;
D Drequired_values_countVKi = &K67;

/* Objects */

_KLsimple_methodGVKe Ksignature_valuesVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K106,
  &Ksignature_valuesVKiMM1I
};

_KLsimple_methodGVKe Ksignature_keysVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K105,
  &Ksignature_keysVKiMM1I
};

_KLsimple_methodGVKe Ksignature_rest_valueVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K101,
  &Ksignature_rest_valueVKiMM1I
};

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep,
  &K96,
  &key_mep,
  &Kinitialize_packed_slotsVKeMM1I,
  &K97
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K88,
  &Kmap_congruency_classesVKiMM4I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K86,
  &Kmap_congruency_classesVKiMM3I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K83,
  &Kmap_congruency_classesVKiMM2I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K81,
  &Kreduce_incomplete_classesVKiMM5I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K79,
  &Kreduce_incomplete_classesVKiMM4I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K76,
  &Kreduce_incomplete_classesVKiMM3I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ktype_completeQVKeMM2I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Krecompute_type_completeXVKiMM1I
};

_KLsealed_generic_functionGVKe KcongruentQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K62,
  &K59,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KinitializeVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K52,
  &key_mep_6,
  &KinitializeVKdMM8I,
  &K53
};

_KLkeyword_methodGVKe KmakeVKdMM47 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K44,
  &key_mep_9,
  &KmakeVKdMM47I,
  &K45
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF41 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K43,
  &Kanonymous_of_makeF41I,
  (D) 1
};

static _KLbyte_stringGVKd_46 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "number-required: was different from required:."
};

static _KLbyte_stringGVKd_51 K33 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Attempt to create a function signature for which %="
};

static _KLbyte_stringGVKd_68 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 273,
  "number-required: is greater than the size of the required: sequence."
};

static _KLbyte_stringGVKd_32 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_57 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 229,
  "number-values: was specified when values: was an integer."
};

static _KLbyte_stringGVKd_64 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 257,
  "number-values: is greater than the size of the values: sequence."
};

static _KLbyte_stringGVKd_76 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 305,
  "Attempt to create a non-#key function signature for which all-keys? is true."
};

static _KLsymbolGVKd KJdefault_valuesQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K40
};

static _KLbyte_stringGVKd_15 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "default-values?"
};

static _KLbyte_stringGVKd_15 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureGVKe K43 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K44 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47973381,
  &K46,
  &K47,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_14 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KJrequired_,
  &KPfalseVKi,
  &KJkeyQ_,
  &KPfalseVKi,
  &KJall_keysQ_,
  &KPfalseVKi,
  &KJvalues_,
  &KPempty_vectorVKi,
  &KJrest_value_,
  &KLobjectGVKd,
  &KJnumber_required_,
  &KPfalseVKi,
  &KJnumber_values_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K48
};

static _KLsimple_object_vectorGVKd_7 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KJrequired_,
  &KJkeyQ_,
  &KJall_keysQ_,
  &KJvalues_,
  &KJrest_value_,
  &KJnumber_required_,
  &KJnumber_values_
};

static _KLsingletonGVKd K48 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsignatureGVKe
};

static _KLkeyword_signatureGVKe K52 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 50069509,
  &KDsignature_LsignatureG_typesVKi,
  &K56,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJproperties_,
  &KPfalseVKi,
  &KJnextQ_,
  &KPfalseVKi,
  &KJsealed_domainQ_,
  &KPfalseVKi,
  &KJdefault_valuesQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJsealed_domainQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K55
};

static _KLbyte_stringGVKd_14 K55 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "sealed-domain?"
};

static _KLsimple_object_vectorGVKd_4 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJproperties_,
  &KJnextQ_,
  &KJsealed_domainQ_,
  &KJdefault_valuesQ_
};

_KLsimple_methodGVKe KcongruentQVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K72,
  &KcongruentQVKiMM0I
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &KcongruentQVKiMM0,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &KcongruentQVKiMM1,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &KcongruentQVKiMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "congruent?"
};

static _KLsimple_closure_methodGVKi_0 KfailF71 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KfailF71I,
  (D) 1
};

static _KLsymbolGVKd KJcongruent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K66
};

static _KLbyte_stringGVKd_9 K66 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "congruent"
};

static _KLbyte_stringGVKd_51 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "they don\'t have the same number of required results"
};

static _KLbyte_stringGVKd_83 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 333,
  "the method\'s rest value type is not a subtype of the rest value type of the generic"
};

static _KLbyte_stringGVKd_78 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 313,
  "the method\'s values list includes #rest, but the generic\'s values listdoes not"
};

static _KLbyte_stringGVKd_68 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 273,
  "the method does not recognize some mandatory keywords of the generic"
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_LsignatureG_typesVKi,
  &K73
};

static _KLsimple_object_vectorGVKd_2 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsignatureG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K76 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K77
};

static _KLsimple_object_vectorGVKd_3 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsignatureGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K79 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 46138381,
  &K80
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsignature_rest_value_mixinGVKi,
  &KLobjectGVKd
};

static _KLsignatureGVKe K81 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 46138381,
  &K82
};

static _KLsimple_object_vectorGVKd_3 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsignature_values_mixinGVKi,
  &KLobjectGVKd
};

static _KLsignatureGVKe K83 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K84
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsignatureGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K85 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K86 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 46137353,
  &K87
};

static _KLsimple_object_vectorGVKd_2 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsignature_rest_value_mixinGVKi
};

static _KLsignatureGVKe K88 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 46137353,
  &K89
};

static _KLsimple_object_vectorGVKd_2 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsignature_values_mixinGVKi
};

static _KLkeyword_signatureGVKe K96 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &KDsignature_LsignatureG_typesVKi,
  &K100,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_20 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 81,
  &KJnumber_required_,
  (D) 1,
  &KJnumber_values_,
  (D) 1,
  &KJkeyQ_,
  &KPfalseVKi,
  &KJall_keysQ_,
  &KPfalseVKi,
  &KJrestQ_,
  &KPfalseVKi,
  &KJrest_valueQ_,
  &KPfalseVKi,
  &KJnextQ_,
  &KPfalseVKi,
  &KJdefault_valuesQ_,
  &KPfalseVKi,
  &KJsealed_domainQ_,
  &KPfalseVKi,
  &KJcompleteQ_,
  &KPtrueVKi
};

static _KLsymbolGVKd KJcompleteQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

static _KLbyte_stringGVKd_9 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "complete?"
};

static _KLsimple_object_vectorGVKd_10 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJnumber_required_,
  &KJnumber_values_,
  &KJkeyQ_,
  &KJall_keysQ_,
  &KJrestQ_,
  &KJrest_valueQ_,
  &KJnextQ_,
  &KJdefault_valuesQ_,
  &KJsealed_domainQ_,
  &KJcompleteQ_
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsignatureG_typesVKi,
  &K102
};

static _KLsimple_object_vectorGVKd_1 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K103
};

static _KLunionGVKe K103 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K104,
  &KLtypeGVKd
};

static _KLsingletonGVKd K104 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureGVKe K105 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LsignatureG_typesVKi
};

static _KLsignatureAvaluesGVKi K106 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsignatureG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLbyte_stringGVKd_59 K107 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 237,
  "the generic has more required return values than the method"
};

static _KLbyte_stringGVKd_90 K108 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 361,
  "some of the method\'s required values types don\'t match the type constraints of the generic"
};

static _KLbyte_stringGVKd_57 K109 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 229,
  "one parameter list includes #rest, but the other does not"
};

static _KLbyte_stringGVKd_56 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 225,
  "one parameter list includes #key, but the other does not"
};

static _KLbyte_stringGVKd_105 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 421,
  "some of the method\'s required parameter specializers aren\'t subtypes of their counterparts in the generic"
};

static _KLbyte_stringGVKd_53 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "they don\'t have the same number of required arguments"
};

_KLsimple_methodGVKe Ksignature_number_requiredVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K115,
  &Ksignature_number_requiredVKeMM0I
};

static _KLsignatureAvaluesGVKi K115 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsignatureG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Ksignature_number_valuesVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K115,
  &Ksignature_number_valuesVKeMM0I
};

_KLsimple_methodGVKe Ksignature_keyQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_keyQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_all_keysQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_all_keysQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_restQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_restQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_rest_valueQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_rest_valueQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_sealed_domainQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_sealed_domainQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_completeQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_completeQVKeMM0I
};

_KLsimple_methodGVKe Ksignature_completeQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K131,
  &Ksignature_completeQ_setterVKeMM0I
};

static _KLsignatureAvaluesGVKi K131 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K132,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLsignatureGVKe
};

_KLsimple_methodGVKe Ksignature_optionalsQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K75,
  &Ksignature_optionalsQVKeMM0I
};

/* Code */

D Ksignature_valuesVKiMM1I (D sig_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:134
  T5 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:134
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:134
  T7 = primitive_machine_word_logbitQ(23,T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:134
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:135
    T2_0 = Dsignature_LobjectG_typesVKi;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:137
    T3_0 = &KPempty_vectorVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:132
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksignature_keysVKiMM1I (D sig_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:129
  T2 = &KPempty_vectorVKi;
  MV_SET_ELT(0, &KPempty_vectorVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:128
  return(T2);
}

D Ksignature_rest_valueVKiMM1I (D sig_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:141
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:143
  T5 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:143
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:143
  T7 = primitive_machine_word_logbitQ(21,T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:143
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:144
    T2_0 = &KLobjectGVKd;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:146
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:141
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kinitialize_packed_slotsVKeMM1I (D x_, D all_keys_, D signature_number_required_, D signature_number_values_, D signature_keyQ_, D signature_all_keysQ_, D signature_restQ_, D signature_rest_valueQ_, D signature_nextQ_, D signature_default_valuesQ_, D signature_sealed_domainQ_, D signature_completeQ_) {
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
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

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T17 = primitive_copy_vector(all_keys_);
  T16 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T18 = primitive_idQ(T16,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T19 = SLOT_VALUE_INITD(T16, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T20 = SLOT_VALUE_INITD(T16, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    MEP_CALL_PROLOG(T19, T20, 2);
    MEP_CALL2(T19, x_, T17);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T21 = primitive_idQ(signature_number_required_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T21 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:166
    Ksignature_number_required_setterVKiMM0I(signature_number_required_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T22 = primitive_idQ(signature_number_values_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T22 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:168
    Ksignature_number_values_setterVKiMM0I(signature_number_values_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T23 = primitive_idQ(signature_keyQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T23 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:170
    Ksignature_keyQ_setterVKiMM0I(signature_keyQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T24 = primitive_idQ(signature_all_keysQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T24 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:172
    Ksignature_all_keysQ_setterVKiMM0I(signature_all_keysQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T25 = primitive_idQ(signature_restQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T25 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:174
    Ksignature_restQ_setterVKiMM0I(signature_restQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T26 = primitive_idQ(signature_rest_valueQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T26 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:176
    Ksignature_rest_valueQ_setterVKiMM0I(signature_rest_valueQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T27 = primitive_idQ(signature_nextQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T27 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:178
    Ksignature_nextQ_setterVKiMM0I(signature_nextQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T28 = primitive_idQ(signature_default_valuesQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T28 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:180
    Ksignature_default_valuesQ_setterVKiMM0I(signature_default_valuesQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T29 = primitive_idQ(signature_sealed_domainQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T29 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:182
    Ksignature_sealed_domainQ_setterVKiMM0I(signature_sealed_domainQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T30 = primitive_idQ(signature_completeQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T14 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T15 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:184
    Ksignature_completeQ_setterVKeMM0I(signature_completeQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:184
    T13 = signature_completeQ_;
    MV_SET_ELT(0, signature_completeQ_);
    MV_SET_COUNT(1);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  return(T15);
}

D Kmap_congruency_classesVKiMM4I (D f_, D x_) {
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:393
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
  T3 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T5 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T7 = primitive_machine_word_bit_field_extract(8,10,T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T8 = primitive_machine_word_logand(T7,-4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:394
  Kmap_congruency_classes_sovVKiI(f_, T3, T10);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
  T11 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
    KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
    T12 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
    T13 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
    MEP_CALL_PROLOG(T12, T13, 2);
    MEP_CALL2(T12, f_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:395
  T14 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:393
  MV_SET_COUNT(0);
  return(T14);
}

D Kmap_congruency_classesVKiMM3I (D f_, D x_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:381
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:382
  CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
  T3 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:382
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K85, 2);
  ENGINE_NODE_CALL2(&K85, f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
  T5 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
    KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
    T6 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
    T7 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
    MEP_CALL_PROLOG(T6, T7, 2);
    MEP_CALL2(T6, f_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:383
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:381
  MV_SET_COUNT(0);
  return(T8);
}

D Kmap_congruency_classesVKiMM2I (D f_, D sig_) {
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:363
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T4 = SLOT_VALUE_INITD(sig_, 1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T5 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T7 = primitive_machine_word_logand(T6,1020);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:364
  T3 = Kmap_congruency_classes_sovVKiI(f_, T4, T9);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:363
  MV_SET_COUNT(0);
  return(T3);
}

D Kreduce_incomplete_classesVKiMM5I (D f_, D x_, D ans_) {
  D T4;
  D T5_0;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:399
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
  T4 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T7 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T9 = primitive_machine_word_bit_field_extract(8,10,T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T10 = primitive_machine_word_logand(T9,-4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T14 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    T17 = KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    T18 = T17;
    T20 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    T15 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    T16 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    MEP_CALL_PROLOG(T15, T16, 3);
    T13 = MEP_CALL3(T15, f_, x_, ans_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
    T19 = T13;
    T20 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:401
  T5_0 = Kreduce_incomplete_classes_sovVKiI(f_, T4, T12, T20);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:399
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kreduce_incomplete_classesVKiMM4I (D f_, D x_, D ans_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:387
  T5 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
  CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
  T4 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
  T7 = primitive_idQ(T5,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    T10 = KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    T11 = T10;
    T13 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    T8 = SLOT_VALUE_INITD(T5, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    T9 = SLOT_VALUE_INITD(T5, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    MEP_CALL_PROLOG(T8, T9, 3);
    T6 = MEP_CALL3(T8, f_, x_, ans_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
    T12 = T6;
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:389
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K78, 3);
  T14_0 = ENGINE_NODE_CALL3(&K78, f_, T4, T13);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:387
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kreduce_incomplete_classesVKiMM3I (D f_, D sig_, D ans_) {
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:368
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T5 = SLOT_VALUE_INITD(sig_, 1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T6 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T8 = primitive_machine_word_logand(T7,1020);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:370
  T4_0 = Kreduce_incomplete_classes_sovVKiI(f_, T5, T10, ans_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:368
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_completeQVKeMM2I (D sig_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:343
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:344
  T2 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:344
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:344
  T4 = primitive_machine_word_logbitQ(25,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:344
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:343
  MV_SET_COUNT(1);
  return(T5_0);
}

D Krecompute_type_completeXVKiMM1I (D sig_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:358
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
  T5 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
  T7 = primitive_machine_word_logbitQ(25,T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
    T2_0 = T7;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
    T3_0 = Kinitialize_signature_completenessVKiI(sig_);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:358
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kinitialize_signature_completenessVKiI (D sig_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:348
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T11 = SLOT_VALUE_INITD(sig_, 1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T12 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T14 = primitive_machine_word_logand(T13,1020);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T15 = primitive_machine_word_logior(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T16 = primitive_cast_raw_as_integer(T15);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  T1 = Ktype_completeQ_sovVKiI(T11, T16);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:351
    T17 = primitive_instanceQ(sig_,&KLsignature_rest_value_mixinGVKi);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:351
    T18 = primitive_not(T17);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:351
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:352
      CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
      T2 = CONGRUENT_CALL1(sig_);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:352
      CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
      T3 = CONGRUENT_CALL1(T2);
      T4 = T3;
    } else {
      T4 = T18;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:351
    T5 = T4;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:353
    T19 = primitive_instanceQ(sig_,&KLsignature_values_mixinGVKi);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:353
    T20 = primitive_not(T19);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:353
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
      T6 = CONGRUENT_CALL1(sig_);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T21 = SLOT_VALUE_INITD(sig_, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T22 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T23 = primitive_machine_word_bit_field_extract(8,10,T22);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T24 = primitive_machine_word_logand(T23,-4);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T25 = primitive_machine_word_logior(T24,1);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T26 = primitive_cast_raw_as_integer(T25);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:354
      T7 = Ktype_completeQ_sovVKiI(T6, T26);
      T8 = T7;
    } else {
      T8 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:353
    T9 = T8;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:349
  Ksignature_completeQ_setterVKeMM0I(T9, sig_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:349
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:348
  MV_SET_COUNT(1);
  return(T10_0);
}

D KinitializeVKdMM8I (D sig_, D all_keys_, D properties_, D nextQ_, D sealed_domainQ_, D default_valuesQ_) {
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:150
  T9 = primitive_copy_vector(all_keys_);
  T8 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
  T10 = primitive_idQ(T8,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
    KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
    T11 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
    T12 = SLOT_VALUE_INITD(T8, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
    MEP_CALL_PROLOG(T11, T12, 2);
    MEP_CALL2(T11, sig_, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:155
  if (properties_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:156
    Ksignature_nextQ_setterVKiMM0I(nextQ_, sig_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:157
    Ksignature_sealed_domainQ_setterVKiMM0I(sealed_domainQ_, sig_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:158
    Ksignature_default_valuesQ_setterVKiMM0I(default_valuesQ_, sig_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:160
    APPLY2(&Kinitialize_packed_slotsVKe, sig_, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:155
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:162
  T7 = Kinitialize_signature_completenessVKiI(sig_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:150
  return(T7);
}

D KmakeVKdMM47I (D class_, D all_keys_, D required_, D keyQ_, D all_keysQ_, D vals_, D rest_value_, D number_required_, D number_values_) {
  D T10;
  D T11;
  D T12;
  D vF13;
  D T14;
  D T15_0;
  D T15_1;
  D T16_0;
  D T16_1;
  D number_requiredF17;
  D requiredF18;
  D T19;
  D T20;
  D T21;
  D vF22;
  D T23;
  D T24_0;
  D T24_1;
  D T25_0;
  D T25_1;
  D number_valuesF26;
  D valsF27;
  D default_rest_valueQ_;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39_0;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  _KLsimple_object_vectorGVKd_1 T49 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T50 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T51_0;
  D T51_1;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  _KLsimple_object_vectorGVKd_1 T57 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T58 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T59_0;
  D T59_1;
  _KLsimple_object_vectorGVKd_1 T60 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T61_0;
  D T61_1;
  D T62_0;
  D T62_1;
  D T63_0;
  D T63_1;
  D T64;
  D T65;
  D T66;
  D T67;
  _KLsimple_object_vectorGVKd_1 T68 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T69 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T70_0;
  D T70_1;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  _KLsimple_object_vectorGVKd_1 T76 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T77 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T78_0;
  D T78_1;
  _KLsimple_object_vectorGVKd_1 T79 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T80_0;
  D T80_1;
  D T81_0;
  D T81_1;
  D T82_0;
  D T82_1;
  DWORD T83;
  D T84;
  D T85;
  D T86;
  DWORD T87;
  D T88;
  DWORD iF89T, iF89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94;
  D T95;
  _KLsimple_object_vectorGVKd_4 T96 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T97;
  D T98_0;
  D T99;
  D T100_0;
  D T101_0;
  D T102_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:17
  T42 = primitive_copy_vector(all_keys_);
  T40 = primitive_next_methods_parameter();
  T41 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF41, 3, T42, T40, class_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
  T45 = primitive_instanceQ(required_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
    T46 = primitive_not(number_required_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
    if (number_required_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      T10 = KEEVKdI(number_required_, required_);
      T11 = T10;
    } else {
      T11 = T46;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      T49.vector_element_[0] = &K32;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      T47 = KlistVKdI(&T49);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      T50.vector_element_[0] = &KJformat_string_;
      T50.vector_element_[1] = &K33;
      T50.vector_element_[2] = &KJformat_arguments_;
      T50.vector_element_[3] = T47;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T48 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T50);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
      KerrorVKdMM0I(T48, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:27
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:29
    T51_0 = required_;
    T51_1 = Dsignature_LobjectG_typesVKi;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:29
    T62_0 = T51_0;
    T62_1 = T51_1;
    T16_0 = T62_0;
    T16_1 = T62_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
    T52 = primitive_instanceQ(required_,&KLsequenceGVKd);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
    if (T52 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:31
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T12 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, required_);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:31
      vF13 = T12;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:32
      T53 = SLOT_VALUE_INITD(vF13, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:33
      if (number_required_ != &KPfalseVKi) {
        T43 = number_required_;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T54 = CONGRUENT_CALL2(T53, T43);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
        if (T54 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
          T57.vector_element_[0] = &K34;
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
          T55 = KlistVKdI(&T57);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
          T58.vector_element_[0] = &KJformat_string_;
          T58.vector_element_[1] = &K33;
          T58.vector_element_[2] = &KJformat_arguments_;
          T58.vector_element_[3] = T55;
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T56 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T58);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
          KerrorVKdMM0I(T56, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:34
        T14 = number_required_;
      } else {
        T14 = T53;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:33
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:33
      T59_0 = T14;
      T59_1 = vF13;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:33
      T63_0 = T59_0;
      T63_1 = T59_1;
      T15_0 = T63_0;
      T15_1 = T63_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
      T60.vector_element_[0] = required_;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
      T61_0 = KerrorVKdMM1I(&K35, &T60);
      T61_1 = MV_GET_ELT(1);
      T15_0 = T61_0;
      T15_1 = T61_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
    T16_0 = T15_0;
    T16_1 = T15_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:24
  number_requiredF17 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:24
  requiredF18 = T16_1;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
  T64 = primitive_instanceQ(vals_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
  if (T64 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
    T65 = primitive_not(number_values_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
    if (number_values_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      T19 = KEEVKdI(number_values_, vals_);
      T20 = T19;
    } else {
      T20 = T65;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      T68.vector_element_[0] = &K36;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      T66 = KlistVKdI(&T68);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      T69.vector_element_[0] = &KJformat_string_;
      T69.vector_element_[1] = &K33;
      T69.vector_element_[2] = &KJformat_arguments_;
      T69.vector_element_[3] = T66;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T67 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T69);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
      KerrorVKdMM0I(T67, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:46
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:48
    T70_0 = vals_;
    T70_1 = Dsignature_LobjectG_typesVKi;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:48
    T81_0 = T70_0;
    T81_1 = T70_1;
    T25_0 = T81_0;
    T25_1 = T81_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
    T71 = primitive_instanceQ(vals_,&KLsequenceGVKd);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
    if (T71 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:50
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T21 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, vals_);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:50
      vF22 = T21;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:51
      T72 = SLOT_VALUE_INITD(vF22, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:52
      if (number_values_ != &KPfalseVKi) {
        T44 = number_values_;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T73 = CONGRUENT_CALL2(T72, T44);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
        if (T73 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
          T76.vector_element_[0] = &K37;
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
          T74 = KlistVKdI(&T76);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
          T77.vector_element_[0] = &KJformat_string_;
          T77.vector_element_[1] = &K33;
          T77.vector_element_[2] = &KJformat_arguments_;
          T77.vector_element_[3] = T74;
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T75 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T77);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
          KerrorVKdMM0I(T75, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:53
        T23 = number_values_;
      } else {
        T23 = T72;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:52
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:52
      T78_0 = T23;
      T78_1 = vF22;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:52
      T82_0 = T78_0;
      T82_1 = T78_1;
      T24_0 = T82_0;
      T24_1 = T82_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
      T79.vector_element_[0] = vals_;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
      T80_0 = KerrorVKdMM1I(&K35, &T79);
      T80_1 = MV_GET_ELT(1);
      T24_0 = T80_0;
      T24_1 = T80_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
    T25_0 = T24_0;
    T25_1 = T24_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:44
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:43
  number_valuesF26 = T25_0;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:43
  valsF27 = T25_1;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:67
  iF89T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:67
    iF89 = iF89T;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
    T83 = primitive_cast_integer_as_raw(number_valuesF26);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
    T84 = primitive_machine_word_less_thanQ(iF89,T83);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
    if (T84 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:66
      T85 = REPEATED_D_SLOT_VALUE_TAGGED(valsF27, 1, iF89);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:66
      T86 = primitive_idQ(T85,&KLobjectGVKd);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
      if (T86 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:67
        T87 = primitive_machine_word_add_signal_overflow(iF89,4);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:67
        iF89T = T87;
        goto L0;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:70
        T90 = T88;
        T91 = T90;
      } else {
        T91 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
      T92 = T91;
    } else {
      T92 = &KPtrueVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:64
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:73
  T93 = primitive_idQ(rest_value_,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:75
  T94 = primitive_not(rest_value_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:75
  if (rest_value_ != &KPfalseVKi) {
    default_rest_valueQ_ = T93;
  } else {
    default_rest_valueQ_ = T94;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:75
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:76
  if (all_keysQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:76
    T95 = primitive_not(keyQ_);
    T29 = T95;
  } else {
    T29 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:76
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:77
    T96.vector_element_[0] = &KJformat_string_;
    T96.vector_element_[1] = &K38;
    T96.vector_element_[2] = &KJformat_arguments_;
    T96.vector_element_[3] = &KPempty_vectorVKi;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:77
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T30 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T96);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:77
    KerrorVKdMM0I(T30, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  if (keyQ_ != &KPfalseVKi) {
    T31 = &KPfalseVKi;
  } else {
    T31 = T92;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  if (T31 != &KPfalseVKi) {
    T32 = default_rest_valueQ_;
  } else {
    T32 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:85
    T97 = primitive_as_boolean(rest_value_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:83
    T98_0 = APPLYN(T41, 12), &KLsignatureGVKe, IKJdefault_valuesQ_, T92, &KJrest_valueQ_, T97, &KJrequired_, requiredF18, &KJnumber_required_, number_requiredF17, &KJnumber_values_, number_valuesF26, T42));
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:83
    T101_0 = T98_0;
    T39_0 = T101_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:92
    if (keyQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:93
      if (T92 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:94
        if (default_rest_valueQ_ != &KPfalseVKi) {
          T33 = &KLkeyword_signatureGVKe;
        } else {
          T33 = &KLkeyword_signatureArest_valueGVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:94
        T35 = T33;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:100
        if (default_rest_valueQ_ != &KPfalseVKi) {
          T34 = &KLkeyword_signatureAvaluesGVKi;
        } else {
          T34 = &KLkeyword_signatureAvaluesArest_valueGVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:100
        T35 = T34;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:93
      T38 = T35;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:107
      if (T92 != &KPfalseVKi) {
        T37 = &KLsignatureArest_valueGVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:110
        if (default_rest_valueQ_ != &KPfalseVKi) {
          T36 = &KLsignatureAvaluesGVKi;
        } else {
          T36 = &KLsignatureAvaluesArest_valueGVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:110
        T37 = T36;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:107
      T38 = T37;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:92
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:121
    T99 = primitive_as_boolean(rest_value_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:91
    T100_0 = APPLYN(&KmakeVKd, 16), T38, IKJdefault_valuesQ_, T92, &KJvalues_, valsF27, &KJnumber_values_, number_valuesF26, &KJrest_value_, rest_value_, &KJrest_valueQ_, T99, &KJrequired_, requiredF18, &KJnumber_required_, number_requiredF17, T42));
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:91
    T102_0 = T100_0;
    T39_0 = T102_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:17
  MV_SET_COUNT(1);
  return(T39_0);
}

static D Kanonymous_of_makeF41I (D Unext_method_argsU_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  CAPTURE_ENVIRONMENT

  T6 = primitive_idQ(CREF(1),&KPempty_listVKi);
  if (T6 != &KPfalseVKi) {
    T14 = KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
    T5 = T14;
  } else {
    T7 = SLOT_VALUE_INITD(Unext_method_argsU_, 0);
    T8 = primitive_cast_integer_as_raw(T7);
    T9 = primitive_machine_word_equalQ(T8,1);
    if (T9 != &KPfalseVKi) {
      T10 = SLOT_VALUE_INITD(CREF(1), 0);
      T11 = SLOT_VALUE_INITD(CREF(1), 1);
      MEP_CALL_PROLOG(T10, T11, 2);
      T2 = MEP_CALL2(T10, CREF(2), CREF(0));
      T4 = T2;
    } else {
      T12 = SLOT_VALUE_INITD(CREF(1), 0);
      T13 = SLOT_VALUE_INITD(CREF(1), 1);
      T3 = MEP_APPLY1(T12, T13, Unext_method_argsU_);
      T4 = T3;
    }
    T5 = T4;
  }
  return(T5);
}

D Ksignature_nextQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(22,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(22,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_sealed_domainQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(24,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(24,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_default_valuesQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(23,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(23,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D KcongruentQVKiMM0I (D gsig_, D msig_) {
  volatile D returnPexit_21_;
  volatile D T4;
  volatile D T5;
  volatile DWORD iF6T, iF6;
  volatile D T7;
  volatile D gsigF8;
  volatile D msigF9;
  volatile DWORD T10T, T10;
  volatile D T11;
  volatile D gvals_;
  volatile D T13;
  volatile D mvals_;
  volatile D T15;
  volatile D T16;
  volatile D grestv_;
  volatile DWORD iF18T, iF18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile DWORD iF23T, iF23;
  volatile D T24;
  volatile D T25_0;
  volatile D T25_1;
  volatile D T26_0;
  volatile D T26_1;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile DWORD T30;
  volatile DWORD T31;
  volatile DWORD T32;
  volatile D T33;
  volatile D T34;
  volatile DWORD T35;
  volatile DWORD T36;
  volatile DWORD T37;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile DWORD T43;
  volatile D T44;
  volatile DWORD T45;
  volatile D T46;
  volatile D T47;
  volatile DWORD T48;
  volatile D T49;
  volatile D T50;
  volatile D T51;
  volatile D T52;
  volatile DWORD T53;
  volatile D T54;
  volatile D T55;
  volatile D T56;
  volatile DWORD T57;
  volatile D T58;
  volatile DWORD T59;
  volatile D T60;
  volatile D T61;
  volatile DWORD T62;
  volatile D T63;
  volatile D T64;
  volatile DWORD T65;
  volatile D T66;
  volatile D T67;
  volatile DWORD T68;
  volatile D T69;
  volatile D T70;
  volatile DWORD T71;
  volatile D T72;
  volatile D T73;
  volatile DWORD T74;
  volatile D T75;
  volatile D T76;
  volatile DWORD T77;
  volatile DWORD T78;
  volatile DWORD T79;
  volatile DWORD T80;
  volatile D T81;
  volatile D T82;
  volatile DWORD T83;
  volatile DWORD T84;
  volatile DWORD T85;
  volatile DWORD T86;
  volatile D T87;
  volatile D T88;
  volatile D T89;
  volatile D T90;
  volatile DWORD T91;
  volatile D T92;
  volatile D T93;
  volatile D T94;
  volatile D T95;
  volatile D T96;
  volatile DWORD T97;
  volatile D T98;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:236
  ENTER_EXIT_FRAME(returnPexit_21_);
  if (nlx_setjmp(FRAME_DEST(returnPexit_21_))) {
    T25_0 = FRAME_RETVAL(returnPexit_21_);
    T25_1 = MV_GET_ELT(1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:237
    T5 = MAKE_CLOSURE_INITD(&KfailF71, 1, returnPexit_21_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:248
    T27 = SLOT_VALUE_INITD(gsig_, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:249
    T28 = SLOT_VALUE_INITD(msig_, 1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:250
    T29 = SLOT_VALUE_INITD(gsig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:250
    T30 = primitive_cast_integer_as_raw(T29);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:250
    T31 = primitive_machine_word_logand(T30,1020);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:250
    T32 = primitive_machine_word_logior(T31,1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:250
    T33 = primitive_cast_raw_as_integer(T32);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:251
    T34 = SLOT_VALUE_INITD(msig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:251
    T35 = primitive_cast_integer_as_raw(T34);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:251
    T36 = primitive_machine_word_logand(T35,1020);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:251
    T37 = primitive_machine_word_logior(T36,1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:251
    T38 = primitive_cast_raw_as_integer(T37);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:252
    T39 = primitive_idQ(T33,T38);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:252
    if (T39 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:253
      get_teb()->function = T5;
      KfailF71I(Drequired_argument_countVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:252
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
    iF6T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
      iF6 = iF6T;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
      T40 = primitive_machine_word_less_thanQ(iF6,T32);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:256
        T41 = REPEATED_D_SLOT_VALUE_TAGGED(T28, 1, iF6);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:256
        T42 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, iF6);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:256
        T7 = Klazy_subtypeQVKiMM0I(T41, T42);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:256
        if (T7 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:257
          get_teb()->function = T5;
          KfailF71I(Drequired_argument_typeVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:256
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
        T43 = primitive_machine_word_add_signal_overflow(iF6,4);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
        iF6T = T43;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:255
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:276
    T44 = SLOT_VALUE_INITD(gsig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:276
    T45 = primitive_cast_integer_as_raw(T44);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:276
    T46 = primitive_machine_word_logbitQ(18,T45);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      T47 = SLOT_VALUE_INITD(msig_, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      T48 = primitive_cast_integer_as_raw(T47);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      T49 = primitive_machine_word_logbitQ(18,T48);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      if (T49 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:278
        get_teb()->function = T5;
        KfailF71I(Dnot_both_keywordVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:277
      gsigF8 = gsig_;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:281
      msigF9 = msig_;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:282
      T50 = SLOT_VALUE_INITD(msigF9, 2);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
      T51 = SLOT_VALUE_INITD(gsigF8, 2);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
      T52 = SLOT_VALUE_INITD(T51, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
      T53 = primitive_cast_integer_as_raw(T52);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
      T10T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
        T10 = T10T;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
        T54 = primitive_machine_word_equalQ(T10,T53);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
        if (T54 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
          T55 = REPEATED_D_SLOT_VALUE_TAGGED(T51, 1, T10);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:284
          T56 = KmemberQVKdMM2I(T55, T50, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:284
          if (T56 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/signature.dylan:285
            get_teb()->function = T5;
            KfailF71I(Dmandatory_keywordVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:284
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
          T57 = primitive_machine_word_add_signal_overflow(T10,4);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
          T10T = T57;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:283
    } else {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:289
      T58 = SLOT_VALUE_INITD(msig_, 0);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:289
      T59 = primitive_cast_integer_as_raw(T58);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:289
      T60 = primitive_machine_word_logbitQ(18,T59);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
      if (T60 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:290
        get_teb()->function = T5;
        KfailF71I(Dnot_both_keywordVKi);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:294
        T61 = SLOT_VALUE_INITD(gsig_, 0);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:294
        T62 = primitive_cast_integer_as_raw(T61);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:294
        T63 = primitive_machine_word_logbitQ(20,T62);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
        if (T63 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:295
          T64 = SLOT_VALUE_INITD(msig_, 0);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:295
          T65 = primitive_cast_integer_as_raw(T64);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:295
          T66 = primitive_machine_word_logbitQ(20,T65);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:295
          if (T66 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/signature.dylan:296
            get_teb()->function = T5;
            KfailF71I(Dnot_both_variableVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:295
        } else {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:299
          T67 = SLOT_VALUE_INITD(msig_, 0);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:299
          T68 = primitive_cast_integer_as_raw(T67);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:299
          T69 = primitive_machine_word_logbitQ(20,T68);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
          if (T69 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/signature.dylan:300
            get_teb()->function = T5;
            KfailF71I(Dnot_both_variableVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:274
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:308
    T70 = SLOT_VALUE_INITD(gsig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:308
    T71 = primitive_cast_integer_as_raw(T70);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:308
    T72 = primitive_machine_word_logbitQ(21,T71);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:309
    T73 = SLOT_VALUE_INITD(msig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:309
    T74 = primitive_cast_integer_as_raw(T73);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:309
    T75 = primitive_machine_word_logbitQ(21,T74);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:310
    CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
    T11 = CONGRUENT_CALL1(gsig_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:310
    gvals_ = T11;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:311
    CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
    T13 = CONGRUENT_CALL1(msig_);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:311
    mvals_ = T13;
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T76 = SLOT_VALUE_INITD(gsig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T77 = primitive_cast_integer_as_raw(T76);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T78 = primitive_machine_word_bit_field_extract(8,10,T77);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T79 = primitive_machine_word_logand(T78,-4);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T80 = primitive_machine_word_logior(T79,1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:312
    T81 = primitive_cast_raw_as_integer(T80);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T82 = SLOT_VALUE_INITD(msig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T83 = primitive_cast_integer_as_raw(T82);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T84 = primitive_machine_word_bit_field_extract(8,10,T83);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T85 = primitive_machine_word_logand(T84,-4);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T86 = primitive_machine_word_logior(T85,1);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:313
    T87 = primitive_cast_raw_as_integer(T86);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:314
    if (T72 != &KPfalseVKi) {
      T15 = &KPfalseVKi;
    } else {
      T15 = T75;
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:314
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:314
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:314
      get_teb()->function = T5;
      KfailF71I(Dgeneric_values_not_variableVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:314
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:315
    T88 = primitive_machine_word_less_thanQ(T86,T80);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:315
    if (T88 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:315
      get_teb()->function = T5;
      KfailF71I(Drequired_values_count_too_smallVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:315
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:316
    if (T72 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:317
      CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
      T16 = CONGRUENT_CALL1(gsig_);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:317
      grestv_ = T16;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
      iF18T = T80;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
        iF18 = iF18T;
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
        T89 = primitive_machine_word_less_thanQ(iF18,T86);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
        if (T89 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:319
          T90 = REPEATED_D_SLOT_VALUE_TAGGED(mvals_, 1, iF18);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:319
          T19 = Klazy_subtypeQVKiMM0I(T90, grestv_);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:319
          if (T19 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/signature.dylan:320
            get_teb()->function = T5;
            KfailF71I(Drequired_values_typeVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:319
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
          T91 = primitive_machine_word_add_signal_overflow(iF18,4);
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
          iF18T = T91;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:318
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
      if (T75 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
        CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
        T20 = CONGRUENT_CALL1(msig_);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
        T21 = Klazy_subtypeQVKiMM0I(T20, grestv_);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
        T92 = primitive_not(T21);
        T22 = T92;
      } else {
        T22 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:324
        get_teb()->function = T5;
        KfailF71I(Drest_values_typeVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:323
    } else {
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:326
      T93 = primitive_idQ(T87,T81);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:316
      if (T93 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:327
        get_teb()->function = T5;
        KfailF71I(Drequired_values_countVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:316
    }
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:316
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
    iF23T = 1;
  L3: ;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
      iF23 = iF23T;
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
      T94 = primitive_machine_word_less_thanQ(iF23,T80);
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
      if (T94 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:330
        T95 = REPEATED_D_SLOT_VALUE_TAGGED(mvals_, 1, iF23);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:330
        T96 = REPEATED_D_SLOT_VALUE_TAGGED(gvals_, 1, iF23);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:330
        T24 = Klazy_subtypeQVKiMM0I(T95, T96);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:330
        if (T24 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/signature.dylan:331
          get_teb()->function = T5;
          KfailF71I(Drequired_values_typeVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:330
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
        T97 = primitive_machine_word_add_signal_overflow(iF23,4);
        // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
        iF23T = T97;
        goto L3;
      }
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
      // /opt/opendylan-2013.1/sources/dylan/signature.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:335
    T98 = &KPtrueVKi;
    MV_SET_ELT(0, &KPtrueVKi);
    MV_SET_ELT(1, IKJcongruent_);
    MV_SET_COUNT(2);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:236
  T25_0 = T98;
  T25_1 = MV_GET_ELT(1);
    /* invalidate returnPexit_21_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:236
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:233
  T26_0 = T25_0;
  T26_1 = T25_1;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:233
  MV_SET_ELT(1, T26_1);
  MV_SET_COUNT(2);
  return(T26_0);
}

static D KfailF71I (D reason_) {
  _KLsimple_object_vectorGVKd_2 T1 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:237
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:238
  T1.vector_element_[0] = &KPfalseVKi;
  T1.vector_element_[1] = reason_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:236
  T2 = MV_SET_REST_AT(&T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:236
  T3 = NLX(CREF(0), T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:237
  return(T3);
}

D Ksignature_completeQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(25,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(25,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_number_required_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T6 = primitive_cast_integer_as_raw(z_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T8 = primitive_machine_word_bit_field_deposit(T5,2,8,T7);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_number_values_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T6 = primitive_cast_integer_as_raw(z_);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T8 = primitive_machine_word_bit_field_deposit(T5,10,8,T7);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_keyQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(18,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(18,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_all_keysQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(19,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(19,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_restQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(20,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(20,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_rest_valueQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T6 = primitive_machine_word_logbit_set(21,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
    T7 = primitive_machine_word_logbit_clear(21,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksignature_number_requiredVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logand(T3,1020);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T7_0);
}

D Ksignature_number_valuesVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_bit_field_extract(8,10,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5 = primitive_machine_word_logand(T4,-4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T8_0);
}

D Ksignature_keyQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(18,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_all_keysQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(19,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_restQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(20,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_rest_valueQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(21,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_sealed_domainQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(24,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_completeQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T4 = primitive_machine_word_logbitQ(25,T3);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:165
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksignature_optionalsQVKeMM0I (D sig_) {
  D T2_0;
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
  T4 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
  T6 = primitive_machine_word_logbitQ(18,T5);
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
    T2_0 = T6;
    T3_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
    T7 = SLOT_VALUE_INITD(sig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
    T8 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
    T9 = primitive_machine_word_logbitQ(20,T8);
    // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
    T10_0 = T9;
    T3_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:190
  // /opt/opendylan-2013.1/sources/dylan/signature.dylan:188
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_signature_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdefault_valuesQ_);
    if (T0 != &KJdefault_valuesQ_) {
      primitive_repeated_slot_value_setter(T0, &K100, 1, 7);
      primitive_repeated_slot_value_setter(T0, &K97, 1, 14);
      primitive_repeated_slot_value_setter(T0, &K56, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K53, 1, 6);
      IKJdefault_valuesQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsealed_domainQ_);
    if (T0 != &KJsealed_domainQ_) {
      primitive_repeated_slot_value_setter(T0, &K100, 1, 8);
      primitive_repeated_slot_value_setter(T0, &K97, 1, 16);
      primitive_repeated_slot_value_setter(T0, &K56, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K53, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcongruent_);
    if (T0 != &KJcongruent_) {
      IKJcongruent_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcompleteQ_);
    if (T0 != &KJcompleteQ_) {
      primitive_repeated_slot_value_setter(T0, &K100, 1, 9);
      primitive_repeated_slot_value_setter(T0, &K97, 1, 18);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_signature_for_user () {
  return;
}


/* eof */
