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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(15);

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

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
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

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

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D set_elements_;
} _KLobject_setGVKe;

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
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLstring_tableGVKe;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D key_sequence_;
} _KLordered_key_collectionGVKi;

typedef struct {
  D wrapper;
  D key_sequence_;
  D ordered_mapping_;
} _KLordered_object_setGVKe;

typedef struct {
  D wrapper;
  D key_sequence_;
  D ordered_mapping_;
} _KLordered_string_tableGVKe;

typedef struct {
  D wrapper;
  D key_sequence_;
  D ordered_mapping_;
} _KLordered_object_tableGVKe;


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
extern _KLincremental_generic_functionGVKe Kremove_all_keysXVKe;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D Ksize_setterVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lexplicit_key_collectionG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe Kkey_sequenceVKd;
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLobject_setGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_setGVKeW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
D KLobject_setGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLstring_tableGVKe;
extern _KLmm_wrapperGVKi_0 KLstring_tableGVKeW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLsymbolGVKd KJdefault_;
extern _KLsealed_generic_functionGVKe Knot_found_objectVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
D KaddXVKdMM3I (D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
D KmemberQVKdMM5I (D, D, D, D);
extern _KLsymbolGVKd KJtest_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D KaddXVKdMM14I (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;

/* Defined object declarations */

extern _KLsimple_methodGVKe KsizeVKdMM41;
D KsizeVKdMM41I (D tab_);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe KelementVKdMM34;
D KelementVKdMM34I (D tab_, D key_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM33;
D Kforward_iteration_protocolVKdMM33I (D tab_);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KaddXVKdMM15;
D KaddXVKdMM15I (D tab_, D key_);
extern _KLkeyword_methodGVKe KmemberQVKdMM6;
D KmemberQVKdMM6I (D object_, D tab_, D Urest_, D test_);
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_0;
extern _KLgetter_methodGVKi Kkey_sequenceVKdMM2;
extern _KLstandalone_domainGVKe_1 Kkey_sequenceVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kelement_setterVKdMM30;
D Kelement_setterVKdMM30I (D value_, D tab_, D key_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kremove_all_keysXVKeMM2;
D Kremove_all_keysXVKeMM2I (D tab_);
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_0;
extern _KLsealed_generic_functionGVKe Kordered_mappingVKi;
static _KLsignatureAvaluesGVKi K24;
static _KLbyte_stringGVKd_15 K25;
static _KLsimple_object_vectorGVKd_1 K26;
extern _KLclassGVKd KLordered_key_collectionGVKi;
extern _KLmm_wrapperGVKi_0 KLordered_key_collectionGVKiW;
static _KLimplementation_classGVKe K29;
static _KLsimple_object_vectorGVKd_1 K30;
static _KLsimple_object_vectorGVKd_2 K31;
static _KLsimple_object_vectorGVKd_9 K32;
extern _KLinstance_slot_descriptorGVKe Kkey_sequenceVKdHLordered_key_collectionG;
static _KLsimple_closure_methodGVKi_0 K36;
static D K36I ();
static _KLsignatureGVKe K37;
static _KLbyte_stringGVKd_24 K38;
extern _KLgetter_methodGVKi Kordered_mappingVKiMM0;
extern _KLgetter_methodGVKi Kordered_mappingVKiMM1;
extern _KLgetter_methodGVKi Kordered_mappingVKiMM2;
static _KLsignatureGVKe K42;
extern _KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_object_setG;
static _KLsimple_closure_methodGVKi_0 K65;
static D K65I ();
extern _KLclassGVKd KLordered_object_setGVKe;
extern _KLmm_wrapperGVKi_0 KLordered_object_setGVKeW;
static _KLsymbolGVKd KJset_;
static _KLbyte_stringGVKd_3 K49;
static _KLimplementation_classGVKe K50;
static _KLsimple_object_vectorGVKd_2 K51;
extern _KLkeyword_methodGVKe KLordered_object_setGZ32ZconstructorVKiMM0;
D KLordered_object_setGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_10 K54;
static _KLsimple_object_vectorGVKd_1 K55;
static D K59I ();
static D K58I ();
static _KLkeyword_signatureAvaluesGVKi K60;
static _KLsimple_object_vectorGVKd_2 K61;
static _KLsimple_object_vectorGVKd_1 K62;
static _KLsimple_object_vectorGVKd_1 K63;
static _KLbyte_stringGVKd_20 K64;
extern _KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_string_tableG;
static _KLsimple_closure_methodGVKi_0 K88;
static D K88I ();
extern _KLclassGVKd KLordered_string_tableGVKe;
extern _KLmm_wrapperGVKi_0 KLordered_string_tableGVKeW;
static _KLsymbolGVKd KJtable_;
static _KLbyte_stringGVKd_5 K72;
static _KLimplementation_classGVKe K73;
static _KLsimple_object_vectorGVKd_2 K74;
extern _KLkeyword_methodGVKe KLordered_string_tableGZ32ZconstructorVKiMM0;
D KLordered_string_tableGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_10 K77;
static _KLsimple_object_vectorGVKd_1 K78;
static D K82I ();
static D K81I ();
static _KLkeyword_signatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLsimple_object_vectorGVKd_1 K85;
static _KLsimple_object_vectorGVKd_1 K86;
static _KLbyte_stringGVKd_22 K87;
extern _KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_object_tableG;
static _KLsimple_closure_methodGVKi_0 K107;
static D K107I ();
extern _KLclassGVKd KLordered_object_tableGVKe;
extern _KLmm_wrapperGVKi_0 KLordered_object_tableGVKeW;
static _KLimplementation_classGVKe K94;
static _KLsimple_object_vectorGVKd_2 K95;
extern _KLkeyword_methodGVKe KLordered_object_tableGZ32ZconstructorVKiMM0;
D KLordered_object_tableGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_10 K98;
static _KLsimple_object_vectorGVKd_1 K99;
static D K103I ();
static D K102I ();
static _KLkeyword_signatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_1 K105;
static _KLbyte_stringGVKd_22 K106;
static _KLsignatureGVKe K108;
static _KLsimple_object_vectorGVKd_3 K109;
static _KLkeyword_signatureAvaluesGVKi K110;
static _KLsimple_object_vectorGVKd_2 K111;
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsimple_object_vectorGVKd_1 K113;
static _KLsignatureAvaluesGVKi K114;
static _KLsimple_object_vectorGVKd_2 K115;
static _KLsimple_closure_methodGVKi_0 KnextF141;
static D KnextF141I (D tab_, D index_);
static _KLsimple_closure_methodGVKi_0 KfinishedQF138;
static D KfinishedQF138I (D tab_, D index_, D size_);
static _KLsimple_closure_methodGVKi_0 KkeyF137;
static D KkeyF137I (D tab_, D index_);
static _KLsimple_closure_methodGVKi_0 KeltF134;
static D KeltF134I (D tab_, D index_);
static _KLsimple_closure_methodGVKi_0 Kelt_setterF131;
static D Kelt_setterF131I (D value_, D tab_, D index_);
static _KLsimple_closure_methodGVKi_0 KcopyF128;
static D KcopyF128I (D tab_, D index_);
static _KLsignatureGVKe K129;
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsignatureGVKe K132;
static _KLsimple_object_vectorGVKd_3 K133;
static _KLsignatureGVKe K135;
static _KLsimple_object_vectorGVKd_2 K136;
static _KLsignatureGVKe K139;
static _KLsimple_object_vectorGVKd_3 K140;
static _KLsignatureAvaluesGVKi K142;
static _KLsimple_object_vectorGVKd_8 K143;
static _KLkeyword_signatureGVKe K144;
static _KLsimple_object_vectorGVKd_2 K145;
static _KLsimple_object_vectorGVKd_2 K146;
static _KLsimple_object_vectorGVKd_1 K147;
static _KLsignatureAvaluesGVKi K148;
static _KLpairGVKd K149;
static _KLpairGVKd K150;
static _KLpairGVKd K151;
static _KLpairGVKd K152;
static _KLpairGVKd K153;
static _KLpairGVKd K154;

/* Indirection variables */

static D IKJset_ = &KJset_;
static D IKJtable_ = &KJtable_;

/* Variables */

D Lordered_key_collectionGVKi = &KLordered_key_collectionGVKi;
D Lordered_object_tableGVKe = &KLordered_object_tableGVKe;
D Lordered_string_tableGVKe = &KLordered_string_tableGVKe;
D Lordered_object_setGVKe = &KLordered_object_setGVKe;
D ordered_mappingVKi = &Kordered_mappingVKi;

/* Objects */

_KLsimple_methodGVKe KsizeVKdMM41 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K148,
  &KsizeVKdMM41I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KsizeVKdMM41
};

_KLkeyword_methodGVKe KelementVKdMM34 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K144,
  &key_mep_4,
  &KelementVKdMM34I,
  &K145
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KelementVKdMM34
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kforward_iteration_protocolVKdMM33
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM33 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K142,
  &Kforward_iteration_protocolVKdMM33I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KaddXVKdMM15
};

_KLsimple_methodGVKe KaddXVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K114,
  &KaddXVKdMM15I
};

_KLkeyword_methodGVKe KmemberQVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K110,
  &key_mep_4,
  &KmemberQVKdMM6I,
  &K111
};

