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
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

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
} _KLsequenceGVKd;

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
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(58);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(13);

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
} _KLintegerGVKd;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLkey_test_errorGVKi;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinvalid_index_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLiteration_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D key_test_;
  D acc_buffer_;
  D acc_index_;
  D acc_size_;
} _KLsequence_accumulatorGVKi;

typedef struct {
  D wrapper;
  D key_test_;
  D acc_buffer_;
  D acc_index_;
  D acc_size_;
} _KLkeyed_accumulatorGVKi;

typedef struct {
  D wrapper;
  D key_test_;
  D acc_buffer_;
  D acc_index_;
  D acc_size_;
} _KLaccumulatorGVKi;


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
D Kelement_range_errorVKeI (D, D);
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJkey_test_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
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
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLincremental_generic_functionGVKe Kkey_testVKd;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_collectionG_typesVKi;
extern _KLunionGVKe KLmutable_collection_typeGVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLkey_test_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLkey_test_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_explicit_key_collectionG_typesVKi;
extern _KLunionGVKe KLmutable_explicit_key_collection_typeGVKi;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLclassGVKd KLinvalid_index_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinvalid_index_errorGVKiW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_sequenceG_typesVKi;
extern _KLunionGVKe KLmutable_sequence_typeGVKi;
D KelementVKdMM11I (D vector_, D index_, D Urest_, D default_);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLiteration_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLiteration_errorGVKiW;
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe K_VKd;

/* Defined object declarations */

