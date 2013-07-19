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
define__KLsimple_object_vectorGVKd(13);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLkey_test_errorGVKi;

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
} _KLsimple_methodGVKe;

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
} _KLintegerGVKd;

#define  define__KLsimple_element_type_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D size_; \
    D element_type_vector_element_[nrepeated+1]; \
  } _KLsimple_element_type_vectorGVKe_##nrepeated;

#define  define__KLsimple_integer_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D integer_vector_element_[nrepeated+1]; \
  } _KLsimple_integer_vectorGVKe_##nrepeated;

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
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

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
} _KLsimple_vectorGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(60);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(45);

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D collections_;
} _KLmultiple_sequenceGVKi;

typedef struct {
  D wrapper;
  D collections_;
  D smallest_collection_index_;
} _KLmultiple_explicit_key_collectionGVKi;

typedef struct {
  D wrapper;
  D sequence_collections_;
  D sequence_map_;
  D explicit_collections_;
  D explicit_map_;
  D key_upper_bound_;
} _KLmultiple_mixed_collectionGVKi;


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
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLincremental_generic_functionGVKe Kkey_testVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLkey_test_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLkey_test_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLsimple_methodGVKe KvectorVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsymbolGVKd KJcollections_;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KmakeVKdMM27I (D class_, D Urest_, D fill_, D element_type_, D size_);
extern _KLclassGVKd KLsimple_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW;
D KmakeVKdMM24I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLsimple_integer_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_integer_vectorGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsymbolGVKd KJsequences_;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLclassGVKd KLlimited_vector_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_vector_typeGVKeW;
D Klimited_collection_instanceQVKeI (D x_, D t_);
extern _KLclassGVKd KLsimple_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
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
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
D Kelement_range_errorVKeI (D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
D Kobject_classVKdI (D);
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsimple_methodGVKe KvaluesVKd;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D Kcopy_sequenceVKdMM2I (D source_, D Urest_, D first_, D last_);
extern _KLsymbolGVKd KJdefault_;
extern _KLsealed_generic_functionGVKe Knot_found_objectVKi;
extern _KLsealed_generic_functionGVKe Kmaximum_sequence_keyVKi;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLsealed_generic_functionGVKe Khead_setterVKd;
extern _KLsealed_generic_functionGVKe Ktail_setterVKd;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Ktype_for_copyVKdMM1;
D Ktype_for_copyVKdMM1I (D);
extern _KLkeyword_methodGVKe KelementVKdMM0;
D KelementVKdMM0I (D, D, D, D);
extern _KLkeyword_methodGVKe KelementVKdMM1;
D KelementVKdMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe KelementVKdMM2;
D KelementVKdMM2I (D, D, D, D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM4;
D Kforward_iteration_protocolVKdMM4I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM3;
D Kforward_iteration_protocolVKdMM3I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM2;
D Kforward_iteration_protocolVKdMM2I (D);
extern _KLsimple_methodGVKe Kkey_testVKdMM3;
D Kkey_testVKdMM3I (D);
extern _KLsimple_methodGVKe Kkey_testVKdMM2;
D Kkey_testVKdMM2I (D);
extern _KLsimple_methodGVKe Kkey_testVKdMM1;
D Kkey_testVKdMM1I (D);
D Kmultiple_collectionVKiI (D, D);
static _KLbyte_stringGVKd_45 K21;
static _KLlimited_vector_typeGVKe K22;
extern _KLclassGVKd KLmultiple_sequenceGVKi;
extern _KLmm_wrapperGVKi_0 KLmultiple_sequenceGVKiW;
static _KLlimited_vector_typeGVKe K25;
extern _KLclassGVKd KLmultiple_explicit_key_collectionGVKi;
extern _KLmm_wrapperGVKi_0 KLmultiple_explicit_key_collectionGVKiW;
D Kmixed_collectionVKiI (D);
static _KLsymbolGVKd KJsmap_;
static _KLsymbolGVKd KJexplicits_;
static _KLsymbolGVKd KJemap_;
extern _KLclassGVKd KLmultiple_mixed_collectionGVKi;
extern _KLmm_wrapperGVKi_0 KLmultiple_mixed_collectionGVKiW;
static _KLimplementation_classGVKe K34;
static _KLsimple_object_vectorGVKd_5 K35;
extern _KLkeyword_methodGVKe KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0;
D KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K38;
static _KLsimple_object_vectorGVKd_6 K39;
static _KLbyte_stringGVKd_23 K40;
static _KLlimited_vector_typeGVKe K41;
static _KLlimited_vector_typeGVKe K42;
static _KLkeyword_signatureAvaluesGVKi K43;
static _KLsimple_object_vectorGVKd_8 K44;
static _KLsimple_object_vectorGVKd_4 K45;
static _KLsimple_object_vectorGVKd_1 K46;
extern _KLinstance_slot_descriptorGVKe Ksequence_collectionsVKiHLmultiple_mixed_collectionG;
extern _KLinstance_slot_descriptorGVKe Ksequence_mapVKiHLmultiple_mixed_collectionG;
extern _KLinstance_slot_descriptorGVKe Kexplicit_collectionsVKiHLmultiple_mixed_collectionG;
extern _KLinstance_slot_descriptorGVKe Kexplicit_mapVKiHLmultiple_mixed_collectionG;
extern _KLinstance_slot_descriptorGVKe Kkey_upper_boundVKiHLmultiple_mixed_collectionG;
extern _KLsealed_generic_functionGVKe Kkey_upper_boundVKi;
extern _KLsealed_generic_functionGVKe Kkey_upper_bound_setterVKi;
static _KLunionGVKe K54;
static _KLsingletonGVKd K55;
extern _KLsetter_methodGVKi Kkey_upper_bound_setterVKiMM0;
static _KLpairGVKd K57;
static _KLbyte_stringGVKd_22 K58;
extern _KLgetter_methodGVKi Kkey_upper_boundVKiMM0;
static _KLpairGVKd K60;
static _KLbyte_stringGVKd_15 K61;
extern _KLsealed_generic_functionGVKe Kexplicit_mapVKi;
extern _KLgetter_methodGVKi Kexplicit_mapVKiMM0;
static _KLpairGVKd K64;
static _KLbyte_stringGVKd_12 K65;
extern _KLsealed_generic_functionGVKe Kexplicit_collectionsVKi;
static _KLlimited_vector_typeGVKe K67;
extern _KLgetter_methodGVKi Kexplicit_collectionsVKiMM0;
static _KLpairGVKd K69;
static _KLbyte_stringGVKd_20 K70;
extern _KLsealed_generic_functionGVKe Ksequence_mapVKi;
extern _KLgetter_methodGVKi Ksequence_mapVKiMM0;
static _KLpairGVKd K73;
static _KLbyte_stringGVKd_12 K74;
extern _KLsealed_generic_functionGVKe Ksequence_collectionsVKi;
static _KLlimited_vector_typeGVKe K76;
extern _KLgetter_methodGVKi Ksequence_collectionsVKiMM0;
static _KLpairGVKd K78;
static _KLbyte_stringGVKd_20 K79;
static _KLbyte_stringGVKd_27 K80;
static _KLbyte_stringGVKd_4 K81;
static _KLbyte_stringGVKd_9 K82;
static _KLbyte_stringGVKd_4 K83;
static _KLimplementation_classGVKe K84;
static _KLsimple_object_vectorGVKd_2 K85;
extern _KLkeyword_methodGVKe KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0;
D KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K88;
static _KLlimited_vector_typeGVKe K89;
static _KLkeyword_signatureAvaluesGVKi K90;
static _KLsimple_object_vectorGVKd_2 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLsimple_object_vectorGVKd_1 K93;
extern _KLinstance_slot_descriptorGVKe KcollectionsVKiHLmultiple_explicit_key_collectionG;
extern _KLinstance_slot_descriptorGVKe Ksmallest_collection_indexVKiHLmultiple_explicit_key_collectionG;
extern _KLsealed_generic_functionGVKe Ksmallest_collection_indexVKi;
extern _KLsealed_generic_functionGVKe Ksmallest_collection_index_setterVKi;
extern _KLsetter_methodGVKi Ksmallest_collection_index_setterVKiMM0;
static _KLpairGVKd K99;
static _KLbyte_stringGVKd_32 K100;
extern _KLgetter_methodGVKi Ksmallest_collection_indexVKiMM0;
static _KLpairGVKd K102;
static _KLbyte_stringGVKd_25 K103;
extern _KLsealed_generic_functionGVKe KcollectionsVKi;
static _KLlimited_vector_typeGVKe K105;
extern _KLgetter_methodGVKi KcollectionsVKiMM0;
extern _KLgetter_methodGVKi KcollectionsVKiMM1;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLbyte_stringGVKd_11 K110;
extern _KLinstance_slot_descriptorGVKe KcollectionsVKiHLmultiple_sequenceG;
static _KLlimited_vector_typeGVKe K112;
static _KLbyte_stringGVKd_34 K113;
static _KLimplementation_classGVKe K114;
static _KLsimple_object_vectorGVKd_1 K115;
extern _KLkeyword_methodGVKe KLmultiple_sequenceGZ32ZconstructorVKiMM0;
D KLmultiple_sequenceGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K118;
static _KLsimple_object_vectorGVKd_6 K119;
static _KLlimited_vector_typeGVKe K120;
static _KLkeyword_signatureAvaluesGVKi K121;
static _KLsimple_object_vectorGVKd_1 K122;
static _KLbyte_stringGVKd_19 K123;
static _KLsignatureAvaluesGVKi K124;
static _KLsignatureAvaluesGVKi K125;
static _KLsignatureAvaluesGVKi K126;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF152;
static D Kanonymous_of_forward_iteration_protocolF152I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF151;
static D Kanonymous_of_forward_iteration_protocolF151I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF150;
static D Kanonymous_of_forward_iteration_protocolF150I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF149;
static D Kanonymous_of_forward_iteration_protocolF149I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF148;
static D Kanonymous_of_forward_iteration_protocolF148I (D, D);
D Kextend_functionVKiI (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF140;
static D Kanonymous_of_forward_iteration_protocolF140I (D, D, D);
static _KLbyte_stringGVKd_23 K141;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_extend_functionF147;
static D Kanonymous_of_extend_functionF147I (D);
extern _KLsimple_methodGVKe Kfake_valuesVKi;
D Kfake_valuesVKiI (D, D);
static _KLsignatureGVKe K146;
static _KLsignatureAvaluesGVKi K153;
static _KLsimple_object_vectorGVKd_8 K154;
static _KLsimple_closure_methodGVKi_0 Kskip_until_commonF173;
static D Kskip_until_commonF173I (D, D, D, D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF172;
static D Kanonymous_of_forward_iteration_protocolF172I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF171;
static D Kanonymous_of_forward_iteration_protocolF171I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF170;
static D Kanonymous_of_forward_iteration_protocolF170I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF169;
static D Kanonymous_of_forward_iteration_protocolF169I (D, D);
D Kminimum_collectionVKiI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF168;
static D Kanonymous_of_forward_iteration_protocolF168I (D, D, D);
static _KLsignatureGVKe K174;
static _KLsimple_object_vectorGVKd_11 K175;
static _KLsignatureAvaluesGVKi K176;
static _KLsimple_closure_methodGVKi_0 KfinishedQF204;
static D KfinishedQF204I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Knext_statesF201;
static D Knext_statesF201I (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kskip_until_commonF198;
static D Kskip_until_commonF198I (D, D, D, D, D, D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF197;
static D Kanonymous_of_forward_iteration_protocolF197I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF196;
static D Kanonymous_of_forward_iteration_protocolF196I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF195;
static D Kanonymous_of_forward_iteration_protocolF195I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF194;
static D Kanonymous_of_forward_iteration_protocolF194I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF193;
static D Kanonymous_of_forward_iteration_protocolF193I (D, D, D);
static _KLsignatureGVKe K199;
static _KLsimple_object_vectorGVKd_13 K200;
static _KLsignatureGVKe K202;
static _KLsimple_object_vectorGVKd_4 K203;
static _KLsignatureAvaluesGVKi K205;
static _KLkeyword_signatureAvaluesGVKi K206;
static _KLsimple_object_vectorGVKd_2 K207;
static _KLsimple_object_vectorGVKd_2 K208;
static _KLsimple_object_vectorGVKd_1 K209;
static _KLkeyword_signatureAvaluesGVKi K210;
static _KLsimple_object_vectorGVKd_2 K211;
static _KLkeyword_signatureAvaluesGVKi K212;
static _KLsimple_object_vectorGVKd_2 K213;
static _KLbyte_stringGVKd_60 K214;
static _KLsignatureAvaluesGVKi K215;
static _KLsimple_object_vectorGVKd_1 K216;
static _KLunionGVKe K217;
static _KLunionGVKe K218;

/* Indirection variables */

static D IKJsmap_ = &KJsmap_;
static D IKJexplicits_ = &KJexplicits_;
static D IKJemap_ = &KJemap_;

/* Variables */

D Lmultiple_sequenceGVKi = &KLmultiple_sequenceGVKi;
D Lmultiple_explicit_key_collectionGVKi = &KLmultiple_explicit_key_collectionGVKi;
D Lmultiple_mixed_collectionGVKi = &KLmultiple_mixed_collectionGVKi;

/* Objects */

_KLsimple_methodGVKe Ktype_for_copyVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K215,
  &Ktype_for_copyVKdMM1I
};

_KLkeyword_methodGVKe KelementVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K212,
  &key_mep_4,
  &KelementVKdMM0I,
  &K207
};

_KLkeyword_methodGVKe KelementVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K210,
  &key_mep_4,
  &KelementVKdMM1I,
  &K207
};

_KLkeyword_methodGVKe KelementVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K206,
  &key_mep_4,
  &KelementVKdMM2I,
  &K207
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K205,
  &Kforward_iteration_protocolVKdMM4I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K176,
  &Kforward_iteration_protocolVKdMM3I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K153,
  &Kforward_iteration_protocolVKdMM2I
};

_KLsimple_methodGVKe Kkey_testVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K126,
  &Kkey_testVKdMM3I
};

_KLsimple_methodGVKe Kkey_testVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K125,
  &Kkey_testVKdMM2I
};

