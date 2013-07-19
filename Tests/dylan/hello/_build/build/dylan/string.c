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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(0);

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
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_string_typeGVKe;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;


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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_10;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe Kreplace_subsequenceXVKd;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_16;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLlimited_string_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_string_typeGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kconcrete_limited_string_classVKiMM1;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_5;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_4;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_characterG_typesVKi;
extern _KLsealed_generic_functionGVKe Kstring_element_setterVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_7;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_3;
extern _KLsymbolGVKd KJdefault_;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_10;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_3;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D Kas_uppercaseVKdMM0I (D);
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_6;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_7;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kcase_insensitive_equalVKeMM1;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern D Dlowercase_asciiVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM9;
D Ksystem_allocate_repeated_instanceVKeMM9I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe KLVKdMM14;
D KLVKdMM14I (D, D);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KEVKdMM27;
D KEVKdMM27I (D, D);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kas_uppercaseXVKdMM0;
D Kas_uppercaseXVKdMM0I (D);
extern _KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kas_lowercaseXVKdMM0;
D Kas_lowercaseXVKdMM0I (D);
extern _KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KemptyQVKdMM8;
D KemptyQVKdMM8I (D string_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_13;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM13;
D Ktype_for_copyVKdMM13I (D object_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_7;
D KmakeVKdMM33I (D, D, D, D);
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM2;
D Kas_lowercaseVKdMM2I (D);
extern _KLsimple_methodGVKe Kas_uppercaseVKdMM1;
D Kas_uppercaseVKdMM1I (D);
extern _KLsimple_methodGVKe Kelement_typeVKeMM18;
D Kelement_typeVKeMM18I (D t_);
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_4;
extern _KLkeyword_methodGVKe KelementVKdMM23;
D KelementVKdMM23I (D string_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_11;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM21;
D Kelement_no_bounds_checkVKeMM21I (D string_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM19;
D Kforward_iteration_protocolVKdMM19I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM14;
D Kbackward_iteration_protocolVKdMM14I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kelement_setterVKdMM2;
D Kelement_setterVKdMM2I (D new_value_, D string_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM23;
D Kelement_setterVKdMM23I (D new_value_, D string_, D index_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM1;
D Kelement_no_bounds_check_setterVKeMM1I (D new_value_, D string_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM23;
D Kelement_no_bounds_check_setterVKeMM23I (D new_value_, D string_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_4;
extern _KLsimple_methodGVKe KemptyVKeMM8;
D KemptyVKeMM8I (D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_12;
D Klimited_stringVKiMM0I (D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM32;
D KmakeVKdMM32I (D class_, D Urest_, D size_, D fill_);
extern _KLkeyword_methodGVKe KmakeVKdMM33;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_17;
extern _KLsimple_methodGVKe KasVKdMM1;
D KasVKdMM1I (D, D);
extern _KLsimple_methodGVKe KasVKdMM56;
D KasVKdMM56I (D class_, D string_);
extern _KLsimple_methodGVKe KasVKdMM57;
D KasVKdMM57I (D, D);
extern _KLsimple_methodGVKe KasVKdMM58;
D KasVKdMM58I (D class_, D string_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_11;
static _KLsignatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_2 K76;
static _KLsingletonGVKd K77;
static _KLsignatureAvaluesGVKi K78;
static _KLsimple_object_vectorGVKd_2 K79;
static _KLsingletonGVKd K80;
static _KLsignatureAvaluesGVKi K81;
static _KLsimple_object_vectorGVKd_2 K82;
static _KLsignatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLkeyword_signatureAvaluesGVKi K85;
static _KLsimple_object_vectorGVKd_4 K86;
static _KLsimple_object_vectorGVKd_1 K87;
static _KLsimple_object_vectorGVKd_2 K88;
static _KLsimple_object_vectorGVKd_2 K89;
static _KLkeyword_signatureAvaluesGVKi K90;
static _KLsimple_object_vectorGVKd_4 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLsimple_object_vectorGVKd_2 K93;
extern _KLsealed_generic_functionGVKe Kconcrete_limited_string_classVKi;
static _KLsymbolGVKd KJconcrete_class_;
extern _KLunionGVKe KLstring_typeGVKi;
static _KLsubclassGVKe K97;
static _KLbyte_stringGVKd_14 K98;
extern _KLsimple_methodGVKe Kconcrete_limited_string_classVKiMM0;
D Kconcrete_limited_string_classVKiMM0I (D of_);
static _KLpairGVKd K101;
static _KLpairGVKd K102;
static _KLbyte_stringGVKd_29 K103;
static _KLsignatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_1 K105;
static _KLsingletonGVKd K106;
static _KLsignatureAvaluesGVKi K107;
static _KLsignatureAvaluesGVKi K108;
static _KLsimple_object_vectorGVKd_3 K109;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K110;
static _KLsignatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_3 K112;
extern _KLsimple_methodGVKe Kbyte_string_current_elementVKi;
D Kbyte_string_current_elementVKiI (D string_, D state_);
extern _KLsimple_methodGVKe Kbyte_string_current_element_setterVKi;
D Kbyte_string_current_element_setterVKiI (D new_value_, D string_, D state_);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117;
static _KLsignatureGVKe K118;
static _KLsignatureGVKe K119;
static _KLsimple_object_vectorGVKd_2 K120;
static _KLsignatureAvaluesGVKi K121;
static _KLsimple_object_vectorGVKd_8 K122;
static _KLkeyword_signatureAvaluesGVKi K123;
static _KLsimple_object_vectorGVKd_2 K124;
static _KLsimple_object_vectorGVKd_1 K125;
static _KLsimple_object_vectorGVKd_2 K126;
static _KLsignatureAvaluesGVKi K127;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K128;
static _KLsignatureAvaluesGVKi K129;
static _KLsignatureAvaluesGVKi K130;
static _KLsignatureAvaluesGVKi K131;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K132;
static _KLsignatureAvaluesGVKi K133;
static _KLsignatureAvaluesGVKi K134;
static _KLsimple_object_vectorGVKd_5 K135;
extern _KLsealed_generic_functionGVKe Kcase_insensitive_equalVKe;
extern _KLsimple_methodGVKe Kcase_insensitive_equalVKeMM0;
D Kcase_insensitive_equalVKeMM0I (D, D);
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLbyte_stringGVKd_22 K141;

/* Indirection variables */

static D IKJconcrete_class_ = &KJconcrete_class_;

/* Variables */

D case_insensitive_equalVKe = &Kcase_insensitive_equalVKe;
D concrete_limited_string_classVKi = &Kconcrete_limited_string_classVKi;
D byte_string_current_elementVKi = &Kbyte_string_current_elementVKi;
D byte_string_current_element_setterVKi = &Kbyte_string_current_element_setterVKi;

/* Objects */

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K134,
  &Ksystem_allocate_repeated_instanceVKeMM9I
};

_KLsimple_methodGVKe KLVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &KLVKdMM14I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_0,
  &KLVKdMM14
};

_KLsimple_methodGVKe KEVKdMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &KEVKdMM27I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_4,
  &KEVKdMM27
};

_KLsimple_methodGVKe Kas_uppercaseXVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K129,
  &Kas_uppercaseXVKdMM0I
};

_KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_uppercaseXVKdRD_dylanRD_0,
  &Kas_uppercaseXVKdMM0
};

_KLsimple_methodGVKe Kas_lowercaseXVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K129,
  &Kas_lowercaseXVKdMM0I
};

_KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_lowercaseXVKdRD_dylanRD_0,
  &Kas_lowercaseXVKdMM0
};

_KLsimple_methodGVKe KemptyQVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K131,
  &KemptyQVKdMM8I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_7,
  &KemptyQVKdMM8
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_12,
  (D) 5,
  &KLbyte_stringGVKd
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K130,
  &Ktype_for_copyVKdMM13I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_6,
  &Ktype_for_copyVKdMM13
};

_KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_lowercaseVKdRD_dylanRD_0,
  &Kas_lowercaseVKdMM2
};

_KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_uppercaseVKdRD_dylanRD_0,
  &Kas_uppercaseVKdMM1
};

_KLsimple_methodGVKe Kas_lowercaseVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K129,
  &Kas_lowercaseVKdMM2I
};

