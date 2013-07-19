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
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(65);
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(82);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(20);

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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_collection_typeGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
  D instanceQ_iep_;
} _KLlimited_typeGVKe;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

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
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_vector_typeGVKe;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

#define  define__KLsimple_element_type_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D size_; \
    D element_type_vector_element_[nrepeated+1]; \
  } _KLsimple_element_type_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_array_typeGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_stretchy_collection_typeGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLsimple_vectorGVKd;

typedef struct {
  D wrapper;
} _KLlimited_stretchy_vectorGVKe;

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

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
} _KLsequenceGVKd;

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
} _KLmutable_explicit_key_collectionGVKd;

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
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_mutable_collection_typeGVKe;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_explicit_key_collection_typeGVKe;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLtableGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;


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
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM7;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM8;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM9;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM10;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM11;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM12;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM13;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM14;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM15;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM16;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM17;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM18;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM19;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM20;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM21;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM22;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM23;
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
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kscu_entryQVKeI (D c_, D scu_);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
D KsubiclassQVKiI (D xiclass_, D x_, D yiclass_, D y_);
extern _KLclassGVKd KLlimited_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collection_typeGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsealed_generic_functionGVKe KeveryQVKd;
extern _KLincremental_generic_functionGVKe Kreduce1VKd;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM1;
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM2;
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM3;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM3;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM4;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM5;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM6;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM7;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM8;
D Kgrounded_has_instancesQVKeI (D class_, D type_);
D KPregister_subclass_dependent_genericVKeI (D generic_, D class_);
D Kconcatenate_2VKeMM1I (D v1_, D v2_);
extern _KLsimple_methodGVKe KPregister_subclass_dependent_genericVKe;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLlimited_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_typeGVKeW;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM1;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM2;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM3;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM4;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM5;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM6;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_0;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLlimited_vector_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_vector_typeGVKeW;
D KerrorVKdMM1I (D, D);
extern _KLsymbolGVKd KJdimensions_;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLkeyword_methodGVKe KmakeVKdMM27;
extern _KLclassGVKd KLsimple_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LarrayG_typesVKi;
extern _KLclassGVKd KLlimited_array_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_array_typeGVKeW;
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstretchy_collectionG_typesVKi;
extern _KLclassGVKd KLlimited_stretchy_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_collection_typeGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LcollectionG_typesVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM1;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM2;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM3;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM4;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM5;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
D Khas_instancesQVKeMM2I (D class_1_, D class_2_, D scu_);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D Kadd_newXVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM2;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM3;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM4;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM5;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM6;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM7;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM8;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM9;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM10;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM11;
extern _KLsimple_methodGVKe KlimitsVKiMM1;
extern _KLsimple_methodGVKe KlimitsVKiMM2;
extern _KLsimple_methodGVKe KlimitsVKiMM3;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Llimited_typeG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D KelementVKdMM11I (D, D, D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM2;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM3;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM4;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM5;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM6;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM7;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM8;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM9;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM10;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM11;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM12;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM13;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM3;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM4;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM5;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM6;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM7;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM8;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM9;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM10;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM11;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM12;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM13;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM14;
D Kreduce_incomplete_classesVKiMM10I (D f_, D t_, D ans_);
extern _KLclassGVKd KLsimple_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_vectorGVKdW;
extern _KLclassGVKd KLlimited_stretchy_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vectorGVKeW;
extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
extern _KLincremental_generic_functionGVKe Kelement_typeVKe;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
D KeveryQVKdMM0I (D, D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM7;
extern _KLsimple_methodGVKe KsubtypeQVKdMM8;
extern _KLsimple_methodGVKe KsubtypeQVKdMM9;
extern _KLsimple_methodGVKe KsubtypeQVKdMM10;
extern _KLsimple_methodGVKe KsubtypeQVKdMM11;
extern _KLsimple_methodGVKe KsubtypeQVKdMM12;
extern _KLsimple_methodGVKe KsubtypeQVKdMM13;
extern _KLsimple_methodGVKe KsubtypeQVKdMM14;
extern _KLsimple_methodGVKe KsubtypeQVKdMM15;
extern _KLsimple_methodGVKe KsubtypeQVKdMM16;
extern _KLsimple_methodGVKe KsubtypeQVKdMM17;
extern _KLsimple_methodGVKe KsubtypeQVKdMM18;
extern _KLsimple_methodGVKe KsubtypeQVKdMM19;
extern _KLsimple_methodGVKe KsubtypeQVKdMM20;
extern _KLsimple_methodGVKe KsubtypeQVKdMM21;
extern _KLsimple_methodGVKe KsubtypeQVKdMM22;
extern _KLsimple_methodGVKe KsubtypeQVKdMM23;
D KsubtypeQVKdMM10I (D class_1_, D class_2_);
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM0;
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM1;
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM2;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLkeyword_methodGVKe KlimitedVKdMM0;
extern _KLkeyword_methodGVKe KlimitedVKdMM1;
extern _KLkeyword_methodGVKe KlimitedVKdMM2;
extern _KLkeyword_methodGVKe KlimitedVKdMM16;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLlimited_mutable_sequence_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_sequence_typeGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLlimited_sequence_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_sequence_typeGVKeW;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLclassGVKd KLlimited_mutable_explicit_key_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_explicit_key_collection_typeGVKeW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLlimited_mutable_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_collection_typeGVKeW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLlimited_explicit_key_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_explicit_key_collection_typeGVKeW;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe Klimited_vectorVKe;
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLincremental_generic_functionGVKe Klimited_arrayVKe;
D Klimited_tableVKiMM0I (D of_, D size_);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLclassGVKd KLtableGVKd;
extern _KLmm_wrapperGVKi_0 KLtableGVKdW;
D Klimited_stringVKiMM0I (D, D);
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D KinitializeVKdMM7I (D, D);
D Kuninitialized_instanceQ_functionVKiI (D, D);
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLsealed_generic_functionGVKe KinstanceQVKd;
D Klimited_collection_instanceQVKeI (D, D);
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_4;
D Kreduce_incomplete_classes_sovVKiI (D, D, D, D);
D Kmap_congruency_classes_sovVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
D Ktype_completeQ_sovVKiI (D, D);
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
D Kincomplete_classesVKeI (D);
extern _KLsealed_generic_functionGVKe Khas_instancesQVKe;
D Krecompute_type_completeXVKiMM0I (D);
extern _KLkeyword_methodGVKe KinitializeVKdMM7;
extern _KLkeyword_methodGVKe KmakeVKdMM43;
D KmakeVKdMM43I (D t_, D all_keys_, D size_);
extern _KLkeyword_methodGVKe KmakeVKdMM44;
D KmakeVKdMM44I (D t_, D all_keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM45;
D KmakeVKdMM45I (D t_, D all_keys_, D size_, D dimensions_);
extern _KLkeyword_methodGVKe KmakeVKdMM46;
D KmakeVKdMM46I (D t_, D all_keys_, D size_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_3;
extern _KLsealed_generic_functionGVKe Krecompute_type_completeXVKi;
extern _KLsealed_generic_functionGVKe Kdisjoint_typesQVKe;
extern _KLsealed_generic_functionGVKe Ksubjunctive_subtypeQVKi;
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM0;
D Ksubjunctive_subtypeQVKiMM0I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM1;
D Ksubjunctive_subtypeQVKiMM1I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM2;
D Ksubjunctive_subtypeQVKiMM2I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM3;
D Ksubjunctive_subtypeQVKiMM3I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM4;
D Ksubjunctive_subtypeQVKiMM4I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM5;
D Ksubjunctive_subtypeQVKiMM5I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM6;
D Ksubjunctive_subtypeQVKiMM6I (D, D, D);
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
static _KLsignatureAvaluesGVKi K69;
static _KLbyte_stringGVKd_20 K70;
static _KLsimple_object_vectorGVKd_3 K71;
static _KLsignatureAvaluesGVKi K72;
static _KLsimple_object_vectorGVKd_3 K73;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K74;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K75;
static _KLsignatureAvaluesGVKi K76;
static _KLsimple_object_vectorGVKd_3 K77;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K79;
static _KLsignatureAvaluesGVKi K80;
static _KLsimple_object_vectorGVKd_3 K81;
static _KLsignatureAvaluesGVKi K82;
static _KLsimple_object_vectorGVKd_3 K83;
static _KLsimple_object_vectorGVKd_1 K84;
static _KLsingletonGVKd K85;
static _KLsignatureAvaluesGVKi K86;
static _KLsimple_object_vectorGVKd_3 K87;
static _KLsignatureAvaluesGVKi K88;
static _KLsimple_object_vectorGVKd_3 K89;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90;
extern _KLsealed_generic_functionGVKe Ksubjunctive_type_equivalentQVKi;
extern _KLsimple_methodGVKe Ksubjunctive_type_equivalentQVKiMM0;
D Ksubjunctive_type_equivalentQVKiMM0I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_type_equivalentQVKiMM1;
D Ksubjunctive_type_equivalentQVKiMM1I (D, D, D);
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_28 K98;
static _KLsignatureAvaluesGVKi K99;
static _KLsimple_object_vectorGVKd_3 K100;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K101;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K102;
static _KLsignatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_3 K104;
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM0;
D Kdisjoint_typesQVKeMM0I (D, D, D, D);
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLpairGVKd K110;
static _KLsignatureAvaluesGVKi K111;
static _KLbyte_stringGVKd_15 K112;
static _KLsimple_object_vectorGVKd_4 K113;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K114;
extern _KLsealed_generic_functionGVKe Kdisjoint_types_1QVKe;
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM0;
D Kdisjoint_types_1QVKeMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM1;
D Kdisjoint_types_1QVKeMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM2;
D Kdisjoint_types_1QVKeMM2I (D, D, D, D);
static _KLpairGVKd K122;
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLpairGVKd K125;
static _KLpairGVKd K126;
static _KLpairGVKd K127;
static _KLpairGVKd K128;
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_17 K131;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF136;
static D Kanonymous_of_disjoint_types_1QF136I (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K134;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K135;
static _KLsignatureGVKe K137;
static _KLsignatureAvaluesGVKi K138;
static _KLsimple_object_vectorGVKd_4 K139;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF144;
static D Kanonymous_of_disjoint_types_1QF144I (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K142;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K143;
static _KLsignatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_4 K146;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF156;
static D Kanonymous_of_disjoint_types_1QF156I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF155;
static D Kanonymous_of_disjoint_types_1QF155I (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K151;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K152;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K153;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K154;
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM0;
static _KLpairGVKd K158;
static _KLpairGVKd K159;
static _KLpairGVKd K160;
static _KLpairGVKd K161;
static _KLpairGVKd K162;
static _KLpairGVKd K163;
static _KLpairGVKd K164;
static _KLsignatureAvaluesGVKi K165;
static _KLbyte_stringGVKd_24 K166;
static _KLkeyword_signatureAvaluesGVKi K167;
static _KLsimple_object_vectorGVKd_2 K168;
static _KLsimple_object_vectorGVKd_1 K169;
static _KLsimple_object_vectorGVKd_1 K170;
static _KLbyte_stringGVKd_82 K171;
static _KLbyte_stringGVKd_47 K172;
static _KLkeyword_signatureAvaluesGVKi K173;
static _KLsimple_object_vectorGVKd_4 K174;
static _KLsimple_object_vectorGVKd_1 K175;
static _KLsimple_object_vectorGVKd_2 K176;
static _KLkeyword_signatureAvaluesGVKi K177;
static _KLsimple_object_vectorGVKd_1 K178;
static _KLbyte_stringGVKd_65 K179;
static _KLkeyword_signatureAvaluesGVKi K180;
static _KLsimple_object_vectorGVKd_1 K181;
static _KLkeyword_signatureGVKe K182;
extern _KLsimple_methodGVKe Khas_instancesQVKeMM0;
D Khas_instancesQVKeMM0I (D, D, D);
static _KLpairGVKd K185;
static _KLpairGVKd K186;
static _KLpairGVKd K187;
static _KLpairGVKd K188;
static _KLpairGVKd K189;
static _KLpairGVKd K190;
static _KLsignatureAvaluesGVKi K191;
static _KLbyte_stringGVKd_14 K192;
static _KLsimple_object_vectorGVKd_3 K193;
static _KLsignatureAvaluesGVKi K194;
static _KLsimple_object_vectorGVKd_3 K195;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K196;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_incomplete_classesF199;
static D Kanonymous_of_incomplete_classesF199I (D, D);
static _KLsignatureGVKe K200;
static _KLsimple_object_vectorGVKd_2 K201;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM0;
D Ktype_completeQVKeMM0I (D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM1;
D Ktype_completeQVKeMM1I (D);
static _KLpairGVKd K206;
static _KLpairGVKd K207;
static _KLpairGVKd K208;
static _KLpairGVKd K209;
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLpairGVKd K212;
static _KLpairGVKd K213;
static _KLpairGVKd K214;
static _KLpairGVKd K215;
static _KLpairGVKd K216;
static _KLpairGVKd K217;
static _KLbyte_stringGVKd_14 K218;
extern _KLsealed_generic_functionGVKe KlimitsVKi;
extern _KLsimple_methodGVKe KlimitsVKiMM0;
D KlimitsVKiMM0I (D t_);
static _KLpairGVKd K222;
static _KLpairGVKd K223;
static _KLpairGVKd K224;
static _KLpairGVKd K225;
static _KLsignatureAvaluesGVKi K226;
static _KLbyte_stringGVKd_6 K227;
static _KLsignatureAvaluesGVKi K228;
static _KLsignatureAvaluesGVKi K229;
static _KLsignatureAvaluesGVKi K230;
static _KLsimple_object_vectorGVKd_1 K231;
static _KLsingletonGVKd K232;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM0;
D Kmap_congruency_classesVKiMM0I (D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM1;
D Kmap_congruency_classesVKiMM1I (D, D);
static _KLpairGVKd K237;
static _KLpairGVKd K238;
static _KLpairGVKd K239;
static _KLpairGVKd K240;
static _KLpairGVKd K241;
static _KLpairGVKd K242;
static _KLpairGVKd K243;
static _KLpairGVKd K244;
static _KLpairGVKd K245;
static _KLpairGVKd K246;
static _KLpairGVKd K247;
static _KLpairGVKd K248;
static _KLpairGVKd K249;
static _KLpairGVKd K250;
static _KLsignatureGVKe K251;
static _KLbyte_stringGVKd_22 K252;
static _KLsimple_object_vectorGVKd_2 K253;
static _KLsignatureGVKe K254;
static _KLsimple_object_vectorGVKd_2 K255;
static _KLsignatureGVKe K256;
static _KLsimple_object_vectorGVKd_2 K257;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM0;
D Kreduce_incomplete_classesVKiMM0I (D, D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM1;
D Kreduce_incomplete_classesVKiMM1I (D, D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM2;
D Kreduce_incomplete_classesVKiMM2I (D, D, D);
static _KLpairGVKd K264;
static _KLpairGVKd K265;
static _KLpairGVKd K266;
static _KLpairGVKd K267;
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLpairGVKd K270;
static _KLpairGVKd K271;
static _KLpairGVKd K272;
static _KLpairGVKd K273;
static _KLpairGVKd K274;
static _KLpairGVKd K275;
static _KLpairGVKd K276;
static _KLpairGVKd K277;
static _KLpairGVKd K278;
static _KLsignatureGVKe K279;
static _KLbyte_stringGVKd_25 K280;
static _KLsimple_object_vectorGVKd_3 K281;
static _KLsignatureGVKe K282;
static _KLsimple_object_vectorGVKd_3 K283;
static _KLsignatureGVKe K284;
static _KLsimple_object_vectorGVKd_3 K285;
static _KLsignatureGVKe K286;
static _KLsimple_object_vectorGVKd_3 K287;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K288;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K289;
extern _KLsimple_methodGVKe KinstanceQVKdMM0;
D KinstanceQVKdMM0I (D object_, D type_);
static _KLpairGVKd K292;
static _KLsignatureAvaluesGVKi K293;
static _KLbyte_stringGVKd_9 K294;
static _KLsimple_object_vectorGVKd_2 K295;
extern _KLsimple_methodGVKe KsubtypeQVKdMM0;
D KsubtypeQVKdMM0I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM1;
D KsubtypeQVKdMM1I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM2;
D KsubtypeQVKdMM2I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM3;
D KsubtypeQVKdMM3I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM4;
D KsubtypeQVKdMM4I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM5;
D KsubtypeQVKdMM5I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM6;
D KsubtypeQVKdMM6I (D, D);
static _KLpairGVKd K310;
static _KLpairGVKd K311;
static _KLpairGVKd K312;
static _KLpairGVKd K313;
static _KLpairGVKd K314;
static _KLpairGVKd K315;
static _KLpairGVKd K316;
static _KLpairGVKd K317;
static _KLpairGVKd K318;
static _KLpairGVKd K319;
static _KLpairGVKd K320;
static _KLpairGVKd K321;
static _KLpairGVKd K322;
static _KLpairGVKd K323;
static _KLpairGVKd K324;
static _KLpairGVKd K325;
static _KLpairGVKd K326;
static _KLpairGVKd K327;
static _KLpairGVKd K328;
static _KLpairGVKd K329;
static _KLpairGVKd K330;
static _KLpairGVKd K331;
static _KLpairGVKd K332;
static _KLpairGVKd K333;
static _KLsignatureAvaluesGVKi K334;
static _KLbyte_stringGVKd_8 K335;
static _KLsignatureAvaluesGVKi K336;
static _KLsimple_object_vectorGVKd_2 K337;
static _KLsignatureAvaluesGVKi K338;
static _KLsimple_object_vectorGVKd_2 K339;
static _KLsignatureAvaluesGVKi K340;
static _KLsimple_object_vectorGVKd_2 K341;
static _KLsignatureAvaluesGVKi K342;
static _KLsimple_object_vectorGVKd_2 K343;
static _KLsignatureAvaluesGVKi K344;
static _KLsimple_object_vectorGVKd_2 K345;
static _KLsignatureAvaluesGVKi K346;
static _KLsimple_object_vectorGVKd_2 K347;
static _KLsignatureAvaluesGVKi K348;
static _KLsimple_object_vectorGVKd_2 K349;
extern _KLsealed_generic_functionGVKe KinstanceQ_functionVKe;
static _KLpairGVKd K351;
static _KLpairGVKd K352;
static _KLpairGVKd K353;
static _KLsignatureAvaluesGVKi K354;
static _KLbyte_stringGVKd_18 K355;
extern _KLsimple_methodGVKe Klimited_collection_instanceQVKe;
static _KLsignatureAvaluesGVKi K357;
static _KLsimple_object_vectorGVKd_2 K358;
extern _KLsealed_generic_functionGVKe KlimitedVKd;
extern _KLkeyword_methodGVKe KlimitedVKdMM3;
D KlimitedVKdMM3I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM4;
D KlimitedVKdMM4I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM5;
D KlimitedVKdMM5I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM6;
D KlimitedVKdMM6I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM7;
D KlimitedVKdMM7I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM8;
D KlimitedVKdMM8I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM9;
D KlimitedVKdMM9I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM10;
D KlimitedVKdMM10I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM11;
D KlimitedVKdMM11I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM12;
D KlimitedVKdMM12I (D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM13;
D KlimitedVKdMM13I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM14;
D KlimitedVKdMM14I (D, D, D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM15;
D KlimitedVKdMM15I (D, D, D, D);
static _KLpairGVKd K386;
static _KLpairGVKd K387;
static _KLpairGVKd K388;
static _KLpairGVKd K389;
static _KLpairGVKd K390;
static _KLpairGVKd K391;
static _KLpairGVKd K392;
static _KLpairGVKd K393;
static _KLpairGVKd K394;
static _KLpairGVKd K395;
static _KLpairGVKd K396;
static _KLpairGVKd K397;
static _KLpairGVKd K398;
static _KLpairGVKd K399;
static _KLpairGVKd K400;
static _KLpairGVKd K401;
static _KLpairGVKd K402;
static _KLkeyword_signatureAvaluesGVKi K403;
static _KLbyte_stringGVKd_7 K404;
static _KLunionGVKe K405;
static _KLkeyword_signatureAvaluesGVKi K406;
static _KLsimple_object_vectorGVKd_4 K407;
static _KLsymbolGVKd KJof_;
static _KLbyte_stringGVKd_2 K409;
static _KLsimple_object_vectorGVKd_1 K410;
static _KLsimple_object_vectorGVKd_2 K411;
static _KLsimple_object_vectorGVKd_2 K412;
static _KLsingletonGVKd K413;
static _KLkeyword_signatureAvaluesGVKi K414;
static _KLsimple_object_vectorGVKd_1 K415;
static _KLsingletonGVKd K416;
static _KLkeyword_signatureAvaluesGVKi K417;
static _KLsimple_object_vectorGVKd_1 K418;
static _KLsingletonGVKd K419;
static _KLkeyword_signatureAvaluesGVKi K420;
static _KLsimple_object_vectorGVKd_2 K421;
static _KLsimple_object_vectorGVKd_1 K422;
static _KLsimple_object_vectorGVKd_1 K423;
static _KLsingletonGVKd K424;
static _KLkeyword_signatureAvaluesGVKi K425;
static _KLsimple_object_vectorGVKd_1 K426;
static _KLsingletonGVKd K427;
static _KLkeyword_signatureAvaluesGVKi K428;
static _KLsimple_object_vectorGVKd_1 K429;
static _KLsingletonGVKd K430;
static _KLkeyword_signatureAvaluesGVKi K431;
static _KLsimple_object_vectorGVKd_1 K432;
static _KLsingletonGVKd K433;
static _KLunionGVKe K434;
static _KLbyte_stringGVKd_65 K435;
static _KLkeyword_signatureAvaluesGVKi K436;
static _KLsimple_object_vectorGVKd_6 K437;
static _KLsimple_object_vectorGVKd_1 K438;
static _KLsimple_object_vectorGVKd_3 K439;
static _KLsimple_object_vectorGVKd_3 K440;
static _KLsingletonGVKd K441;
static _KLkeyword_signatureAvaluesGVKi K442;
static _KLsimple_object_vectorGVKd_6 K443;
static _KLsimple_object_vectorGVKd_1 K444;
static _KLsimple_object_vectorGVKd_3 K445;
static _KLsimple_object_vectorGVKd_3 K446;
static _KLsingletonGVKd K447;
static _KLkeyword_signatureAvaluesGVKi K448;
static _KLsimple_object_vectorGVKd_1 K449;
static _KLsingletonGVKd K450;
static _KLkeyword_signatureAvaluesGVKi K451;
static _KLsimple_object_vectorGVKd_1 K452;
static _KLsingletonGVKd K453;
static _KLkeyword_signatureAvaluesGVKi K454;
static _KLsimple_object_vectorGVKd_1 K455;
static _KLsingletonGVKd K456;
static _KLkeyword_signatureAvaluesGVKi K457;
static _KLsimple_object_vectorGVKd_4 K458;
static _KLsimple_object_vectorGVKd_1 K459;
static _KLsingletonGVKd K460;
extern _KLsimple_methodGVKe Kuninitialized_instanceQ_functionVKi;
extern _KLsimple_methodGVKe Kincomplete_classesVKe;
static _KLsignatureAvaluesGVKi K463;

/* Indirection variables */

static D IKJof_ = &KJof_;

/* Variables */

D subtypeQVKd = &KsubtypeQVKd;
D subjunctive_subtypeQVKi = &Ksubjunctive_subtypeQVKi;
D disjoint_typesQVKe = &Kdisjoint_typesQVKe;
D disjoint_types_1QVKe = &Kdisjoint_types_1QVKe;
D recompute_type_completeXVKi = &Krecompute_type_completeXVKi;
D type_completeQVKe = &Ktype_completeQVKe;
D map_congruency_classesVKi = &Kmap_congruency_classesVKi;
D incomplete_classesVKe = &Kincomplete_classesVKe;
D reduce_incomplete_classesVKi = &Kreduce_incomplete_classesVKi;
D instanceQVKd = &KinstanceQVKd;
D instanceQ_functionVKe = &KinstanceQ_functionVKe;
D uninitialized_instanceQ_functionVKi = &Kuninitialized_instanceQ_functionVKi;
D has_instancesQVKe = &Khas_instancesQVKe;
D limitedVKd = &KlimitedVKd;
D limitsVKi = &KlimitsVKi;
D limited_collection_instanceQVKe = &Klimited_collection_instanceQVKe;

/* Objects */

_KLsealed_generic_functionGVKe KsubtypeQVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K334,
  (D) 1,
  &K335,
  &K310,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KinstanceQVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K293,
  &KPfalseVKi,
  &K294,
  &K292,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLmethod_domainGVKe KinitializeVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KinitializeVKdMM7
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_3,
  &KmakeVKdMM43
};

_KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K279,
  (D) 5,
  &K280,
  &K264,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kmap_congruency_classesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K251,
  (D) 5,
  &K252,
  &K237,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ktype_completeQVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K165,
  (D) 1,
  &K218,
  &K206,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khas_instancesQVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K191,
  (D) 21,
  &K192,
  &K185,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KinitializeVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K182,
  &key_mep_2,
  &KinitializeVKdMM7I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM43 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K180,
  &key_mep_3,
  &KmakeVKdMM43I,
  &K168
};

_KLkeyword_methodGVKe KmakeVKdMM44 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K177,
  &key_mep_2,
  &KmakeVKdMM44I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM45 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K173,
  &key_mep_4,
  &KmakeVKdMM45I,
  &K174
};

_KLkeyword_methodGVKe KmakeVKdMM46 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K167,
  &key_mep_3,
  &KmakeVKdMM46I,
  &K168
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_0,
  &KmakeVKdMM46
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_1,
  &KmakeVKdMM45
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_2,
  &KmakeVKdMM44
};

_KLsealed_generic_functionGVKe Krecompute_type_completeXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K165,
  (D) 1,
  &K166,
  &K158,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdisjoint_typesQVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K111,
  (D) 17,
  &K112,
  &K107,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksubjunctive_subtypeQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K69,
  (D) 17,
  &K70,
  &K45,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K103,
  &Ksubjunctive_subtypeQVKiMM0I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K88,
  &Ksubjunctive_subtypeQVKiMM1I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K86,
  &Ksubjunctive_subtypeQVKiMM2I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K82,
  &Ksubjunctive_subtypeQVKiMM3I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K80,
  &Ksubjunctive_subtypeQVKiMM4I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K76,
  &Ksubjunctive_subtypeQVKiMM5I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K72,
  &Ksubjunctive_subtypeQVKiMM6I
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM0,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM1,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM2,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM3,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM4,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM5,
  &K51
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM6,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM7,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM8,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM9,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM10,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM11,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM12,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM13,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM14,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM15,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM16,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM17,
  &K63
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM18,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM19,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM20,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM21,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM22,
  &K68
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_subtypeQVKiMM23,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K69 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K71,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_20 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "subjunctive-subtype?"
};

static _KLsimple_object_vectorGVKd_3 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K73,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_collection_typeGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K74 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K75 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K76 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K77,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_collection_typeGVKe,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K79 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K80 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K81,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLunionGVKe,
  &KLlimited_collection_typeGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K82 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K83,
  &K84
};

static _KLsimple_object_vectorGVKd_3 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_collection_typeGVKe,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_object_vectorGVKd_1 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K85
};

static _KLsingletonGVKd K85 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K87,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingletonGVKd,
  &KLlimited_collection_typeGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K88 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K89,
  &K84
};

static _KLsimple_object_vectorGVKd_3 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLlimited_collection_typeGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_type_equivalentQVKi
};

_KLsealed_generic_functionGVKe Ksubjunctive_type_equivalentQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 17,
  &K98,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Ksubjunctive_type_equivalentQVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K69,
  &Ksubjunctive_type_equivalentQVKiMM0I
};

_KLsimple_methodGVKe Ksubjunctive_type_equivalentQVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K99,
  &Ksubjunctive_type_equivalentQVKiMM1I
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_type_equivalentQVKiMM0,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Ksubjunctive_type_equivalentQVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "subjunctive-type-equivalent?"
};

static _KLsignatureAvaluesGVKi K99 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K100,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K101 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K102 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K104,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_collection_typeGVKe,
  &KLlimited_collection_typeGVKe,
  &KLsubjunctive_class_universeGVKe
};

_KLsimple_methodGVKe Kdisjoint_typesQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K111,
  &Kdisjoint_typesQVKeMM0I
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_typesQVKeMM0,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_typesQVKeMM1,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_typesQVKeMM2,
  &K110
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_typesQVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K113,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_15 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "disjoint-types?"
};

