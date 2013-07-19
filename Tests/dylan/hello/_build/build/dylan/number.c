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
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(6);

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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLmachine_numberGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLcomplexGVKd;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_overflow_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLdivision_by_zero_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_underflow_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_errorGVKe;


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
extern _KLsimple_methodGVKe KmoduloVKdMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLmachine_numberGVKi;
extern _KLmm_wrapperGVKi_0 KLmachine_numberGVKiW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe KroundVKdMM1;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe KroundSVKdMM1;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLsimple_methodGVKe KSVKdMM3;
extern _KLsimple_methodGVKe KSVKdMM4;
extern _KLmethod_domainGVKe KSVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KSVKdRD_dylanRD_1;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLcomplexGVKd;
extern _KLmm_wrapperGVKi_0 KLcomplexGVKdW;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfloatG_typesVKi;
extern _KLsimple_methodGVKe KabsVKdMM1;
extern _KLmethod_domainGVKe KabsVKdRD_dylanRD_0;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM0;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM1;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM2;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM3;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM4;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM5;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM6;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM7;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM8;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM9;
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM10;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrealG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_52;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_30;
extern _KLsimple_methodGVKe KzeroQVKdMM0;
extern _KLsimple_methodGVKe KzeroQVKdMM1;
extern _KLsimple_methodGVKe KzeroQVKdMM2;
extern _KLsimple_methodGVKe KzeroQVKdMM3;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_3;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_methodGVKe KremainderVKdMM1;
extern _KLsimple_methodGVKe KnegativeQVKdMM0;
extern _KLsimple_methodGVKe KnegativeQVKdMM1;
extern _KLsimple_methodGVKe KnegativeQVKdMM2;
extern _KLsimple_methodGVKe KnegativeQVKdMM3;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KpositiveQVKdMM0;
extern _KLsimple_methodGVKe KpositiveQVKdMM1;
extern _KLsimple_methodGVKe KpositiveQVKdMM2;
extern _KLsimple_methodGVKe KpositiveQVKdMM3;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KtruncateSVKdMM1;
extern _KLsimple_methodGVKe KtruncateSVKdMM2;
extern _KLsimple_methodGVKe KtruncateSVKdMM3;
extern _KLsimple_methodGVKe KfloorSVKdMM1;
extern _KLsimple_methodGVKe KTVKdMM1;
extern _KLsimple_methodGVKe KTVKdMM2;
extern _KLsimple_methodGVKe KTVKdMM3;
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_2;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLsealed_generic_functionGVKe Kcondition_format_stringVKd;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_methodGVKe KnegativeVKdMM0;
extern _KLsimple_methodGVKe KnegativeVKdMM1;
extern _KLsimple_methodGVKe KnegativeVKdMM2;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KAVKdMM1;
extern _KLsimple_methodGVKe KAVKdMM2;
extern _KLsimple_methodGVKe KAVKdMM3;
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_13;
extern _KLsimple_methodGVKe K_VKdMM1;
extern _KLsimple_methodGVKe K_VKdMM2;
extern _KLsimple_methodGVKe K_VKdMM3;
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_0;
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_1;
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KceilingSVKdMM1;
extern _KLsimple_methodGVKe KtruncateVKdMM1;
extern _KLsimple_methodGVKe KceilingVKdMM1;
extern _KLsimple_methodGVKe KfloorVKdMM1;
extern _KLsimple_methodGVKe KCVKdMM0;
extern _KLsimple_methodGVKe KCVKdMM1;
extern _KLsimple_methodGVKe KCVKdMM2;
extern _KLmethod_domainGVKe KCVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KCVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KevenQVKdMM0;
extern _KLsimple_methodGVKe KevenQVKdMM1;
extern _KLmethod_domainGVKe KevenQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KevenQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KoddQVKdMM0;
extern _KLsimple_methodGVKe KoddQVKdMM1;
extern _KLmethod_domainGVKe KoddQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KoddQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KintegralQVKdMM0;
extern _KLsimple_methodGVKe KintegralQVKdMM1;
extern _KLsimple_methodGVKe KintegralQVKdMM2;
extern _KLsimple_methodGVKe KintegralQVKdMM3;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_3;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLsimple_methodGVKe KLVKdMM5;
D KLVKdMM5I (D, D);
extern _KLstandalone_domainGVKe_2 KLVKdRD_dylanRD_14;
extern _KLsimple_methodGVKe KEVKdMM6;
D KEVKdMM6I (D, D);
extern _KLstandalone_domainGVKe_2 KEVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_33;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_55;
extern _KLkeyword_methodGVKe KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0;
D KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLarithmetic_overflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_overflow_errorGVKeW;
extern _KLincremental_generic_functionGVKe KnegativeVKd;
extern _KLkeyword_methodGVKe KLdivision_by_zero_errorGZ32ZconstructorVKiMM0;
D KLdivision_by_zero_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLdivision_by_zero_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLdivision_by_zero_errorGVKeW;
extern _KLkeyword_methodGVKe KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0;
D KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLarithmetic_underflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_underflow_errorGVKeW;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsealed_generic_functionGVKe KfloorSVKd;
extern _KLsealed_generic_functionGVKe KtruncateSVKd;
extern _KLincremental_generic_functionGVKe KpositiveQVKd;
extern _KLincremental_generic_functionGVKe KnegativeQVKd;
extern _KLsealed_generic_functionGVKe KremainderVKd;
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_53;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_54;
extern _KLsealed_generic_functionGVKe KroundVKd;
extern _KLsealed_generic_functionGVKe KmoduloVKd;
extern _KLsimple_methodGVKe KmoduloVKdMM0;
D KmoduloVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K38;
static _KLpairGVKd K39;
static _KLsignatureAvaluesGVKi K40;
static _KLbyte_stringGVKd_6 K41;
static _KLsimple_object_vectorGVKd_2 K42;
static _KLsimple_object_vectorGVKd_1 K43;
extern _KLsimple_methodGVKe KroundVKdMM0;
D KroundVKdMM0I (D real_);
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLsignatureAvaluesGVKi K48;
static _KLbyte_stringGVKd_5 K49;
static _KLsimple_object_vectorGVKd_2 K50;
extern _KLsealed_generic_functionGVKe Kcontagious_typeVKi;
extern _KLsealed_generic_functionGVKe KroundSVKd;
extern _KLsimple_methodGVKe KroundSVKdMM0;
D KroundSVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLsignatureAvaluesGVKi K57;
static _KLbyte_stringGVKd_6 K58;
extern _KLincremental_generic_functionGVKe KabsVKd;
extern _KLincremental_generic_functionGVKe KSVKd;
static _KLsingle_floatGVKd K61;
extern _KLsimple_methodGVKe KSVKdMM0;
D KSVKdMM0I (D, D);
extern _KLsimple_methodGVKe KSVKdMM1;
D KSVKdMM1I (D, D);
extern _KLsimple_methodGVKe KSVKdMM2;
D KSVKdMM2I (D, D);
extern _KLstandalone_domainGVKe_2 KSVKdRD_dylanRD_2;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLpairGVKd K71;
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLbyte_stringGVKd_1 K74;
static _KLsignatureAvaluesGVKi K75;
static _KLsignatureAvaluesGVKi K76;
static _KLsimple_object_vectorGVKd_2 K77;
static _KLsignatureAvaluesGVKi K78;
static _KLsimple_object_vectorGVKd_2 K79;
extern _KLsimple_methodGVKe KabsVKdMM0;
D KabsVKdMM0I (D x_);
extern _KLstandalone_domainGVKe_1 KabsVKdRD_dylanRD_1;
static _KLpairGVKd K83;
static _KLpairGVKd K84;
static _KLbyte_stringGVKd_3 K85;
static _KLsignatureAvaluesGVKi K86;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLpairGVKd K92;
static _KLpairGVKd K93;
static _KLpairGVKd K94;
static _KLpairGVKd K95;
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLsignatureAvaluesGVKi K98;
static _KLbyte_stringGVKd_15 K99;
static _KLsingletonGVKd K100;
static _KLsingletonGVKd K101;
extern _KLstandalone_domainGVKe_1 KzeroQVKdRD_dylanRD_4;
static _KLpairGVKd K103;
static _KLpairGVKd K104;
static _KLpairGVKd K105;
static _KLpairGVKd K106;
static _KLsignatureAvaluesGVKi K107;
static _KLbyte_stringGVKd_5 K108;
extern _KLsimple_methodGVKe KremainderVKdMM0;
D KremainderVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLbyte_stringGVKd_9 K113;
extern _KLstandalone_domainGVKe_1 KnegativeQVKdRD_dylanRD_4;
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLpairGVKd K117;
static _KLpairGVKd K118;
static _KLbyte_stringGVKd_9 K119;
extern _KLstandalone_domainGVKe_1 KpositiveQVKdRD_dylanRD_4;
static _KLpairGVKd K121;
static _KLpairGVKd K122;
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLbyte_stringGVKd_9 K125;
extern _KLsimple_methodGVKe KtruncateSVKdMM0;
D KtruncateSVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K128;
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLpairGVKd K131;
static _KLbyte_stringGVKd_9 K132;
extern _KLsimple_methodGVKe KfloorSVKdMM0;
D KfloorSVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLbyte_stringGVKd_6 K137;
extern _KLsimple_methodGVKe KTVKdMM0;
D KTVKdMM0I (D x_, D y_);
extern _KLstandalone_domainGVKe_2 KTVKdRD_dylanRD_3;
static _KLpairGVKd K141;
static _KLpairGVKd K142;
static _KLpairGVKd K143;
static _KLpairGVKd K144;
static _KLbyte_stringGVKd_1 K145;
static _KLimplementation_classGVKe K146;
static _KLsimple_object_vectorGVKd_2 K147;
static _KLsimple_object_vectorGVKd_1 K148;
static _KLsimple_object_vectorGVKd_7 K149;
static _KLsimple_object_vectorGVKd_1 K150;
static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_underflow_errorG;
static _KLbyte_stringGVKd_20 K152;
extern _KLclassGVKd KLarithmetic_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_errorGVKeW;
static _KLimplementation_classGVKe K155;
static _KLsimple_object_vectorGVKd_2 K156;
static _KLsimple_object_vectorGVKd_6 K157;
static _KLsimple_object_vectorGVKd_1 K158;
static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_errorG;
static _KLbyte_stringGVKd_16 K160;
static _KLbyte_stringGVKd_18 K161;
static _KLbyte_stringGVKd_28 K162;
static _KLkeyword_signatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_4 K164;
static _KLsimple_object_vectorGVKd_2 K165;
static _KLsimple_object_vectorGVKd_1 K166;
static _KLimplementation_classGVKe K167;
static _KLsimple_object_vectorGVKd_7 K168;
static _KLsimple_object_vectorGVKd_1 K169;
static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLdivision_by_zero_errorG;
static _KLbyte_stringGVKd_16 K171;
static _KLbyte_stringGVKd_24 K172;
static _KLkeyword_signatureAvaluesGVKi K173;
static _KLsimple_object_vectorGVKd_4 K174;
static _KLsimple_object_vectorGVKd_1 K175;
extern _KLstandalone_domainGVKe_1 KnegativeVKdRD_dylanRD_3;
static _KLpairGVKd K177;
static _KLpairGVKd K178;
static _KLpairGVKd K179;
static _KLbyte_stringGVKd_8 K180;
static _KLimplementation_classGVKe K181;
static _KLsimple_object_vectorGVKd_7 K182;
static _KLsimple_object_vectorGVKd_1 K183;
static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_overflow_errorG;
static _KLbyte_stringGVKd_19 K185;
static _KLbyte_stringGVKd_27 K186;
static _KLkeyword_signatureAvaluesGVKi K187;
static _KLsimple_object_vectorGVKd_4 K188;
static _KLsimple_object_vectorGVKd_1 K189;
static _KLsingletonGVKd K190;
extern _KLsimple_methodGVKe KAVKdMM0;
D KAVKdMM0I (D x_, D y_);
extern _KLstandalone_domainGVKe_2 KAVKdRD_dylanRD_3;
static _KLpairGVKd K194;
static _KLpairGVKd K195;
static _KLpairGVKd K196;
static _KLpairGVKd K197;
static _KLbyte_stringGVKd_1 K198;
static _KLsignatureAvaluesGVKi K199;
extern _KLsimple_methodGVKe K_VKdMM0;
D K_VKdMM0I (D x_, D y_);
extern _KLstandalone_domainGVKe_2 K_VKdRD_dylanRD_3;
static _KLpairGVKd K203;
static _KLpairGVKd K204;
static _KLpairGVKd K205;
static _KLpairGVKd K206;
static _KLbyte_stringGVKd_1 K207;
extern _KLsealed_generic_functionGVKe KceilingSVKd;
extern _KLsimple_methodGVKe KceilingSVKdMM0;
D KceilingSVKdMM0I (D real_, D divisor_);
static _KLpairGVKd K211;
static _KLpairGVKd K212;
static _KLbyte_stringGVKd_8 K213;
extern _KLsealed_generic_functionGVKe KtruncateVKd;
extern _KLsimple_methodGVKe KtruncateVKdMM0;
D KtruncateVKdMM0I (D real_);
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLbyte_stringGVKd_8 K219;
extern _KLsealed_generic_functionGVKe KceilingVKd;
extern _KLsimple_methodGVKe KceilingVKdMM0;
D KceilingVKdMM0I (D real_);
static _KLpairGVKd K223;
static _KLpairGVKd K224;
static _KLbyte_stringGVKd_7 K225;
extern _KLsealed_generic_functionGVKe KfloorVKd;
extern _KLsimple_methodGVKe KfloorVKdMM0;
D KfloorVKdMM0I (D real_);
static _KLpairGVKd K229;
static _KLpairGVKd K230;
static _KLbyte_stringGVKd_5 K231;
extern _KLincremental_generic_functionGVKe KCVKd;
extern _KLstandalone_domainGVKe_2 KCVKdRD_dylanRD_2;
static _KLpairGVKd K234;
static _KLpairGVKd K235;
static _KLpairGVKd K236;
static _KLbyte_stringGVKd_1 K237;
extern _KLincremental_generic_functionGVKe KevenQVKd;
extern _KLstandalone_domainGVKe_1 KevenQVKdRD_dylanRD_2;
static _KLpairGVKd K240;
static _KLpairGVKd K241;
static _KLbyte_stringGVKd_5 K242;
extern _KLincremental_generic_functionGVKe KoddQVKd;
extern _KLstandalone_domainGVKe_1 KoddQVKdRD_dylanRD_2;
static _KLpairGVKd K245;
static _KLpairGVKd K246;
static _KLbyte_stringGVKd_4 K247;
extern _KLincremental_generic_functionGVKe KintegralQVKd;
extern _KLstandalone_domainGVKe_1 KintegralQVKdRD_dylanRD_4;
static _KLpairGVKd K250;
static _KLpairGVKd K251;
static _KLpairGVKd K252;
static _KLpairGVKd K253;
static _KLbyte_stringGVKd_9 K254;
static _KLpairGVKd K255;
static _KLpairGVKd K256;
static _KLpairGVKd K257;

