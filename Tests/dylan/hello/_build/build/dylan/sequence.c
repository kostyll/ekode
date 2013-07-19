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
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(53);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(11);

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
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
} _KLsequenceGVKd;

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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsubscript_out_of_bounds_errorGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
} _KLobject_signatureGVKe;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

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
} _KLlimited_sequence_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_mutable_sequence_typeGVKe;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;


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
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM1;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM2;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM3;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM4;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_sequenceG_typesVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLkeyword_methodGVKe KlastVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLkeyword_methodGVKe KlastVKdMM2;
extern _KLkeyword_methodGVKe KlastVKdMM3;
extern _KLkeyword_methodGVKe KlastVKdMM4;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_3;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLsubscript_out_of_bounds_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsubscript_out_of_bounds_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_methodGVKe KreverseXVKdMM1;
extern _KLsimple_methodGVKe KreverseXVKdMM2;
extern _KLsimple_methodGVKe KreverseXVKdMM3;
extern _KLsimple_methodGVKe KreverseXVKdMM4;
extern _KLsimple_methodGVKe KreverseXVKdMM5;
extern _KLsimple_methodGVKe KreverseXVKdMM6;
extern _KLsimple_methodGVKe KreverseXVKdMM7;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe KreverseVKdMM1;
extern _KLsimple_methodGVKe KreverseVKdMM2;
extern _KLsimple_methodGVKe KreverseVKdMM3;
extern _KLsimple_methodGVKe KreverseVKdMM4;
extern _KLmethod_domainGVKe KreverseVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kconcatenate_as_twoVKiMM1;
extern _KLsimple_methodGVKe Kconcatenate_as_twoVKiMM2;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM1;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM2;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM3;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM4;
extern _KLmethod_domainGVKe Kreplace_subsequenceXVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_1;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_8;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLlimited_sequence_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_sequence_typeGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLkeyword_methodGVKe KsortXVKdMM0;
extern _KLkeyword_methodGVKe KsortXVKdMM1;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_8;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJstable_;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM1;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM2;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM3;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM4;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM5;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM6;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM7;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_13;
extern _KLsimple_methodGVKe KaddVKdMM1;
extern _KLsimple_copy_down_methodGVKi KaddVKdMM2;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLsimple_methodGVKe KaddVKdMM3;
extern _KLsimple_methodGVKe KaddVKdMM4;
extern _KLsimple_methodGVKe KaddVKdMM5;
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_9;
D KlistVKdI (D objects_);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLlimited_mutable_sequence_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_sequence_typeGVKeW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLsymbolGVKd KJfrom_;
extern _KLsymbolGVKd KJbelow_;
D KrangeVKdI (D keys_, D from_, D by_, D to_, D below_, D above_, D size_);
extern _KLsymbolGVKd KJskip_;
extern _KLsymbolGVKd KJfailure_;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLsymbolGVKd KJcount_;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM1;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM2;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM3;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM4;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM5;
extern _KLkeyword_methodGVKe KremoveVKdMM6;
extern _KLkeyword_methodGVKe KremoveVKdMM7;
extern _KLkeyword_methodGVKe KremoveVKdMM8;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_13;
D KreverseXVKdMM2I (D l_);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLkeyword_methodGVKe KfirstVKdMM1;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_1;
D KelementVKdMM11I (D vector_, D index_, D Urest_, D default_);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLkeyword_methodGVKe Ksubsequence_positionVKdMM1;
extern _KLkeyword_methodGVKe Ksubsequence_positionVKdMM2;
extern _KLmethod_domainGVKe Ksubsequence_positionVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_8;
extern _KLkeyword_methodGVKe KsortVKdMM1;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_8;
extern _KLkeyword_methodGVKe Kremove_duplicatesXVKdMM1;
extern _KLmethod_domainGVKe Kremove_duplicatesXVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kremove_duplicatesVKdMM1;
extern _KLmethod_domainGVKe Kremove_duplicatesVKdRD_dylanRD_0;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLkeyword_methodGVKe KintersectionVKdMM1;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM1;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM2;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM3;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM4;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM5;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM6;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM7;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_14;
extern _KLkeyword_methodGVKe Kadd_newXVKdMM1;
extern _KLkeyword_copy_down_methodGVKi Kadd_newXVKdMM2;
extern _KLkeyword_methodGVKe Kadd_newXVKdMM3;
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_9;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLkeyword_methodGVKe Kadd_newVKdMM1;
extern _KLkeyword_copy_down_methodGVKi Kadd_newVKdMM2;
extern _KLkeyword_methodGVKe Kadd_newVKdMM3;
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_9;

/* Defined object declarations */