static _KLsimple_object_vectorGVKd_4 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLtypeGVKd,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K114 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_types_1QVKe
};

_KLsealed_generic_functionGVKe Kdisjoint_types_1QVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K111,
  (D) 17,
  &K131,
  &K122,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K111,
  &Kdisjoint_types_1QVKeMM0I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K145,
  &Kdisjoint_types_1QVKeMM1I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K138,
  &Kdisjoint_types_1QVKeMM2I
};

static _KLpairGVKd K122 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM0,
  &K123
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM1,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM2,
  &K125
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM3,
  &K126
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM4,
  &K127
};

static _KLpairGVKd K127 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM5,
  &K128
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM6,
  &K129
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM7,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kdisjoint_types_1QVKeMM8,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "disjoint-types-1?"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF136 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K137,
  &Kanonymous_of_disjoint_types_1QF136I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K134 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 327737,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Khas_instancesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K135 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K137 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K138 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K139,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLlimited_typeGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF144 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K137,
  &Kanonymous_of_disjoint_types_1QF144I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K142 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 327737,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Khas_instancesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K143 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureAvaluesGVKi K145 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K146,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLlimited_typeGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF156 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K137,
  &Kanonymous_of_disjoint_types_1QF156I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoint_types_1QF155 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K137,
  &Kanonymous_of_disjoint_types_1QF155I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K151 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K152 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K153 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K154 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K165,
  &Krecompute_type_completeXVKiMM0I
};