extern _KLsimple_methodGVKe KsizeVKdMM3;
D KsizeVKdMM3I (D);
extern _KLsimple_methodGVKe KsizeVKdMM4;
D KsizeVKdMM4I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM1;
D Kforward_iteration_protocolVKdMM1I (D accumulator_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM0;
D Kforward_iteration_protocolVKdMM0I (D accumulator_);
extern _KLgetter_methodGVKi Kkey_testVKdMM0;
extern _KLclassGVKd KLsequence_accumulatorGVKi;
extern _KLmm_wrapperGVKi_0 KLsequence_accumulatorGVKiW;
extern _KLsealed_generic_functionGVKe Kconvert_accumulator_asVKi;
extern _KLsimple_methodGVKe KaddXVKdMM0;
D KaddXVKdMM0I (D, D);
extern _KLclassGVKd KLkeyed_accumulatorGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyed_accumulatorGVKiW;
extern _KLsimple_methodGVKe Kelement_setterVKdMM0;
D Kelement_setterVKdMM0I (D, D, D);
D Kextend_accumulatorVKiI (D);
static _KLsignatureGVKe K19;
static _KLsimple_object_vectorGVKd_3 K20;
static _KLimplementation_classGVKe K21;
static _KLsimple_object_vectorGVKd_4 K22;
extern _KLkeyword_methodGVKe KLkeyed_accumulatorGZ32ZconstructorVKiMM0;
D KLkeyed_accumulatorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_2 K25;
static _KLsimple_object_vectorGVKd_8 K26;
extern _KLclassGVKd KLaccumulatorGVKi;
extern _KLmm_wrapperGVKi_0 KLaccumulatorGVKiW;
static _KLimplementation_classGVKe K29;
static _KLsimple_object_vectorGVKd_1 K30;
static _KLsimple_object_vectorGVKd_6 K31;
static _KLsimple_object_vectorGVKd_1 K32;
static _KLsimple_object_vectorGVKd_2 K33;
static _KLbyte_stringGVKd_13 K34;
static D K36I ();
static _KLkeyword_signatureAvaluesGVKi K37;
static _KLsimple_object_vectorGVKd_2 K38;
static _KLsimple_object_vectorGVKd_1 K39;
static _KLsimple_object_vectorGVKd_1 K40;
extern _KLinstance_slot_descriptorGVKe Kkey_testVKdHLaccumulatorG;
extern _KLinstance_slot_descriptorGVKe Kacc_bufferVKiHLaccumulatorG;
extern _KLinstance_slot_descriptorGVKe Kacc_indexVKiHLaccumulatorG;
extern _KLinstance_slot_descriptorGVKe Kacc_sizeVKiHLaccumulatorG;
extern _KLsealed_generic_functionGVKe Kacc_sizeVKi;
extern _KLsealed_generic_functionGVKe Kacc_size_setterVKi;
static _KLunionGVKe K47;
static _KLsingletonGVKd K48;
extern _KLsetter_methodGVKi Kacc_size_setterVKiMM0;
static _KLpairGVKd K50;
static _KLbyte_stringGVKd_15 K51;
extern _KLgetter_methodGVKi Kacc_sizeVKiMM0;
static _KLpairGVKd K53;
static _KLbyte_stringGVKd_8 K54;
extern _KLsealed_generic_functionGVKe Kacc_indexVKi;
extern _KLsealed_generic_functionGVKe Kacc_index_setterVKi;
extern _KLsetter_methodGVKi Kacc_index_setterVKiMM0;
static _KLpairGVKd K58;
static _KLbyte_stringGVKd_16 K59;
extern _KLgetter_methodGVKi Kacc_indexVKiMM0;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_9 K62;
static _KLsimple_closure_methodGVKi_0 K73;
static D K73I ();
extern _KLsealed_generic_functionGVKe Kacc_bufferVKi;
extern _KLsealed_generic_functionGVKe Kacc_buffer_setterVKi;
extern _KLsetter_methodGVKi Kacc_buffer_setterVKiMM0;
static _KLpairGVKd K68;
static _KLbyte_stringGVKd_17 K69;
extern _KLgetter_methodGVKi Kacc_bufferVKiMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_10 K72;
static _KLsignatureGVKe K74;
static _KLbyte_stringGVKd_19 K75;
static _KLsignatureAvaluesGVKi K76;
static _KLsimple_object_vectorGVKd_2 K77;
static _KLsimple_object_vectorGVKd_1 K78;
extern _KLsimple_methodGVKe Kconvert_accumulator_asVKiMM0;
D Kconvert_accumulator_asVKiMM0I (D, D);
extern _KLsimple_methodGVKe Kconvert_accumulator_asVKiMM1;
D Kconvert_accumulator_asVKiMM1I (D, D);
extern _KLsimple_methodGVKe Kconvert_accumulator_asVKiMM2;
D Kconvert_accumulator_asVKiMM2I (D, D);
extern _KLsimple_methodGVKe Kconvert_accumulator_asVKiMM3;
D Kconvert_accumulator_asVKiMM3I (D, D);
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLsignatureAvaluesGVKi K91;
static _KLbyte_stringGVKd_22 K92;
static _KLsimple_object_vectorGVKd_2 K93;
D Kcheck_key_test_eqVKiMM0I (D, D);
static _KLbyte_stringGVKd_45 K95;
static _KLsignatureAvaluesGVKi K96;
static _KLsimple_object_vectorGVKd_2 K97;
static _KLbyte_stringGVKd_58 K98;
static _KLsignatureAvaluesGVKi K99;
static _KLsimple_object_vectorGVKd_2 K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_2 K102;
static _KLsignatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_2 K104;
static _KLimplementation_classGVKe K105;
extern _KLkeyword_methodGVKe KLsequence_accumulatorGZ32ZconstructorVKiMM0;
D KLsequence_accumulatorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_2 K108;
static _KLsimple_object_vectorGVKd_8 K109;
static D K111I ();
static _KLkeyword_signatureAvaluesGVKi K112;
static _KLbyte_stringGVKd_22 K113;
extern _KLsimple_methodGVKe Knext_state_key_accVKi;
D Knext_state_key_accVKiI (D accumulator_, D state_);
extern _KLsimple_methodGVKe Kfinished_stateQ_accVKi;
D Kfinished_stateQ_accVKiI (D acc_, D state_, D limit_);
extern _KLsimple_methodGVKe Kcurrent_key_key_accVKi;
D Kcurrent_key_key_accVKiI (D accumulator_, D state_);
extern _KLsimple_methodGVKe Kcurrent_element_accVKi;
D Kcurrent_element_accVKiI (D accumulator_, D state_);
extern _KLsimple_methodGVKe Kcurrent_element_setter_accVKi;
D Kcurrent_element_setter_accVKiI (D value_, D accumulator_, D state_);
extern _KLsimple_methodGVKe Kcopy_state_accVKi;
D Kcopy_state_accVKiI (D accumulator_, D state_);
static _KLbyte_stringGVKd_51 K126;
static _KLsignatureGVKe K127;
static _KLsimple_object_vectorGVKd_2 K128;
static _KLbyte_stringGVKd_41 K129;
static _KLsignatureGVKe K130;
static _KLsimple_object_vectorGVKd_3 K131;
static _KLsignatureGVKe K132;
static _KLsignatureGVKe K133;
static _KLsimple_object_vectorGVKd_2 K134;
static _KLsignatureAvaluesGVKi K135;
static _KLsimple_object_vectorGVKd_3 K136;
static _KLsignatureAvaluesGVKi K137;
static _KLsignatureAvaluesGVKi K138;
static _KLsimple_object_vectorGVKd_8 K139;
extern _KLsimple_methodGVKe Knext_state_seq_accVKi;
D Knext_state_seq_accVKiI (D accumulator_, D state_);
extern _KLsimple_methodGVKe Kcurrent_key_seq_accVKi;
D Kcurrent_key_seq_accVKiI (D accumulator_, D state_);
static _KLsignatureGVKe K144;
static _KLsimple_object_vectorGVKd_2 K145;
static _KLsignatureAvaluesGVKi K146;
static _KLsignatureAvaluesGVKi K147;
D Kinvert_accumulatorVKiI (D);
static _KLsignatureAvaluesGVKi K149;
static _KLsignatureAvaluesGVKi K150;
static _KLpairGVKd K151;
static _KLpairGVKd K152;

/* Indirection variables */


/* Variables */

D LaccumulatorGVKi = &KLaccumulatorGVKi;
D Lkeyed_accumulatorGVKi = &KLkeyed_accumulatorGVKi;
D Lsequence_accumulatorGVKi = &KLsequence_accumulatorGVKi;
D convert_accumulator_asVKi = &Kconvert_accumulator_asVKi;
D next_state_key_accVKi = &Knext_state_key_accVKi;
D acc_buffer_setterVKi = &Kacc_buffer_setterVKi;
D finished_stateQ_accVKi = &Kfinished_stateQ_accVKi;
D current_key_key_accVKi = &Kcurrent_key_key_accVKi;
D current_element_accVKi = &Kcurrent_element_accVKi;
D current_element_setter_accVKi = &Kcurrent_element_setter_accVKi;
D copy_state_accVKi = &Kcopy_state_accVKi;
D next_state_seq_accVKi = &Knext_state_seq_accVKi;
D current_key_seq_accVKi = &Kcurrent_key_seq_accVKi;

/* Objects */

_KLsimple_methodGVKe KsizeVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K150,
  &KsizeVKdMM3I
};