/* Indirection variables */


/* Variables */

D contagious_typeVKi = &Kcontagious_typeVKi;
D zeroQVKd = &KzeroQVKd;
D positiveQVKd = &KpositiveQVKd;
D negativeQVKd = &KnegativeQVKd;
D integralQVKd = &KintegralQVKd;
D oddQVKd = &KoddQVKd;
D evenQVKd = &KevenQVKd;
D AVKd = &KAVKd;
D _VKd = &K_VKd;
D TVKd = &KTVKd;
D SVKd = &KSVKd;
D CVKd = &KCVKd;
D negativeVKd = &KnegativeVKd;
D absVKd = &KabsVKd;
D floorVKd = &KfloorVKd;
D ceilingVKd = &KceilingVKd;
D roundVKd = &KroundVKd;
D truncateVKd = &KtruncateVKd;
D floorSVKd = &KfloorSVKd;
D ceilingSVKd = &KceilingSVKd;
D roundSVKd = &KroundSVKd;
D truncateSVKd = &KtruncateSVKd;
D moduloVKd = &KmoduloVKd;
D remainderVKd = &KremainderVKd;
D Larithmetic_errorGVKe = &KLarithmetic_errorGVKe;
D Ldivision_by_zero_errorGVKe = &KLdivision_by_zero_errorGVKe;
D Larithmetic_overflow_errorGVKe = &KLarithmetic_overflow_errorGVKe;
D Larithmetic_underflow_errorGVKe = &KLarithmetic_underflow_errorGVKe;

