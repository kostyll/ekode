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
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(61);
define__KLbyte_stringGVKd(58);
define__KLbyte_stringGVKd(74);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(60);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(0);

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
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLeach_subclass_slot_descriptorGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLclass_slot_descriptorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLvirtual_slot_descriptorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLany_class_slot_descriptorGVKe;

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

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
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
} _KLslot_initial_value_descriptorGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
} _KLslot_keyword_initialization_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLslot_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLany_instance_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_errorGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_accessor_methodGVKe;

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
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLaccessor_methodGVKe;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
  D size_slot_descriptor_;
} _KLrepeated_slot_descriptorGVKe;

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
  D slot_type_error_slot_descriptor_;
} _KLslot_type_errorGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_getter_methodGVKi;

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
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_slot_errorGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLconstant_slot_descriptorGVKi;

typedef struct {
  D wrapper;
} _KLslot_errorGVKi;


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
extern _KLsimple_methodGVKe Kslot_allocationVKeMM4;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kslot_allocationVKeMM5;
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
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lslot_descriptorG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsymbolGVKd KJrepeated_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lrepeated_slot_descriptorG_typesVKi;
extern _KLsymbolGVKd KJeach_subclass_;
extern _KLclassGVKd KLeach_subclass_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLeach_subclass_slot_descriptorGVKiW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLclass_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLclass_slot_descriptorGVKiW;
extern _KLsymbolGVKd KJconstant_;
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM2;
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM3;
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM4;
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM5;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLvirtual_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLvirtual_slot_descriptorGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJvirtual_;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
D KEEVKdI (D, D);
extern _KLclassGVKd KLany_class_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_class_slot_descriptorGVKeW;
D Keffective_initial_value_descriptorVKiI (D descriptor_, D iclass_);
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLslot_initial_value_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLslot_initial_value_descriptorGVKiW;
extern _KLclassGVKd KLslot_keyword_initialization_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_keyword_initialization_descriptorGVKeW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLclassGVKd KLany_instance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_instance_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJowner_;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJinit_data_;
extern _KLsymbolGVKd KJinit_keyword_;
extern _KLsymbolGVKd KJgetter_;
extern _KLsymbolGVKd KJsetter_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kslot_descriptor_propertiesVKiHLslot_initial_value_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kinit_data_slotVKeHLslot_initial_value_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kslot_ownerVKeHLslot_initial_value_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kinit_keywordVKeHLslot_keyword_initialization_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kslot_getterVKeHLslot_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kslot_setterVKeHLslot_descriptorG;
extern _KLinstance_slot_descriptorGVKe Kslot_typeVKeHLslot_descriptorG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_errorGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
extern _KLclassGVKd KLrepeated_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_accessor_methodGVKeW;
extern _KLclassGVKd KLsetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsetter_accessor_methodGVKeW;
D KPmethod_specializerVKgI (D, D);
extern _KLsealed_generic_functionGVKe Ksignature_valuesVKi;
extern _KLsealed_generic_functionGVKe Ksignature_rest_valueVKi;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLaccessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLaccessor_methodGVKeW;
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
D Krecompute_type_completeXVKiMM0I (D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
D Kreduce_incomplete_classesVKiMM10I (D f_, D t_, D ans_);
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM0;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KlistVKdI (D);
D KerrorVKdMM0I (D, D);
D Kobject_classVKdI (D);
extern _KLsealed_generic_functionGVKe Kslot_getterVKe;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJstorage_size_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsymbolGVKd KJinit_keyword_requiredQ_;
extern _KLsymbolGVKd KJinit_suppliedQ_;
extern _KLsymbolGVKd KJinit_valueQ_;
extern _KLsymbolGVKd KJinit_evaluatedQ_;
D Ktype_check_errorVKiI (D, D);
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJslot_descriptor_;
extern _KLclassGVKd KLslot_type_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_type_errorGVKeW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;
extern D Dslot_initial_data_lockVKi;
extern D Drequired_argument_countVKi;
extern D Drequired_argument_typeVKi;
extern D Dnot_both_keywordVKi;
extern D Dnot_both_variableVKi;
extern D Drequired_values_count_too_smallVKi;
extern D Drequired_values_typeVKi;
extern D Ddirect_object_mm_wrappersVKi;

/* Defined object declarations */

extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM3;
D Kinitialize_packed_slotsVKeMM3I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM4;
D Kinitialize_packed_slotsVKeMM4I (D, D, D);
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM5;
D Kinitialize_packed_slotsVKeMM5I (D, D, D, D);
D Kslot_offset_iVKeI (D, D);
D Kslot_descriptorVKiMM0I (D, D);
extern _KLincremental_generic_functionGVKe Kslot_initializedQVKd;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM8;
D Kmap_congruency_classesVKiMM8I (D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM9;
D Kreduce_incomplete_classesVKiMM9I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM6;
D Ktype_completeQVKeMM6I (D);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM4;
D Krecompute_type_completeXVKiMM4I (D);
D Klazy_subtypeQVKiMM0I (D, D);
extern _KLsimple_methodGVKe KcongruentQVKiMM2;
D KcongruentQVKiMM2I (D, D);
D Kfunction_number_requiredVKiMM2I (D);
extern _KLclassGVKd KLsimple_slot_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_slot_errorGVKiW;
D Kinit_keyword_requiredQ_setterVKiMM0I (D, D);
D Kinit_evaluatedQ_setterVKiMM0I (D, D);
D Kinit_suppliedQ_setterVKiMM0I (D, D);
D Kinit_valueQ_setterVKiMM0I (D, D);
extern _KLclassGVKd KLconstant_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLconstant_slot_descriptorGVKiW;
D Kfind_or_create_class_slot_storageVKiI (D, D, D);
D KgetterEVKiMM0I (D, D);
extern _KLsealed_generic_functionGVKe Kas_slot_descriptor_classVKi;
extern _KLsealed_generic_functionGVKe Kslot_allocationVKe;
D Kfunction_number_requiredVKiMM1I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM0;
D Kslot_allocationVKeMM0I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM1;
D Kslot_allocationVKeMM1I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM2;
D Kslot_allocationVKeMM2I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM3;
D Kslot_allocationVKeMM3I (D);
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLsignatureAvaluesGVKi K48;
static _KLbyte_stringGVKd_15 K49;
static _KLsimple_object_vectorGVKd_1 K50;
static _KLsignatureAvaluesGVKi K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_1 K53;
static _KLsignatureAvaluesGVKi K54;
static _KLsimple_object_vectorGVKd_1 K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_1 K57;
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM0;
D Kas_slot_descriptor_classVKiMM0I (D);
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM1;
D Kas_slot_descriptor_classVKiMM1I (D);
static _KLpairGVKd K62;
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLbyte_stringGVKd_24 K68;
static _KLsignatureGVKe K69;
static _KLsimple_object_vectorGVKd_1 K70;
static _KLsingletonGVKd K71;
static _KLsignatureGVKe K72;
static _KLsimple_object_vectorGVKd_1 K73;
static _KLsingletonGVKd K74;
static _KLsymbolGVKd KJinstance_;
static _KLbyte_stringGVKd_8 K76;
static _KLimplementation_classGVKe K77;
static _KLsimple_object_vectorGVKd_7 K78;
extern _KLkeyword_methodGVKe KLconstant_slot_descriptorGZ32ZconstructorVKiMM0;
D KLconstant_slot_descriptorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K81;
static _KLsimple_object_vectorGVKd_6 K82;
static _KLbyte_stringGVKd_23 K83;
static _KLkeyword_signatureAvaluesGVKi K84;
static _KLsimple_object_vectorGVKd_12 K85;
static _KLsimple_object_vectorGVKd_6 K86;
static _KLbyte_stringGVKd_26 K87;
static _KLimplementation_classGVKe K88;
static _KLsimple_object_vectorGVKd_2 K89;
extern _KLkeyword_methodGVKe KLsimple_slot_errorGZ32ZconstructorVKiMM0;
D KLsimple_slot_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K92;
static _KLsimple_object_vectorGVKd_8 K93;
extern _KLclassGVKd KLslot_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLslot_errorGVKiW;
static _KLimplementation_classGVKe K96;
static _KLsimple_object_vectorGVKd_1 K97;
static _KLsimple_object_vectorGVKd_6 K98;
static _KLsimple_object_vectorGVKd_1 K99;
static _KLsimple_object_vectorGVKd_2 K100;
static _KLbyte_stringGVKd_12 K101;
static _KLkeyword_signatureAvaluesGVKi K102;
static _KLsimple_object_vectorGVKd_4 K103;
static _KLsimple_object_vectorGVKd_2 K104;
static _KLsimple_object_vectorGVKd_1 K105;
static _KLbyte_stringGVKd_19 K106;
static _KLsimple_closure_methodGVKi_0 KfailF111;
static D KfailF111I (D);
static _KLsymbolGVKd KJcongruent_;
static _KLbyte_stringGVKd_9 K110;
static _KLsignatureAvaluesGVKi K112;
static _KLsimple_object_vectorGVKd_2 K113;
static _KLsimple_object_vectorGVKd_2 K114;
static _KLsignatureAvaluesGVKi K115;
static _KLsimple_object_vectorGVKd_1 K116;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117;
static _KLsignatureGVKe K118;
static _KLsimple_object_vectorGVKd_3 K119;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K120;
static _KLsignatureGVKe K121;
static _KLsimple_object_vectorGVKd_2 K122;
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM1;
D Kslot_initializedQVKdMM1I (D, D);
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM2;
D Kslot_initializedQVKdMM2I (D, D);
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM3;
D Kslot_initializedQVKdMM3I (D, D);
extern _KLsimple_methodGVKe Kslot_initializedQVKdMM4;
D Kslot_initializedQVKdMM4I (D, D);
static _KLpairGVKd K131;
static _KLpairGVKd K132;
static _KLpairGVKd K133;
static _KLpairGVKd K134;
static _KLpairGVKd K135;
static _KLsignatureAvaluesGVKi K136;
static _KLbyte_stringGVKd_17 K137;
static _KLsimple_object_vectorGVKd_2 K138;
static _KLunionGVKe K139;
static _KLsignatureAvaluesGVKi K140;
static _KLsimple_object_vectorGVKd_2 K141;
static _KLsignatureAvaluesGVKi K142;
static _KLsimple_object_vectorGVKd_2 K143;
static _KLbyte_stringGVKd_60 K144;
static _KLsignatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_2 K146;
static _KLsignatureAvaluesGVKi K147;
static _KLsimple_object_vectorGVKd_2 K148;
static _KLbyte_stringGVKd_40 K149;
static _KLbyte_stringGVKd_15 K150;
D Kslot_storage_size_setterVKiMM0I (D, D);
D Kslot_method_sealedQ_setterVKiMM0I (D, D);
static _KLkeyword_signatureGVKe K153;
static _KLsimple_object_vectorGVKd_4 K154;
static _KLsymbolGVKd KJslot_method_sealedQ_;
static _KLbyte_stringGVKd_19 K156;
static _KLsimple_object_vectorGVKd_2 K157;
static _KLkeyword_signatureGVKe K158;
static _KLsimple_object_vectorGVKd_2 K159;
static _KLsimple_object_vectorGVKd_1 K160;
static _KLsimple_object_vectorGVKd_1 K161;
static _KLkeyword_signatureGVKe K162;
static _KLsimple_object_vectorGVKd_6 K163;
static _KLsimple_object_vectorGVKd_1 K164;
static _KLsimple_object_vectorGVKd_3 K165;
extern _KLsimple_methodGVKe KPslotacc_repeated_instance_setterVKi;
D KPslotacc_repeated_instance_setterVKiI (D, D, D, D);
D Kslot_value_setterVKeMM0I (D, D, D);
static _KLbyte_stringGVKd_74 K169;
static _KLsignatureGVKe K170;
static _KLsimple_object_vectorGVKd_4 K171;
extern _KLsimple_methodGVKe KPslotacc_repeated_instance_getterVKi;
D KPslotacc_repeated_instance_getterVKiI (D, D, D);
D Kslot_valueVKeMM0I (D, D);
static _KLbyte_stringGVKd_58 K175;
static _KLsignatureGVKe K176;
static _KLsimple_object_vectorGVKd_3 K177;
extern _KLsimple_methodGVKe KPslotacc_single_q_class_setterVKi;
D KPslotacc_single_q_class_setterVKiI (D, D, D);
D Kslot_value_setterVKeMM1I (D, D, D);
static _KLbyte_stringGVKd_61 K181;
static _KLsignatureGVKe K182;
static _KLsimple_object_vectorGVKd_3 K183;
extern _KLsimple_methodGVKe KPslotacc_single_q_class_getterVKi;
D KPslotacc_single_q_class_getterVKiI (D, D);
D Kslot_valueVKeMM1I (D, D);
static _KLbyte_stringGVKd_45 K187;
static _KLsignatureGVKe K188;
static _KLsimple_object_vectorGVKd_2 K189;
extern _KLsimple_methodGVKe KPslotacc_single_q_instance_setterVKi;
D KPslotacc_single_q_instance_setterVKiI (D, D, D);
extern _KLsimple_methodGVKe KPslotacc_single_q_instance_getterVKi;
D KPslotacc_single_q_instance_getterVKiI (D, D);
extern _KLsimple_methodGVKe Kslot_offsetVKe;
D Kslot_offsetVKeI (D sd_, D c_);
static _KLsignatureGVKe K196;
static _KLsimple_object_vectorGVKd_2 K197;
extern _KLsimple_methodGVKe Kslot_offset_iVKe;
static _KLsignatureGVKe K199;
static _KLsimple_object_vectorGVKd_2 K200;
extern _KLsealed_generic_functionGVKe Krepeated_slot_value_setterVKe;
extern _KLsimple_methodGVKe Krepeated_slot_value_setterVKeMM0;
D Krepeated_slot_value_setterVKeMM0I (D, D, D, D);
static _KLpairGVKd K204;
static _KLsignatureGVKe K205;
static _KLbyte_stringGVKd_26 K206;
static _KLsimple_object_vectorGVKd_4 K207;
D Krepeated_byte_slotQVKiMM0I (D);
static _KLsignatureGVKe K209;
static _KLsimple_object_vectorGVKd_4 K210;
extern _KLsealed_generic_functionGVKe Krepeated_slot_valueVKe;
extern _KLsimple_methodGVKe Krepeated_slot_valueVKeMM0;
D Krepeated_slot_valueVKeMM0I (D, D, D);
static _KLpairGVKd K214;
static _KLsignatureGVKe K215;
static _KLbyte_stringGVKd_19 K216;
static _KLsimple_object_vectorGVKd_3 K217;
static _KLsignatureGVKe K218;
static _KLsimple_object_vectorGVKd_3 K219;
extern _KLsealed_generic_functionGVKe Kslot_value_setterVKe;
extern _KLsimple_methodGVKe Kslot_value_setterVKeMM0;
extern _KLsimple_methodGVKe Kslot_value_setterVKeMM1;
extern _KLsimple_methodGVKe Kslot_value_setterVKeMM2;
D Kslot_value_setterVKeMM2I (D, D, D);
extern _KLsimple_methodGVKe Kslot_value_setterVKeMM3;
D Kslot_value_setterVKeMM3I (D, D, D);
static _KLpairGVKd K227;
static _KLpairGVKd K228;
static _KLpairGVKd K229;
static _KLpairGVKd K230;
static _KLsignatureGVKe K231;
static _KLbyte_stringGVKd_17 K232;
static _KLsignatureGVKe K233;
static _KLsimple_object_vectorGVKd_3 K234;
static _KLbyte_stringGVKd_47 K235;
static _KLsignatureGVKe K236;
static _KLsimple_object_vectorGVKd_3 K237;
static _KLsignatureGVKe K238;
static _KLsimple_object_vectorGVKd_3 K239;
static _KLsignatureGVKe K240;
static _KLsimple_object_vectorGVKd_3 K241;
extern _KLsealed_generic_functionGVKe Kslot_valueVKe;
extern _KLsimple_methodGVKe Kslot_valueVKeMM0;
extern _KLsimple_methodGVKe Kslot_valueVKeMM1;
extern _KLsimple_methodGVKe Kslot_valueVKeMM2;
D Kslot_valueVKeMM2I (D, D);
static _KLpairGVKd K247;
static _KLpairGVKd K248;
static _KLpairGVKd K249;
static _KLsignatureGVKe K250;
static _KLbyte_stringGVKd_10 K251;
static _KLsimple_object_vectorGVKd_2 K252;
static _KLsignatureGVKe K253;
static _KLsignatureGVKe K254;
static _KLsignatureGVKe K255;
extern _KLsimple_methodGVKe Kinit_keyword_requiredQVKeMM0;
D Kinit_keyword_requiredQVKeMM0I (D x_);
static _KLsignatureAvaluesGVKi K258;
extern _KLsimple_methodGVKe Kslot_storage_sizeVKeMM0;
D Kslot_storage_sizeVKeMM0I (D x_);
static _KLsignatureAvaluesGVKi K261;
static _KLpairGVKd K262;

/* Indirection variables */

static D IKJinstance_ = &KJinstance_;
static D IKJcongruent_ = &KJcongruent_;
static D IKJslot_method_sealedQ_ = &KJslot_method_sealedQ_;

/* Variables */

D slot_storage_sizeVKe = &Kslot_storage_sizeVKeMM0;
D init_keyword_requiredQVKe = &Kinit_keyword_requiredQVKeMM0;
D slot_allocationVKe = &Kslot_allocationVKe;
D slot_initializedQVKd = &Kslot_initializedQVKd;
D slot_valueVKe = &Kslot_valueVKe;
D slot_value_setterVKe = &Kslot_value_setterVKe;
D repeated_slot_valueVKe = &Krepeated_slot_valueVKe;
D repeated_slot_value_setterVKe = &Krepeated_slot_value_setterVKe;
D as_slot_descriptor_classVKi = &Kas_slot_descriptor_classVKi;
D Lslot_errorGVKi = &KLslot_errorGVKi;
D Lsimple_slot_errorGVKi = &KLsimple_slot_errorGVKi;
D Lconstant_slot_descriptorGVKi = &KLconstant_slot_descriptorGVKi;
D slot_offset_iVKe = &Kslot_offset_iVKe;
D slot_offsetVKe = &Kslot_offsetVKe;
D Pslotacc_single_q_instance_getterVKi = &KPslotacc_single_q_instance_getterVKi;
D Pslotacc_single_q_instance_setterVKi = &KPslotacc_single_q_instance_setterVKi;
D Pslotacc_single_q_class_getterVKi = &KPslotacc_single_q_class_getterVKi;
D Pslotacc_single_q_class_setterVKi = &KPslotacc_single_q_class_setterVKi;
D Pslotacc_repeated_instance_getterVKi = &KPslotacc_repeated_instance_getterVKi;
D Pslotacc_repeated_instance_setterVKi = &KPslotacc_repeated_instance_setterVKi;

/* Objects */

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K162,
  &key_mep_5,
  &Kinitialize_packed_slotsVKeMM3I,
  &K163
};

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K158,
  &key_mep_3,
  &Kinitialize_packed_slotsVKeMM4I,
  &K159
};

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K153,
  &key_mep_4,
  &Kinitialize_packed_slotsVKeMM5I,
  &K154
};