_KLsimple_methodGVKe Kas_uppercaseVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K129,
  &Kas_uppercaseVKdMM1I
};

_KLsimple_methodGVKe Kelement_typeVKeMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K127,
  &Kelement_typeVKeMM18I
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_3,
  &Kelement_typeVKeMM18
};

_KLkeyword_methodGVKe KelementVKdMM23 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K123,
  &key_mep_4,
  &KelementVKdMM23I,
  &K126
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_10,
  &KelementVKdMM23
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM21 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K123,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM21I,
  &K124
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_3,
  &Kelement_no_bounds_checkVKeMM21
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_7,
  &Kforward_iteration_protocolVKdMM19
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K121,
  &Kforward_iteration_protocolVKdMM19I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K121,
  &Kbackward_iteration_protocolVKdMM14I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_0,
  &Kbackward_iteration_protocolVKdMM14
};

_KLsimple_methodGVKe Kelement_setterVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K111,
  &Kelement_setterVKdMM2I
};

_KLsimple_methodGVKe Kelement_setterVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K108,
  &Kelement_setterVKdMM23I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_7,
  &Kelement_setterVKdMM2
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_8,
  &Kelement_setterVKdMM23
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K111,
  &Kelement_no_bounds_check_setterVKeMM1I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K108,
  &Kelement_no_bounds_check_setterVKeMM23I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_4,
  &Kelement_no_bounds_check_setterVKeMM1
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_5,
  &Kelement_no_bounds_check_setterVKeMM23
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_3,
  &KemptyVKeMM8
};