D Kconcatenate_asVKdMM0I (D, D, D);
extern _KLsimple_methodGVKe Kshallow_copyVKdMM3;
D Kshallow_copyVKdMM3I (D sequence_);
extern _KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM1;
D Kmaximum_sequence_keyVKiMM1I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM5;
D Kforward_iteration_protocolVKdMM5I (D sequence_);
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe Kkey_testVKdMM4;
D Kkey_testVKdMM4I (D);
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLsimple_methodGVKe KaddXVKdMM1;
D KaddXVKdMM1I (D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM0;
D KremoveXVKdMM0I (D sequence_, D value_, D Urest_, D test_, D count_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM0;
D Kbackward_iteration_protocolVKdMM0I (D sequence_);
extern _KLkeyword_methodGVKe Kfind_keyVKdMM1;
D Kfind_keyVKdMM1I (D collection_, D fn_, D Urest_, D skip_, D failure_);
extern _KLsimple_methodGVKe Kkey_sequenceVKdMM1;
D Kkey_sequenceVKdMM1I (D);
extern _KLunionGVKe KLmutable_sequence_typeGVKi;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
D Ksequence_previous_stateVKeI (D sequence_, D state_);
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
D Ksequence_finished_stateQVKeI (D sequence_, D state_, D limit_);
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
D Ksequence_current_keyVKeI (D sequence_, D state_);
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
D Kidentity_copy_stateVKeI (D collection_, D state_);
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
D Ksequence_next_stateVKeI (D sequence_, D state_);
D Kinvalid_sequence_bounds_errorVKiI (D, D, D);
D Kinvalid_sequence_end_errorVKiI (D, D);
D Kinvalid_sequence_start_errorVKiI (D, D);
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLincremental_generic_functionGVKe KaddVKd;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLincremental_generic_functionGVKe KsortXVKd;
extern _KLunionGVKe KLsequence_typeGVKi;
extern _KLincremental_generic_functionGVKe Kreplace_subsequenceXVKd;
extern _KLsealed_generic_functionGVKe Kconcatenate_as_twoVKi;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM0;
D Kcopy_sequenceVKdMM0I (D, D, D, D);
extern _KLincremental_generic_functionGVKe KlastVKd;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLsealed_generic_functionGVKe KconcatenateVKd;
extern _KLsimple_methodGVKe KconcatenateVKdMM0;
D KconcatenateVKdMM0I (D first_seq_, D rest_seqs_);
static _KLpairGVKd K51;
static _KLsignatureAvaluesGVKi K52;
static _KLbyte_stringGVKd_11 K53;
static _KLpairGVKd K54;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLsignatureAvaluesGVKi K59;
static _KLbyte_stringGVKd_14 K60;
static _KLsimple_object_vectorGVKd_2 K61;
extern _KLkeyword_methodGVKe KlastVKdMM0;
D KlastVKdMM0I (D, D, D);
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLpairGVKd K68;
static _KLkeyword_signatureGVKe K69;
static _KLbyte_stringGVKd_4 K70;
static _KLsimple_object_vectorGVKd_1 K71;
static _KLbyte_stringGVKd_53 K72;
static _KLsimple_object_vectorGVKd_2 K73;
static _KLkeyword_signatureAvaluesGVKi K74;
static _KLsimple_object_vectorGVKd_4 K75;
static _KLsimple_object_vectorGVKd_2 K76;
static _KLsimple_object_vectorGVKd_2 K77;
extern _KLsimple_methodGVKe KreverseXVKdMM0;
D KreverseXVKdMM0I (D);
static _KLpairGVKd K80;
static _KLpairGVKd K81;
static _KLpairGVKd K82;
static _KLpairGVKd K83;
static _KLpairGVKd K84;
static _KLpairGVKd K85;
static _KLpairGVKd K86;
static _KLpairGVKd K87;
static _KLsignatureAvaluesGVKi K88;
static _KLbyte_stringGVKd_8 K89;
extern _KLincremental_generic_functionGVKe KreverseVKd;
extern _KLsimple_methodGVKe KreverseVKdMM0;
D KreverseVKdMM0I (D);
static _KLpairGVKd K93;
static _KLpairGVKd K94;
static _KLpairGVKd K95;
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_7 K98;
extern _KLsimple_methodGVKe Kconcatenate_as_twoVKiMM0;
D Kconcatenate_as_twoVKiMM0I (D, D, D);
static _KLpairGVKd K101;
static _KLpairGVKd K102;
static _KLpairGVKd K103;
static _KLbyte_stringGVKd_18 K104;
static _KLsignatureAvaluesGVKi K105;
static _KLsimple_object_vectorGVKd_3 K106;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM0;
D Kreplace_subsequenceXVKdMM0I (D, D, D, D, D);
static _KLpairGVKd K109;
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLkeyword_signatureAvaluesGVKi K114;
static _KLbyte_stringGVKd_20 K115;
static _KLkeyword_signatureAvaluesGVKi K116;
static _KLsubclassGVKe K117;
static _KLpairGVKd K118;
static _KLpairGVKd K119;
static _KLkeyword_signatureAvaluesGVKi K120;
static _KLbyte_stringGVKd_5 K121;
static _KLsimple_object_vectorGVKd_2 K122;
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLpairGVKd K125;
static _KLpairGVKd K126;
static _KLpairGVKd K127;
static _KLpairGVKd K128;
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLkeyword_signatureAvaluesGVKi K131;
static _KLbyte_stringGVKd_13 K132;
extern _KLsimple_methodGVKe KaddVKdMM0;
D KaddVKdMM0I (D, D);
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLsignatureAvaluesGVKi K141;
static _KLbyte_stringGVKd_3 K142;
static _KLsimple_object_vectorGVKd_2 K143;
static _KLbyte_stringGVKd_33 K144;
static _KLbyte_stringGVKd_31 K145;
static _KLbyte_stringGVKd_41 K146;
static _KLsignatureAvaluesGVKi K147;
static _KLsimple_object_vectorGVKd_2 K148;
static _KLsignatureGVKe K149;
static _KLsignatureAvaluesGVKi K150;
static _KLsimple_object_vectorGVKd_3 K151;
static _KLsubclassGVKe K152;
static _KLkeyword_signatureGVKe K153;
static _KLsimple_object_vectorGVKd_4 K154;
static _KLsimple_object_vectorGVKd_2 K155;
static _KLsimple_object_vectorGVKd_2 K156;
extern _KLsimple_methodGVKe Ksequence_current_element_setterVKe;
D Ksequence_current_element_setterVKeI (D new_value_, D sequence_, D state_);
static _KLbyte_stringGVKd_24 K159;
static _KLsignatureAvaluesGVKi K160;
static _KLsimple_object_vectorGVKd_3 K161;
static _KLsimple_object_vectorGVKd_1 K162;
static _KLsignatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_8 K164;
static _KLunionGVKe K165;
extern _KLincremental_generic_functionGVKe KremoveVKd;
extern _KLkeyword_methodGVKe KremoveVKdMM0;
D KremoveVKdMM0I (D sequence_, D value_, D Urest_, D test_, D count_);
static _KLpairGVKd K169;
static _KLpairGVKd K170;
static _KLpairGVKd K171;
static _KLpairGVKd K172;
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLkeyword_signatureAvaluesGVKi K178;
static _KLbyte_stringGVKd_6 K179;
static _KLsimple_object_vectorGVKd_2 K180;
static _KLkeyword_signatureAvaluesGVKi K181;
static _KLsimple_object_vectorGVKd_4 K182;
static _KLsimple_object_vectorGVKd_2 K183;
static _KLsingletonGVKd K184;
extern _KLkeyword_methodGVKe KfirstVKdMM0;
D KfirstVKdMM0I (D sequence_, D all_keys_, D default_);
static _KLpairGVKd K187;
static _KLpairGVKd K188;
static _KLbyte_stringGVKd_5 K189;
static _KLkeyword_signatureGVKe K190;
static _KLsimple_object_vectorGVKd_2 K191;
static _KLsignatureAvaluesGVKi K192;
static _KLsignatureAvaluesGVKi K193;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K194;
extern _KLincremental_generic_functionGVKe Ksubsequence_positionVKd;
extern _KLkeyword_methodGVKe Ksubsequence_positionVKdMM0;
D Ksubsequence_positionVKdMM0I (D, D, D, D, D);
static _KLpairGVKd K198;
static _KLpairGVKd K199;
static _KLpairGVKd K200;
static _KLkeyword_signatureAvaluesGVKi K201;
static _KLbyte_stringGVKd_20 K202;
static _KLsimple_object_vectorGVKd_1 K203;
static _KLkeyword_signatureAvaluesGVKi K204;
static _KLsimple_object_vectorGVKd_4 K205;
static _KLsimple_object_vectorGVKd_2 K206;
extern _KLincremental_generic_functionGVKe KsortVKd;
extern _KLkeyword_methodGVKe KsortVKdMM0;
D KsortVKdMM0I (D, D, D, D);
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLbyte_stringGVKd_4 K212;
static _KLsimple_object_vectorGVKd_4 K213;
extern _KLincremental_generic_functionGVKe Kremove_duplicatesXVKd;
extern _KLkeyword_methodGVKe Kremove_duplicatesXVKdMM0;
D Kremove_duplicatesXVKdMM0I (D, D, D);
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLkeyword_signatureAvaluesGVKi K219;
static _KLbyte_stringGVKd_18 K220;
static _KLsimple_object_vectorGVKd_1 K221;
extern _KLincremental_generic_functionGVKe Kremove_duplicatesVKd;
extern _KLkeyword_methodGVKe Kremove_duplicatesVKdMM0;
D Kremove_duplicatesVKdMM0I (D, D, D);
static _KLpairGVKd K225;
static _KLpairGVKd K226;
static _KLbyte_stringGVKd_17 K227;
static _KLkeyword_signatureAvaluesGVKi K228;
static _KLsimple_object_vectorGVKd_2 K229;
extern _KLincremental_generic_functionGVKe KunionVKd;
extern _KLkeyword_methodGVKe KunionVKdMM0;
D KunionVKdMM0I (D, D, D, D);
static _KLpairGVKd K233;
static _KLkeyword_signatureAvaluesGVKi K234;
static _KLbyte_stringGVKd_5 K235;
static _KLkeyword_signatureAvaluesGVKi K236;
extern _KLincremental_generic_functionGVKe KintersectionVKd;
extern _KLkeyword_methodGVKe KintersectionVKdMM0;
D KintersectionVKdMM0I (D, D, D, D);
static _KLpairGVKd K240;
static _KLpairGVKd K241;
static _KLbyte_stringGVKd_12 K242;
extern _KLincremental_generic_functionGVKe Kchoose_byVKd;
extern _KLsimple_methodGVKe Kchoose_byVKdMM0;
D Kchoose_byVKdMM0I (D, D, D);
static _KLpairGVKd K246;
static _KLsignatureAvaluesGVKi K247;
static _KLbyte_stringGVKd_9 K248;
static _KLsimple_object_vectorGVKd_3 K249;
extern _KLincremental_generic_functionGVKe KchooseVKd;
extern _KLsimple_methodGVKe KchooseVKdMM0;
D KchooseVKdMM0I (D test_, D sequence_);
static _KLpairGVKd K253;
static _KLpairGVKd K254;
static _KLpairGVKd K255;
static _KLpairGVKd K256;
static _KLpairGVKd K257;
static _KLpairGVKd K258;
static _KLpairGVKd K259;
static _KLpairGVKd K260;
static _KLsignatureAvaluesGVKi K261;
static _KLbyte_stringGVKd_6 K262;
static _KLsimple_object_vectorGVKd_2 K263;
extern _KLincremental_generic_functionGVKe Kadd_newXVKd;
extern _KLkeyword_methodGVKe Kadd_newXVKdMM0;
D Kadd_newXVKdMM0I (D, D, D, D);
static _KLpairGVKd K267;
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLpairGVKd K270;
static _KLkeyword_signatureAvaluesGVKi K271;
static _KLbyte_stringGVKd_8 K272;
static _KLkeyword_signatureAvaluesGVKi K273;
extern _KLincremental_generic_functionGVKe Kadd_newVKd;
extern _KLkeyword_methodGVKe Kadd_newVKdMM0;
D Kadd_newVKdMM0I (D, D, D, D);
static _KLpairGVKd K277;
static _KLpairGVKd K278;
static _KLpairGVKd K279;
static _KLpairGVKd K280;
static _KLbyte_stringGVKd_7 K281;
extern _KLsealed_generic_functionGVKe KthirdVKd;
extern _KLkeyword_methodGVKe KthirdVKdMM0;
D KthirdVKdMM0I (D sequence_, D all_keys_, D default_);
static _KLpairGVKd K285;
static _KLbyte_stringGVKd_5 K286;
extern _KLsealed_generic_functionGVKe KsecondVKd;
extern _KLkeyword_methodGVKe KsecondVKdMM0;
D KsecondVKdMM0I (D sequence_, D all_keys_, D default_);
static _KLpairGVKd K290;
static _KLbyte_stringGVKd_6 K291;
extern _KLsimple_methodGVKe Kcheck_start_compute_endVKeMM0;
static _KLsignatureAvaluesGVKi K293;
static _KLsimple_object_vectorGVKd_3 K294;
extern _KLsimple_methodGVKe Kelement_range_checkVKeMM0;
D Kelement_range_checkVKeMM0I (D index_, D below_);
static _KLsignatureAvaluesGVKi K297;

/* Indirection variables */


/* Variables */

D element_range_checkVKe = &Kelement_range_checkVKeMM0;
D check_start_compute_endVKe = &Kcheck_start_compute_endVKeMM0;
D concatenate_as_twoVKi = &Kconcatenate_as_twoVKi;
D concatenateVKd = &KconcatenateVKd;
D concatenate_asVKd = &Kconcatenate_asVKd;
D firstVKd = &KfirstVKd;
D secondVKd = &KsecondVKd;
D thirdVKd = &KthirdVKd;
D addVKd = &KaddVKd;
D add_newVKd = &Kadd_newVKd;
D add_newXVKd = &Kadd_newXVKd;
D removeVKd = &KremoveVKd;
D chooseVKd = &KchooseVKd;
D choose_byVKd = &Kchoose_byVKd;
D intersectionVKd = &KintersectionVKd;
D unionVKd = &KunionVKd;
D remove_duplicatesVKd = &Kremove_duplicatesVKd;
D remove_duplicatesXVKd = &Kremove_duplicatesXVKd;
D copy_sequenceVKd = &Kcopy_sequenceVKd;
D replace_subsequenceXVKd = &Kreplace_subsequenceXVKd;
D reverseVKd = &KreverseVKd;
D reverseXVKd = &KreverseXVKd;
D sortVKd = &KsortVKd;
D sortXVKd = &KsortXVKd;
D lastVKd = &KlastVKd;
D subsequence_positionVKd = &Ksubsequence_positionVKd;
D identity_copy_stateVKe = &Kidentity_copy_stateVKe;
D sequence_next_stateVKe = &Ksequence_next_stateVKe;
D sequence_previous_stateVKe = &Ksequence_previous_stateVKe;
D sequence_finished_stateQVKe = &Ksequence_finished_stateQVKe;
D sequence_current_keyVKe = &Ksequence_current_keyVKe;
D sequence_current_element_setterVKe = &Ksequence_current_element_setterVKe;

/* Objects */

_KLsimple_methodGVKe Kshallow_copyVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &Kshallow_copyVKdMM3I
};

_KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K193,
  &Kmaximum_sequence_keyVKiMM1I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K163,
  &Kforward_iteration_protocolVKdMM5I
};

_KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kkey_testVKdRD_dylanRD_1,
  &Kkey_testVKdMM4
};

_KLsimple_methodGVKe Kkey_testVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K192,
  &Kkey_testVKdMM4I
};

_KLsealed_generic_functionGVKe KfirstVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K69,
  (D) 1,
  &K189,
  &K187,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KaddXVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K141,
  &KaddXVKdMM1I
};