static _KLpairGVKd K158 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM0,
  &K159
};

static _KLpairGVKd K159 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM1,
  &K160
};

static _KLpairGVKd K160 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM2,
  &K161
};

static _KLpairGVKd K161 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM3,
  &K162
};

static _KLpairGVKd K162 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM4,
  &K163
};

static _KLpairGVKd K163 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM5,
  &K164
};

static _KLpairGVKd K164 = {
  &KLpairGVKdW /* wrapper */,
  &Krecompute_type_completeXVKiMM6,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K165 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_24 K166 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "recompute-type-complete!"
};

static _KLkeyword_signatureAvaluesGVKi K167 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K169,
  &K170,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K168 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K169 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_vector_typeGVKe
};

static _KLsimple_object_vectorGVKd_1 K170 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLbyte_stringGVKd_82 K171 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 329,
  "Dimensions %= incompatible to limited array dimensions %= in call to make(<array>)"
};

static _KLbyte_stringGVKd_47 K172 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Incompatible size %= and limited array type %=."
};

static _KLkeyword_signatureAvaluesGVKi K173 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K175,
  &K176,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  &Kunsupplied_objectVKi,
  &KJdimensions_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_array_typeGVKe
};

static _KLsimple_object_vectorGVKd_2 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJdimensions_
};

