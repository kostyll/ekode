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

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(3);
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLsimple_vectorGVKd;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(53);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(5);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_vector_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

#define  define__KLsimple_element_type_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D size_; \
    D element_type_vector_element_[nrepeated+1]; \
  } _KLsimple_element_type_vectorGVKe_##nrepeated;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsubscript_out_of_bounds_errorGVKi;

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
} _KLempty_collection_errorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_35;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_34;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_vectorGVKdW;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe KemptyVKeMM2;
extern _KLsimple_methodGVKe KemptyVKeMM3;
extern _KLsimple_methodGVKe KemptyVKeMM4;
extern _KLsimple_methodGVKe KemptyVKeMM5;
extern _KLsimple_methodGVKe KemptyVKeMM6;
extern _KLsimple_methodGVKe KemptyVKeMM7;
extern _KLsimple_methodGVKe KemptyVKeMM8;
extern _KLsimple_methodGVKe KemptyVKeMM9;
extern _KLsimple_methodGVKe KemptyVKeMM10;
extern _KLsimple_methodGVKe KemptyVKeMM11;
extern _KLsimple_methodGVKe KemptyVKeMM12;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_10;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLunionGVKe KLsequence_typeGVKi;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLlimited_vector_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_vector_typeGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLsimple_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW;
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_21;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM1;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM2;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM3;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM4;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM5;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsubscript_out_of_bounds_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsubscript_out_of_bounds_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_8;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KaddVKd;
extern _KLsymbolGVKd KJtest_;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_8;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_7;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsealed_generic_functionGVKe KfloorSVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_7;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLsymbolGVKd KJstable_;
extern _KLincremental_generic_functionGVKe KsortXVKd;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_7;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsymbolGVKd KJcount_;
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_12;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_20;
D Kelement_range_errorVKeI (D, D);
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_6;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLclassGVKd KLempty_collection_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLempty_collection_errorGVKiW;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_10;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_12;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_17;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_15;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_18;
D Kobject_classVKdI (D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_vectorG_typesVKi;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_19;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;

/* Defined object declarations */

D KmakeVKdMM23I (D, D, D, D);
D Kcopy_sequenceVKdMM2I (D, D, D, D);
D KelementVKdMM11I (D, D, D, D);
extern _KLsimple_methodGVKe KvectorVKd;
D KvectorVKdI (D arguments_);
D KasVKdMM41I (D, D);
extern _KLsimple_methodGVKe KemptyQVKdMM2;
D KemptyQVKdMM2I (D vector_);
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_36;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM5;
D Kshallow_copyVKdMM5I (D vector_);
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM5;
D Ktype_for_copyVKdMM5I (D vector_);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM6;
D Ktype_for_copyVKdMM6I (D vector_);
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_37;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_27;
extern _KLkeyword_methodGVKe KelementVKdMM11;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_23;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM9;
D Kelement_no_bounds_checkVKeMM9I (D vector_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_16;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_20;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM7;
D Kforward_iteration_protocolVKdMM7I (D sequence_);
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_19;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM2;
D Kbackward_iteration_protocolVKdMM2I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_13;
extern _KLkeyword_methodGVKe KmemberQVKdMM1;
D KmemberQVKdMM1I (D value_, D collection_, D Urest_, D test_);
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe Kreduce1VKdMM1;
D Kreduce1VKdMM1I (D fn_, D collection_);
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe Kelement_setterVKdMM11;
D Kelement_setterVKdMM11I (D new_value_, D vector_, D index_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_21;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM11;
D Kelement_no_bounds_check_setterVKeMM11I (D new_value_, D vector_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_18;
extern _KLkeyword_methodGVKe KfillXVKdMM11;
D KfillXVKdMM11I (D, D, D, D, D);
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_8;
extern _KLkeyword_methodGVKe Kreplace_elementsXVKdMM1;
D Kreplace_elementsXVKdMM1I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_13;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM2;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM1;
D Kcopy_sequenceVKdMM1I (D, D, D, D);
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe KreverseVKdMM1;
D KreverseVKdMM1I (D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM2;
D Kconcatenate_asVKdMM2I (D, D, D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM1;
D Kconcatenate_asVKdMM1I (D, D, D);
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe KaddVKdMM1;
D KaddVKdMM1I (D vector_, D object_);
extern _KLkeyword_methodGVKe Ksubsequence_positionVKdMM1;
D Ksubsequence_positionVKdMM1I (D, D, D, D, D);
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_8;
extern _KLkeyword_methodGVKe KsortVKdMM1;
D KsortVKdMM1I (D, D, D, D);
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe KreverseXVKdMM1;
D KreverseXVKdMM1I (D);
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM2;
D Kreplace_subsequenceXVKdMM2I (D, D, D, D, D);
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_14;
extern _KLkeyword_methodGVKe Kadd_newXVKdMM1;
D Kadd_newXVKdMM1I (D vector_, D new_element_, D Urest_, D test_);
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_9;
extern _KLkeyword_methodGVKe Kadd_newVKdMM1;
D Kadd_newVKdMM1I (D vector_, D new_element_, D Urest_, D test_);
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe KdimensionsVKdMM8;
D KdimensionsVKdMM8I (D vector_);
extern _KLkeyword_methodGVKe KmakeVKdMM23;
extern _KLsimple_methodGVKe Krow_major_indexVKdMM1;
D Krow_major_indexVKdMM1I (D, D);
extern _KLsimple_methodGVKe Karef_setterVKdMM1;
D Karef_setterVKdMM1I (D, D, D);
extern _KLsimple_methodGVKe KarefVKdMM1;
D KarefVKdMM1I (D, D);
extern _KLsealed_generic_functionGVKe Kconcrete_limited_vector_classVKi;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_38;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_22;
extern _KLincremental_generic_functionGVKe Klimited_vectorVKe;
extern _KLunionGVKe KLvector_typeGVKi;
extern _KLincremental_generic_functionGVKe KemptyVKe;
extern _KLkeyword_methodGVKe KmakeVKdMM21;
D KmakeVKdMM21I (D class_, D Urest_, D size_, D fill_);
extern _KLkeyword_methodGVKe KmakeVKdMM22;
D KmakeVKdMM22I (D class_, D Urest_, D size_, D fill_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_36;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_37;
extern _KLsimple_methodGVKe KasVKdMM40;
D KasVKdMM40I (D, D);
extern _KLsimple_methodGVKe KasVKdMM41;
extern _KLsimple_methodGVKe KasVKdMM42;
D KasVKdMM42I (D class_, D collection_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_36;
static _KLsignatureAvaluesGVKi K114;
static _KLsimple_object_vectorGVKd_2 K115;
static _KLsingletonGVKd K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsimple_object_vectorGVKd_2 K118;
static _KLsignatureAvaluesGVKi K119;
static _KLsimple_object_vectorGVKd_2 K120;
static _KLsingletonGVKd K121;
static _KLkeyword_signatureAvaluesGVKi K122;
static _KLsimple_object_vectorGVKd_4 K123;
static _KLsimple_object_vectorGVKd_1 K124;
static _KLsimple_object_vectorGVKd_2 K125;
static _KLsingletonGVKd K126;
static _KLkeyword_signatureAvaluesGVKi K127;
static _KLsimple_object_vectorGVKd_1 K128;
extern _KLsimple_methodGVKe KemptyVKeMM0;
D KemptyVKeMM0I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM1;
D KemptyVKeMM1I (D class_);
static _KLpairGVKd K133;
static _KLpairGVKd K134;
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLpairGVKd K141;
static _KLpairGVKd K142;
static _KLpairGVKd K143;
static _KLpairGVKd K144;
static _KLpairGVKd K145;
static _KLsignatureAvaluesGVKi K146;
static _KLbyte_stringGVKd_5 K147;
static _KLsimple_object_vectorGVKd_1 K148;
static _KLsignatureAvaluesGVKi K149;
static _KLsimple_object_vectorGVKd_1 K150;
static _KLsignatureAvaluesGVKi K151;
static _KLsimple_object_vectorGVKd_1 K152;
static _KLsubclassGVKe K153;
extern _KLsimple_methodGVKe Klimited_vectorVKeMM0;
D Klimited_vectorVKeMM0I (D, D);
extern _KLsimple_methodGVKe Klimited_vectorVKeMM1;
D Klimited_vectorVKeMM1I (D, D);
static _KLpairGVKd K158;
static _KLpairGVKd K159;
static _KLsignatureAvaluesGVKi K160;
static _KLbyte_stringGVKd_14 K161;
static _KLsimple_object_vectorGVKd_2 K162;
static _KLunionGVKe K163;
static _KLunionGVKe K164;
static _KLsingletonGVKd K165;
static _KLsignatureAvaluesGVKi K166;
static _KLsimple_object_vectorGVKd_2 K167;
static _KLsingletonGVKd K168;
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K170;
static _KLsignatureAvaluesGVKi K171;
static _KLsimple_object_vectorGVKd_2 K172;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM0;
D Kconcrete_limited_vector_classVKiMM0I (D of_);
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLpairGVKd K178;
static _KLpairGVKd K179;
static _KLpairGVKd K180;
static _KLbyte_stringGVKd_29 K181;
static _KLsignatureAvaluesGVKi K182;
static _KLbyte_stringGVKd_53 K183;
static _KLsignatureGVKe K184;
static _KLsignatureGVKe K185;
static _KLsimple_object_vectorGVKd_2 K186;
static _KLbyte_stringGVKd_53 K187;
static _KLsignatureAvaluesGVKi K188;
static _KLkeyword_signatureAvaluesGVKi K189;
static _KLsimple_object_vectorGVKd_4 K190;
static _KLsimple_object_vectorGVKd_2 K191;
static _KLsimple_object_vectorGVKd_2 K192;
static _KLsignatureAvaluesGVKi K193;
static _KLkeyword_signatureAvaluesGVKi K194;
static _KLsimple_object_vectorGVKd_2 K195;
static _KLsimple_object_vectorGVKd_2 K196;
static _KLsimple_object_vectorGVKd_1 K197;
static _KLkeyword_signatureAvaluesGVKi K198;
static _KLsimple_object_vectorGVKd_4 K199;
static _KLsimple_object_vectorGVKd_2 K200;
static _KLsimple_object_vectorGVKd_2 K201;
static _KLsignatureAvaluesGVKi K202;
static _KLkeyword_signatureAvaluesGVKi K203;
static _KLsimple_object_vectorGVKd_4 K204;
static _KLsimple_object_vectorGVKd_2 K205;
static _KLkeyword_signatureAvaluesGVKi K206;
static _KLsimple_object_vectorGVKd_4 K207;
static _KLsimple_object_vectorGVKd_2 K208;
static _KLsimple_object_vectorGVKd_2 K209;
static _KLsimple_object_vectorGVKd_1 K210;
static _KLsignatureAvaluesGVKi K211;
static _KLbyte_stringGVKd_15 K212;
static _KLsignatureAvaluesGVKi K213;
static _KLsimple_object_vectorGVKd_2 K214;
static _KLpairGVKd K215;
static _KLsignatureAvaluesGVKi K216;
static _KLsimple_object_vectorGVKd_2 K217;
static _KLkeyword_signatureAvaluesGVKi K218;
static _KLkeyword_signatureAvaluesGVKi K219;
static _KLkeyword_signatureAvaluesGVKi K220;
static _KLsimple_object_vectorGVKd_2 K221;
static _KLsimple_object_vectorGVKd_3 K222;
static _KLsimple_object_vectorGVKd_1 K223;
static _KLkeyword_signatureAvaluesGVKi K224;
static _KLsimple_object_vectorGVKd_2 K225;
static _KLsignatureGVKe K226;
static _KLsimple_object_vectorGVKd_3 K227;
static _KLbyte_stringGVKd_39 K228;
static _KLsignatureGVKe K229;
static _KLsimple_object_vectorGVKd_2 K230;
static _KLsingletonGVKd K231;
static _KLkeyword_signatureAvaluesGVKi K232;
extern _KLsimple_methodGVKe Kobject_vector_current_elementVKi;
D Kobject_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kobject_vector_current_element_setterVKi;
D Kobject_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K237;
static _KLsignatureGVKe K238;
static _KLsimple_object_vectorGVKd_2 K239;
static _KLsignatureAvaluesGVKi K240;
static _KLsimple_object_vectorGVKd_8 K241;
static _KLkeyword_signatureGVKe K242;
static _KLsimple_object_vectorGVKd_2 K243;
static _KLsimple_object_vectorGVKd_1 K244;
static _KLsimple_object_vectorGVKd_2 K245;
static _KLsignatureAvaluesGVKi K246;
static _KLsignatureAvaluesGVKi K247;
static _KLsignatureAvaluesGVKi K248;
static _KLsignatureAvaluesGVKi K249;
extern _KLsimple_methodGVKe Kimmutable_type_vectorVKe;
D Kimmutable_type_vectorVKeI (D);
extern _KLsimple_methodGVKe Kimmutable_vectorVKe;
D Kimmutable_vectorVKeI (D);

/* Indirection variables */

static D IKJconcrete_class_ = &KJconcrete_class_;

/* Variables */

D concrete_limited_vector_classVKi = &Kconcrete_limited_vector_classVKi;
D vectorVKd = &KvectorVKd;
D immutable_vectorVKe = &Kimmutable_vectorVKe;
D immutable_type_vectorVKe = &Kimmutable_type_vectorVKe;
D limited_vectorVKe = &Klimited_vectorVKe;
D emptyVKe = &KemptyVKe;
D object_vector_current_elementVKi = &Kobject_vector_current_elementVKi;
D object_vector_current_element_setterVKi = &Kobject_vector_current_element_setterVKi;

/* Objects */

_KLsimple_methodGVKe KvectorVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K249,
  &KvectorVKdI
};

_KLsimple_methodGVKe KemptyQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K248,
  &KemptyQVKdMM2I
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_20 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_19,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_36 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_35,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kshallow_copyVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K202,
  &Kshallow_copyVKdMM5I
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_7,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K247,
  &Ktype_for_copyVKdMM5I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K246,
  &Ktype_for_copyVKdMM6I
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_18,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_37 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_36,
  (D) 9,
  &K121,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_27 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_26,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLkeyword_methodGVKe KelementVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K242,
  &key_mep_4,
  &KelementVKdMM11I,
  &K245
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_22,
  &KelementVKdMM11
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K242,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM9I,
  &K243
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_15,
  &Kelement_no_bounds_checkVKeMM9
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_19,
  &Kforward_iteration_protocolVKdMM7
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K240,
  &Kforward_iteration_protocolVKdMM7I
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_18 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_17,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_18,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K240,
  &Kbackward_iteration_protocolVKdMM2I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_12,
  &Kbackward_iteration_protocolVKdMM2
};

_KLkeyword_methodGVKe KmemberQVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K232,
  &key_mep_4,
  &KmemberQVKdMM1I,
  &K195
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_10,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kreduce1VKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K229,
  &Kreduce1VKdMM1I
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_6,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_7,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kelement_setterVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K226,
  &Kelement_setterVKdMM11I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_20,
  &Kelement_setterVKdMM11
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K226,
  &Kelement_no_bounds_check_setterVKeMM11I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_17,
  &Kelement_no_bounds_check_setterVKeMM11
};

_KLkeyword_methodGVKe KfillXVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K224,
  &key_mep_5,
  &KfillXVKdMM11I,
  &K199
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_7,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLkeyword_methodGVKe Kreplace_elementsXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K220,
  &key_mep_5,
  &Kreplace_elementsXVKdMM1I,
  &K221
};

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_10,
  &Kcopy_sequenceVKdMM2
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_11,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_12,
  &Kcopy_sequenceVKdMM1
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K219,
  &key_mep_4,
  &Kcopy_sequenceVKdMM2I,
  &K199
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K218,
  &key_mep_4,
  &Kcopy_sequenceVKdMM1I,
  &K199
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_7,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KreverseVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K202,
  &KreverseVKdMM1I
};

_KLsimple_methodGVKe Kconcatenate_asVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K216,
  &Kconcatenate_asVKdMM2I
};

_KLsimple_methodGVKe Kconcatenate_asVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K213,
  &Kconcatenate_asVKdMM1I
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_12,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_8,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KaddVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K211,
  &KaddVKdMM1I
};

_KLkeyword_methodGVKe Ksubsequence_positionVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K206,
  &key_mep_5,
  &Ksubsequence_positionVKdMM1I,
  &K207
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_7,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLsimple_object_vectorGVKd
};