_KLmethod_domainGVKe KmemberQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KmemberQVKdMM6
};

_KLgetter_methodGVKi Kkey_sequenceVKdMM2 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kkey_sequenceVKdHLordered_key_collectionG
};

_KLstandalone_domainGVKe_1 Kkey_sequenceVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLordered_key_collectionGVKi
};

_KLsimple_methodGVKe Kelement_setterVKdMM30 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K108,
  &Kelement_setterVKdMM30I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kelement_setterVKdMM30
};

_KLsimple_methodGVKe Kremove_all_keysXVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K42,
  &Kremove_all_keysXVKeMM2I
};

_KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kremove_all_keysXVKeMM2
};

_KLsealed_generic_functionGVKe Kordered_mappingVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K24,
  (D) 1,
  &K25,
  &K149,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K26,
  &KDsignature_Lexplicit_key_collectionG_typesVKi
};

static _KLbyte_stringGVKd_15 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "ordered-mapping"
};

static _KLsimple_object_vectorGVKd_1 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLordered_key_collectionGVKi
};

_KLclassGVKd KLordered_key_collectionGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K38,
  &K29,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLordered_key_collectionGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K29,
  (D) 4097,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K29 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 460587013,
  &KLordered_key_collectionGVKi,
  &KLordered_key_collectionGVKiW,
  &KPfalseVKi,
  &K30,
  (D) 7393,
  &Kdefault_class_constructorVKi,
  &K31,
  &K32,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K152,
  &KPempty_vectorVKi,
  &K30,
  &K30,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kkey_sequenceVKdHLordered_key_collectionG
};