static _KLkeyword_signatureAvaluesGVKi K177 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K178,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lstretchy_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K178 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_stretchy_collection_typeGVKe
};

static _KLbyte_stringGVKd_65 K179 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "Cannot instantiate an uninstantiable limited collection type - %="
};

static _KLkeyword_signatureAvaluesGVKi K180 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K181,
  &K170,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LcollectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_collection_typeGVKe
};

static _KLkeyword_signatureGVKe K182 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49020933,
  &K181,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Khas_instancesQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K194,
  &Khas_instancesQVKeMM0I
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM0,
  &K186
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM1,
  &K187
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM2,
  &K188
};

static _KLpairGVKd K188 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM3,
  &K189
};

static _KLpairGVKd K189 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM4,
  &K190
};

static _KLpairGVKd K190 = {
  &KLpairGVKdW /* wrapper */,
  &Khas_instancesQVKeMM5,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K191 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K193,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_14 K192 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "has-instances?"
};

static _KLsimple_object_vectorGVKd_3 K193 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K194 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K195,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLlimited_collection_typeGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K196 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_incomplete_classesF199 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K200,
  &Kanonymous_of_incomplete_classesF199I,
  (D) 1
};

static _KLsignatureGVKe K200 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K201
};

static _KLsimple_object_vectorGVKd_2 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLlistGVKd
};

_KLsimple_methodGVKe Ktype_completeQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K230,
  &Ktype_completeQVKeMM0I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K229,
  &Ktype_completeQVKeMM1I
};

static _KLpairGVKd K206 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM0,
  &K207
};

static _KLpairGVKd K207 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM1,
  &K208
};

static _KLpairGVKd K208 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM2,
  &K209
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM3,
  &K210
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM4,
  &K211
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM5,
  &K212
};

static _KLpairGVKd K212 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM6,
  &K213
};

static _KLpairGVKd K213 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM7,
  &K214
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM8,
  &K215
};

static _KLpairGVKd K215 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM9,
  &K216
};

static _KLpairGVKd K216 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM10,
  &K217
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_completeQVKeMM11,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K218 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "type-complete?"
};

_KLsealed_generic_functionGVKe KlimitsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K226,
  (D) 1,
  &K227,
  &K222,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KlimitsVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K228,
  &KlimitsVKiMM0I
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitsVKiMM0,
  &K223
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitsVKiMM1,
  &K224
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitsVKiMM2,
  &K225
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitsVKiMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K226 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_typeG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLbyte_stringGVKd_6 K227 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "limits"
};

static _KLsignatureAvaluesGVKi K228 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K181,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K229 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_typeG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K230 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &K231
};

static _KLsimple_object_vectorGVKd_1 K231 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K232
};

static _KLsingletonGVKd K232 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K256,
  &Kmap_congruency_classesVKiMM0I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K254,
  &Kmap_congruency_classesVKiMM1I
};

static _KLpairGVKd K237 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM0,
  &K238
};

static _KLpairGVKd K238 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM1,
  &K239
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM2,
  &K240
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM3,
  &K241
};

static _KLpairGVKd K241 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM4,
  &K242
};

static _KLpairGVKd K242 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM5,
  &K243
};

static _KLpairGVKd K243 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM6,
  &K244
};

static _KLpairGVKd K244 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM7,
  &K245
};

static _KLpairGVKd K245 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM8,
  &K246
};

static _KLpairGVKd K246 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM9,
  &K247
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM10,
  &K248
};

static _KLpairGVKd K248 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM11,
  &K249
};

static _KLpairGVKd K249 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM12,
  &K250
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_congruency_classesVKiMM13,
  &KPempty_listVKi
};

static _KLsignatureGVKe K251 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K253
};

static _KLbyte_stringGVKd_22 K252 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "map-congruency-classes"
};

static _KLsimple_object_vectorGVKd_2 K253 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K254 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K255
};

static _KLsimple_object_vectorGVKd_2 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLlimited_typeGVKe
};

static _KLsignatureGVKe K256 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K257
};

static _KLsimple_object_vectorGVKd_2 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLtypeGVKd
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K286,
  &Kreduce_incomplete_classesVKiMM0I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K284,
  &Kreduce_incomplete_classesVKiMM1I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K282,
  &Kreduce_incomplete_classesVKiMM2I
};

static _KLpairGVKd K264 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM0,
  &K265
};

static _KLpairGVKd K265 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM1,
  &K266
};

static _KLpairGVKd K266 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM2,
  &K267
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM3,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM4,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM5,
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM6,
  &K271
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM7,
  &K272
};

static _KLpairGVKd K272 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM8,
  &K273
};

static _KLpairGVKd K273 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM9,
  &K274
};

static _KLpairGVKd K274 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM10,
  &K275
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM11,
  &K276
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM12,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM13,
  &K278
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce_incomplete_classesVKiMM14,
  &KPempty_listVKi
};

static _KLsignatureGVKe K279 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K281
};

static _KLbyte_stringGVKd_25 K280 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "reduce-incomplete-classes"
};

static _KLsimple_object_vectorGVKd_3 K281 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K282 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K283
};

static _KLsimple_object_vectorGVKd_3 K283 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLlimited_typeGVKe,
  &KLobjectGVKd
};

static _KLsignatureGVKe K284 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K285
};

static _KLsimple_object_vectorGVKd_3 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &K85,
  &KLobjectGVKd
};

static _KLsignatureGVKe K286 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K287
};

static _KLsimple_object_vectorGVKd_3 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLtypeGVKd,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K288 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K289 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

_KLsimple_methodGVKe KinstanceQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K293,
  &KinstanceQVKdMM0I
};

static _KLpairGVKd K292 = {
  &KLpairGVKdW /* wrapper */,
  &KinstanceQVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K293 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K295,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_9 K294 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "instance?"
};

static _KLsimple_object_vectorGVKd_2 K295 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLtypeGVKd
};

_KLsimple_methodGVKe KsubtypeQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K348,
  &KsubtypeQVKdMM0I
};

_KLsimple_methodGVKe KsubtypeQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K346,
  &KsubtypeQVKdMM1I
};

_KLsimple_methodGVKe KsubtypeQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K344,
  &KsubtypeQVKdMM2I
};

_KLsimple_methodGVKe KsubtypeQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K342,
  &KsubtypeQVKdMM3I
};

_KLsimple_methodGVKe KsubtypeQVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K340,
  &KsubtypeQVKdMM4I
};

_KLsimple_methodGVKe KsubtypeQVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K338,
  &KsubtypeQVKdMM5I
};

_KLsimple_methodGVKe KsubtypeQVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K336,
  &KsubtypeQVKdMM6I
};

static _KLpairGVKd K310 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM0,
  &K311
};

static _KLpairGVKd K311 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM1,
  &K312
};

static _KLpairGVKd K312 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM2,
  &K313
};

static _KLpairGVKd K313 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM3,
  &K314
};

static _KLpairGVKd K314 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM4,
  &K315
};

static _KLpairGVKd K315 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM5,
  &K316
};

static _KLpairGVKd K316 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM6,
  &K317
};

static _KLpairGVKd K317 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM7,
  &K318
};

static _KLpairGVKd K318 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM8,
  &K319
};

static _KLpairGVKd K319 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM9,
  &K320
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM10,
  &K321
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM11,
  &K322
};

static _KLpairGVKd K322 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM12,
  &K323
};

static _KLpairGVKd K323 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM13,
  &K324
};

static _KLpairGVKd K324 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM14,
  &K325
};

static _KLpairGVKd K325 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM15,
  &K326
};

static _KLpairGVKd K326 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM16,
  &K327
};

static _KLpairGVKd K327 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM17,
  &K328
};

static _KLpairGVKd K328 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM18,
  &K329
};

static _KLpairGVKd K329 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM19,
  &K330
};

static _KLpairGVKd K330 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM20,
  &K331
};

static _KLpairGVKd K331 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM21,
  &K332
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM22,
  &K333
};

static _KLpairGVKd K333 = {
  &KLpairGVKdW /* wrapper */,
  &KsubtypeQVKdMM23,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K334 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_8 K335 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "subtype?"
};

static _KLsignatureAvaluesGVKi K336 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K337,
  &K84
};

static _KLsimple_object_vectorGVKd_2 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_collection_typeGVKe,
  &KLclassGVKd
};

static _KLsignatureAvaluesGVKi K338 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K339,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K339 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_collection_typeGVKe,
  &KLunionGVKe
};

static _KLsignatureAvaluesGVKi K340 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K341,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K341 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunionGVKe,
  &KLlimited_collection_typeGVKe
};

static _KLsignatureAvaluesGVKi K342 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K343,
  &K84
};

static _KLsimple_object_vectorGVKd_2 K343 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_collection_typeGVKe,
  &KLtypeGVKd
};

static _KLsignatureAvaluesGVKi K344 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K345,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K345 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingletonGVKd,
  &KLlimited_collection_typeGVKe
};

static _KLsignatureAvaluesGVKi K346 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K347,
  &K84
};