_KLsimple_methodGVKe Kkey_testVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K124,
  &Kkey_testVKdMM1I
};

static _KLbyte_stringGVKd_45 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Collection %= and %= have different key tests"
};

static _KLlimited_vector_typeGVKe K22 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLsequenceGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLclassGVKd KLmultiple_sequenceGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K123,
  &K114,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLmultiple_sequenceGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K114,
  (D) 4609,
  5,
  33554439,
  (D) 1
};

static _KLlimited_vector_typeGVKe K25 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLclassGVKd KLmultiple_explicit_key_collectionGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K113,
  &K84,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLmultiple_explicit_key_collectionGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K84,
  (D) 4097,
  9,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJsmap_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K83
};

static _KLsymbolGVKd KJexplicits_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K82
};

static _KLsymbolGVKd KJemap_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K81
};

_KLclassGVKd KLmultiple_mixed_collectionGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K80,
  &K34,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLmultiple_mixed_collectionGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K34,
  (D) 4097,
  21,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K34 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433749,
  &KLmultiple_mixed_collectionGVKi,
  &KLmultiple_mixed_collectionGVKiW,
  &KPfalseVKi,
  &K35,
  (D) 6489,
  &KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0,
  &K38,
  &K39,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K35,
  &K35,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Ksequence_collectionsVKiHLmultiple_mixed_collectionG,
  &Ksequence_mapVKiHLmultiple_mixed_collectionG,
  &Kexplicit_collectionsVKiHLmultiple_mixed_collectionG,
  &Kexplicit_mapVKiHLmultiple_mixed_collectionG,
  &Kkey_upper_boundVKiHLmultiple_mixed_collectionG
};

_KLkeyword_methodGVKe KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K43,
  &key_mep_2,
  &KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0I,
  &K44
};

static _KLsimple_object_vectorGVKd_1 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexplicit_key_collectionGVKd
};

static _KLsimple_object_vectorGVKd_6 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmultiple_mixed_collectionGVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLlimited_vector_typeGVKe K41 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLsequenceGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLlimited_vector_typeGVKe K42 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K43 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K45,
  &KDsignature_LobjectG_typesVKi,
  &K46
};

static _KLsimple_object_vectorGVKd_8 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJsequences_,
  &KPunboundVKi,
  &KJsmap_,
  &KPunboundVKi,
  &KJexplicits_,
  &KPunboundVKi,
  &KJemap_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsequences_,
  &KJsmap_,
  &KJexplicits_,
  &KJemap_
};

static _KLsimple_object_vectorGVKd_1 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmultiple_mixed_collectionGVKi
};

_KLinstance_slot_descriptorGVKe Ksequence_collectionsVKiHLmultiple_mixed_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_mixed_collectionGVKi,
  &KJsequences_,
  &Ksequence_collectionsVKi,
  &KPfalseVKi,
  &K76
};

_KLinstance_slot_descriptorGVKe Ksequence_mapVKiHLmultiple_mixed_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_mixed_collectionGVKi,
  &KJsmap_,
  &Ksequence_mapVKi,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

_KLinstance_slot_descriptorGVKe Kexplicit_collectionsVKiHLmultiple_mixed_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_mixed_collectionGVKi,
  &KJexplicits_,
  &Kexplicit_collectionsVKi,
  &KPfalseVKi,
  &K67
};

_KLinstance_slot_descriptorGVKe Kexplicit_mapVKiHLmultiple_mixed_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_mixed_collectionGVKi,
  &KJemap_,
  &Kexplicit_mapVKi,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

_KLinstance_slot_descriptorGVKe Kkey_upper_boundVKiHLmultiple_mixed_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLmultiple_mixed_collectionGVKi,
  &KPfalseVKi,
  &Kkey_upper_boundVKi,
  &Kkey_upper_bound_setterVKi,
  &K54
};

_KLsealed_generic_functionGVKe Kkey_upper_boundVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K61,
  &K60,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kkey_upper_bound_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K58,
  &K57,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K54 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K55,
  &KLintegerGVKd
};

static _KLsingletonGVKd K55 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsetter_methodGVKi Kkey_upper_bound_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kkey_upper_boundVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_upper_bound_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "key-upper-bound-setter"
};

_KLgetter_methodGVKi Kkey_upper_boundVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kkey_upper_boundVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_upper_boundVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "key-upper-bound"
};

_KLsealed_generic_functionGVKe Kexplicit_mapVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K65,
  &K64,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kexplicit_mapVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kexplicit_mapVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kexplicit_mapVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "explicit-map"
};

_KLsealed_generic_functionGVKe Kexplicit_collectionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K70,
  &K69,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLlimited_vector_typeGVKe K67 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLgetter_methodGVKi Kexplicit_collectionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kexplicit_collectionsVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kexplicit_collectionsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "explicit-collections"
};

_KLsealed_generic_functionGVKe Ksequence_mapVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K74,
  &K73,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ksequence_mapVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksequence_mapVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &Ksequence_mapVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "sequence-map"
};

_KLsealed_generic_functionGVKe Ksequence_collectionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K79,
  &K78,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLlimited_vector_typeGVKe K76 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLsequenceGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLgetter_methodGVKi Ksequence_collectionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksequence_collectionsVKiHLmultiple_mixed_collectionG
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Ksequence_collectionsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "sequence-collections"
};

static _KLbyte_stringGVKd_27 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<multiple-mixed-collection>"
};

static _KLbyte_stringGVKd_4 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "emap"
};

static _KLbyte_stringGVKd_9 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "explicits"
};

static _KLbyte_stringGVKd_4 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "smap"
};

static _KLimplementation_classGVKe K84 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLmultiple_explicit_key_collectionGVKi,
  &KLmultiple_explicit_key_collectionGVKiW,
  &KPfalseVKi,
  &K85,
  (D) 6481,
  &KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0,
  &K38,
  &K88,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K85,
  &K85,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KcollectionsVKiHLmultiple_explicit_key_collectionG,
  &Ksmallest_collection_indexVKiHLmultiple_explicit_key_collectionG
};

_KLkeyword_methodGVKe KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K90,
  &key_mep_2,
  &KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0I,
  &K91
};

static _KLsimple_object_vectorGVKd_6 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmultiple_explicit_key_collectionGVKi,
  &KPfalseVKi
};

static _KLlimited_vector_typeGVKe K89 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K90 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K92,
  &KDsignature_LobjectG_typesVKi,
  &K93
};

static _KLsimple_object_vectorGVKd_2 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcollections_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcollections_
};

static _KLsimple_object_vectorGVKd_1 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmultiple_explicit_key_collectionGVKi
};

_KLinstance_slot_descriptorGVKe KcollectionsVKiHLmultiple_explicit_key_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_explicit_key_collectionGVKi,
  &KJcollections_,
  &KcollectionsVKi,
  &KPfalseVKi,
  &K105
};

_KLinstance_slot_descriptorGVKe Ksmallest_collection_indexVKiHLmultiple_explicit_key_collectionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLmultiple_explicit_key_collectionGVKi,
  &KPfalseVKi,
  &Ksmallest_collection_indexVKi,
  &Ksmallest_collection_index_setterVKi,
  &K54
};