/* Objects */

_KLincremental_generic_functionGVKe K_VKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K207,
  &K203,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &K_VKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KLVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K199,
  &KLVKdMM5I
};

_KLstandalone_domainGVKe_2 KLVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_13,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

_KLsimple_methodGVKe KEVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K199,
  &KEVKdMM6I
};

_KLstandalone_domainGVKe_2 KEVKdRD_dylanRD_21 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_20,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_33 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_32,
  (D) 5,
  &KLdivision_by_zero_errorGVKe
};

_KLincremental_generic_functionGVKe KAVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K198,
  &K194,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KAVKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_55 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_54,
  (D) 5,
  &K190
};

_KLkeyword_methodGVKe KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K187,
  &key_mep_2,
  &KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0I,
  &K188
};

_KLclassGVKd KLarithmetic_overflow_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K186,
  &K181,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLarithmetic_overflow_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K181,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KnegativeVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K180,
  &K177,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KnegativeVKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KLdivision_by_zero_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K173,
  &key_mep_2,
  &KLdivision_by_zero_errorGZ32ZconstructorVKiMM0I,
  &K174
};

_KLclassGVKd KLdivision_by_zero_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K172,
  &K167,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLdivision_by_zero_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K167,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K163,
  &key_mep_2,
  &KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0I,
  &K164
};