_KLkeyword_methodGVKe KremoveXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K181,
  &key_mep_5,
  &KremoveXVKdMM0I,
  &K182
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K163,
  &Kbackward_iteration_protocolVKdMM0I
};

_KLkeyword_methodGVKe Kfind_keyVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K153,
  &key_mep_5,
  &Kfind_keyVKdMM1I,
  &K154
};

_KLsimple_methodGVKe Kkey_sequenceVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &Kkey_sequenceVKdMM1I
};

_KLunionGVKe KLmutable_sequence_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K152,
  &KLlimited_mutable_sequence_typeGVKe
};

_KLsimple_methodGVKe Ksequence_previous_stateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K147,
  &Ksequence_previous_stateVKeI
};

_KLsimple_methodGVKe Ksequence_finished_stateQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K150,
  &Ksequence_finished_stateQVKeI
};

_KLsimple_methodGVKe Ksequence_current_keyVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K147,
  &Ksequence_current_keyVKeI
};

_KLsimple_methodGVKe Kidentity_copy_stateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K149,
  &Kidentity_copy_stateVKeI
};

_KLsimple_methodGVKe Ksequence_next_stateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K147,
  &Ksequence_next_stateVKeI
};

_KLsimple_methodGVKe Kconcatenate_asVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K59,
  &Kconcatenate_asVKdMM0I
};

_KLincremental_generic_functionGVKe KaddVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K141,
  (D) 1,
  &K142,
  &K135,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KaddVKdRD_dylanRD_9,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kcopy_sequenceVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K131,
  (D) 1,
  &K132,
  &K123,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_13,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KsortXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K120,
  (D) 1,
  &K121,
  &K118,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLsequence_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K117,
  &KLlimited_sequence_typeGVKe
};

_KLincremental_generic_functionGVKe Kreplace_subsequenceXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K114,
  &KPfalseVKi,
  &K115,
  &K109,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kconcatenate_as_twoVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 25,
  &K104,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe KreverseXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K88,
  (D) 1,
  &K89,
  &K80,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K74,
  &key_mep_4,
  &Kcopy_sequenceVKdMM0I,
  &K75
};

_KLincremental_generic_functionGVKe KlastVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K69,
  (D) 1,
  &K70,
  &K64,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KlastVKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kconcatenate_asVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K59,
  &KPfalseVKi,
  &K60,
  &K54,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KconcatenateVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K52,
  &KPfalseVKi,
  &K53,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KconcatenateVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K52,
  &KconcatenateVKdMM0I
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &KconcatenateVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_11 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "concatenate"
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM1,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM2,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM3,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604041,
  &K61,
  &KDsignature_Lmutable_sequenceG_typesVKi
};

static _KLbyte_stringGVKd_14 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concatenate-as"
};

static _KLsimple_object_vectorGVKd_2 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequence_typeGVKi,
  &KLsequenceGVKd
};

_KLkeyword_methodGVKe KlastVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K69,
  &key_mep_3,
  &KlastVKdMM0I,
  &K73
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &KlastVKdMM0,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &KlastVKdMM1,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &KlastVKdMM2,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &KlastVKdMM3,
  &K68
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &KlastVKdMM4,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K69 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &KDsignature_LsequenceG_typesVKi,
  &K71,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_4 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "last"
};

static _KLsimple_object_vectorGVKd_1 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLbyte_stringGVKd_53 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "Attempting to retrieve last element of empty sequence"
};

static _KLsimple_object_vectorGVKd_2 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLkeyword_signatureAvaluesGVKi K74 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K76,
  &K77,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KreverseXVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &KreverseXVKdMM0I
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM0,
  &K81
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM1,
  &K82
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM2,
  &K83
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM3,
  &K84
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM4,
  &K85
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM5,
  &K86
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM6,
  &K87
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseXVKdMM7,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K88 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_8 K89 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "reverse!"
};

_KLincremental_generic_functionGVKe KreverseVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K88,
  (D) 1,
  &K98,
  &K93,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KreverseVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KreverseVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &KreverseVKdMM0I
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseVKdMM0,
  &K94
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseVKdMM1,
  &K95
};

static _KLpairGVKd K95 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseVKdMM2,
  &K96
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseVKdMM3,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &KreverseVKdMM4,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "reverse"
};

_KLsimple_methodGVKe Kconcatenate_as_twoVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K105,
  &Kconcatenate_as_twoVKiMM0I
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_as_twoVKiMM0,
  &K102
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_as_twoVKiMM1,
  &K103
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_as_twoVKiMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K104 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "concatenate-as-two"
};

static _KLsignatureAvaluesGVKi K105 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K106,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_sequence_typeGVKi,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

_KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K116,
  &key_mep_5,
  &Kreplace_subsequenceXVKdMM0I,
  &K75
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_subsequenceXVKdMM0,
  &K110
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_subsequenceXVKdMM1,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_subsequenceXVKdMM2,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_subsequenceXVKdMM3,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &Kreplace_subsequenceXVKdMM4,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K114 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K76,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_20 K115 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "replace-subsequence!"
};

static _KLkeyword_signatureAvaluesGVKi K116 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K76,
  &K77,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsubclassGVKe K117 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsequenceGVKd
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &KsortXVKdMM0,
  &K119
};

static _KLpairGVKd K119 = {
  &KLpairGVKdW /* wrapper */,
  &KsortXVKdMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K120 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K122,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_5 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "sort!"
};

static _KLsimple_object_vectorGVKd_2 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJstable_
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM0,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM1,
  &K125
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM2,
  &K126
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM3,
  &K127
};

static _KLpairGVKd K127 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM4,
  &K128
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM5,
  &K129
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM6,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_sequenceVKdMM7,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K131 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K76,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_13 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "copy-sequence"
};

_KLsimple_methodGVKe KaddVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K141,
  &KaddVKdMM0I
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM0,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM1,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM2,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM3,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM4,
  &K140
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &KaddVKdMM5,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K141 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K143,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_3 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "add"
};

static _KLsimple_object_vectorGVKd_2 K143 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_33 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Invalid start: value of %= for %="
};

static _KLbyte_stringGVKd_31 K145 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Invalid end: value of %= for %="
};

static _KLbyte_stringGVKd_41 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Invalid bounds for %=: start: %d, end: %d"
};

static _KLsignatureAvaluesGVKi K147 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K148,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K149 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K143
};

static _KLsignatureAvaluesGVKi K150 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K151,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsubclassGVKe K152 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_sequenceGVKd
};

static _KLkeyword_signatureGVKe K153 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K155,
  &K156,
  &K77
};

static _KLsimple_object_vectorGVKd_4 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJskip_,
  (D) 1,
  &KJfailure_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_2 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJskip_,
  &KJfailure_
};

_KLsimple_methodGVKe Ksequence_current_element_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K160,
  &Ksequence_current_element_setterVKeI
};

static _KLbyte_stringGVKd_24 K159 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "Sequence %= is immutable"
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K161,
  &K162
};

static _KLsimple_object_vectorGVKd_3 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

static _KLsignatureAvaluesGVKi K163 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_LsequenceG_typesVKi,
  &K164
};

static _KLsimple_object_vectorGVKd_8 K164 = {
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

static _KLunionGVKe K165 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K184,
  &KLintegerGVKd
};

_KLincremental_generic_functionGVKe KremoveVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K178,
  (D) 1,
  &K179,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_13,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KremoveVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K181,
  &key_mep_5,
  &KremoveVKdMM0I,
  &K182
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM0,
  &K170
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM1,
  &K171
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM2,
  &K172
};

static _KLpairGVKd K172 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM3,
  &K173
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM4,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM5,
  &K175
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM6,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM7,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveVKdMM8,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K178 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K143,
  &K180,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_6 K179 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "remove"
};

static _KLsimple_object_vectorGVKd_2 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLkeyword_signatureAvaluesGVKi K181 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K143,
  &K180,
  &K183,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &K165
};

static _KLsingletonGVKd K184 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLkeyword_methodGVKe KfirstVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K190,
  &key_mep_3,
  &KfirstVKdMM0I,
  &K191
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &KfirstVKdMM0,
  &K188
};

static _KLpairGVKd K188 = {
  &KLpairGVKdW /* wrapper */,
  &KfirstVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K189 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "first"
};

static _KLkeyword_signatureGVKe K190 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &KDsignature_LsequenceG_typesVKi,
  &K71,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K192 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsignatureAvaluesGVKi K193 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K194 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kconcatenate_as_twoVKi
};

_KLincremental_generic_functionGVKe Ksubsequence_positionVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K201,
  &KPfalseVKi,
  &K202,
  &K198,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Ksubsequence_positionVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K204,
  &key_mep_5,
  &Ksubsequence_positionVKdMM0I,
  &K205
};

static _KLpairGVKd K198 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubsequence_positionVKdMM0,
  &K199
};

static _KLpairGVKd K199 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubsequence_positionVKdMM1,
  &K200
};

static _KLpairGVKd K200 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubsequence_positionVKdMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K201 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K180,
  &KDsignature_LobjectG_typesVKi,
  &K203
};

static _KLbyte_stringGVKd_20 K202 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "subsequence-position"
};

static _KLsimple_object_vectorGVKd_1 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K165
};

static _KLkeyword_signatureAvaluesGVKi K204 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K180,
  &K206,
  &K203
};

static _KLsimple_object_vectorGVKd_4 K205 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_2 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLintegerGVKd
};

_KLincremental_generic_functionGVKe KsortVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K120,
  &KPfalseVKi,
  &K212,
  &K210,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KsortVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KsortVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K120,
  &key_mep_4,
  &KsortVKdMM0I,
  &K213
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &KsortVKdMM0,
  &K211
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &KsortVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K212 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "sort"
};

static _KLsimple_object_vectorGVKd_4 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KLVKd,
  &KJstable_,
  &KPfalseVKi
};

_KLincremental_generic_functionGVKe Kremove_duplicatesXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K219,
  &KPfalseVKi,
  &K220,
  &K217,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kremove_duplicatesXVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kremove_duplicatesXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K228,
  &key_mep_3,
  &Kremove_duplicatesXVKdMM0I,
  &K229
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_duplicatesXVKdMM0,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_duplicatesXVKdMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K219 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K221,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_18 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "remove-duplicates!"
};

static _KLsimple_object_vectorGVKd_1 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

