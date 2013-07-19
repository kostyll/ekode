#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

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
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(14);

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);
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
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

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
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

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
  D singleton_object_;
} _KLsingletonGVKd;

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
} _KLfunctionGVKd;

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
} _KLlistGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
} _Kempty_Lsimple_object_listGVKi;

typedef struct {
  D wrapper;
} _Kempty_Lsimple_class_listGVKi;

typedef struct {
  D wrapper;
} _Kempty_Lsimple_method_listGVKi;

typedef struct {
  D wrapper;
} _KLlimited_listGVKe;

typedef struct {
  D wrapper;
  D Plimited_list_rest_;
  D limited_list_first_;
} _Knon_empty_Lsimple_method_listGVKi;

typedef struct {
  D wrapper;
} _KLsimple_method_listGVKi;

typedef struct {
  D wrapper;
  D Plimited_list_rest_;
  D limited_list_first_;
} _Knon_empty_Lsimple_class_listGVKi;

typedef struct {
  D wrapper;
} _KLsimple_class_listGVKi;

typedef struct {
  D wrapper;
  D Plimited_list_rest_;
} _KLnon_empty_limited_listGVKe;

typedef struct {
  D wrapper;
} _KLsimple_object_listGVKi;

typedef struct {
  D wrapper;
  D Plimited_list_rest_;
  D limited_list_first_;
} _Knon_empty_Lsimple_object_listGVKi;

typedef struct {
  D wrapper;
} _KLempty_limited_listGVKe;


/* Referenced object declarations */

extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
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
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_4;
extern _KLincremental_generic_functionGVKe KemptyVKe;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
D Kclass_instanceQ_rcpl_single_largeVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_6;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_0;
D Kelement_range_errorVKeI (D, D);
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_3;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
D Kobject_classVKdI (D);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_7;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_8;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_2;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;

/* Defined object declarations */

D Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd Kempty_Lsimple_object_listGVKi;
extern _KLmm_wrapperGVKi_0 Kempty_Lsimple_object_listGVKiW;
D Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd Kempty_Lsimple_class_listGVKi;
extern _KLmm_wrapperGVKi_0 Kempty_Lsimple_class_listGVKiW;
D Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd Kempty_Lsimple_method_listGVKi;
extern _KLmm_wrapperGVKi_0 Kempty_Lsimple_method_listGVKiW;
extern _KLsimple_methodGVKe KemptyQVKdMM11;
D KemptyQVKdMM11I (D list_);
extern _KLsimple_methodGVKe KemptyQVKdMM12;
D KemptyQVKdMM12I (D list_);
extern _KLsimple_methodGVKe KemptyQVKdMM13;
D KemptyQVKdMM13I (D list_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe KsizeVKdMM31;
D KsizeVKdMM31I (D);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM16;
D Ktype_for_copyVKdMM16I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM17;
D Ktype_for_copyVKdMM17I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM18;
D Ktype_for_copyVKdMM18I (D);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_4;
extern _KLkeyword_methodGVKe KelementVKdMM26;
D KelementVKdMM26I (D, D, D, D);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_8;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM24;
D Kelement_no_bounds_checkVKeMM24I (D, D, D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM25;
D Kforward_iteration_protocolVKdMM25I (D list_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM24;
D Kforward_iteration_protocolVKdMM24I (D list_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM23;
D Kforward_iteration_protocolVKdMM23I (D list_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM22;
D Kforward_iteration_protocolVKdMM22I (D list_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM26;
D Kelement_setterVKdMM26I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM26;
D Kelement_no_bounds_check_setterVKeMM26I (D, D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_1;
extern _KLkeyword_methodGVKe KfirstVKdMM1;
D KfirstVKdMM1I (D list_, D Urest_, D default_);
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_2;
extern _KLsimple_methodGVKe KemptyVKeMM12;
D KemptyVKeMM12I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM11;
D KemptyVKeMM11I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM10;
D KemptyVKeMM10I (D class_);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_2;
extern _KLkeyword_methodGVKe KmakeVKdMM37;
D KmakeVKdMM37I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM38;
D KmakeVKdMM38I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM39;
D KmakeVKdMM39I (D, D, D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe KasVKdMM64;
D KasVKdMM64I (D, D);
extern _KLsimple_methodGVKe KasVKdMM65;
D KasVKdMM65I (D, D);
extern _KLsimple_methodGVKe KasVKdMM66;
D KasVKdMM66I (D, D);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_5;
extern _KLincremental_generic_functionGVKe KprependVKe;
extern _KLclassGVKd KLlimited_listGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_listGVKeW;
static _KLimplementation_classGVKe K93;
static _KLsimple_object_vectorGVKd_1 K94;
static _KLsimple_object_vectorGVKd_8 K95;
static _KLbyte_stringGVKd_14 K96;
extern _KLsimple_methodGVKe KprependVKeMM0;
D KprependVKeMM0I (D object_, D list_);
extern _KLsimple_methodGVKe KprependVKeMM1;
D KprependVKeMM1I (D object_, D list_);
extern _KLsimple_methodGVKe KprependVKeMM2;
D KprependVKeMM2I (D object_, D list_);
static _KLsignatureAvaluesGVKi K103;
static _KLbyte_stringGVKd_7 K104;
static _KLsimple_object_vectorGVKd_2 K105;
static _KLsimple_object_vectorGVKd_1 K106;
static _KLsymbolGVKd KJfirst_;
static _KLsymbolGVKd KJrest_;
D Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd Knon_empty_Lsimple_method_listGVKi;
extern _KLmm_wrapperGVKi_0 Knon_empty_Lsimple_method_listGVKiW;
static _KLimplementation_classGVKe K112;
static _KLsimple_object_vectorGVKd_2 K113;
extern _KLkeyword_methodGVKe Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_2 K115;
static _KLsimple_object_vectorGVKd_11 K116;
static _KLsimple_object_vectorGVKd_1 K117;
extern _KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_method_listG;
extern _KLincremental_generic_functionGVKe Klimited_list_firstVKe;
extern _KLincremental_generic_functionGVKe Klimited_list_first_setterVKe;
extern _KLsetter_methodGVKi Klimited_list_first_setterVKeMM0;
extern _KLsetter_methodGVKi Klimited_list_first_setterVKeMM1;
extern _KLsetter_methodGVKi Klimited_list_first_setterVKeMM2;
extern _KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_0;
static _KLsignatureGVKe K126;
static _KLbyte_stringGVKd_25 K127;
extern _KLclassGVKd KLsimple_method_listGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_method_listGVKiW;
static _KLimplementation_classGVKe K130;
extern _KLkeyword_methodGVKe KLsimple_method_listGZ32ZconstructorVKiMM0;
D KLsimple_method_listGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_9 K133;
static _KLkeyword_signatureAvaluesGVKi K134;
static _KLsimple_object_vectorGVKd_1 K135;
static _KLbyte_stringGVKd_20 K136;
extern _KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_class_listG;
extern _KLclassGVKd Knon_empty_Lsimple_class_listGVKi;
extern _KLmm_wrapperGVKi_0 Knon_empty_Lsimple_class_listGVKiW;
static _KLimplementation_classGVKe K140;
static _KLsimple_object_vectorGVKd_2 K141;
extern _KLkeyword_methodGVKe Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0;
D Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsimple_object_vectorGVKd_11 K145;
static _KLsimple_object_vectorGVKd_1 K146;
extern _KLclassGVKd KLsimple_class_listGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_class_listGVKiW;
extern _KLclassGVKd KLnon_empty_limited_listGVKe;
extern _KLmm_wrapperGVKi_0 KLnon_empty_limited_listGVKeW;
static _KLimplementation_classGVKe K151;
static _KLsimple_object_vectorGVKd_1 K152;
extern _KLkeyword_methodGVKe KLnon_empty_limited_listGZ32ZconstructorVKiMM0;
D KLnon_empty_limited_listGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_9 K155;
static _KLsimple_object_vectorGVKd_1 K156;
static _KLsimple_object_vectorGVKd_3 K157;
extern _KLclassGVKd KLsimple_object_listGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_object_listGVKiW;
static _KLimplementation_classGVKe K160;
extern _KLkeyword_methodGVKe KLsimple_object_listGZ32ZconstructorVKiMM0;
D KLsimple_object_listGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_9 K163;
static _KLkeyword_signatureAvaluesGVKi K164;
static _KLsimple_object_vectorGVKd_1 K165;
static _KLbyte_stringGVKd_20 K166;
static _KLbyte_stringGVKd_23 K167;
static _KLkeyword_signatureAvaluesGVKi K168;
static _KLsimple_object_vectorGVKd_2 K169;
static _KLsimple_object_vectorGVKd_1 K170;
static _KLsimple_object_vectorGVKd_1 K171;
extern _KLinstance_slot_descriptorGVKe KPlimited_list_restVKiHLnon_empty_limited_listG;
extern _KLsealed_generic_functionGVKe KPlimited_list_restVKi;
extern _KLsealed_generic_functionGVKe KPlimited_list_rest_setterVKi;
extern _KLsetter_methodGVKi KPlimited_list_rest_setterVKiMM0;
static _KLpairGVKd K176;
static _KLbyte_stringGVKd_25 K177;
extern _KLgetter_methodGVKi KPlimited_list_restVKiMM0;
static _KLpairGVKd K179;
static _KLbyte_stringGVKd_18 K180;
static _KLbyte_stringGVKd_24 K181;
static _KLimplementation_classGVKe K182;
extern _KLkeyword_methodGVKe KLsimple_class_listGZ32ZconstructorVKiMM0;
D KLsimple_class_listGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_9 K185;
static _KLkeyword_signatureAvaluesGVKi K186;
static _KLsimple_object_vectorGVKd_1 K187;
static _KLbyte_stringGVKd_19 K188;
static _KLkeyword_signatureAvaluesGVKi K189;
static _KLsimple_object_vectorGVKd_4 K190;
static _KLsimple_object_vectorGVKd_2 K191;
static _KLsimple_object_vectorGVKd_1 K192;
static _KLbyte_stringGVKd_29 K193;
extern _KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_object_listG;
extern _KLclassGVKd Knon_empty_Lsimple_object_listGVKi;
extern _KLmm_wrapperGVKi_0 Knon_empty_Lsimple_object_listGVKiW;
static _KLimplementation_classGVKe K197;
static _KLsimple_object_vectorGVKd_2 K198;
extern _KLkeyword_methodGVKe Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0;
D Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K201;
static _KLsimple_object_vectorGVKd_11 K202;
static _KLsimple_object_vectorGVKd_1 K203;
static _KLkeyword_signatureAvaluesGVKi K204;
static _KLsimple_object_vectorGVKd_1 K205;
static _KLbyte_stringGVKd_30 K206;
extern _KLgetter_methodGVKi Klimited_list_firstVKeMM0;
extern _KLgetter_methodGVKi Klimited_list_firstVKeMM1;
extern _KLgetter_methodGVKi Klimited_list_firstVKeMM2;
extern _KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_2;
static _KLpairGVKd K213;
static _KLpairGVKd K214;
static _KLpairGVKd K215;
static _KLsignatureGVKe K216;
static _KLbyte_stringGVKd_18 K217;
static _KLkeyword_signatureAvaluesGVKi K218;
static _KLsimple_object_vectorGVKd_1 K219;
static _KLbyte_stringGVKd_30 K220;
static _KLbyte_stringGVKd_4 K221;
static _KLbyte_stringGVKd_5 K222;
static _KLsignatureAvaluesGVKi K223;
static _KLsimple_object_vectorGVKd_2 K224;
static _KLsignatureAvaluesGVKi K225;
static _KLsimple_object_vectorGVKd_2 K226;
static _KLsignatureAvaluesGVKi K227;
static _KLsimple_object_vectorGVKd_2 K228;
static _KLsignatureAvaluesGVKi K229;
static _KLsimple_object_vectorGVKd_2 K230;
static _KLsubclassGVKe K231;
static _KLsignatureAvaluesGVKi K232;
static _KLsimple_object_vectorGVKd_2 K233;
static _KLsubclassGVKe K234;
static _KLsignatureAvaluesGVKi K235;
static _KLsimple_object_vectorGVKd_2 K236;
static _KLsubclassGVKe K237;
static _KLsubclassGVKe K238;
static _KLsubclassGVKe K239;
static _KLkeyword_signatureAvaluesGVKi K240;
static _KLsimple_object_vectorGVKd_4 K241;
static _KLsimple_object_vectorGVKd_1 K242;
static _KLsimple_object_vectorGVKd_2 K243;
static _KLsimple_object_vectorGVKd_2 K244;
static _KLsingletonGVKd K245;
static _KLkeyword_signatureAvaluesGVKi K246;
static _KLsimple_object_vectorGVKd_1 K247;
static _KLsimple_object_vectorGVKd_2 K248;
static _KLsingletonGVKd K249;
static _KLkeyword_signatureAvaluesGVKi K250;
static _KLsimple_object_vectorGVKd_1 K251;
static _KLsimple_object_vectorGVKd_2 K252;
static _KLsingletonGVKd K253;
static _KLsubclassGVKe K254;
static _KLsignatureAvaluesGVKi K255;
static _KLsimple_object_vectorGVKd_1 K256;
static _KLsimple_object_vectorGVKd_1 K257;
static _KLsubclassGVKe K258;
static _KLsignatureAvaluesGVKi K259;
static _KLsimple_object_vectorGVKd_1 K260;
static _KLsimple_object_vectorGVKd_1 K261;
static _KLsubclassGVKe K262;
static _KLsignatureAvaluesGVKi K263;
static _KLsimple_object_vectorGVKd_1 K264;
static _KLsimple_object_vectorGVKd_1 K265;
static _KLsubclassGVKe K266;
static _KLkeyword_signatureGVKe K267;
static _KLsimple_object_vectorGVKd_2 K268;
static _KLsimple_object_vectorGVKd_1 K269;
static _KLsignatureGVKe K270;
static _KLsimple_object_vectorGVKd_3 K271;
extern _KLsimple_methodGVKe Klimited_list_next_stateVKi;
D Klimited_list_next_stateVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klimited_list_finished_stateQVKi;
D Klimited_list_finished_stateQVKiI (D collection_, D state_, D limit_);
extern _KLsimple_methodGVKe Klimited_list_current_keyVKi;
D Klimited_list_current_keyVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klimited_list_current_elementVKi;
D Klimited_list_current_elementVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klimited_list_current_element_setterVKi;
D Klimited_list_current_element_setterVKiI (D new_value_, D collection_, D state_);
extern _KLsimple_methodGVKe Klimited_list_copy_stateVKi;
D Klimited_list_copy_stateVKiI (D collection_, D state_);
static _KLsignatureAvaluesGVKi K284;
static _KLsimple_object_vectorGVKd_2 K285;
static _KLsignatureGVKe K286;
static _KLsimple_object_vectorGVKd_3 K287;
static _KLsignatureGVKe K288;
extern _KLincremental_generic_functionGVKe Klimited_list_restVKe;
extern _KLsimple_methodGVKe Klimited_list_restVKeMM0;
D Klimited_list_restVKeMM0I (D l_);
extern _KLsimple_methodGVKe Klimited_list_restVKeMM1;
D Klimited_list_restVKeMM1I (D l_);
extern _KLsimple_methodGVKe Klimited_list_restVKeMM2;
D Klimited_list_restVKeMM2I (D l_);
extern _KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_2;
static _KLpairGVKd K299;
static _KLpairGVKd K300;
static _KLpairGVKd K301;
static _KLsignatureAvaluesGVKi K302;
static _KLbyte_stringGVKd_17 K303;
static _KLsignatureAvaluesGVKi K304;
static _KLsignatureAvaluesGVKi K305;
static _KLsignatureAvaluesGVKi K306;
static _KLsignatureAvaluesGVKi K307;
static _KLsignatureAvaluesGVKi K308;
static _KLsimple_object_vectorGVKd_3 K309;
static _KLsignatureAvaluesGVKi K310;
static _KLsimple_object_vectorGVKd_8 K311;
extern _KLsimple_methodGVKe KLsimple_object_listG_next_stateVKi;
D KLsimple_object_listG_next_stateVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_object_listG_current_elementVKi;
D KLsimple_object_listG_current_elementVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_object_listG_current_element_setterVKi;
D KLsimple_object_listG_current_element_setterVKiI (D e_, D collection_, D state_);
static _KLsignatureGVKe K318;
static _KLsimple_object_vectorGVKd_3 K319;
static _KLsignatureGVKe K320;
static _KLsimple_object_vectorGVKd_2 K321;
static _KLsignatureAvaluesGVKi K322;
static _KLsignatureAvaluesGVKi K323;
static _KLsimple_object_vectorGVKd_8 K324;
extern _KLsimple_methodGVKe KLsimple_class_listG_next_stateVKi;
D KLsimple_class_listG_next_stateVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_class_listG_current_elementVKi;
D KLsimple_class_listG_current_elementVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_class_listG_current_element_setterVKi;
D KLsimple_class_listG_current_element_setterVKiI (D e_, D collection_, D state_);
static _KLsignatureAvaluesGVKi K331;
static _KLsimple_object_vectorGVKd_3 K332;
static _KLsignatureAvaluesGVKi K333;
static _KLsimple_object_vectorGVKd_2 K334;
static _KLsignatureAvaluesGVKi K335;
static _KLsignatureAvaluesGVKi K336;
static _KLsimple_object_vectorGVKd_8 K337;
extern _KLsimple_methodGVKe KLsimple_method_listG_next_stateVKi;
D KLsimple_method_listG_next_stateVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_method_listG_current_elementVKi;
D KLsimple_method_listG_current_elementVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe KLsimple_method_listG_current_element_setterVKi;
D KLsimple_method_listG_current_element_setterVKiI (D e_, D collection_, D state_);
static _KLsignatureAvaluesGVKi K344;
static _KLsimple_object_vectorGVKd_3 K345;
static _KLsignatureAvaluesGVKi K346;
static _KLsimple_object_vectorGVKd_2 K347;
static _KLsignatureAvaluesGVKi K348;
static _KLsignatureAvaluesGVKi K349;
static _KLsimple_object_vectorGVKd_8 K350;
static _KLkeyword_signatureGVKe K351;
static _KLsimple_object_vectorGVKd_2 K352;
static _KLsimple_object_vectorGVKd_2 K353;
static _KLsignatureAvaluesGVKi K354;
static _KLsignatureAvaluesGVKi K355;
static _KLsignatureAvaluesGVKi K356;
static _KLsignatureAvaluesGVKi K357;
static _KLsimple_object_vectorGVKd_1 K358;
static _KLunionGVKe K359;
static _KLsingletonGVKd K360;
static _KLsignatureAvaluesGVKi K361;
static _KLsignatureAvaluesGVKi K362;
static _KLsignatureAvaluesGVKi K363;
static _KLimplementation_classGVKe K364;
extern _KLkeyword_methodGVKe Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_2 K366;
static _KLsimple_object_vectorGVKd_11 K367;
extern _KLclassGVKd KLempty_limited_listGVKe;
extern _KLmm_wrapperGVKi_0 KLempty_limited_listGVKeW;
static _KLimplementation_classGVKe K370;
extern _KLkeyword_methodGVKe KLempty_limited_listGZ32ZconstructorVKiMM0;
D KLempty_limited_listGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_9 K373;
static _KLkeyword_signatureAvaluesGVKi K374;
static _KLsimple_object_vectorGVKd_1 K375;
static _KLbyte_stringGVKd_20 K376;
static _KLkeyword_signatureAvaluesGVKi K377;
static _KLbyte_stringGVKd_26 K378;
static _KLimplementation_classGVKe K379;
extern _KLkeyword_methodGVKe Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_2 K381;
static _KLsimple_object_vectorGVKd_11 K382;
static _KLkeyword_signatureAvaluesGVKi K383;
static _KLbyte_stringGVKd_25 K384;
static _KLimplementation_classGVKe K385;
extern _KLkeyword_methodGVKe Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_2 K387;
static _KLsimple_object_vectorGVKd_11 K388;
static _KLkeyword_signatureAvaluesGVKi K389;
static _KLbyte_stringGVKd_26 K390;
extern _KLincremental_generic_functionGVKe Klimited_list_rest_setterVKe;
extern _KLsimple_methodGVKe Klimited_list_rest_setterVKeMM0;
D Klimited_list_rest_setterVKeMM0I (D rest_, D l_);
extern _KLsimple_methodGVKe Klimited_list_rest_setterVKeMM1;
D Klimited_list_rest_setterVKeMM1I (D rest_, D l_);
extern _KLsimple_methodGVKe Klimited_list_rest_setterVKeMM2;
D Klimited_list_rest_setterVKeMM2I (D rest_, D l_);
extern _KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_5;
static _KLpairGVKd K404;
static _KLpairGVKd K405;
static _KLpairGVKd K406;
static _KLbyte_stringGVKd_24 K407;
static _KLsignatureAvaluesGVKi K408;
static _KLsimple_object_vectorGVKd_2 K409;
static _KLsignatureAvaluesGVKi K410;
static _KLsimple_object_vectorGVKd_2 K411;
static _KLsignatureAvaluesGVKi K412;
static _KLsimple_object_vectorGVKd_2 K413;
extern _KLincremental_generic_functionGVKe Klimited_listVKe;
extern _KLsimple_methodGVKe Klimited_listVKeMM0;
D Klimited_listVKeMM0I (D type_);
extern _KLsimple_methodGVKe Klimited_listVKeMM1;
D Klimited_listVKeMM1I (D type_);
extern _KLsimple_methodGVKe Klimited_listVKeMM2;
D Klimited_listVKeMM2I (D type_);
extern _KLsimple_methodGVKe Klimited_listVKeMM3;
D Klimited_listVKeMM3I (D type_);
extern _KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_2;
static _KLpairGVKd K426;
static _KLpairGVKd K427;
static _KLpairGVKd K428;
static _KLpairGVKd K429;
static _KLsignatureAvaluesGVKi K430;
static _KLbyte_stringGVKd_12 K431;
static _KLsimple_object_vectorGVKd_1 K432;
static _KLsubclassGVKe K433;
static _KLsignatureAvaluesGVKi K434;
static _KLsimple_object_vectorGVKd_1 K435;
static _KLsubclassGVKe K436;
static _KLsignatureAvaluesGVKi K437;
static _KLsimple_object_vectorGVKd_1 K438;
static _KLsingletonGVKd K439;
static _KLsignatureAvaluesGVKi K440;
static _KLsimple_object_vectorGVKd_1 K441;
static _KLsingletonGVKd K442;
static _KLsignatureAvaluesGVKi K443;
static _KLsimple_object_vectorGVKd_1 K444;
static _KLsingletonGVKd K445;
extern _KLsealed_generic_functionGVKe KrestVKe;
extern _KLsimple_methodGVKe KrestVKeMM0;
D KrestVKeMM0I (D list_);
extern _KLsimple_methodGVKe KrestVKeMM1;
D KrestVKeMM1I (D sequence_);
static _KLpairGVKd K451;
static _KLpairGVKd K452;
static _KLsignatureAvaluesGVKi K453;
static _KLbyte_stringGVKd_45 K454;
extern _KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_5;
static _KLpairGVKd K459;
static _KLpairGVKd K460;
static _KLpairGVKd K461;
extern _KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe KprependVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe KprependVKeRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe KprependVKeRD_dylanRD_5;
static _KLpairGVKd K468;
static _KLpairGVKd K469;
static _KLpairGVKd K470;
static _KLpairGVKd K471;
static _KLpairGVKd K472;
static _KLpairGVKd K473;
static _KLpairGVKd K474;
static _KLpairGVKd K475;
static _KLpairGVKd K476;
static _KLpairGVKd K477;
static _KLpairGVKd K478;
static _KLpairGVKd K479;
static _KLpairGVKd K480;
static _KLpairGVKd K481;
static _KLpairGVKd K482;
static _KLpairGVKd K483;
static _KLpairGVKd K484;
static _KLpairGVKd K485;
static _KLpairGVKd K486;
static _KLpairGVKd K487;

/* Indirection variables */

static D IKJfirst_ = &KJfirst_;
static D IKJrest_ = &KJrest_;

/* Variables */

D restVKe = &KrestVKe;
D Plimited_list_restVKi = &KPlimited_list_restVKi;
D Llimited_listGVKe = &KLlimited_listGVKe;
D limited_listVKe = &Klimited_listVKe;
D limited_list_firstVKe = &Klimited_list_firstVKe;
D limited_list_first_setterVKe = &Klimited_list_first_setterVKe;
D limited_list_restVKe = &Klimited_list_restVKe;
D limited_list_rest_setterVKe = &Klimited_list_rest_setterVKe;
D prependVKe = &KprependVKe;
D Lnon_empty_limited_listGVKe = &KLnon_empty_limited_listGVKe;
D Lempty_limited_listGVKe = &KLempty_limited_listGVKe;
D limited_list_finished_stateQVKi = &Klimited_list_finished_stateQVKi;
D limited_list_copy_stateVKi = &Klimited_list_copy_stateVKi;
D limited_list_current_keyVKi = &Klimited_list_current_keyVKi;
D Lsimple_object_listGVKi = &KLsimple_object_listGVKi;
D non_empty_Lsimple_object_listGVKi = &Knon_empty_Lsimple_object_listGVKi;
D empty_Lsimple_object_listGVKi = &Kempty_Lsimple_object_listGVKi;
D Dempty_Lsimple_object_listGVKi = &KPunboundVKi;
D Lsimple_class_listGVKi = &KLsimple_class_listGVKi;
D non_empty_Lsimple_class_listGVKi = &Knon_empty_Lsimple_class_listGVKi;
D empty_Lsimple_class_listGVKi = &Kempty_Lsimple_class_listGVKi;
D Dempty_Lsimple_class_listGVKi = &KPunboundVKi;
D Lsimple_method_listGVKi = &KLsimple_method_listGVKi;
D non_empty_Lsimple_method_listGVKi = &Knon_empty_Lsimple_method_listGVKi;
D empty_Lsimple_method_listGVKi = &Kempty_Lsimple_method_listGVKi;
D Dempty_Lsimple_method_listGVKi = &KPunboundVKi;
D limited_list_next_stateVKi = &Klimited_list_next_stateVKi;
D limited_list_current_elementVKi = &Klimited_list_current_elementVKi;
D limited_list_current_element_setterVKi = &Klimited_list_current_element_setterVKi;
D Lsimple_object_listG_next_stateVKi = &KLsimple_object_listG_next_stateVKi;
D Lsimple_object_listG_current_elementVKi = &KLsimple_object_listG_current_elementVKi;
D Lsimple_object_listG_current_element_setterVKi = &KLsimple_object_listG_current_element_setterVKi;
D Lsimple_class_listG_next_stateVKi = &KLsimple_class_listG_next_stateVKi;
D Lsimple_class_listG_current_elementVKi = &KLsimple_class_listG_current_elementVKi;
D Lsimple_class_listG_current_element_setterVKi = &KLsimple_class_listG_current_element_setterVKi;
D Lsimple_method_listG_next_stateVKi = &KLsimple_method_listG_next_stateVKi;
D Lsimple_method_listG_current_elementVKi = &KLsimple_method_listG_current_elementVKi;
D Lsimple_method_listG_current_element_setterVKi = &KLsimple_method_listG_current_element_setterVKi;

/* Objects */

_KLclassGVKd Kempty_Lsimple_object_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K390,
  &K385,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Kempty_Lsimple_object_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K385,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd Kempty_Lsimple_class_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K384,
  &K379,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Kempty_Lsimple_class_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K379,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd Kempty_Lsimple_method_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K378,
  &K364,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Kempty_Lsimple_method_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K364,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KemptyQVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K363,
  &KemptyQVKdMM11I
};

_KLsimple_methodGVKe KemptyQVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K362,
  &KemptyQVKdMM12I
};

_KLsimple_methodGVKe KemptyQVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K361,
  &KemptyQVKdMM13I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_2,
  &KemptyQVKdMM13
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_3,
  &KemptyQVKdMM12
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_4,
  &KemptyQVKdMM11
};

_KLsimple_methodGVKe KsizeVKdMM31 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K357,
  &KsizeVKdMM31I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_8,
  &KsizeVKdMM31
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K356,
  &Ktype_for_copyVKdMM16I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K355,
  &Ktype_for_copyVKdMM17I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K354,
  &Ktype_for_copyVKdMM18I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_1,
  &Ktype_for_copyVKdMM18
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_2,
  &Ktype_for_copyVKdMM17
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_3,
  &Ktype_for_copyVKdMM16
};

_KLkeyword_methodGVKe KelementVKdMM26 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K351,
  &key_mep_4,
  &KelementVKdMM26I,
  &K353
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_7,
  &KelementVKdMM26
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM24 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K351,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM24I,
  &K268
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_0,
  &Kelement_no_bounds_checkVKeMM24
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_2,
  &Kforward_iteration_protocolVKdMM25
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_3,
  &Kforward_iteration_protocolVKdMM24
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_4,
  &Kforward_iteration_protocolVKdMM23
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K349,
  &Kforward_iteration_protocolVKdMM25I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM24 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K336,
  &Kforward_iteration_protocolVKdMM24I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K323,
  &Kforward_iteration_protocolVKdMM23I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kforward_iteration_protocolVKdMM22I
};

_KLsimple_methodGVKe Kelement_setterVKdMM26 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K270,
  &Kelement_setterVKdMM26I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_3,
  &Kelement_setterVKdMM26
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM26 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K270,
  &Kelement_no_bounds_check_setterVKeMM26I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_0,
  &Kelement_no_bounds_check_setterVKeMM26
};

_KLkeyword_methodGVKe KfirstVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K267,
  &key_mep_3,
  &KfirstVKdMM1I,
  &K268
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KemptyVKeMM12
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_0,
  &KemptyVKeMM11
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_1,
  &KemptyVKeMM10
};

_KLsimple_methodGVKe KemptyVKeMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K263,
  &KemptyVKeMM12I
};