_KLsimple_methodGVKe KsizeVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K149,
  &KsizeVKdMM4I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K147,
  &Kforward_iteration_protocolVKdMM1I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K138,
  &Kforward_iteration_protocolVKdMM0I
};

_KLgetter_methodGVKi Kkey_testVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kkey_testVKdHLaccumulatorG
};

_KLclassGVKd KLsequence_accumulatorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K113,
  &K105,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsequence_accumulatorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K105,
  (D) 4609,
  17,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kconvert_accumulator_asVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K91,
  (D) 1,
  &K92,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KaddXVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K76,
  &KaddXVKdMM0I
};

_KLclassGVKd KLkeyed_accumulatorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K75,
  &K21,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLkeyed_accumulatorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K21,
  (D) 4097,
  17,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kelement_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K19,
  &Kelement_setterVKdMM0I
};

static _KLsignatureGVKe K19 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K20
};

static _KLsimple_object_vectorGVKd_3 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLkeyed_accumulatorGVKi,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K21 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433745,
  &KLkeyed_accumulatorGVKi,
  &KLkeyed_accumulatorGVKiW,
  &KPfalseVKi,
  &K22,
  (D) 6457,
  &KLkeyed_accumulatorGZ32ZconstructorVKiMM0,
  &K25,
  &K26,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K22,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kkey_testVKdHLaccumulatorG,
  &Kacc_bufferVKiHLaccumulatorG,
  &Kacc_indexVKiHLaccumulatorG,
  &Kacc_sizeVKiHLaccumulatorG
};

_KLkeyword_methodGVKe KLkeyed_accumulatorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K37,
  &key_mep_2,
  &KLkeyed_accumulatorGZ32ZconstructorVKiMM0I,
  &K38
};

static _KLsimple_object_vectorGVKd_2 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLaccumulatorGVKi,
  &KLexplicit_key_collectionGVKd
};

static _KLsimple_object_vectorGVKd_8 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLaccumulatorGVKi,
  &KLkeyed_accumulatorGVKi
};

_KLclassGVKd KLaccumulatorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K34,
  &K29,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLaccumulatorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K29,
  (D) 4097,
  17,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K29 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 460587025,
  &KLaccumulatorGVKi,
  &KLaccumulatorGVKiW,
  &KPfalseVKi,
  &K22,
  (D) 6449,
  &Kdefault_class_constructorVKi,
  &K30,
  &K31,
  (D) 21,
  &K32,
  &K33,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K151,
  &KPempty_vectorVKi,
  &K22,
  &K22,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmutable_collectionGVKd
};

static _KLsimple_object_vectorGVKd_6 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLmutable_collectionGVKd,
  &KLaccumulatorGVKi
};

static _KLsimple_object_vectorGVKd_1 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 25
};

static _KLsimple_object_vectorGVKd_2 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLbyte_stringGVKd_13 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<accumulator>"
};

static _KLkeyword_signatureAvaluesGVKi K37 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K39,
  &KDsignature_LobjectG_typesVKi,
  &K40
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJkey_test_,
  &KEEVKd
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJkey_test_
};

static _KLsimple_object_vectorGVKd_1 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLkeyed_accumulatorGVKi
};

_KLinstance_slot_descriptorGVKe Kkey_testVKdHLaccumulatorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KEEVKd,
  &KLaccumulatorGVKi,
  &KJkey_test_,
  &Kkey_testVKd,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kacc_bufferVKiHLaccumulatorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K73,
  &KLaccumulatorGVKi,
  &KPfalseVKi,
  &Kacc_bufferVKi,
  &Kacc_buffer_setterVKi,
  &KLsimple_object_vectorGVKd
};

_KLinstance_slot_descriptorGVKe Kacc_indexVKiHLaccumulatorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 97,
  &KLaccumulatorGVKi,
  &KPfalseVKi,
  &Kacc_indexVKi,
  &Kacc_index_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kacc_sizeVKiHLaccumulatorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLaccumulatorGVKi,
  &KPfalseVKi,
  &Kacc_sizeVKi,
  &Kacc_size_setterVKi,
  &K47
};

_KLsealed_generic_functionGVKe Kacc_sizeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K54,
  &K53,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kacc_size_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K51,
  &K50,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K47 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K48,
  &KLintegerGVKd
};

static _KLsingletonGVKd K48 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsetter_methodGVKi Kacc_size_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kacc_sizeVKiHLaccumulatorG
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_size_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "acc-size-setter"
};