_KLsimple_methodGVKe KemptyVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K107,
  &KemptyVKeMM8I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_5,
  (D) 5,
  &KLbyte_stringGVKd
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_17,
  &KmakeVKdMM32
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_11,
  &KasVKdMM56
};

_KLkeyword_methodGVKe KmakeVKdMM32 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K90,
  &key_mep_4,
  &KmakeVKdMM32I,
  &K91
};

_KLkeyword_methodGVKe KmakeVKdMM33 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K85,
  &key_mep_4,
  &KmakeVKdMM33I,
  &K86
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_16,
  (D) 5,
  &K77
};

_KLsimple_methodGVKe KasVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K83,
  &KasVKdMM1I
};

_KLsimple_methodGVKe KasVKdMM56 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K81,
  &KasVKdMM56I
};

_KLsimple_methodGVKe KasVKdMM57 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K78,
  &KasVKdMM57I
};

_KLsimple_methodGVKe KasVKdMM58 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K75,
  &KasVKdMM58I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_10,
  &KasVKdMM58
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K76,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K77,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K77 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLsignatureAvaluesGVKi K78 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K79,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K80,
  &KLcollectionGVKd
};

static _KLsingletonGVKd K80 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstringGVKd
};

static _KLsignatureAvaluesGVKi K81 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K82,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K80,
  &KLstringGVKd
};

static _KLsignatureAvaluesGVKi K83 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K84,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K77,
  &KLcollectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K85 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K87,
  &K88,
  &K89,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  C(' '),
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K77
};

static _KLsimple_object_vectorGVKd_2 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_2 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_characterGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K90 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K92,
  &K93,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  (D) 1,
  &KJfill_,
  C(' ')
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K80
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJfill_
};

_KLsealed_generic_functionGVKe Kconcrete_limited_string_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K103,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K98
};

_KLunionGVKe KLstring_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K97,
  &KLlimited_string_typeGVKe
};

static _KLsubclassGVKe K97 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLstringGVKd
};

static _KLbyte_stringGVKd_14 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

_KLsimple_methodGVKe Kconcrete_limited_string_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kconcrete_limited_string_classVKiMM0I
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_string_classVKiMM0,
  &K102
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_string_classVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_29 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "concrete-limited-string-class"
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K105,
  &K87
};

static _KLsimple_object_vectorGVKd_1 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K106
};

static _KLsingletonGVKd K106 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLsignatureAvaluesGVKi K107 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K87,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsignatureAvaluesGVKi K108 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K109,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_characterGVKe,
  &KLbyte_stringGVKd,
  &KLintegerGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K110 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K112,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLcharacterGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kbyte_string_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K119,
  &Kbyte_string_current_elementVKiI
};