static _KLsimple_object_vectorGVKd_2 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_explicit_key_collectionGVKd,
  &KLstretchy_collectionGVKd
};

static _KLsimple_object_vectorGVKd_9 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLordered_key_collectionGVKi
};

_KLinstance_slot_descriptorGVKe Kkey_sequenceVKdHLordered_key_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K36,
  &KLordered_key_collectionGVKi,
  &KPfalseVKi,
  &Kkey_sequenceVKd,
  &KPfalseVKi,
  &KLstretchy_object_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K36 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K37,
  &K36I,
  (D) 1
};

static _KLsignatureGVKe K37 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_24 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<ordered-key-collection>"
};

_KLgetter_methodGVKi Kordered_mappingVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kordered_mappingVKiHLordered_object_tableG
};

_KLgetter_methodGVKi Kordered_mappingVKiMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kordered_mappingVKiHLordered_string_tableG
};

_KLgetter_methodGVKi Kordered_mappingVKiMM2 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kordered_mappingVKiHLordered_object_setG
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K26
};

_KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_object_setG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K65,
  &KLordered_object_setGVKe,
  &KJset_,
  &Kordered_mappingVKi,
  &KPfalseVKi,
  &KLobject_setGVKe
};

static _KLsimple_closure_methodGVKi_0 K65 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K37,
  &K65I,
  (D) 1
};

_KLclassGVKd KLordered_object_setGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K64,
  &K50,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLordered_object_setGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K50,
  (D) 4097,
  9,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJset_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K49
};

static _KLbyte_stringGVKd_3 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "set"
};