_KLsimple_methodGVKe KemptyVKeMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K259,
  &KemptyVKeMM11I
};

_KLsimple_methodGVKe KemptyVKeMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K255,
  &KemptyVKeMM10I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_object_listGVKi
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_11,
  (D) 5,
  &K254
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_5,
  &KasVKdMM65
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_method_listGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_class_listGVKi
};

_KLkeyword_methodGVKe KmakeVKdMM37 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K250,
  &key_mep_4,
  &KmakeVKdMM37I,
  &K241
};

_KLkeyword_methodGVKe KmakeVKdMM38 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K246,
  &key_mep_4,
  &KmakeVKdMM38I,
  &K241
};

_KLkeyword_methodGVKe KmakeVKdMM39 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K240,
  &key_mep_4,
  &KmakeVKdMM39I,
  &K241
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_6,
  &KmakeVKdMM39
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_7,
  (D) 5,
  &K239
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_8,
  &KmakeVKdMM38
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_9,
  (D) 5,
  &K238
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_10,
  &KmakeVKdMM37
};

_KLsimple_methodGVKe KasVKdMM64 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K235,
  &KasVKdMM64I
};

_KLsimple_methodGVKe KasVKdMM65 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K232,
  &KasVKdMM65I
};

_KLsimple_methodGVKe KasVKdMM66 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K229,
  &KasVKdMM66I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_4,
  &KasVKdMM66
};

_KLincremental_generic_functionGVKe KprependVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K103,
  (D) 1,
  &K104,
  &K468,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KprependVKeRD_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLlimited_listGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K96,
  &K93,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlimited_listGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K93,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K93 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLlimited_listGVKe,
  &KLlimited_listGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6769,
  &Kdefault_class_constructorVKi,
  &K94,
  &K95,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K471,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_8 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe
};

static _KLbyte_stringGVKd_14 K96 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<limited-list>"
};

_KLsimple_methodGVKe KprependVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K227,
  &KprependVKeMM0I
};

_KLsimple_methodGVKe KprependVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K225,
  &KprependVKeMM1I
};

_KLsimple_methodGVKe KprependVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K223,
  &KprependVKeMM2I
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K105,
  &K106
};

static _KLbyte_stringGVKd_7 K104 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "prepend"
};

static _KLsimple_object_vectorGVKd_2 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlimited_listGVKe
};

static _KLsimple_object_vectorGVKd_1 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_listGVKe
};

static _KLsymbolGVKd KJfirst_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K222
};

static _KLsymbolGVKd KJrest_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K221
};

_KLclassGVKd Knon_empty_Lsimple_method_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K220,
  &K112,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Knon_empty_Lsimple_method_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K112,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K112 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &Knon_empty_Lsimple_method_listGVKi,
  &Knon_empty_Lsimple_method_listGVKiW,
  &KPfalseVKi,
  &K113,
  (D) 6849,
  &Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0,
  &K115,
  &K116,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K117,
  &K113,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPlimited_list_restVKiHLnon_empty_limited_listG,
  &Klimited_list_firstVKeHnon_empty_Lsimple_method_listG
};

_KLkeyword_methodGVKe Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K218,
  &key_mep_2,
  &Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0I,
  &K190
};

static _KLsimple_object_vectorGVKd_2 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnon_empty_limited_listGVKe,
  &KLsimple_method_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_method_listGVKi,
  &KLnon_empty_limited_listGVKe,
  &Knon_empty_Lsimple_method_listGVKi
};

static _KLsimple_object_vectorGVKd_1 K117 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Klimited_list_firstVKeHnon_empty_Lsimple_method_listG
};

_KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_method_listG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &Knon_empty_Lsimple_method_listGVKi,
  &KJfirst_,
  &Klimited_list_firstVKe,
  &Klimited_list_first_setterVKe,
  &KLmethodGVKd
};

_KLincremental_generic_functionGVKe Klimited_list_firstVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K216,
  (D) 1,
  &K217,
  &K213,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Klimited_list_firstVKeRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Klimited_list_first_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K126,
  (D) 1,
  &K127,
  &K459,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsetter_methodGVKi Klimited_list_first_setterVKeMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_object_listG
};

_KLsetter_methodGVKi Klimited_list_first_setterVKeMM1 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_class_listG
};

_KLsetter_methodGVKi Klimited_list_first_setterVKeMM2 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_method_listG
};

_KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_0,
  &Klimited_list_first_setterVKeMM2
};

_KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_method_listGVKi
};

static _KLsignatureGVKe K126 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K105
};

static _KLbyte_stringGVKd_25 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "limited-list-first-setter"
};

_KLclassGVKd KLsimple_method_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K136,
  &K130,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_method_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K130,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K130 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLsimple_method_listGVKi,
  &KLsimple_method_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6841,
  &KLsimple_method_listGZ32ZconstructorVKiMM0,
  &K106,
  &K133,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K486,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_method_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K134,
  &key_mep_2,
  &KLsimple_method_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_method_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K134 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K135
};