_KLsealed_generic_functionGVKe Ksmallest_collection_indexVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K103,
  &K102,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksmallest_collection_index_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K100,
  &K99,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ksmallest_collection_index_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksmallest_collection_indexVKiHLmultiple_explicit_key_collectionG
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Ksmallest_collection_index_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_32 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "smallest-collection-index-setter"
};

_KLgetter_methodGVKi Ksmallest_collection_indexVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksmallest_collection_indexVKiHLmultiple_explicit_key_collectionG
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &Ksmallest_collection_indexVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "smallest-collection-index"
};

_KLsealed_generic_functionGVKe KcollectionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K110,
  &K108,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLlimited_vector_typeGVKe K105 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLgetter_methodGVKi KcollectionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KcollectionsVKiHLmultiple_sequenceG
};

_KLgetter_methodGVKi KcollectionsVKiMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KcollectionsVKiHLmultiple_explicit_key_collectionG
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &KcollectionsVKiMM0,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &KcollectionsVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "collections"
};

_KLinstance_slot_descriptorGVKe KcollectionsVKiHLmultiple_sequenceG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLmultiple_sequenceGVKi,
  &KJcollections_,
  &KcollectionsVKi,
  &KPfalseVKi,
  &K112
};

static _KLlimited_vector_typeGVKe K112 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLsequenceGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_34 K113 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "<multiple-explicit-key-collection>"
};

static _KLimplementation_classGVKe K114 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLmultiple_sequenceGVKi,
  &KLmultiple_sequenceGVKiW,
  &KPfalseVKi,
  &K115,
  (D) 6473,
  &KLmultiple_sequenceGZ32ZconstructorVKiMM0,
  &K118,
  &K119,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K115,
  &K115,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KcollectionsVKiHLmultiple_sequenceG
};

_KLkeyword_methodGVKe KLmultiple_sequenceGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K121,
  &key_mep_2,
  &KLmultiple_sequenceGZ32ZconstructorVKiMM0I,
  &K91
};

static _KLsimple_object_vectorGVKd_1 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_6 K119 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmultiple_sequenceGVKi,
  &KPfalseVKi
};

static _KLlimited_vector_typeGVKe K120 = {
  &KLlimited_vector_typeGVKeW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLsimple_vectorGVKd,
  &KLsequenceGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K121 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K92,
  &KDsignature_LobjectG_typesVKi,
  &K122
};

static _KLsimple_object_vectorGVKd_1 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmultiple_sequenceGVKi
};

static _KLbyte_stringGVKd_19 K123 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<multiple-sequence>"
};

static _KLsignatureAvaluesGVKi K124 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K122,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsignatureAvaluesGVKi K125 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K46,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsignatureAvaluesGVKi K126 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K93,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF152 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF152I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF151 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &Kanonymous_of_forward_iteration_protocolF151I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF150 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF150I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF149 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF149I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF148 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF148I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF140 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &Kanonymous_of_forward_iteration_protocolF140I,
  (D) 1
};

static _KLbyte_stringGVKd_23 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Immutable collection %="
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_extend_functionF147 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_extend_functionF147I,
  (D) 1
};

_KLsimple_methodGVKe Kfake_valuesVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K146,
  &Kfake_valuesVKiI
};

static _KLsignatureGVKe K146 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LobjectG_typesVKi
};

static _KLsignatureAvaluesGVKi K153 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K122,
  &K154
};

static _KLsimple_object_vectorGVKd_8 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_closure_methodGVKi_0 Kskip_until_commonF173 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep,
  &K174,
  &Kskip_until_commonF173I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF172 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF172I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF171 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &Kanonymous_of_forward_iteration_protocolF171I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF170 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF170I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF169 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF169I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF168 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &Kanonymous_of_forward_iteration_protocolF168I,
  (D) 1
};

static _KLsignatureGVKe K174 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040237,
  &K175
};

static _KLsimple_object_vectorGVKd_11 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K176 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K93,
  &K154
};

static _KLsimple_closure_methodGVKi_0 KfinishedQF204 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KfinishedQF204I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Knext_statesF201 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K202,
  &Knext_statesF201I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kskip_until_commonF198 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep,
  &K199,
  &Kskip_until_commonF198I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF197 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF197I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF196 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF196I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF195 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF195I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF194 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_forward_iteration_protocolF194I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF193 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &Kanonymous_of_forward_iteration_protocolF193I,
  (D) 1
};

static _KLsignatureGVKe K199 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040245,
  &K200
};

static _KLsimple_object_vectorGVKd_13 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K202 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K203
};

static _KLsimple_object_vectorGVKd_4 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K205 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K46,
  &K154
};

static _KLkeyword_signatureAvaluesGVKi K206 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K208,
  &K209,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmultiple_mixed_collectionGVKi,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLkeyword_signatureAvaluesGVKi K210 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K211,
  &K209,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmultiple_explicit_key_collectionGVKi,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K212 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K213,
  &K209,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmultiple_sequenceGVKi,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_60 K214 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 241,
  "TYPE-FOR-COPY not implemented on the multiple collections %="
};

static _KLsignatureAvaluesGVKi K215 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K216,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K216 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K217
};

static _KLunionGVKe K217 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K218,
  &KLmultiple_mixed_collectionGVKi
};

static _KLunionGVKe K218 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLmultiple_sequenceGVKi,
  &KLmultiple_explicit_key_collectionGVKi
};

/* Code */