_KLclassGVKd KLarithmetic_underflow_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K162,
  &K146,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLarithmetic_underflow_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K146,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KTVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K145,
  &K141,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KTVKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe KfloorSVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K57,
  (D) 1,
  &K137,
  &K135,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KtruncateSVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K57,
  (D) 1,
  &K132,
  &K128,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe KpositiveQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  (D) 1,
  &K125,
  &K121,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KpositiveQVKdRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KnegativeQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  (D) 1,
  &K119,
  &K115,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KnegativeQVKdRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe KremainderVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K40,
  &KPfalseVKi,
  &K113,
  &K111,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe KzeroQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  (D) 1,
  &K108,
  &K103,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KzeroQVKdRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_31 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_30,
  (D) 5,
  &KLarithmetic_underflow_errorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_32 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_31,
  (D) 5,
  &KLarithmetic_overflow_errorGVKe
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_53 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_52,
  (D) 5,
  &K101
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_54 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_53,
  (D) 5,
  &K100
};

_KLsealed_generic_functionGVKe KroundVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K48,
  &KPfalseVKi,
  &K49,
  &K46,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KmoduloVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K40,
  &KPfalseVKi,
  &K41,
  &K38,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KmoduloVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KmoduloVKdMM0I
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &KmoduloVKdMM0,
  &K39
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &KmoduloVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K40 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K42,
  &K43
};

static _KLbyte_stringGVKd_6 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "modulo"
};

static _KLsimple_object_vectorGVKd_2 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_numberGVKi,
  &KLmachine_numberGVKi
};

static _KLsimple_object_vectorGVKd_1 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmachine_numberGVKi
};

_KLsimple_methodGVKe KroundVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KroundVKdMM0I
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &KroundVKdMM0,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KroundVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &K43,
  &K50
};

static _KLbyte_stringGVKd_5 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "round"
};

static _KLsimple_object_vectorGVKd_2 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLmachine_numberGVKi
};

_KLsealed_generic_functionGVKe Kcontagious_typeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K98,
  (D) 1,
  &K99,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KroundSVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K57,
  &KPfalseVKi,
  &K58,
  &K55,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KroundSVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KroundSVKdMM0I
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KroundSVKdMM0,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KroundSVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K42,
  &K50
};

static _KLbyte_stringGVKd_6 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "round/"
};

_KLincremental_generic_functionGVKe KabsVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K85,
  &K83,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KabsVKdRD_dylanRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KSVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K74,
  &K69,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KSVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsingle_floatGVKd K61 = {
  &KLsingle_floatGVKdW /* wrapper */,
  2.0000000
};

_KLsimple_methodGVKe KSVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K78,
  &KSVKdMM0I
};

_KLsimple_methodGVKe KSVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K76,
  &KSVKdMM1I
};

_KLsimple_methodGVKe KSVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K75,
  &KSVKdMM2I
};

_KLstandalone_domainGVKe_2 KSVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KSVKdRD_dylanRD_1,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &KSVKdMM0,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &KSVKdMM1,
  &K71
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &KSVKdMM2,
  &K72
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &KSVKdMM3,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &KSVKdMM4,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "/"
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LfloatG_typesVKi,
  &KDsignature_LfloatG_typesVKi
};

static _KLsignatureAvaluesGVKi K76 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K77,
  &KDsignature_LfloatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLfloatGVKd
};

static _KLsignatureAvaluesGVKi K78 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K79,
  &KDsignature_LfloatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfloatGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe KabsVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K86,
  &KabsVKdMM0I
};

_KLstandalone_domainGVKe_1 KabsVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KabsVKdRD_dylanRD_0,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &KabsVKdMM0,
  &K84
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &KabsVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "abs"
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K43,
  &K43
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM0,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM1,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM2,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM3,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM4,
  &K92
};

static _KLpairGVKd K92 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM5,
  &K93
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM6,
  &K94
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM7,
  &K95
};

static _KLpairGVKd K95 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM8,
  &K96
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM9,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Kcontagious_typeVKiMM10,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K98 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LrealG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_15 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "contagious-type"
};

static _KLsingletonGVKd K100 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLarithmetic_overflow_errorGVKe
};

static _KLsingletonGVKd K101 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLarithmetic_underflow_errorGVKe
};

_KLstandalone_domainGVKe_1 KzeroQVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KzeroQVKdRD_dylanRD_3,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &KzeroQVKdMM0,
  &K104
};

static _KLpairGVKd K104 = {
  &KLpairGVKdW /* wrapper */,
  &KzeroQVKdMM1,
  &K105
};

static _KLpairGVKd K105 = {
  &KLpairGVKdW /* wrapper */,
  &KzeroQVKdMM2,
  &K106
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &KzeroQVKdMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K107 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_5 K108 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "zero?"
};

_KLsimple_methodGVKe KremainderVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KremainderVKdMM0I
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &KremainderVKdMM0,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &KremainderVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K113 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "remainder"
};

_KLstandalone_domainGVKe_1 KnegativeQVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeQVKdRD_dylanRD_3,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeQVKdMM0,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeQVKdMM1,
  &K117
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeQVKdMM2,
  &K118
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeQVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "negative?"
};

_KLstandalone_domainGVKe_1 KpositiveQVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KpositiveQVKdRD_dylanRD_3,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K121 = {
  &KLpairGVKdW /* wrapper */,
  &KpositiveQVKdMM0,
  &K122
};

static _KLpairGVKd K122 = {
  &KLpairGVKdW /* wrapper */,
  &KpositiveQVKdMM1,
  &K123
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &KpositiveQVKdMM2,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &KpositiveQVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "positive?"
};

_KLsimple_methodGVKe KtruncateSVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KtruncateSVKdMM0I
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateSVKdMM0,
  &K129
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateSVKdMM1,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateSVKdMM2,
  &K131
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateSVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "truncate/"
};

_KLsimple_methodGVKe KfloorSVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KfloorSVKdMM0I
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &KfloorSVKdMM0,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &KfloorSVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "floor/"
};

_KLsimple_methodGVKe KTVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KTVKdMM0I
};