static _KLimplementation_classGVKe K50 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLordered_object_setGVKe,
  &KLordered_object_setGVKeW,
  &KPfalseVKi,
  &K51,
  (D) 7417,
  &KLordered_object_setGZ32ZconstructorVKiMM0,
  &K26,
  &K54,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K55,
  &K51,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kkey_sequenceVKdHLordered_key_collectionG,
  &Kordered_mappingVKiHLordered_object_setG
};

_KLkeyword_methodGVKe KLordered_object_setGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K60,
  &key_mep_2,
  &KLordered_object_setGZ32ZconstructorVKiMM0I,
  &K61
};

static _KLsimple_object_vectorGVKd_10 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLordered_key_collectionGVKi,
  &KLordered_object_setGVKe
};

static _KLsimple_object_vectorGVKd_1 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kordered_mappingVKiHLordered_object_setG
};

static _KLkeyword_signatureAvaluesGVKi K60 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K62,
  &KDsignature_LobjectG_typesVKi,
  &K63
};

static _KLsimple_object_vectorGVKd_2 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJset_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJset_
};

static _KLsimple_object_vectorGVKd_1 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLordered_object_setGVKe
};

static _KLbyte_stringGVKd_20 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<ordered-object-set>"
};

_KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_string_tableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K88,
  &KLordered_string_tableGVKe,
  &KJtable_,
  &Kordered_mappingVKi,
  &KPfalseVKi,
  &KLstring_tableGVKe
};

static _KLsimple_closure_methodGVKi_0 K88 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K37,
  &K88I,
  (D) 1
};

_KLclassGVKd KLordered_string_tableGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K87,
  &K73,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLordered_string_tableGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K73,
  (D) 4097,
  9,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJtable_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K72
};

static _KLbyte_stringGVKd_5 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "table"
};

static _KLimplementation_classGVKe K73 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLordered_string_tableGVKe,
  &KLordered_string_tableGVKeW,
  &KPfalseVKi,
  &K74,
  (D) 7409,
  &KLordered_string_tableGZ32ZconstructorVKiMM0,
  &K26,
  &K77,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K78,
  &K74,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kkey_sequenceVKdHLordered_key_collectionG,
  &Kordered_mappingVKiHLordered_string_tableG
};

_KLkeyword_methodGVKe KLordered_string_tableGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K83,
  &key_mep_2,
  &KLordered_string_tableGZ32ZconstructorVKiMM0I,
  &K84
};

static _KLsimple_object_vectorGVKd_10 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLordered_key_collectionGVKi,
  &KLordered_string_tableGVKe
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kordered_mappingVKiHLordered_string_tableG
};

static _KLkeyword_signatureAvaluesGVKi K83 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K85,
  &KDsignature_LobjectG_typesVKi,
  &K86
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtable_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtable_
};

static _KLsimple_object_vectorGVKd_1 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLordered_string_tableGVKe
};

static _KLbyte_stringGVKd_22 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<ordered-string-table>"
};

_KLinstance_slot_descriptorGVKe Kordered_mappingVKiHLordered_object_tableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K107,
  &KLordered_object_tableGVKe,
  &KJtable_,
  &Kordered_mappingVKi,
  &KPfalseVKi,
  &KLobject_tableGVKd
};

static _KLsimple_closure_methodGVKi_0 K107 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K37,
  &K107I,
  (D) 1
};

_KLclassGVKd KLordered_object_tableGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K106,
  &K94,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLordered_object_tableGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K94,
  (D) 4097,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K94 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLordered_object_tableGVKe,
  &KLordered_object_tableGVKeW,
  &KPfalseVKi,
  &K95,
  (D) 7401,
  &KLordered_object_tableGZ32ZconstructorVKiMM0,
  &K26,
  &K98,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K99,
  &K95,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kkey_sequenceVKdHLordered_key_collectionG,
  &Kordered_mappingVKiHLordered_object_tableG
};

_KLkeyword_methodGVKe KLordered_object_tableGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K104,
  &key_mep_2,
  &KLordered_object_tableGZ32ZconstructorVKiMM0I,
  &K84
};

static _KLsimple_object_vectorGVKd_10 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLordered_key_collectionGVKi,
  &KLordered_object_tableGVKe
};

static _KLsimple_object_vectorGVKd_1 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kordered_mappingVKiHLordered_object_tableG
};