_KLgetter_methodGVKi Kacc_sizeVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kacc_sizeVKiHLaccumulatorG
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_sizeVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "acc-size"
};

_KLsealed_generic_functionGVKe Kacc_indexVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K62,
  &K61,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kacc_index_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K59,
  &K58,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kacc_index_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kacc_indexVKiHLaccumulatorG
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_index_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K59 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "acc-index-setter"
};

_KLgetter_methodGVKi Kacc_indexVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kacc_indexVKiHLaccumulatorG
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_indexVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "acc-index"
};

static _KLsimple_closure_methodGVKi_0 K73 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &K73I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kacc_bufferVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kacc_buffer_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K69,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kacc_buffer_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kacc_bufferVKiHLaccumulatorG
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_buffer_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "acc-buffer-setter"
};

_KLgetter_methodGVKi Kacc_bufferVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kacc_bufferVKiHLaccumulatorG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kacc_bufferVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "acc-buffer"
};

static _KLsignatureGVKe K74 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_19 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<keyed-accumulator>"
};

static _KLsignatureAvaluesGVKi K76 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K77,
  &K78
};

static _KLsimple_object_vectorGVKd_2 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequence_accumulatorGVKi,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequence_accumulatorGVKi
};

_KLsimple_methodGVKe Kconvert_accumulator_asVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K103,
  &Kconvert_accumulator_asVKiMM0I
};

_KLsimple_methodGVKe Kconvert_accumulator_asVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K101,
  &Kconvert_accumulator_asVKiMM1I
};

_KLsimple_methodGVKe Kconvert_accumulator_asVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K99,
  &Kconvert_accumulator_asVKiMM2I
};

_KLsimple_methodGVKe Kconvert_accumulator_asVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K96,
  &Kconvert_accumulator_asVKiMM3I
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Kconvert_accumulator_asVKiMM0,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kconvert_accumulator_asVKiMM1,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kconvert_accumulator_asVKiMM2,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kconvert_accumulator_asVKiMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K91 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K93,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_22 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "convert-accumulator-as"
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_collection_typeGVKi,
  &KLaccumulatorGVKi
};

static _KLbyte_stringGVKd_45 K95 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Collection %= and %= have different key tests"
};

static _KLsignatureAvaluesGVKi K96 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K97,
  &KDsignature_Lmutable_explicit_key_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_explicit_key_collection_typeGVKi,
  &KLkeyed_accumulatorGVKi
};

static _KLbyte_stringGVKd_58 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 233,
  "Cannot add an element with key %= to a sequence of type %="
};

static _KLsignatureAvaluesGVKi K99 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K100,
  &KDsignature_Lmutable_sequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequence_typeGVKi,
  &KLkeyed_accumulatorGVKi
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K102,
  &KDsignature_Lmutable_explicit_key_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_explicit_key_collection_typeGVKi,
  &KLsequence_accumulatorGVKi
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K104,
  &KDsignature_Lmutable_sequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequence_typeGVKi,
  &KLsequence_accumulatorGVKi
};

static _KLimplementation_classGVKe K105 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433745,
  &KLsequence_accumulatorGVKi,
  &KLsequence_accumulatorGVKiW,
  &KPfalseVKi,
  &K22,
  (D) 6465,
  &KLsequence_accumulatorGZ32ZconstructorVKiMM0,
  &K108,
  &K109,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K22,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsequence_accumulatorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K112,
  &key_mep_2,
  &KLsequence_accumulatorGZ32ZconstructorVKiMM0I,
  &K38
};

static _KLsimple_object_vectorGVKd_2 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLaccumulatorGVKi,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_8 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLaccumulatorGVKi,
  &KLsequence_accumulatorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K112 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K39,
  &KDsignature_LobjectG_typesVKi,
  &K78
};

static _KLbyte_stringGVKd_22 K113 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<sequence-accumulator>"
};

_KLsimple_methodGVKe Knext_state_key_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K137,
  &Knext_state_key_accVKiI
};

_KLsimple_methodGVKe Kfinished_stateQ_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K135,
  &Kfinished_stateQ_accVKiI
};

_KLsimple_methodGVKe Kcurrent_key_key_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &Kcurrent_key_key_accVKiI
};

_KLsimple_methodGVKe Kcurrent_element_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K132,
  &Kcurrent_element_accVKiI
};

_KLsimple_methodGVKe Kcurrent_element_setter_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K130,
  &Kcurrent_element_setter_accVKiI
};

_KLsimple_methodGVKe Kcopy_state_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K127,
  &Kcopy_state_accVKiI
};

static _KLbyte_stringGVKd_51 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Accumulator state cannot be copied during iteration"
};

static _KLsignatureGVKe K127 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K128
};

static _KLsimple_object_vectorGVKd_2 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLaccumulatorGVKi,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_41 K129 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Accumulator is immutable during iteration"
};

static _KLsignatureGVKe K130 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K131
};

static _KLsimple_object_vectorGVKd_3 K131 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLaccumulatorGVKi,
  &KLintegerGVKd
};

static _KLsignatureGVKe K132 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K128
};

static _KLsignatureGVKe K133 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K134
};

static _KLsimple_object_vectorGVKd_2 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLkeyed_accumulatorGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K135 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K136,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLaccumulatorGVKi,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K137 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K134,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K138 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K40,
  &K139
};