_KLincremental_generic_functionGVKe Kremove_duplicatesVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K219,
  (D) 1,
  &K227,
  &K225,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kremove_duplicatesVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kremove_duplicatesVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K228,
  &key_mep_3,
  &Kremove_duplicatesVKdMM0I,
  &K229
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_duplicatesVKdMM0,
  &K226
};

static _KLpairGVKd K226 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_duplicatesVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K227 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "remove-duplicates"
};

static _KLkeyword_signatureAvaluesGVKi K228 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K221,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K229 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

_KLincremental_generic_functionGVKe KunionVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K234,
  &KPfalseVKi,
  &K235,
  &K233,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KunionVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K236,
  &key_mep_4,
  &KunionVKdMM0I,
  &K229
};

static _KLpairGVKd K233 = {
  &KLpairGVKdW /* wrapper */,
  &KunionVKdMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K234 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K221,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_5 K235 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "union"
};

static _KLkeyword_signatureAvaluesGVKi K236 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K221,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

_KLincremental_generic_functionGVKe KintersectionVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K234,
  &KPfalseVKi,
  &K242,
  &K240,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KintersectionVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K236,
  &key_mep_4,
  &KintersectionVKdMM0I,
  &K229
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &KintersectionVKdMM0,
  &K241
};

static _KLpairGVKd K241 = {
  &KLpairGVKdW /* wrapper */,
  &KintersectionVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K242 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "intersection"
};

_KLincremental_generic_functionGVKe Kchoose_byVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K247,
  &KPfalseVKi,
  &K248,
  &K246,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kchoose_byVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K247,
  &Kchoose_byVKdMM0I
};

static _KLpairGVKd K246 = {
  &KLpairGVKdW /* wrapper */,
  &Kchoose_byVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K247 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K249,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_9 K248 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "choose-by"
};

static _KLsimple_object_vectorGVKd_3 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

_KLincremental_generic_functionGVKe KchooseVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K261,
  &KPfalseVKi,
  &K262,
  &K253,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_14,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KchooseVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K261,
  &KchooseVKdMM0I
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM0,
  &K254
};

static _KLpairGVKd K254 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM1,
  &K255
};

static _KLpairGVKd K255 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM2,
  &K256
};

static _KLpairGVKd K256 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM3,
  &K257
};

static _KLpairGVKd K257 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM4,
  &K258
};

static _KLpairGVKd K258 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM5,
  &K259
};

static _KLpairGVKd K259 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM6,
  &K260
};

static _KLpairGVKd K260 = {
  &KLpairGVKdW /* wrapper */,
  &KchooseVKdMM7,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K261 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K263,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_6 K262 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "choose"
};

static _KLsimple_object_vectorGVKd_2 K263 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsequenceGVKd
};

_KLincremental_generic_functionGVKe Kadd_newXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K271,
  &KPfalseVKi,
  &K272,
  &K267,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_9,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kadd_newXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K273,
  &key_mep_4,
  &Kadd_newXVKdMM0I,
  &K229
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newXVKdMM0,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newXVKdMM1,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newXVKdMM2,
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newXVKdMM3,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K271 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K143,
  &K221,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_8 K272 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "add-new!"
};

static _KLkeyword_signatureAvaluesGVKi K273 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K143,
  &K221,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

_KLincremental_generic_functionGVKe Kadd_newVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K271,
  &KPfalseVKi,
  &K281,
  &K277,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_9,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kadd_newVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K273,
  &key_mep_4,
  &Kadd_newVKdMM0I,
  &K229
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newVKdMM0,
  &K278
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newVKdMM1,
  &K279
};

static _KLpairGVKd K279 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newVKdMM2,
  &K280
};

static _KLpairGVKd K280 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_newVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K281 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "add-new"
};

_KLsealed_generic_functionGVKe KthirdVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K69,
  &KPfalseVKi,
  &K286,
  &K285,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KthirdVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K190,
  &key_mep_3,
  &KthirdVKdMM0I,
  &K191
};

static _KLpairGVKd K285 = {
  &KLpairGVKdW /* wrapper */,
  &KthirdVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K286 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "third"
};

_KLsealed_generic_functionGVKe KsecondVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K69,
  &KPfalseVKi,
  &K291,
  &K290,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KsecondVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K190,
  &key_mep_3,
  &KsecondVKdMM0I,
  &K191
};

static _KLpairGVKd K290 = {
  &KLpairGVKdW /* wrapper */,
  &KsecondVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K291 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "second"
};

_KLsimple_methodGVKe Kcheck_start_compute_endVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K293,
  &Kcheck_start_compute_endVKeMM0I
};

static _KLsignatureAvaluesGVKi K293 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K294,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K294 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kelement_range_checkVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K297,
  &Kelement_range_checkVKeMM0I
};

static _KLsignatureAvaluesGVKi K297 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

/* Code */