_KLkeyword_methodGVKe KsortVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K203,
  &key_mep_4,
  &KsortVKdMM1I,
  &K204
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_7,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KreverseXVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K202,
  &KreverseXVKdMM1I
};

_KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K198,
  &key_mep_5,
  &Kreplace_subsequenceXVKdMM2I,
  &K199
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_7,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLsimple_object_vectorGVKd
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_13,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLkeyword_methodGVKe Kadd_newXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K194,
  &key_mep_4,
  &Kadd_newXVKdMM1I,
  &K195
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_8,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLkeyword_methodGVKe Kadd_newVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K194,
  &key_mep_4,
  &Kadd_newVKdMM1I,
  &K195
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_8,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KdimensionsVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K193,
  &KdimensionsVKdMM8I
};

_KLkeyword_methodGVKe KmakeVKdMM23 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K189,
  &key_mep_4,
  &KmakeVKdMM23I,
  &K190
};

_KLsimple_methodGVKe Krow_major_indexVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K188,
  &Krow_major_indexVKdMM1I
};

_KLsimple_methodGVKe Karef_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K185,
  &Karef_setterVKdMM1I
};

_KLsimple_methodGVKe KarefVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K184,
  &KarefVKdMM1I
};

_KLsealed_generic_functionGVKe Kconcrete_limited_vector_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K181,
  &K175,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_38 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_37,
  &KmakeVKdMM21
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_22 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_21,
  (D) 5,
  &KLsimple_object_vectorGVKd
};

_KLincremental_generic_functionGVKe Klimited_vectorVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K160,
  (D) 1,
  &K161,
  &K158,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLvector_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K153,
  &KLlimited_vector_typeGVKe
};

_KLincremental_generic_functionGVKe KemptyVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K146,
  (D) 1,
  &K147,
  &K133,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_10,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KmakeVKdMM21 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K127,
  &key_mep_4,
  &KmakeVKdMM21I,
  &K123
};

_KLkeyword_methodGVKe KmakeVKdMM22 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K122,
  &key_mep_4,
  &KmakeVKdMM22I,
  &K123
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_35 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_34,
  &KmakeVKdMM23
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_36 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_35,
  (D) 5,
  &K121
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_37 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_36,
  &KmakeVKdMM22
};

_KLsimple_methodGVKe KasVKdMM40 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K119,
  &KasVKdMM40I
};

_KLsimple_methodGVKe KasVKdMM41 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K117,
  &KasVKdMM41I
};

_KLsimple_methodGVKe KasVKdMM42 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K114,
  &KasVKdMM42I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_36 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_35,
  &KasVKdMM42
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K115,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLsimple_object_vectorGVKd
};

static _KLsingletonGVKd K116 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLvectorGVKd
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K118,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLvector_typeGVKi,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K119 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K120,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLvectorGVKd
};

static _KLsingletonGVKd K121 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_object_vectorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K122 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K124,
  &K125,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  (D) 1,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K126
};