static _KLsimple_object_vectorGVKd_1 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_method_listGVKi
};

static _KLbyte_stringGVKd_20 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<simple-method-list>"
};

_KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_class_listG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &Knon_empty_Lsimple_class_listGVKi,
  &KJfirst_,
  &Klimited_list_firstVKe,
  &Klimited_list_first_setterVKe,
  &KLclassGVKd
};

_KLclassGVKd Knon_empty_Lsimple_class_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K193,
  &K140,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Knon_empty_Lsimple_class_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K140,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K140 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &Knon_empty_Lsimple_class_listGVKi,
  &Knon_empty_Lsimple_class_listGVKiW,
  &KPfalseVKi,
  &K141,
  (D) 6825,
  &Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0,
  &K144,
  &K145,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K146,
  &K141,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K141 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPlimited_list_restVKiHLnon_empty_limited_listG,
  &Klimited_list_firstVKeHnon_empty_Lsimple_class_listG
};

_KLkeyword_methodGVKe Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K189,
  &key_mep_2,
  &Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0I,
  &K190
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnon_empty_limited_listGVKe,
  &KLsimple_class_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_class_listGVKi,
  &KLnon_empty_limited_listGVKe,
  &Knon_empty_Lsimple_class_listGVKi
};

static _KLsimple_object_vectorGVKd_1 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Klimited_list_firstVKeHnon_empty_Lsimple_class_listG
};

_KLclassGVKd KLsimple_class_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K188,
  &K182,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_class_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K182,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLnon_empty_limited_listGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K181,
  &K151,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLnon_empty_limited_listGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K151,
  (D) 4609,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K151 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 392691717,
  &KLnon_empty_limited_listGVKe,
  &KLnon_empty_limited_listGVKeW,
  &KPfalseVKi,
  &K152,
  (D) 6777,
  &KLnon_empty_limited_listGZ32ZconstructorVKiMM0,
  &K106,
  &K155,
  (D) 33,
  &K156,
  &K157,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K476,
  &KPempty_vectorVKi,
  &K152,
  &K152,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KPlimited_list_restVKiHLnon_empty_limited_listG
};

_KLkeyword_methodGVKe KLnon_empty_limited_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K168,
  &key_mep_2,
  &KLnon_empty_limited_listGZ32ZconstructorVKiMM0I,
  &K169
};

static _KLsimple_object_vectorGVKd_9 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLnon_empty_limited_listGVKe
};

static _KLsimple_object_vectorGVKd_1 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 37
};

static _KLsimple_object_vectorGVKd_3 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_method_listGVKi,
  &KLsimple_class_listGVKi,
  &KLsimple_object_listGVKi
};

_KLclassGVKd KLsimple_object_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K166,
  &K160,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_object_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K160,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K160 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLsimple_object_listGVKi,
  &KLsimple_object_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6793,
  &KLsimple_object_listGZ32ZconstructorVKiMM0,
  &K106,
  &K163,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K482,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_object_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K164,
  &key_mep_2,
  &KLsimple_object_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_object_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K164 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K165
};

static _KLsimple_object_vectorGVKd_1 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_object_listGVKi
};

static _KLbyte_stringGVKd_20 K166 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<simple-object-list>"
};

static _KLbyte_stringGVKd_23 K167 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K168 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K170,
  &KDsignature_LobjectG_typesVKi,
  &K171
};

static _KLsimple_object_vectorGVKd_2 K169 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJrest_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K170 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJrest_
};

static _KLsimple_object_vectorGVKd_1 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnon_empty_limited_listGVKe
};

_KLinstance_slot_descriptorGVKe KPlimited_list_restVKiHLnon_empty_limited_listG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLnon_empty_limited_listGVKe,
  &KJrest_,
  &KPlimited_list_restVKi,
  &KPlimited_list_rest_setterVKi,
  &KLlimited_listGVKe
};

_KLsealed_generic_functionGVKe KPlimited_list_restVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K180,
  &K179,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPlimited_list_rest_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K177,
  &K176,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPlimited_list_rest_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPlimited_list_restVKiHLnon_empty_limited_listG
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KPlimited_list_rest_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K177 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "%limited-list-rest-setter"
};

_KLgetter_methodGVKi KPlimited_list_restVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPlimited_list_restVKiHLnon_empty_limited_listG
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &KPlimited_list_restVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K180 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "%limited-list-rest"
};

static _KLbyte_stringGVKd_24 K181 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<non-empty-limited-list>"
};

static _KLimplementation_classGVKe K182 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLsimple_class_listGVKi,
  &KLsimple_class_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6817,
  &KLsimple_class_listGZ32ZconstructorVKiMM0,
  &K106,
  &K185,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K484,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_class_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K186,
  &key_mep_2,
  &KLsimple_class_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K185 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_class_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K186 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K187
};

static _KLsimple_object_vectorGVKd_1 K187 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_class_listGVKi
};

static _KLbyte_stringGVKd_19 K188 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<simple-class-list>"
};

static _KLkeyword_signatureAvaluesGVKi K189 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K191,
  &KDsignature_LobjectG_typesVKi,
  &K192
};

static _KLsimple_object_vectorGVKd_4 K190 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJrest_,
  &KPunboundVKi,
  &KJfirst_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJrest_,
  &KJfirst_
};

static _KLsimple_object_vectorGVKd_1 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Knon_empty_Lsimple_class_listGVKi
};

static _KLbyte_stringGVKd_29 K193 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "non-empty-<simple-class-list>"
};

_KLinstance_slot_descriptorGVKe Klimited_list_firstVKeHnon_empty_Lsimple_object_listG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &Knon_empty_Lsimple_object_listGVKi,
  &KJfirst_,
  &Klimited_list_firstVKe,
  &Klimited_list_first_setterVKe,
  &KLobjectGVKd
};

_KLclassGVKd Knon_empty_Lsimple_object_listGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K206,
  &K197,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 Knon_empty_Lsimple_object_listGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K197,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K197 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &Knon_empty_Lsimple_object_listGVKi,
  &Knon_empty_Lsimple_object_listGVKiW,
  &KPfalseVKi,
  &K198,
  (D) 6801,
  &Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0,
  &K201,
  &K202,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K203,
  &K198,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPlimited_list_restVKiHLnon_empty_limited_listG,
  &Klimited_list_firstVKeHnon_empty_Lsimple_object_listG
};

_KLkeyword_methodGVKe Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K204,
  &key_mep_2,
  &Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0I,
  &K190
};

static _KLsimple_object_vectorGVKd_2 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnon_empty_limited_listGVKe,
  &KLsimple_object_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_object_listGVKi,
  &KLnon_empty_limited_listGVKe,
  &Knon_empty_Lsimple_object_listGVKi
};

static _KLsimple_object_vectorGVKd_1 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Klimited_list_firstVKeHnon_empty_Lsimple_object_listG
};

static _KLkeyword_signatureAvaluesGVKi K204 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K191,
  &KDsignature_LobjectG_typesVKi,
  &K205
};

static _KLsimple_object_vectorGVKd_1 K205 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Knon_empty_Lsimple_object_listGVKi
};

static _KLbyte_stringGVKd_30 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "non-empty-<simple-object-list>"
};

_KLgetter_methodGVKi Klimited_list_firstVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_object_listG
};

_KLgetter_methodGVKi Klimited_list_firstVKeMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_class_listG
};

_KLgetter_methodGVKi Klimited_list_firstVKeMM2 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klimited_list_firstVKeHnon_empty_Lsimple_method_listG
};

_KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Klimited_list_firstVKeMM2
};

_KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_firstVKeRD_dylanRD_0,
  &Klimited_list_firstVKeMM1
};

_KLmethod_domainGVKe Klimited_list_firstVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_firstVKeRD_dylanRD_1,
  &Klimited_list_firstVKeMM0
};

static _KLpairGVKd K213 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_firstVKeMM0,
  &K214
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_firstVKeMM1,
  &K215
};

static _KLpairGVKd K215 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_firstVKeMM2,
  &KPempty_listVKi
};

static _KLsignatureGVKe K216 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K106
};

static _KLbyte_stringGVKd_18 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "limited-list-first"
};

static _KLkeyword_signatureAvaluesGVKi K218 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K191,
  &KDsignature_LobjectG_typesVKi,
  &K219
};

static _KLsimple_object_vectorGVKd_1 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Knon_empty_Lsimple_method_listGVKi
};

static _KLbyte_stringGVKd_30 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "non-empty-<simple-method-list>"
};

static _KLbyte_stringGVKd_4 K221 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "rest"
};

static _KLbyte_stringGVKd_5 K222 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "first"
};

static _KLsignatureAvaluesGVKi K223 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K224,
  &K219
};

static _KLsimple_object_vectorGVKd_2 K224 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethodGVKd,
  &KLsimple_method_listGVKi
};

static _KLsignatureAvaluesGVKi K225 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K226,
  &K192
};

static _KLsimple_object_vectorGVKd_2 K226 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLsimple_class_listGVKi
};

static _KLsignatureAvaluesGVKi K227 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K228,
  &K205
};

static _KLsimple_object_vectorGVKd_2 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_listGVKi
};

static _KLsignatureAvaluesGVKi K229 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K230,
  &K106
};

static _KLsimple_object_vectorGVKd_2 K230 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K231,
  &KLobject_dequeGVKe
};

static _KLsubclassGVKe K231 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_listGVKe
};

static _KLsignatureAvaluesGVKi K232 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K233,
  &K106
};

static _KLsimple_object_vectorGVKd_2 K233 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K234,
  &KLsimple_object_vectorGVKd
};

static _KLsubclassGVKe K234 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_listGVKe
};

static _KLsignatureAvaluesGVKi K235 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K236,
  &K106
};

static _KLsimple_object_vectorGVKd_2 K236 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K237,
  &KLcollectionGVKd
};

static _KLsubclassGVKe K237 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_listGVKe
};

static _KLsubclassGVKe K238 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_class_listGVKi
};

static _KLsubclassGVKe K239 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_method_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K240 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K242,
  &K243,
  &K244,
  &K135
};

static _KLsimple_object_vectorGVKd_4 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  (D) 1,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K245
};

static _KLsimple_object_vectorGVKd_2 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJfill_
};

static _KLsimple_object_vectorGVKd_2 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLmethodGVKd
};

static _KLsingletonGVKd K245 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_method_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K246 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K247,
  &K243,
  &K248,
  &K187
};

static _KLsimple_object_vectorGVKd_1 K247 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K249
};

static _KLsimple_object_vectorGVKd_2 K248 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLclassGVKd
};

static _KLsingletonGVKd K249 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_class_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K250 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K251,
  &K243,
  &K252,
  &K165
};

static _KLsimple_object_vectorGVKd_1 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K253
};

static _KLsimple_object_vectorGVKd_2 K252 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsingletonGVKd K253 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_object_listGVKi
};

static _KLsubclassGVKe K254 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_object_listGVKi
};

static _KLsignatureAvaluesGVKi K255 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K256,
  &K257
};

static _KLsimple_object_vectorGVKd_1 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K258
};

static _KLsimple_object_vectorGVKd_1 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kempty_Lsimple_object_listGVKi
};

static _KLsubclassGVKe K258 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_object_listGVKi
};

static _KLsignatureAvaluesGVKi K259 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K260,
  &K261
};

static _KLsimple_object_vectorGVKd_1 K260 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K262
};

static _KLsimple_object_vectorGVKd_1 K261 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kempty_Lsimple_class_listGVKi
};

static _KLsubclassGVKe K262 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_class_listGVKi
};