static _KLsimple_object_vectorGVKd_2 K347 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLlimited_collection_typeGVKe
};

static _KLsignatureAvaluesGVKi K348 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K349,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K349 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_collection_typeGVKe,
  &KLlimited_collection_typeGVKe
};

_KLsealed_generic_functionGVKe KinstanceQ_functionVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K354,
  (D) 1,
  &K355,
  &K351,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLpairGVKd K351 = {
  &KLpairGVKdW /* wrapper */,
  &KinstanceQ_functionVKeMM0,
  &K352
};

static _KLpairGVKd K352 = {
  &KLpairGVKdW /* wrapper */,
  &KinstanceQ_functionVKeMM1,
  &K353
};

static _KLpairGVKd K353 = {
  &KLpairGVKdW /* wrapper */,
  &KinstanceQ_functionVKeMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K354 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LmethodG_typesVKi
};

static _KLbyte_stringGVKd_18 K355 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "instance?-function"
};

_KLsimple_methodGVKe Klimited_collection_instanceQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K357,
  &Klimited_collection_instanceQVKeI
};

static _KLsignatureAvaluesGVKi K357 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K358,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlimited_collection_typeGVKe
};

_KLsealed_generic_functionGVKe KlimitedVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K403,
  &KPfalseVKi,
  &K404,
  &K386,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KlimitedVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K457,
  &key_mep_4,
  &KlimitedVKdMM3I,
  &K458
};

_KLkeyword_methodGVKe KlimitedVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K454,
  &key_mep_4,
  &KlimitedVKdMM4I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K451,
  &key_mep_4,
  &KlimitedVKdMM5I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K448,
  &key_mep_4,
  &KlimitedVKdMM6I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K442,
  &key_mep_5,
  &KlimitedVKdMM7I,
  &K443
};

_KLkeyword_methodGVKe KlimitedVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K436,
  &key_mep_5,
  &KlimitedVKdMM8I,
  &K437
};

_KLkeyword_methodGVKe KlimitedVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K431,
  &key_mep_4,
  &KlimitedVKdMM9I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K428,
  &key_mep_4,
  &KlimitedVKdMM10I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K425,
  &key_mep_4,
  &KlimitedVKdMM11I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K420,
  &key_mep_3,
  &KlimitedVKdMM12I,
  &K421
};

_KLkeyword_methodGVKe KlimitedVKdMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K417,
  &key_mep_4,
  &KlimitedVKdMM13I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K414,
  &key_mep_4,
  &KlimitedVKdMM14I,
  &K407
};

_KLkeyword_methodGVKe KlimitedVKdMM15 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K406,
  &key_mep_4,
  &KlimitedVKdMM15I,
  &K407
};

static _KLpairGVKd K386 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM0,
  &K387
};

static _KLpairGVKd K387 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM1,
  &K388
};

static _KLpairGVKd K388 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM2,
  &K389
};

static _KLpairGVKd K389 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM3,
  &K390
};

static _KLpairGVKd K390 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM4,
  &K391
};

static _KLpairGVKd K391 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM5,
  &K392
};

static _KLpairGVKd K392 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM6,
  &K393
};

static _KLpairGVKd K393 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM7,
  &K394
};

static _KLpairGVKd K394 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM8,
  &K395
};

static _KLpairGVKd K395 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM9,
  &K396
};

static _KLpairGVKd K396 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM10,
  &K397
};

static _KLpairGVKd K397 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM11,
  &K398
};

static _KLpairGVKd K398 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM12,
  &K399
};

static _KLpairGVKd K399 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM13,
  &K400
};

static _KLpairGVKd K400 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM14,
  &K401
};

static _KLpairGVKd K401 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM15,
  &K402
};

static _KLpairGVKd K402 = {
  &KLpairGVKdW /* wrapper */,
  &KlimitedVKdMM16,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K403 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_7 K404 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "limited"
};

static _KLunionGVKe K405 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K85,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K406 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K410,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K407 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJof_,
  &KLobjectGVKd,
  &KJsize_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJof_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K409
};

static _KLbyte_stringGVKd_2 K409 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "of"
};

static _KLsimple_object_vectorGVKd_1 K410 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K413
};

static _KLsimple_object_vectorGVKd_2 K411 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJof_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_2 K412 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &K405
};

static _KLsingletonGVKd K413 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmutable_sequenceGVKd
};

static _KLkeyword_signatureAvaluesGVKi K414 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K415,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K416
};

static _KLsingletonGVKd K416 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsequenceGVKd
};

static _KLkeyword_signatureAvaluesGVKi K417 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K418,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K418 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K419
};

static _KLsingletonGVKd K419 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmutable_explicit_key_collectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K420 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K422,
  &K423,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJof_,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K422 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K424
};

static _KLsimple_object_vectorGVKd_1 K423 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJof_
};

static _KLsingletonGVKd K424 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_collectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K425 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K426,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K426 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K427
};

static _KLsingletonGVKd K427 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmutable_collectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K428 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K429,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K429 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K430
};

static _KLsingletonGVKd K430 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLexplicit_key_collectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K431 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K432,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K433
};

static _KLsingletonGVKd K433 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLcollectionGVKd
};

static _KLunionGVKe K434 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K85,
  &KLsequenceGVKd
};

static _KLbyte_stringGVKd_65 K435 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "Dimensions %= incompatible to size %= in call to limited(<array>)"
};

static _KLkeyword_signatureAvaluesGVKi K436 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K438,
  &K439,
  &K440,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K437 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJof_,
  &KLobjectGVKd,
  &KJsize_,
  &KPfalseVKi,
  &KJdimensions_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K438 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K441
};

static _KLsimple_object_vectorGVKd_3 K439 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJof_,
  &KJsize_,
  &KJdimensions_
};

static _KLsimple_object_vectorGVKd_3 K440 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &K405,
  &K434
};

static _KLsingletonGVKd K441 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLarrayGVKd
};

static _KLkeyword_signatureAvaluesGVKi K442 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K444,
  &K445,
  &K446,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K443 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJof_,
  &KLobjectGVKd,
  &KJsize_,
  &KPunboundVKi,
  &KJsize_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K444 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K447
};

static _KLsimple_object_vectorGVKd_3 K445 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJof_,
  &KJsize_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_3 K446 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLobjectGVKd,
  &K405
};

static _KLsingletonGVKd K447 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_vectorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K448 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K449,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K449 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K450
};

static _KLsingletonGVKd K450 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLvectorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K451 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K452,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K452 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K453
};

static _KLsingletonGVKd K453 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobject_tableGVKd
};

static _KLkeyword_signatureAvaluesGVKi K454 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K455,
  &K411,
  &K412,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K455 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K456
};

static _KLsingletonGVKd K456 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLtableGVKd
};

static _KLkeyword_signatureAvaluesGVKi K457 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K459,
  &K411,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K458 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJof_,
  &KPfalseVKi,
  &KJsize_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K459 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K460
};

static _KLsingletonGVKd K460 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstringGVKd
};

_KLsimple_methodGVKe Kuninitialized_instanceQ_functionVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K293,
  &Kuninitialized_instanceQ_functionVKiI
};

_KLsimple_methodGVKe Kincomplete_classesVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K463,
  &Kincomplete_classesVKeI
};

static _KLsignatureAvaluesGVKi K463 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

/* Code */