_KLincremental_generic_functionGVKe Kslot_initializedQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K136,
  (D) 1,
  &K137,
  &K131,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K121,
  &Kmap_congruency_classesVKiMM8I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K118,
  &Kreduce_incomplete_classesVKiMM9I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K115,
  &Ktype_completeQVKeMM6I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K115,
  &Krecompute_type_completeXVKiMM4I
};

_KLsimple_methodGVKe KcongruentQVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K112,
  &KcongruentQVKiMM2I
};

_KLclassGVKd KLsimple_slot_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K106,
  &K88,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_slot_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K88,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLconstant_slot_descriptorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K87,
  &K77,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLconstant_slot_descriptorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K77,
  (D) 1,
  29,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kas_slot_descriptor_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K68,
  &K62,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kslot_allocationVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K48,
  (D) 1,
  &K49,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kslot_allocationVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &Kslot_allocationVKeMM0I
};

_KLsimple_methodGVKe Kslot_allocationVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K54,
  &Kslot_allocationVKeMM1I
};

_KLsimple_methodGVKe Kslot_allocationVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K52,
  &Kslot_allocationVKeMM2I
};

_KLsimple_methodGVKe Kslot_allocationVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K51,
  &Kslot_allocationVKeMM3I
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM0,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM1,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM2,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM3,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM4,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_allocationVKeMM5,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lslot_descriptorG_typesVKi,
  &K50
};

static _KLbyte_stringGVKd_15 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "slot-allocation"
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsignatureAvaluesGVKi K51 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lrepeated_slot_descriptorG_typesVKi,
  &K50
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K53,
  &K50
};

static _KLsimple_object_vectorGVKd_1 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLeach_subclass_slot_descriptorGVKi
};

static _KLsignatureAvaluesGVKi K54 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K55,
  &K50
};

static _KLsimple_object_vectorGVKd_1 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLclass_slot_descriptorGVKi
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K57,
  &K50
};

static _KLsimple_object_vectorGVKd_1 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconstant_slot_descriptorGVKi
};

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K72,
  &Kas_slot_descriptor_classVKiMM0I
};

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K69,
  &Kas_slot_descriptor_classVKiMM1I
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM0,
  &K63
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM1,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM2,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM3,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM4,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_slot_descriptor_classVKiMM5,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "as-slot-descriptor-class"
};