static _KLkeyword_signatureAvaluesGVKi K104 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K85,
  &KDsignature_LobjectG_typesVKi,
  &K105
};

static _KLsimple_object_vectorGVKd_1 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLordered_object_tableGVKe
};

static _KLbyte_stringGVKd_22 K106 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<ordered-object-table>"
};

static _KLsignatureGVKe K108 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K109
};

static _KLsimple_object_vectorGVKd_3 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLordered_key_collectionGVKi,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K110 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K112,
  &K113,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLordered_object_setGVKe
};

static _KLsimple_object_vectorGVKd_1 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K115,
  &K63
};

static _KLsimple_object_vectorGVKd_2 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLordered_object_setGVKe,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 KnextF141 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K129,
  &KnextF141I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KfinishedQF138 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K139,
  &KfinishedQF138I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KkeyF137 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K135,
  &KkeyF137I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KeltF134 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K135,
  &KeltF134I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kelt_setterF131 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K132,
  &Kelt_setterF131I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KcopyF128 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K129,
  &KcopyF128I,
  (D) 1
};

static _KLsignatureGVKe K129 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K130
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K132 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K133
};

static _KLsimple_object_vectorGVKd_3 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLordered_key_collectionGVKi,
  &KLintegerGVKd
};

static _KLsignatureGVKe K135 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K136
};

static _KLsimple_object_vectorGVKd_2 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLordered_key_collectionGVKi,
  &KLintegerGVKd
};

static _KLsignatureGVKe K139 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K140
};

static _KLsimple_object_vectorGVKd_3 K140 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K142 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K26,
  &K143
};