_KLstandalone_domainGVKe_2 KTVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KTVKdRD_dylanRD_2,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &KTVKdMM0,
  &K142
};

static _KLpairGVKd K142 = {
  &KLpairGVKdW /* wrapper */,
  &KTVKdMM1,
  &K143
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &KTVKdMM2,
  &K144
};

static _KLpairGVKd K144 = {
  &KLpairGVKdW /* wrapper */,
  &KTVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K145 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "*"
};

static _KLimplementation_classGVKe K146 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLarithmetic_underflow_errorGVKe,
  &KLarithmetic_underflow_errorGVKeW,
  &KPfalseVKi,
  &K147,
  (D) 6385,
  &KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0,
  &K148,
  &K149,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &K150,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

static _KLsimple_object_vectorGVKd_1 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLarithmetic_errorGVKe
};

static _KLsimple_object_vectorGVKd_7 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLarithmetic_errorGVKe,
  &KLarithmetic_underflow_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kcondition_format_stringVKdHLarithmetic_underflow_errorG
};

static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_underflow_errorG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &K152,
  &KLarithmetic_underflow_errorGVKe,
  &Kcondition_format_stringVKd
};

static _KLbyte_stringGVKd_20 K152 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "Arithmetic underflow"
};

_KLclassGVKd KLarithmetic_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K161,
  &K155,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLarithmetic_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K155,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K155 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989065,
  &KLarithmetic_errorGVKe,
  &KLarithmetic_errorGVKeW,
  &KPfalseVKi,
  &K147,
  (D) 6361,
  &Kdefault_class_constructorVKi,
  &K156,
  &K157,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K255,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &K158,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLarithmetic_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kcondition_format_stringVKdHLarithmetic_errorG
};

static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_errorG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &K160,
  &KLarithmetic_errorGVKe,
  &Kcondition_format_stringVKd
};

static _KLbyte_stringGVKd_16 K160 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "Arithmetic error"
};

static _KLbyte_stringGVKd_18 K161 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<arithmetic-error>"
};

static _KLbyte_stringGVKd_28 K162 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<arithmetic-underflow-error>"
};

static _KLkeyword_signatureAvaluesGVKi K163 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K165,
  &KDsignature_LobjectG_typesVKi,
  &K166
};

static _KLsimple_object_vectorGVKd_4 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &K152,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLarithmetic_underflow_errorGVKe
};

static _KLimplementation_classGVKe K167 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLdivision_by_zero_errorGVKe,
  &KLdivision_by_zero_errorGVKeW,
  &KPfalseVKi,
  &K147,
  (D) 6369,
  &KLdivision_by_zero_errorGZ32ZconstructorVKiMM0,
  &K148,
  &K168,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &K169,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K168 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLarithmetic_errorGVKe,
  &KLdivision_by_zero_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K169 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kcondition_format_stringVKdHLdivision_by_zero_errorG
};

static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLdivision_by_zero_errorG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &K171,
  &KLdivision_by_zero_errorGVKe,
  &Kcondition_format_stringVKd
};

static _KLbyte_stringGVKd_16 K171 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "Division by zero"
};

static _KLbyte_stringGVKd_24 K172 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<division-by-zero-error>"
};

static _KLkeyword_signatureAvaluesGVKi K173 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K165,
  &KDsignature_LobjectG_typesVKi,
  &K175
};

static _KLsimple_object_vectorGVKd_4 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &K171,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdivision_by_zero_errorGVKe
};

_KLstandalone_domainGVKe_1 KnegativeVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeVKdRD_dylanRD_2,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeVKdMM0,
  &K178
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeVKdMM1,
  &K179
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &KnegativeVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K180 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "negative"
};

static _KLimplementation_classGVKe K181 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLarithmetic_overflow_errorGVKe,
  &KLarithmetic_overflow_errorGVKeW,
  &KPfalseVKi,
  &K147,
  (D) 6377,
  &KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0,
  &K148,
  &K182,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &K183,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLarithmetic_errorGVKe,
  &KLarithmetic_overflow_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kcondition_format_stringVKdHLarithmetic_overflow_errorG
};

static _KLinherited_slot_descriptorGVKe Kcondition_format_stringVKdHLarithmetic_overflow_errorG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &K185,
  &KLarithmetic_overflow_errorGVKe,
  &Kcondition_format_stringVKd
};

static _KLbyte_stringGVKd_19 K185 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "Arithmetic overflow"
};

static _KLbyte_stringGVKd_27 K186 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<arithmetic-overflow-error>"
};

static _KLkeyword_signatureAvaluesGVKi K187 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K165,
  &KDsignature_LobjectG_typesVKi,
  &K189
};

static _KLsimple_object_vectorGVKd_4 K188 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &K185,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K189 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLarithmetic_overflow_errorGVKe
};

static _KLsingletonGVKd K190 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdivision_by_zero_errorGVKe
};

_KLsimple_methodGVKe KAVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KAVKdMM0I
};

_KLstandalone_domainGVKe_2 KAVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KAVKdRD_dylanRD_2,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

static _KLpairGVKd K194 = {
  &KLpairGVKdW /* wrapper */,
  &KAVKdMM0,
  &K195
};

static _KLpairGVKd K195 = {
  &KLpairGVKdW /* wrapper */,
  &KAVKdMM1,
  &K196
};

static _KLpairGVKd K196 = {
  &KLpairGVKdW /* wrapper */,
  &KAVKdMM2,
  &K197
};

static _KLpairGVKd K197 = {
  &KLpairGVKdW /* wrapper */,
  &KAVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K198 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "+"
};

static _KLsignatureAvaluesGVKi K199 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K42,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe K_VKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &K_VKdMM0I
};

_KLstandalone_domainGVKe_2 K_VKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &K_VKdRD_dylanRD_2,
  (D) 9,
  &KLcomplexGVKd,
  &KLcomplexGVKd
};

static _KLpairGVKd K203 = {
  &KLpairGVKdW /* wrapper */,
  &K_VKdMM0,
  &K204
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &K_VKdMM1,
  &K205
};