static _KLsimple_object_vectorGVKd_8 K139 = {
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

_KLsimple_methodGVKe Knext_state_seq_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K146,
  &Knext_state_seq_accVKiI
};

_KLsimple_methodGVKe Kcurrent_key_seq_accVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K144,
  &Kcurrent_key_seq_accVKiI
};

static _KLsignatureGVKe K144 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K145
};

static _KLsimple_object_vectorGVKd_2 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequence_accumulatorGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K146 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K145,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K147 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K78,
  &K139
};

static _KLsignatureAvaluesGVKi K149 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K78,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K150 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K40,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K151 = {
  &KLpairGVKdW /* wrapper */,
  &KLsequence_accumulatorGVKi,
  &K152
};

static _KLpairGVKd K152 = {
  &KLpairGVKdW /* wrapper */,
  &KLkeyed_accumulatorGVKi,
  &KPempty_listVKi
};

/* Code */

D KsizeVKdMM3I (D accumulator_) {
  D T2;
  DWORD T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;
  DWORD T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T4 = SLOT_VALUE_INITD(accumulator_, 3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
    T10 = primitive_cast_integer_as_raw(T4);
    T3 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
    T2 = Kinvert_accumulatorVKiI(accumulator_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
    T11 = primitive_cast_integer_as_raw(T2);
    T3 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T5 = primitive_machine_word_shift_right(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T6 = primitive_machine_word_logand(T5,-4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:171
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:169
  MV_SET_COUNT(1);
  return(T9_0);
}

D KsizeVKdMM4I (D accumulator_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
  T5 = SLOT_VALUE_INITD(accumulator_, 3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
    T2_0 = T5;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
    T6_0 = T2_0;
    T4_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
    T3_0 = Kinvert_accumulatorVKiI(accumulator_);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:176
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:174
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kforward_iteration_protocolVKdMM1I (D accumulator_) {
  D sz_;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:198
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:203
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  sz_ = CONGRUENT_CALL1(accumulator_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:204
  T3_0 = (D) 1;
  T3_1 = sz_;
  T3_2 = &Knext_state_seq_accVKi;
  T3_3 = &Kfinished_stateQ_accVKi;
  T3_4 = &Kcurrent_key_seq_accVKi;
  T3_5 = &Kcurrent_element_accVKi;
  T3_6 = &Kcurrent_element_setter_accVKi;
  T3_7 = &Kcopy_state_accVKi;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:198
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

D Kforward_iteration_protocolVKdMM0I (D accumulator_) {
  D sz_;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:191
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  sz_ = CONGRUENT_CALL1(accumulator_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:192
  T3_0 = (D) 1;
  T3_1 = sz_;
  T3_2 = &Knext_state_key_accVKi;
  T3_3 = &Kfinished_stateQ_accVKi;
  T3_4 = &Kcurrent_key_key_accVKi;
  T3_5 = &Kcurrent_element_accVKi;
  T3_6 = &Kcurrent_element_setter_accVKi;
  T3_7 = &Kcopy_state_accVKi;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:186
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

D KaddXVKdMM0I (D accumulator_, D new_element_) {
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
  T4 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
  T6 = primitive_machine_word_less_thanQ(1,T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
    Kextend_accumulatorVKiI(accumulator_);
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:72
  T7 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  T8 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_element_, T8, 1, T10);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
    Kelement_range_errorVKeI(T8, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:74
  T13 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:74
  T14 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:74
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:74
  SLOT_VALUE_SETTER(T15, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:75
  T3_0 = accumulator_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:67
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_setterVKdMM0I (D value_, D accumulator_, D key_) {
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:53
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
  T5 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
  T7 = primitive_machine_word_less_thanQ(1,T6);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
    Kextend_accumulatorVKiI(accumulator_);
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:58
  T8 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  T9 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  T11 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  T13 = primitive_machine_word_unsigned_less_thanQ(T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T9, 1, T11);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
    Kelement_range_errorVKeI(T9, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T14 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T15 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T16 = primitive_machine_word_subtract_signal_overflow(T15,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T17 = primitive_cast_raw_as_integer(T16);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T18 = SLOT_VALUE_INITD(T14, 0);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T19 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  T20 = primitive_machine_word_unsigned_less_thanQ(T16,T19);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(key_, T14, 1, T16);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
    Kelement_range_errorVKeI(T14, T17);
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:61
  T21 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:61
  T22 = primitive_machine_word_subtract_signal_overflow(T21,8);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:61
  T23 = primitive_cast_raw_as_integer(T22);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:61
  SLOT_VALUE_SETTER(T23, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:61
  T4_0 = T23;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:53
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kextend_accumulatorVKiI (D accumulator_) {
  D buff_;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:32
  buff_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 101);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:33
  T3 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:33
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T3, buff_, 1, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:34
  SLOT_VALUE_SETTER(buff_, accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:35
  SLOT_VALUE_SETTER((D) 97, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:36
  T4 = &KPfalseVKi;
  MV_SET_COUNT(0);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:31
  return(T4);
}

D KLkeyed_accumulatorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_key_test_) {
  D T4;
  D Uunique_key_testF5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:44
  T4 = primitive_object_allocate_filled(5,&KLkeyed_accumulatorGVKiW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_key_testF5 = Uunique_key_test_;
  SLOT_VALUE_SETTER(Uunique_key_testF5, T4, 0);
  T6 = K36I();
  SLOT_VALUE_SETTER(T6, T4, 1);
  SLOT_VALUE_SETTER((D) 97, T4, 2);
  SLOT_VALUE_SETTER(&KPfalseVKi, T4, 3);
  APPLY2(&KinitializeVKd, T4, init_args_);
  T7_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:44
  MV_SET_COUNT(1);
  return(T7_0);
}

static D K36I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 101);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K73I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:21
  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 101);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:21
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:21
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kconvert_accumulator_asVKiMM0I (D type_, D acc_) {
  D T3;
  D T4;
  D targetF5;
  D T6_0;
  D targetF7;
  D T8_0;
  D T8_1;
  D T8_2;
  D T8_3;
  D T8_4;
  D T8_5;
  D T8_6;
  D T8_7;
  D initial_state_;
  D next_state_;
  D current_element_setter_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18T, T18;
  D state_T, state_;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25_0;
  _KLsimple_object_vectorGVKd_2 T26 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T27;
  D T28;
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T32_0;
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:231
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:234
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:234
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(T3, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:234
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:235
    T26.vector_element_[0] = &KJsize_;
    T26.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:235
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    targetF5 = CONGRUENT_CALL2(type_, &T26);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:236
    Kcheck_key_test_eqVKiMM0I(targetF5, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:237
    T6_0 = targetF5;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:237
    T32_0 = T6_0;
    T25_0 = T32_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    T27 = SLOT_VALUE_INITD(acc_, 3);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    T28 = SLOT_VALUE_INITD(acc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    T29 = SLOT_VALUE_INITD(acc_, 2);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    T30 = KelementVKdMM11I(T28, T29, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    T31.vector_element_[0] = &KJsize_;
    T31.vector_element_[1] = T27;
    T31.vector_element_[2] = &KJfill_;
    T31.vector_element_[3] = T30;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:240
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    targetF7 = CONGRUENT_CALL2(type_, &T31);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:241
    Kcheck_key_test_eqVKiMM0I(targetF7, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:242
    T8_0 = CALL1(&Kforward_iteration_protocolVKd, targetF7);
    T8_1 = MV_GET_ELT(1);
    T8_2 = MV_GET_ELT(2);
    T8_3 = MV_GET_ELT(3);
    T8_4 = MV_GET_ELT(4);
    T8_5 = MV_GET_ELT(5);
    T8_6 = MV_GET_ELT(6);
    T8_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:242
    initial_state_ = T8_0;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:242
    next_state_ = T8_2;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:242
    current_element_setter_ = T8_6;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T12 = CONGRUENT_CALL1(acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T13 = T12;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T14 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T15 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T16 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T17 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    T18T = T13;
    state_T = initial_state_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
      T18 = T18T;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
      state_ = state_T;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
      T20 = CALL3(T16, acc_, T18, T14);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
        T21 = CALL2(T17, acc_, T18);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:245
        CALL3(current_element_setter_, T21, targetF7, state_);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
        T22 = CALL2(T15, acc_, T18);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:244
        T23 = CALL2(next_state_, targetF7, state_);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
        T18T = T22;
        state_T = T23;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:243
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:248
    T24_0 = targetF7;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:248
    T33_0 = T24_0;
    T25_0 = T33_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:234
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:231
  MV_SET_COUNT(1);
  return(T25_0);
}

D Kconvert_accumulator_asVKiMM1I (D type_, D acc_) {
  D T3;
  D T4;
  D targetF5;
  D T6_0;
  D targetF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
  DWORD i_T, i_;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22;
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_4 T26 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T27;
  D T28;
  D T29_0;
  D T30_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:257
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:257
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(T3, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:257
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:258
    T21.vector_element_[0] = &KJsize_;
    T21.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:258
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    targetF5 = CONGRUENT_CALL2(type_, &T21);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:259
    Kcheck_key_test_eqVKiMM0I(targetF5, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:260
    T6_0 = targetF5;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:260
    T29_0 = T6_0;
    T20_0 = T29_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    T22 = SLOT_VALUE_INITD(acc_, 3);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    T23 = SLOT_VALUE_INITD(acc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    T24 = SLOT_VALUE_INITD(acc_, 2);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    T25 = KelementVKdMM11I(T23, T24, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    T26.vector_element_[0] = &KJsize_;
    T26.vector_element_[1] = T22;
    T26.vector_element_[2] = &KJfill_;
    T26.vector_element_[3] = T25;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:263
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    targetF7 = CONGRUENT_CALL2(type_, &T26);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:264
    Kcheck_key_test_eqVKiMM0I(targetF7, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T8 = CONGRUENT_CALL1(acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T10 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T11 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T12 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T13 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    T14T = T9;
    i_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      T14 = T14T;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      T28 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      T16 = CALL3(T12, acc_, T14, T10);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
        T17 = CALL2(T13, acc_, T14);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
        CALL3(&Kelement_setterVKd, T17, targetF7, T28);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
        T18 = CALL2(T11, acc_, T14);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
        T27 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
        T14T = T18;
        i_T = T27;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:265
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:266
    T19_0 = targetF7;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:266
    T30_0 = T19_0;
    T20_0 = T30_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:257
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:253
  MV_SET_COUNT(1);
  return(T20_0);
}

D Kconvert_accumulator_asVKiMM2I (D type_, D acc_) {
  D sz_;
  D T4;
  D targetF5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
  D T15;
  D T16;
  D k_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D targetF24;
  D T25_0;
  D T26_0;
  D T27;
  _KLsimple_object_vectorGVKd_2 T28 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D temp_;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  _KLsimple_object_vectorGVKd_2 T34 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T35 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T36_0;
  D T37_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:271
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:274
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  sz_ = CONGRUENT_CALL1(acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:276
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(sz_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:276
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:277
    T28.vector_element_[0] = &KJsize_;
    T28.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:277
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    targetF5 = CONGRUENT_CALL2(type_, &T28);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:278
    Kcheck_key_test_eqVKiMM0I(targetF5, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:279
    T6_0 = targetF5;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:279
    T36_0 = T6_0;
    T26_0 = T36_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:281
    temp_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, sz_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T7 = CONGRUENT_CALL1(acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T8 = T7;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T9 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T10 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T11 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T12 = MV_GET_ELT(4);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T13 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    T14T = T8;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
      T14 = T14T;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
      T15 = CALL3(T11, acc_, T14, T9);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
      if (T15 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
        T16 = CALL2(T13, acc_, T14);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
        k_ = CALL2(T12, acc_, T14);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        T30 = primitive_instanceQ(k_,&KLintegerGVKd);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        if (T30 != &KPfalseVKi) {
          T27 = k_;
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
          T32 = primitive_cast_integer_as_raw(T27);
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
          T33 = primitive_machine_word_less_thanQ(T32,1);
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
          T31 = primitive_not(T33);
          T18 = T31;
        } else {
          T18 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T19 = CONGRUENT_CALL2(k_, sz_);
          T20 = T19;
        } else {
          T20 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:285
          CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
          CONGRUENT_CALL3(T16, temp_, k_);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:290
          T34.vector_element_[0] = k_;
          T34.vector_element_[1] = type_;
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:290
          T21 = KlistVKdI(&T34);
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:287
          T35.vector_element_[0] = &KJformat_string_;
          T35.vector_element_[1] = &K98;
          T35.vector_element_[2] = &KJformat_arguments_;
          T35.vector_element_[3] = T21;
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:287
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T22 = CONGRUENT_CALL2(&KLinvalid_index_errorGVKi, &T35);
          // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:287
          KerrorVKdMM0I(T22, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:284
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
        T23 = CALL2(T10, acc_, T14);
        // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
        T14T = T23;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:283
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:294
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    targetF24 = CONGRUENT_CALL2(type_, temp_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:295
    Kcheck_key_test_eqVKiMM0I(targetF24, acc_);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:296
    T25_0 = targetF24;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:296
    T37_0 = T25_0;
    T26_0 = T37_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:271
  MV_SET_COUNT(1);
  return(T26_0);
}

D Kconvert_accumulator_asVKiMM3I (D type_, D acc_) {
  D T3;
  D result_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D T13;
  D T14;
  D k_;
  D T16;
  D T17_0;
  D T18_0;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:301
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:305
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:305
  T19.vector_element_[0] = &KJsize_;
  T19.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:305
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  result_ = CONGRUENT_CALL2(type_, &T19);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:306
  Kcheck_key_test_eqVKiMM0I(result_, acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(acc_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T10 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  T12T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
    T13 = CALL3(T9, acc_, T12, T7);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
      T14 = CALL2(T11, acc_, T12);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
      k_ = CALL2(T10, acc_, T12);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
      CALL3(&Kelement_setterVKd, T14, result_, k_);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
      T16 = CALL2(T8, acc_, T12);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
      T12T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:307
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:308
  T17_0 = result_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:301
  T18_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:301
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kcheck_key_test_eqVKiMM0I (D x_, D y_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:216
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
  T3 = CALL1(&Kkey_testVKd, x_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
  T4 = CALL1(&Kkey_testVKd, y_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
  T9 = primitive_idQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:220
    T10.vector_element_[0] = x_;
    T10.vector_element_[1] = y_;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:220
    T5 = KlistVKdI(&T10);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:218
    T11.vector_element_[0] = &KJformat_string_;
    T11.vector_element_[1] = &K95;
    T11.vector_element_[2] = &KJformat_arguments_;
    T11.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:218
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLkey_test_errorGVKi, &T11);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:218
    T12 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T8 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:216
  return(T8);
}

D KLsequence_accumulatorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_key_test_) {
  D T4;
  D Uunique_key_testF5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:47
  T4 = primitive_object_allocate_filled(5,&KLsequence_accumulatorGVKiW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_key_testF5 = Uunique_key_test_;
  SLOT_VALUE_SETTER(Uunique_key_testF5, T4, 0);
  T6 = K111I();
  SLOT_VALUE_SETTER(T6, T4, 1);
  SLOT_VALUE_SETTER((D) 97, T4, 2);
  SLOT_VALUE_SETTER(&KPfalseVKi, T4, 3);
  APPLY2(&KinitializeVKd, T4, init_args_);
  T7_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:47
  MV_SET_COUNT(1);
  return(T7_0);
}

static D K111I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 101);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Knext_state_key_accVKiI (D accumulator_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D next_buf_;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:83
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:86
  T3 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:86
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:86
  T5 = primitive_machine_word_subtract_signal_overflow(T4,8);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:86
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:86
  SLOT_VALUE_SETTER(T6, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:87
  T7 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:87
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:87
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:87
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:88
    SLOT_VALUE_SETTER((D) 97, accumulator_, 2);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:89
    T10 = SLOT_VALUE_INITD(accumulator_, 1);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:89
    next_buf_ = KelementVKdMM11I(T10, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:90
    if (next_buf_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:90
      CALL2(&Kacc_buffer_setterVKi, next_buf_, accumulator_);
    }
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:90
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:92
  T12 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:92
  T13 = primitive_machine_word_add_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:92
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:92
  T15_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:83
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kfinished_stateQ_accVKiI (D acc_, D state_, D limit_) {
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:111
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:111
  T5 = primitive_cast_integer_as_raw(limit_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:111
  T6 = primitive_machine_word_equalQ(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:111
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:107
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kcurrent_key_key_accVKiI (D accumulator_, D state_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T2 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T3 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:117
  T7_0 = KelementVKdMM11I(T2, T6, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:114
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kcurrent_element_accVKiI (D accumulator_, D state_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:129
  T2 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:129
  T3 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:129
  T4_0 = KelementVKdMM11I(T2, T3, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:126
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcurrent_element_setter_accVKiI (D value_, D accumulator_, D state_) {
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:134
  T4.vector_element_[0] = &KJformat_string_;
  T4.vector_element_[1] = &K129;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:134
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLimmutable_errorGVKi, &T4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:134
  T5 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:132
  return(T5);
}

D Kcopy_state_accVKiI (D accumulator_, D state_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:140
  T3.vector_element_[0] = &KJformat_string_;
  T3.vector_element_[1] = &K126;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:140
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLiteration_errorGVKi, &T3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:140
  T4 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:138
  return(T4);
}

D Knext_state_seq_accVKiI (D accumulator_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D next_buf_;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:98
  T3 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:98
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:98
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:98
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:98
  SLOT_VALUE_SETTER(T6, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:99
  T7 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:99
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:99
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:99
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:100
    SLOT_VALUE_SETTER((D) 97, accumulator_, 2);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:101
    T10 = SLOT_VALUE_INITD(accumulator_, 1);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:101
    next_buf_ = KelementVKdMM11I(T10, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:102
    if (next_buf_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:102
      CALL2(&Kacc_buffer_setterVKi, next_buf_, accumulator_);
    }
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:102
  }
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:104
  T12 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:104
  T13 = primitive_machine_word_add_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:104
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:104
  T15_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:95
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kcurrent_key_seq_accVKiI (D accumulator_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:123
  T2_0 = state_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:120
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kinvert_accumulatorVKiI (D accumulator_) {
  D nextF2;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D buff_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D size_;
  D T16;
  D T17;
  D prev_;
  D T19;
  D T20;
  D nextF21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;

  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:150
  T24 = SLOT_VALUE_INITD(accumulator_, 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:150
  buff_ = T24;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T25 = SLOT_VALUE_INITD(accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T26 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T27 = primitive_machine_word_logxor(T26,1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T28 = primitive_machine_word_subtract_signal_overflow(101,T27);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T29 = primitive_machine_word_subtract_signal_overflow(T28,4);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  T30 = primitive_cast_raw_as_integer(T29);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:151
  size_ = T30;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:152
  prev_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:153
  T14 = buff_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:153
  nextF2 = CALL2(&KelementVKd, T14, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:153
  nextF21 = nextF2;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:154
  T20 = prev_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:154
  T13 = buff_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:154
  CALL3(&Kelement_setterVKd, T20, T13, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
    T22 = nextF21;
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:157
      T17 = size_;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:157
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T3 = CONGRUENT_CALL2(T17, (D) 101);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:157
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T4 = CONGRUENT_CALL2(T3, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:157
      size_ = T4;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:158
      T12 = buff_;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:158
      prev_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:159
      T23 = nextF21;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:159
      buff_ = T23;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:160
      T11 = buff_;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:160
      T5 = CALL2(&KelementVKd, T11, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:160
      nextF21 = T5;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:161
      T19 = prev_;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:161
      T10 = buff_;
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:161
      CALL3(&Kelement_setterVKd, T19, T10, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
    // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:156
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:164
  T9 = buff_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:164
  CALL2(&Kacc_buffer_setterVKi, T9, accumulator_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:165
  SLOT_VALUE_SETTER((D) 97, accumulator_, 2);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:166
  T16 = size_;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:166
  CALL2(&Kacc_size_setterVKi, T16, accumulator_);
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:166
  T6_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:148
  T7_0 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/accumulator.dylan:148
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_accumulator_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_accumulator_for_user () {
  return;
}


/* eof */