_KLsimple_methodGVKe Kbyte_string_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K118,
  &Kbyte_string_current_element_setterVKiI
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureGVKe K118 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K112
};

static _KLsignatureGVKe K119 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K120
};

static _KLsimple_object_vectorGVKd_2 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_stringGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K121 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K122
};

static _KLsimple_object_vectorGVKd_8 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K123 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K120,
  &K125,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K127 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K128 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K129 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsignatureAvaluesGVKi K130 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K131 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K132 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K133 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K134 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K135,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_5 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &K77,
  &K106,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLbyte_characterGVKe
};

_KLsealed_generic_functionGVKe Kcase_insensitive_equalVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K141,
  &K139,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kcase_insensitive_equalVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &Kcase_insensitive_equalVKeMM0I
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_equalVKeMM0,
  &K140
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_equalVKeMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "case-insensitive-equal"
};

/* Code */

D Ksystem_allocate_repeated_instanceVKeMM9I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19_0;
  D T20;
  D T21_0;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:347
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T7 = SLOT_VALUE(&KLbyte_stringGVKd, 2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T10 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T14 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T16 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T17 = primitive_machine_word_add_signal_overflow(T16,4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T18 = primitive_machine_word_shift_right(T17,2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T20 = SLOT_VALUE_INITD(T7, 2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T21_0 = T20;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T19_0 = T21_0;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T22 = T19_0;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T23 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T24 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T25 = primitive_machine_word_shift_right(T16,2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T26 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T8 = primitive_byte_allocate_leaf_filled_terminated(T15,T18,T22,T24,repeated_fill_,T25,T26);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:351
  T9 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:347
  T6_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:347
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM14I (D string_1_, D string_2_) {
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  DBCHR T13;
  DBCHR T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD T20;
  D T21;
  DWORD indexF22T, indexF22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T8 = primitive_machine_word_less_thanQ(T6,T7);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T8 != &KPfalseVKi) {
    T5 = T6;
  } else {
    T5 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  indexF22T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    indexF22 = indexF22T;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T11 = primitive_machine_word_less_thanQ(indexF22,T5);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T13 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_1_, 1, indexF22);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T14 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_2_, 1, indexF22);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T15 = primitive_machine_word_shift_left_signal_overflow(T13,2);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T16 = primitive_machine_word_logior(T15,1);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T17 = primitive_machine_word_shift_left_signal_overflow(T14,2);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T18 = primitive_machine_word_logior(T17,1);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T19 = primitive_machine_word_equalQ(T16,T18);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T20 = primitive_machine_word_add_signal_overflow(indexF22,4);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        indexF22T = T20;
        goto L0;
        T9 = T21;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T23 = primitive_machine_word_shift_left_signal_overflow(T13,2);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T24 = primitive_machine_word_logior(T23,1);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T25 = primitive_machine_word_shift_left_signal_overflow(T14,2);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T26 = primitive_machine_word_logior(T25,1);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T27 = primitive_machine_word_less_thanQ(T24,T26);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T28_0 = T27;
        T9 = T28_0;
        MV_SET_COUNT(1);
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T10 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T12_0 = T8;
      T10 = T12_0;
      MV_SET_COUNT(1);
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  return(T10);
}

D KEVKdMM27I (D string_1_, D string_2_) {
  DWORD T3T, T3;
  DWORD T4T, T4;
  D eq_T, eq_;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DBCHR T17;
  D T18;
  DBCHR T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T10 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T11 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T14 = primitive_machine_word_equalQ(T12,T13);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T3T = 1;
    T4T = 1;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T3 = T3T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T4 = T4T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T15 = primitive_machine_word_equalQ(T3,T12);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T15 != &KPfalseVKi) {
        T6 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T16 = primitive_machine_word_equalQ(T4,T13);
        T6 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T17 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_1_, 1, T3);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T18 = primitive_raw_as_byte_character(T17);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T19 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_2_, 1, T4);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T20 = primitive_raw_as_byte_character(T19);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T21 = primitive_machine_word_add_signal_overflow(T3,4);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T22 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T23 = primitive_idQ(T18,T20);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T3T = T21;
          T4T = T22;
          eq_T = T23;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T7_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kas_uppercaseXVKdMM0I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  DBCHR T8;
  D T9;
  D T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T7 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T8 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T9 = primitive_raw_as_byte_character(T8);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T10 = Kas_uppercaseVKdMM0I(T9);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K132, 3);
      ENGINE_NODE_CALL3(&K132, T10, string_, T7);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kas_lowercaseXVKdMM0I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  DBCHR T7;
  DWORD T8;
  DWORD T9;
  DBCHR T10;
  D T11;
  DSINT T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T7 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T8 = primitive_machine_word_shift_left_signal_overflow(T7,2);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T9 = primitive_machine_word_logior(T8,1);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T10 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T9);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T11 = primitive_raw_as_byte_character(T10);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T12 = primitive_byte_character_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T12, string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T13 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      i_T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyQVKdMM8I (D string_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = primitive_machine_word_equalQ(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_copyVKdMM13I (D object_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2_0 = &KLbyte_stringGVKd;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T2_0);
}

D KmakeVKdMM33I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
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
  D T24_0;
  D T25;
  D T26_0;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  primitive_type_check(fill_, &KLbyte_characterGVKe);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T10_0 = KemptyVKeMM8I(class_);
    T7_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T12 = SLOT_VALUE(&KLbyte_stringGVKd, 2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T15 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T16 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T17 = primitive_machine_word_logand(T16,262140);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T18 = primitive_machine_word_logior(T17,1);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T19 = primitive_machine_word_add_signal_overflow(5,T17);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T20 = primitive_machine_word_shift_right(T19,2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T21 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T22 = primitive_machine_word_add_signal_overflow(T21,4);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T23 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T25 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T26_0 = T25;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T24_0 = T26_0;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T27 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T28 = primitive_machine_word_subtract_signal_overflow(T18,4);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T29 = primitive_machine_word_shift_right(T28,2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T30 = primitive_machine_word_shift_right(T21,2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T31 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T13 = primitive_byte_allocate_leaf_filled_terminated(T20,T23,T27,T29,fillF5,T30,T31);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T14 = T13;
    MV_SET_ELT(0, T13);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T11_0 = T14;
    T7_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kas_lowercaseVKdMM2I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  DBCHR T8;
  DWORD T9;
  DWORD T10;
  DBCHR T11;
  D T12;
  DSINT T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T8 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T9 = primitive_machine_word_shift_left_signal_overflow(T8,2);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T10 = primitive_machine_word_logior(T9,1);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T11 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T10);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T12 = primitive_raw_as_byte_character(T11);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T13 = primitive_byte_character_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T13, T5, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T14 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      i_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kas_uppercaseVKdMM1I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DBCHR T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T8 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T9 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T10 = primitive_raw_as_byte_character(T9);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T11 = Kas_uppercaseVKdMM0I(T10);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K128, 3);
      ENGINE_NODE_CALL3(&K128, T11, T5, T8);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      i_T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_typeVKeMM18I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2_0 = &KLbyte_characterGVKe;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM23I (D string_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DBCHR T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T9 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T13 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T14 = primitive_raw_as_byte_character(T13);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T5_0 = Kelement_range_errorVKeI(string_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T19 = primitive_instanceQ(default_,&KLbyte_characterGVKe);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLbyte_characterGVKe;
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM21I (D string_, D index_, D Urest_, D default_) {
  DBCHR T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6 = primitive_raw_as_byte_character(T5);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM19I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kbyte_string_current_elementVKi;
  T3_6 = &Kbyte_string_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kbackward_iteration_protocolVKdMM14I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kbyte_string_current_elementVKi;
  T6_6 = &Kbyte_string_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kelement_setterVKdMM2I (D new_value_, D string_, D index_) {
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(T4, string_, index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM23I (D new_value_, D string_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DSINT T11;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T7 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T11 = primitive_byte_character_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T11, string_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T5_0 = Kelement_range_errorVKeI(string_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM1I (D new_value_, D string_, D index_) {
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K110, 3);
  ENGINE_NODE_CALL3(&K110, T4, string_, index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM23I (D new_value_, D string_, D index_) {
  D T4_0;
  DSINT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = primitive_byte_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T5, string_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T4_0);
}

D KemptyVKeMM8I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:342
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:344
  T2_0 = &KPempty_stringVKi;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:342
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_stringVKiMM0I (D of_, D size_) {
  D concrete_class_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  _KLsimple_object_vectorGVKd_8 T8 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:318
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:321
  CONGRUENT_CALL_PROLOG(&Kconcrete_limited_string_classVKi, 1);
  concrete_class_ = CONGRUENT_CALL1(of_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:322
  if (size_ != &KPfalseVKi) {
    T7 = size_;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:323
    T8.vector_element_[0] = &KJclass_;
    T8.vector_element_[1] = &KLstringGVKd;
    T8.vector_element_[2] = &KJelement_type_;
    T8.vector_element_[3] = of_;
    T8.vector_element_[4] = IKJconcrete_class_;
    T8.vector_element_[5] = concrete_class_;
    T8.vector_element_[6] = &KJsize_;
    T8.vector_element_[7] = T7;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:323
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4_0 = CONGRUENT_CALL2(&KLlimited_string_typeGVKe, &T8);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:329
    T5_0 = concrete_class_;
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:329
    T9_0 = T5_0;
    T6_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:322
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:318
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmakeVKdMM32I (D class_, D Urest_, D size_, D fill_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:40
  T5_0 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, fill_, size_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:38
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM1I (D class_, D collection_) {
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T3);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CALL2(&Kreplace_subsequenceXVKd, T5, collection_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM56I (D class_, D string_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:25
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:23
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM57I (D class_, D collection_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:30
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLbyte_stringGVKd, collection_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:28
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:28
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM58I (D class_, D string_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kconcrete_limited_string_classVKiMM0I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2_0 = &KLbyte_stringGVKd;
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kbyte_string_current_elementVKiI (D string_, D state_) {
  DBCHR T2;
  D T3;
  D T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T2 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T3 = primitive_raw_as_byte_character(T2);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  return(T4);
}

D Kbyte_string_current_element_setterVKiI (D new_value_, D string_, D state_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLbyte_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K117, 3);
  ENGINE_NODE_CALL3(&K117, T3, string_, state_);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  return(T4);
}

D Kcase_insensitive_equalVKeMM0I (D string_1_, D string_2_) {
  DWORD T3T, T3;
  DWORD T4T, T4;
  D eq_T, eq_;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  DBCHR T18;
  D T19;
  DBCHR T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  DBCHR T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DBCHR T31;
  D T32;
  D T33;

  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T11 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T12 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  T15 = primitive_machine_word_equalQ(T13,T14);
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T3T = 1;
    T4T = 1;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T3 = T3T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T4 = T4T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T16 = primitive_machine_word_equalQ(T3,T13);
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T16 != &KPfalseVKi) {
        T6 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T17 = primitive_machine_word_equalQ(T4,T14);
        T6 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T18 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_1_, 1, T3);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T19 = primitive_raw_as_byte_character(T18);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T20 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_2_, 1, T4);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        T21 = primitive_raw_as_byte_character(T20);
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T22 = primitive_machine_word_add_signal_overflow(T3,4);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T23 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T24 = primitive_idQ(T19,T21);
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          if (T24 != &KPfalseVKi) {
            T7 = T24;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T25 = primitive_machine_word_shift_left_signal_overflow(T18,2);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T26 = primitive_machine_word_logior(T25,1);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T27 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T26);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T28 = primitive_raw_as_byte_character(T27);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T29 = primitive_machine_word_shift_left_signal_overflow(T20,2);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T30 = primitive_machine_word_logior(T29,1);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T31 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T30);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T32 = primitive_raw_as_byte_character(T31);
            // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
            T33 = primitive_idQ(T28,T32);
            T7 = T33;
          }
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
          T3T = T22;
          T4T = T23;
          eq_T = T7;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      }
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
      T8_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
    T9_0 = &KPfalseVKi;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/string.dylan:340
  MV_SET_COUNT(1);
  return(T10_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_string_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJconcrete_class_);
    if (T0 != &KJconcrete_class_) {
      IKJconcrete_class_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_string_for_user () {
  return;
}


/* eof */