static _KLsignatureAvaluesGVKi K263 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K264,
  &K265
};

static _KLsimple_object_vectorGVKd_1 K264 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K266
};

static _KLsimple_object_vectorGVKd_1 K265 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kempty_Lsimple_method_listGVKi
};

static _KLsubclassGVKe K266 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsimple_method_listGVKi
};

static _KLkeyword_signatureGVKe K267 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K106,
  &K269,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K268 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K269 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsignatureGVKe K270 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K271
};

static _KLsimple_object_vectorGVKd_3 K271 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlimited_listGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Klimited_list_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K284,
  &Klimited_list_next_stateVKiI
};

_KLsimple_methodGVKe Klimited_list_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K308,
  &Klimited_list_finished_stateQVKiI
};

_KLsimple_methodGVKe Klimited_list_current_keyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K307,
  &Klimited_list_current_keyVKiI
};

_KLsimple_methodGVKe Klimited_list_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K288,
  &Klimited_list_current_elementVKiI
};

_KLsimple_methodGVKe Klimited_list_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K286,
  &Klimited_list_current_element_setterVKiI
};

_KLsimple_methodGVKe Klimited_list_copy_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K284,
  &Klimited_list_copy_stateVKiI
};

static _KLsignatureAvaluesGVKi K284 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K285,
  &K106
};

static _KLsimple_object_vectorGVKd_2 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_listGVKe,
  &KLlimited_listGVKe
};

static _KLsignatureGVKe K286 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K287
};

static _KLsimple_object_vectorGVKd_3 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlimited_listGVKe,
  &KLlimited_listGVKe
};

static _KLsignatureGVKe K288 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K285
};

_KLincremental_generic_functionGVKe Klimited_list_restVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K302,
  (D) 1,
  &K303,
  &K299,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Klimited_list_restVKeRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Klimited_list_restVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K306,
  &Klimited_list_restVKeMM0I
};

_KLsimple_methodGVKe Klimited_list_restVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K305,
  &Klimited_list_restVKeMM1I
};

_KLsimple_methodGVKe Klimited_list_restVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K304,
  &Klimited_list_restVKeMM2I
};

_KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Klimited_list_restVKeMM2
};

_KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_restVKeRD_dylanRD_0,
  &Klimited_list_restVKeMM1
};

_KLmethod_domainGVKe Klimited_list_restVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_restVKeRD_dylanRD_1,
  &Klimited_list_restVKeMM0
};

static _KLpairGVKd K299 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_restVKeMM0,
  &K300
};

static _KLpairGVKd K300 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_restVKeMM1,
  &K301
};

static _KLpairGVKd K301 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_restVKeMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K302 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K106,
  &K106
};

static _KLbyte_stringGVKd_17 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "limited-list-rest"
};

static _KLsignatureAvaluesGVKi K304 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K219,
  &K135
};

static _KLsignatureAvaluesGVKi K305 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K192,
  &K187
};

static _KLsignatureAvaluesGVKi K306 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K205,
  &K165
};

static _KLsignatureAvaluesGVKi K307 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K285,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K308 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K309,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K309 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_listGVKe,
  &KLlimited_listGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K310 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K106,
  &K311
};

static _KLsimple_object_vectorGVKd_8 K311 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLlimited_listGVKe,
  &KLlimited_listGVKe,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe KLsimple_object_listG_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K322,
  &KLsimple_object_listG_next_stateVKiI
};

_KLsimple_methodGVKe KLsimple_object_listG_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K320,
  &KLsimple_object_listG_current_elementVKiI
};

_KLsimple_methodGVKe KLsimple_object_listG_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K318,
  &KLsimple_object_listG_current_element_setterVKiI
};

static _KLsignatureGVKe K318 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K319
};

static _KLsimple_object_vectorGVKd_3 K319 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_object_listGVKi,
  &KLsimple_object_listGVKi
};

static _KLsignatureGVKe K320 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K321
};

static _KLsimple_object_vectorGVKd_2 K321 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_listGVKi,
  &KLsimple_object_listGVKi
};

static _KLsignatureAvaluesGVKi K322 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K321,
  &K165
};

static _KLsignatureAvaluesGVKi K323 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K165,
  &K324
};

static _KLsimple_object_vectorGVKd_8 K324 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLsimple_object_listGVKi,
  &KLsimple_object_listGVKi,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe KLsimple_class_listG_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K335,
  &KLsimple_class_listG_next_stateVKiI
};

_KLsimple_methodGVKe KLsimple_class_listG_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K333,
  &KLsimple_class_listG_current_elementVKiI
};

_KLsimple_methodGVKe KLsimple_class_listG_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K331,
  &KLsimple_class_listG_current_element_setterVKiI
};

static _KLsignatureAvaluesGVKi K331 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K332,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K332 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLsimple_class_listGVKi,
  &KLsimple_class_listGVKi
};

static _KLsignatureAvaluesGVKi K333 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K334,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K334 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_class_listGVKi,
  &KLsimple_class_listGVKi
};

static _KLsignatureAvaluesGVKi K335 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K334,
  &K187
};

static _KLsignatureAvaluesGVKi K336 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K187,
  &K337
};

static _KLsimple_object_vectorGVKd_8 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLsimple_class_listGVKi,
  &KLsimple_class_listGVKi,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe KLsimple_method_listG_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K348,
  &KLsimple_method_listG_next_stateVKiI
};

_KLsimple_methodGVKe KLsimple_method_listG_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K346,
  &KLsimple_method_listG_current_elementVKiI
};

_KLsimple_methodGVKe KLsimple_method_listG_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K344,
  &KLsimple_method_listG_current_element_setterVKiI
};

static _KLsignatureAvaluesGVKi K344 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K345,
  &KDsignature_LmethodG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K345 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmethodGVKd,
  &KLsimple_method_listGVKi,
  &KLsimple_method_listGVKi
};

static _KLsignatureAvaluesGVKi K346 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K347,
  &KDsignature_LmethodG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K347 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_method_listGVKi,
  &KLsimple_method_listGVKi
};

static _KLsignatureAvaluesGVKi K348 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K347,
  &K135
};

static _KLsignatureAvaluesGVKi K349 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K135,
  &K350
};

static _KLsimple_object_vectorGVKd_8 K350 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLsimple_method_listGVKi,
  &KLsimple_method_listGVKi,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureGVKe K351 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K352,
  &K269,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K352 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_listGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_2 K353 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K354 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K135,
  &K242
};

static _KLsignatureAvaluesGVKi K355 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K187,
  &K247
};

static _KLsignatureAvaluesGVKi K356 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K165,
  &K251
};

static _KLsignatureAvaluesGVKi K357 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K106,
  &K358
};

static _KLsimple_object_vectorGVKd_1 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K359
};

static _KLunionGVKe K359 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K360,
  &KLintegerGVKd
};

static _KLsingletonGVKd K360 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K361 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K135,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K362 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K187,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K363 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K165,
  &KDsignature_LbooleanG_typesVKi
};

static _KLimplementation_classGVKe K364 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &Kempty_Lsimple_method_listGVKi,
  &Kempty_Lsimple_method_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6857,
  &Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0,
  &K366,
  &K367,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K377,
  &key_mep_2,
  &Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K366 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_limited_listGVKe,
  &KLsimple_method_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_method_listGVKi,
  &KLempty_limited_listGVKe,
  &Kempty_Lsimple_method_listGVKi
};

_KLclassGVKd KLempty_limited_listGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K376,
  &K370,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLempty_limited_listGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K370,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K370 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 392691713,
  &KLempty_limited_listGVKe,
  &KLempty_limited_listGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6785,
  &KLempty_limited_listGZ32ZconstructorVKiMM0,
  &K106,
  &K373,
  (D) 33,
  &K156,
  &K157,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K479,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLempty_limited_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K374,
  &key_mep_2,
  &KLempty_limited_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K373 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLempty_limited_listGVKe
};

static _KLkeyword_signatureAvaluesGVKi K374 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K375
};

static _KLsimple_object_vectorGVKd_1 K375 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLempty_limited_listGVKe
};

static _KLbyte_stringGVKd_20 K376 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<empty-limited-list>"
};

static _KLkeyword_signatureAvaluesGVKi K377 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K265
};

static _KLbyte_stringGVKd_26 K378 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "empty-<simple-method-list>"
};

static _KLimplementation_classGVKe K379 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &Kempty_Lsimple_class_listGVKi,
  &Kempty_Lsimple_class_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6833,
  &Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0,
  &K381,
  &K382,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K383,
  &key_mep_2,
  &Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K381 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_limited_listGVKe,
  &KLsimple_class_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K382 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_class_listGVKi,
  &KLempty_limited_listGVKe,
  &Kempty_Lsimple_class_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K383 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K261
};

static _KLbyte_stringGVKd_25 K384 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "empty-<simple-class-list>"
};

static _KLimplementation_classGVKe K385 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &Kempty_Lsimple_object_listGVKi,
  &Kempty_Lsimple_object_listGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6809,
  &Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0,
  &K387,
  &K388,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K389,
  &key_mep_2,
  &Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K387 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_limited_listGVKe,
  &KLsimple_object_listGVKi
};

static _KLsimple_object_vectorGVKd_11 K388 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlimited_listGVKe,
  &KLsimple_object_listGVKi,
  &KLempty_limited_listGVKe,
  &Kempty_Lsimple_object_listGVKi
};

static _KLkeyword_signatureAvaluesGVKi K389 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K257
};

static _KLbyte_stringGVKd_26 K390 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "empty-<simple-object-list>"
};

_KLincremental_generic_functionGVKe Klimited_list_rest_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K284,
  (D) 1,
  &K407,
  &K404,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Klimited_list_rest_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K412,
  &Klimited_list_rest_setterVKeMM0I
};

_KLsimple_methodGVKe Klimited_list_rest_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K410,
  &Klimited_list_rest_setterVKeMM1I
};

_KLsimple_methodGVKe Klimited_list_rest_setterVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K408,
  &Klimited_list_rest_setterVKeMM2I
};

_KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_method_listGVKi
};

_KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_0,
  &Klimited_list_rest_setterVKeMM2
};

_KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_1,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_class_listGVKi
};

_KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_2,
  &Klimited_list_rest_setterVKeMM1
};

_KLstandalone_domainGVKe_2 Klimited_list_rest_setterVKeRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_3,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_listGVKi
};

_KLmethod_domainGVKe Klimited_list_rest_setterVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_rest_setterVKeRD_dylanRD_4,
  &Klimited_list_rest_setterVKeMM0
};

static _KLpairGVKd K404 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_rest_setterVKeMM0,
  &K405
};

static _KLpairGVKd K405 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_rest_setterVKeMM1,
  &K406
};

static _KLpairGVKd K406 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_rest_setterVKeMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K407 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "limited-list-rest-setter"
};

static _KLsignatureAvaluesGVKi K408 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K409,
  &K135
};

static _KLsimple_object_vectorGVKd_2 K409 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_method_listGVKi,
  &Knon_empty_Lsimple_method_listGVKi
};

static _KLsignatureAvaluesGVKi K410 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K411,
  &K187
};

static _KLsimple_object_vectorGVKd_2 K411 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_class_listGVKi,
  &Knon_empty_Lsimple_class_listGVKi
};

static _KLsignatureAvaluesGVKi K412 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K413,
  &K165
};

static _KLsimple_object_vectorGVKd_2 K413 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_listGVKi,
  &Knon_empty_Lsimple_object_listGVKi
};

_KLincremental_generic_functionGVKe Klimited_listVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K430,
  &KPfalseVKi,
  &K431,
  &K426,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Klimited_listVKeRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Klimited_listVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K443,
  &Klimited_listVKeMM0I
};