static _KLsimple_object_vectorGVKd_8 K143 = {
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

static _KLkeyword_signatureGVKe K144 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K146,
  &K147,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLordered_key_collectionGVKi,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsignatureAvaluesGVKi K148 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K26,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K149 = {
  &KLpairGVKdW /* wrapper */,
  &Kordered_mappingVKiMM0,
  &K150
};

static _KLpairGVKd K150 = {
  &KLpairGVKdW /* wrapper */,
  &Kordered_mappingVKiMM1,
  &K151
};

static _KLpairGVKd K151 = {
  &KLpairGVKdW /* wrapper */,
  &Kordered_mappingVKiMM2,
  &KPempty_listVKi
};

static _KLpairGVKd K152 = {
  &KLpairGVKdW /* wrapper */,
  &KLordered_object_setGVKe,
  &K153
};

static _KLpairGVKd K153 = {
  &KLpairGVKdW /* wrapper */,
  &KLordered_string_tableGVKe,
  &K154
};

static _KLpairGVKd K154 = {
  &KLpairGVKdW /* wrapper */,
  &KLordered_object_tableGVKe,
  &KPempty_listVKi
};

/* Code */

D KsizeVKdMM41I (D tab_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:27
  CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
  T2 = CONGRUENT_CALL1(tab_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:27
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:25
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:25
  MV_SET_COUNT(1);
  return(T4_0);
}

D KelementVKdMM34I (D tab_, D key_, D Urest_, D default_) {
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D T9_0;
  D T10;
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:38
  T10 = primitive_idQ(default_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:38
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:41
    CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
    T7 = CONGRUENT_CALL1(tab_);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:41
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T8_0 = CONGRUENT_CALL3(T7, key_, &KPempty_vectorVKi);
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:39
    CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
    T5 = CONGRUENT_CALL1(tab_);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:39
    T11.vector_element_[0] = &KJdefault_;
    T11.vector_element_[1] = default_;
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:39
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T6_0 = CONGRUENT_CALL3(T5, key_, &T11);
    T9_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:35
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kforward_iteration_protocolVKdMM33I (D tab_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:82
  T2 = SLOT_VALUE_INITD(tab_, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:82
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:82
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:82
  T5_0 = (D) 1;
  T5_1 = T4;
  T5_2 = &KnextF141;
  T5_3 = &KfinishedQF138;
  T5_4 = &KkeyF137;
  T5_5 = &KeltF134;
  T5_6 = &Kelt_setterF131;
  T5_7 = &KcopyF128;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:55
  MV_SET_ELT(1, T5_1);
  MV_SET_ELT(2, T5_2);
  MV_SET_ELT(3, T5_3);
  MV_SET_ELT(4, T5_4);
  MV_SET_ELT(5, T5_5);
  MV_SET_ELT(6, T5_6);
  MV_SET_ELT(7, T5_7);
  MV_SET_COUNT(8);
  return(T5_0);
}

D KaddXVKdMM15I (D tab_, D key_) {
  D T3_0;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:111
  T4 = SLOT_VALUE_INITD(tab_, 1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:112
  T5 = KmemberQVKdMM5I(key_, T4, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:112
  if (T5 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:113
    T6 = SLOT_VALUE_INITD(tab_, 0);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:113
    KaddXVKdMM3I(T6, key_);
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:115
  KaddXVKdMM14I(T4, key_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:116
  T3_0 = tab_;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:109
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmemberQVKdMM6I (D object_, D tab_, D Urest_, D test_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:103
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:106
  T5 = SLOT_VALUE_INITD(tab_, 1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:106
  T6_0 = KmemberQVKdMM5I(object_, T5, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:103
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM30I (D value_, D tab_, D key_) {
  D table_;
  D T5;
  D T6_0;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:48
  CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
  table_ = CONGRUENT_CALL1(tab_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:49
  T7.vector_element_[0] = &KJdefault_;
  T7.vector_element_[1] = &Knot_found_objectVKi;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:49
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T5 = CONGRUENT_CALL3(table_, key_, &T7);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:49
  T8 = primitive_idQ(T5,&Knot_found_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:49
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:50
    T9 = SLOT_VALUE_INITD(tab_, 0);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:50
    KaddXVKdMM3I(T9, key_);
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:49
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:52
  CALL3(&Kelement_setterVKd, value_, table_, key_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:52
  T6_0 = value_;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:46
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kremove_all_keysXVKeMM2I (D tab_) {
  D T2;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:31
  CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
  T2 = CONGRUENT_CALL1(tab_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:31
  CALL1(&Kremove_all_keysXVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:32
  T4 = SLOT_VALUE_INITD(tab_, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:32
  Ksize_setterVKdMM1I((D) 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:32
  T3 = (D) 1;
  MV_SET_ELT(0, (D) 1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:30
  return(T3);
}

static D K36I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:17
  T2_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:17
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:17
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:17
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K65I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:99
  T2_0 = KLobject_setGZ32ZconstructorVKiMM0I(&KLobject_setGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:99
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:99
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:99
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLordered_object_setGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_ordered_mapping_) {
  D T4;
  D T5;
  D Uunique_ordered_mappingF6;
  D T7;
  D T8;
  D Uunique_ordered_mappingF9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
  T11 = primitive_idQ(Uunique_ordered_mapping_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
  if (T11 != &KPfalseVKi) {
    T4 = K59I();
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
    T5 = T4;
    Uunique_ordered_mappingF6 = T5;
  } else {
    Uunique_ordered_mappingF6 = Uunique_ordered_mapping_;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
  T7 = primitive_object_allocate_filled(3,&KLordered_object_setGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  T8 = K58I();
  SLOT_VALUE_SETTER(T8, T7, 0);
  Uunique_ordered_mappingF9 = Uunique_ordered_mappingF6;
  SLOT_VALUE_SETTER(Uunique_ordered_mappingF9, T7, 1);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T10_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:98
  MV_SET_COUNT(1);
  return(T10_0);
}

static D K59I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLobject_setGZ32ZconstructorVKiMM0I(&KLobject_setGVKe, &KPempty_vectorVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K58I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K88I () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:93
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLstring_tableGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:93
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:93
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLordered_string_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_ordered_mapping_) {
  D T4;
  D T5;
  D Uunique_ordered_mappingF6;
  D T7;
  D T8;
  D Uunique_ordered_mappingF9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
  T11 = primitive_idQ(Uunique_ordered_mapping_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
  if (T11 != &KPfalseVKi) {
    T4 = K82I();
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
    T5 = T4;
    Uunique_ordered_mappingF6 = T5;
  } else {
    Uunique_ordered_mappingF6 = Uunique_ordered_mapping_;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
  T7 = primitive_object_allocate_filled(3,&KLordered_string_tableGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  T8 = K81I();
  SLOT_VALUE_SETTER(T8, T7, 0);
  Uunique_ordered_mappingF9 = Uunique_ordered_mappingF6;
  SLOT_VALUE_SETTER(Uunique_ordered_mappingF9, T7, 1);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T10_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:92
  MV_SET_COUNT(1);
  return(T10_0);
}

static D K82I () {
  D T0;
  D T1_0;

  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLstring_tableGVKe, &KPempty_vectorVKi);
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K81I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K107I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:88
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:88
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:88
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:88
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLordered_object_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_ordered_mapping_) {
  D T4;
  D T5;
  D Uunique_ordered_mappingF6;
  D T7;
  D T8;
  D Uunique_ordered_mappingF9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
  T11 = primitive_idQ(Uunique_ordered_mapping_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
  if (T11 != &KPfalseVKi) {
    T4 = K103I();
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
    T5 = T4;
    Uunique_ordered_mappingF6 = T5;
  } else {
    Uunique_ordered_mappingF6 = Uunique_ordered_mapping_;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
  T7 = primitive_object_allocate_filled(3,&KLordered_object_tableGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  T8 = K102I();
  SLOT_VALUE_SETTER(T8, T7, 0);
  Uunique_ordered_mappingF9 = Uunique_ordered_mappingF6;
  SLOT_VALUE_SETTER(Uunique_ordered_mappingF9, T7, 1);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T10_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:87
  MV_SET_COUNT(1);
  return(T10_0);
}

static D K103I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K102I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D KnextF141I (D tab_, D index_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:64
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:65
  T3 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:65
  T4 = primitive_machine_word_add_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:65
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:65
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:64
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KfinishedQF138I (D tab_, D index_, D size_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:68
  T3 = primitive_idQ(index_,size_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:68
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:67
  return(T4);
}

static D KkeyF137I (D tab_, D index_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T2 = SLOT_VALUE_INITD(tab_, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T5 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T6 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T8 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  T9 = primitive_machine_word_unsigned_less_thanQ(T7,T8);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
    T10 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 2, T7);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
    T11_0 = T10;
    T4_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
    T3_0 = Kelement_range_errorVKeI(T2, index_);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:70
  MV_SET_COUNT(1);
  return(T4_0);
}

static D KeltF134I (D tab_, D index_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
  T2 = CONGRUENT_CALL1(tab_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T4 = SLOT_VALUE_INITD(tab_, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T6 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
    T11 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T8);
    T13 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
    T5_0 = Kelement_range_errorVKeI(T4, index_);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
    T12 = T5_0;
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:74
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T3 = CONGRUENT_CALL3(T2, T13, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:73
  return(T3);
}

static D Kelt_setterF131I (D value_, D tab_, D index_) {
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  CONGRUENT_CALL_PROLOG(&Kordered_mappingVKi, 1);
  T3 = CONGRUENT_CALL1(tab_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T5 = SLOT_VALUE_INITD(tab_, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T7 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T11 = primitive_machine_word_unsigned_less_thanQ(T9,T10);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
    T12 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 2, T9);
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
    T6_0 = Kelement_range_errorVKeI(T5, index_);
    // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
    T13 = T6_0;
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  CALL3(&Kelement_setterVKd, value_, T3, T14);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:77
  T4 = value_;
  MV_SET_ELT(0, value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:76
  return(T4);
}

static D KcopyF128I (D tab_, D index_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:80
  T2 = index_;
  MV_SET_ELT(0, index_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/ordered-collection.dylan:79
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_ordered_collection_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJset_);
    if (T0 != &KJset_) {
      primitive_repeated_slot_value_setter(T0, &K62, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K61, 1, 0);
      primitive_slot_value_setter(T0, &Kordered_mappingVKiHLordered_object_setG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtable_);
    if (T0 != &KJtable_) {
      primitive_slot_value_setter(T0, &Kordered_mappingVKiHLordered_object_tableG, 3);
      primitive_repeated_slot_value_setter(T0, &K85, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K84, 1, 0);
      primitive_slot_value_setter(T0, &Kordered_mappingVKiHLordered_string_tableG, 3);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_ordered_collection_for_user () {
  return;
}


/* eof */