D Ktype_for_copyVKdMM1I (D mc_) {
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:568
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:572
  T2.vector_element_[0] = mc_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:572
  T3_0 = KerrorVKdMM1I(&K214, &T2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:568
  MV_SET_COUNT(1);
  return(T3_0);
}

D KelementVKdMM0I (D collection_, D key_, D Urest_, D default_) {
  DWORD i_T, i_;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D missing_;
  D T13;
  D T14;
  D T15;
  D T16;
  D result_;
  DWORD T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_2 T26 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:458
  T15 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:459
  T16 = SLOT_VALUE_INITD(T15, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:460
  result_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T16);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:462
  missing_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    T20 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    T18 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    T19 = primitive_machine_word_less_thanQ(i_,T18);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
      T14 = missing_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        T22 = primitive_machine_word_unsigned_less_thanQ(i_,T18);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
          T23 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 2, i_);
          T25 = T23;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
          T21_0 = Kelement_range_errorVKeI(T15, T20);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
          T24 = T21_0;
          T25 = T24;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        T26.vector_element_[0] = &KJdefault_;
        T26.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T6 = CONGRUENT_CALL3(T25, key_, &T26);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        T27 = SLOT_VALUE_INITD(result_, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        T28 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        T29 = primitive_machine_word_unsigned_less_thanQ(i_,T28);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T6, result_, 1, i_);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
          Kelement_range_errorVKeI(result_, T20);
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:466
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:465
        T30 = primitive_idQ(T6,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:464
        missing_ = T30;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
        T31 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
        i_T = T31;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:463
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:470
  T13 = missing_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:469
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:471
    T32 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:469
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:472
      T8_0 = Kelement_range_errorVKeI(collection_, key_);
      T10_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:473
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T9_0 = CONGRUENT_CALL2(&KLvectorGVKd, default_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:473
      T33_0 = T9_0;
      T10_0 = T33_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:469
    T11_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:470
    T7_0 = result_;
    T11_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:453
  MV_SET_COUNT(1);
  return(T11_0);
}

D KelementVKdMM1I (D collection_, D key_, D Urest_, D default_) {
  DWORD i_T, i_;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D missing_;
  D T13;
  D T14;
  D T15;
  D T16;
  D result_;
  DWORD T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_2 T26 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:478
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:483
  T15 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:484
  T16 = SLOT_VALUE_INITD(T15, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:485
  result_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T16);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:487
  missing_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    T20 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    T18 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    T19 = primitive_machine_word_less_thanQ(i_,T18);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
      T14 = missing_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        T22 = primitive_machine_word_unsigned_less_thanQ(i_,T18);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
          T23 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 2, i_);
          T25 = T23;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
          T21_0 = Kelement_range_errorVKeI(T15, T20);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
          T24 = T21_0;
          T25 = T24;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        T26.vector_element_[0] = &KJdefault_;
        T26.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T6 = CONGRUENT_CALL3(T25, key_, &T26);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        T27 = SLOT_VALUE_INITD(result_, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        T28 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        T29 = primitive_machine_word_unsigned_less_thanQ(i_,T28);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T6, result_, 1, i_);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
          Kelement_range_errorVKeI(result_, T20);
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:491
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:490
        T30 = primitive_idQ(T6,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:489
        missing_ = T30;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
        T31 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
        i_T = T31;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:488
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:495
  T13 = missing_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:494
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:496
    T32 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:494
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:497
      T8_0 = Kelement_range_errorVKeI(collection_, key_);
      T10_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:498
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T9_0 = CONGRUENT_CALL2(&KLvectorGVKd, default_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:498
      T33_0 = T9_0;
      T10_0 = T33_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:494
    T11_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:495
    T7_0 = result_;
    T11_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:494
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:478
  MV_SET_COUNT(1);
  return(T11_0);
}

D KelementVKdMM2I (D collection_, D key_, D Urest_, D default_) {
  DWORD iF5T, iF5;
  D T6;
  DWORD iF7T, iF7;
  D T8;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D missing_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D result_;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_2 T37 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T38_0;
  D T39;
  DWORD T40;
  D T41;
  D T42;
  D T43;
  DWORD T44;
  D T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51;
  DWORD T52;
  D T53;
  D T54;
  D T55_0;
  D T56;
  D T57;
  D T58;
  D T59;
  _KLsimple_object_vectorGVKd_2 T60 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T61_0;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  DWORD T67;
  D T68;
  DWORD T69;
  D T70;
  DWORD T71;
  DWORD T72;
  D T73;
  D T74;
  DWORD T75;
  D T76;
  D T77_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:506
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:510
  T18 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:511
  T19 = SLOT_VALUE_INITD(collection_, 2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:512
  T20 = SLOT_VALUE_INITD(T18, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:513
  T21 = SLOT_VALUE_INITD(T19, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:514
  T22 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:515
  T23 = SLOT_VALUE_INITD(collection_, 3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  T24 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  T25 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  T26 = primitive_machine_word_logxor(T25,1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  T27 = primitive_machine_word_add_signal_overflow(T24,T26);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  T28 = primitive_cast_raw_as_integer(T27);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:516
  result_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T28);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:518
  missing_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
  iF5T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    iF5 = iF5T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    T31 = primitive_cast_raw_as_integer(iF5);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    T30 = primitive_machine_word_less_thanQ(iF5,T24);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
      T17 = missing_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T33 = primitive_machine_word_unsigned_less_thanQ(iF5,T24);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T34 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 2, iF5);
          T36 = T34;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T32_0 = Kelement_range_errorVKeI(T18, T31);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T35 = T32_0;
          T36 = T35;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T37.vector_element_[0] = &KJdefault_;
        T37.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T6 = CONGRUENT_CALL3(T36, key_, &T37);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T39 = SLOT_VALUE_INITD(T22, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T40 = primitive_cast_integer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T41 = primitive_machine_word_unsigned_less_thanQ(iF5,T40);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        if (T41 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T42 = REPEATED_D_SLOT_VALUE_TAGGED(T22, 1, iF5);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T48 = primitive_cast_integer_as_raw(T42);
          T44 = T48;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T38_0 = Kelement_range_errorVKeI(T22, T31);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T43 = T38_0;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          T49 = primitive_cast_integer_as_raw(T43);
          T44 = T49;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T50 = primitive_cast_raw_as_integer(T44);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T45 = SLOT_VALUE_INITD(result_, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T46 = primitive_cast_integer_as_raw(T45);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        T47 = primitive_machine_word_unsigned_less_thanQ(T44,T46);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        if (T47 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T6, result_, 1, T44);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
          Kelement_range_errorVKeI(result_, T50);
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:522
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:521
        T51 = primitive_idQ(T6,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:520
        missing_ = T51;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
        T52 = primitive_machine_word_add_signal_overflow(iF5,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
        iF5T = T52;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:519
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
  iF7T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    iF7 = iF7T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    T54 = primitive_cast_raw_as_integer(iF7);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    T53 = primitive_machine_word_less_thanQ(iF7,T25);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    if (T53 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
      T16 = missing_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T56 = primitive_machine_word_unsigned_less_thanQ(iF7,T25);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        if (T56 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T57 = REPEATED_D_SLOT_VALUE_TAGGED(T19, 2, iF7);
          T59 = T57;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T55_0 = Kelement_range_errorVKeI(T19, T54);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T58 = T55_0;
          T59 = T58;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T60.vector_element_[0] = &KJdefault_;
        T60.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T8 = CONGRUENT_CALL3(T59, key_, &T60);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T62 = SLOT_VALUE_INITD(T23, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T63 = primitive_cast_integer_as_raw(T62);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T64 = primitive_machine_word_unsigned_less_thanQ(iF7,T63);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        if (T64 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T65 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 1, iF7);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T71 = primitive_cast_integer_as_raw(T65);
          T67 = T71;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T61_0 = Kelement_range_errorVKeI(T23, T54);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T66 = T61_0;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          T72 = primitive_cast_integer_as_raw(T66);
          T67 = T72;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T73 = primitive_cast_raw_as_integer(T67);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T68 = SLOT_VALUE_INITD(result_, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T69 = primitive_cast_integer_as_raw(T68);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        T70 = primitive_machine_word_unsigned_less_thanQ(T67,T69);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        if (T70 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T8, result_, 1, T67);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
          Kelement_range_errorVKeI(result_, T73);
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:528
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:527
        T74 = primitive_idQ(T8,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:526
        missing_ = T74;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
        T75 = primitive_machine_word_add_signal_overflow(iF7,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
        iF7T = T75;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:525
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:532
  T15 = missing_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:531
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:533
    T76 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:531
    if (T76 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:534
      T10_0 = Kelement_range_errorVKeI(collection_, key_);
      T12_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:535
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T11_0 = CONGRUENT_CALL2(&KLvectorGVKd, default_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:535
      T77_0 = T11_0;
      T12_0 = T77_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:531
    T13_0 = T12_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:532
    T9_0 = result_;
    T13_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:531
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:506
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kforward_iteration_protocolVKdMM4I (D coll_) {
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
  D inits_;
  D limits_;
  D nexts_;
  D finishedQs_;
  D elems_;
  D copies_;
  D T12;
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
  D T24_0;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T42_1;
  D T42_2;
  D T42_3;
  D T42_4;
  D T42_5;
  D T42_6;
  D T42_7;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:335
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:341
  T19 = SLOT_VALUE_INITD(coll_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:342
  T20 = SLOT_VALUE_INITD(coll_, 2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:343
  T21 = SLOT_VALUE_INITD(coll_, 3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:344
  T22 = SLOT_VALUE_INITD(coll_, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:347
  T23 = SLOT_VALUE_INITD(coll_, 4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:347
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:347
    T32 = T23;
    T4 = T32;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    T2 = Kminimum_collectionVKiI(T20);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    T25 = SLOT_VALUE_INITD(T20, 1);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    T26 = primitive_cast_integer_as_raw(T2);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    T27 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    T28 = primitive_machine_word_unsigned_less_thanQ(T26,T27);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
      T29 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 2, T26);
      T31 = T29;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
      T24_0 = Kelement_range_errorVKeI(T20, T2);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
      T30 = T24_0;
      T31 = T30;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:350
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:349
    CONGRUENT_CALL_PROLOG(&Kmaximum_sequence_keyVKi, 1);
    T3 = CONGRUENT_CALL1(T31);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:348
    SLOT_VALUE_SETTER(T3, coll_, 4);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:347
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:353
  T5_0 = Kextend_functionVKiI(&Kforward_iteration_protocolVKd, T19);
  T5_1 = MV_GET_ELT(1);
  T5_2 = MV_GET_ELT(2);
  T5_3 = MV_GET_ELT(3);
  T5_4 = MV_GET_ELT(4);
  T5_5 = MV_GET_ELT(5);
  T5_6 = MV_GET_ELT(6);
  T5_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  inits_ = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  limits_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  nexts_ = T5_2;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  finishedQs_ = T5_3;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  elems_ = T5_5;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:352
  copies_ = T5_7;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:355
  T33 = SLOT_VALUE_INITD(T19, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:356
  T34 = SLOT_VALUE_INITD(T20, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T35 = primitive_cast_integer_as_raw(T33);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T36 = primitive_cast_integer_as_raw(T34);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T37 = primitive_machine_word_logxor(T36,1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T38 = primitive_machine_word_add_signal_overflow(T35,T37);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T39 = primitive_cast_raw_as_integer(T38);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:358
  T40 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T39);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:364
  T12 = MAKE_CLOSURE_INITD(&KfinishedQF204, 4, T33, T19, finishedQs_, T4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:379
  T13 = &Knext_statesF201;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:379
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:386
  T14 = MAKE_CLOSURE(&Kskip_until_commonF198, 2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:386
  INIT_CLOSURE(T14, 2, T13, T12);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:416
  T41 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:416
  SLOT_VALUE_SETTER((D) 1, T41, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:416
  SLOT_VALUE_SETTER(inits_, T41, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:416
  get_teb()->function = T14;
  T15 = Kskip_until_commonF198I(T40, T34, T33, T22, T21, T20, T19, elems_, finishedQs_, nexts_, limits_, T4, T41);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:420
  T16 = MAKE_CLOSURE(&Kanonymous_of_forward_iteration_protocolF197, 15);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:420
  INIT_CLOSURE(T16, 15, T40, T34, T33, T22, T21, T20, T19, T14, T13, T12, elems_, finishedQs_, nexts_, limits_, T4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:429
  T17 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF196, 1, T40);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:435
  T18 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF195, 3, T33, T19, copies_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:415
  T42_0 = T15;
  T42_1 = limits_;
  T42_2 = T16;
  T42_3 = T12;
  T42_4 = &Kanonymous_of_forward_iteration_protocolF194;
  T42_5 = T17;
  T42_6 = &Kanonymous_of_forward_iteration_protocolF193;
  T42_7 = T18;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:335
  MV_SET_ELT(1, T42_1);
  MV_SET_ELT(2, T42_2);
  MV_SET_ELT(3, T42_3);
  MV_SET_ELT(4, T42_4);
  MV_SET_ELT(5, T42_5);
  MV_SET_ELT(6, T42_6);
  MV_SET_ELT(7, T42_7);
  MV_SET_COUNT(8);
  return(T42_0);
}

D Kforward_iteration_protocolVKdMM3I (D coll_) {
  D T2;
  DWORD T3;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_key_;
  D current_element_;
  D copy_state_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  DWORD T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;
  D T32_0;
  D T32_1;
  D T32_2;
  D T32_3;
  D T32_4;
  D T32_5;
  D T32_6;
  D T32_7;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:238
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:244
  T18 = SLOT_VALUE_INITD(coll_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:245
  T19 = SLOT_VALUE_INITD(T18, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:248
  T20 = SLOT_VALUE_INITD(coll_, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:248
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:248
    T21 = T20;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
    T28 = primitive_cast_integer_as_raw(T21);
    T3 = T28;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:249
    T2 = Kminimum_collectionVKiI(T18);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:249
    SLOT_VALUE_SETTER(T2, coll_, 1);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
    T29 = primitive_cast_integer_as_raw(T2);
    T3 = T29;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
  T30 = primitive_cast_raw_as_integer(T3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
  T23 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
  T24 = primitive_machine_word_unsigned_less_thanQ(T3,T23);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
    T25 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 2, T3);
    T27 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
    T22_0 = Kelement_range_errorVKeI(T18, T30);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
    T26 = T22_0;
    T27 = T26;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:251
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(T27);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  initial_state_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  limit_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  next_state_ = T4_2;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  finished_stateQ_ = T4_3;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  current_key_ = T4_4;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  current_element_ = T4_5;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:253
  copy_state_ = T4_7;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:256
  T31 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T19);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:258
  T12 = &Kskip_until_commonF173;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:283
  T13 = Kskip_until_commonF173I(T31, T30, T27, T19, T18, current_element_, current_key_, finished_stateQ_, next_state_, limit_, initial_state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:287
  T14 = MAKE_CLOSURE(&Kanonymous_of_forward_iteration_protocolF172, 11);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:287
  INIT_CLOSURE(T14, 11, T31, T30, T27, T19, T18, T12, current_element_, current_key_, finished_stateQ_, next_state_, limit_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:291
  T15 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF171, 2, T27, finished_stateQ_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:295
  T16 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF170, 2, T27, current_key_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:299
  T17 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF169, 1, T31);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:282
  T32_0 = T13;
  T32_1 = limit_;
  T32_2 = T14;
  T32_3 = T15;
  T32_4 = T16;
  T32_5 = T17;
  T32_6 = &Kanonymous_of_forward_iteration_protocolF168;
  T32_7 = copy_state_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:238
  MV_SET_ELT(1, T32_1);
  MV_SET_ELT(2, T32_2);
  MV_SET_ELT(3, T32_3);
  MV_SET_ELT(4, T32_4);
  MV_SET_ELT(5, T32_5);
  MV_SET_ELT(6, T32_6);
  MV_SET_ELT(7, T32_7);
  MV_SET_COUNT(8);
  return(T32_0);
}

D Kforward_iteration_protocolVKdMM2I (D coll_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;
  D inits_;
  D limits_;
  D nexts_;
  D finishedQs_;
  D keys_;
  D elems_;
  D copies_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D T17_2;
  D T17_3;
  D T17_4;
  D T17_5;
  D T17_6;
  D T17_7;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:151
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:156
  T15 = SLOT_VALUE_INITD(coll_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:159
  T2_0 = Kextend_functionVKiI(&Kforward_iteration_protocolVKd, T15);
  T2_1 = MV_GET_ELT(1);
  T2_2 = MV_GET_ELT(2);
  T2_3 = MV_GET_ELT(3);
  T2_4 = MV_GET_ELT(4);
  T2_5 = MV_GET_ELT(5);
  T2_6 = MV_GET_ELT(6);
  T2_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  inits_ = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  limits_ = T2_1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  nexts_ = T2_2;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  finishedQs_ = T2_3;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  keys_ = T2_4;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  elems_ = T2_5;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:158
  copies_ = T2_7;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:161
  T16 = SLOT_VALUE_INITD(T15, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:168
  T10 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF152, 3, T16, T15, nexts_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:175
  T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF151, 3, T16, T15, finishedQs_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T12 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF150, 2, T15, keys_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:186
  T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF149, 3, T16, T15, elems_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:199
  T14 = MAKE_CLOSURE_INITD(&Kanonymous_of_forward_iteration_protocolF148, 3, T16, T15, copies_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:163
  T17_0 = inits_;
  T17_1 = limits_;
  T17_2 = T10;
  T17_3 = T11;
  T17_4 = T12;
  T17_5 = T13;
  T17_6 = &Kanonymous_of_forward_iteration_protocolF140;
  T17_7 = T14;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:151
  MV_SET_ELT(1, T17_1);
  MV_SET_ELT(2, T17_2);
  MV_SET_ELT(3, T17_3);
  MV_SET_ELT(4, T17_4);
  MV_SET_ELT(5, T17_5);
  MV_SET_ELT(6, T17_6);
  MV_SET_ELT(7, T17_7);
  MV_SET_COUNT(8);
  return(T17_0);
}

D Kkey_testVKdMM3I (D coll_) {
  D T2_0;
  D T3;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:558
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  T3 = SLOT_VALUE_INITD(coll_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  T5 = SLOT_VALUE_INITD(T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  T7 = primitive_machine_word_unsigned_less_thanQ(1,T6);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
    T8 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 2, 1);
    T10 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
    T4_0 = Kelement_range_errorVKeI(T3, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
    T9 = T4_0;
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:560
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T2_0 = CONGRUENT_CALL1(T10);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:558
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkey_testVKdMM2I (D coll_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:552
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:554
  T2_0 = &KEEVKd;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:552
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kkey_testVKdMM1I (D coll_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:547
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:549
  T2_0 = &KEEVKd;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:547
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmultiple_collectionVKiI (D coll_, D colls_) {
  D T3_0;
  D coll_class_;
  D kt_;
  DWORD T6T, T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D all_the_same_;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  _KLsimple_object_vectorGVKd_2 T30 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T32;
  D cv_;
  D T34;
  _KLsimple_object_vectorGVKd_2 T35 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T36 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
  T22 = SLOT_VALUE_INITD(colls_, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
  T23 = primitive_cast_integer_as_raw(T22);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
  T24 = primitive_machine_word_equalQ(T23,1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
    T3_0 = coll_;
    T18_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:71
    T25 = primitive_instanceQ(coll_,&KLsequenceGVKd);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:71
    if (T25 != &KPfalseVKi) {
      coll_class_ = &KLsequenceGVKd;
    } else {
      coll_class_ = &KLexplicit_key_collectionGVKd;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:71
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:74
    CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
    kt_ = CONGRUENT_CALL1(coll_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:75
    all_the_same_ = &KPtrueVKi;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
    T6T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
      T6 = T6T;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
      T26 = primitive_machine_word_equalQ(T6,T23);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
      if (T26 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
        T27 = REPEATED_D_SLOT_VALUE_TAGGED(colls_, 1, T6);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:77
        T21 = all_the_same_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:77
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:77
          T28 = primitive_instanceQ(T27,coll_class_);
          T7 = T28;
        } else {
          T7 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:77
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:77
        all_the_same_ = T7;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:78
        T8 = CALL1(&Kkey_testVKd, T27);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:78
        T29 = primitive_idQ(T8,kt_);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:78
        if (T29 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:81
          T30.vector_element_[0] = coll_;
          T30.vector_element_[1] = T27;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:81
          T9 = KlistVKdI(&T30);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:79
          T31.vector_element_[0] = &KJformat_string_;
          T31.vector_element_[1] = &K21;
          T31.vector_element_[2] = &KJformat_arguments_;
          T31.vector_element_[3] = T9;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:79
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T10 = CONGRUENT_CALL2(&KLkey_test_errorGVKi, &T31);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:79
          KerrorVKdMM0I(T10, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:78
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
        T32 = primitive_machine_word_add_signal_overflow(T6,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
        T6T = T32;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:76
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:84
    cv_ = APPLY2(&KvectorVKd, coll_, colls_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:86
    T20 = all_the_same_;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:85
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:88
      T34 = primitive_idQ(coll_class_,&KLsequenceGVKd);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:85
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:90
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T12 = CONGRUENT_CALL2(&K22, cv_);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:89
        T35.vector_element_[0] = &KJcollections_;
        T35.vector_element_[1] = T12;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:89
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T13_0 = CONGRUENT_CALL2(&KLmultiple_sequenceGVKi, &T35);
        T16_0 = T13_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:93
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T14 = CONGRUENT_CALL2(&K25, cv_);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:92
        T36.vector_element_[0] = &KJcollections_;
        T36.vector_element_[1] = T14;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:92
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T15_0 = CONGRUENT_CALL2(&KLmultiple_explicit_key_collectionGVKi, &T36);
        T16_0 = T15_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:85
      T17_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:87
      T11_0 = Kmixed_collectionVKiI(cv_);
      T17_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:85
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:65
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kmixed_collectionVKiI (D colls_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7T, T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D exp_count_;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20T, T20;
  DWORD i_T, i_;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D seq_count_;
  D T29;
  D T30;
  D T31;
  D T32;
  D scnt_;
  D T34;
  D T35;
  D T36;
  D ecnt_;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D scols_;
  D T48_0;
  D smap_;
  D T50;
  D T51;
  D T52;
  D T53;
  D ecols_;
  D T55_0;
  D emap_;
  D T57;
  DWORD T58;
  D T59;
  _KLsimple_object_vectorGVKd_8 T60 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:103
  seq_count_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T1 = CONGRUENT_CALL1(colls_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T2 = T1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T3 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T4 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T5 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T6 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  T7T = T2;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
    T7 = T7T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
    T8 = CALL3(T5, colls_, T7, T3);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
      T9 = CALL2(T6, colls_, T7);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
      T42 = primitive_instanceQ(T9,&KLsequenceGVKd);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
        T32 = seq_count_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T10 = CONGRUENT_CALL2(T32, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
        seq_count_ = T10;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:105
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
      T11 = CALL2(T4, colls_, T7);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
      T7T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:107
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T12 = CONGRUENT_CALL1(colls_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:107
  T31 = seq_count_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:107
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  exp_count_ = CONGRUENT_CALL2(T12, T31);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  T30 = seq_count_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  T45 = primitive_idQ(T30,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  if (T45 != &KPfalseVKi) {
    T43 = &KPfalseVKi;
  } else {
    T43 = T30;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  if (T43 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
    T46 = T43;
    T44 = T46;
  } else {
    T44 = (D) 1;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  T48_0 = KmakeVKdMM27I(&KLsimple_element_type_vectorGVKe, &KPempty_vectorVKi, &KPfalseVKi, &KLsequenceGVKd, T44);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:110
  scols_ = T48_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:112
  T29 = seq_count_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:112
  smap_ = KmakeVKdMM24I(&KLsimple_integer_vectorGVKe, &KPempty_vectorVKi, (D) 1, T29);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  T52 = primitive_idQ(exp_count_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  if (T52 != &KPfalseVKi) {
    T50 = &KPfalseVKi;
  } else {
    T50 = exp_count_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  if (T50 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
    T53 = T50;
    T51 = T53;
  } else {
    T51 = (D) 1;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  T55_0 = KmakeVKdMM27I(&KLsimple_element_type_vectorGVKe, &KPempty_vectorVKi, &KPfalseVKi, &KLexplicit_key_collectionGVKd, T51);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:114
  ecols_ = T55_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:116
  emap_ = KmakeVKdMM24I(&KLsimple_integer_vectorGVKe, &KPempty_vectorVKi, (D) 1, exp_count_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:118
  scnt_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:118
  ecnt_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T14 = CONGRUENT_CALL1(colls_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T15 = T14;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T16 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T17 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T18 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T19 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  T20T = T15;
  i_T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    T20 = T20T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    T59 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    T22 = CALL3(T18, colls_, T20, T16);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    if (T22 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
      T23 = CALL2(T19, colls_, T20);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:120
      T57 = primitive_instanceQ(T23,&KLsequenceGVKd);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:120
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:87
        T41 = T23;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        T36 = scnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T41, scols_, T36);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        T35 = scnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T59, smap_, T35);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        T34 = scnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T24 = CONGRUENT_CALL2(T34, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:121
        scnt_ = T24;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        T40 = ecnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T23, ecols_, T40);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        T39 = ecnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T59, emap_, T39);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        T38 = ecnt_;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T25 = CONGRUENT_CALL2(T38, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:123
        ecnt_ = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:120
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
      T26 = CALL2(T17, colls_, T20);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
      T58 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
      T20T = T26;
      i_T = T58;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:127
  T60.vector_element_[0] = &KJsequences_;
  T60.vector_element_[1] = scols_;
  T60.vector_element_[2] = IKJsmap_;
  T60.vector_element_[3] = smap_;
  T60.vector_element_[4] = IKJexplicits_;
  T60.vector_element_[5] = ecols_;
  T60.vector_element_[6] = IKJemap_;
  T60.vector_element_[7] = emap_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:127
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T27_0 = CONGRUENT_CALL2(&KLmultiple_mixed_collectionGVKi, &T60);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:101
  MV_SET_COUNT(1);
  return(T27_0);
}

D KLmultiple_mixed_collectionGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_sequence_collections_, D Uunique_sequence_map_, D Uunique_explicit_collections_, D Uunique_explicit_map_) {
  D T7;
  D Uunique_sequence_collectionsF8;
  D T9;
  D Uunique_sequence_mapF10;
  D T11;
  D Uunique_explicit_collectionsF12;
  D T13;
  D Uunique_explicit_mapF14;
  D T15;
  D Uunique_sequence_collectionsF16;
  D Uunique_sequence_mapF17;
  D Uunique_explicit_collectionsF18;
  D Uunique_explicit_mapF19;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  T21 = primitive_idQ(Uunique_sequence_collections_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  if (T21 != &KPfalseVKi) {
    T22.vector_element_[0] = &KJsequences_;
    T23 = KerrorVKdMM1I(&K40, &T22);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
    T7 = T23;
    Uunique_sequence_collectionsF8 = T7;
  } else {
    Uunique_sequence_collectionsF8 = Uunique_sequence_collections_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  T24 = primitive_idQ(Uunique_sequence_map_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = IKJsmap_;
    T26 = KerrorVKdMM1I(&K40, &T25);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
    T9 = T26;
    Uunique_sequence_mapF10 = T9;
  } else {
    Uunique_sequence_mapF10 = Uunique_sequence_map_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  T27 = primitive_idQ(Uunique_explicit_collections_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  if (T27 != &KPfalseVKi) {
    T28.vector_element_[0] = IKJexplicits_;
    T29 = KerrorVKdMM1I(&K40, &T28);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
    T11 = T29;
    Uunique_explicit_collectionsF12 = T11;
  } else {
    Uunique_explicit_collectionsF12 = Uunique_explicit_collections_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  T30 = primitive_idQ(Uunique_explicit_map_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  if (T30 != &KPfalseVKi) {
    T31.vector_element_[0] = IKJemap_;
    T32 = KerrorVKdMM1I(&K40, &T31);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
    T13 = T32;
    Uunique_explicit_mapF14 = T13;
  } else {
    Uunique_explicit_mapF14 = Uunique_explicit_map_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  T15 = primitive_object_allocate_filled(6,&KLmultiple_mixed_collectionGVKiW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_sequence_collectionsF16 = Uunique_sequence_collectionsF8;
  SLOT_VALUE_SETTER(Uunique_sequence_collectionsF16, T15, 0);
  Uunique_sequence_mapF17 = Uunique_sequence_mapF10;
  SLOT_VALUE_SETTER(Uunique_sequence_mapF17, T15, 1);
  Uunique_explicit_collectionsF18 = Uunique_explicit_collectionsF12;
  SLOT_VALUE_SETTER(Uunique_explicit_collectionsF18, T15, 2);
  Uunique_explicit_mapF19 = Uunique_explicit_mapF14;
  SLOT_VALUE_SETTER(Uunique_explicit_mapF19, T15, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T15, 4);
  APPLY2(&KinitializeVKd, T15, init_args_);
  T20_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:48
  MV_SET_COUNT(1);
  return(T20_0);
}

D KLmultiple_explicit_key_collectionGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_collections_) {
  D T4;
  D Uunique_collectionsF5;
  D T6;
  D Uunique_collectionsF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
  T9 = primitive_idQ(Uunique_collections_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = &KJcollections_;
    T11 = KerrorVKdMM1I(&K40, &T10);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
    T4 = T11;
    Uunique_collectionsF5 = T4;
  } else {
    Uunique_collectionsF5 = Uunique_collections_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
  T6 = primitive_object_allocate_filled(3,&KLmultiple_explicit_key_collectionGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_collectionsF7 = Uunique_collectionsF5;
  SLOT_VALUE_SETTER(Uunique_collectionsF7, T6, 0);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 1);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:35
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLmultiple_sequenceGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_collections_) {
  D T4;
  D Uunique_collectionsF5;
  D T6;
  D Uunique_collectionsF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
  T9 = primitive_idQ(Uunique_collections_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = &KJcollections_;
    T11 = KerrorVKdMM1I(&K40, &T10);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
    T4 = T11;
    Uunique_collectionsF5 = T4;
  } else {
    Uunique_collectionsF5 = Uunique_collections_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
  T6 = primitive_object_allocate_filled(2,&KLmultiple_sequenceGVKiW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_collectionsF7 = Uunique_collectionsF5;
  SLOT_VALUE_SETTER(Uunique_collectionsF7, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:26
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kanonymous_of_forward_iteration_protocolF152I (D c_, D states_) {
  DWORD i_T, i_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  DWORD T10;
  D T11;
  D T12_0;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  D T18;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    T9 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    T10 = primitive_cast_integer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T3 = CALL2(&KelementVKd, CREF(2), T9);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T4 = T3;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T13 = SLOT_VALUE_INITD(CREF(1), 1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T14 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T15 = primitive_machine_word_unsigned_less_thanQ(i_,T14);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
        T16 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
        T18 = T16;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
        T12_0 = Kelement_range_errorVKeI(CREF(1), T9);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
        T17 = T12_0;
        T18 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T5 = CALL2(&KelementVKd, states_, T9);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      T6 = CALL2(T4, T18, T5);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:170
      CALL3(&Kelement_setterVKd, T6, states_, T9);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
      T8 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
      i_T = T8;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:172
  T7 = states_;
  MV_SET_ELT(0, states_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:168
  return(T7);
}

static D Kanonymous_of_forward_iteration_protocolF151I (D c_, D states_, D limits_) {
  DWORD i_T, i_;
  D finishedQ_T, finishedQ_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;
  D T14;
  D T15_0;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:175
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
  i_T = 1;
  finishedQ_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    T12 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    finishedQ_ = finishedQ_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    T13 = primitive_cast_integer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    T14 = primitive_machine_word_less_thanQ(i_,T13);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
      if (finishedQ_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
        T11 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T5 = CALL2(&KelementVKd, CREF(2), T12);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T6 = T5;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T16 = SLOT_VALUE_INITD(CREF(1), 1);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T17 = primitive_cast_integer_as_raw(T16);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T18 = primitive_machine_word_unsigned_less_thanQ(i_,T17);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
          T19 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
          T21 = T19;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
          T15_0 = Kelement_range_errorVKeI(CREF(1), T12);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
          T20 = T15_0;
          T21 = T20;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T7 = CALL2(&KelementVKd, states_, T12);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T8 = CALL2(&KelementVKd, limits_, T12);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:178
        T9 = CALL3(T6, T21, T7, T8);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
        i_T = T11;
        finishedQ_T = T9;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:180
    T10 = finishedQ_;
    MV_SET_ELT(0, finishedQ_);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:176
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:175
  return(T10);
}

static D Kanonymous_of_forward_iteration_protocolF150I (D seq_, D states_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T2 = CALL2(&KelementVKd, CREF(1), (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T7 = SLOT_VALUE_INITD(CREF(0), 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T9 = primitive_machine_word_unsigned_less_thanQ(1,T8);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
    T10 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(0), 2, 1);
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
    T6_0 = Kelement_range_errorVKeI(CREF(0), (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
    T11 = T6_0;
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T4 = CALL2(&KelementVKd, states_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  T5 = CALL2(T3, T12, T4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:184
  return(T5);
}

static D Kanonymous_of_forward_iteration_protocolF149I (D seq_, D states_) {
  DWORD i_T, i_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:188
  T8 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
    T12 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
    T14 = primitive_cast_integer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
    T15 = primitive_machine_word_less_thanQ(i_,T14);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T3 = CALL2(&KelementVKd, CREF(2), T12);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T4 = T3;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T17 = SLOT_VALUE_INITD(CREF(1), 1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T18 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T19 = primitive_machine_word_unsigned_less_thanQ(i_,T18);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
        T20 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
        T22 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
        T16_0 = Kelement_range_errorVKeI(CREF(1), T12);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
        T21 = T16_0;
        T22 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T5 = CALL2(&KelementVKd, states_, T12);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T6 = CALL2(T4, T22, T5);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T9 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T10 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      T11 = primitive_machine_word_unsigned_less_thanQ(i_,T10);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T6, T8, 1, i_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
        Kelement_range_errorVKeI(T8, T12);
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:190
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
      T13 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
      i_T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:192
  T7 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:186
  return(T7);
}

static D Kanonymous_of_forward_iteration_protocolF148I (D seq_, D states_) {
  DWORD i_T, i_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D copy_state_;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  D T23;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:199
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:200
  copy_state_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
    T13 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
    T15 = primitive_cast_integer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
    T16 = primitive_machine_word_less_thanQ(i_,T15);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T4 = CALL2(&KelementVKd, CREF(2), T13);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T5 = T4;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T18 = SLOT_VALUE_INITD(CREF(1), 1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T19 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T20 = primitive_machine_word_unsigned_less_thanQ(i_,T19);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
        T21 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
        T23 = T21;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
        T17_0 = Kelement_range_errorVKeI(CREF(1), T13);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
        T22 = T17_0;
        T23 = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T6 = CALL2(&KelementVKd, states_, T13);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T7 = CALL2(T5, T23, T6);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T10 = SLOT_VALUE_INITD(copy_state_, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T11 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      T12 = primitive_machine_word_unsigned_less_thanQ(i_,T11);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T7, copy_state_, 1, i_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
        Kelement_range_errorVKeI(copy_state_, T13);
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:202
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
      T14 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
      i_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:204
  T8 = copy_state_;
  MV_SET_ELT(0, copy_state_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:199
  return(T8);
}

D Kextend_functionVKiI (D function_, D vec_) {
  D T2;
  D T3;
  D results_;
  D T5;
  D results_list_;
  D T7;
  DWORD i_T, i_;
  D T9;
  D T10;
  D T11;
  D next_results_;
  DWORD T13T, T13;
  DWORD T14T, T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:218
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T2 = CONGRUENT_CALL3(vec_, (D) 1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:218
  T3 = CALL1(function_, T2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:218
  results_ = MV_GET_REST_AT(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_extend_functionF147, 1, vec_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  T17_0 = Kobject_classVKdI(results_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  T18 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  T16 = CALL3(&Kmap_as_oneVKi, T18, T5, results_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:219
  results_list_ = T16;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(vec_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
  i_T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
    T30 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T9 = CONGRUENT_CALL2(T30, T7);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:222
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T10 = CONGRUENT_CALL3(vec_, T30, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:222
      T11 = CALL1(function_, T10);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:222
      next_results_ = MV_GET_REST_AT(T11, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      T19 = SLOT_VALUE_INITD(next_results_, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      T21 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      T20 = SLOT_VALUE_INITD(results_list_, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      T23 = primitive_cast_integer_as_raw(T20);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      T13T = 1;
      T14T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        T13 = T13T;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        T14 = T14T;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        T22 = primitive_machine_word_equalQ(T13,T21);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        if (T22 != &KPfalseVKi) {
          T15 = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T24 = primitive_machine_word_equalQ(T14,T23);
          T15 = T24;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        if (T15 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T25 = REPEATED_D_SLOT_VALUE_TAGGED(next_results_, 1, T13);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T26 = REPEATED_D_SLOT_VALUE_TAGGED(results_list_, 1, T14);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          CALL3(&Kelement_setterVKd, T25, T26, T30);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T27 = primitive_machine_word_add_signal_overflow(T13,4);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T28 = primitive_machine_word_add_signal_overflow(T14,4);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
          T13T = T27;
          T14T = T28;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:223
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
      T29 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
      i_T = T29;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:221
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:225
  T31 = APPLY1(&Kfake_valuesVKi, results_list_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:217
  return(T31);
}

static D Kanonymous_of_forward_iteration_protocolF140I (D vals_, D seq_, D states_) {
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:195
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:196
  T3.vector_element_[0] = seq_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:196
  T4 = KerrorVKdMM1I(&K141, &T3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:195
  return(T4);
}

static D Kanonymous_of_extend_functionF147I (D r_) {
  D T1;
  D T2_0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T1 = CONGRUENT_CALL1(CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  T2_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, r_, T1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:220
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kfake_valuesVKiI (D x_, D r_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:214
  T3 = APPLY2(&KvaluesVKd, x_, r_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:213
  return(T3);
}

static D Kskip_until_commonF173I (D implicit_argumentF64, D implicit_argumentF63, D implicit_argumentF62, D implicit_argumentF61, D implicit_argumentF60, D current_element_, D current_key_, D finished_stateQ_, D next_state_, D limit_, D state_) {
  D returnPexit_15_;
  D T12;
  D key_;
  D i_T, i_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D stateF21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D common_keyQ_;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  D T47_0;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D T52;
  D T53;
  _KLsimple_object_vectorGVKd_2 T54 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:258
  stateF21 = state_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
    T23 = stateF21;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
    T18 = CALL3(finished_stateQ_, implicit_argumentF62, T23, limit_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
    if (T18 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:261
      T27 = stateF21;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:261
      key_ = CALL2(current_key_, implicit_argumentF62, T27);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:262
      common_keyQ_ = &KPtrueVKi;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
      i_T = (D) 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        i_ = i_T;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        T44 = primitive_cast_integer_as_raw(i_);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        T45 = primitive_cast_integer_as_raw(implicit_argumentF61);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        T46 = primitive_machine_word_less_thanQ(T44,T45);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        if (T46 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
          T30 = common_keyQ_;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
          if (T30 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:265
            T31 = primitive_cast_integer_as_raw(implicit_argumentF63);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:265
            T32 = primitive_machine_word_equalQ(T44,T31);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:264
            if (T32 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              T26 = stateF21;
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              T15 = CALL2(current_element_, implicit_argumentF62, T26);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              T33 = SLOT_VALUE_INITD(implicit_argumentF64, 0);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              T34 = primitive_cast_integer_as_raw(T33);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              T35 = primitive_machine_word_unsigned_less_thanQ(T44,T34);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
              if (T35 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
                REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T15, implicit_argumentF64, 1, T44);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
                Kelement_range_errorVKeI(implicit_argumentF64, i_);
              }
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:266
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              T48 = SLOT_VALUE_INITD(implicit_argumentF60, 1);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              T49 = primitive_cast_integer_as_raw(T48);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              T50 = primitive_machine_word_unsigned_less_thanQ(T44,T49);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              if (T50 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
                T51 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF60, 2, T44);
                T53 = T51;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
                T47_0 = Kelement_range_errorVKeI(implicit_argumentF60, i_);
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
                T52 = T47_0;
                T53 = T52;
              }
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              T54.vector_element_[0] = &KJdefault_;
              T54.vector_element_[1] = &Knot_found_objectVKi;
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:268
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T16 = CONGRUENT_CALL3(T53, key_, &T54);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              T36 = SLOT_VALUE_INITD(implicit_argumentF64, 0);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              T37 = primitive_cast_integer_as_raw(T36);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              T38 = primitive_machine_word_unsigned_less_thanQ(T44,T37);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              if (T38 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
                REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T16, implicit_argumentF64, 1, T44);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
                Kelement_range_errorVKeI(implicit_argumentF64, i_);
              }
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:267
              T39 = primitive_idQ(T16,&Knot_found_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:264
              if (T39 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:269
                common_keyQ_ = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:264
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:264
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
            T40 = primitive_machine_word_add_signal_overflow(T44,4);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
            T41 = primitive_cast_raw_as_integer(T40);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
            i_T = T41;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:263
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:272
      T29 = common_keyQ_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:272
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:273
        T25 = stateF21;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:273
        T42.vector_element_[0] = T25;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:259
        T43 = MV_SET_REST_AT(&T42, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:259
        T20 = T43;
        goto L2;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:275
        T24 = stateF21;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:275
        T17 = CALL2(next_state_, implicit_argumentF62, T24);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:275
        stateF21 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:272
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:278
  T22 = stateF21;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:278
  T19 = T22;
  MV_SET_ELT(0, T22);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:259
  T20 = T19;
  L2: ;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:258
  return(T20);
}

static D Kanonymous_of_forward_iteration_protocolF172I (D c_, D state_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:287
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:288
  T2 = CALL2(CREF(9), CREF(2), state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:288
  T3 = Kskip_until_commonF173I(CREF(0), CREF(1), CREF(2), CREF(3), CREF(4), CREF(6), CREF(7), CREF(8), CREF(9), CREF(10), T2);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:287
  return(T3);
}

static D Kanonymous_of_forward_iteration_protocolF171I (D c_, D state_, D limit_) {
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:292
  T3 = CALL3(CREF(1), CREF(0), state_, limit_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:291
  return(T3);
}

static D Kanonymous_of_forward_iteration_protocolF170I (D c_, D state_) {
  D T2;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:295
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:296
  T2 = CALL2(CREF(1), CREF(0), state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:295
  return(T2);
}

static D Kanonymous_of_forward_iteration_protocolF169I (D c_, D state_) {
  D T3_0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:299
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:299
  T3_0 = Kcopy_sequenceVKdMM2I(CREF(0), &KPempty_vectorVKi, (D) 1, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:299
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kminimum_collectionVKiI (D collections_) {
  D T1;
  D min_sizeF2;
  D T3;
  DWORD i_T, i_;
  D T5;
  D T6;
  D s_;
  D T8;
  D T9_0;
  D index_;
  D T11;
  D min_sizeF12;
  D T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:313
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:315
  index_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:316
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T1 = CONGRUENT_CALL3(collections_, (D) 1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:316
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  min_sizeF2 = CONGRUENT_CALL1(T1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:316
  min_sizeF12 = min_sizeF2;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(collections_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
  i_T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
    T15 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T5 = CONGRUENT_CALL2(T15, T3);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:318
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T6 = CONGRUENT_CALL3(collections_, T15, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:318
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      s_ = CONGRUENT_CALL1(T6);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
      T13 = min_sizeF12;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T8 = CONGRUENT_CALL2(s_, T13);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
        index_ = T15;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
        min_sizeF12 = s_;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:319
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
      T14 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
      i_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:317
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:321
  T11 = index_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:321
  T9_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:313
  MV_SET_COUNT(1);
  return(T9_0);
}

static D Kanonymous_of_forward_iteration_protocolF168I (D vals_, D seq_, D state_) {
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:301
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:302
  T3.vector_element_[0] = seq_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:302
  T4 = KerrorVKdMM1I(&K141, &T3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:301
  return(T4);
}

static D KfinishedQF204I (D c_, D state_, D limits_) {
  D indexF4;
  D states_;
  D T6;
  DWORD i_T, i_;
  D finishedQ_T, finishedQ_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D Utmp_;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21;
  D T22_0;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:364
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:365
  indexF4 = CALL1(&KheadVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:366
  states_ = CALL1(&KtailVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:368
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T16_0 = CONGRUENT_CALL2(CREF(3), indexF4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:368
  Utmp_ = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:368
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:368
    T6 = Utmp_;
    MV_SET_ELT(0, Utmp_);
    MV_SET_COUNT(1);
    T15 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
    i_T = 1;
    finishedQ_T = &KPfalseVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      T21 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      finishedQ_ = finishedQ_T;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      T19 = primitive_cast_integer_as_raw(CREF(0));
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      T20 = primitive_machine_word_less_thanQ(i_,T19);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
        if (finishedQ_ == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
          T18 = primitive_machine_word_add_signal_overflow(i_,4);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T9 = CALL2(&KelementVKd, CREF(2), T21);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T10 = T9;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T23 = SLOT_VALUE_INITD(CREF(1), 1);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T24 = primitive_cast_integer_as_raw(T23);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T25 = primitive_machine_word_unsigned_less_thanQ(i_,T24);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          if (T25 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
            T26 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
            T28 = T26;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
            T22_0 = Kelement_range_errorVKeI(CREF(1), T21);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
            T27 = T22_0;
            T28 = T27;
          }
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T11 = CALL2(&KelementVKd, states_, T21);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T12 = CALL2(&KelementVKd, limits_, T21);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:372
          T13 = CALL3(T10, T28, T11, T12);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
          i_T = T18;
          finishedQ_T = T13;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:374
      T14 = finishedQ_;
      MV_SET_ELT(0, finishedQ_);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:370
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:368
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:364
  return(T15);
}

static D Knext_statesF201I (D implicit_argumentF24, D implicit_argumentF23, D nexts_, D states_) {
  D i_T, i_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:379
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
  i_T = (D) 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    T12 = primitive_cast_integer_as_raw(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    T13 = primitive_cast_integer_as_raw(implicit_argumentF24);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    T14 = primitive_machine_word_less_thanQ(T12,T13);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T5 = CALL2(&KelementVKd, nexts_, i_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T6 = T5;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T16 = SLOT_VALUE_INITD(implicit_argumentF23, 1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T17 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T18 = primitive_machine_word_unsigned_less_thanQ(T12,T17);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
        T19 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF23, 2, T12);
        T21 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
        T15_0 = Kelement_range_errorVKeI(implicit_argumentF23, i_);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
        T20 = T15_0;
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T7 = CALL2(&KelementVKd, states_, i_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      T8 = CALL2(T6, T21, T7);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:381
      CALL3(&Kelement_setterVKd, T8, states_, i_);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
      T10 = primitive_machine_word_add_signal_overflow(T12,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
      T11 = primitive_cast_raw_as_integer(T10);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:380
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:383
  T9 = states_;
  MV_SET_ELT(0, states_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:379
  return(T9);
}

static D Kskip_until_commonF198I (D implicit_argumentF101, D implicit_argumentF100, D implicit_argumentF99, D implicit_argumentF98, D implicit_argumentF97, D implicit_argumentF96, D implicit_argumentF95, D elems_, D finishedQs_, D nexts_, D limits_, D implicit_argumentF0, D state_) {
  D keyF14;
  D statesF15;
  D returnPexit_16_;
  D iF17T, iF17;
  D T18;
  D iF19T, iF19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D keyF28;
  D T29;
  D T30;
  D T31;
  D statesF32;
  D T33;
  D T34;
  D T35;
  D common_keyQ_;
  D T37;
  D T38;
  D T39;
  DWORD T40;
  D T41;
  DWORD T42;
  D T43;
  D T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51_0;
  D T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  D T58;
  DWORD T59;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64_0;
  D T65;
  DWORD T66;
  D T67;
  D T68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  D T76;
  D T77_0;
  D T78;
  DWORD T79;
  D T80;
  D T81;
  D T82;
  D T83;
  _KLsimple_object_vectorGVKd_2 T84 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T85_0;
  D T86;
  DWORD T87;
  D T88;
  D T89;
  D T90;
  D T91;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:386
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:387
  keyF14 = CALL1(&KheadVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:387
  keyF28 = keyF14;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:388
  statesF15 = CALL1(&KtailVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:388
  statesF32 = statesF15;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:390
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
    get_teb()->function = CREF(1);
    T26 = KfinishedQF204I(implicit_argumentF95, state_, limits_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
    if (T26 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:392
      common_keyQ_ = &KPtrueVKi;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
      iF17T = (D) 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        iF17 = iF17T;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        T45 = primitive_cast_integer_as_raw(iF17);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        T46 = primitive_cast_integer_as_raw(implicit_argumentF100);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        T47 = primitive_machine_word_less_thanQ(T45,T46);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        if (T47 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
          T38 = common_keyQ_;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
          if (T38 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            T78 = SLOT_VALUE_INITD(implicit_argumentF96, 1);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            T79 = primitive_cast_integer_as_raw(T78);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            T80 = primitive_machine_word_unsigned_less_thanQ(T45,T79);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            if (T80 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
              T81 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF96, 2, T45);
              T83 = T81;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
              T77_0 = Kelement_range_errorVKeI(implicit_argumentF96, iF17);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
              T82 = T77_0;
              T83 = T82;
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            T31 = keyF28;
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            T84.vector_element_[0] = &KJdefault_;
            T84.vector_element_[1] = &Knot_found_objectVKi;
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:395
            CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
            T18 = CONGRUENT_CALL3(T83, T31, &T84);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T65 = SLOT_VALUE_INITD(implicit_argumentF97, 0);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T66 = primitive_cast_integer_as_raw(T65);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T67 = primitive_machine_word_unsigned_less_thanQ(T45,T66);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            if (T67 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              T68 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF97, 1, T45);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              T74 = primitive_cast_integer_as_raw(T68);
              T70 = T74;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              T64_0 = Kelement_range_errorVKeI(implicit_argumentF97, iF17);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              T69 = T64_0;
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              T75 = primitive_cast_integer_as_raw(T69);
              T70 = T75;
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T76 = primitive_cast_raw_as_integer(T70);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T71 = SLOT_VALUE_INITD(implicit_argumentF101, 0);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T72 = primitive_cast_integer_as_raw(T71);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T73 = primitive_machine_word_unsigned_less_thanQ(T70,T72);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            if (T73 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T18, implicit_argumentF101, 1, T70);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
              Kelement_range_errorVKeI(implicit_argumentF101, T76);
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            T39 = primitive_idQ(T18,&Knot_found_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            if (T39 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:396
              common_keyQ_ = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:394
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
            T40 = primitive_machine_word_add_signal_overflow(T45,4);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
            T41 = primitive_cast_raw_as_integer(T40);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
            iF17T = T41;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        }
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:393
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:399
      T37 = common_keyQ_;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:399
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
        iF19T = (D) 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          iF19 = iF19T;
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          T48 = primitive_cast_integer_as_raw(iF19);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          T49 = primitive_cast_integer_as_raw(implicit_argumentF99);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          T50 = primitive_machine_word_less_thanQ(T48,T49);
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          if (T50 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T20 = CALL2(&KelementVKd, elems_, iF19);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T21 = T20;
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T86 = SLOT_VALUE_INITD(implicit_argumentF95, 1);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T87 = primitive_cast_integer_as_raw(T86);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T88 = primitive_machine_word_unsigned_less_thanQ(T48,T87);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            if (T88 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
              T89 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF95, 2, T48);
              T91 = T89;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
              T85_0 = Kelement_range_errorVKeI(implicit_argumentF95, iF19);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
              T90 = T85_0;
              T91 = T90;
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T35 = statesF32;
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T22 = CALL2(&KelementVKd, T35, iF19);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:402
            T23 = CALL2(T21, T91, T22);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T52 = SLOT_VALUE_INITD(implicit_argumentF98, 0);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T53 = primitive_cast_integer_as_raw(T52);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T54 = primitive_machine_word_unsigned_less_thanQ(T48,T53);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            if (T54 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              T55 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF98, 1, T48);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              T61 = primitive_cast_integer_as_raw(T55);
              T57 = T61;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              T51_0 = Kelement_range_errorVKeI(implicit_argumentF98, iF19);
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              T56 = T51_0;
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              T62 = primitive_cast_integer_as_raw(T56);
              T57 = T62;
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T63 = primitive_cast_raw_as_integer(T57);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T58 = SLOT_VALUE_INITD(implicit_argumentF101, 0);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T59 = primitive_cast_integer_as_raw(T58);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            T60 = primitive_machine_word_unsigned_less_thanQ(T57,T59);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            if (T60 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T23, implicit_argumentF101, 1, T57);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
              Kelement_range_errorVKeI(implicit_argumentF101, T63);
            }
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:401
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
            T42 = primitive_machine_word_add_signal_overflow(T48,4);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
            T43 = primitive_cast_raw_as_integer(T42);
            // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
            iF19T = T43;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
          // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:400
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:390
        T44 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:390
        T44;
        goto L3;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        T34 = statesF32;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        T24 = Knext_statesF201I(implicit_argumentF99, implicit_argumentF95, nexts_, T34);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        statesF32 = T24;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        T30 = keyF28;
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T25 = CONGRUENT_CALL2(T30, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:406
        keyF28 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:399
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:391
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:390
  L3: ;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:410
  T29 = keyF28;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:410
  CALL2(&Khead_setterVKd, T29, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:411
  T33 = statesF32;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:411
  CALL2(&Ktail_setterVKd, T33, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:412
  T27 = state_;
  MV_SET_ELT(0, state_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:386
  return(T27);
}

static D Kanonymous_of_forward_iteration_protocolF197I (D c_, D state_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  T2 = CALL1(&KheadVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T3 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  CALL2(&Khead_setterVKd, T3, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  T4 = CALL1(&KtailVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  T5 = Knext_statesF201I(CREF(2), CREF(6), CREF(12), T4);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:421
  CALL2(&Ktail_setterVKd, T5, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:422
  get_teb()->function = CREF(7);
  T6 = Kskip_until_commonF198I(CREF(0), CREF(1), CREF(2), CREF(3), CREF(4), CREF(5), CREF(6), CREF(10), CREF(11), CREF(12), CREF(13), CREF(14), state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:420
  return(T6);
}

static D Kanonymous_of_forward_iteration_protocolF196I (D seq_, D state_) {
  D T3_0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:429
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:429
  T3_0 = Kcopy_sequenceVKdMM2I(CREF(0), &KPempty_vectorVKi, (D) 1, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:429
  MV_SET_COUNT(1);
  return(T3_0);
}

static D Kanonymous_of_forward_iteration_protocolF195I (D seq_, D state_) {
  D states_;
  DWORD i_T, i_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D copy_state_;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17_0;
  DWORD T18;
  D T19;
  D T20_0;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:435
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:436
  states_ = CALL1(&KtailVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:437
  copy_state_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
    T14 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
    T18 = primitive_cast_integer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
    T19 = primitive_machine_word_less_thanQ(i_,T18);
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T5 = CALL2(&KelementVKd, CREF(2), T14);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T6 = T5;
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T21 = SLOT_VALUE_INITD(CREF(1), 1);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T22 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T23 = primitive_machine_word_unsigned_less_thanQ(i_,T22);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
        T24 = REPEATED_D_SLOT_VALUE_TAGGED(CREF(1), 2, i_);
        T26 = T24;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
        T20_0 = Kelement_range_errorVKeI(CREF(1), T14);
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
        T25 = T20_0;
        T26 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T7 = CALL2(&KelementVKd, states_, T14);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T8 = CALL2(T6, T26, T7);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T11 = SLOT_VALUE_INITD(copy_state_, 0);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T12 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      T13 = primitive_machine_word_unsigned_less_thanQ(i_,T12);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T8, copy_state_, 1, i_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
        Kelement_range_errorVKeI(copy_state_, T14);
      }
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:439
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
    // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:441
  T9 = CALL1(&KheadVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:441
  T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:441
  SLOT_VALUE_SETTER(T9, T16, 0);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:441
  SLOT_VALUE_SETTER(copy_state_, T16, 1);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:441
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:435
  MV_SET_COUNT(1);
  return(T17_0);
}

static D Kanonymous_of_forward_iteration_protocolF194I (D seq_, D state_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:427
  T2 = CALL1(&KheadVKd, state_);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:427
  return(T2);
}

static D Kanonymous_of_forward_iteration_protocolF193I (D vals_, D seq_, D state_) {
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:431
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:432
  T3.vector_element_[0] = seq_;
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:432
  T4 = KerrorVKdMM1I(&K141, &T3);
  // /opt/opendylan-2013.1/sources/dylan/multiple-collection.dylan:431
  return(T4);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_multiple_collection_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsmap_);
    if (T0 != &KJsmap_) {
      primitive_slot_value_setter(T0, &Ksequence_mapVKiHLmultiple_mixed_collectionG, 3);
      primitive_repeated_slot_value_setter(T0, &K45, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K44, 1, 2);
      IKJsmap_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJexplicits_);
    if (T0 != &KJexplicits_) {
      primitive_slot_value_setter(T0, &Kexplicit_collectionsVKiHLmultiple_mixed_collectionG, 3);
      primitive_repeated_slot_value_setter(T0, &K45, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K44, 1, 4);
      IKJexplicits_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJemap_);
    if (T0 != &KJemap_) {
      primitive_slot_value_setter(T0, &Kexplicit_mapVKiHLmultiple_mixed_collectionG, 3);
      primitive_repeated_slot_value_setter(T0, &K45, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K44, 1, 6);
      IKJemap_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_multiple_collection_for_user () {
  return;
}


/* eof */