D Kconcatenate_asVKdMM0I (D type_, D first_seq_, D rest_seqs_) {
  D T4_0;
  D total_szF5;
  D T6;
  D num_non_emptyF7;
  D non_empty_indexF8;
  DWORD T9T, T9;
  DWORD index_T, index_;
  D sz_;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17_0;
  D T18;
  D T19;
  D T20_0;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D fill_;
  D result_;
  D T29_0;
  D T29_1;
  D T29_2;
  D T29_3;
  D T29_4;
  D T29_5;
  D T29_6;
  D T29_7;
  D initial_state_;
  D next_state_;
  D current_element_setter_;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39T, T39;
  D T40;
  D T41;
  D T42;
  D T43;
  DWORD T44T, T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51T, T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56_0;
  D T57_0;
  D T58_0;
  D T59_0;
  D T60_0;
  D T61;
  D total_szF62;
  D T63;
  D T64;
  D num_non_emptyF65;
  D T66;
  D T67;
  D T68;
  D T69;
  D non_empty_indexF70;
  D T71;
  D T72;
  D T73;
  D T74;
  D stateF75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84_0;
  DWORD T85;
  D T86;
  D T87;
  D T88;
  DWORD T89;
  DWORD T90;
  D T91;
  D T92;
  D T93;
  _KLsimple_object_vectorGVKd_4 T94 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T95;
  D T96;
  DWORD T97;
  D T98_0;
  D T99_0;
  D T100_0;
  D T101_0;
  D T102_0;
  D T103_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:144
  T61 = primitive_copy_vector(rest_seqs_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:149
  T80 = SLOT_VALUE_INITD(T61, 0);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
  T81 = primitive_idQ(T80,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
  if (T81 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:151
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4_0 = CONGRUENT_CALL2(type_, first_seq_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:151
    T98_0 = T4_0;
    T60_0 = T98_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
    T82 = primitive_idQ(T80,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
    if (T82 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:152
      T83 = KelementVKdMM11I(T61, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:152
      ENGINE_NODE_CALL_PROLOG(&Kconcatenate_as_twoVKi, &K194, 3);
      T84_0 = ENGINE_NODE_CALL3(&K194, type_, first_seq_, T83);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:152
      T99_0 = T84_0;
      T59_0 = T99_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:154
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      total_szF5 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:154
      total_szF62 = total_szF5;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:155
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T6 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:155
      if (T6 != &KPfalseVKi) {
        num_non_emptyF7 = (D) 1;
      } else {
        num_non_emptyF7 = (D) 5;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:155
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:155
      num_non_emptyF65 = num_non_emptyF7;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:156
      T69 = num_non_emptyF65;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:156
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      non_empty_indexF8 = CONGRUENT_CALL2(T69, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:156
      non_empty_indexF70 = non_empty_indexF8;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
      T85 = primitive_cast_integer_as_raw(T80);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
      T9T = 1;
      index_T = 5;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        T9 = T9T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        index_ = index_T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        T91 = primitive_cast_raw_as_integer(index_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        T86 = primitive_machine_word_equalQ(T9,T85);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        if (T86 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
          T87 = REPEATED_D_SLOT_VALUE_TAGGED(T61, 1, T9);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:158
          CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
          sz_ = CONGRUENT_CALL1(T87);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:159
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T88 = CONGRUENT_CALL2(sz_, (D) 1);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:159
          if (T88 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:160
            T64 = total_szF62;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:160
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T12 = CONGRUENT_CALL2(T64, sz_);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:160
            total_szF62 = T12;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:161
            T68 = num_non_emptyF65;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:161
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T13 = CONGRUENT_CALL2(T68, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:161
            num_non_emptyF65 = T13;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:162
            T67 = num_non_emptyF65;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:162
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T14 = CONGRUENT_CALL2(T67, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:162
            if (T14 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:164
              non_empty_indexF70 = T91;
            }
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:162
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:159
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
          T89 = primitive_machine_word_add_signal_overflow(T9,4);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
          T90 = primitive_machine_word_add_signal_overflow(index_,4);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
          T9T = T89;
          index_T = T90;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:157
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
      T66 = num_non_emptyF65;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
      T92 = primitive_idQ(T66,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
      if (T92 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:170
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T15_0 = CONGRUENT_CALL2(type_, &KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:170
        T100_0 = T15_0;
        T58_0 = T100_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
        T93 = primitive_idQ(T66,(D) 5);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
        if (T93 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:171
          T74 = non_empty_indexF70;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:171
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T16 = CONGRUENT_CALL2(T74, (D) 1);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:171
          if (T16 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:172
            CONGRUENT_CALL_PROLOG(&KasVKd, 2);
            T17_0 = CONGRUENT_CALL2(type_, first_seq_);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:172
            T102_0 = T17_0;
            T21_0 = T102_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:174
            T73 = non_empty_indexF70;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:174
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T18 = CONGRUENT_CALL2(T73, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:174
            CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
            T19 = CONGRUENT_CALL3(T61, T18, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:174
            CONGRUENT_CALL_PROLOG(&KasVKd, 2);
            T20_0 = CONGRUENT_CALL2(type_, T19);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:174
            T103_0 = T20_0;
            T21_0 = T103_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:171
          T57_0 = T21_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:178
          T72 = non_empty_indexF70;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:178
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T22 = CONGRUENT_CALL2(T72, (D) 1);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:178
          if (T22 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:178
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T23 = CONGRUENT_CALL3(first_seq_, (D) 1, &KPempty_vectorVKi);
            fill_ = T23;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:179
            T71 = non_empty_indexF70;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:179
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T24 = CONGRUENT_CALL2(T71, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:179
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T25 = CONGRUENT_CALL3(T61, T24, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:179
            T26 = CALL2(&Kelement_no_bounds_checkVKe, T25, (D) 1);
            fill_ = T26;
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:178
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:180
          T63 = total_szF62;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:180
          T94.vector_element_[0] = &KJsize_;
          T94.vector_element_[1] = T63;
          T94.vector_element_[2] = &KJfill_;
          T94.vector_element_[3] = fill_;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:180
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          result_ = CONGRUENT_CALL2(type_, &T94);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:181
          T29_0 = CALL1(&Kforward_iteration_protocolVKd, result_);
          T29_1 = MV_GET_ELT(1);
          T29_2 = MV_GET_ELT(2);
          T29_3 = MV_GET_ELT(3);
          T29_4 = MV_GET_ELT(4);
          T29_5 = MV_GET_ELT(5);
          T29_6 = MV_GET_ELT(6);
          T29_7 = MV_GET_ELT(7);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:181
          initial_state_ = T29_0;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:181
          next_state_ = T29_2;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:181
          current_element_setter_ = T29_6;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:182
          stateF75 = initial_state_;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
          T33 = CONGRUENT_CALL1(first_seq_);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T34 = T33;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T35 = MV_GET_ELT(1);
;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T36 = MV_GET_ELT(2);
;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T37 = MV_GET_ELT(3);
;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T38 = MV_GET_ELT(5);
;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          T39T = T34;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
            T39 = T39T;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
            T40 = CALL3(T37, first_seq_, T39, T35);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
            if (T40 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
              T41 = CALL2(T38, first_seq_, T39);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:184
              T79 = stateF75;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:184
              CALL3(current_element_setter_, T41, result_, T79);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:185
              T78 = stateF75;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:185
              T42 = CALL2(next_state_, result_, T78);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:185
              stateF75 = T42;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
              T43 = CALL2(T36, first_seq_, T39);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
              T39T = T43;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:183
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
          T44T = 1;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
            T44 = T44T;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
            T95 = primitive_machine_word_equalQ(T44,T85);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
            if (T95 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
              T96 = REPEATED_D_SLOT_VALUE_TAGGED(T61, 1, T44);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T45 = CALL1(&Kforward_iteration_protocolVKd, T96);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T46 = T45;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T47 = MV_GET_ELT(1);
;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T48 = MV_GET_ELT(2);
;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T49 = MV_GET_ELT(3);
;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T50 = MV_GET_ELT(5);
;
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              T51T = T46;
            L3: ;
                // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                T51 = T51T;
                // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                T52 = CALL3(T49, T96, T51, T47);
                // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                if (T52 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                  T53 = CALL2(T50, T96, T51);
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:190
                  T77 = stateF75;
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:190
                  CALL3(current_element_setter_, T53, result_, T77);
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:191
                  T76 = stateF75;
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:191
                  T54 = CALL2(next_state_, result_, T76);
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:191
                  stateF75 = T54;
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                  T55 = CALL2(T48, T96, T51);
                  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                  T51T = T55;
                  goto L3;
                }
                // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
                // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:189
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
              T97 = primitive_machine_word_add_signal_overflow(T44,4);
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
              T44T = T97;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:188
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:195
          T56_0 = result_;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:195
          T101_0 = T56_0;
          T57_0 = T101_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
        T58_0 = T57_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:169
      T59_0 = T58_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
    T60_0 = T59_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:150
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:144
  MV_SET_COUNT(1);
  return(T60_0);
}

D Kshallow_copyVKdMM3I (D sequence_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:673
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:674
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T2_0 = CONGRUENT_CALL2(sequence_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:673
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmaximum_sequence_keyVKiMM1I (D collection_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:808
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:810
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:810
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3_0 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:808
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:808
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kforward_iteration_protocolVKdMM5I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:770
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:777
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:776
  T4_0 = (D) 1;
  T4_1 = T2;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &KelementVKd;
  T4_6 = &Ksequence_current_element_setterVKe;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:770
  T3_0 = T4_0;
  T3_1 = T4_1;
  T3_2 = T4_2;
  T3_3 = T4_3;
  T3_4 = T4_4;
  T3_5 = T4_5;
  T3_6 = T4_6;
  T3_7 = T4_7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:770
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

D Kkey_testVKdMM4I (D collection_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:713
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:714
  T2_0 = &KEEVKd;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:713
  MV_SET_COUNT(1);
  return(T2_0);
}

D KaddXVKdMM1I (D sequence_, D new_element_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:268
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:270
  CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
  T3_0 = CONGRUENT_CALL2(sequence_, new_element_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:268
  MV_SET_COUNT(1);
  return(T3_0);
}

D KremoveXVKdMM0I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:345
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:345
  primitive_type_check(count_, &K165);
  countF7 = count_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:349
  T9.vector_element_[0] = &KJtest_;
  T9.vector_element_[1] = testF6;
  T9.vector_element_[2] = &KJcount_;
  T9.vector_element_[3] = countF7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:349
  CONGRUENT_CALL_PROLOG(&KremoveVKd, 3);
  T8_0 = CONGRUENT_CALL3(sequence_, value_, &T9);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:345
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kbackward_iteration_protocolVKdMM0I (D sequence_) {
  D T2;
  D T3;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:787
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:793
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:793
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:793
  T5_0 = T3;
  T5_1 = (D) -3;
  T5_2 = &Ksequence_previous_stateVKe;
  T5_3 = &Ksequence_finished_stateQVKe;
  T5_4 = &Ksequence_current_keyVKe;
  T5_5 = &KelementVKd;
  T5_6 = &Ksequence_current_element_setterVKe;
  T5_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:787
  T4_0 = T5_0;
  T4_1 = T5_1;
  T4_2 = T5_2;
  T4_3 = T5_3;
  T4_4 = T5_4;
  T4_5 = T5_5;
  T4_6 = T5_6;
  T4_7 = T5_7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:787
  MV_SET_ELT(1, T4_1);
  MV_SET_ELT(2, T4_2);
  MV_SET_ELT(3, T4_3);
  MV_SET_ELT(4, T4_4);
  MV_SET_ELT(5, T4_5);
  MV_SET_ELT(6, T4_6);
  MV_SET_ELT(7, T4_7);
  MV_SET_COUNT(8);
  return(T4_0);
}

D Kfind_keyVKdMM1I (D collection_, D fn_, D Urest_, D skip_, D failure_) {
  D skipF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13T, T13;
  D found_T, found_;
  D index_T, index_;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23_0;
  D T24_0;
  D skipF25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:682
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:682
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF6 = skip_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:682
  skipF25 = skipF6;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T7 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T8 = T7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T9 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T10 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T11 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T12 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  T13T = T8;
  found_T = &KPfalseVKi;
  index_T = (D) -3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    found_ = found_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    T16 = CALL3(T11, collection_, T13, T9);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
      T17 = CALL2(T12, collection_, T13);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
      if (found_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
        T18 = CALL2(T10, collection_, T13);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
        T19 = CALL1(fn_, T17);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          T26 = skipF25;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          T27 = primitive_cast_integer_as_raw(T26);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          T28 = primitive_machine_word_subtract_signal_overflow(T27,4);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          T29 = primitive_cast_raw_as_integer(T28);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          skipF25 = T29;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
          T30 = primitive_machine_word_less_thanQ(T28,1);
          T20 = T30;
        } else {
          T20 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:686
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:687
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T21 = CONGRUENT_CALL2(index_, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
        T13T = T18;
        found_T = T20;
        index_T = T21;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:690
    if (found_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:690
      T22_0 = index_;
      T24_0 = T22_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:690
      T23_0 = failure_;
      T24_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:690
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:685
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:682
  MV_SET_COUNT(1);
  return(T24_0);
}

D Kkey_sequenceVKdMM1I (D sequence_) {
  D the_size_;
  D T3_0;
  D T4_0;
  D T5_0;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:699
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:700
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  the_size_ = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:701
  if (the_size_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:702
    T6.vector_element_[0] = &KJfrom_;
    T6.vector_element_[1] = (D) 1;
    T6.vector_element_[2] = &KJbelow_;
    T6.vector_element_[3] = the_size_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:702
    T3_0 = KrangeVKdI(&T6, (D) 1, &KPfalseVKi, &KPfalseVKi, the_size_, &KPfalseVKi, &KPfalseVKi);
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:704
    T7.vector_element_[0] = &KJfrom_;
    T7.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:704
    T4_0 = KrangeVKdI(&T7, (D) 1, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:701
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:699
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksequence_previous_stateVKeI (D sequence_, D state_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:745
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:747
  T3 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:747
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:747
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:747
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:745
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ksequence_finished_stateQVKeI (D sequence_, D state_, D limit_) {
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:750
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:753
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:753
  T5 = primitive_cast_integer_as_raw(limit_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:753
  T6 = primitive_machine_word_equalQ(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:753
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:750
  MV_SET_COUNT(1);
  return(T7_0);
}

D Ksequence_current_keyVKeI (D sequence_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:756
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:758
  T2_0 = state_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:756
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kidentity_copy_stateVKeI (D collection_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:735
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:737
  T2_0 = state_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:735
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ksequence_next_stateVKeI (D sequence_, D state_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:740
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:742
  T3 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:742
  T4 = primitive_machine_word_add_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:742
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:742
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:740
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kinvalid_sequence_bounds_errorVKiI (D s_, D start_, D finish_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:475
  T5.vector_element_[0] = s_;
  T5.vector_element_[1] = start_;
  T5.vector_element_[2] = finish_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:475
  T3 = KlistVKdI(&T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:473
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = &K146;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:473
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:473
  T7_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:470
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kinvalid_sequence_end_errorVKiI (D s_, D finish_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:486
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:491
  T4.vector_element_[0] = finish_;
  T4.vector_element_[1] = s_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:491
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:489
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K145;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:489
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:489
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:486
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kinvalid_sequence_start_errorVKiI (D s_, D start_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:478
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:483
  T4.vector_element_[0] = start_;
  T4.vector_element_[1] = s_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:483
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:481
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K144;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:481
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:481
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:478
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcheck_start_compute_endVKeMM0I (D seq_, D start_, D last_) {
  D seq_size_;
  DWORD T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:494
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:497
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  seq_size_ = CONGRUENT_CALL1(seq_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:498
  T11 = primitive_idQ(last_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:498
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:497
    T12 = seq_size_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:504
    T19 = primitive_cast_integer_as_raw(T12);
    T5 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:498
    T13 = last_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:504
    T20 = primitive_cast_integer_as_raw(T13);
    T5 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:498
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:504
  T21 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:500
  T14 = primitive_cast_integer_as_raw(start_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:500
  T15 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:500
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:500
    Kinvalid_sequence_start_errorVKiI(seq_, start_);
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:500
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:503
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T16_0 = CONGRUENT_CALL2(seq_size_, T21);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:503
  T17 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:502
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:503
    T6_0 = Kinvalid_sequence_end_errorVKiI(seq_, T21);
    T10_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:504
    T18 = primitive_machine_word_less_thanQ(T5,T14);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:502
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:504
      T7_0 = Kinvalid_sequence_bounds_errorVKiI(seq_, start_, T21);
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:505
      T8_0 = T21;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:502
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:502
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:494
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kcopy_sequenceVKdMM0I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D result_;
  D T12_0;
  D T12_1;
  D T12_2;
  D T12_3;
  D T12_4;
  D T12_5;
  D T12_6;
  D T12_7;
  D initial_state_;
  D next_state_;
  D current_element_;
  DWORD indexF16T, indexF16;
  D stateF17T, stateF17;
  D T18;
  D T19_0;
  D T19_1;
  D T19_2;
  D T19_3;
  D T19_4;
  D T19_5;
  D T19_6;
  D T19_7;
  D r_initial_state_;
  D r_next_state_;
  D r_current_element_setter_;
  D indexF23T, indexF23;
  D stateF24T, stateF24;
  D r_state_T, r_state_;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32_0;
  DWORD T33;
  DWORD T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  _KLsimple_object_vectorGVKd_4 T41 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T42;
  D T43;
  DWORD T44;
  D T45_0;
  D T46_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:510
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:510
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:514
  T6 = Kcheck_start_compute_endVKeMM0I(source_, firstF5, last_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
  T33 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
  T34 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
  T35 = primitive_machine_word_equalQ(T33,T34);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T7 = CONGRUENT_CALL1(source_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T8_0 = CONGRUENT_CALL2(T7, &KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
    T45_0 = T8_0;
    T32_0 = T45_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T9 = CONGRUENT_CALL1(source_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T36 = primitive_cast_integer_as_raw(T6);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T37 = primitive_cast_integer_as_raw(firstF5);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T38 = primitive_machine_word_logxor(T37,1);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T39 = primitive_machine_word_subtract_signal_overflow(T36,T38);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T40 = primitive_cast_raw_as_integer(T39);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T10 = CONGRUENT_CALL3(source_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    T41.vector_element_[0] = &KJsize_;
    T41.vector_element_[1] = T40;
    T41.vector_element_[2] = &KJfill_;
    T41.vector_element_[3] = T10;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:519
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    result_ = CONGRUENT_CALL2(T9, &T41);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:521
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T12_0 = CONGRUENT_CALL1(source_);
    T12_1 = MV_GET_ELT(1);
    T12_2 = MV_GET_ELT(2);
    T12_3 = MV_GET_ELT(3);
    T12_4 = MV_GET_ELT(4);
    T12_5 = MV_GET_ELT(5);
    T12_6 = MV_GET_ELT(6);
    T12_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:521
    initial_state_ = T12_0;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:521
    next_state_ = T12_2;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:521
    current_element_ = T12_5;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
    indexF16T = 1;
    stateF17T = initial_state_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      indexF16 = indexF16T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      stateF17 = stateF17T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      T42 = primitive_cast_integer_as_raw(firstF5);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      T43 = primitive_machine_word_less_thanQ(indexF16,T42);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
        T44 = primitive_machine_word_add_signal_overflow(indexF16,4);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:523
        T18 = CALL2(next_state_, source_, stateF17);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
        indexF16T = T44;
        stateF17T = T18;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:525
      T19_0 = CALL1(&Kforward_iteration_protocolVKd, result_);
      T19_1 = MV_GET_ELT(1);
      T19_2 = MV_GET_ELT(2);
      T19_3 = MV_GET_ELT(3);
      T19_4 = MV_GET_ELT(4);
      T19_5 = MV_GET_ELT(5);
      T19_6 = MV_GET_ELT(6);
      T19_7 = MV_GET_ELT(7);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:525
      r_initial_state_ = T19_0;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:525
      r_next_state_ = T19_2;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:525
      r_current_element_setter_ = T19_6;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
      indexF23T = firstF5;
      stateF24T = stateF17;
      r_state_T = r_initial_state_;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        indexF23 = indexF23T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        stateF24 = stateF24T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        r_state_ = r_state_T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T26 = CONGRUENT_CALL2(indexF23, T6);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:530
          T27 = CALL2(current_element_, source_, stateF24);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:529
          CALL3(r_current_element_setter_, T27, result_, r_state_);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T28 = CONGRUENT_CALL2(indexF23, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:527
          T29 = CALL2(next_state_, source_, stateF24);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:528
          T30 = CALL2(r_next_state_, result_, r_state_);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
          indexF23T = T28;
          stateF24T = T29;
          r_state_T = T30;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:526
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:522
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:535
    T31_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:535
    T46_0 = T31_0;
    T32_0 = T46_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:516
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:510
  MV_SET_COUNT(1);
  return(T32_0);
}

D KconcatenateVKdMM0I (D first_seq_, D rest_seqs_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:129
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:132
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T3 = CONGRUENT_CALL1(first_seq_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:132
  T4_0 = APPLY3(&Kconcatenate_asVKd, T3, first_seq_, rest_seqs_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:129
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlastVKdMM0I (D sequence_, D Urest_, D default_) {
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:601
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:603
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T4 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:603
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:604
    T12 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:604
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:605
      T13.vector_element_[0] = &KJformat_string_;
      T13.vector_element_[1] = &K72;
      T13.vector_element_[2] = &KJformat_arguments_;
      T13.vector_element_[3] = &KPempty_listVKi;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:605
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T5 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T13);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:605
      T14_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
      T7_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:610
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:604
    T11_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:613
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:613
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T9 = CONGRUENT_CALL2(T8, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:613
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T10_0 = CONGRUENT_CALL3(sequence_, T9, &KPempty_vectorVKi);
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:603
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:601
  MV_SET_COUNT(1);
  return(T11_0);
}

D KreverseXVKdMM0I (D sequence_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:577
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:579
  CONGRUENT_CALL_PROLOG(&KreverseVKd, 1);
  T2_0 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:577
  MV_SET_COUNT(1);
  return(T2_0);
}

D KreverseVKdMM0I (D sequence_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8T, T8;
  D new_sequence_T, new_sequence_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:562
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T7 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  T8T = T3;
  new_sequence_T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
    T8 = T8T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
    new_sequence_ = new_sequence_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
    T10 = CALL3(T6, sequence_, T8, T4);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
      T11 = CALL2(T7, sequence_, T8);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
      T12 = CALL2(T5, sequence_, T8);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:566
      T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:566
      SLOT_VALUE_SETTER(T11, T16, 0);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:566
      SLOT_VALUE_SETTER(new_sequence_, T16, 1);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
      T8T = T12;
      new_sequence_T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:568
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T13 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:568
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T14_0 = CONGRUENT_CALL2(T13, new_sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:565
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:562
  T15_0 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:562
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kconcatenate_as_twoVKiMM0I (D type_, D first_seq_, D second_seq_) {
  D T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D result_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19T, T19;
  DWORD keyF20T, keyF20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30T, T30;
  D keyF31T, keyF31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37_0;
  D T38_0;
  _KLsimple_object_vectorGVKd_4 T39 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T40;
  D T41;
  D T42_0;
  D T43_0;
  D T44_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:202
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:207
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T4 = CONGRUENT_CALL1(first_seq_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:206
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:207
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T5_0 = CONGRUENT_CALL2(type_, second_seq_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:207
    T42_0 = T5_0;
    T38_0 = T42_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:208
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T6 = CONGRUENT_CALL1(second_seq_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:206
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:208
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T7_0 = CONGRUENT_CALL2(type_, first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:208
      T43_0 = T7_0;
      T37_0 = T43_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:210
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T8 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:210
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T9 = CONGRUENT_CALL1(second_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:210
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T10 = CONGRUENT_CALL2(T8, T9);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:211
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T11 = CONGRUENT_CALL3(first_seq_, (D) 1, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:210
      T39.vector_element_[0] = &KJsize_;
      T39.vector_element_[1] = T10;
      T39.vector_element_[2] = &KJfill_;
      T39.vector_element_[3] = T11;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:210
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      result_ = CONGRUENT_CALL2(type_, &T39);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T13 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T14 = T13;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T15 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T16 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T17 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T18 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      T19T = T14;
      keyF20T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        T19 = T19T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        keyF20 = keyF20T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        T41 = primitive_cast_raw_as_integer(keyF20);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        T21 = CALL3(T17, first_seq_, T19, T15);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        if (T21 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
          T22 = CALL2(T18, first_seq_, T19);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:214
          CALL3(&Kelement_no_bounds_check_setterVKe, T22, result_, T41);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
          T23 = CALL2(T16, first_seq_, T19);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
          T40 = primitive_machine_word_add_signal_overflow(keyF20,4);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
          T19T = T23;
          keyF20T = T40;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T24 = CONGRUENT_CALL1(second_seq_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T25 = T24;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T26 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T27 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T28 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T29 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        T30T = T25;
        keyF31T = T41;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
          T30 = T30T;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
          keyF31 = keyF31T;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
          T32 = CALL3(T28, second_seq_, T30, T26);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
          if (T32 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
            T33 = CALL2(T29, second_seq_, T30);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
            CALL3(&Kelement_no_bounds_check_setterVKe, T33, result_, keyF31);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
            T34 = CALL2(T27, second_seq_, T30);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T35 = CONGRUENT_CALL2(keyF31, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
            T30T = T34;
            keyF31T = T35;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:216
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:213
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:219
      T36_0 = result_;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:219
      T44_0 = T36_0;
      T37_0 = T44_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:206
    T38_0 = T37_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:206
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:202
  MV_SET_COUNT(1);
  return(T38_0);
}

D Kreplace_subsequenceXVKdMM0I (D target_, D insert_sequence_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T13;
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:544
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:544
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:550
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:552
  T10.vector_element_[0] = &KJstart_;
  T10.vector_element_[1] = (D) 1;
  T10.vector_element_[2] = &KJend_;
  T10.vector_element_[3] = startF6;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:552
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T8 = CONGRUENT_CALL2(target_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:554
  T11.vector_element_[0] = &KJstart_;
  T11.vector_element_[1] = T7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:554
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T9 = CONGRUENT_CALL2(target_, &T11);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:552
  T12.vector_element_[0] = insert_sequence_;
  T12.vector_element_[1] = T9;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:552
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T13 = CONGRUENT_CALL1(T8);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:552
  T14_0 = APPLY3(&Kconcatenate_asVKd, T13, T8, &T12);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:544
  MV_SET_COUNT(1);
  return(T14_0);
}

D KaddVKdMM0I (D sequence_, D new_element_) {
  D T3;
  D T4;
  D T5_0;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:260
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T3 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:260
  T6.vector_element_[0] = new_element_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:260
  T4 = KlistVKdI(&T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:260
  T5_0 = CALL3(&Kconcatenate_asVKd, T3, T4, sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:258
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksequence_current_element_setterVKeI (D new_value_, D sequence_, D state_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:761
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:766
  T5.vector_element_[0] = sequence_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:766
  T3 = KlistVKdI(&T5);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:764
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = &K159;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:764
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLimmutable_errorGVKi, &T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:764
  T7_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:761
  MV_SET_COUNT(1);
  return(T7_0);
}

D KremoveVKdMM0I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
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
  D T26T, T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33_0;
  D T34_0;
  D new_sequence_;
  D T36;
  D T37;
  D T38;
  D changedQ_;
  D T40;
  D countF41;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:308
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:308
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:308
  primitive_type_check(count_, &K165);
  countF7 = count_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:313
  new_sequence_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:314
  changedQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:315
  if (countF7 != &KPfalseVKi) {
    T44 = countF7;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:316
    countF41 = T44;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T8 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T10 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T11 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T12 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T13 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
    T14T = T9;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
      T14 = T14T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
      T15 = CALL3(T12, sequence_, T14, T10);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
      if (T15 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
        T16 = CALL2(T13, sequence_, T14);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        T43 = countF41;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        T45 = primitive_cast_integer_as_raw(T43);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        T46 = primitive_machine_word_less_thanQ(1,T45);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        if (T46 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
          T17 = CALL2(testF6, T16, value_);
          T18 = T17;
        } else {
          T18 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          T42 = countF41;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          T47 = primitive_cast_integer_as_raw(T42);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          T48 = primitive_machine_word_subtract_signal_overflow(T47,4);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          T49 = primitive_cast_raw_as_integer(T48);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          countF41 = T49;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:319
          changedQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:321
          T38 = new_sequence_;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:321
          T50 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:321
          SLOT_VALUE_SETTER(T16, T50, 0);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:321
          SLOT_VALUE_SETTER(T38, T50, 1);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:321
          new_sequence_ = T50;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:318
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
        T19 = CALL2(T11, sequence_, T14);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
        T14T = T19;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:317
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T20 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T21 = T20;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T22 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T23 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T24 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T25 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
    T26T = T21;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
      T26 = T26T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
      T27 = CALL3(T24, sequence_, T26, T22);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
      if (T27 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
        T28 = CALL2(T25, sequence_, T26);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:326
        T29 = CALL2(testF6, T28, value_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:326
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:327
          changedQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:329
          T37 = new_sequence_;
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:329
          T51 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:329
          SLOT_VALUE_SETTER(T28, T51, 0);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:329
          SLOT_VALUE_SETTER(T37, T51, 1);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:329
          new_sequence_ = T51;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:326
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
        T30 = CALL2(T23, sequence_, T26);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
        T26T = T30;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:325
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:315
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:333
  T40 = changedQ_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:333
  if (T40 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:334
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T31 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:334
    T36 = new_sequence_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:334
    T52 = KreverseXVKdMM2I(T36);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:334
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T32_0 = CONGRUENT_CALL2(T31, T52);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:334
    T53_0 = T32_0;
    T34_0 = T53_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:336
    T33_0 = sequence_;
    T34_0 = T33_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:333
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:308
  MV_SET_COUNT(1);
  return(T34_0);
}

D KfirstVKdMM0I (D sequence_, D all_keys_, D default_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:229
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:231
  T4_0 = APPLY3(&KelementVKd, sequence_, (D) 1, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:229
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubsequence_positionVKdMM0I (D big_, D pat_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  D T8;
  D n_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T12_1;
  D T12_2;
  D T12_3;
  D T12_4;
  D T12_5;
  D T12_6;
  D T12_7;
  D pat_initial_state_;
  D pat_limit_;
  D pat_next_state_;
  D pat_finished_stateQ_;
  D pat_current_element_;
  D pat_copy_state_;
  D T19_0;
  D T19_1;
  D T19_2;
  D T19_3;
  D T19_4;
  D T19_5;
  D T19_6;
  D T19_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_;
  D copy_state_;
  D T26;
  D T27;
  D T28_0;
  D T29_0;
  D T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34_0;
  D T35;
  D T36;
  D T37;
  D nextF38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D nextF51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D indexF60;
  D index_stateF61;
  D big_stateF62;
  D pat_stateF63;
  D countF64;
  D T65;
  D indexF66;
  D index_stateF67;
  D big_stateF68;
  D pat_stateF69;
  D countF70;
  D T71;
  D indexF72T, indexF72;
  D index_stateF73T, index_stateF73;
  D big_stateF74T, big_stateF74;
  D pat_stateF75T, pat_stateF75;
  D countF76T, countF76;
  D T77_0;
  D T78_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:622
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:622
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:622
  primitive_type_check(count_, &KLintegerGVKd);
  countF7 = count_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:626
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T8 = CONGRUENT_CALL1(pat_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:626
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:627
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    n_ = CONGRUENT_CALL1(big_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T29_0 = CONGRUENT_CALL2(n_, countF7);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
    T30 = T29_0;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T10_0 = n_;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T78_0 = T10_0;
      T11_0 = T78_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T31 = primitive_cast_integer_as_raw(countF7);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T32 = primitive_machine_word_subtract_signal_overflow(T31,4);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T33 = primitive_cast_raw_as_integer(T32);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
      T34_0 = T33;
      T11_0 = T34_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:628
    T28_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T12_0 = CONGRUENT_CALL1(pat_);
    T12_1 = MV_GET_ELT(1);
    T12_2 = MV_GET_ELT(2);
    T12_3 = MV_GET_ELT(3);
    T12_4 = MV_GET_ELT(4);
    T12_5 = MV_GET_ELT(5);
    T12_6 = MV_GET_ELT(6);
    T12_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_initial_state_ = T12_0;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_limit_ = T12_1;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_next_state_ = T12_2;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_finished_stateQ_ = T12_3;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_current_element_ = T12_5;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:630
    pat_copy_state_ = T12_7;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T19_0 = CONGRUENT_CALL1(big_);
    T19_1 = MV_GET_ELT(1);
    T19_2 = MV_GET_ELT(2);
    T19_3 = MV_GET_ELT(3);
    T19_4 = MV_GET_ELT(4);
    T19_5 = MV_GET_ELT(5);
    T19_6 = MV_GET_ELT(6);
    T19_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    initial_state_ = T19_0;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    limit_ = T19_1;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    next_state_ = T19_2;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    finished_stateQ_ = T19_3;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    current_element_ = T19_5;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:631
    copy_state_ = T19_7;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:634
    T26 = CALL2(copy_state_, big_, initial_state_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:635
    T27 = CALL2(pat_copy_state_, pat_, pat_initial_state_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
    indexF72T = (D) 1;
    index_stateF73T = initial_state_;
    big_stateF74T = T26;
    pat_stateF75T = T27;
    countF76T = countF7;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
      indexF72 = indexF72T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
      index_stateF73 = index_stateF73T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
      big_stateF74 = big_stateF74T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
      pat_stateF75 = pat_stateF75T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
      countF76 = countF76T;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
      indexF66 = indexF72;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
      index_stateF67 = index_stateF73;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
      big_stateF68 = big_stateF74;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
      pat_stateF69 = pat_stateF75;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
      countF70 = countF76;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
      indexF60 = indexF66;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
      index_stateF61 = index_stateF67;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
      big_stateF62 = big_stateF68;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
      pat_stateF63 = pat_stateF69;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
      countF64 = countF70;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:638
      T35 = CALL3(pat_finished_stateQ_, pat_, pat_stateF63, pat_limit_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:639
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T36 = CONGRUENT_CALL2(countF64, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:639
        if (T36 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:640
          T37 = indexF60;
          MV_SET_ELT(0, indexF60);
          MV_SET_COUNT(1);
          T43 = T37;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:642
          nextF38 = CALL2(next_state_, big_, index_stateF61);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T39 = CONGRUENT_CALL2(indexF60, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
          T40 = CALL2(copy_state_, big_, nextF38);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:644
          T41 = CALL2(pat_copy_state_, pat_, pat_initial_state_);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:644
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T42 = CONGRUENT_CALL2(countF64, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
          indexF72T = T39;
          index_stateF73T = nextF38;
          big_stateF74T = T40;
          pat_stateF75T = T41;
          countF76T = T42;
          goto L0;
          T43 = T59;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:639
        T58 = T43;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:646
        T44 = CALL3(finished_stateQ_, big_, big_stateF62, limit_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:647
          T45 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T57 = T45;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:648
          T46 = CALL2(current_element_, big_, big_stateF62);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:649
          T47 = CALL2(pat_current_element_, pat_, pat_stateF63);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:648
          T48 = CALL2(testF6, T46, T47);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
            T49 = CALL2(next_state_, big_, big_stateF62);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:651
            T50 = CALL2(pat_next_state_, pat_, pat_stateF63);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:650
            indexF72T = indexF60;
            index_stateF73T = index_stateF61;
            big_stateF74T = T49;
            pat_stateF75T = T50;
            countF76T = countF64;
            goto L0;
            T56 = T65;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:653
            nextF51 = CALL2(next_state_, big_, index_stateF61);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T52 = CONGRUENT_CALL2(indexF60, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
            if (nextF51 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
              T53 = CALL2(copy_state_, big_, nextF51);
              T54 = T53;
            } else {
              T54 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:655
            T55 = CALL2(pat_copy_state_, pat_, pat_initial_state_);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:654
            indexF72T = T52;
            index_stateF73T = nextF51;
            big_stateF74T = T54;
            pat_stateF75T = T55;
            countF76T = countF64;
            goto L0;
            T56 = T71;
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
          T57 = T56;
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
        T58 = T57;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:643
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:637
    T77_0 = T58;
    T28_0 = T77_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:626
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:622
  MV_SET_COUNT(1);
  return(T28_0);
}

D KsortVKdMM0I (D sequence_, D Urest_, D test_, D stable_) {
  D T5_0;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:587
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:591
  T6.vector_element_[0] = &KJtest_;
  T6.vector_element_[1] = test_;
  T6.vector_element_[2] = &KJstable_;
  T6.vector_element_[3] = stable_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:591
  CONGRUENT_CALL_PROLOG(&KsortXVKd, 2);
  T5_0 = CONGRUENT_CALL2(sequence_, &T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:587
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kremove_duplicatesXVKdMM0I (D sequence_, D Urest_, D test_) {
  D testF4;
  D T5_0;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:454
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:454
  primitive_type_check(test_, &KLfunctionGVKd);
  testF4 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:457
  T6.vector_element_[0] = &KJtest_;
  T6.vector_element_[1] = testF4;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:457
  CONGRUENT_CALL_PROLOG(&Kremove_duplicatesVKd, 2);
  T5_0 = CONGRUENT_CALL2(sequence_, &T6);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:454
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kremove_duplicatesVKdMM0I (D sequence_, D Urest_, D test_) {
  D testF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D new_T, new_;
  D T12T, T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21_0;
  D duplicates_;
  D T23;
  D T24T, T24;
  D result_T, result_;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:430
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:430
  primitive_type_check(test_, &KLfunctionGVKd);
  testF4 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:433
  duplicates_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  T6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  new_T = &KPempty_listVKi;
  T12T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
    new_ = new_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
    T13 = CALL3(T9, sequence_, T12, T7);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
      T14 = CALL2(T10, sequence_, T12);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
      T24T = new_;
      result_T = &KPfalseVKi;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        T24 = T24T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        result_ = result_T;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        T26 = primitive_idQ(T24,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        if (T26 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
          T27 = SLOT_VALUE_INITD(T24, 0);
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
          if (result_ == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T29 = SLOT_VALUE_INITD(T24, 1);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T30_0 = T29;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T28_0 = T30_0;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T31 = T28_0;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T32 = CALL2(testF4, T27, T14);
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T33 = T32;
            // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
            T24T = T31;
            result_T = T33;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        }
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:436
        duplicates_ = &KPtrueVKi;
        T15 = new_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:437
        T34 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:437
        SLOT_VALUE_SETTER(T14, T34, 0);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:437
        SLOT_VALUE_SETTER(new_, T34, 1);
        T15 = T34;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:435
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
      T16 = CALL2(T8, sequence_, T12);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
      new_T = T15;
      T12T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:440
    T23 = duplicates_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:440
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:442
      CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
      T17 = CONGRUENT_CALL1(sequence_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:442
      T35 = KreverseXVKdMM2I(new_);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:442
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T18_0 = CONGRUENT_CALL2(T17, T35);
      T20_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:444
      T19_0 = sequence_;
      T20_0 = T19_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:440
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:434
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:430
  T21_0 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:430
  MV_SET_COUNT(1);
  return(T21_0);
}

D KunionVKdMM0I (D sequence1_, D sequence2_, D Urest_, D test_) {
  D testF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D new_T, new_;
  D T14T, T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21_0;
  _KLsimple_object_vectorGVKd_2 T22 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:409
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:409
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T6 = CONGRUENT_CALL2(&KLlistGVKd, sequence2_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T7 = CONGRUENT_CALL1(sequence1_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  T8 = T7;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  T9 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  T10 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  T11 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  T12 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  new_T = T6;
  T14T = T8;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
    new_ = new_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
    T14 = T14T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
    T15 = CALL3(T11, sequence1_, T14, T9);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
    if (T15 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
      T16 = CALL2(T12, sequence1_, T14);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:414
      T22.vector_element_[0] = &KJtest_;
      T22.vector_element_[1] = testF5;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:414
      CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
      T17 = CONGRUENT_CALL3(T16, sequence2_, &T22);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:414
      if (T17 != &KPfalseVKi) {
        T18 = new_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:417
        T23 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:417
        SLOT_VALUE_SETTER(T16, T23, 0);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:417
        SLOT_VALUE_SETTER(new_, T23, 1);
        T18 = T23;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:414
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
      T19 = CALL2(T10, sequence1_, T14);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
      new_T = T18;
      T14T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:421
    T20_0 = new_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:413
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:409
  T21_0 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:409
  MV_SET_COUNT(1);
  return(T21_0);
}

D KintersectionVKdMM0I (D sequence1_, D sequence2_, D Urest_, D test_) {
  D testF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D result_T, result_;
  D T13T, T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:390
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:390
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(sequence1_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  T7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  result_T = &KPempty_listVKi;
  T13T = T7;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
    T14 = CALL3(T10, sequence1_, T13, T8);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      T15 = CALL2(T11, sequence1_, T13);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      T20.vector_element_[0] = &KJtest_;
      T20.vector_element_[1] = testF5;
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
      T16 = CONGRUENT_CALL3(T15, sequence2_, &T20);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:395
        T21 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:395
        SLOT_VALUE_SETTER(T15, T21, 0);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:395
        SLOT_VALUE_SETTER(result_, T21, 1);
        T17 = T21;
      } else {
        T17 = result_;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      T18 = CALL2(T9, sequence1_, T13);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
      result_T = T17;
      T13T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:400
    T19_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:394
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:390
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kchoose_byVKdMM0I (D test_, D test_sequence_, D value_sequence_) {
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
  D T14;
  D T15;
  D result_T, result_;
  D T17T, T17;
  D T18T, T18;
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
  D T29_0;
  D T30_0;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:372
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(test_sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T10 = CONGRUENT_CALL1(value_sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T11 = T10;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T12 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T13 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T14 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  T15 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  result_T = &KPempty_listVKi;
  T17T = T5;
  T18T = T11;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    T17 = T17T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    T18 = T18T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    T19 = CALL3(T8, test_sequence_, T17, T6);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    if (T19 != &KPfalseVKi) {
      T21 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      T20 = CALL3(T14, value_sequence_, T18, T12);
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    if (T21 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      T22 = CALL2(T9, test_sequence_, T17);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      T23 = CALL2(T15, value_sequence_, T18);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
      T24 = CALL1(test_, T22);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
        T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
        SLOT_VALUE_SETTER(T23, T31, 0);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
        SLOT_VALUE_SETTER(result_, T31, 1);
        T25 = T31;
      } else {
        T25 = result_;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:377
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      T26 = CALL2(T7, test_sequence_, T17);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      T27 = CALL2(T13, value_sequence_, T18);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
      result_T = T25;
      T17T = T26;
      T18T = T27;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:381
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T28 = CONGRUENT_CALL1(value_sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:381
    T32 = KreverseXVKdMM2I(result_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:381
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T29_0 = CONGRUENT_CALL2(T28, T32);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:376
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:372
  T30_0 = T29_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:372
  MV_SET_COUNT(1);
  return(T30_0);
}

D KchooseVKdMM0I (D test_, D sequence_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D result_T, result_;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:357
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  result_T = &KPempty_listVKi;
  T10T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
    T11 = CALL3(T7, sequence_, T10, T5);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      T12 = CALL2(T8, sequence_, T10);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      T13 = CALL1(test_, T12);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
        T19 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
        SLOT_VALUE_SETTER(T12, T19, 0);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
        SLOT_VALUE_SETTER(result_, T19, 1);
        T14 = T19;
      } else {
        T14 = result_;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      T15 = CALL2(T6, sequence_, T10);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
      result_T = T14;
      T10T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:363
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T16 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:363
    T20 = KreverseXVKdMM2I(result_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:363
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T17_0 = CONGRUENT_CALL2(T16, T20);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:360
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:357
  T18_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:357
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kadd_newXVKdMM0I (D sequence_, D new_element_, D Urest_, D test_) {
  D testF5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D result_T, result_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:293
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:293
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T10 = T9;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T11 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T12 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T13 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T14 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  T15T = T10;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    T15 = T15T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    T17 = CALL3(T13, sequence_, T15, T11);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
      T18 = CALL2(T14, sequence_, T15);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
        T19 = CALL2(T12, sequence_, T15);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
        T20 = CALL2(testF5, T18, new_element_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
        T21 = T20;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
        T15T = T19;
        result_T = T21;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:297
    T6_0 = sequence_;
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:299
    CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
    T7_0 = CONGRUENT_CALL2(sequence_, new_element_);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:299
    T22_0 = T7_0;
    T8_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:296
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:293
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kadd_newVKdMM0I (D sequence_, D new_element_, D Urest_, D test_) {
  D testF5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D result_T, result_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:278
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:278
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T10 = T9;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T11 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T12 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T13 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T14 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  T15T = T10;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    T15 = T15T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    T17 = CALL3(T13, sequence_, T15, T11);
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
      T18 = CALL2(T14, sequence_, T15);
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
        T19 = CALL2(T12, sequence_, T15);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
        T20 = CALL2(testF5, T18, new_element_);
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
        T21 = T20;
        // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
        T15T = T19;
        result_T = T21;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    }
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:282
    T6_0 = sequence_;
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:284
    CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
    T7_0 = CONGRUENT_CALL2(sequence_, new_element_);
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:278
  MV_SET_COUNT(1);
  return(T8_0);
}

D KthirdVKdMM0I (D sequence_, D all_keys_, D default_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:250
  T4_0 = APPLY3(&KelementVKd, sequence_, (D) 9, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:248
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsecondVKdMM0I (D sequence_, D all_keys_, D default_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:238
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:240
  T4_0 = APPLY3(&KelementVKd, sequence_, (D) 5, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:238
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_range_checkVKeMM0I (D index_, D below_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:721
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:726
  T3 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:727
  T4 = primitive_cast_integer_as_raw(below_);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:725
  T5 = primitive_machine_word_unsigned_less_thanQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:725
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/sequence.dylan:721
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_sequence_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_sequence_for_user () {
  return;
}


/* eof */