static _KLpairGVKd K205 = {
  &KLpairGVKdW /* wrapper */,
  &K_VKdMM2,
  &K206
};

static _KLpairGVKd K206 = {
  &KLpairGVKdW /* wrapper */,
  &K_VKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K207 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "-"
};

_KLsealed_generic_functionGVKe KceilingSVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K57,
  &KPfalseVKi,
  &K213,
  &K211,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KceilingSVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KceilingSVKdMM0I
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &KceilingSVKdMM0,
  &K212
};

static _KLpairGVKd K212 = {
  &KLpairGVKdW /* wrapper */,
  &KceilingSVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K213 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "ceiling/"
};

_KLsealed_generic_functionGVKe KtruncateVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K48,
  &KPfalseVKi,
  &K219,
  &K217,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KtruncateVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KtruncateVKdMM0I
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateVKdMM0,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &KtruncateVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K219 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "truncate"
};

_KLsealed_generic_functionGVKe KceilingVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K48,
  &KPfalseVKi,
  &K225,
  &K223,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KceilingVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KceilingVKdMM0I
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KceilingVKdMM0,
  &K224
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &KceilingVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K225 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "ceiling"
};

_KLsealed_generic_functionGVKe KfloorVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K48,
  &KPfalseVKi,
  &K231,
  &K229,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KfloorVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KfloorVKdMM0I
};

static _KLpairGVKd K229 = {
  &KLpairGVKdW /* wrapper */,
  &KfloorVKdMM0,
  &K230
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &KfloorVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K231 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "floor"
};

_KLincremental_generic_functionGVKe KCVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K237,
  &K234,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KCVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_2 KCVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KCVKdRD_dylanRD_1,
  (D) 9,
  &KLcomplexGVKd,
  &KLintegerGVKd
};

static _KLpairGVKd K234 = {
  &KLpairGVKdW /* wrapper */,
  &KCVKdMM0,
  &K235
};

static _KLpairGVKd K235 = {
  &KLpairGVKdW /* wrapper */,
  &KCVKdMM1,
  &K236
};

static _KLpairGVKd K236 = {
  &KLpairGVKdW /* wrapper */,
  &KCVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_1 K237 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "^"
};

_KLincremental_generic_functionGVKe KevenQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  &KPfalseVKi,
  &K242,
  &K240,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KevenQVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_1 KevenQVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KevenQVKdRD_dylanRD_1,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &KevenQVKdMM0,
  &K241
};

static _KLpairGVKd K241 = {
  &KLpairGVKdW /* wrapper */,
  &KevenQVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K242 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "even?"
};

_KLincremental_generic_functionGVKe KoddQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  &KPfalseVKi,
  &K247,
  &K245,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KoddQVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_1 KoddQVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KoddQVKdRD_dylanRD_1,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K245 = {
  &KLpairGVKdW /* wrapper */,
  &KoddQVKdMM0,
  &K246
};

static _KLpairGVKd K246 = {
  &KLpairGVKdW /* wrapper */,
  &KoddQVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K247 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "odd?"
};

_KLincremental_generic_functionGVKe KintegralQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K107,
  &KPfalseVKi,
  &K254,
  &K250,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KintegralQVKdRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLstandalone_domainGVKe_1 KintegralQVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KintegralQVKdRD_dylanRD_3,
  (D) 5,
  &KLcomplexGVKd
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &KintegralQVKdMM0,
  &K251
};

static _KLpairGVKd K251 = {
  &KLpairGVKdW /* wrapper */,
  &KintegralQVKdMM1,
  &K252
};

static _KLpairGVKd K252 = {
  &KLpairGVKdW /* wrapper */,
  &KintegralQVKdMM2,
  &K253
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &KintegralQVKdMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K254 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "integral?"
};

static _KLpairGVKd K255 = {
  &KLpairGVKdW /* wrapper */,
  &KLarithmetic_underflow_errorGVKe,
  &K256
};

static _KLpairGVKd K256 = {
  &KLpairGVKdW /* wrapper */,
  &KLarithmetic_overflow_errorGVKe,
  &K257
};

static _KLpairGVKd K257 = {
  &KLpairGVKdW /* wrapper */,
  &KLdivision_by_zero_errorGVKe,
  &KPempty_listVKi
};

/* Code */