static _KLsignatureGVKe K69 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K70
};

static _KLsimple_object_vectorGVKd_1 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K71
};

static _KLsingletonGVKd K71 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJvirtual_
};

static _KLsignatureGVKe K72 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K73
};

static _KLsimple_object_vectorGVKd_1 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K74
};

static _KLsingletonGVKd K74 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJinstance_
};

static _KLsymbolGVKd KJinstance_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K76
};

static _KLbyte_stringGVKd_8 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "instance"
};

static _KLimplementation_classGVKe K77 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102109,
  &KLconstant_slot_descriptorGVKi,
  &KLconstant_slot_descriptorGVKiW,
  &KPfalseVKi,
  &K78,
  (D) 6993,
  &KLconstant_slot_descriptorGZ32ZconstructorVKiMM0,
  &K81,
  &K82,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K78,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &Kslot_descriptor_propertiesVKiHLslot_initial_value_descriptorG,
  &Kinit_data_slotVKeHLslot_initial_value_descriptorG,
  &Kslot_ownerVKeHLslot_initial_value_descriptorG,
  &Kinit_keywordVKeHLslot_keyword_initialization_descriptorG,
  &Kslot_getterVKeHLslot_descriptorG,
  &Kslot_setterVKeHLslot_descriptorG,
  &Kslot_typeVKeHLslot_descriptorG
};

_KLkeyword_methodGVKe KLconstant_slot_descriptorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K84,
  &key_mep_2,
  &KLconstant_slot_descriptorGZ32ZconstructorVKiMM0I,
  &K85
};

static _KLsimple_object_vectorGVKd_1 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLany_instance_slot_descriptorGVKe
};

static _KLsimple_object_vectorGVKd_6 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLslot_initial_value_descriptorGVKi,
  &KLslot_keyword_initialization_descriptorGVKe,
  &KLslot_descriptorGVKe,
  &KLany_instance_slot_descriptorGVKe,
  &KLconstant_slot_descriptorGVKi
};

static _KLbyte_stringGVKd_23 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K84 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K86,
  &KDsignature_LobjectG_typesVKi,
  &K57
};

static _KLsimple_object_vectorGVKd_12 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJinit_data_,
  &KPfalseVKi,
  &KJowner_,
  &KPunboundVKi,
  &KJinit_keyword_,
  &KPfalseVKi,
  &KJgetter_,
  &KPfalseVKi,
  &KJsetter_,
  &KPfalseVKi,
  &KJtype_,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJinit_data_,
  &KJowner_,
  &KJinit_keyword_,
  &KJgetter_,
  &KJsetter_,
  &KJtype_
};

static _KLbyte_stringGVKd_26 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<constant-slot-descriptor>"
};

static _KLimplementation_classGVKe K88 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLsimple_slot_errorGVKi,
  &KLsimple_slot_errorGVKiW,
  &KPfalseVKi,
  &K89,
  (D) 6985,
  &KLsimple_slot_errorGZ32ZconstructorVKiMM0,
  &K92,
  &K93,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K89,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLsimple_slot_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K102,
  &key_mep_2,
  &KLsimple_slot_errorGZ32ZconstructorVKiMM0I,
  &K103
};

static _KLsimple_object_vectorGVKd_2 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLslot_errorGVKi,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_8 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLslot_errorGVKi,
  &KLsimple_slot_errorGVKi
};

_KLclassGVKd KLslot_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K101,
  &K96,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLslot_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K96,
  (D) 2049,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K96 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255361,
  &KLslot_errorGVKi,
  &KLslot_errorGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6977,
  &Kdefault_class_constructorVKi,
  &K97,
  &K98,
  (D) 17,
  &K99,
  &K100,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K262,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_6 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLslot_errorGVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 25
};

static _KLsimple_object_vectorGVKd_2 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_conditionGVKe,
  &KLsimple_errorGVKd
};

static _KLbyte_stringGVKd_12 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "<slot-error>"
};

static _KLkeyword_signatureAvaluesGVKi K102 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K104,
  &KDsignature_LobjectG_typesVKi,
  &K105
};

static _KLsimple_object_vectorGVKd_4 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_slot_errorGVKi
};

static _KLbyte_stringGVKd_19 K106 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<simple-slot-error>"
};

static _KLsimple_closure_methodGVKi_0 KfailF111 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KfailF111I,
  (D) 1
};

static _KLsymbolGVKd KJcongruent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K110
};

static _KLbyte_stringGVKd_9 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "congruent"
};

static _KLsignatureAvaluesGVKi K112 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K113,
  &K114
};

static _KLsimple_object_vectorGVKd_2 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLaccessor_methodGVKe
};

static _KLsimple_object_vectorGVKd_2 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K115 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K116,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLaccessor_methodGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K118 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K119
};

static _KLsimple_object_vectorGVKd_3 K119 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLaccessor_methodGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K120 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K121 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K122
};

static _KLsimple_object_vectorGVKd_2 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLaccessor_methodGVKe
};

_KLsimple_methodGVKe Kslot_initializedQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K147,
  &Kslot_initializedQVKdMM1I
};

_KLsimple_methodGVKe Kslot_initializedQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K145,
  &Kslot_initializedQVKdMM2I
};

_KLsimple_methodGVKe Kslot_initializedQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K142,
  &Kslot_initializedQVKdMM3I
};

_KLsimple_methodGVKe Kslot_initializedQVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K140,
  &Kslot_initializedQVKdMM4I
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_initializedQVKdMM0,
  &K132
};

static _KLpairGVKd K132 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_initializedQVKdMM1,
  &K133
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_initializedQVKdMM2,
  &K134
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_initializedQVKdMM3,
  &K135
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_initializedQVKdMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K136 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K138,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_17 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "slot-initialized?"
};

static _KLsimple_object_vectorGVKd_2 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &K139
};

static _KLunionGVKe K139 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLslot_descriptorGVKe,
  &KLfunctionGVKd
};

static _KLsignatureAvaluesGVKi K140 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K141,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K141 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLvirtual_slot_descriptorGVKi
};

static _KLsignatureAvaluesGVKi K142 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K143,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K143 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLconstant_slot_descriptorGVKi
};

static _KLbyte_stringGVKd_60 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 241,
  "The Slot-Descriptor %= is missing from class %= of object %="
};

static _KLsignatureAvaluesGVKi K145 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K146,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLany_class_slot_descriptorGVKe
};

static _KLsignatureAvaluesGVKi K147 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K148,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLany_instance_slot_descriptorGVKe
};

static _KLbyte_stringGVKd_40 K149 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "Unanticipated type of slot descriptor %="
};

static _KLbyte_stringGVKd_15 K150 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K153 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &KDsignature_Lslot_descriptorG_typesVKi,
  &K157,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstorage_size_,
  (D) 5,
  &KJslot_method_sealedQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJslot_method_sealedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K156
};

static _KLbyte_stringGVKd_19 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "slot-method-sealed?"
};

static _KLsimple_object_vectorGVKd_2 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstorage_size_,
  &KJslot_method_sealedQ_
};

static _KLkeyword_signatureGVKe K158 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &K160,
  &K161,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K159 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJinit_keyword_requiredQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_keyword_initialization_descriptorGVKe
};

static _KLsimple_object_vectorGVKd_1 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJinit_keyword_requiredQ_
};

static _KLkeyword_signatureGVKe K162 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &K164,
  &K165,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJinit_suppliedQ_,
  &KPfalseVKi,
  &KJinit_valueQ_,
  &KPfalseVKi,
  &KJinit_evaluatedQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_initial_value_descriptorGVKi
};

static _KLsimple_object_vectorGVKd_3 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJinit_suppliedQ_,
  &KJinit_valueQ_,
  &KJinit_evaluatedQ_
};

_KLsimple_methodGVKe KPslotacc_repeated_instance_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K170,
  &KPslotacc_repeated_instance_setterVKiI
};

static _KLbyte_stringGVKd_74 K169 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 297,
  "slot-value-setter Slot-Descriptor %= is missing from class %= of object %="
};

static _KLsignatureGVKe K170 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K171
};

static _KLsimple_object_vectorGVKd_4 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLrepeated_setter_methodGVKi,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPslotacc_repeated_instance_getterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K176,
  &KPslotacc_repeated_instance_getterVKiI
};

static _KLbyte_stringGVKd_58 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 233,
  "The Slot-Descriptor %= is unbound in class %= of object %="
};

static _KLsignatureGVKe K176 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K177
};

static _KLsimple_object_vectorGVKd_3 K177 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLrepeated_getter_methodGVKi,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPslotacc_single_q_class_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K182,
  &KPslotacc_single_q_class_setterVKiI
};

static _KLbyte_stringGVKd_61 K181 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 245,
  "slot-value-setter Slot-Descriptor %= is missing from class %="
};

static _KLsignatureGVKe K182 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K183
};

static _KLsimple_object_vectorGVKd_3 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsetter_methodGVKi,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPslotacc_single_q_class_getterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K188,
  &KPslotacc_single_q_class_getterVKiI
};

static _KLbyte_stringGVKd_45 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "The Slot-Descriptor %= is unbound in class %="
};

static _KLsignatureGVKe K188 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K189
};

static _KLsimple_object_vectorGVKd_2 K189 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgetter_methodGVKi,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPslotacc_single_q_instance_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K182,
  &KPslotacc_single_q_instance_setterVKiI
};

_KLsimple_methodGVKe KPslotacc_single_q_instance_getterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K188,
  &KPslotacc_single_q_instance_getterVKiI
};

_KLsimple_methodGVKe Kslot_offsetVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K196,
  &Kslot_offsetVKeI
};

static _KLsignatureGVKe K196 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K197
};

static _KLsimple_object_vectorGVKd_2 K197 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLslot_descriptorGVKe,
  &KLclassGVKd
};

_KLsimple_methodGVKe Kslot_offset_iVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K199,
  &Kslot_offset_iVKeI
};

static _KLsignatureGVKe K199 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41945097,
  &K200
};

static _KLsimple_object_vectorGVKd_2 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLslot_descriptorGVKe,
  &KLimplementation_classGVKe
};

_KLsealed_generic_functionGVKe Krepeated_slot_value_setterVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K205,
  &KPfalseVKi,
  &K206,
  &K204,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Krepeated_slot_value_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K209,
  &Krepeated_slot_value_setterVKeMM0I
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &Krepeated_slot_value_setterVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K205 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K207
};

static _KLbyte_stringGVKd_26 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "repeated-slot-value-setter"
};

static _KLsimple_object_vectorGVKd_4 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLslot_descriptorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K209 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K210
};