static _KLsimple_object_vectorGVKd_2 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJfill_
};

static _KLsingletonGVKd K126 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_vectorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K127 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K128,
  &K125,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K116
};

_KLsimple_methodGVKe KemptyVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K151,
  &KemptyVKeMM0I
};

_KLsimple_methodGVKe KemptyVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K149,
  &KemptyVKeMM1I
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM0,
  &K134
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM1,
  &K135
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM2,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM3,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM4,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM5,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM6,
  &K140
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM7,
  &K141
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM8,
  &K142
};

static _KLpairGVKd K142 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM9,
  &K143
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM10,
  &K144
};

static _KLpairGVKd K144 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM11,
  &K145
};

static _KLpairGVKd K145 = {
  &KLpairGVKdW /* wrapper */,
  &KemptyVKeMM12,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K146 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K148,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_5 K147 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "empty"
};

static _KLsimple_object_vectorGVKd_1 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequence_typeGVKi
};

static _KLsignatureAvaluesGVKi K149 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K150,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K121
};

static _KLsignatureAvaluesGVKi K151 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K152,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLvector_typeGVKi
};

static _KLsubclassGVKe K153 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLvectorGVKd
};

_KLsimple_methodGVKe Klimited_vectorVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K171,
  &Klimited_vectorVKeMM0I
};

_KLsimple_methodGVKe Klimited_vectorVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K166,
  &Klimited_vectorVKeMM1I
};

static _KLpairGVKd K158 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_vectorVKeMM0,
  &K159
};

static _KLpairGVKd K159 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_vectorVKeMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K162,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_14 K161 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "limited-vector"
};

static _KLsimple_object_vectorGVKd_2 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K163,
  &K164
};

static _KLunionGVKe K163 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K165,
  &KLtypeGVKd
};

static _KLunionGVKe K164 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K165,
  &KLintegerGVKd
};

static _KLsingletonGVKd K165 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K166 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K167,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K167 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K168,
  &K164
};

static _KLsingletonGVKd K168 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K170
};

static _KLbyte_stringGVKd_14 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

static _KLsignatureAvaluesGVKi K171 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K172,
  &K152
};

static _KLsimple_object_vectorGVKd_2 K172 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &K164
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K182,
  &Kconcrete_limited_vector_classVKiMM0I
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM0,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM1,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM2,
  &K178
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM3,
  &K179
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM4,
  &K180
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_vector_classVKiMM5,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_29 K181 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "concrete-limited-vector-class"
};

static _KLsignatureAvaluesGVKi K182 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLbyte_stringGVKd_53 K183 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "Invalid number of indices for %=.  Expected 1, got %d"
};

static _KLsignatureGVKe K184 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992645,
  &KDsignature_LvectorG_typesVKi
};

static _KLsignatureGVKe K185 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992649,
  &K186
};

static _KLsimple_object_vectorGVKd_2 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLvectorGVKd
};

static _KLbyte_stringGVKd_53 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "Number of subscripts %= not equal to rank of array %="
};

static _KLsignatureAvaluesGVKi K188 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K189 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K150,
  &K191,
  &K192,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K190 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  &KPfalseVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_2 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K193 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K194 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K196,
  &K197,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

static _KLsimple_object_vectorGVKd_2 K196 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLvectorGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K197 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLkeyword_signatureAvaluesGVKi K198 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LvectorG_typesVKi,
  &K200,
  &K201,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K199 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K202 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K203 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LvectorG_typesVKi,
  &K205,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KLVKd,
  &KJstable_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K205 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJstable_
};

static _KLkeyword_signatureAvaluesGVKi K206 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LvectorG_typesVKi,
  &K208,
  &K209,
  &K210
};

static _KLsimple_object_vectorGVKd_4 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_2 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K164
};

static _KLsignatureAvaluesGVKi K211 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K196,
  &KDsignature_LvectorG_typesVKi
};

static _KLbyte_stringGVKd_15 K212 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureAvaluesGVKi K213 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 38798345,
  &K214,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K214 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLvector_typeGVKi,
  &KLvectorGVKd
};

static _KLpairGVKd K215 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K216 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 38798345,
  &K217,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K217 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K121,
  &KLsimple_object_vectorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K218 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LvectorG_typesVKi,
  &K200,
  &K201,
  &KDsignature_LvectorG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K219 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_Lsimple_object_vectorG_typesVKi,
  &K200,
  &K201,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K220 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817613,
  &K222,
  &K223,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLvectorGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_1 K223 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcount_
};

static _KLkeyword_signatureAvaluesGVKi K224 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K225,
  &K200,
  &K201,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K225 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K226 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K227
};

static _KLsimple_object_vectorGVKd_3 K227 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_39 K228 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "Reduce1 undefined for empty collections"
};

static _KLsignatureGVKe K229 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K230
};

static _KLsimple_object_vectorGVKd_2 K230 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLvectorGVKd
};

static _KLsingletonGVKd K231 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLkeyword_signatureAvaluesGVKi K232 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K186,
  &K197,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kobject_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K238,
  &Kobject_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kobject_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K237,
  &Kobject_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K237 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K227
};

static _KLsignatureGVKe K238 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K239
};

static _KLsimple_object_vectorGVKd_2 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K240 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lsimple_object_vectorG_typesVKi,
  &K241
};

static _KLsimple_object_vectorGVKd_8 K241 = {
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

static _KLkeyword_signatureGVKe K242 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K239,
  &K244,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K245 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K246 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsimple_vectorG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K247 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K248 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K249 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kimmutable_type_vectorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K249,
  &Kimmutable_type_vectorVKeI
};

_KLsimple_methodGVKe Kimmutable_vectorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K249,
  &Kimmutable_vectorVKeI
};

/* Code */