D KLVKdMM5I (D x_, D y_) {
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T3 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T3, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T3, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T6 = CONGRUENT_CALL2(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:147
  return(T6);
}

D KEVKdMM6I (D x_, D y_) {
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T3 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T3, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T3, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T6 = CONGRUENT_CALL2(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:146
  return(T6);
}

D KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:114
  T5 = primitive_object_allocate_filled(3,&KLarithmetic_overflow_errorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:114
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLdivision_by_zero_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:107
  T5 = primitive_object_allocate_filled(3,&KLdivision_by_zero_errorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:107
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:121
  T5 = primitive_object_allocate_filled(3,&KLarithmetic_underflow_errorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:121
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmoduloVKdMM0I (D real_, D divisor_) {
  D T3_0;
  D T3_1;
  D remainder_;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:260
  CONGRUENT_CALL_PROLOG(&KfloorSVKd, 2);
  T3_0 = CONGRUENT_CALL2(real_, divisor_);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:260
  remainder_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:261
  T5_0 = remainder_;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:258
  MV_SET_COUNT(1);
  return(T5_0);
}

D KroundVKdMM0I (D real_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:187
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:189
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T2 = CONGRUENT_CALL2(real_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:189
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(T2, real_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:189
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:189
  T5 = CALL2(&KroundSVKd, T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:187
  return(T5);
}

D KroundSVKdMM0I (D real_, D divisor_) {
  D T3_0;
  D T3_1;
  D integerF4;
  D remainder_;
  D T6;
  D T7;
  D threshold_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D minus_threshold_;
  D UtmpF17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T24_1;
  D T25_0;
  D T25_1;
  D T26_0;
  D T26_1;
  D T27_0;
  D UtmpF28;
  DWORD T29;
  D T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34_0;
  D T34_1;
  DWORD T35;
  DWORD T36;
  D T37;
  D T38_0;
  D T38_1;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44_0;
  D T44_1;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48_0;
  D T48_1;
  D T49_0;
  D T49_1;
  D T50_0;
  D T50_1;
  D T51_0;
  D T51_1;
  D T52_0;
  D T52_1;
  D T53_0;
  D T53_1;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:229
  CONGRUENT_CALL_PROLOG(&KtruncateSVKd, 2);
  T3_0 = CONGRUENT_CALL2(real_, divisor_);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:229
  integerF4 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:229
  remainder_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:230
  CONGRUENT_CALL_PROLOG(&KabsVKd, 1);
  T6 = CONGRUENT_CALL1(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:230
  CONGRUENT_CALL_PROLOG(&KSVKd, 2);
  T7 = CONGRUENT_CALL2(T6, &K61);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:230
  threshold_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T27_0 = CONGRUENT_CALL2(threshold_, remainder_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
  UtmpF28 = T27_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
  if (UtmpF28 != &KPfalseVKi) {
    T11 = UtmpF28;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T9 = CONGRUENT_CALL2(remainder_, threshold_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
      T29 = primitive_cast_integer_as_raw(integerF4);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
      T30 = primitive_machine_word_logbitQ(2,T29);
      T10 = T30;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:232
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:231
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:233
    CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
    T12 = CONGRUENT_CALL1(divisor_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:233
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      T31 = primitive_cast_integer_as_raw(integerF4);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      T32 = primitive_machine_word_subtract_signal_overflow(T31,4);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      T33 = primitive_cast_raw_as_integer(T32);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T13 = CONGRUENT_CALL2(remainder_, divisor_);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      T34_0 = T33;
      T34_1 = T13;
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:234
      T52_0 = T34_0;
      T52_1 = T34_1;
      T15_0 = T52_0;
      T15_1 = T52_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      T35 = primitive_cast_integer_as_raw(integerF4);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      T36 = primitive_machine_word_add_signal_overflow(T35,4);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      T37 = primitive_cast_raw_as_integer(T36);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T14 = CONGRUENT_CALL2(remainder_, divisor_);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      T38_0 = T37;
      T38_1 = T14;
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:236
      T53_0 = T38_0;
      T53_1 = T38_1;
      T15_0 = T53_0;
      T15_1 = T53_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:233
    T26_0 = T15_0;
    T26_1 = T15_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:239
    CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
    minus_threshold_ = CONGRUENT_CALL1(threshold_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:240
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    UtmpF17 = CONGRUENT_CALL2(remainder_, minus_threshold_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:240
    if (UtmpF17 != &KPfalseVKi) {
      T20 = UtmpF17;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:241
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T18 = CONGRUENT_CALL2(remainder_, minus_threshold_);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:241
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:241
        T39 = primitive_cast_integer_as_raw(integerF4);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:241
        T40 = primitive_machine_word_logbitQ(2,T39);
        T19 = T40;
      } else {
        T19 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:241
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:240
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:231
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:243
      CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
      T21 = CONGRUENT_CALL1(divisor_);
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:243
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        T41 = primitive_cast_integer_as_raw(integerF4);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        T42 = primitive_machine_word_add_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T22 = CONGRUENT_CALL2(remainder_, divisor_);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        T44_0 = T43;
        T44_1 = T22;
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:244
        T50_0 = T44_0;
        T50_1 = T44_1;
        T24_0 = T50_0;
        T24_1 = T50_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        T45 = primitive_cast_integer_as_raw(integerF4);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        T46 = primitive_machine_word_subtract_signal_overflow(T45,4);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        T47 = primitive_cast_raw_as_integer(T46);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T23 = CONGRUENT_CALL2(remainder_, divisor_);
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        T48_0 = T47;
        T48_1 = T23;
        // /opt/opendylan-2013.1/sources/dylan/number.dylan:246
        T51_0 = T48_0;
        T51_1 = T48_1;
        T24_0 = T51_0;
        T24_1 = T51_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:243
      T25_0 = T24_0;
      T25_1 = T24_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:249
      T49_0 = integerF4;
      T49_1 = remainder_;
      T25_0 = T49_0;
      T25_1 = T49_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:231
    T26_0 = T25_0;
    T26_1 = T25_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:231
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:227
  MV_SET_ELT(1, T26_1);
  MV_SET_COUNT(2);
  return(T26_0);
}

D KSVKdMM0I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DDFLT T9;
  D T10;
  DWORD T11;
  DSFLT T12;
  D T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  T6 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  T7 = primitive_machine_word_less_thanQ(T6,-67108855);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  if (T7 != &KPfalseVKi) {
    T5 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T8 = primitive_machine_word_less_thanQ(67108857,T6);
    T5 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T11 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T9 = primitive_integer_as_double_float(T11);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T10 = primitive_raw_as_double_float(T9);
    T15 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T14 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T12 = primitive_integer_as_single_float(T14);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
    T13 = primitive_raw_as_single_float(T12);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:166
  CONGRUENT_CALL_PROLOG(&KSVKd, 2);
  T3_0 = CONGRUENT_CALL2(x_, T15);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:165
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:165
  MV_SET_COUNT(1);
  return(T4_0);
}

D KSVKdMM1I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DDFLT T9;
  D T10;
  DWORD T11;
  DSFLT T12;
  D T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  T6 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  T7 = primitive_machine_word_less_thanQ(T6,-67108855);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  if (T7 != &KPfalseVKi) {
    T5 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T8 = primitive_machine_word_less_thanQ(67108857,T6);
    T5 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T11 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T9 = primitive_integer_as_double_float(T11);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T10 = primitive_raw_as_double_float(T9);
    T15 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T14 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T12 = primitive_integer_as_single_float(T14);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
    T13 = primitive_raw_as_single_float(T12);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:170
  CONGRUENT_CALL_PROLOG(&KSVKd, 2);
  T3_0 = CONGRUENT_CALL2(T15, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:169
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:169
  MV_SET_COUNT(1);
  return(T4_0);
}

D KSVKdMM2I (D x_, D y_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:173
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:174
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T4 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:174
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T4, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:174
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T6 = CONGRUENT_CALL2(T4, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:174
  CONGRUENT_CALL_PROLOG(&KSVKd, 2);
  T7 = CONGRUENT_CALL2(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:174
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:173
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:173
  MV_SET_COUNT(1);
  return(T3_0);
}

D KabsVKdMM0I (D x_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:270
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
  CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
  T2 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
    CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
    T3_0 = CONGRUENT_CALL1(x_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
    T6_0 = T3_0;
    T5_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
    T4_0 = x_;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:271
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:270
  MV_SET_COUNT(1);
  return(T5_0);
}

D KremainderVKdMM0I (D real_, D divisor_) {
  D T3_0;
  D T3_1;
  D remainder_;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:264
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:266
  CONGRUENT_CALL_PROLOG(&KtruncateSVKd, 2);
  T3_0 = CONGRUENT_CALL2(real_, divisor_);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:266
  remainder_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:267
  T5_0 = remainder_;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:264
  MV_SET_COUNT(1);
  return(T5_0);
}

D KtruncateSVKdMM0I (D real_, D divisor_) {
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:255
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T3 = CONGRUENT_CALL2(real_, divisor_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:255
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T3, real_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:255
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T3, divisor_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:255
  T6 = CALL2(&KtruncateSVKd, T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:253
  return(T6);
}

D KfloorSVKdMM0I (D real_, D divisor_) {
  D T3_0;
  D T3_1;
  D integer_;
  D remainder_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T13_1;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D T19_0;
  D T19_1;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:197
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:199
  CONGRUENT_CALL_PROLOG(&KtruncateSVKd, 2);
  T3_0 = CONGRUENT_CALL2(real_, divisor_);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:199
  integer_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:199
  remainder_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:200
  CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
  T6 = CONGRUENT_CALL1(remainder_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:200
  if (T6 != &KPfalseVKi) {
    T11 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:201
    CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
    T7 = CONGRUENT_CALL1(divisor_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:201
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:202
      CONGRUENT_CALL_PROLOG(&KpositiveQVKd, 1);
      T8 = CONGRUENT_CALL1(real_);
      T10 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:204
      CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
      T9 = CONGRUENT_CALL1(real_);
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:201
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:200
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:200
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    T14 = primitive_cast_integer_as_raw(integer_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    T15 = primitive_machine_word_subtract_signal_overflow(T14,4);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    T16 = primitive_cast_raw_as_integer(T15);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T12 = CONGRUENT_CALL2(remainder_, divisor_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    T17_0 = T16;
    T17_1 = T12;
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:206
    T19_0 = T17_0;
    T19_1 = T17_1;
    T13_0 = T19_0;
    T13_1 = T19_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:208
    T18_0 = integer_;
    T18_1 = remainder_;
    T13_0 = T18_0;
    T13_1 = T18_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:200
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:197
  MV_SET_ELT(1, T13_1);
  MV_SET_COUNT(2);
  return(T13_0);
}

D KTVKdMM0I (D x_, D y_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T4 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T4, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T6 = CONGRUENT_CALL2(T4, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T7 = CONGRUENT_CALL2(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:160
  MV_SET_COUNT(1);
  return(T3_0);
}

D KAVKdMM0I (D x_, D y_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T4 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T4, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T6 = CONGRUENT_CALL2(T4, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T7 = CONGRUENT_CALL2(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:158
  MV_SET_COUNT(1);
  return(T3_0);
}

D K_VKdMM0I (D x_, D y_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T4 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(T4, x_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T6 = CONGRUENT_CALL2(T4, y_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T7 = CONGRUENT_CALL2(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:159
  MV_SET_COUNT(1);
  return(T3_0);
}

D KceilingSVKdMM0I (D real_, D divisor_) {
  D T3_0;
  D T3_1;
  D integer_;
  D remainder_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T13_1;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D T19_0;
  D T19_1;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:212
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:214
  CONGRUENT_CALL_PROLOG(&KtruncateSVKd, 2);
  T3_0 = CONGRUENT_CALL2(real_, divisor_);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:214
  integer_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:214
  remainder_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:215
  CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
  T6 = CONGRUENT_CALL1(remainder_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:215
  if (T6 != &KPfalseVKi) {
    T11 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:216
    CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
    T7 = CONGRUENT_CALL1(divisor_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:216
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:217
      CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
      T8 = CONGRUENT_CALL1(real_);
      T10 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/number.dylan:219
      CONGRUENT_CALL_PROLOG(&KpositiveQVKd, 1);
      T9 = CONGRUENT_CALL1(real_);
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:216
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:215
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:215
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    T14 = primitive_cast_integer_as_raw(integer_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    T15 = primitive_machine_word_add_signal_overflow(T14,4);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    T16 = primitive_cast_raw_as_integer(T15);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T12 = CONGRUENT_CALL2(remainder_, divisor_);
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    T17_0 = T16;
    T17_1 = T12;
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:221
    T19_0 = T17_0;
    T19_1 = T17_1;
    T13_0 = T19_0;
    T13_1 = T19_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/number.dylan:223
    T18_0 = integer_;
    T18_1 = remainder_;
    T13_0 = T18_0;
    T13_1 = T18_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:215
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:212
  MV_SET_ELT(1, T13_1);
  MV_SET_COUNT(2);
  return(T13_0);
}

D KtruncateVKdMM0I (D real_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:194
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T2 = CONGRUENT_CALL2(real_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:194
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(T2, real_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:194
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:194
  T5 = CALL2(&KtruncateSVKd, T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:192
  return(T5);
}

D KceilingVKdMM0I (D real_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:182
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:184
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T2 = CONGRUENT_CALL2(real_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:184
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(T2, real_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:184
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:184
  T5 = CALL2(&KceilingSVKd, T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:182
  return(T5);
}

D KfloorVKdMM0I (D real_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/number.dylan:177
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:179
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T2 = CONGRUENT_CALL2(real_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:179
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(T2, real_);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:179
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:179
  T5 = CALL2(&KfloorSVKd, T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/number.dylan:177
  return(T5);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_number_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_number_for_user () {
  return;
}


/* eof */