static _KLsimple_object_vectorGVKd_4 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLrepeated_slot_descriptorGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krepeated_slot_valueVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K215,
  &KPfalseVKi,
  &K216,
  &K214,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Krepeated_slot_valueVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K218,
  &Krepeated_slot_valueVKeMM0I
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &Krepeated_slot_valueVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K215 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K217
};

static _KLbyte_stringGVKd_19 K216 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "repeated-slot-value"
};

static _KLsimple_object_vectorGVKd_3 K217 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLslot_descriptorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K218 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K219
};

static _KLsimple_object_vectorGVKd_3 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLrepeated_slot_descriptorGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kslot_value_setterVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K231,
  &KPfalseVKi,
  &K232,
  &K227,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kslot_value_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K240,
  &Kslot_value_setterVKeMM0I
};

_KLsimple_methodGVKe Kslot_value_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K238,
  &Kslot_value_setterVKeMM1I
};

_KLsimple_methodGVKe Kslot_value_setterVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K236,
  &Kslot_value_setterVKeMM2I
};

_KLsimple_methodGVKe Kslot_value_setterVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K233,
  &Kslot_value_setterVKeMM3I
};

static _KLpairGVKd K227 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_value_setterVKeMM0,
  &K228
};

static _KLpairGVKd K228 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_value_setterVKeMM1,
  &K229
};

static _KLpairGVKd K229 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_value_setterVKeMM2,
  &K230
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_value_setterVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K231 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_17 K232 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "slot-value-setter"
};

static _KLsignatureGVKe K233 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K234
};

static _KLsimple_object_vectorGVKd_3 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLvirtual_slot_descriptorGVKi
};

static _KLbyte_stringGVKd_47 K235 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Invalid to set the value of a constant slot %=."
};

static _KLsignatureGVKe K236 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K237
};

static _KLsimple_object_vectorGVKd_3 K237 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLconstant_slot_descriptorGVKi
};

static _KLsignatureGVKe K238 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K239
};

static _KLsimple_object_vectorGVKd_3 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLany_class_slot_descriptorGVKe
};

static _KLsignatureGVKe K240 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K241
};

static _KLsimple_object_vectorGVKd_3 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLany_instance_slot_descriptorGVKe
};

_KLsealed_generic_functionGVKe Kslot_valueVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K250,
  &KPfalseVKi,
  &K251,
  &K247,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kslot_valueVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K255,
  &Kslot_valueVKeMM0I
};

_KLsimple_methodGVKe Kslot_valueVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K254,
  &Kslot_valueVKeMM1I
};

_KLsimple_methodGVKe Kslot_valueVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K253,
  &Kslot_valueVKeMM2I
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_valueVKeMM0,
  &K248
};

static _KLpairGVKd K248 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_valueVKeMM1,
  &K249
};

static _KLpairGVKd K249 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_valueVKeMM2,
  &KPempty_listVKi
};

static _KLsignatureGVKe K250 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K252
};

static _KLbyte_stringGVKd_10 K251 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "slot-value"
};

static _KLsimple_object_vectorGVKd_2 K252 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLslot_descriptorGVKe
};

static _KLsignatureGVKe K253 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K141
};

static _KLsignatureGVKe K254 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K146
};

static _KLsignatureGVKe K255 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K148
};

_KLsimple_methodGVKe Kinit_keyword_requiredQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K258,
  &Kinit_keyword_requiredQVKeMM0I
};

static _KLsignatureAvaluesGVKi K258 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K160,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kslot_storage_sizeVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K261,
  &Kslot_storage_sizeVKeMM0I
};

static _KLsignatureAvaluesGVKi K261 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lslot_descriptorG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_slot_errorGVKi,
  &KPempty_listVKi
};

/* Code */