D KinitializeVKdMM7I (D t_, D Urest_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:410
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:412
  T4 = SLOT_VALUE(&Klimited_collection_instanceQVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:412
  SLOT_VALUE_SETTER(T4, t_, 0);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:412
  T3 = T4;
  MV_SET_ELT(0, T4);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:410
  return(T3);
}

D Kuninitialized_instanceQ_functionVKiI (D obj_, D type_) {
  D T2;
  D mF3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:170
  CONGRUENT_CALL_PROLOG(&KinstanceQ_functionVKe, 1);
  T2 = CONGRUENT_CALL1(type_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:170
  mF3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:171
  T6 = SLOT_VALUE(mF3, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:171
  SLOT_VALUE_SETTER(T6, type_, 0);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:172
  T4 = primitive_instanceQ(obj_,type_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:172
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:169
  MV_SET_COUNT(1);
  return(T5_0);
}

D Klimited_collection_instanceQVKeI (D x_, D t_) {
  D UtmpF3;
  D UtmpF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D T28_0;
  D T29;
  D T30;
  D T31;
  _KLsimple_object_vectorGVKd_1 T32 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:390
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:392
  T18 = SLOT_VALUE_INITD(t_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:393
  T19 = SLOT_VALUE_INITD(t_, 5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  T20 = primitive_instanceQ(x_,&KLlimited_collectionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (T20 != &KPfalseVKi) {
    UtmpF3 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
    T21 = primitive_instanceQ(x_,&KLsimple_vectorGVKd);
    UtmpF3 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (UtmpF3 != &KPfalseVKi) {
    UtmpF4 = UtmpF3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:399
    T22 = primitive_instanceQ(x_,&KLlimited_stretchy_vectorGVKe);
    UtmpF4 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (UtmpF4 != &KPfalseVKi) {
    T5 = UtmpF4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:399
    T23 = primitive_instanceQ(x_,&KLsimple_arrayGVKi);
    T5 = T23;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:404
    T24 = SLOT_VALUE_INITD(t_, 1);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:404
    T25 = primitive_instanceQ(x_,T24);
    T6 = T25;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:405
    T7 = CALL1(&Kelement_typeVKe, x_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:405
    T26 = SLOT_VALUE_INITD(t_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:405
    CONGRUENT_CALL_PROLOG(&Ksubjunctive_type_equivalentQVKi, 3);
    T27_0 = CONGRUENT_CALL3(T7, T26, Dempty_subjunctive_class_universeVKe);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:405
    T28_0 = T27_0;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:405
    T29 = T28_0;
    T8 = T29;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:406
    T30 = primitive_not(T18);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:406
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:406
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T9 = CONGRUENT_CALL1(x_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:406
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T10 = CONGRUENT_CALL2(T9, T18);
      T11 = T10;
    } else {
      T11 = T30;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:406
    T12 = T11;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
    T31 = primitive_not(T19);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
      T14 = CALL1(&KdimensionsVKd, x_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
      T32.vector_element_[0] = T19;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
      T33_0 = KeveryQVKdMM0I(&KEVKd, T14, &T32);
      T15_0 = T33_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
      T13_0 = T31;
      T15_0 = T13_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:407
    T17_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
    T16_0 = &KPfalseVKi;
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:390
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kreduce_incomplete_classes_sovVKiI (D f_, D v_, D n_, D ans_) {
  DWORD T5;
  DWORD T6;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13_0;
  DWORD iF14T, iF14;
  D ansF15T, ansF15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:148
  T5 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:148
  T6 = primitive_machine_word_subtract_signal_overflow(T5,4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
  iF14T = T6;
  ansF15T = ans_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
    iF14 = iF14T;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:142
    T16 = primitive_cast_raw_as_integer(iF14);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
    ansF15 = ansF15T;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:142
    T9 = primitive_machine_word_less_thanQ(iF14,1);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:142
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:145
      T7_0 = ansF15;
      T8_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
      T10 = primitive_machine_word_subtract_signal_overflow(iF14,4);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
      T11 = KelementVKdMM11I(v_, T16, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
      ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K289, 3);
      T12 = ENGINE_NODE_CALL3(&K289, f_, T11, ansF15);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
      iF14T = T10;
      ansF15T = T12;
      goto L0;
      T8_0 = T13_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:142
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:138
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kmap_congruency_classes_sovVKiI (D f_, D x_, D n_) {
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD iF9T, iF9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:104
  T4 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:104
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
  iF9T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
    iF9 = iF9T;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
    T11 = primitive_cast_raw_as_integer(iF9);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
    T6 = primitive_machine_word_less_thanQ(iF9,1);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
      T7 = KelementVKdMM11I(x_, T11, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K288, 2);
      ENGINE_NODE_CALL2(&K288, f_, T7);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
      T8 = primitive_machine_word_subtract_signal_overflow(iF9,4);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
      iF9T = T8;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:104
  T10 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:99
  MV_SET_COUNT(0);
  return(T10);
}

D Ktype_completeQ_sovVKiI (D x_, D n_) {
  DWORD T3;
  DWORD T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  DWORD T12;
  D T13_0;
  DWORD iF14T, iF14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:93
  T3 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:93
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
  iF14T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
    iF14 = iF14T;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
    T15 = primitive_cast_raw_as_integer(iF14);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
    T10 = primitive_machine_word_less_thanQ(iF14,1);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
      T5_0 = T10;
      T9_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
      T11 = KelementVKdMM11I(x_, T15, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
      CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
      T6 = CONGRUENT_CALL1(T11);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
        T12 = primitive_machine_word_subtract_signal_overflow(iF14,4);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
        iF14T = T12;
        goto L0;
        T8_0 = T13_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
        T7_0 = &KPfalseVKi;
        T8_0 = T7_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:88
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kincomplete_classesVKeI (D x_) {
  D T1_0;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:114
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K196, 3);
  T2_0 = ENGINE_NODE_CALL3(&K196, &Kanonymous_of_incomplete_classesF199, x_, &KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:112
  T1_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:112
  MV_SET_COUNT(1);
  return(T1_0);
}

D Krecompute_type_completeXVKiMM0I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:77
  CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
  T2_0 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:76
  MV_SET_COUNT(1);
  return(T2_0);
}

D KmakeVKdMM43I (D t_, D all_keys_, D size_) {
  D T4;
  D Utmp_;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15_0;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:322
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:325
  T8 = SLOT_VALUE_INITD(t_, 3);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:326
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
    T9 = SLOT_VALUE_INITD(t_, 4);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
    if (T9 != &KPfalseVKi) {
      Utmp_ = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
      T10 = primitive_idQ(size_,&Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
      if (T10 != &KPfalseVKi) {
        T4 = &KPfalseVKi;
      } else {
        T4 = size_;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
      Utmp_ = T4;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
    if (Utmp_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
      T11 = Utmp_;
      T6 = T11;
    } else {
      T6 = (D) 1;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:327
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:329
    T12 = SLOT_VALUE_INITD(t_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:328
    T13_0 = APPLY6(&KmakeVKd, T8, &KJelement_type_, T12, &KJsize_, T6, all_keys_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:328
    T16_0 = T13_0;
    T7_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:333
    T14.vector_element_[0] = t_;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:333
    T15_0 = KerrorVKdMM1I(&K179, &T14);
    T7_0 = T15_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:326
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:322
  MV_SET_COUNT(1);
  return(T7_0);
}

D KmakeVKdMM44I (D t_, D all_keys_) {
  D T3_0;
  D T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:340
  T4 = SLOT_VALUE_INITD(t_, 3);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:341
  T5 = SLOT_VALUE_INITD(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:340
  T6_0 = APPLY4(&KmakeVKd, T4, &KJelement_type_, T5, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:337
  T3_0 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:337
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM45I (D t_, D all_keys_, D size_, D dimensions_) {
  D T5_0;
  D T6;
  D dims_;
  D T8_0;
  D T9;
  D T10;
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T20;
  D T21;
  D T22_0;
  D T23_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:349
  T9 = primitive_idQ(size_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:349
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:360
    T15 = SLOT_VALUE_INITD(t_, 5);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:362
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
      T16 = primitive_idQ(dimensions_,&Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
      if (T16 != &KPfalseVKi) {
        T6 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T17 = CONGRUENT_CALL2(dimensions_, T15);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
        T18 = primitive_not(T17);
        T6 = T18;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:364
        T19.vector_element_[0] = dimensions_;
        T19.vector_element_[1] = T15;
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:364
        KerrorVKdMM1I(&K171, &T19);
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:363
      dims_ = T15;
    } else {
      dims_ = dimensions_;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:362
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:371
    T20 = SLOT_VALUE_INITD(t_, 3);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:372
    T21 = SLOT_VALUE_INITD(t_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:371
    T22_0 = APPLY6(&KmakeVKd, T20, &KJelement_type_, T21, &KJdimensions_, dims_, all_keys_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:371
    T23_0 = T22_0;
    T8_0 = T23_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:350
    T10 = SLOT_VALUE_INITD(t_, 5);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:350
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:351
      T11.vector_element_[0] = size_;
      T11.vector_element_[1] = t_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:351
      T12_0 = KerrorVKdMM1I(&K172, &T11);
      T5_0 = T12_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:354
      T13 = SLOT_VALUE_INITD(t_, 2);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:353
      T14_0 = MEP_APPLY6(&KmakeVKdMM27, &KPempty_listVKi, &KLsimple_element_type_vectorGVKe, &KJelement_type_, T13, &KJsize_, size_, all_keys_);
      T5_0 = T14_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:350
    T8_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:349
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:345
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM46I (D t_, D all_keys_, D size_) {
  D T4;
  D Utmp_;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:378
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:382
  T8 = SLOT_VALUE_INITD(t_, 3);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
  T9 = SLOT_VALUE_INITD(t_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
  if (T9 != &KPfalseVKi) {
    Utmp_ = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
    T10 = primitive_idQ(size_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
    if (T10 != &KPfalseVKi) {
      T4 = &KPfalseVKi;
    } else {
      T4 = size_;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
    Utmp_ = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
    T11 = Utmp_;
    T6 = T11;
  } else {
    T6 = (D) 1;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:383
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:385
  T12 = SLOT_VALUE_INITD(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:384
  T13_0 = APPLY6(&KmakeVKd, T8, &KJelement_type_, T12, &KJsize_, T6, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:378
  T7_0 = T13_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:378
  MV_SET_COUNT(1);
  return(T7_0);
}

D Ksubjunctive_subtypeQVKiMM0I (D t1_, D t2_, D scu_) {
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29_0;
  D T30;
  D UtmpF31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D UtmpF37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:462
  T21 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:463
  T22 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:464
  T23 = SLOT_VALUE_INITD(t1_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:465
  T24 = SLOT_VALUE_INITD(t2_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:466
  T25 = SLOT_VALUE_INITD(t1_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:467
  T26 = SLOT_VALUE_INITD(t2_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:468
  T27 = SLOT_VALUE_INITD(t1_, 5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:469
  T28 = SLOT_VALUE_INITD(t2_, 5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  T33 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (T33 != &KPfalseVKi) {
    UtmpF31 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T30 = Kscu_entryQVKeI(T21, scu_);
    UtmpF31 = T30;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (UtmpF31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T32 = UtmpF31;
    T35 = T32;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T34 = SLOT_VALUE(T21, 2);
    T35 = T34;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (T33 != &KPfalseVKi) {
    UtmpF37 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T36 = Kscu_entryQVKeI(T22, scu_);
    UtmpF37 = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (UtmpF37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T38 = UtmpF37;
    T40 = T38;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T39 = SLOT_VALUE(T22, 2);
    T40 = T39;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  T29_0 = KsubiclassQVKiI(T35, T21, T40, T22);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  T41 = T29_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_type_equivalentQVKi, &K90, 3);
    T42 = ENGINE_NODE_CALL3(&K90, T23, T24, scu_);
    T4 = T42;
  } else {
    T4 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:471
    if (T27 != &KPfalseVKi) {
      T5 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:471
      T43 = primitive_not(T28);
      T5 = T43;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:471
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:471
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:472
      T44 = primitive_not(T26);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:472
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:472
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T7_0 = CONGRUENT_CALL2(T25, T26);
        T8_0 = T7_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:472
        T6_0 = T44;
        T8_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:472
      T18_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        T45 = primitive_not(T28);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
          T9 = CALL3(&KeveryQVKd, &KEVKd, T27, T28);
          T10 = T9;
        } else {
          T10 = T45;
        }
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        T11 = T10;
      } else {
        T11 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        T46 = primitive_not(T26);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
          T13 = CALL2(&Kreduce1VKd, &KTVKd, T27);
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T14_0 = CONGRUENT_CALL2(T13, T26);
          T15_0 = T14_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
          T12_0 = T46;
          T15_0 = T12_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        T17_0 = T15_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
        T16_0 = &KPfalseVKi;
        T17_0 = T16_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:474
      T18_0 = T17_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:471
    T20_0 = T18_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
    T19_0 = &KPfalseVKi;
    T20_0 = T19_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:470
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:458
  MV_SET_COUNT(1);
  return(T20_0);
}

D Ksubjunctive_subtypeQVKiMM1I (D t1_, D t2_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:486
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:489
  T4_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:486
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM2I (D t1_, D t2_, D scu_) {
  D T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:497
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:500
  T4 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:500
  T5 = primitive_instanceQ(T4,t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:500
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:497
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ksubjunctive_subtypeQVKiMM3I (D t1_, D t2_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:508
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:511
  T4_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:508
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM4I (D u_, D t_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:526
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K78, 3);
  T7 = ENGINE_NODE_CALL3(&K78, T6, t_, scu_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K79, 3);
    T9_0 = ENGINE_NODE_CALL3(&K79, T8, t_, scu_);
    T5_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:529
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:526
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM5I (D t_, D u_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D Utmp_;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:532
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K74, 3);
  Utmp_ = ENGINE_NODE_CALL3(&K74, t_, T6, scu_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
    T4_0 = Utmp_;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K75, 3);
    T9_0 = ENGINE_NODE_CALL3(&K75, t_, T8, scu_);
    T5_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:535
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:532
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM6I (D t1_, D t2_, D scu_) {
  D T4;
  D T5_0;
  D T6;
  D UtmpF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D UtmpF13;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:543
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  T4 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  if (T9 != &KPfalseVKi) {
    UtmpF7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T6 = Kscu_entryQVKeI(T4, scu_);
    UtmpF7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  if (UtmpF7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T8 = UtmpF7;
    T11 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T10 = SLOT_VALUE(T4, 2);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  if (T9 != &KPfalseVKi) {
    UtmpF13 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T12 = Kscu_entryQVKeI(t2_, scu_);
    UtmpF13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  if (UtmpF13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T14 = UtmpF13;
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
    T15 = SLOT_VALUE(t2_, 2);
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:546
  T5_0 = KsubiclassQVKiI(T11, T4, T16, t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:543
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_type_equivalentQVKiMM0I (D t1_, D t2_, D scu_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:423
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
  T8 = primitive_idQ(t1_,t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
    T4_0 = T8;
    T7_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K101, 3);
    T9 = ENGINE_NODE_CALL3(&K101, t1_, t2_, scu_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
      ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K102, 3);
      T10_0 = ENGINE_NODE_CALL3(&K102, t2_, t1_, scu_);
      T6_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
      T5_0 = &KPfalseVKi;
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:425
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:423
  MV_SET_COUNT(1);
  return(T7_0);
}

D Ksubjunctive_type_equivalentQVKiMM1I (D t1_, D t2_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D UtmpF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D UtmpF14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:428
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
  T6 = primitive_idQ(t1_,t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    T4_0 = T6;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    T10 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    if (T10 != &KPfalseVKi) {
      UtmpF8 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T7 = Kscu_entryQVKeI(t1_, scu_);
      UtmpF8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    if (UtmpF8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T9 = UtmpF8;
      T12 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T11 = SLOT_VALUE(t1_, 2);
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    if (T10 != &KPfalseVKi) {
      UtmpF14 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T13 = Kscu_entryQVKeI(t2_, scu_);
      UtmpF14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    if (UtmpF14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T15 = UtmpF14;
      T17 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
      T16 = SLOT_VALUE(t2_, 2);
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    T18 = primitive_idQ(T12,T17);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
    T19_0 = T18;
    T5_0 = T19_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:430
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:428
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_typesQVKeMM0I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:39
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:43
  ENGINE_NODE_CALL_PROLOG(&Kdisjoint_types_1QVKe, &K114, 4);
  T5_0 = ENGINE_NODE_CALL4(&K114, t1_, t2_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:39
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_types_1QVKeMM0I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D disQ_;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:54
  T12 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:54
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:55
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T5 = CONGRUENT_CALL2(t1_, t2_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:55
    if (T5 != &KPfalseVKi) {
      T7 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:55
      CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
      T6 = CONGRUENT_CALL2(t2_, t1_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:55
      T13 = primitive_not(T6);
      T7 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:55
    disQ_ = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:57
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K151, 3);
    T14 = ENGINE_NODE_CALL3(&K151, t1_, t2_, scu_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:57
    if (T14 != &KPfalseVKi) {
      T8 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:57
      ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K152, 3);
      T15 = ENGINE_NODE_CALL3(&K152, t2_, t1_, scu_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:57
      T16 = primitive_not(T15);
      T8 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:57
    disQ_ = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:59
  if (disQ_ != &KPfalseVKi) {
    T10 = dep_;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:59
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
    if (dep_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T17.vector_element_[0] = dep_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T19 = primitive_copy_vector(&T17);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T18 = MAKE_CLOSURE_INITD(&Kanonymous_of_disjoint_types_1QF156, 1, T19);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K153, 2);
      ENGINE_NODE_CALL2(&K153, T18, t1_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T20.vector_element_[0] = dep_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T22 = primitive_copy_vector(&T20);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      T21 = MAKE_CLOSURE_INITD(&Kanonymous_of_disjoint_types_1QF155, 1, T22);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K154, 2);
      ENGINE_NODE_CALL2(&K154, T21, t2_);
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:62
  T11_0 = disQ_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:48
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kdisjoint_types_1QVKeMM1I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;
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
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:572
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
    T10 = primitive_instanceQ(t1_,&KLsingletonGVKd);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
      T8 = t1_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
      T6 = CALL3(&Khas_instancesQVKe, t2_, T8, Dempty_subjunctive_class_universeVKe);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
      T12 = T6;
      T14 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
      T7 = Kgrounded_has_instancesQVKeI(t2_, t1_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
      T13 = T7;
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
    ENGINE_NODE_CALL_PROLOG(&Khas_instancesQVKe, &K142, 3);
    T11 = ENGINE_NODE_CALL3(&K142, t2_, t1_, scu_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
    T15 = T11;
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:576
  T17 = primitive_not(T16);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:577
  if (T16 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
    if (dep_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
      T18.vector_element_[0] = dep_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
      T20 = primitive_copy_vector(&T18);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
      T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_disjoint_types_1QF144, 1, T20);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K143, 2);
      ENGINE_NODE_CALL2(&K143, T19, t1_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
      KPregister_subclass_dependent_genericVKeI(dep_, t2_);
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:577
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:580
  T5_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:572
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_types_1QVKeMM2I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;
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
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:583
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
    T10 = primitive_instanceQ(t2_,&KLsingletonGVKd);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
      T8 = t2_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
      T6 = CALL3(&Khas_instancesQVKe, t1_, T8, Dempty_subjunctive_class_universeVKe);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
      T12 = T6;
      T14 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
      T7 = Kgrounded_has_instancesQVKeI(t1_, t2_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
      T13 = T7;
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
    ENGINE_NODE_CALL_PROLOG(&Khas_instancesQVKe, &K134, 3);
    T11 = ENGINE_NODE_CALL3(&K134, t1_, t2_, scu_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
    T15 = T11;
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:587
  T17 = primitive_not(T16);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:588
  if (T16 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
    if (dep_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
      KPregister_subclass_dependent_genericVKeI(dep_, t1_);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
      T18.vector_element_[0] = dep_;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
      T20 = primitive_copy_vector(&T18);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
      T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_disjoint_types_1QF136, 1, T20);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K135, 2);
      ENGINE_NODE_CALL2(&K135, T19, t2_);
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:588
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:591
  T5_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:583
  MV_SET_COUNT(1);
  return(T5_0);
}

static D Kanonymous_of_disjoint_types_1QF136I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
  T2 = Kconcatenate_2VKeMM1I(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
  T3 = APPLY1(&KPregister_subclass_dependent_genericVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:589
  return(T3);
}

static D Kanonymous_of_disjoint_types_1QF144I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
  T2 = Kconcatenate_2VKeMM1I(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
  T3 = APPLY1(&KPregister_subclass_dependent_genericVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:578
  return(T3);
}

static D Kanonymous_of_disjoint_types_1QF156I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  T2 = Kconcatenate_2VKeMM1I(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  T3 = APPLY1(&KPregister_subclass_dependent_genericVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  return(T3);
}

static D Kanonymous_of_disjoint_types_1QF155I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  T2 = Kconcatenate_2VKeMM1I(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  T3 = APPLY1(&KPregister_subclass_dependent_genericVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:60
  return(T3);
}

D Khas_instancesQVKeMM0I (D class_, D type_, D scu_) {
  D T4_0;
  D T4_1;
  D T5_0;
  D T5_1;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:549
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  T7 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  T8 = SLOT_VALUE(&KLlimited_collectionGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  T6_0 = KsubiclassQVKiI(T7, class_, T8, &KLlimited_collectionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  T9 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:554
    T10 = SLOT_VALUE_INITD(type_, 1);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:554
    T11 = Khas_instancesQVKeMM2I(class_, T10, scu_);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:554
    T12_0 = T11;
    T12_1 = &KPfalseVKi;
    T5_0 = T12_0;
    T5_1 = T12_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
    T4_0 = &KPfalseVKi;
    T4_1 = &KPfalseVKi;
    T5_0 = T4_0;
    T5_1 = T4_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:553
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:549
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

static D Kanonymous_of_incomplete_classesF199I (D class_, D ans_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:115
  T2 = Kadd_newXVKdMM3I(ans_, class_, &KPempty_vectorVKi, &KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:114
  return(T2);
}

D Ktype_completeQVKeMM0I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:84
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:85
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:84
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_completeQVKeMM1I (D t_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:600
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  CONGRUENT_CALL_PROLOG(&KlimitsVKi, 1);
  T2 = CONGRUENT_CALL1(t_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  T3 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  T6 = primitive_machine_word_logbitQ(21,T5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:601
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:600
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitsVKiMM0I (D t_) {
  D T2_0;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:415
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:416
  T3 = SLOT_VALUE_INITD(t_, 3);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:416
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:415
  T2_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:415
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmap_congruency_classesVKiMM0I (D f_, D t_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:107
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:107
  MV_SET_COUNT(0);
  return(T3);
}

D Kmap_congruency_classesVKiMM1I (D f_, D t_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:604
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:605
  CONGRUENT_CALL_PROLOG(&KlimitsVKi, 1);
  T3 = CONGRUENT_CALL1(t_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:605
  T4 = CALL1(f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:604
  MV_SET_COUNT(0);
  return(T4);
}

D Kreduce_incomplete_classesVKiMM0I (D f_, D t_, D accumulating_answer_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:125
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:127
  T4_0 = accumulating_answer_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:125
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kreduce_incomplete_classesVKiMM1I (D f_, D t_, D accumulating_answer_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:131
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:133
  T4_0 = accumulating_answer_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:131
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kreduce_incomplete_classesVKiMM2I (D f_, D t_, D ans_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:594
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:596
  CONGRUENT_CALL_PROLOG(&KlimitsVKi, 1);
  T4 = CONGRUENT_CALL1(t_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:596
  T5_0 = Kreduce_incomplete_classesVKiMM10I(f_, T4, ans_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:594
  MV_SET_COUNT(1);
  return(T5_0);
}

D KinstanceQVKdMM0I (D object_, D type_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:160
  T3 = primitive_instanceQ(object_,type_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:160
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:159
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsubtypeQVKdMM0I (D t1_, D t2_) {
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
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
  D T33;
  D T34;
  D T35;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:441
  T20 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:442
  T21 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:443
  T22 = SLOT_VALUE_INITD(t1_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:444
  T23 = SLOT_VALUE_INITD(t2_, 2);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:445
  T24 = SLOT_VALUE_INITD(t1_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:446
  T25 = SLOT_VALUE_INITD(t2_, 4);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:447
  T26 = SLOT_VALUE_INITD(t1_, 5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:448
  T27 = SLOT_VALUE_INITD(t2_, 5);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
  T28 = KsubtypeQVKdMM10I(T20, T21);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:450
    CONGRUENT_CALL_PROLOG(&Ksubjunctive_type_equivalentQVKi, 3);
    T29_0 = CONGRUENT_CALL3(T22, T23, Dempty_subjunctive_class_universeVKe);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:450
    T30_0 = T29_0;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:450
    T31 = T30_0;
    T3 = T31;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:451
    if (T26 != &KPfalseVKi) {
      T4 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:451
      T32 = primitive_not(T27);
      T4 = T32;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:451
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:451
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:452
      T33 = primitive_not(T25);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:452
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:452
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T6_0 = CONGRUENT_CALL2(T24, T25);
        T7_0 = T6_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:452
        T5_0 = T33;
        T7_0 = T5_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:452
      T17_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        T34 = primitive_not(T27);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
          T8 = CALL3(&KeveryQVKd, &KEVKd, T26, T27);
          T9 = T8;
        } else {
          T9 = T34;
        }
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        T10 = T9;
      } else {
        T10 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        T35 = primitive_not(T25);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
          T12 = CALL2(&Kreduce1VKd, &KTVKd, T26);
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T13_0 = CONGRUENT_CALL2(T12, T25);
          T14_0 = T13_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
          T11_0 = T35;
          T14_0 = T11_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        T16_0 = T14_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
        T15_0 = &KPfalseVKi;
        T16_0 = T15_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:454
      T17_0 = T16_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:451
    T19_0 = T17_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
    T18_0 = &KPfalseVKi;
    T19_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:449
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:438
  MV_SET_COUNT(1);
  return(T19_0);
}

D KsubtypeQVKdMM1I (D t1_, D t2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:481
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:483
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:481
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM2I (D t1_, D t2_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:492
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:494
  T3 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:494
  T4 = primitive_instanceQ(T3,t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:494
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:492
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsubtypeQVKdMM3I (D t1_, D t2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:503
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:505
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:503
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM4I (D u_, D t_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:516
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
  T7 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  T3 = CONGRUENT_CALL2(T7, t_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T4_0 = CONGRUENT_CALL2(T8, t_);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:518
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:516
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM5I (D t_, D u_) {
  D Utmp_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:521
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
  T7 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  Utmp_ = CONGRUENT_CALL2(t_, T7);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
    T4_0 = Utmp_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T5_0 = CONGRUENT_CALL2(t_, T8);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:523
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:521
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM6I (D t1_, D t2_) {
  D T3_0;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:538
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:540
  T4 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:540
  T5_0 = KsubtypeQVKdMM10I(T4, t2_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:538
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:538
  MV_SET_COUNT(1);
  return(T3_0);
}

D KlimitedVKdMM3I (D class_, D Urest_, D of_, D size_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:197
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:199
  T5_0 = Klimited_stringVKiMM0I(of_, size_);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:197
  MV_SET_COUNT(1);
  return(T5_0);
}

D KlimitedVKdMM4I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:202
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:202
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:202
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:206
  T7_0 = Klimited_tableVKiMM0I(ofF5, sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:202
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM5I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:209
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:209
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:209
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:213
  T7_0 = Klimited_tableVKiMM0I(ofF5, sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:209
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM6I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:216
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:216
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:216
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:220
  CONGRUENT_CALL_PROLOG(&Klimited_vectorVKe, 2);
  T7_0 = CONGRUENT_CALL2(ofF5, sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:216
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM7I (D class_, D Urest_, D of_, D sizeF3, D sizeF4) {
  D ofF6;
  D sizeF7;
  D T8_0;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  primitive_type_check(of_, &KLtypeGVKd);
  ofF6 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  T9 = primitive_idQ(sizeF3,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  if (T9 != &KPfalseVKi) {
    sizeF7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
    primitive_type_check(sizeF3, &K405);
    T10 = sizeF3;
    sizeF7 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:227
  CONGRUENT_CALL_PROLOG(&Klimited_vectorVKe, 2);
  T8_0 = CONGRUENT_CALL2(ofF6, sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:223
  MV_SET_COUNT(1);
  return(T8_0);
}

D KlimitedVKdMM8I (D class_, D Urest_, D of_, D sz_, D dimensions_) {
  D ofF6;
  D szF7;
  D dimensionsF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_2 T29 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:230
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:230
  primitive_type_check(of_, &KLtypeGVKd);
  ofF6 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:230
  primitive_type_check(sz_, &K405);
  szF7 = sz_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:230
  primitive_type_check(dimensions_, &K434);
  dimensionsF8 = dimensions_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:237
  if (szF7 != &KPfalseVKi) {
    T22 = szF7;
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
    if (dimensionsF8 != &KPfalseVKi) {
      T23 = dimensionsF8;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T9 = CONGRUENT_CALL1(T23);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T25 = CONGRUENT_CALL2(T9, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
      T26 = primitive_not(T25);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T10 = CONGRUENT_CALL3(T23, (D) 1, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T27 = CONGRUENT_CALL2(T10, T22);
        // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
        T28 = primitive_not(T27);
        T11 = T28;
      } else {
        T11 = T26;
      }
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
      T12 = T11;
    } else {
      T12 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:239
      T29.vector_element_[0] = dimensionsF8;
      T29.vector_element_[1] = T22;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:239
      KerrorVKdMM1I(&K435, &T29);
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:238
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:242
    CONGRUENT_CALL_PROLOG(&Klimited_vectorVKe, 2);
    T13_0 = CONGRUENT_CALL2(ofF6, T22);
    T21_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:243
    if (dimensionsF8 != &KPfalseVKi) {
      T24 = dimensionsF8;
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:243
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T14 = CONGRUENT_CALL1(T24);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:243
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T15 = CONGRUENT_CALL2(T14, (D) 5);
      T16 = T15;
    } else {
      T16 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:243
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:237
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:244
      T17 = CALL1(&KfirstVKd, dimensionsF8);
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:244
      T18_0 = CALL2(&Klimited_vectorVKe, ofF6, T17);
      T20_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/type.dylan:246
      CONGRUENT_CALL_PROLOG(&Klimited_arrayVKe, 2);
      T19_0 = CONGRUENT_CALL2(ofF6, dimensionsF8);
      T20_0 = T19_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:237
    T21_0 = T20_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:237
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:230
  MV_SET_COUNT(1);
  return(T21_0);
}

D KlimitedVKdMM9I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:252
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:252
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:252
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:256
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLcollectionGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:256
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_collection_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:252
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM10I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:262
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:262
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:262
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:266
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLexplicit_key_collectionGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:266
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_explicit_key_collection_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:262
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM11I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:272
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:272
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:272
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:276
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLmutable_collectionGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:276
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_mutable_collection_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:272
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM12I (D class_, D Urest_, D of_) {
  D ofF4;
  D T5_0;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:282
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:282
  primitive_type_check(of_, &KLtypeGVKd);
  ofF4 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:285
  T6.vector_element_[0] = &KJclass_;
  T6.vector_element_[1] = &KLstretchy_collectionGVKd;
  T6.vector_element_[2] = &KJelement_type_;
  T6.vector_element_[3] = ofF4;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:285
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T5_0 = CONGRUENT_CALL2(&KLlimited_stretchy_collection_typeGVKe, &T6);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:282
  MV_SET_COUNT(1);
  return(T5_0);
}

D KlimitedVKdMM13I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:290
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:290
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:294
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLmutable_explicit_key_collectionGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:294
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_mutable_explicit_key_collection_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:290
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM14I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:300
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:300
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:300
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:304
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLsequenceGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:304
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_sequence_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:300
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlimitedVKdMM15I (D class_, D Urest_, D of_, D size_) {
  D ofF5;
  D sizeF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/type.dylan:310
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:310
  primitive_type_check(of_, &KLtypeGVKd);
  ofF5 = of_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:310
  primitive_type_check(size_, &K405);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:314
  T8.vector_element_[0] = &KJclass_;
  T8.vector_element_[1] = &KLmutable_sequenceGVKd;
  T8.vector_element_[2] = &KJelement_type_;
  T8.vector_element_[3] = ofF5;
  T8.vector_element_[4] = &KJsize_;
  T8.vector_element_[5] = sizeF6;
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:314
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLlimited_mutable_sequence_typeGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/type.dylan:310
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_type_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJof_);
    if (T0 != &KJof_) {
      primitive_repeated_slot_value_setter(T0, &K458, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K445, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K443, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K439, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K437, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K423, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K421, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K411, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K407, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_type_for_user () {
  return;
}


/* eof */