_KLsimple_methodGVKe Klimited_listVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K440,
  &Klimited_listVKeMM1I
};

_KLsimple_methodGVKe Klimited_listVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K437,
  &Klimited_listVKeMM2I
};

_KLsimple_methodGVKe Klimited_listVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K434,
  &Klimited_listVKeMM3I
};

_KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Klimited_listVKeMM2
};

_KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_listVKeRD_dylanRD_0,
  &Klimited_listVKeMM1
};

_KLmethod_domainGVKe Klimited_listVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_listVKeRD_dylanRD_1,
  &Klimited_listVKeMM0
};

static _KLpairGVKd K426 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_listVKeMM0,
  &K427
};

static _KLpairGVKd K427 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_listVKeMM1,
  &K428
};

static _KLpairGVKd K428 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_listVKeMM2,
  &K429
};

static _KLpairGVKd K429 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_listVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K430 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &K432
};

static _KLbyte_stringGVKd_12 K431 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "limited-list"
};

static _KLsimple_object_vectorGVKd_1 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K433
};

static _KLsubclassGVKe K433 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_listGVKe
};

static _KLsignatureAvaluesGVKi K434 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &K435
};

static _KLsimple_object_vectorGVKd_1 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K436
};

static _KLsubclassGVKe K436 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_listGVKe
};

static _KLsignatureAvaluesGVKi K437 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K438,
  &K242
};

static _KLsimple_object_vectorGVKd_1 K438 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K439
};

static _KLsingletonGVKd K439 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmethodGVKd
};

static _KLsignatureAvaluesGVKi K440 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K441,
  &K247
};

static _KLsimple_object_vectorGVKd_1 K441 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K442
};

static _KLsingletonGVKd K442 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLclassGVKd
};

static _KLsignatureAvaluesGVKi K443 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K444,
  &K251
};

static _KLsimple_object_vectorGVKd_1 K444 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K445
};

static _KLsingletonGVKd K445 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe KrestVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K221,
  &K451,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KrestVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K302,
  &KrestVKeMM0I
};

_KLsimple_methodGVKe KrestVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K453,
  &KrestVKeMM1I
};

static _KLpairGVKd K451 = {
  &KLpairGVKdW /* wrapper */,
  &KrestVKeMM0,
  &K452
};

static _KLpairGVKd K452 = {
  &KLpairGVKdW /* wrapper */,
  &KrestVKeMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K453 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLbyte_stringGVKd_45 K454 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Cannot take rest of the empty limited list %="
};

_KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_1,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_class_listGVKi
};

_KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_2,
  &Klimited_list_first_setterVKeMM1
};

_KLstandalone_domainGVKe_2 Klimited_list_first_setterVKeRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_3,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_listGVKi
};

_KLmethod_domainGVKe Klimited_list_first_setterVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Klimited_list_first_setterVKeRD_dylanRD_4,
  &Klimited_list_first_setterVKeMM0
};

static _KLpairGVKd K459 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_first_setterVKeMM0,
  &K460
};

static _KLpairGVKd K460 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_first_setterVKeMM1,
  &K461
};

static _KLpairGVKd K461 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_list_first_setterVKeMM2,
  &KPempty_listVKi
};

_KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_method_listGVKi
};

_KLmethod_domainGVKe KprependVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KprependVKeRD_dylanRD_0,
  &KprependVKeMM2
};

_KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KprependVKeRD_dylanRD_1,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_class_listGVKi
};

_KLmethod_domainGVKe KprependVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KprependVKeRD_dylanRD_2,
  &KprependVKeMM1
};

_KLstandalone_domainGVKe_2 KprependVKeRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KprependVKeRD_dylanRD_3,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_listGVKi
};

_KLmethod_domainGVKe KprependVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KprependVKeRD_dylanRD_4,
  &KprependVKeMM0
};

static _KLpairGVKd K468 = {
  &KLpairGVKdW /* wrapper */,
  &KprependVKeMM0,
  &K469
};

static _KLpairGVKd K469 = {
  &KLpairGVKdW /* wrapper */,
  &KprependVKeMM1,
  &K470
};

static _KLpairGVKd K470 = {
  &KLpairGVKdW /* wrapper */,
  &KprependVKeMM2,
  &KPempty_listVKi
};

static _KLpairGVKd K471 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_method_listGVKi,
  &K472
};

static _KLpairGVKd K472 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_class_listGVKi,
  &K473
};

static _KLpairGVKd K473 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_object_listGVKi,
  &K474
};

static _KLpairGVKd K474 = {
  &KLpairGVKdW /* wrapper */,
  &KLempty_limited_listGVKe,
  &K475
};

static _KLpairGVKd K475 = {
  &KLpairGVKdW /* wrapper */,
  &KLnon_empty_limited_listGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K476 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_method_listGVKi,
  &K477
};

static _KLpairGVKd K477 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_class_listGVKi,
  &K478
};

static _KLpairGVKd K478 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_object_listGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K479 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_method_listGVKi,
  &K480
};

static _KLpairGVKd K480 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_class_listGVKi,
  &K481
};

static _KLpairGVKd K481 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_object_listGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K482 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_object_listGVKi,
  &K483
};

static _KLpairGVKd K483 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_object_listGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K484 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_class_listGVKi,
  &K485
};

static _KLpairGVKd K485 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_class_listGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K486 = {
  &KLpairGVKdW /* wrapper */,
  &Kempty_Lsimple_method_listGVKi,
  &K487
};

static _KLpairGVKd K487 = {
  &KLpairGVKdW /* wrapper */,
  &Knon_empty_Lsimple_method_listGVKi,
  &KPempty_listVKi
};

/* Code */

D Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3 = primitive_object_allocate_filled(1,&Kempty_Lsimple_object_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3 = primitive_object_allocate_filled(1,&Kempty_Lsimple_class_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3 = primitive_object_allocate_filled(1,&Kempty_Lsimple_method_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T4_0);
}

D KemptyQVKdMM11I (D list_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2 = primitive_idQ(list_,Dempty_Lsimple_object_listGVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyQVKdMM12I (D list_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2 = primitive_idQ(list_,Dempty_Lsimple_class_listGVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyQVKdMM13I (D list_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2 = primitive_idQ(list_,Dempty_Lsimple_method_listGVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsizeVKdMM31I (D list_) {
  D T2;
  D nil_;
  D T4_0;
  D listF5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D fast_tail_;
  D fast_tail_tail_;
  D slowtail_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20_0;
  D T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27_0;
  D T28;
  DWORD T29;
  D T30;
  DWORD countF31T, countF31;
  D fastF32T, fastF32;
  D slowF33T, slowF33;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:104
  T2 = Kobject_classVKdI(list_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:104
  nil_ = CALL1(&KemptyVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:105
  T7 = primitive_idQ(list_,nil_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:105
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:106
    T4_0 = (D) 1;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:108
    listF5 = list_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
    countF31T = 1;
    fastF32T = listF5;
    slowF33T = listF5;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
      countF31 = countF31T;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
      fastF32 = fastF32T;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
      slowF33 = slowF33T;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:112
      T16 = SLOT_VALUE_INITD(fastF32, 0);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:113
      T17 = primitive_idQ(T16,nil_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:113
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:114
        T18 = primitive_machine_word_add_signal_overflow(countF31,4);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:114
        T19 = primitive_cast_raw_as_integer(T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:114
        T20_0 = T19;
        T15 = T20_0;
        MV_SET_COUNT(1);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:115
        T21 = primitive_idQ(fastF32,slowF33);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:115
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:115
          T22 = primitive_machine_word_less_thanQ(1,countF31);
          T8 = T22;
        } else {
          T8 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:115
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:113
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:116
          T9 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T14 = T9;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:118
          fast_tail_ = T16;
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:119
          T23 = SLOT_VALUE_INITD(fast_tail_, 0);
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:121
          T24 = primitive_idQ(T23,nil_);
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:120
          if (T24 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:122
            T25 = primitive_machine_word_add_signal_overflow(countF31,8);
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:122
            T26 = primitive_cast_raw_as_integer(T25);
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:122
            T27_0 = T26;
            T13 = T27_0;
            MV_SET_COUNT(1);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:124
            fast_tail_tail_ = T23;
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:127
            T28 = SLOT_VALUE_INITD(slowF33, 0);
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:126
            slowtail_ = T28;
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
            T29 = primitive_machine_word_add_signal_overflow(countF31,8);
            // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
            countF31T = T29;
            fastF32T = fast_tail_tail_;
            slowF33T = slowtail_;
            goto L0;
            T13 = T30;
          }
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:120
          T14 = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:113
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:113
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:128
    T6_0 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:105
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:102
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ktype_for_copyVKdMM16I (D list_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2_0 = &KLsimple_object_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM17I (D list_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2_0 = &KLsimple_class_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM18I (D list_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2_0 = &KLsimple_method_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM26I (D lst_, D key_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D lF13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D lF24T, lF24;
  DWORD iF25T, iF25;
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:139
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:142
  T9 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:142
  T10 = primitive_machine_word_less_thanQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:142
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:143
    T11 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:143
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:143
      T5_0 = Kelement_range_errorVKeI(lst_, key_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:143
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:143
    T8_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
    lF24T = lst_;
    iF25T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
      lF24 = lF24T;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
      iF25 = iF25T;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
      T27 = primitive_cast_raw_as_integer(iF25);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:146
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T12 = CONGRUENT_CALL1(lF24);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:146
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:153
        T26 = primitive_idQ(default_,&Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:146
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:154
          T16 = Kelement_range_errorVKeI(lst_, key_);
          T18 = T16;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:156
          T17 = default_;
          MV_SET_ELT(0, default_);
          MV_SET_COUNT(1);
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:146
        T19 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:147
        lF13 = lF24;
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:148
        T20 = primitive_idQ(T27,key_);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:148
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:149
          CONGRUENT_CALL_PROLOG(&Klimited_list_firstVKe, 1);
          T14 = CONGRUENT_CALL1(lF13);
          T15 = T14;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
          T21 = SLOT_VALUE_INITD(lF13, 0);
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
          T22 = primitive_machine_word_add_signal_overflow(iF25,4);
          // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
          lF24T = T21;
          iF25T = T22;
          goto L0;
          T15 = T23;
        }
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:148
        T19 = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:146
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:151
    T8_0 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:142
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:139
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM24I (D lst_, D key_, D Urest_, D default_) {
  DWORD k_T, k_;
  D remain_T, remain_;
  D T7;
  D T8;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
  k_T = 1;
  remain_T = lst_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    k_ = k_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    remain_ = remain_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    T10 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    T11 = primitive_machine_word_less_thanQ(k_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
      T12 = primitive_machine_word_add_signal_overflow(k_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:170
      T7 = CALL1(&KPlimited_list_restVKi, remain_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
      T8 = T7;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
      k_T = T12;
      remain_T = T8;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:172
    CONGRUENT_CALL_PROLOG(&Klimited_list_firstVKe, 1);
    T9_0 = CONGRUENT_CALL1(remain_);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:166
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kforward_iteration_protocolVKdMM25I (D list_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2_0 = list_;
  T2_1 = Dempty_Lsimple_method_listGVKi;
  T2_2 = &KLsimple_method_listG_next_stateVKi;
  T2_3 = &Klimited_list_finished_stateQVKi;
  T2_4 = &Klimited_list_current_keyVKi;
  T2_5 = &KLsimple_method_listG_current_elementVKi;
  T2_6 = &KLsimple_method_listG_current_element_setterVKi;
  T2_7 = &Klimited_list_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_ELT(1, T2_1);
  MV_SET_ELT(2, T2_2);
  MV_SET_ELT(3, T2_3);
  MV_SET_ELT(4, T2_4);
  MV_SET_ELT(5, T2_5);
  MV_SET_ELT(6, T2_6);
  MV_SET_ELT(7, T2_7);
  MV_SET_COUNT(8);
  return(T2_0);
}

D Kforward_iteration_protocolVKdMM24I (D list_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2_0 = list_;
  T2_1 = Dempty_Lsimple_class_listGVKi;
  T2_2 = &KLsimple_class_listG_next_stateVKi;
  T2_3 = &Klimited_list_finished_stateQVKi;
  T2_4 = &Klimited_list_current_keyVKi;
  T2_5 = &KLsimple_class_listG_current_elementVKi;
  T2_6 = &KLsimple_class_listG_current_element_setterVKi;
  T2_7 = &Klimited_list_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_ELT(1, T2_1);
  MV_SET_ELT(2, T2_2);
  MV_SET_ELT(3, T2_3);
  MV_SET_ELT(4, T2_4);
  MV_SET_ELT(5, T2_5);
  MV_SET_ELT(6, T2_6);
  MV_SET_ELT(7, T2_7);
  MV_SET_COUNT(8);
  return(T2_0);
}

D Kforward_iteration_protocolVKdMM23I (D list_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2_0 = list_;
  T2_1 = Dempty_Lsimple_object_listGVKi;
  T2_2 = &KLsimple_object_listG_next_stateVKi;
  T2_3 = &Klimited_list_finished_stateQVKi;
  T2_4 = &Klimited_list_current_keyVKi;
  T2_5 = &KLsimple_object_listG_current_elementVKi;
  T2_6 = &KLsimple_object_listG_current_element_setterVKi;
  T2_7 = &Klimited_list_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_ELT(1, T2_1);
  MV_SET_ELT(2, T2_2);
  MV_SET_ELT(3, T2_3);
  MV_SET_ELT(4, T2_4);
  MV_SET_ELT(5, T2_5);
  MV_SET_ELT(6, T2_6);
  MV_SET_ELT(7, T2_7);
  MV_SET_COUNT(8);
  return(T2_0);
}

D Kforward_iteration_protocolVKdMM22I (D list_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:284
  T2 = Kobject_classVKdI(list_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:284
  T3 = CALL1(&KemptyVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:283
  T5_0 = list_;
  T5_1 = T3;
  T5_2 = &Klimited_list_next_stateVKi;
  T5_3 = &Klimited_list_finished_stateQVKi;
  T5_4 = &Klimited_list_current_keyVKi;
  T5_5 = &Klimited_list_current_elementVKi;
  T5_6 = &Klimited_list_current_element_setterVKi;
  T5_7 = &Klimited_list_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:276
  T4_0 = T5_0;
  T4_1 = T5_1;
  T4_2 = T5_2;
  T4_3 = T5_3;
  T4_4 = T5_4;
  T4_5 = T5_5;
  T4_6 = T5_6;
  T4_7 = T5_7;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:276
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

D Kelement_setterVKdMM26I (D new_value_, D lst_, D key_) {
  D T4;
  D lF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D lF14T, lF14;
  DWORD iF15T, iF15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:180
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
  lF14T = lst_;
  iF15T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
    lF14 = lF14T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
    iF15 = iF15T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
    T16 = primitive_cast_raw_as_integer(iF15);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:184
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T4 = CONGRUENT_CALL1(lF14);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:184
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:192
      T8 = Kelement_range_errorVKeI(lst_, key_);
      T9 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:185
      lF5 = lF14;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:186
      T10 = primitive_idQ(T16,key_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:186
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:187
        CONGRUENT_CALL_PROLOG(&Klimited_list_first_setterVKe, 2);
        CONGRUENT_CALL2(new_value_, lF5);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:187
        T6 = new_value_;
        MV_SET_ELT(0, new_value_);
        MV_SET_COUNT(1);
        T7 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
        T11 = SLOT_VALUE_INITD(lF5, 0);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
        T12 = primitive_machine_word_add_signal_overflow(iF15,4);
        // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
        lF14T = T11;
        iF15T = T12;
        goto L0;
        T7 = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:186
      T9 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:184
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:180
  return(T9);
}

D Kelement_no_bounds_check_setterVKeMM26I (D new_value_, D lst_, D key_) {
  DWORD k_T, k_;
  D remain_T, remain_;
  D T6;
  D T7;
  D T8_0;
  DWORD T9;
  D T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
  k_T = 1;
  remain_T = lst_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    k_ = k_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    remain_ = remain_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    T9 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    T10 = primitive_machine_word_less_thanQ(k_,T9);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
      T11 = primitive_machine_word_add_signal_overflow(k_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:204
      T6 = CALL1(&KPlimited_list_restVKi, remain_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
      T7 = T6;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
      k_T = T11;
      remain_T = T7;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:206
    CONGRUENT_CALL_PROLOG(&Klimited_list_first_setterVKe, 2);
    CONGRUENT_CALL2(new_value_, remain_);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:206
    T8_0 = new_value_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:201
  MV_SET_COUNT(1);
  return(T8_0);
}

D KfirstVKdMM1I (D list_, D Urest_, D default_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:210
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:212
  T8 = primitive_instanceQ(list_,&KLnon_empty_limited_listGVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:212
  if (T8 != &KPfalseVKi) {
    T7 = list_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:213
    CONGRUENT_CALL_PROLOG(&Klimited_list_firstVKe, 1);
    T4_0 = CONGRUENT_CALL1(T7);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:215
    T5_0 = Kelement_range_errorVKeI(list_, (D) 1);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:212
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:210
  MV_SET_COUNT(1);
  return(T6_0);
}

D KemptyVKeMM12I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2_0 = Dempty_Lsimple_method_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T2_0);
}

D KemptyVKeMM11I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2_0 = Dempty_Lsimple_class_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T2_0);
}

D KemptyVKeMM10I (D class_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2_0 = Dempty_Lsimple_object_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T2_0);
}

D KmakeVKdMM37I (D class_, D Urest_, D size_, D fill_) {
  D sizeF5;
  DWORD i_T, i_;
  D result_T, result_;
  D T8_0;
  DWORD T9;
  D T10;
  DWORD T11;
  D T12_0;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF5 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T9 = primitive_cast_integer_as_raw(sizeF5);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  i_T = 1;
  result_T = Dempty_Lsimple_object_listGVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
      T13.vector_element_[0] = IKJfirst_;
      T13.vector_element_[1] = fill_;
      T13.vector_element_[2] = IKJrest_;
      T13.vector_element_[3] = result_;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
      T12_0 = Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_object_listGVKi, &T13, result_, fill_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
      T14 = T12_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
      i_T = T11;
      result_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    T8_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM38I (D class_, D Urest_, D size_, D fill_) {
  D sizeF5;
  D fillF6;
  DWORD i_T, i_;
  D result_T, result_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13_0;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF5 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T10 = primitive_cast_integer_as_raw(sizeF5);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  primitive_type_check(fill_, &KLclassGVKd);
  fillF6 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  i_T = 1;
  result_T = Dempty_Lsimple_class_listGVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
      T14.vector_element_[0] = IKJfirst_;
      T14.vector_element_[1] = fillF6;
      T14.vector_element_[2] = IKJrest_;
      T14.vector_element_[3] = result_;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
      T13_0 = Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_class_listGVKi, &T14, result_, fillF6);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
      T15 = T13_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
      i_T = T12;
      result_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    T9_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T9_0);
}

D KmakeVKdMM39I (D class_, D Urest_, D size_, D fill_) {
  D sizeF5;
  D fillF6;
  DWORD i_T, i_;
  D result_T, result_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13_0;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF5 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T10 = primitive_cast_integer_as_raw(sizeF5);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  primitive_type_check(fill_, &KLmethodGVKd);
  fillF6 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  i_T = 1;
  result_T = Dempty_Lsimple_method_listGVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
      T14.vector_element_[0] = IKJfirst_;
      T14.vector_element_[1] = fillF6;
      T14.vector_element_[2] = IKJrest_;
      T14.vector_element_[3] = result_;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
      T13_0 = Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_method_listGVKi, &T14, result_, fillF6);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
      T15 = T13_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
      i_T = T12;
      result_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    T9_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T9_0);
}

D KasVKdMM64I (D class_, D collection_) {
  D T3;
  D resultF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D T17_0;
  D resultF18;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:69
  CONGRUENT_CALL_PROLOG(&KemptyVKe, 1);
  T3 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:69
  resultF4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:69
  resultF18 = resultF4;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  T11T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
    T12 = CALL3(T9, collection_, T11, T7);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
      T13 = CALL2(T10, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:71
      T20 = resultF18;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:71
      CONGRUENT_CALL_PROLOG(&KprependVKe, 2);
      T14 = CONGRUENT_CALL2(T13, T20);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:71
      resultF18 = T14;
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
      T15 = CALL2(T8, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
      T11T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:73
  T19 = resultF18;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:73
  CONGRUENT_CALL_PROLOG(&KreverseXVKd, 1);
  T16_0 = CONGRUENT_CALL1(T19);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:66
  T17_0 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:66
  MV_SET_COUNT(1);
  return(T17_0);
}

D KasVKdMM65I (D class_, D v_) {
  D T3;
  D result_T, result_;
  DWORD index_T, index_;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
  CONGRUENT_CALL_PROLOG(&KemptyVKe, 1);
  T3 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:80
  T9 = SLOT_VALUE_INITD(v_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:80
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:80
  T11 = primitive_machine_word_subtract_signal_overflow(T10,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
  result_T = T3;
  index_T = T11;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
    T12 = primitive_machine_word_less_thanQ(index_,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(v_, 1, index_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
      T6 = CALL2(&KprependVKe, T13, result_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
      T14 = primitive_machine_word_add_signal_overflow(index_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
      result_T = T6;
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:82
    T7_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:76
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:76
  MV_SET_COUNT(1);
  return(T8_0);
}

D KasVKdMM66I (D class_, D v_) {
  D T3;
  D result_T, result_;
  DWORD index_T, index_;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;
  D T15;
  DWORD T16;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:89
  T9 = SLOT_VALUE_INITD(v_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
  CONGRUENT_CALL_PROLOG(&KemptyVKe, 1);
  T3 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:92
  T10 = SLOT_VALUE_INITD(T9, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:92
  T11 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
  T14 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
  result_T = T3;
  index_T = T14;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
    T13 = primitive_machine_word_less_thanQ(index_,T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:91
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 3, index_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:91
      T6 = CALL2(&KprependVKe, T15, result_);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
      T16 = primitive_machine_word_add_signal_overflow(index_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
      result_T = T6;
      index_T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:94
    T7_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:86
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:86
  MV_SET_COUNT(1);
  return(T8_0);
}

D KprependVKeMM0I (D object_, D list_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T4.vector_element_[0] = IKJfirst_;
  T4.vector_element_[1] = object_;
  T4.vector_element_[2] = IKJrest_;
  T4.vector_element_[3] = list_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3_0 = Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_object_listGVKi, &T4, list_, object_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T3_0);
}

D KprependVKeMM1I (D object_, D list_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T4.vector_element_[0] = IKJfirst_;
  T4.vector_element_[1] = object_;
  T4.vector_element_[2] = IKJrest_;
  T4.vector_element_[3] = list_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3_0 = Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_class_listGVKi, &T4, list_, object_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T3_0);
}

D KprependVKeMM2I (D object_, D list_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T4.vector_element_[0] = IKJfirst_;
  T4.vector_element_[1] = object_;
  T4.vector_element_[2] = IKJrest_;
  T4.vector_element_[3] = list_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3_0 = Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0I(&Knon_empty_Lsimple_method_listGVKi, &T4, list_, object_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T3_0);
}

D Knon_empty_Lsimple_method_listGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Plimited_list_rest_, D Uunique_limited_list_first_) {
  D T5;
  D Uunique_Plimited_list_restF6;
  D T7;
  D Uunique_limited_list_firstF8;
  D T9;
  D Uunique_Plimited_list_restF10;
  D Uunique_limited_list_firstF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T13 = primitive_idQ(Uunique_Plimited_list_rest_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = IKJrest_;
    T15 = KerrorVKdMM1I(&K167, &T14);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    T5 = T15;
    Uunique_Plimited_list_restF6 = T5;
  } else {
    Uunique_Plimited_list_restF6 = Uunique_Plimited_list_rest_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T16 = primitive_idQ(Uunique_limited_list_first_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = IKJfirst_;
    T18 = KerrorVKdMM1I(&K167, &T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
    T7 = T18;
    Uunique_limited_list_firstF8 = T7;
  } else {
    Uunique_limited_list_firstF8 = Uunique_limited_list_first_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T9 = primitive_object_allocate_filled(3,&Knon_empty_Lsimple_method_listGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_Plimited_list_restF10 = Uunique_Plimited_list_restF6;
  SLOT_VALUE_SETTER(Uunique_Plimited_list_restF10, T9, 0);
  Uunique_limited_list_firstF11 = Uunique_limited_list_firstF8;
  SLOT_VALUE_SETTER(Uunique_limited_list_firstF11, T9, 1);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLsimple_method_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3 = primitive_object_allocate_filled(1,&KLsimple_method_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T4_0);
}

D Knon_empty_Lsimple_class_listGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Plimited_list_rest_, D Uunique_limited_list_first_) {
  D T5;
  D Uunique_Plimited_list_restF6;
  D T7;
  D Uunique_limited_list_firstF8;
  D T9;
  D Uunique_Plimited_list_restF10;
  D Uunique_limited_list_firstF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T13 = primitive_idQ(Uunique_Plimited_list_rest_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = IKJrest_;
    T15 = KerrorVKdMM1I(&K167, &T14);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    T5 = T15;
    Uunique_Plimited_list_restF6 = T5;
  } else {
    Uunique_Plimited_list_restF6 = Uunique_Plimited_list_rest_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T16 = primitive_idQ(Uunique_limited_list_first_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = IKJfirst_;
    T18 = KerrorVKdMM1I(&K167, &T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
    T7 = T18;
    Uunique_limited_list_firstF8 = T7;
  } else {
    Uunique_limited_list_firstF8 = Uunique_limited_list_first_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T9 = primitive_object_allocate_filled(3,&Knon_empty_Lsimple_class_listGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_Plimited_list_restF10 = Uunique_Plimited_list_restF6;
  SLOT_VALUE_SETTER(Uunique_Plimited_list_restF10, T9, 0);
  Uunique_limited_list_firstF11 = Uunique_limited_list_firstF8;
  SLOT_VALUE_SETTER(Uunique_limited_list_firstF11, T9, 1);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLnon_empty_limited_listGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Plimited_list_rest_) {
  D T4;
  D Uunique_Plimited_list_restF5;
  D T6;
  D Uunique_Plimited_list_restF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
  T9 = primitive_idQ(Uunique_Plimited_list_rest_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = IKJrest_;
    T11 = KerrorVKdMM1I(&K167, &T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
    T4 = T11;
    Uunique_Plimited_list_restF5 = T4;
  } else {
    Uunique_Plimited_list_restF5 = Uunique_Plimited_list_rest_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
  T6 = primitive_object_allocate_filled(2,&KLnon_empty_limited_listGVKeW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_Plimited_list_restF7 = Uunique_Plimited_list_restF5;
  SLOT_VALUE_SETTER(Uunique_Plimited_list_restF7, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:54
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLsimple_object_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3 = primitive_object_allocate_filled(1,&KLsimple_object_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_class_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3 = primitive_object_allocate_filled(1,&KLsimple_class_listGVKiW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T4_0);
}

D Knon_empty_Lsimple_object_listGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Plimited_list_rest_, D Uunique_limited_list_first_) {
  D T5;
  D Uunique_Plimited_list_restF6;
  D T7;
  D Uunique_limited_list_firstF8;
  D T9;
  D Uunique_Plimited_list_restF10;
  D T11_0;
  D T12;
  _KLsimple_object_vectorGVKd_1 T13 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T12 = primitive_idQ(Uunique_Plimited_list_rest_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  if (T12 != &KPfalseVKi) {
    T13.vector_element_[0] = IKJrest_;
    T14 = KerrorVKdMM1I(&K167, &T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    T5 = T14;
    Uunique_Plimited_list_restF6 = T5;
  } else {
    Uunique_Plimited_list_restF6 = Uunique_Plimited_list_rest_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T15 = primitive_idQ(Uunique_limited_list_first_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  if (T15 != &KPfalseVKi) {
    T16.vector_element_[0] = IKJfirst_;
    T17 = KerrorVKdMM1I(&K167, &T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
    T7 = T17;
    Uunique_limited_list_firstF8 = T7;
  } else {
    Uunique_limited_list_firstF8 = Uunique_limited_list_first_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T9 = primitive_object_allocate_filled(3,&Knon_empty_Lsimple_object_listGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_Plimited_list_restF10 = Uunique_Plimited_list_restF6;
  SLOT_VALUE_SETTER(Uunique_Plimited_list_restF10, T9, 0);
  SLOT_VALUE_SETTER(Uunique_limited_list_firstF8, T9, 1);
  T11_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T11_0);
}

D Klimited_list_next_stateVKiI (D collection_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:235
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:238
  CONGRUENT_CALL_PROLOG(&Klimited_list_restVKe, 1);
  T2_0 = CONGRUENT_CALL1(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:235
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_list_finished_stateQVKiI (D collection_, D state_, D limit_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:241
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:244
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T3_0 = CONGRUENT_CALL1(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:241
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_current_keyVKiI (D collection_, D state_) {
  D T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D lF9T, lF9;
  DWORD kF10T, kF10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
  lF9T = collection_;
  kF10T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
    lF9 = lF9T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
    kF10 = kF10T;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
    T11 = primitive_cast_raw_as_integer(kF10);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:257
    T6 = primitive_idQ(lF9,state_);
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:257
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:258
      T3 = T11;
      MV_SET_ELT(0, T11);
      MV_SET_COUNT(1);
      T5 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
      CONGRUENT_CALL_PROLOG(&Klimited_list_restVKe, 1);
      T4 = CONGRUENT_CALL1(lF9);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
      T7 = primitive_machine_word_add_signal_overflow(kF10,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
      lF9T = T4;
      kF10T = T7;
      goto L0;
      T5 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:257
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:253
  return(T5);
}

D Klimited_list_current_elementVKiI (D collection_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:265
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:267
  CONGRUENT_CALL_PROLOG(&Klimited_list_firstVKe, 1);
  T2_0 = CONGRUENT_CALL1(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:265
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_list_current_element_setterVKiI (D new_value_, D collection_, D state_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:270
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:273
  CONGRUENT_CALL_PROLOG(&Klimited_list_first_setterVKe, 2);
  CONGRUENT_CALL2(new_value_, state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:273
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:270
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_copy_stateVKiI (D collection_, D state_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:247
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:250
  T2_0 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:247
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_list_restVKeMM0I (D l_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T4 = SLOT_VALUE_INITD(l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_restVKeMM1I (D l_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T4 = SLOT_VALUE_INITD(l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_restVKeMM2I (D l_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T4 = SLOT_VALUE_INITD(l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsimple_object_listG_next_stateVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T5 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_object_listG_current_elementVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_object_listG_current_element_setterVKiI (D e_, D collection_, D state_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  SLOT_VALUE_SETTER(e_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T4_0 = e_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_class_listG_next_stateVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T5 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_class_listG_current_elementVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_class_listG_current_element_setterVKiI (D e_, D collection_, D state_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  SLOT_VALUE_SETTER(e_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T4_0 = e_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_method_listG_next_stateVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T5 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_method_listG_current_elementVKiI (D collection_, D state_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_method_listG_current_element_setterVKiI (D e_, D collection_, D state_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3 = state_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  SLOT_VALUE_SETTER(e_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T4_0 = e_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLempty_limited_listGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:59
  T3 = primitive_object_allocate_filled(1,&KLempty_limited_listGVKeW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:59
  MV_SET_COUNT(1);
  return(T4_0);
}

D Klimited_list_rest_setterVKeMM0I (D rest_, D l_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  SLOT_VALUE_SETTER(rest_, l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T3_0 = rest_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_rest_setterVKeMM1I (D rest_, D l_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  SLOT_VALUE_SETTER(rest_, l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T3_0 = rest_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_list_rest_setterVKeMM2I (D rest_, D l_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  SLOT_VALUE_SETTER(rest_, l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T3_0 = rest_;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klimited_listVKeMM0I (D type_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2_0 = &KLsimple_object_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_listVKeMM1I (D type_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2_0 = &KLsimple_class_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_listVKeMM2I (D type_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2_0 = &KLsimple_method_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klimited_listVKeMM3I (D type_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:424
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:426
  T2_0 = &KLsimple_object_listGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:424
  MV_SET_COUNT(1);
  return(T2_0);
}

D KrestVKeMM0I (D list_) {
  D T2_0;
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:219
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:221
  T5 = primitive_instanceQ(list_,&KLnon_empty_limited_listGVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:221
  if (T5 != &KPfalseVKi) {
    T4 = list_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:222
    CONGRUENT_CALL_PROLOG(&Klimited_list_restVKe, 1);
    T2_0 = CONGRUENT_CALL1(T4);
    T3_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:224
    T6.vector_element_[0] = list_;
    // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:224
    T7_0 = KerrorVKdMM1I(&K454, &T6);
    T3_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:221
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:219
  MV_SET_COUNT(1);
  return(T3_0);
}

D KrestVKeMM1I (D sequence_) {
  D T2_0;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:228
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:230
  T3 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:230
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:228
  T2_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:228
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_limited_list_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfirst_);
    if (T0 != &KJfirst_) {
      IKJfirst_ = T0;
      primitive_slot_value_setter(T0, &Klimited_list_firstVKeHnon_empty_Lsimple_object_listG, 3);
      primitive_repeated_slot_value_setter(T0, &K191, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K190, 1, 2);
      primitive_slot_value_setter(T0, &Klimited_list_firstVKeHnon_empty_Lsimple_class_listG, 3);
      primitive_slot_value_setter(T0, &Klimited_list_firstVKeHnon_empty_Lsimple_method_listG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJrest_);
    if (T0 != &KJrest_) {
      IKJrest_ = T0;
      primitive_repeated_slot_value_setter(T0, &K191, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K190, 1, 0);
      primitive_slot_value_setter(T0, &KPlimited_list_restVKiHLnon_empty_limited_listG, 3);
      primitive_repeated_slot_value_setter(T0, &K170, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K169, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_limited_list_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T2_0 = Kempty_Lsimple_object_listGZ32ZconstructorVKiMM0I(&Kempty_Lsimple_object_listGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  Dempty_Lsimple_object_listGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:420
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T2_0 = Kempty_Lsimple_class_listGZ32ZconstructorVKiMM0I(&Kempty_Lsimple_class_listGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  Dempty_Lsimple_class_listGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:421
  T0 = &KPfalseVKi;
  goto I4;
}
I4:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T2_0 = Kempty_Lsimple_method_listGZ32ZconstructorVKiMM0I(&Kempty_Lsimple_method_listGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  Dempty_Lsimple_method_listGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-list.dylan:422
  T0 = &KPfalseVKi;
  goto I8;
}
I8:

  return;
}


/* eof */