D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_) {
  D sizeF5;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19_0;
  D T20;
  D T21_0;
  D mm_wrapper_;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:812
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:812
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF5 = size_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:815
  T8 = primitive_cast_integer_as_raw(sizeF5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:815
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:815
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:816
    T6_0 = &KPempty_vectorVKi;
    T7_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T10 = SLOT_VALUE(&KLsimple_object_vectorGVKd, 2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T13 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T14 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T15 = primitive_machine_word_logand(T14,262140);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T16 = primitive_machine_word_logior(T15,1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T17 = primitive_machine_word_add_signal_overflow(5,T15);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T18 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T20 = SLOT_VALUE_INITD(T10, 2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T21_0 = T20;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T19_0 = T21_0;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    mm_wrapper_ = T19_0;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T23 = primitive_machine_word_subtract_signal_overflow(T16,4);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T24 = primitive_machine_word_shift_right(T23,2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T26 = primitive_cast_integer_as_raw(sizeF5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T25 = primitive_machine_word_shift_right(T26,2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T27 = primitive_machine_word_shift_right(T15,2);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T11 = primitive_object_allocate_filled(T18,mm_wrapper_,T24,&KPunboundVKi,T25,T27,fill_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T12 = T11;
    MV_SET_ELT(0, T11);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:818
    T28_0 = T12;
    T7_0 = T28_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:815
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:812
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kcopy_sequenceVKdMM2I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  DSINT T7;
  D T8_0;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:936
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:936
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:940
  T6 = Kcheck_start_compute_endVKeMM0I(source_, firstF5, last_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:941
  T9 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:941
  T10 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:941
  T11 = primitive_machine_word_logxor(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:941
  T12 = primitive_machine_word_subtract_signal_overflow(T9,T11);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:941
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:942
  T14 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T13);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:944
  T7 = primitive_repeated_slot_offset(T14);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:945
  T16 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:945
  T15 = primitive_machine_word_shift_right(T16,2);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:946
  T17 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:943
  primitive_replaceX(T14,T7,0,source_,2,T15,T17);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:947
  T8_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:936
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM11I (D vector_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14_0;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:836
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:840
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:840
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:842
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:842
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:843
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:845
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:842
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:836
  MV_SET_COUNT(1);
  return(T8_0);
}

D KvectorVKdI (D arguments_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:20
  T3 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:22
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:20
  MV_SET_COUNT(1);
  return(T2_0);
}

D KasVKdMM41I (D class_, D collection_) {
  D T3;
  D T4_0;
  D new_size_;
  D T6;
  D T7_0;
  D T8_0;
  D T8_1;
  D T8_2;
  D T8_3;
  D T8_4;
  D T8_5;
  D T8_6;
  D T8_7;
  D initial_state_;
  D current_element_;
  D fill_;
  D new_vector_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD index_T, index_;
  D T20T, T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29;
  _KLsimple_object_vectorGVKd_2 T30 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T32;
  D T33;
  D T34_0;
  D T35_0;
  D T36_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:407
  T3 = Kobject_classVKdI(collection_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:407
  T29 = primitive_idQ(T3,class_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:407
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:408
    T4_0 = collection_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:408
    T34_0 = T4_0;
    T28_0 = T34_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:411
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    new_size_ = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:413
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T6 = CONGRUENT_CALL2(new_size_, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:413
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:414
      T30.vector_element_[0] = &KJsize_;
      T30.vector_element_[1] = new_size_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:414
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7_0 = CONGRUENT_CALL2(class_, &T30);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:414
      T35_0 = T7_0;
      T27_0 = T35_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:417
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T8_0 = CONGRUENT_CALL1(collection_);
      T8_1 = MV_GET_ELT(1);
      T8_2 = MV_GET_ELT(2);
      T8_3 = MV_GET_ELT(3);
      T8_4 = MV_GET_ELT(4);
      T8_5 = MV_GET_ELT(5);
      T8_6 = MV_GET_ELT(6);
      T8_7 = MV_GET_ELT(7);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:417
      initial_state_ = T8_0;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:417
      current_element_ = T8_5;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:418
      fill_ = CALL2(current_element_, collection_, initial_state_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:419
      T31.vector_element_[0] = &KJsize_;
      T31.vector_element_[1] = new_size_;
      T31.vector_element_[2] = &KJfill_;
      T31.vector_element_[3] = fill_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:419
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      new_vector_ = CONGRUENT_CALL2(class_, &T31);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T13 = CONGRUENT_CALL1(collection_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      T14 = T13;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      T15 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      T16 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      T17 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      T18 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      index_T = 1;
      T20T = T14;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        index_ = index_T;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        T33 = primitive_cast_raw_as_integer(index_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        T20 = T20T;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T21 = CONGRUENT_CALL2(T33, new_size_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
          T22 = CALL3(T17, collection_, T20, T15);
          T23 = T22;
        } else {
          T23 = &KPtrueVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        if (T23 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
          T24 = CALL2(T18, collection_, T20);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:422
          CALL3(&Kelement_no_bounds_check_setterVKe, T24, new_vector_, T33);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
          T32 = primitive_machine_word_add_signal_overflow(index_,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
          T25 = CALL2(T16, collection_, T20);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
          index_T = T32;
          T20T = T25;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:421
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:424
      T26_0 = new_vector_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:424
      T36_0 = T26_0;
      T27_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:413
    T28_0 = T27_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:407
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:404
  MV_SET_COUNT(1);
  return(T28_0);
}

D KemptyQVKdMM2I (D vector_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:103
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:103
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(T2, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:102
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kshallow_copyVKdMM5I (D vector_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:84
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:85
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T2_0 = CONGRUENT_CALL2(vector_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:84
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:84
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ktype_for_copyVKdMM5I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:94
  T2_0 = &KLsimple_object_vectorGVKd;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:93
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM6I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:571
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:573
  T2_0 = Kobject_classVKdI(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:571
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_no_bounds_checkVKeMM9I (D vector_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kforward_iteration_protocolVKdMM7I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kobject_vector_current_elementVKi;
  T3_6 = &Kobject_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
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

D Kbackward_iteration_protocolVKdMM2I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kobject_vector_current_elementVKi;
  T6_6 = &Kobject_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
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

D KmemberQVKdMM1I (D value_, D collection_, D Urest_, D test_) {
  D T5;
  D n_;
  DADDR T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D mm_wrapper_;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  D T29;
  DWORD indexF30T, indexF30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D Utmp_;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  DWORD indexF45T, indexF45;
  D T46;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:349
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:349
  n_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
  T26 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
  T13 = primitive_idQ(test_,&KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    T7 = primitive_cast_pointer_as_raw(value_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    T8 = primitive_machine_word_logand(T7,3);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    T9 = primitive_machine_word_equalQ(T8,0);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
      T14 = primitive_element(value_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
      mm_wrapper_ = T14;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
      T16 = SLOT_VALUE_INITD(mm_wrapper_, 1);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
      T17 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
      T18 = primitive_machine_word_logbitQ(2,T17);
      T10 = T18;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
    T19 = primitive_not(T10);
    T11 = T19;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
    indexF30T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
      indexF30 = indexF30T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
      T31 = primitive_cast_raw_as_integer(indexF30);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
      T27 = primitive_machine_word_equalQ(indexF30,T26);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
        T20 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T25 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T21 = CONGRUENT_CALL3(collection_, T31, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
        T22 = primitive_idQ(T21,value_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
          T23 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T24 = T23;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
          T28 = primitive_machine_word_add_signal_overflow(indexF30,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
          indexF30T = T28;
          goto L0;
          T24 = T29;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
        T25 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:352
    T12_0 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
    indexF45T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
      indexF45 = indexF45T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
      T46 = primitive_cast_raw_as_integer(indexF45);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:356
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T32 = CONGRUENT_CALL1(collection_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:356
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T33 = CONGRUENT_CALL2(T46, T32);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:356
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:356
        T40 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T41 = T40;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        T34 = test_;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T35 = CONGRUENT_CALL3(collection_, T46, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        T36 = CALL2(T34, value_, T35);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        if (T36 != &KPfalseVKi) {
          Utmp_ = &KPtrueVKi;
        } else {
          Utmp_ = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        if (Utmp_ != &KPfalseVKi) {
          T42 = Utmp_;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
          T38 = T42;
          MV_SET_ELT(0, T42);
          MV_SET_COUNT(1);
          T39 = T38;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
          T43 = primitive_machine_word_add_signal_overflow(indexF45,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
          indexF45T = T43;
          goto L1;
          T39 = T44;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
        T41 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:356
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:357
    T12_0 = T41;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:345
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kreduce1VKdMM1I (D fn_, D collection_) {
  D T3;
  D T4;
  D T5;
  D T6;
  DWORD index_T, index_;
  D result_T, result_;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13_0;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T15_0;
  DWORD T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:493
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:495
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:495
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:497
    T14.vector_element_[0] = &KJformat_string_;
    T14.vector_element_[1] = &K228;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:497
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLempty_collection_errorGVKi, &T14);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:497
    T15_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
    T13_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T5 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:502
    CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
    T6 = CONGRUENT_CALL3(collection_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
    index_T = 5;
    result_T = T6;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      T17 = primitive_cast_raw_as_integer(index_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      result_ = result_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T9 = CONGRUENT_CALL2(T17, T5);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
        T16 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:502
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T10 = CONGRUENT_CALL3(collection_, T17, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:502
        T11 = CALL2(fn_, result_, T10);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
        index_T = T16;
        result_T = T11;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:504
      T12_0 = result_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:501
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:495
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:493
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kelement_setterVKdMM11I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM11I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  MV_SET_COUNT(1);
  return(T4_0);
}

D KfillXVKdMM11I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D T8_0;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:874
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:874
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:878
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:880
  T10 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:880
  T9 = primitive_machine_word_shift_right(T10,2);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:881
  T11 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:881
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:881
  T13 = primitive_machine_word_logxor(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:881
  T14 = primitive_machine_word_subtract_signal_overflow(T11,T13);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:881
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:879
  primitive_fillX(target_,2,T9,T15,value_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:882
  T8_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:874
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kreplace_elementsXVKdMM1I (D vector_, D predicate_, D newUvalueUfn_, D Urest_, D count_) {
  D T6;
  D T7;
  D T8;
  DWORD key_T, key_;
  D T10;
  D thisUelement_;
  D T12;
  D T13;
  D T14_0;
  D countF15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:204
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
    T18 = count_;
    T7 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
    T19 = T6;
    T7 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:208
  countF15 = T7;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T8 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
  key_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    T26 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T10 = CONGRUENT_CALL2(T26, T8);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:211
      T16 = countF15;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:211
      T20 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:211
      T21 = primitive_machine_word_equalQ(T20,1);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:212
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        thisUelement_ = CONGRUENT_CALL3(vector_, T26, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:213
        T12 = CALL1(predicate_, thisUelement_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:213
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:214
          T13 = CALL1(newUvalueUfn_, thisUelement_);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:214
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
          CONGRUENT_CALL3(T13, vector_, T26);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:215
          T17 = countF15;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:215
          T22 = primitive_cast_integer_as_raw(T17);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:215
          T23 = primitive_machine_word_subtract_signal_overflow(T22,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:215
          T24 = primitive_cast_raw_as_integer(T23);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:215
          countF15 = T24;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:213
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
        T25 = primitive_machine_word_add_signal_overflow(key_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
        key_T = T25;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:210
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:219
  T14_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:204
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kcopy_sequenceVKdMM1I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  D T7;
  D T8_0;
  D fill_;
  D T10;
  D T11;
  D result_;
  DWORD j_T, j_;
  DWORD i_T, i_;
  D T15;
  D T16_0;
  D T17_0;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_2 T24 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T25 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:259
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:263
  T6 = Kcheck_start_compute_endVKeMM0I(source_, firstF5, last_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:264
  T18 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:264
  T19 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:264
  T20 = primitive_machine_word_logxor(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:264
  T21 = primitive_machine_word_subtract_signal_overflow(T18,T20);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:264
  T22 = primitive_cast_raw_as_integer(T21);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:265
  T23 = primitive_machine_word_less_thanQ(1,T21);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:265
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:268
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    fill_ = CONGRUENT_CALL3(source_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:270
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T10 = CONGRUENT_CALL1(source_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:270
    T25.vector_element_[0] = &KJsize_;
    T25.vector_element_[1] = T22;
    T25.vector_element_[2] = &KJfill_;
    T25.vector_element_[3] = fill_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:270
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T11 = CONGRUENT_CALL2(T10, &T25);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:269
    result_ = T11;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
    T30 = primitive_cast_integer_as_raw(firstF5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
    j_T = 1;
    i_T = T30;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      j_ = j_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      T27 = primitive_cast_raw_as_integer(j_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      T31 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      T26 = primitive_machine_word_less_thanQ(j_,T21);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:274
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T15 = CONGRUENT_CALL3(source_, T31, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:274
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
        CONGRUENT_CALL3(T15, result_, T27);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
        T28 = primitive_machine_word_add_signal_overflow(j_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
        T29 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
        j_T = T28;
        i_T = T29;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:272
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:277
    T16_0 = result_;
    T17_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:266
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T7 = CONGRUENT_CALL1(source_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:266
    T24.vector_element_[0] = &KJsize_;
    T24.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:266
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8_0 = CONGRUENT_CALL2(T7, &T24);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:266
    T32_0 = T8_0;
    T17_0 = T32_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:265
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:259
  MV_SET_COUNT(1);
  return(T17_0);
}

D KreverseVKdMM1I (D vector_) {
  D size_;
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D new_vector_;
  D T10;
  DWORD from_T, from_;
  D to_T, to_;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D T17_0;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T20;
  D T21;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:168
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:169
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:169
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:170
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T4 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:170
    T18.vector_element_[0] = &KJsize_;
    T18.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:170
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5_0 = CONGRUENT_CALL2(T4, &T18);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:170
    T22_0 = T5_0;
    T17_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:173
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T6 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:173
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T7 = CONGRUENT_CALL3(vector_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:173
    T19.vector_element_[0] = &KJsize_;
    T19.vector_element_[1] = size_;
    T19.vector_element_[2] = &KJfill_;
    T19.vector_element_[3] = T7;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:173
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(T6, &T19);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:172
    new_vector_ = T8;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T10 = CONGRUENT_CALL2(size_, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
    from_T = 1;
    to_T = T10;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      from_ = from_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      T21 = primitive_cast_raw_as_integer(from_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      to_ = to_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T13 = CONGRUENT_CALL2(to_, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      if (T13 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:176
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T14 = CONGRUENT_CALL3(vector_, T21, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:176
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
        CONGRUENT_CALL3(T14, new_vector_, to_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
        T20 = primitive_machine_word_add_signal_overflow(from_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T15 = CONGRUENT_CALL2(to_, (D) -3);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
        from_T = T20;
        to_T = T15;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:175
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:179
    T16_0 = new_vector_;
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:167
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kconcatenate_asVKdMM2I (D class_, D vector_, D more_vectors_) {
  D returnPexit_18_;
  D T5;
  D T6;
  DWORD T7T, T7;
  D T8;
  D sz_;
  D T10;
  D T11;
  DWORD i_T, i_;
  D T13;
  D T14;
  D T15;
  DSINT T16;
  DWORD T17T, T17;
  D v_;
  DSINT T19;
  DWORD T20;
  DSINT T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26_0;
  D T27;
  D total_sz_;
  D T29;
  D T30;
  D T31;
  D num_non_empty_;
  D T33;
  D T34;
  DSINT result_index_;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  _KLsimple_object_vectorGVKd_1 T48 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DWORD T60;
  D T61;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  D T67;
  DWORD T68;
  D T69;
  D result_;
  DWORD T71;
  DWORD T72;
  D T73;
  D T74;
  D T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:890
  T27 = primitive_copy_vector(more_vectors_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:893
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:894
  T38 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:894
  total_sz_ = T38;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  T31 = total_sz_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  T39 = primitive_cast_integer_as_raw(T31);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  T40 = primitive_machine_word_equalQ(T39,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  if (T40 != &KPfalseVKi) {
    T6 = (D) 1;
  } else {
    T6 = (D) 5;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:895
  num_non_empty_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
  T41 = SLOT_VALUE_INITD(T27, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
  T42 = primitive_cast_integer_as_raw(T41);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
  T7T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
    T7 = T7T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
    T43 = primitive_machine_word_equalQ(T7,T42);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
    if (T43 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
      T44 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, T7);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
      T45 = primitive_instanceQ(T44,&KLsimple_object_vectorGVKd);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
      if (T45 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
        MIEP_CALL_PROLOG(&K215);
        T46 = Kconcatenate_asVKdMM1I(class_, vector_, T27);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
        T47 = T46;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
        T48.vector_element_[0] = T47;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:893
        T49 = MV_SET_REST_AT(&T48, 0);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:893
        T25_0 = T49;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:899
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T8 = CONGRUENT_CALL1(T44);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:898
      sz_ = T8;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:900
      T50 = primitive_cast_integer_as_raw(sz_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:900
      T51 = primitive_machine_word_equalQ(T50,1);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:900
      if (T51 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T30 = total_sz_;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T52 = primitive_cast_integer_as_raw(T30);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T53 = primitive_cast_integer_as_raw(sz_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T54 = primitive_machine_word_logxor(T53,1);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T55 = primitive_machine_word_add_signal_overflow(T52,T54);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        T56 = primitive_cast_raw_as_integer(T55);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:901
        total_sz_ = T56;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:902
        T34 = num_non_empty_;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:902
        T57 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:902
        T58 = primitive_machine_word_add_signal_overflow(T57,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:902
        T59 = primitive_cast_raw_as_integer(T58);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:902
        num_non_empty_ = T59;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:900
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
      T60 = primitive_machine_word_add_signal_overflow(T7,4);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
      T7T = T60;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:897
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
  T33 = num_non_empty_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
  T61 = primitive_idQ(T33,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
  if (T61 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:907
    T10 = &KPempty_vectorVKi;
    MV_SET_ELT(0, &KPempty_vectorVKi);
    MV_SET_COUNT(1);
    T24 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
    T62 = primitive_idQ(T33,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
    if (T62 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:908
      T63 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:908
      T64 = primitive_machine_word_less_thanQ(1,T63);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:908
      if (T64 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:908
        T11 = vector_;
        MV_SET_ELT(0, vector_);
        MV_SET_COUNT(1);
        T15 = T11;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
        i_T = 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          i_ = i_T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          T66 = primitive_cast_raw_as_integer(i_);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          T65 = primitive_machine_word_less_thanQ(i_,T42);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          if (T65 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:911
            T67 = KelementVKdMM11I(T27, T66, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:911
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T13 = CONGRUENT_CALL1(T67);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:911
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T14 = CONGRUENT_CALL2(T13, (D) 1);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
            if (T14 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
              T68 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
              i_T = T68;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:911
          T69 = KelementVKdMM11I(T27, T66, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:910
        T15 = T69;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:908
      T23 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:914
      T29 = total_sz_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:914
      result_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T29);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:915
      T72 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:915
      T71 = primitive_machine_word_shift_right(T72,2);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:917
      T16 = primitive_repeated_slot_offset(result_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:916
      primitive_replaceX(result_,T16,0,vector_,2,0,T71);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:916
      result_index_ = T71;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
      T17T = 1;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
        T17 = T17T;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
        T73 = primitive_machine_word_equalQ(T17,T42);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
        if (T73 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
          T74 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, T17);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
          v_ = T74;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:921
          T75 = SLOT_VALUE_INITD(v_, 0);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:921
          T77 = primitive_cast_integer_as_raw(T75);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:921
          T76 = primitive_machine_word_shift_right(T77,2);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:923
          T19 = primitive_repeated_slot_offset(result_);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:922
          T37 = result_index_;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:922
          primitive_replaceX(result_,T19,T37,v_,2,0,T76);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:925
          T36 = result_index_;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:925
          T20 = primitive_machine_word_add(T36,T76);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:925
          T21 = T20;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:925
          result_index_ = T21;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
          T78 = primitive_machine_word_add_signal_overflow(T17,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
          T17T = T78;
          goto L3;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:920
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:927
      T22 = result_;
      MV_SET_ELT(0, result_);
      MV_SET_COUNT(1);
      T23 = T22;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
    T24 = T23;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:906
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:893
  T25_0 = T24;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:893
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:890
  T26_0 = T25_0;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:890
  MV_SET_COUNT(1);
  return(T26_0);
}

D Kconcatenate_asVKdMM1I (D type_, D vector_, D more_vectors_) {
  D returnPexit_17_;
  D T5;
  D T6;
  D total_szF7;
  D T8;
  DWORD T9T, T9;
  D T10;
  D sz_;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD iF16T, iF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D result_;
  D T22;
  DWORD iF23T, iF23;
  D T24;
  D T25;
  DWORD T26T, T26;
  D v_;
  D T28;
  DWORD iF29T, iF29;
  DWORD j_T, j_;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39_0;
  D T40_0;
  D T41;
  D T42;
  D total_szF43;
  D T44;
  D T45;
  D T46;
  D num_non_empty_;
  D T48;
  D T49;
  D fill_;
  D T51;
  D T52;
  D result_index_;
  D T54;
  D T55;
  DWORD T56;
  D T57;
  D T58;
  DWORD T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  _KLsimple_object_vectorGVKd_1 T71 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T72;
  DWORD T73;
  D T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  D T79;
  DWORD T80;
  DWORD T81;
  D T82;
  D T83;
  DWORD T84;
  D T85;
  D T86;
  D T87_0;
  D T88;
  D T89;
  D T90;
  DWORD T91;
  D T92;
  _KLsimple_object_vectorGVKd_4 T93 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T94;
  D T95;
  D T96;
  D T97;
  DWORD T98;
  D T99;
  DWORD T100;
  DWORD T101;
  D T102;
  DWORD T103;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:435
  T42 = primitive_copy_vector(more_vectors_);
  T41 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:439
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T6 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:439
  total_szF7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:439
  total_szF43 = total_szF7;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  T46 = total_szF43;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  T56 = primitive_cast_integer_as_raw(T46);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  T57 = primitive_machine_word_equalQ(T56,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  if (T57 != &KPfalseVKi) {
    T8 = (D) 1;
  } else {
    T8 = (D) 5;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:440
  num_non_empty_ = T8;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:441
  fill_ = &Kunsupplied_objectVKi;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
  T58 = SLOT_VALUE_INITD(T42, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
  T59 = primitive_cast_integer_as_raw(T58);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
  T9T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
    T60 = primitive_machine_word_equalQ(T9,T59);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
    if (T60 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
      T61 = REPEATED_D_SLOT_VALUE_TAGGED(T42, 1, T9);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:444
      T62 = primitive_instanceQ(T61,type_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:444
      if (T62 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
        T64 = primitive_idQ(T41,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
        if (T64 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          T67 = KerrorVKdMM1I(&K212, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          T68 = T67;
          T70 = T68;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          T65 = SLOT_VALUE_INITD(T41, 0);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          T66 = SLOT_VALUE_INITD(T41, 1);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          MEP_CALL_PROLOG(T65, T66, 3);
          T63 = MEP_CALL3(T65, type_, vector_, T42);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
          T69 = T63;
          T70 = T69;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:445
        T71.vector_element_[0] = T70;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:438
        T72 = MV_SET_REST_AT(&T71, 0);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:438
        T39_0 = T72;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:444
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:447
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T10 = CONGRUENT_CALL1(T61);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:444
      sz_ = T10;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:448
      T73 = primitive_cast_integer_as_raw(sz_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:448
      T74 = primitive_machine_word_equalQ(T73,1);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:448
      if (T74 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T45 = total_szF43;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T75 = primitive_cast_integer_as_raw(T45);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T76 = primitive_cast_integer_as_raw(sz_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T77 = primitive_machine_word_logxor(T76,1);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T78 = primitive_machine_word_add_signal_overflow(T75,T77);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        T79 = primitive_cast_raw_as_integer(T78);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:449
        total_szF43 = T79;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:450
        T49 = num_non_empty_;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:450
        T80 = primitive_cast_integer_as_raw(T49);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:450
        T81 = primitive_machine_word_add_signal_overflow(T80,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:450
        T82 = primitive_cast_raw_as_integer(T81);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:450
        num_non_empty_ = T82;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:451
        T52 = fill_;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:451
        T83 = primitive_idQ(T52,&Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:451
        if (T83 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:452
          T12 = CALL2(&KelementVKd, T61, (D) 1);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:452
          fill_ = T12;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:451
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:448
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
      T84 = primitive_machine_word_add_signal_overflow(T9,4);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
      T9T = T84;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:443
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
  T48 = num_non_empty_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
  T85 = primitive_idQ(T48,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
  if (T85 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:459
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(type_, &KPempty_vectorVKi);
    T38 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
    T86 = primitive_idQ(T48,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
    if (T86 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:460
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T14 = CONGRUENT_CALL1(vector_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:460
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T87_0 = CONGRUENT_CALL2((D) 1, T14);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:460
      T88 = T87_0;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:460
      if (T88 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:461
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T15 = CONGRUENT_CALL2(type_, vector_);
        T20 = T15;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
        iF16T = 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
          iF16 = iF16T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
          T89 = primitive_machine_word_less_thanQ(iF16,T59);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
          if (T89 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:464
            T90 = REPEATED_D_SLOT_VALUE_TAGGED(T42, 1, iF16);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:464
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T17 = CONGRUENT_CALL1(T90);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:464
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T18 = CONGRUENT_CALL2(T17, (D) 1);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
            if (T18 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
              T91 = primitive_machine_word_add_signal_overflow(iF16,4);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
              iF16T = T91;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:466
          T92 = REPEATED_D_SLOT_VALUE_TAGGED(T42, 1, iF16);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:466
          CONGRUENT_CALL_PROLOG(&KasVKd, 2);
          T19 = CONGRUENT_CALL2(type_, T92);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:463
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:460
      T37 = T20;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:470
      T44 = total_szF43;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:470
      T51 = fill_;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:470
      T93.vector_element_[0] = &KJsize_;
      T93.vector_element_[1] = T44;
      T93.vector_element_[2] = &KJfill_;
      T93.vector_element_[3] = T51;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:470
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      result_ = CONGRUENT_CALL2(type_, &T93);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T22 = CONGRUENT_CALL1(vector_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
      iF23T = 1;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
        iF23 = iF23T;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
        T95 = primitive_cast_raw_as_integer(iF23);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(T95, T22);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:472
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T25 = CONGRUENT_CALL3(vector_, T95, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:472
          CALL3(&Kelement_no_bounds_check_setterVKe, T25, result_, T95);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
          T94 = primitive_machine_word_add_signal_overflow(iF23,4);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
          iF23T = T94;
          goto L3;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:474
        result_index_ = T95;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
        T26T = 1;
      L4: ;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
          T26 = T26T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
          T96 = primitive_machine_word_equalQ(T26,T59);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
          if (T96 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
            T97 = REPEATED_D_SLOT_VALUE_TAGGED(T42, 1, T26);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
            v_ = T97;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T28 = CONGRUENT_CALL1(v_);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
            T55 = result_index_;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
            T101 = primitive_cast_integer_as_raw(T55);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
            iF29T = 1;
            j_T = T101;
          L5: ;
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              iF29 = iF29T;
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              T99 = primitive_cast_raw_as_integer(iF29);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              j_ = j_T;
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              T102 = primitive_cast_raw_as_integer(j_);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              CONGRUENT_CALL_PROLOG(&KLVKd, 2);
              T31 = CONGRUENT_CALL2(T99, T28);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              if (T31 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:478
                CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
                T32 = CONGRUENT_CALL3(v_, T99, &KPempty_vectorVKi);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:478
                CALL3(&Kelement_no_bounds_check_setterVKe, T32, result_, T102);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
                T98 = primitive_machine_word_add_signal_overflow(iF29,4);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
                T100 = primitive_machine_word_add_signal_overflow(j_,4);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
                iF29T = T98;
                j_T = T100;
                goto L5;
              }
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:476
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:480
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T33 = CONGRUENT_CALL1(v_);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:480
            T54 = result_index_;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:480
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T34 = CONGRUENT_CALL2(T54, T33);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:480
            T35 = T34;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:480
            result_index_ = T35;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
            T103 = primitive_machine_word_add_signal_overflow(T26,4);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
            T26T = T103;
            goto L4;
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:475
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:471
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:483
      T36 = result_;
      MV_SET_ELT(0, result_);
      MV_SET_COUNT(1);
      T37 = T36;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
    T38 = T37;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:438
  T39_0 = T38;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:435
  T40_0 = T39_0;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:435
  MV_SET_COUNT(1);
  return(T40_0);
}

D KaddVKdMM1I (D vector_, D object_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D new_vector_;
  D T8;
  DWORD i_T, i_;
  D T10;
  D T11;
  D T12;
  D T13_0;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:134
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T3 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:134
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:134
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T5 = CONGRUENT_CALL2(T4, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:134
  T14.vector_element_[0] = &KJsize_;
  T14.vector_element_[1] = T5;
  T14.vector_element_[2] = &KJfill_;
  T14.vector_element_[3] = object_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:134
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(T3, &T14);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:133
  new_vector_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T8 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
    T16 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T10 = CONGRUENT_CALL2(T16, T8);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:137
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      T11 = CONGRUENT_CALL3(vector_, T16, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:137
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T11, new_vector_, T16);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:139
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T12 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:139
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(object_, new_vector_, T12);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:141
  T13_0 = new_vector_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:132
  MV_SET_COUNT(1);
  return(T13_0);
}

D Ksubsequence_positionVKdMM1I (D big_, D pat_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  D sz_;
  D pat_sz_;
  D ch_;
  DWORD keyF11T, keyF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19_0;
  D ch1_;
  D ch2_;
  D T22;
  DWORD keyF23T, keyF23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T34_0;
  D T35_0;
  D T36_0;
  D T37_0;
  D T38_0;
  D countF39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48_0;
  D T49;
  DWORD T50;
  DWORD T51;
  D T52;
  D T53;
  D T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  D T59;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64;
  D T65;
  DWORD T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  D indexF87;
  D big_keyF88;
  D pat_keyF89;
  D countF90;
  D T91;
  D indexF92;
  D big_keyF93;
  D pat_keyF94;
  D countF95;
  D T96;
  D indexF97T, indexF97;
  D big_keyF98T, big_keyF98;
  D pat_keyF99T, pat_keyF99;
  D countF100T, countF100;
  D T101_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:285
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:285
  primitive_type_check(count_, &KLintegerGVKd);
  countF7 = count_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:285
  countF39 = countF7;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:289
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  sz_ = CONGRUENT_CALL1(big_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:290
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  pat_sz_ = CONGRUENT_CALL1(pat_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
  T44 = primitive_idQ(pat_sz_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
  if (T44 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:294
    T43 = countF39;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:294
    T45 = primitive_cast_integer_as_raw(T43);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:294
    T46 = primitive_machine_word_subtract_signal_overflow(T45,4);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:294
    T47 = primitive_cast_raw_as_integer(T46);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:294
    T48_0 = T47;
    T38_0 = T48_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
    T49 = primitive_idQ(pat_sz_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:296
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      ch_ = CONGRUENT_CALL3(pat_, (D) 1, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
      keyF11T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        keyF11 = keyF11T;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        T56 = primitive_cast_raw_as_integer(keyF11);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T12 = CONGRUENT_CALL2(T56, sz_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T13 = CONGRUENT_CALL3(big_, T56, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
          T14 = CALL2(testF6, T13, ch_);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
          if (T14 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T42 = countF39;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T50 = primitive_cast_integer_as_raw(T42);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T51 = primitive_machine_word_subtract_signal_overflow(T50,4);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T52 = primitive_cast_raw_as_integer(T51);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            countF39 = T52;
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T54 = primitive_machine_word_less_thanQ(1,T51);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
            T53 = primitive_not(T54);
            T15 = T53;
          } else {
            T15 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:298
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
          if (T15 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
            T55 = primitive_machine_word_add_signal_overflow(keyF11,4);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
            keyF11T = T55;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:300
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T16 = CONGRUENT_CALL2(T56, sz_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:300
        if (T16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:300
          T17_0 = T56;
          T19_0 = T17_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:300
          T18_0 = &KPfalseVKi;
          T19_0 = T18_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:300
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:297
      T37_0 = T19_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
      T57 = primitive_idQ(pat_sz_,(D) 9);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:303
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        ch1_ = CONGRUENT_CALL3(pat_, (D) 1, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:304
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        ch2_ = CONGRUENT_CALL3(pat_, (D) 5, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T22 = CONGRUENT_CALL2(sz_, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
        keyF23T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
          keyF23 = keyF23T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
          T60 = primitive_cast_raw_as_integer(keyF23);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T24 = CONGRUENT_CALL2(T60, T22);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
          if (T24 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T25 = CONGRUENT_CALL3(big_, T60, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            T26 = CALL2(testF6, T25, ch1_);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            if (T26 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
              T58 = primitive_machine_word_add_signal_overflow(keyF23,4);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
              T59 = primitive_cast_raw_as_integer(T58);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
              CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
              T27 = CONGRUENT_CALL3(big_, T59, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
              T28 = CALL2(testF6, T27, ch2_);
              T29 = T28;
            } else {
              T29 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            if (T29 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T41 = countF39;
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T61 = primitive_cast_integer_as_raw(T41);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T62 = primitive_machine_word_subtract_signal_overflow(T61,4);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T63 = primitive_cast_raw_as_integer(T62);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              countF39 = T63;
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T65 = primitive_machine_word_less_thanQ(1,T62);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:307
              T64 = primitive_not(T65);
              T30 = T64;
            } else {
              T30 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:306
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
            if (T30 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
              T66 = primitive_machine_word_add_signal_overflow(keyF23,4);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
              keyF23T = T66;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T31 = CONGRUENT_CALL2(sz_, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T32 = CONGRUENT_CALL2(T60, T31);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
          if (T32 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
            T33_0 = T60;
            T35_0 = T33_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
            T34_0 = &KPfalseVKi;
            T35_0 = T34_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:309
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:305
        T36_0 = T35_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:326
        T40 = countF39;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
        indexF97T = (D) 1;
        big_keyF98T = (D) 1;
        pat_keyF99T = (D) 1;
        countF100T = T40;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
          indexF97 = indexF97T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
          big_keyF98 = big_keyF98T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
          pat_keyF99 = pat_keyF99T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
          countF100 = countF100T;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
          indexF92 = indexF97;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
          big_keyF93 = big_keyF98;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
          pat_keyF94 = pat_keyF99;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
          countF95 = countF100;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
          indexF87 = indexF92;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
          big_keyF88 = big_keyF93;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
          pat_keyF89 = pat_keyF94;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
          countF90 = countF95;
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:314
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T85 = CONGRUENT_CALL2(pat_keyF89, pat_sz_);
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
          if (T85 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:318
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T73 = CONGRUENT_CALL2(big_keyF88, sz_);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
            if (T73 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:319
              T74 = &KPfalseVKi;
              MV_SET_ELT(0, &KPfalseVKi);
              MV_SET_COUNT(1);
              T83 = T74;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:320
              CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
              T75 = CONGRUENT_CALL3(big_, big_keyF88, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:320
              CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
              T76 = CONGRUENT_CALL3(pat_, pat_keyF89, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:320
              T77 = CALL2(testF6, T75, T76);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
              if (T77 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T78 = CONGRUENT_CALL2(big_keyF88, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T79 = CONGRUENT_CALL2(pat_keyF89, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:321
                indexF97T = indexF87;
                big_keyF98T = T78;
                pat_keyF99T = T79;
                countF100T = countF90;
                goto L2;
                T82 = T91;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T80 = CONGRUENT_CALL2(indexF87, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T81 = CONGRUENT_CALL2(indexF87, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/vector.dylan:323
                indexF97T = T80;
                big_keyF98T = T81;
                pat_keyF99T = (D) 1;
                countF100T = countF90;
                goto L2;
                T82 = T96;
              }
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
              T83 = T82;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
            T84 = T83;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:315
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T67 = CONGRUENT_CALL2(countF90, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:315
            if (T67 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:315
              T68 = indexF87;
              MV_SET_ELT(0, indexF87);
              MV_SET_COUNT(1);
              T72 = T68;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T69 = CONGRUENT_CALL2(indexF87, (D) 5);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T70 = CONGRUENT_CALL2(indexF87, (D) 5);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
              CONGRUENT_CALL_PROLOG(&K_VKd, 2);
              T71 = CONGRUENT_CALL2(countF90, (D) 5);
              // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
              indexF97T = T69;
              big_keyF98T = T70;
              pat_keyF99T = (D) 1;
              countF100T = T71;
              goto L2;
              T72 = T86;
            }
            // /opt/opendylan-2013.1/sources/dylan/vector.dylan:315
            T84 = T72;
          }
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
          // /opt/opendylan-2013.1/sources/dylan/vector.dylan:316
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:313
        T101_0 = T84;
        T36_0 = T101_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
      T37_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
    T38_0 = T37_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:285
  MV_SET_COUNT(1);
  return(T38_0);
}

D KsortVKdMM1I (D sequence_, D Urest_, D test_, D stable_) {
  D T5;
  D T6_0;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:335
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:337
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T5 = CONGRUENT_CALL2(sequence_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:337
  T7.vector_element_[0] = &KJtest_;
  T7.vector_element_[1] = test_;
  T7.vector_element_[2] = &KJstable_;
  T7.vector_element_[3] = stable_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:337
  CONGRUENT_CALL_PROLOG(&KsortXVKd, 2);
  T6_0 = CONGRUENT_CALL2(T5, &T7);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:335
  MV_SET_COUNT(1);
  return(T6_0);
}

D KreverseXVKdMM1I (D vector_) {
  D T2;
  D stopping_index_;
  D T4;
  D T5;
  DWORD index_T, index_;
  DWORD size_index_T, size_index_;
  D T8;
  D tmp_;
  D T10;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:149
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:150
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:150
  stopping_index_ = CALL2(&KfloorSVKd, T2, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
  T12 = primitive_cast_integer_as_raw(stopping_index_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:153
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:153
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T5 = CONGRUENT_CALL2(T4, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
  T8 = T5;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
  T17 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
  index_T = 1;
  size_index_T = T17;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    T14 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    size_index_ = size_index_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    T18 = primitive_cast_raw_as_integer(size_index_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    T13 = primitive_machine_word_less_thanQ(index_,T12);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:154
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      tmp_ = CONGRUENT_CALL3(vector_, T14, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:155
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      T10 = CONGRUENT_CALL3(vector_, T18, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:155
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T10, vector_, T14);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:156
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(tmp_, vector_, T18);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
      T15 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
      T16 = primitive_machine_word_add_signal_overflow(size_index_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
      index_T = T15;
      size_index_T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:159
  T11_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:149
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kreplace_subsequenceXVKdMM2I (D target_, D insert_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D target_size_;
  D T9;
  D insert_size_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD indexF18T, indexF18;
  D T19T, T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25;
  D new_target_;
  DWORD indexF27T, indexF27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  DWORD indexF35T, indexF35;
  D T36T, T36;
  D T37;
  D T38;
  D T39;
  D T40;
  DWORD from_T, from_;
  D to_T, to_;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47_0;
  D T48_0;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  D T54;
  DWORD T55;
  D T56;
  DWORD T57;
  D T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  D T66;
  _KLsimple_object_vectorGVKd_2 T67 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  D T72;
  DWORD T73;
  D T74;
  D T75;
  DWORD T76;
  D T77;
  DWORD T78;
  D T79;
  DWORD T80;
  DWORD T81;
  D T82;
  DWORD T83;
  D T84;
  D T85;
  DWORD T86;
  D T87_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:515
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:515
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:519
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:519
  target_size_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:520
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T9 = CONGRUENT_CALL1(insert_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:520
  insert_size_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:521
  T11 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:522
  T49 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:522
  T50 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:522
  T51 = primitive_machine_word_logxor(T50,1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:522
  T52 = primitive_machine_word_subtract_signal_overflow(T49,T51);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:524
  T53 = primitive_cast_integer_as_raw(insert_size_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:524
  T54 = primitive_machine_word_equalQ(T52,T53);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:524
  if (T54 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T12 = CONGRUENT_CALL1(insert_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T13 = T12;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T14 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T15 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T16 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T17 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    T57 = primitive_cast_integer_as_raw(startF6);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    indexF18T = T57;
    T19T = T13;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      indexF18 = indexF18T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      T58 = primitive_cast_raw_as_integer(indexF18);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      T19 = T19T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      T55 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      T56 = primitive_machine_word_less_thanQ(indexF18,T55);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      if (T56 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
        T20 = CALL3(T16, insert_, T19, T14);
        T21 = T20;
      } else {
        T21 = &KPtrueVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
        T22 = CALL2(T17, insert_, T19);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:527
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
        CONGRUENT_CALL3(T22, target_, T58);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
        T59 = primitive_machine_word_add_signal_overflow(indexF18,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
        T23 = CALL2(T15, insert_, T19);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
        indexF18T = T59;
        T19T = T23;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:525
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:529
    T24_0 = target_;
    T48_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T60 = primitive_cast_integer_as_raw(target_size_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T61 = primitive_machine_word_logxor(T52,1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T62 = primitive_machine_word_subtract_signal_overflow(T60,T61);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T63 = primitive_cast_integer_as_raw(insert_size_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T64 = primitive_machine_word_logxor(T63,1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T65 = primitive_machine_word_add_signal_overflow(T62,T64);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:531
    T66 = primitive_cast_raw_as_integer(T65);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:532
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T25 = CONGRUENT_CALL1(target_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:532
    T67.vector_element_[0] = &KJsize_;
    T67.vector_element_[1] = T66;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:532
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    new_target_ = CONGRUENT_CALL2(T25, &T67);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:533
    T68 = primitive_cast_integer_as_raw(startF6);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:533
    T69 = primitive_cast_integer_as_raw(insert_size_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:533
    T70 = primitive_machine_word_logxor(T69,1);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:533
    T71 = primitive_machine_word_add_signal_overflow(T68,T70);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:533
    T72 = primitive_cast_raw_as_integer(T71);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
    indexF27T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      indexF27 = indexF27T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      T75 = primitive_cast_raw_as_integer(indexF27);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      T73 = primitive_cast_integer_as_raw(startF6);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      T74 = primitive_machine_word_less_thanQ(indexF27,T73);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      if (T74 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:535
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T28 = CONGRUENT_CALL3(target_, T75, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:535
        CALL3(&Kelement_no_bounds_check_setterVKe, T28, new_target_, T75);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
        T76 = primitive_machine_word_add_signal_overflow(indexF27,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
        indexF27T = T76;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:534
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T29 = CONGRUENT_CALL1(insert_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T30 = T29;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T31 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T32 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T33 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T34 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    T78 = primitive_cast_integer_as_raw(startF6);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    indexF35T = T78;
    T36T = T30;
  L2: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      indexF35 = indexF35T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      T79 = primitive_cast_raw_as_integer(indexF35);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      T36 = T36T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      T77 = primitive_machine_word_less_thanQ(indexF35,T71);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      if (T77 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
        T37 = CALL3(T33, insert_, T36, T31);
        T38 = T37;
      } else {
        T38 = &KPtrueVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      if (T38 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
        T39 = CALL2(T34, insert_, T36);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:538
        CALL3(&Kelement_no_bounds_check_setterVKe, T39, new_target_, T79);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
        T80 = primitive_machine_word_add_signal_overflow(indexF35,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
        T40 = CALL2(T32, insert_, T36);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
        indexF35T = T80;
        T36T = T40;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:537
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
    T83 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
    from_T = T83;
    to_T = T72;
  L3: ;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      from_ = from_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      T84 = primitive_cast_raw_as_integer(from_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      to_ = to_T;
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      T81 = primitive_cast_integer_as_raw(target_size_);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      T82 = primitive_machine_word_less_thanQ(from_,T81);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      if (T82 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T43 = CONGRUENT_CALL2(to_, T66);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
        T85 = primitive_not(T43);
        T44 = T85;
      } else {
        T44 = &KPtrueVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      if (T44 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:541
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T45 = CONGRUENT_CALL3(target_, T84, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:541
        CALL3(&Kelement_no_bounds_check_setterVKe, T45, new_target_, to_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
        T86 = primitive_machine_word_add_signal_overflow(from_,4);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T46 = CONGRUENT_CALL2(to_, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
        from_T = T86;
        to_T = T46;
        goto L3;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:539
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:542
    T47_0 = new_target_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:542
    T87_0 = T47_0;
    T48_0 = T87_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:524
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:515
  MV_SET_COUNT(1);
  return(T48_0);
}

D Kadd_newXVKdMM1I (D vector_, D new_element_, D Urest_, D test_) {
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

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:385
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:385
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T10 = T9;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T11 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T12 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T13 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T14 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  T15T = T10;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    T15 = T15T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    T17 = CALL3(T13, vector_, T15, T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
      T18 = CALL2(T14, vector_, T15);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
        T19 = CALL2(T12, vector_, T15);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
        T20 = CALL2(testF5, T18, new_element_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
        T21 = T20;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
        T15T = T19;
        result_T = T21;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:390
    T6_0 = vector_;
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:392
    CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
    T7_0 = CONGRUENT_CALL2(vector_, new_element_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:392
    T22_0 = T7_0;
    T8_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:389
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:385
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kadd_newVKdMM1I (D vector_, D new_element_, D Urest_, D test_) {
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

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:369
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:369
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T10 = T9;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T11 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T12 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T13 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T14 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  T15T = T10;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    T15 = T15T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    T17 = CALL3(T13, vector_, T15, T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
      T18 = CALL2(T14, vector_, T15);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
        T19 = CALL2(T12, vector_, T15);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
        T20 = CALL2(testF5, T18, new_element_);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
        T21 = T20;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
        T15T = T19;
        result_T = T21;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:374
    T6_0 = vector_;
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:376
    CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
    T7_0 = CONGRUENT_CALL2(vector_, new_element_);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:376
    T22_0 = T7_0;
    T8_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:373
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:369
  MV_SET_COUNT(1);
  return(T8_0);
}

D KdimensionsVKdMM8I (D vector_) {
  D T2;
  D T3_0;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:123
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:124
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:124
  T4.vector_element_[0] = T2;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:124
  T3_0 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:123
  MV_SET_COUNT(1);
  return(T3_0);
}

D Krow_major_indexVKdMM1I (D vector_, D indices_) {
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:188
  T6 = primitive_copy_vector(indices_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:190
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:190
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:190
  T9 = primitive_machine_word_equalQ(T8,5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:190
  if (T9 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:194
    T10.vector_element_[0] = T6;
    T10.vector_element_[1] = vector_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:194
    T3 = KlistVKdI(&T10);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:191
    T11.vector_element_[0] = &KJformat_string_;
    T11.vector_element_[1] = &K187;
    T11.vector_element_[2] = &KJformat_arguments_;
    T11.vector_element_[3] = T3;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:191
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:191
    KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:190
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:196
  T12_0 = KelementVKdMM11I(T6, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:188
  T5_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:188
  MV_SET_COUNT(1);
  return(T5_0);
}

D Karef_setterVKdMM1I (D new_, D vector_, D indices_) {
  D T4_0;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:243
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:245
  T8 = SLOT_VALUE_INITD(indices_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:245
  T9 = primitive_idQ(T8,(D) 5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:245
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:246
    T10 = KelementVKdMM11I(indices_, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:246
    CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
    CONGRUENT_CALL3(new_, vector_, T10);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:246
    T4_0 = new_;
    T7_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:251
    T11.vector_element_[0] = vector_;
    T11.vector_element_[1] = T8;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:251
    T5 = KlistVKdI(&T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:248
    T12.vector_element_[0] = &KJformat_string_;
    T12.vector_element_[1] = &K183;
    T12.vector_element_[2] = &KJformat_arguments_;
    T12.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:248
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T12);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:248
    T13_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T7_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:243
  MV_SET_COUNT(1);
  return(T7_0);
}

D KarefVKdMM1I (D vector_, D indices_) {
  D T3_0;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:228
  T7 = SLOT_VALUE_INITD(indices_, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:228
  T8 = primitive_idQ(T7,(D) 5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:228
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:229
    T9 = KelementVKdMM11I(indices_, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:229
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T3_0 = CONGRUENT_CALL3(vector_, T9, &KPempty_vectorVKi);
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:234
    T10.vector_element_[0] = vector_;
    T10.vector_element_[1] = T7;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:234
    T4 = KlistVKdI(&T10);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:231
    T11.vector_element_[0] = &KJformat_string_;
    T11.vector_element_[1] = &K183;
    T11.vector_element_[2] = &KJformat_arguments_;
    T11.vector_element_[3] = T4;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:231
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T11);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:231
    T12_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
    T6_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:228
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:227
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmakeVKdMM21I (D class_, D Urest_, D size_, D fill_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:67
  T5_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, fill_, size_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:65
  MV_SET_COUNT(1);
  return(T5_0);
}

D KmakeVKdMM22I (D class_, D Urest_, D size_, D fill_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:561
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:563
  T5_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, fill_, size_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:561
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM40I (D class_, D collection_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:74
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:77
  T3_0 = collection_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:74
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM42I (D class_, D collection_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:863
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:866
  T3_0 = collection_;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:863
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM0I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:116
  CONGRUENT_CALL_PROLOG(&KemptyVKe, 1);
  T2_0 = CONGRUENT_CALL1(&KLsimple_object_vectorGVKd);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:114
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:114
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM1I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:854
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:856
  T2_0 = &KPempty_vectorVKi;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:854
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_vectorVKeMM0I (D of_, D size_) {
  D concrete_class_;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_8 T9 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:784
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:787
  CONGRUENT_CALL_PROLOG(&Kconcrete_limited_vector_classVKi, 1);
  concrete_class_ = CONGRUENT_CALL1(of_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:790
  if (size_ != &KPfalseVKi) {
    T4 = size_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:790
    T8 = primitive_idQ(concrete_class_,&KLsimple_element_type_vectorGVKe);
    T4 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:790
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:790
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:791
    T9.vector_element_[0] = &KJclass_;
    T9.vector_element_[1] = &KLvectorGVKd;
    T9.vector_element_[2] = &KJelement_type_;
    T9.vector_element_[3] = of_;
    T9.vector_element_[4] = IKJconcrete_class_;
    T9.vector_element_[5] = concrete_class_;
    T9.vector_element_[6] = &KJsize_;
    T9.vector_element_[7] = size_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:791
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5_0 = CONGRUENT_CALL2(&KLlimited_vector_typeGVKe, &T9);
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:797
    T6_0 = concrete_class_;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:797
    T10_0 = T6_0;
    T7_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:790
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:784
  MV_SET_COUNT(1);
  return(T7_0);
}

D Klimited_vectorVKeMM1I (D of_, D size_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:827
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:829
  T3_0 = &KLsimple_object_vectorGVKd;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:827
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kconcrete_limited_vector_classVKiMM0I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:779
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:781
  T2_0 = &KLsimple_element_type_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:779
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kobject_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  D T3_0;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T2 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kobject_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:775
  return(T3);
}

D Kimmutable_type_vectorVKeI (D types_) {
  DWORD T2T, T2;
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:34
  T4 = primitive_copy_vector(types_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
  T5 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
    T7 = primitive_machine_word_equalQ(T2,T6);
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(T4, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
      T11 = primitive_instanceQ(T8,&KLtypeGVKd);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
      if (T11 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
        T10.vector_element_[0] = &KJvalue_;
        T10.vector_element_[1] = T8;
        T10.vector_element_[2] = &KJtype_;
        T10.vector_element_[3] = &KLtypeGVKd;
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T9 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T10);
        // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:37
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
      T12 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
      T2T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
    // /opt/opendylan-2013.1/sources/dylan/vector.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:39
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:34
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kimmutable_vectorVKeI (D arguments_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:27
  T3 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:29
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/vector.dylan:27
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_vector_for_system () {
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

void _Init_dylan__X_vector_for_user () {
  return;
}


/* eof */