D Kinitialize_packed_slotsVKeMM3I (D x_, D all_keys_, D init_suppliedQ_, D init_valueQ_, D init_evaluatedQ_) {
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

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T10 = primitive_copy_vector(all_keys_);
  T9 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T11 = primitive_idQ(T9,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    KerrorVKdMM1I(&K150, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T12 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T13 = SLOT_VALUE_INITD(T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    MEP_CALL_PROLOG(T12, T13, 2);
    MEP_CALL2(T12, x_, T10);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T14 = primitive_idQ(init_suppliedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (T14 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:12
    Kinit_suppliedQ_setterVKiMM0I(init_suppliedQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T15 = primitive_idQ(init_valueQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (T15 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:13
    Kinit_valueQ_setterVKiMM0I(init_valueQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T16 = primitive_idQ(init_evaluatedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:14
    Kinit_evaluatedQ_setterVKiMM0I(init_evaluatedQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:14
    T6 = init_evaluatedQ_;
    MV_SET_ELT(0, init_evaluatedQ_);
    MV_SET_COUNT(1);
    T8 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  return(T8);
}

D Kinitialize_packed_slotsVKeMM4I (D x_, D all_keys_, D init_keyword_requiredQ_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T8 = primitive_copy_vector(all_keys_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T9 = primitive_idQ(T7,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    KerrorVKdMM1I(&K150, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    T10 = SLOT_VALUE_INITD(T7, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    T11 = SLOT_VALUE_INITD(T7, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    MEP_CALL_PROLOG(T10, T11, 2);
    MEP_CALL2(T10, x_, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T12 = primitive_idQ(init_keyword_requiredQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:19
    Kinit_keyword_requiredQ_setterVKiMM0I(init_keyword_requiredQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:19
    T4 = init_keyword_requiredQ_;
    MV_SET_ELT(0, init_keyword_requiredQ_);
    MV_SET_COUNT(1);
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  return(T6);
}

D Kinitialize_packed_slotsVKeMM5I (D x_, D all_keys_, D slot_storage_size_, D slot_method_sealedQ_) {
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

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T9 = primitive_copy_vector(all_keys_);
  T8 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T10 = primitive_idQ(T8,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    KerrorVKdMM1I(&K150, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    T11 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    T12 = SLOT_VALUE_INITD(T8, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    MEP_CALL_PROLOG(T11, T12, 2);
    MEP_CALL2(T11, x_, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T13 = primitive_idQ(slot_storage_size_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  if (T13 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:25
    Kslot_storage_size_setterVKiMM0I(slot_storage_size_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T14 = primitive_idQ(slot_method_sealedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    T6 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:27
    Kslot_method_sealedQ_setterVKiMM0I(slot_method_sealedQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:27
    T5 = slot_method_sealedQ_;
    MV_SET_ELT(0, slot_method_sealedQ_);
    MV_SET_COUNT(1);
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  return(T7);
}

D Kslot_offset_iVKeI (D slot_descriptor_, D in_iclass_) {
  D T2;
  D T3;
  D T4_0;
  D T4_1;
  D T5_0;
  D T5_1;
  D T6_0;
  D T6_1;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T10_1;
  D T11;
  D T12;
  D T13;
  D eF14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  DWORD iF24T, iF24;
  D T25;
  D T26;
  D T27;
  D T28;
  D eF29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  DWORD iF39T, iF39;
  D T40;
  _KLsimple_object_vectorGVKd_1 T41 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T42 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T43_0;
  D T43_1;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:468
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:473
  T7 = primitive_instanceQ(slot_descriptor_,&KLrepeated_slot_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:474
    T8 = SLOT_VALUE_INITD(in_iclass_, 4);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:474
    T9 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:474
    T10_0 = T9;
    T10_1 = &KPfalseVKi;
    T6_0 = T10_0;
    T6_1 = T10_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:475
    T11 = primitive_instanceQ(slot_descriptor_,&KLany_instance_slot_descriptorGVKe);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:476
      T12 = SLOT_VALUE_INITD(in_iclass_, 4);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:477
      T13 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:488
      iF24T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:488
        iF24 = iF24T;
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:484
        T25 = primitive_cast_raw_as_integer(iF24);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:481
        T18 = primitive_idQ(T25,T13);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:481
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:482
          T19 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_ELT(1, &KPfalseVKi);
          MV_SET_COUNT(2);
          T17 = T19;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:484
          T20 = REPEATED_D_SLOT_VALUE_TAGGED(T12, 1, iF24);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:484
          eF14 = T20;
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:485
          T15 = KgetterEVKiMM0I(eF14, slot_descriptor_);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:485
          if (T15 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:486
            T21 = T25;
            MV_SET_ELT(0, T25);
            MV_SET_ELT(1, &KPfalseVKi);
            MV_SET_COUNT(2);
            T16 = T21;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:488
            T22 = primitive_machine_word_add_signal_overflow(iF24,4);
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:488
            iF24T = T22;
            goto L0;
            T16 = T23;
          }
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:485
          T17 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:481
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:488
      T5_0 = T17;
      T5_1 = MV_GET_ELT(1);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:493
      T26 = primitive_instanceQ(slot_descriptor_,&KLany_class_slot_descriptorGVKe);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:494
        T27 = SLOT_VALUE_INITD(in_iclass_, 20);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:495
        T28 = SLOT_VALUE_INITD(T27, 0);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:504
        iF39T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:504
          iF39 = iF39T;
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:500
          T40 = primitive_cast_raw_as_integer(iF39);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:497
          T33 = primitive_idQ(T40,T28);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:497
          if (T33 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:498
            T34 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_ELT(1, &KPfalseVKi);
            MV_SET_COUNT(2);
            T32 = T34;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:500
            T35 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, iF39);
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:500
            eF29 = T35;
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:501
            T30 = KgetterEVKiMM0I(eF29, slot_descriptor_);
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:501
            if (T30 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:502
              T36 = T40;
              MV_SET_ELT(0, T40);
              MV_SET_ELT(1, &KPfalseVKi);
              MV_SET_COUNT(2);
              T31 = T36;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:504
              T37 = primitive_machine_word_add_signal_overflow(iF39,4);
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:504
              iF39T = T37;
              goto L1;
              T31 = T38;
            }
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:501
            T32 = T31;
          }
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:497
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:504
        T4_0 = T32;
        T4_1 = MV_GET_ELT(1);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:511
        T41.vector_element_[0] = slot_descriptor_;
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:511
        T2 = KlistVKdI(&T41);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:509
        T42.vector_element_[0] = &KJformat_string_;
        T42.vector_element_[1] = &K149;
        T42.vector_element_[2] = &KJformat_arguments_;
        T42.vector_element_[3] = T2;
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:509
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T3 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T42);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:509
        T43_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
        T43_1 = MV_GET_ELT(1);
        T4_0 = T43_0;
        T4_1 = T43_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
      T5_0 = T4_0;
      T5_1 = T4_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
    T6_0 = T5_0;
    T6_1 = T5_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:472
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:468
  MV_SET_ELT(1, T6_1);
  MV_SET_COUNT(2);
  return(T6_0);
}

D Kslot_descriptorVKiMM0I (D instance_, D getter_) {
  D returnPexit_26_;
  D T4;
  DWORD T5T, T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  DADDR T10;
  DWORD bitsF11;
  D T12;
  D T13;
  D mm_wrapperF14;
  D T15;
  D T16;
  D mm_wrapperF17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T27;
  DWORD T28;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T10 = primitive_cast_pointer_as_raw(instance_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  bitsF11 = primitive_machine_word_logand(T10,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T12 = primitive_machine_word_equalQ(bitsF11,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T13 = primitive_element(instance_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    mm_wrapperF14 = T13;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T15 = SLOT_VALUE_INITD(mm_wrapperF14, 0);
    T19 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T16 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF11,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    mm_wrapperF17 = T16;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T18 = SLOT_VALUE_INITD(mm_wrapperF17, 0);
    T19 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T20 = SLOT_VALUE_INITD(T19, 17);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T21 = SLOT_VALUE_INITD(T20, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T22 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  T5T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T23 = primitive_machine_word_equalQ(T5,T22);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    if (T23 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
      T24 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 1, T5);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:80
      T6 = CALL1(&Kslot_getterVKe, T24);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:80
      T25 = primitive_idQ(getter_,T6);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:80
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:81
        T26.vector_element_[0] = T24;
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:78
        T27 = MV_SET_REST_AT(&T26, 0);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:78
        T8_0 = T27;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:80
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
      T28 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
      T5T = T28;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:78
  T8_0 = T7;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:76
  T9_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:76
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kmap_congruency_classesVKiMM8I (D f_, D m_) {
  D sd_;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:727
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:728
  T4 = SLOT_VALUE_INITD(m_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:728
  sd_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:729
  T5 = SLOT_VALUE_INITD(sd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:729
  CALL1(f_, T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:730
  T6 = SLOT_VALUE_INITD(sd_, 6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:730
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K120, 2);
  T7 = ENGINE_NODE_CALL2(&K120, f_, T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:727
  MV_SET_COUNT(0);
  return(T7);
}

D Kreduce_incomplete_classesVKiMM9I (D f_, D m_, D ans_) {
  D sd_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:734
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:736
  T5 = SLOT_VALUE_INITD(m_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:736
  sd_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:737
  T6 = SLOT_VALUE_INITD(sd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:737
  T7 = SLOT_VALUE_INITD(sd_, 6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:737
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K117, 3);
  T8 = ENGINE_NODE_CALL3(&K117, f_, T7, ans_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:737
  T9_0 = Kreduce_incomplete_classesVKiMM10I(f_, T6, T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:734
  MV_SET_COUNT(1);
  return(T9_0);
}

D Ktype_completeQVKeMM6I (D m_) {
  D sd_;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:713
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:714
  T6 = SLOT_VALUE_INITD(m_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:714
  sd_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  T7 = SLOT_VALUE_INITD(sd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  T8 = SLOT_VALUE(T7, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  T11 = primitive_machine_word_logbitQ(21,T10);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
    T12 = SLOT_VALUE_INITD(sd_, 6);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
    CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
    T3_0 = CONGRUENT_CALL1(T12);
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:715
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:713
  MV_SET_COUNT(1);
  return(T5_0);
}

D Krecompute_type_completeXVKiMM4I (D m_) {
  D sd_;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D a1_;
  D T9;
  D a2_;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:719
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:720
  T6 = SLOT_VALUE_INITD(m_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:720
  sd_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:721
  T7 = SLOT_VALUE_INITD(sd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:721
  a1_ = Krecompute_type_completeXVKiMM0I(T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:722
  T9 = SLOT_VALUE_INITD(sd_, 6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:722
  a2_ = Krecompute_type_completeXVKiMM0I(T9);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:723
  if (a1_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:723
    T3_0 = a2_;
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:723
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:723
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:719
  MV_SET_COUNT(1);
  return(T5_0);
}

D Klazy_subtypeQVKiMM0I (D type1_, D type2_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:647
  T6 = primitive_idQ(type2_,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:647
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:648
    T3_0 = &KPtrueVKi;
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:650
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T4_0 = CONGRUENT_CALL2(type1_, type2_);
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:647
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:645
  MV_SET_COUNT(1);
  return(T5_0);
}

D KcongruentQVKiMM2I (D g_, D m_) {
  volatile D returnPexit_27_;
  volatile D T4;
  volatile D T5;
  volatile D sd_;
  volatile DWORD i_T, i_;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D gvals_;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15_0;
  volatile D T15_1;
  volatile D T16_0;
  volatile D T16_1;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile DWORD T21;
  volatile DWORD T22;
  volatile DWORD T23;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile DWORD T30;
  volatile D T31;
  volatile DWORD T32;
  volatile D T33;
  volatile D T34;
  volatile DWORD T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile DWORD T39;
  volatile DWORD T40;
  volatile DWORD T41;
  volatile DWORD T42;
  volatile D T43;
  volatile D T44;
  volatile D T45;
  volatile D T46;
  volatile D T47;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:655
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:658
  ENTER_EXIT_FRAME(returnPexit_27_);
  if (nlx_setjmp(FRAME_DEST(returnPexit_27_))) {
    T15_0 = FRAME_RETVAL(returnPexit_27_);
    T15_1 = MV_GET_ELT(1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:659
    T5 = MAKE_CLOSURE_INITD(&KfailF111, 1, returnPexit_27_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:663
    T17 = SLOT_VALUE_INITD(g_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:664
    T18 = SLOT_VALUE_INITD(m_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:664
    sd_ = T18;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:672
    T19 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:673
    T20 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:673
    T21 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:673
    T22 = primitive_machine_word_logand(T21,1020);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:673
    T23 = primitive_machine_word_logior(T22,1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:673
    T24 = primitive_cast_raw_as_integer(T23);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:674
    T25 = Kfunction_number_requiredVKiMM2I(m_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:676
    T26 = primitive_idQ(T24,T25);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:676
    if (T26 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:677
      get_teb()->function = T5;
      KfailF111I(Drequired_argument_countVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:676
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
    i_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
      T28 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
      T27 = primitive_machine_word_less_thanQ(i_,T23);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:680
        T8 = KPmethod_specializerVKgI(m_, T28);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:680
        T29 = REPEATED_D_SLOT_VALUE_TAGGED(T19, 1, i_);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:680
        T9 = Klazy_subtypeQVKiMM0I(T8, T29);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:680
        if (T9 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:681
          get_teb()->function = T5;
          KfailF111I(Drequired_argument_typeVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:680
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
        T30 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
        i_T = T30;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:679
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:687
    T31 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:687
    T32 = primitive_cast_integer_as_raw(T31);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:687
    T33 = primitive_machine_word_logbitQ(18,T32);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:686
    if (T33 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:687
      get_teb()->function = T5;
      KfailF111I(Dnot_both_keywordVKi);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:688
      T34 = SLOT_VALUE_INITD(T17, 0);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:688
      T35 = primitive_cast_integer_as_raw(T34);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:688
      T36 = primitive_machine_word_logbitQ(20,T35);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:686
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:688
        get_teb()->function = T5;
        KfailF111I(Dnot_both_variableVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:686
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:686
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:693
    CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
    T10 = CONGRUENT_CALL1(T17);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:693
    gvals_ = T10;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:694
    T37 = SLOT_VALUE_INITD(sd_, 6);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T38 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T39 = primitive_cast_integer_as_raw(T38);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T40 = primitive_machine_word_bit_field_extract(8,10,T39);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T41 = primitive_machine_word_logand(T40,-4);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T42 = primitive_machine_word_logior(T41,1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:695
    T43 = primitive_cast_raw_as_integer(T42);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
    T44 = primitive_machine_word_less_thanQ(5,T42);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
    if (T44 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:697
      get_teb()->function = T5;
      KfailF111I(Drequired_values_count_too_smallVKi);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:698
      T45 = primitive_idQ(T43,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:699
        T46 = REPEATED_D_SLOT_VALUE_TAGGED(gvals_, 1, 1);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:699
        T12 = Klazy_subtypeQVKiMM0I(T37, T46);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:699
        if (T12 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:700
          get_teb()->function = T5;
          KfailF111I(Drequired_values_typeVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:699
      } else {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:702
        CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
        T13 = CONGRUENT_CALL1(T17);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:702
        T14 = Klazy_subtypeQVKiMM0I(T37, T13);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
        if (T14 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:703
          get_teb()->function = T5;
          KfailF111I(Drequired_values_typeVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:696
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:706
    T47 = &KPtrueVKi;
    MV_SET_ELT(0, &KPtrueVKi);
    MV_SET_ELT(1, IKJcongruent_);
    MV_SET_COUNT(2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:658
  T15_0 = T47;
  T15_1 = MV_GET_ELT(1);
    /* invalidate returnPexit_27_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:658
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:655
  T16_0 = T15_0;
  T16_1 = T15_1;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:655
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D Kfunction_number_requiredVKiMM2I (D f_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:629
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:631
  T10 = primitive_instanceQ(f_,&KLrepeated_accessor_methodGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:631
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:52
    T9 = f_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:632
    T11 = primitive_instanceQ(T9,&KLsetter_accessor_methodGVKe);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:632
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:632
      T2_0 = (D) 13;
      T4_0 = T2_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:632
      T3_0 = (D) 9;
      T4_0 = T3_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:632
    T8_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:634
    T12 = primitive_instanceQ(f_,&KLsetter_accessor_methodGVKe);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:634
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:634
      T5_0 = (D) 9;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:634
      T6_0 = (D) 5;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:634
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:631
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:629
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kinit_keyword_requiredQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    T6 = primitive_machine_word_logbit_set(5,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
    T7 = primitive_machine_word_logbit_clear(5,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinit_evaluatedQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T6 = primitive_machine_word_logbit_set(4,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T7 = primitive_machine_word_logbit_clear(4,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinit_suppliedQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T6 = primitive_machine_word_logbit_set(2,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T7 = primitive_machine_word_logbit_clear(2,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinit_valueQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T6 = primitive_machine_word_logbit_set(3,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
    T7 = primitive_machine_word_logbit_clear(3,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfind_or_create_class_slot_storageVKiI (D icls_, D offset_, D initialize_nowQ_) {
  D T4_0;
  D sd_;
  D T6;
  D T7;
  D initv_;
  D T9_0;
  D T10;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26;
  DWORD T27;
  D T28;
  D T29;
  D DlockD_;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_2 T45 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T46;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:317
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:320
  T15 = SLOT_VALUE_INITD(icls_, 22);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
  T17 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
  T16 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 1, T17);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
    T4_0 = T16;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
    T56_0 = T4_0;
    T14_0 = T56_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:323
    T18 = SLOT_VALUE_INITD(icls_, 20);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:324
    T19 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 1, T17);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:324
    sd_ = T19;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:325
    T20 = SLOT_VALUE_INITD(sd_, 2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    T21 = SLOT_VALUE_INITD(icls_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    T22 = primitive_idQ(T20,T21);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    if (T22 != &KPfalseVKi) {
      T6 = T22;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
      T23 = primitive_instanceQ(sd_,&KLeach_subclass_slot_descriptorGVKi);
      T6 = T23;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:328
      if (initialize_nowQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        T7 = Keffective_initial_value_descriptorVKiI(sd_, icls_);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        T26 = SLOT_VALUE_INITD(T7, 0);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        T27 = primitive_cast_integer_as_raw(T26);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        T28 = primitive_machine_word_logbitQ(2,T27);
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T38 = SLOT_VALUE_INITD(T7, 0);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T39 = primitive_cast_integer_as_raw(T38);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T40 = primitive_machine_word_logbitQ(4,T39);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          if (T40 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            T29 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            if (T29 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              DlockD_ = Dslot_initial_data_lockVKi;
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              T31 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              if (T31 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                ENTER_UNWIND_FRAME(T32);
                if (!nlx_setjmp(FRAME_DEST(T32))) {
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  T41 = SLOT_VALUE_INITD(T7, 0);
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  T42 = primitive_cast_integer_as_raw(T41);
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  T43 = primitive_machine_word_logbitQ(4,T42);
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  if (T43 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    T44 = SLOT_VALUE_INITD(T7, 1);
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    T33 = T44;
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    T34 = CALL0(T33);
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    SLOT_VALUE_SETTER(T34, T7, 1);
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    primitive_synchronize_side_effects();
                    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                    Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T7);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                  FALL_THROUGH_UNWIND(&KPfalseVKi);
                }
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                CALL1(&KreleaseYthreadsVdylan, DlockD_);
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                CONTINUE_UNWIND();
              } else {
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                T45.vector_element_[0] = &KJsynchronization_;
                T45.vector_element_[1] = DlockD_;
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                T35 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T45);
                // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
                KsignalVKdMM0I(T35, &KPempty_vectorVKi);
              }
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            } else {
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              T46 = SLOT_VALUE_INITD(T7, 1);
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              T36 = T46;
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              T37 = CALL0(T36);
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              SLOT_VALUE_SETTER(T37, T7, 1);
              // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
              Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T7);
            }
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          }
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T47 = SLOT_VALUE_INITD(T7, 1);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T48 = SLOT_VALUE_INITD(T7, 0);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T49 = primitive_cast_integer_as_raw(T48);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T50 = primitive_machine_word_logbitQ(3,T49);
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          if (T50 != &KPfalseVKi) {
            T52 = T47;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            T24 = T47;
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            T25_0 = CALL0(T24);
            // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
            T51 = T25_0;
            T52 = T51;
          }
          // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
          T53 = T52;
        } else {
          T53 = &KPunboundVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:330
        initv_ = T53;
      } else {
        initv_ = &KPunboundVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:328
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:334
      T54 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:334
      SLOT_VALUE_SETTER(initv_, T54, 0);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:334
      SLOT_VALUE_SETTER(sd_, T54, 1);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:335
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T54, T15, 1, T17);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:335
      T9_0 = T54;
      T13_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:338
      T55 = SLOT_VALUE(T20, 2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:340
      T10 = Kslot_offset_iVKeI(sd_, T55);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:340
      T11 = Kfind_or_create_class_slot_storageVKiI(T55, T10, initialize_nowQ_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:339
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T11, T15, 1, T17);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:339
      T12_0 = T11;
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:326
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:321
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:317
  MV_SET_COUNT(1);
  return(T14_0);
}

D KgetterEVKiMM0I (D descriptor_1_, D descriptor_2_) {
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:73
  T4 = SLOT_VALUE_INITD(descriptor_1_, 4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:73
  T5 = SLOT_VALUE_INITD(descriptor_2_, 4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:73
  T3 = KEEVKdI(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:71
  return(T3);
}

D Kfunction_number_requiredVKiMM1I (D f_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T2 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T5 = primitive_machine_word_logand(T4,1020);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:626
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:624
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kslot_allocationVKeMM0I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:263
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:265
  T2_0 = &KJconstant_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:263
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kslot_allocationVKeMM1I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:294
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:296
  T2_0 = &KJclass_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:294
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kslot_allocationVKeMM2I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:310
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:312
  T2_0 = &KJeach_subclass_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:310
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kslot_allocationVKeMM3I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:392
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:394
  T2_0 = &KJrepeated_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:392
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kas_slot_descriptor_classVKiMM0I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:250
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:251
  T2 = &KLinstance_slot_descriptorGVKe;
  MV_SET_ELT(0, &KLinstance_slot_descriptorGVKe);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:250
  return(T2);
}

D Kas_slot_descriptor_classVKiMM1I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:353
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:354
  T2 = &KLvirtual_slot_descriptorGVKi;
  MV_SET_ELT(0, &KLvirtual_slot_descriptorGVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:353
  return(T2);
}

D KLconstant_slot_descriptorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_init_data_slot_, D Uunique_slot_owner_, D Uunique_init_keyword_, D Uunique_slot_getter_, D Uunique_slot_setter_, D Uunique_slot_type_) {
  D T9;
  D Uunique_slot_ownerF10;
  D T11;
  D Uunique_slot_ownerF12;
  D Uunique_slot_typeF13;
  D T14_0;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
  T15 = primitive_idQ(Uunique_slot_owner_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
  if (T15 != &KPfalseVKi) {
    T16.vector_element_[0] = &KJowner_;
    T17 = KerrorVKdMM1I(&K83, &T16);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
    T9 = T17;
    Uunique_slot_ownerF10 = T9;
  } else {
    Uunique_slot_ownerF10 = Uunique_slot_owner_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
  T11 = primitive_object_allocate_filled(8,&KLconstant_slot_descriptorGVKiW,7,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T11, 0);
  SLOT_VALUE_SETTER(Uunique_init_data_slot_, T11, 1);
  Uunique_slot_ownerF12 = Uunique_slot_ownerF10;
  SLOT_VALUE_SETTER(Uunique_slot_ownerF12, T11, 2);
  SLOT_VALUE_SETTER(Uunique_init_keyword_, T11, 3);
  SLOT_VALUE_SETTER(Uunique_slot_getter_, T11, 4);
  SLOT_VALUE_SETTER(Uunique_slot_setter_, T11, 5);
  Uunique_slot_typeF13 = Uunique_slot_type_;
  SLOT_VALUE_SETTER(Uunique_slot_typeF13, T11, 6);
  APPLY2(&KinitializeVKd, T11, init_args_);
  T14_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:258
  MV_SET_COUNT(1);
  return(T14_0);
}

D KLsimple_slot_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:101
  T5 = primitive_object_allocate_filled(3,&KLsimple_slot_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:101
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KfailF111I (D reason_) {
  _KLsimple_object_vectorGVKd_2 T1 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:659
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:660
  T1.vector_element_[0] = &KPfalseVKi;
  T1.vector_element_[1] = reason_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:658
  T2 = MV_SET_REST_AT(&T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:658
  T3 = NLX(CREF(0), T2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:659
  return(T3);
}

D Kslot_initializedQVKdMM1I (D object_, D slot_descriptor_) {
  D offsetF3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  DADDR T8;
  DWORD bitsF9;
  D T10;
  D T11;
  D mm_wrapperF12;
  D T13;
  D T14;
  D mm_wrapperF15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22_0;
  D T23;
  _KLsimple_object_vectorGVKd_3 T24 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T25 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T26_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  T8 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  bitsF9 = primitive_machine_word_logand(T8,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  T10 = primitive_machine_word_equalQ(bitsF9,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    T11 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    mm_wrapperF12 = T11;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    T13 = SLOT_VALUE_INITD(mm_wrapperF12, 0);
    T17 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    T14 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF9,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    mm_wrapperF15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
    T16 = SLOT_VALUE_INITD(mm_wrapperF15, 0);
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:107
  offsetF3 = Kslot_offset_iVKeI(slot_descriptor_, T17);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:108
  if (offsetF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T20 = primitive_cast_integer_as_raw(offsetF3);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T19 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T18 = primitive_initialized_slot_value(object_,T19);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T21 = primitive_idQ(T18,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T23 = primitive_not(T21);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:109
    T22_0 = T23;
    T7_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:113
    T4 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:113
    T24.vector_element_[0] = slot_descriptor_;
    T24.vector_element_[1] = T4;
    T24.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:113
    T5 = KlistVKdI(&T24);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:111
    T25.vector_element_[0] = &KJformat_string_;
    T25.vector_element_[1] = &K144;
    T25.vector_element_[2] = &KJformat_arguments_;
    T25.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:111
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T25);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:111
    T26_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T7_0 = T26_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:104
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kslot_initializedQVKdMM2I (D object_, D slot_descriptor_) {
  D offsetF3;
  D offsetF4;
  D T5;
  D T6;
  D T7_0;
  DADDR T8;
  DWORD bitsF9;
  D T10;
  D T11;
  D mm_wrapperF12;
  D T13;
  D T14;
  D mm_wrapperF15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_3 T24 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T25 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T26_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:178
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
  T8 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
  bitsF9 = primitive_machine_word_logand(T8,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
  T10 = primitive_machine_word_equalQ(bitsF9,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    T11 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    mm_wrapperF12 = T11;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    T13 = SLOT_VALUE_INITD(mm_wrapperF12, 0);
    T17 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    T14 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF9,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    mm_wrapperF15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
    T16 = SLOT_VALUE_INITD(mm_wrapperF15, 0);
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:181
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:182
  offsetF3 = Kslot_offset_iVKeI(slot_descriptor_, T17);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:183
  if (offsetF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:184
    offsetF4 = offsetF3;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:185
    T18 = Kfind_or_create_class_slot_storageVKiI(T17, offsetF4, &KPtrueVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:185
    T19 = SLOT_VALUE_INITD(T18, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:185
    T20 = primitive_idQ(T19,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:185
    T22 = primitive_not(T20);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:185
    T21_0 = T22;
    T7_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:189
    T23 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:189
    T24.vector_element_[0] = slot_descriptor_;
    T24.vector_element_[1] = T23;
    T24.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:189
    T5 = KlistVKdI(&T24);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:187
    T25.vector_element_[0] = &KJformat_string_;
    T25.vector_element_[1] = &K144;
    T25.vector_element_[2] = &KJformat_arguments_;
    T25.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:187
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T25);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:187
    T26_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T7_0 = T26_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:178
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kslot_initializedQVKdMM3I (D object_, D slot_descriptor_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:270
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:273
  T3_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:270
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kslot_initializedQVKdMM4I (D object_, D slot_descriptor_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:363
  T3_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:359
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kslot_storage_size_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T6 = primitive_cast_integer_as_raw(z_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T8 = primitive_machine_word_bit_field_deposit(T5,6,8,T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T3_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kslot_method_sealedQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    T6 = primitive_machine_word_logbit_set(14,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
    T7 = primitive_machine_word_logbit_clear(14,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPslotacc_repeated_instance_setterVKiI (D value_, D a_, D inst_, D idx_) {
  D slotd_;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:602
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:604
  T10 = primitive_instanceQ(idx_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:604
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:605
    T11 = SLOT_VALUE_INITD(a_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:605
    slotd_ = T11;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:606
    T12 = SLOT_VALUE_INITD(slotd_, 2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:608
    T13 = primitive_instanceQ(inst_,T12);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:608
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:609
      Kslot_value_setterVKeMM0I(value_, inst_, slotd_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:609
      T5_0 = value_;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:611
      T6_0 = Ktype_check_errorVKiI(inst_, T12);
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:608
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:614
    T8_0 = Ktype_check_errorVKiI(idx_, &KLintegerGVKd);
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:604
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:602
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kslot_value_setterVKeMM0I (D new_value_, D object_, D slot_descriptor_) {
  D offsetF4;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11_0;
  DADDR T12;
  DWORD bitsF13;
  D T14;
  D T15;
  D mm_wrapperF16;
  D T17;
  D T18;
  D mm_wrapperF19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  _KLsimple_object_vectorGVKd_6 T26 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T27_0;
  _KLsimple_object_vectorGVKd_3 T28 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T30_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:137
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  T12 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  bitsF13 = primitive_machine_word_logand(T12,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  T14 = primitive_machine_word_equalQ(bitsF13,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    T15 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    mm_wrapperF16 = T15;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    T17 = SLOT_VALUE_INITD(mm_wrapperF16, 0);
    T21 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    T18 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF13,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    mm_wrapperF19 = T18;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
    T20 = SLOT_VALUE_INITD(mm_wrapperF19, 0);
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:140
  offsetF4 = Kslot_offset_iVKeI(slot_descriptor_, T21);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:141
  if (offsetF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:142
    T22 = SLOT_VALUE_INITD(slot_descriptor_, 6);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:142
    T23 = primitive_instanceQ(new_value_,T22);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:142
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:143
      T25 = primitive_cast_integer_as_raw(offsetF4);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:143
      T24 = primitive_machine_word_shift_right(T25,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:143
      primitive_slot_value_setter(new_value_,object_,T24);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:143
      T5_0 = new_value_;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:145
      T26.vector_element_[0] = &KJvalue_;
      T26.vector_element_[1] = new_value_;
      T26.vector_element_[2] = &KJtype_;
      T26.vector_element_[3] = T22;
      T26.vector_element_[4] = &KJslot_descriptor_;
      T26.vector_element_[5] = slot_descriptor_;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:145
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLslot_type_errorGVKe, &T26);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:145
      T27_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
      T7_0 = T27_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:142
    T11_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:152
    T8 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:152
    T28.vector_element_[0] = slot_descriptor_;
    T28.vector_element_[1] = T8;
    T28.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:152
    T9 = KlistVKdI(&T28);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:150
    T29.vector_element_[0] = &KJformat_string_;
    T29.vector_element_[1] = &K169;
    T29.vector_element_[2] = &KJformat_arguments_;
    T29.vector_element_[3] = T9;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:150
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T29);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:150
    T30_0 = KerrorVKdMM0I(T10, &KPempty_vectorVKi);
    T11_0 = T30_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:141
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:137
  MV_SET_COUNT(1);
  return(T11_0);
}

D KPslotacc_repeated_instance_getterVKiI (D a_, D inst_, D idx_) {
  D slotd_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:587
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:589
  T8 = primitive_instanceQ(idx_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:589
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:590
    T9 = SLOT_VALUE_INITD(a_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:590
    slotd_ = T9;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:591
    T10 = SLOT_VALUE_INITD(slotd_, 2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:592
    T11 = primitive_instanceQ(inst_,T10);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:592
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:593
      T12_0 = Kslot_valueVKeMM0I(inst_, slotd_);
      T5_0 = T12_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:595
      T4_0 = Ktype_check_errorVKiI(inst_, T10);
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:592
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:598
    T6_0 = Ktype_check_errorVKiI(idx_, &KLintegerGVKd);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:589
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:587
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kslot_valueVKeMM0I (D object_, D slot_descriptor_) {
  D offsetF3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12_0;
  DADDR T13;
  DWORD bitsF14;
  D T15;
  D T16;
  D mm_wrapperF17;
  D T18;
  D T19;
  D mm_wrapperF20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  _KLsimple_object_vectorGVKd_3 T27 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T28 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T29_0;
  _KLsimple_object_vectorGVKd_3 T30 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T32_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  T13 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  bitsF14 = primitive_machine_word_logand(T13,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  T15 = primitive_machine_word_equalQ(bitsF14,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    T16 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    mm_wrapperF17 = T16;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    T18 = SLOT_VALUE_INITD(mm_wrapperF17, 0);
    T22 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    T19 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF14,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    mm_wrapperF20 = T19;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
    T21 = SLOT_VALUE_INITD(mm_wrapperF20, 0);
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:120
  offsetF3 = Kslot_offset_iVKeI(slot_descriptor_, T22);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:121
  if (offsetF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:122
    T25 = primitive_cast_integer_as_raw(offsetF3);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:122
    T24 = primitive_machine_word_shift_right(T25,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:122
    T23 = primitive_slot_value(object_,T24);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:123
    T26 = primitive_idQ(T23,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:123
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:126
      T4 = Kobject_classVKdI(object_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:126
      T27.vector_element_[0] = slot_descriptor_;
      T27.vector_element_[1] = T4;
      T27.vector_element_[2] = object_;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:126
      T5 = KlistVKdI(&T27);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:124
      T28.vector_element_[0] = &KJformat_string_;
      T28.vector_element_[1] = &K175;
      T28.vector_element_[2] = &KJformat_arguments_;
      T28.vector_element_[3] = T5;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:124
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T28);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:124
      T29_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
      T8_0 = T29_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:128
      T7_0 = T23;
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:123
    T12_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:133
    T9 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:133
    T30.vector_element_[0] = slot_descriptor_;
    T30.vector_element_[1] = T9;
    T30.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:133
    T10 = KlistVKdI(&T30);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:131
    T31.vector_element_[0] = &KJformat_string_;
    T31.vector_element_[1] = &K144;
    T31.vector_element_[2] = &KJformat_arguments_;
    T31.vector_element_[3] = T10;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:131
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T11 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T31);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:131
    T32_0 = KerrorVKdMM0I(T11, &KPempty_vectorVKi);
    T12_0 = T32_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:117
  MV_SET_COUNT(1);
  return(T12_0);
}

D KPslotacc_single_q_class_setterVKiI (D value_, D a_, D inst_) {
  D slotd_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:574
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:576
  T7 = SLOT_VALUE_INITD(a_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:576
  slotd_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:577
  T8 = SLOT_VALUE_INITD(slotd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:579
  T9 = primitive_instanceQ(inst_,T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:579
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:580
    Kslot_value_setterVKeMM1I(value_, inst_, slotd_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:580
    T4_0 = value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:582
    T5_0 = Ktype_check_errorVKiI(inst_, T8);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:579
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:574
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kslot_value_setterVKeMM1I (D new_value_, D object_, D slot_descriptor_) {
  D offsetF4;
  D offsetF5;
  D T6_0;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11_0;
  DADDR T12;
  DWORD bitsF13;
  D T14;
  D T15;
  D mm_wrapperF16;
  D T17;
  D T18;
  D mm_wrapperF19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_6 T25 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T26_0;
  D T27;
  _KLsimple_object_vectorGVKd_2 T28 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T30_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
  T12 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
  bitsF13 = primitive_machine_word_logand(T12,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
  T14 = primitive_machine_word_equalQ(bitsF13,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    T15 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    mm_wrapperF16 = T15;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    T17 = SLOT_VALUE_INITD(mm_wrapperF16, 0);
    T21 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    T18 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF13,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    mm_wrapperF19 = T18;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
    T20 = SLOT_VALUE_INITD(mm_wrapperF19, 0);
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:220
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:221
  offsetF4 = Kslot_offset_iVKeI(slot_descriptor_, T21);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:222
  if (offsetF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:223
    T22 = SLOT_VALUE_INITD(slot_descriptor_, 6);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:223
    T23 = primitive_instanceQ(new_value_,T22);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:223
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:224
      offsetF5 = offsetF4;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:225
      T24 = Kfind_or_create_class_slot_storageVKiI(T21, offsetF5, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:225
      SLOT_VALUE_SETTER(new_value_, T24, 0);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:225
      T6_0 = new_value_;
      T8_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:227
      T25.vector_element_[0] = &KJvalue_;
      T25.vector_element_[1] = new_value_;
      T25.vector_element_[2] = &KJtype_;
      T25.vector_element_[3] = T22;
      T25.vector_element_[4] = &KJslot_descriptor_;
      T25.vector_element_[5] = slot_descriptor_;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:227
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7 = CONGRUENT_CALL2(&KLslot_type_errorGVKe, &T25);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:227
      T26_0 = KerrorVKdMM0I(T7, &KPempty_vectorVKi);
      T8_0 = T26_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:223
    T11_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:234
    T27 = SLOT_VALUE_INITD(T21, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:234
    T28.vector_element_[0] = slot_descriptor_;
    T28.vector_element_[1] = T27;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:234
    T9 = KlistVKdI(&T28);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:232
    T29.vector_element_[0] = &KJformat_string_;
    T29.vector_element_[1] = &K181;
    T29.vector_element_[2] = &KJformat_arguments_;
    T29.vector_element_[3] = T9;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:232
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T29);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:232
    T30_0 = KerrorVKdMM0I(T10, &KPempty_vectorVKi);
    T11_0 = T30_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:222
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:217
  MV_SET_COUNT(1);
  return(T11_0);
}

D KPslotacc_single_q_class_getterVKiI (D a_, D inst_) {
  D slotd_;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:563
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:565
  T5 = SLOT_VALUE_INITD(a_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:565
  slotd_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:566
  T6 = SLOT_VALUE_INITD(slotd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:567
  T7 = primitive_instanceQ(inst_,T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:567
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:568
    T8_0 = Kslot_valueVKeMM1I(inst_, slotd_);
    T4_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:570
    T3_0 = Ktype_check_errorVKiI(inst_, T6);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:567
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:563
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kslot_valueVKeMM1I (D object_, D slot_descriptor_) {
  D T3;
  D offsetF4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  DADDR T9;
  DWORD bitsF10;
  D T11;
  D T12;
  D mm_wrapperF13;
  D T14;
  D T15;
  D mm_wrapperF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T25_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:194
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
  T9 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
  bitsF10 = primitive_machine_word_logand(T9,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
  T11 = primitive_machine_word_equalQ(bitsF10,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    T12 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    mm_wrapperF13 = T12;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    T14 = SLOT_VALUE_INITD(mm_wrapperF13, 0);
    T18 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    T15 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF10,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    mm_wrapperF16 = T15;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
    T17 = SLOT_VALUE_INITD(mm_wrapperF16, 0);
    T18 = T17;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:197
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:198
  T3 = Kslot_offset_iVKeI(slot_descriptor_, T18);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:198
  offsetF4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:201
  T19 = Kfind_or_create_class_slot_storageVKiI(T18, offsetF4, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:201
  T20 = SLOT_VALUE_INITD(T19, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:202
  T21 = primitive_idQ(T20,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:202
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:205
    T22 = SLOT_VALUE_INITD(T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:205
    T23.vector_element_[0] = slot_descriptor_;
    T23.vector_element_[1] = T22;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:205
    T5 = KlistVKdI(&T23);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:203
    T24.vector_element_[0] = &KJformat_string_;
    T24.vector_element_[1] = &K187;
    T24.vector_element_[2] = &KJformat_arguments_;
    T24.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:203
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T24);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:203
    T25_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T8_0 = T25_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:207
    T7_0 = T20;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:202
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:194
  MV_SET_COUNT(1);
  return(T8_0);
}

D KPslotacc_single_q_instance_setterVKiI (D value_, D a_, D inst_) {
  D slotd_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:550
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:552
  T7 = SLOT_VALUE_INITD(a_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:552
  slotd_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:553
  T8 = SLOT_VALUE_INITD(slotd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:555
  T9 = primitive_instanceQ(inst_,T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:555
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:556
    Kslot_value_setterVKeMM0I(value_, inst_, slotd_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:556
    T4_0 = value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:558
    T5_0 = Ktype_check_errorVKiI(inst_, T8);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:555
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:550
  MV_SET_COUNT(1);
  return(T6_0);
}

D KPslotacc_single_q_instance_getterVKiI (D a_, D inst_) {
  D slotd_;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:538
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:540
  T5 = SLOT_VALUE_INITD(a_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:540
  slotd_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:541
  T6 = SLOT_VALUE_INITD(slotd_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:542
  T7 = primitive_instanceQ(inst_,T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:542
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:543
    T8_0 = Kslot_valueVKeMM0I(inst_, slotd_);
    T4_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:545
    T3_0 = Ktype_check_errorVKiI(inst_, T6);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:542
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:538
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kslot_offsetVKeI (D sd_, D c_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:515
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:516
  T3 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:516
  T2 = Kslot_offset_iVKeI(sd_, T3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:515
  return(T2);
}

D Krepeated_slot_value_setterVKeMM0I (D new_value_, D object_, D descriptor_, D offset_) {
  D base_offsetF5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13_0;
  DADDR T14;
  DWORD bitsF15;
  D T16;
  D T17;
  D mm_wrapperF18;
  D T19;
  D T20;
  D mm_wrapperF21;
  D T22;
  D T23;
  DSINT T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  _KLsimple_object_vectorGVKd_3 T33 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T34 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T35_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:444
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  T14 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  bitsF15 = primitive_machine_word_logand(T14,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  T16 = primitive_machine_word_equalQ(bitsF15,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    T17 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    mm_wrapperF18 = T17;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    T19 = SLOT_VALUE_INITD(mm_wrapperF18, 0);
    T23 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    T20 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF15,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    mm_wrapperF21 = T20;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
    T22 = SLOT_VALUE_INITD(mm_wrapperF21, 0);
    T23 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:449
  base_offsetF5 = Kslot_offset_iVKeI(descriptor_, T23);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:450
  if (base_offsetF5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:451
    T6 = Krepeated_byte_slotQVKiMM0I(descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:451
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T24 = primitive_byte_character_as_raw(new_value_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T26 = primitive_cast_integer_as_raw(base_offsetF5);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T25 = primitive_machine_word_shift_right(T26,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T28 = primitive_cast_integer_as_raw(offset_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T27 = primitive_machine_word_shift_right(T28,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      primitive_byte_element_setter(T24,object_,T25,T27);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:452
      T7_0 = new_value_;
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      T30 = primitive_cast_integer_as_raw(base_offsetF5);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      T29 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      T32 = primitive_cast_integer_as_raw(offset_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      T31 = primitive_machine_word_shift_right(T32,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      primitive_repeated_slot_value_setter(new_value_,object_,T29,T31);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:454
      T8_0 = new_value_;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:451
    T13_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:459
    T10 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:459
    T33.vector_element_[0] = descriptor_;
    T33.vector_element_[1] = T10;
    T33.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:459
    T11 = KlistVKdI(&T33);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:457
    T34.vector_element_[0] = &KJformat_string_;
    T34.vector_element_[1] = &K169;
    T34.vector_element_[2] = &KJformat_arguments_;
    T34.vector_element_[3] = T11;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:457
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T12 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T34);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:457
    T35_0 = KerrorVKdMM0I(T12, &KPempty_vectorVKi);
    T13_0 = T35_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:450
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:444
  MV_SET_COUNT(1);
  return(T13_0);
}

D Krepeated_byte_slotQVKiMM0I (D descriptor_) {
  D T2;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:386
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:387
  T2 = SLOT_VALUE_INITD(descriptor_, 6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:387
  T3 = primitive_idQ(T2,&KLbyte_characterGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:387
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:386
  return(T4);
}

D Krepeated_slot_valueVKeMM0I (D object_, D descriptor_, D offset_) {
  D base_offsetF4;
  D T5;
  D value_;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15_0;
  DADDR T16;
  DWORD bitsF17;
  D T18;
  D T19;
  D mm_wrapperF20;
  D T21;
  D T22;
  D mm_wrapperF23;
  D T24;
  D T25;
  DBCHR T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  _KLsimple_object_vectorGVKd_3 T38 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T39 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T40_0;
  _KLsimple_object_vectorGVKd_3 T41 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T42 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T43_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:418
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  T16 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  bitsF17 = primitive_machine_word_logand(T16,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  T18 = primitive_machine_word_equalQ(bitsF17,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    T19 = primitive_element(object_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    mm_wrapperF20 = T19;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    T21 = SLOT_VALUE_INITD(mm_wrapperF20, 0);
    T25 = T21;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    T22 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF17,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    mm_wrapperF23 = T22;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
    T24 = SLOT_VALUE_INITD(mm_wrapperF23, 0);
    T25 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:422
  base_offsetF4 = Kslot_offset_iVKeI(descriptor_, T25);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:423
  if (base_offsetF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:425
    T5 = Krepeated_byte_slotQVKiMM0I(descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:425
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T29 = primitive_cast_integer_as_raw(base_offsetF4);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T28 = primitive_machine_word_shift_right(T29,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T31 = primitive_cast_integer_as_raw(offset_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T30 = primitive_machine_word_shift_right(T31,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T26 = primitive_byte_element(object_,T28,T30);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:426
      T27 = primitive_raw_as_byte_character(T26);
      value_ = T27;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:428
      T34 = primitive_cast_integer_as_raw(base_offsetF4);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:428
      T33 = primitive_machine_word_shift_right(T34,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:428
      T36 = primitive_cast_integer_as_raw(offset_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:428
      T35 = primitive_machine_word_shift_right(T36,2);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:428
      T32 = primitive_repeated_slot_value(object_,T33,T35);
      value_ = T32;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:425
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:430
    T37 = primitive_idQ(value_,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:430
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:433
      T7 = Kobject_classVKdI(object_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:433
      T38.vector_element_[0] = descriptor_;
      T38.vector_element_[1] = T7;
      T38.vector_element_[2] = object_;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:433
      T8 = KlistVKdI(&T38);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:431
      T39.vector_element_[0] = &KJformat_string_;
      T39.vector_element_[1] = &K175;
      T39.vector_element_[2] = &KJformat_arguments_;
      T39.vector_element_[3] = T8;
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:431
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T9 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T39);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:431
      T40_0 = KerrorVKdMM0I(T9, &KPempty_vectorVKi);
      T11_0 = T40_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:435
      T10_0 = value_;
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:430
    T15_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:440
    T12 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:440
    T41.vector_element_[0] = descriptor_;
    T41.vector_element_[1] = T12;
    T41.vector_element_[2] = object_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:440
    T13 = KlistVKdI(&T41);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:438
    T42.vector_element_[0] = &KJformat_string_;
    T42.vector_element_[1] = &K144;
    T42.vector_element_[2] = &KJformat_arguments_;
    T42.vector_element_[3] = T13;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:438
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T14 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T42);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:438
    T43_0 = KerrorVKdMM0I(T14, &KPempty_vectorVKi);
    T15_0 = T43_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:423
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:418
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kslot_value_setterVKeMM2I (D new_value_, D object_, D slot_descriptor_) {
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:281
  T6.vector_element_[0] = slot_descriptor_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:281
  T4 = KlistVKdI(&T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:279
  T7.vector_element_[0] = &KJformat_string_;
  T7.vector_element_[1] = &K235;
  T7.vector_element_[2] = &KJformat_arguments_;
  T7.vector_element_[3] = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:279
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T5 = CONGRUENT_CALL2(&KLimmutable_errorGVKi, &T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:279
  T8_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:276
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kslot_value_setterVKeMM3I (D new_value_, D object_, D slot_descriptor_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:371
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:375
  T8 = SLOT_VALUE_INITD(slot_descriptor_, 5);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:375
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:376
    T4 = T8;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:376
    T5_0 = CALL2(T4, new_value_, object_);
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:375
    T6_0 = &KPfalseVKi;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:375
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:371
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kslot_valueVKeMM2I (D object_, D slot_descriptor_) {
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:366
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:368
  T5 = SLOT_VALUE_INITD(slot_descriptor_, 4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:368
  T3 = T5;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:368
  T4_0 = CALL1(T3, object_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:366
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kinit_keyword_requiredQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T4 = primitive_machine_word_logbitQ(5,T3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:17
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kslot_storage_sizeVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T4 = primitive_machine_word_bit_field_extract(4,10,T3);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T5 = primitive_machine_word_logand(T4,-4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor.dylan:23
  MV_SET_COUNT(1);
  return(T8_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_slot_descriptor_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJinstance_);
    if (T0 != &KJinstance_) {
      primitive_slot_value_setter(T0, &K74, 1);
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

    T0 = KPresolve_symbolVKiI(&KJslot_method_sealedQ_);
    if (T0 != &KJslot_method_sealedQ_) {
      primitive_repeated_slot_value_setter(T0, &K157, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K154, 1, 2);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_slot_descriptor_for_user () {
  return;
}


/* eof */
