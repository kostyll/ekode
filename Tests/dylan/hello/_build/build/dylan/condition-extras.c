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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(64);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
} _KLlistGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_warningGVKd;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsealed_class_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D sealed_generic_function_error_generic_;
  D sealed_generic_function_error_operation_;
  D sealed_generic_function_error_arguments_;
} _KLsealed_generic_function_errorGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_restartGVKd;

typedef struct {
  D wrapper;
} _KLabortGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
} _KLsealed_object_errorGVKd;

typedef struct {
  D wrapper;
} _KLrestartGVKd;


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
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrestartG_typesVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Khandler_typeVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsealed_generic_functionGVKe Khandler_testVKi;
extern _KLsealed_generic_functionGVKe Khandler_functionVKi;
extern _KLsealed_generic_functionGVKe Khandler_init_argumentsVKi;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLsimple_warningGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_warningGVKdW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
D KerrorVKdMM1I (D, D);
extern _KLsealed_generic_functionGVKe Kinvoke_debuggerVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LconditionG_typesVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Ltype_errorG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsealed_object_errorG_typesVKi;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LabortG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_restartG_typesVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLsealed_generic_functionGVKe KinstanceQVKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLslot_type_errorGVKe;
extern _KLclassGVKd KLsealed_class_errorGVKi;
extern _KLclassGVKd KLsealed_generic_function_errorGVKe;
extern D Tcurrent_handlersTVKi;
extern D Tlast_handlersTVKi;

/* Defined object declarations */

extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_restartGVKdW;
extern _KLclassGVKd KLabortGVKd;
extern _KLmm_wrapperGVKi_0 KLabortGVKdW;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLclassGVKd KLsealed_object_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsealed_object_errorGVKdW;
extern _KLclassGVKd KLrestartGVKd;
extern _KLmm_wrapperGVKi_0 KLrestartGVKdW;
D KcerrorVKdMM0I (D, D, D);
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM2;
D Kdefault_handlerVKdMM2I (D);
extern _KLinstance_slot_descriptorGVKe Ktype_error_valueVKdHLtype_errorG;
extern _KLinstance_slot_descriptorGVKe Ktype_error_expected_typeVKdHLtype_errorG;
extern _KLkeyword_methodGVKe KmakeVKdMM3;
D KmakeVKdMM3I (D, D, D, D);
D KPbreakVKiMM1I (D, D);
D Kdo_handlersVKdMM0I (D);
extern _KLincremental_generic_functionGVKe Krestart_queryVKd;
extern _KLsimple_methodGVKe Krestart_queryVKdMM0;
D Krestart_queryVKdMM0I (D);
static _KLpairGVKd K22;
static _KLbyte_stringGVKd_13 K23;
static _KLsignatureGVKe K24;
static _KLsimple_closure_methodGVKi_0 Kalways_trueF32;
static D Kalways_trueF32I (D);
static _KLsimple_closure_methodGVKi_0 Kdo_with_handlersF29;
static D Kdo_with_handlersF29I (D, D);
static _KLsignatureGVKe K30;
static _KLsimple_object_vectorGVKd_2 K31;
extern _KLsealed_generic_functionGVKe KPbreakVKi;
extern _KLsimple_methodGVKe KPbreakVKiMM0;
D KPbreakVKiMM0I (D, D);
extern _KLsimple_methodGVKe KPbreakVKiMM1;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLsignatureGVKe K39;
static _KLbyte_stringGVKd_6 K40;
static _KLsignatureGVKe K41;
static _KLbyte_stringGVKd_64 K42;
static _KLsignatureGVKe K43;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF47;
static D Kanonymous_of_makeF47I (D);
static _KLbyte_stringGVKd_20 K46;
static _KLbyte_stringGVKd_15 K48;
static _KLsignatureGVKe K49;
static _KLkeyword_signatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_4 K51;
static _KLsimple_object_vectorGVKd_1 K52;
static _KLsimple_object_vectorGVKd_2 K53;
static _KLsingletonGVKd K54;
extern _KLsealed_generic_functionGVKe Ktype_error_expected_typeVKd;
extern _KLgetter_methodGVKi Ktype_error_expected_typeVKdMM0;
static _KLpairGVKd K57;
static _KLbyte_stringGVKd_24 K58;
extern _KLsealed_generic_functionGVKe Ktype_error_valueVKd;
extern _KLgetter_methodGVKi Ktype_error_valueVKdMM0;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_16 K62;
static _KLbyte_stringGVKd_25 K63;
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF66;
static D KUhandler_functionUF66I (D, D);
static _KLsignatureGVKe K67;
static _KLsimple_object_vectorGVKd_2 K68;
static _KLimplementation_classGVKe K69;
static _KLsimple_object_vectorGVKd_1 K70;
static _KLsimple_object_vectorGVKd_6 K71;
static _KLsimple_object_vectorGVKd_1 K72;
static _KLsimple_object_vectorGVKd_1 K73;
static _KLbyte_stringGVKd_9 K74;
static _KLimplementation_classGVKe K75;
extern _KLkeyword_methodGVKe KLsealed_object_errorGZ32ZconstructorVKiMM0;
D KLsealed_object_errorGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K78;
static _KLsimple_object_vectorGVKd_6 K79;
static _KLsimple_object_vectorGVKd_1 K80;
static _KLkeyword_signatureAvaluesGVKi K81;
static _KLbyte_stringGVKd_21 K82;
static _KLimplementation_classGVKe K83;
static _KLsimple_object_vectorGVKd_4 K84;
extern _KLkeyword_methodGVKe KLtype_errorGZ32ZconstructorVKiMM0;
D KLtype_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K87;
static _KLsimple_object_vectorGVKd_6 K88;
static _KLsimple_object_vectorGVKd_2 K89;
static _KLkeyword_signatureAvaluesGVKi K90;
static _KLsimple_object_vectorGVKd_8 K91;
static _KLsimple_object_vectorGVKd_4 K92;
static _KLbyte_stringGVKd_12 K93;
static _KLimplementation_classGVKe K94;
extern _KLkeyword_methodGVKe KLabortGZ32ZconstructorVKiMM0;
D KLabortGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K97;
static _KLsimple_object_vectorGVKd_6 K98;
static _KLkeyword_signatureAvaluesGVKi K99;
static _KLbyte_stringGVKd_7 K100;
static _KLimplementation_classGVKe K101;
static _KLsimple_object_vectorGVKd_2 K102;
extern _KLkeyword_methodGVKe KLsimple_restartGZ32ZconstructorVKiMM0;
D KLsimple_restartGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K105;
static _KLsimple_object_vectorGVKd_6 K106;
static _KLkeyword_signatureAvaluesGVKi K107;
static _KLsimple_object_vectorGVKd_4 K108;
static _KLsimple_object_vectorGVKd_2 K109;
static _KLbyte_stringGVKd_16 K110;
extern _KLincremental_generic_functionGVKe Kreturn_descriptionVKd;
static _KLbyte_stringGVKd_18 K112;
extern _KLincremental_generic_functionGVKe Kreturn_allowedQVKd;
extern _KLsimple_methodGVKe Kreturn_allowedQVKdMM0;
D Kreturn_allowedQVKdMM0I (D);
static _KLpairGVKd K116;
static _KLbyte_stringGVKd_15 K117;
static _KLsignatureGVKe K118;
extern _KLincremental_generic_functionGVKe Kreturn_queryVKd;
static _KLbyte_stringGVKd_12 K120;
extern _KLsimple_methodGVKe KbreakVKdMM0;
D KbreakVKdMM0I (D);
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF127;
static D KUhandler_functionUF127I (D, D);
static _KLbyte_stringGVKd_18 K125;
static _KLbyte_stringGVKd_6 K126;
extern _KLsimple_methodGVKe KcerrorVKdMM0;
static _KLsignatureGVKe K129;
extern _KLsimple_methodGVKe KabortVKdMM0;
D KabortVKdMM0I ();
static _KLsignatureAvaluesGVKi K132;
static _KLsimple_object_vectorGVKd_1 K133;
extern _KLsimple_methodGVKe Kcheck_typeVKdMM0;
D Kcheck_typeVKdMM0I (D value_, D type_);
extern _KLsimple_methodGVKe Kdo_handlersVKdMM0;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLpairGVKd K141;

/* Indirection variables */


/* Variables */

D do_handlersVKd = &Kdo_handlersVKdMM0;
D check_typeVKd = &Kcheck_typeVKdMM0;
D type_error_valueVKd = &Ktype_error_valueVKd;
D type_error_expected_typeVKd = &Ktype_error_expected_typeVKd;
D abortVKd = &KabortVKdMM0;
D cerrorVKd = &KcerrorVKdMM0;
D breakVKd = &KbreakVKdMM0;
D restart_queryVKd = &Krestart_queryVKd;
D return_queryVKd = &Kreturn_queryVKd;
D LrestartGVKd = &KLrestartGVKd;
D Lsimple_restartGVKd = &KLsimple_restartGVKd;
D return_allowedQVKd = &Kreturn_allowedQVKd;
D return_descriptionVKd = &Kreturn_descriptionVKd;
D LabortGVKd = &KLabortGVKd;
D Ltype_errorGVKd = &KLtype_errorGVKd;
D Lsealed_object_errorGVKd = &KLsealed_object_errorGVKd;

/* Objects */

_KLclassGVKd KLsimple_restartGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K110,
  &K101,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_restartGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K101,
  (D) 1,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLabortGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K100,
  &K94,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLabortGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K94,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLtype_errorGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K93,
  &K83,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLtype_errorGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K83,
  (D) 2049,
  17,
  33554439,
  (D) 1
};

_KLclassGVKd KLsealed_object_errorGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K82,
  &K75,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsealed_object_errorGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K75,
  (D) 2049,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLrestartGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K74,
  &K69,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLrestartGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K69,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kdefault_handlerVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K24,
  &Kdefault_handlerVKdMM2I
};

_KLinstance_slot_descriptorGVKe Ktype_error_valueVKdHLtype_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLtype_errorGVKd,
  &KJvalue_,
  &Ktype_error_valueVKd,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Ktype_error_expected_typeVKdHLtype_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLtype_errorGVKd,
  &KJtype_,
  &Ktype_error_expected_typeVKd,
  &KPfalseVKi,
  &KLtypeGVKd
};

_KLkeyword_methodGVKe KmakeVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K50,
  &key_mep_4,
  &KmakeVKdMM3I,
  &K51
};

_KLincremental_generic_functionGVKe Krestart_queryVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K23,
  &K22,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Krestart_queryVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K24,
  &Krestart_queryVKdMM0I
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &Krestart_queryVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "restart-query"
};

static _KLsignatureGVKe K24 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LrestartG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 Kalways_trueF32 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kalways_trueF32I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kdo_with_handlersF29 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K30,
  &Kdo_with_handlersF29I,
  (D) 1
};

static _KLsignatureGVKe K30 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K31
};

static _KLsimple_object_vectorGVKd_2 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlistGVKd
};

_KLsealed_generic_functionGVKe KPbreakVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K39,
  (D) 1,
  &K40,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPbreakVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K43,
  &KPbreakVKiMM0I
};

_KLsimple_methodGVKe KPbreakVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K41,
  &KPbreakVKiMM1I
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &KPbreakVKiMM0,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &KPbreakVKiMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K39 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_6 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "%break"
};

static _KLsignatureGVKe K41 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_64 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 257,
  "Can only supply format arguments when supplying a format string."
};

static _KLsignatureGVKe K43 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LconditionG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF47 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K49,
  &Kanonymous_of_makeF47I,
  (D) 1
};

static _KLbyte_stringGVKd_20 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "%= is not of type %="
};

static _KLbyte_stringGVKd_15 K48 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureGVKe K49 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K50 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39060485,
  &K52,
  &K53,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Ltype_errorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJvalue_,
  &KPfalseVKi,
  &KJtype_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K54
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJvalue_,
  &KJtype_
};

static _KLsingletonGVKd K54 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLtype_errorGVKd
};

_KLsealed_generic_functionGVKe Ktype_error_expected_typeVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K58,
  &K57,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktype_error_expected_typeVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktype_error_expected_typeVKdHLtype_errorG
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_error_expected_typeVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "type-error-expected-type"
};

_KLsealed_generic_functionGVKe Ktype_error_valueVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K62,
  &K61,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktype_error_valueVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktype_error_valueVKdHLtype_errorG
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_error_valueVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "type-error-value"
};

static _KLbyte_stringGVKd_25 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "No restart handler for %="
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF66 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K67,
  &KUhandler_functionUF66I,
  (D) 1
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K68
};

static _KLsimple_object_vectorGVKd_2 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_restartGVKd,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K69 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLrestartGVKd,
  &KLrestartGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6321,
  &Kdefault_class_constructorVKi,
  &K70,
  &K71,
  (D) 9,
  &K72,
  &K73,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K137,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLrestartGVKd,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 13
};

static _KLsimple_object_vectorGVKd_1 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_conditionGVKe
};

static _KLbyte_stringGVKd_9 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "<restart>"
};

static _KLimplementation_classGVKe K75 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLsealed_object_errorGVKd,
  &KLsealed_object_errorGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6353,
  &KLsealed_object_errorGZ32ZconstructorVKiMM0,
  &K78,
  &K79,
  (D) 17,
  &K80,
  &K73,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K140,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsealed_object_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K81,
  &key_mep_2,
  &KLsealed_object_errorGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_6 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsealed_object_errorGVKd,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 21
};

static _KLkeyword_signatureAvaluesGVKi K81 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lsealed_object_errorG_typesVKi
};

static _KLbyte_stringGVKd_21 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<sealed-object-error>"
};

static _KLimplementation_classGVKe K83 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835793,
  &KLtype_errorGVKd,
  &KLtype_errorGVKdW,
  &KPfalseVKi,
  &K84,
  (D) 6345,
  &KLtype_errorGZ32ZconstructorVKiMM0,
  &K87,
  &K88,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K139,
  &KPempty_vectorVKi,
  &K89,
  &K84,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Ktype_error_valueVKdHLtype_errorG,
  &Ktype_error_expected_typeVKdHLtype_errorG
};

_KLkeyword_methodGVKe KLtype_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K90,
  &key_mep_2,
  &KLtype_errorGZ32ZconstructorVKiMM0I,
  &K91
};

static _KLsimple_object_vectorGVKd_2 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLtype_errorGVKd
};

static _KLsimple_object_vectorGVKd_2 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Ktype_error_valueVKdHLtype_errorG,
  &Ktype_error_expected_typeVKdHLtype_errorG
};

static _KLkeyword_signatureAvaluesGVKi K90 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K92,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Ltype_errorG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJvalue_,
  &KPunboundVKi,
  &KJtype_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJvalue_,
  &KJtype_
};

static _KLbyte_stringGVKd_12 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "<type-error>"
};

static _KLimplementation_classGVKe K94 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835777,
  &KLabortGVKd,
  &KLabortGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6337,
  &KLabortGZ32ZconstructorVKiMM0,
  &K97,
  &K98,
  (D) 13,
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

_KLkeyword_methodGVKe KLabortGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K99,
  &key_mep_2,
  &KLabortGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrestartGVKd
};

static _KLsimple_object_vectorGVKd_6 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLrestartGVKd,
  &KLabortGVKd,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K99 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_LabortG_typesVKi
};

static _KLbyte_stringGVKd_7 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<abort>"
};

static _KLimplementation_classGVKe K101 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835785,
  &KLsimple_restartGVKd,
  &KLsimple_restartGVKdW,
  &KPfalseVKi,
  &K102,
  (D) 6329,
  &KLsimple_restartGZ32ZconstructorVKiMM0,
  &K105,
  &K106,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K102,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLsimple_restartGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K107,
  &key_mep_2,
  &KLsimple_restartGZ32ZconstructorVKiMM0I,
  &K108
};

static _KLsimple_object_vectorGVKd_2 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrestartGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLrestartGVKd,
  &KLsimple_restartGVKd,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K107 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K109,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_restartG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLbyte_stringGVKd_16 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<simple-restart>"
};

_KLincremental_generic_functionGVKe Kreturn_descriptionVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K112,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_18 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "return-description"
};

_KLincremental_generic_functionGVKe Kreturn_allowedQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K117,
  &K116,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kreturn_allowedQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K118,
  &Kreturn_allowedQVKdMM0I
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &Kreturn_allowedQVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "return-allowed?"
};

static _KLsignatureGVKe K118 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LconditionG_typesVKi
};

_KLincremental_generic_functionGVKe Kreturn_queryVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K120,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_12 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "return-query"
};

_KLsimple_methodGVKe KbreakVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K49,
  &KbreakVKdMM0I
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF127 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K67,
  &KUhandler_functionUF127I,
  (D) 1
};

static _KLbyte_stringGVKd_18 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "Return from break."
};

static _KLbyte_stringGVKd_6 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "Break."
};

_KLsimple_methodGVKe KcerrorVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K129,
  &KcerrorVKdMM0I
};

static _KLsignatureGVKe K129 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088777,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe KabortVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K132,
  &KabortVKdMM0I
};

static _KLsignatureAvaluesGVKi K132 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K133
};

static _KLsimple_object_vectorGVKd_1 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

_KLsimple_methodGVKe Kcheck_typeVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kcheck_typeVKdMM0I
};

_KLsimple_methodGVKe Kdo_handlersVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kdo_handlersVKdMM0I
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &KLabortGVKd,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_restartGVKd,
  &KPempty_listVKi
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KLslot_type_errorGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &KLsealed_class_errorGVKi,
  &K141
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &KLsealed_generic_function_errorGVKe,
  &KPempty_listVKi
};

/* Code */

D KcerrorVKdMM0I (D restart_descr_, D cond_or_string_, D arguments_) {
  volatile D Uunwind_exceptionUPexit_10_;
  volatile D T5;
  volatile D Uoriginal_handlersU_;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D T11;
  volatile _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T13;
  volatile D T14_0;
  volatile _KLsimple_object_vectorGVKd_8 T15 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T16;
  volatile D T17;
  volatile D T18;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:54
  T11 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_10_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_10_))) {
    T10 = FRAME_RETVAL(Uunwind_exceptionUPexit_10_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T7 = MAKE_CLOSURE_INITD(&KUhandler_functionUF66, 2, Uoriginal_handlersU_, Uunwind_exceptionUPexit_10_);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:59
    T12.vector_element_[0] = &KJformat_string_;
    T12.vector_element_[1] = restart_descr_;
    T12.vector_element_[2] = &KJformat_arguments_;
    T12.vector_element_[3] = T11;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:59
    T13 = primitive_copy_vector(&T12);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T15.vector_element_[0] = &KJtype_;
    T15.vector_element_[1] = &KLsimple_restartGVKd;
    T15.vector_element_[2] = &KJfunction_;
    T15.vector_element_[3] = T7;
    T15.vector_element_[4] = &KJtest_;
    T15.vector_element_[5] = &KPfalseVKi;
    T15.vector_element_[6] = &KJinit_arguments_;
    T15.vector_element_[7] = T13;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T14_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T15, &KLsimple_restartGVKd, T7, &KPfalseVKi, T13);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T16 = T14_0;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T8 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    T17 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    SLOT_VALUE_SETTER(T16, T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    SLOT_VALUE_SETTER(T8, T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T17);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    ENTER_UNWIND_FRAME(T9);
    if (!nlx_setjmp(FRAME_DEST(T9))) {
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:56
      T18 = APPLY2(&KerrorVKd, cond_or_string_, T11);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
      FALL_THROUGH_UNWIND(T18);
    }
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  T10 = T18;
    /* invalidate Uunwind_exceptionUPexit_10_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:54
  return(T10);
}

D Kdefault_handlerVKdMM2I (D restart_) {
  D T2;
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:66
  T3.vector_element_[0] = restart_;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:66
  KerrorVKdMM1I(&K63, &T3);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:67
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:65
  return(T2);
}

D KmakeVKdMM3I (D class_, D keys_, D value_, D type_) {
  D T5_0;
  D T6;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_2 T9 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:97
  T8 = primitive_copy_vector(keys_);
  T6 = primitive_next_methods_parameter();
  T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF47, 3, T8, T6, class_);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:102
  T9.vector_element_[0] = value_;
  T9.vector_element_[1] = type_;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:102
  T10 = primitive_copy_vector(&T9);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:100
  T11_0 = APPLY6(T7, class_, &KJformat_string_, &K46, &KJformat_arguments_, T10, T8);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:97
  T5_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:97
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPbreakVKiMM1I (D string_, D arguments_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:32
  T5 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:33
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = string_;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:33
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsimple_warningGVKd, &T6);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:33
  CONGRUENT_CALL_PROLOG(&KPbreakVKi, 2);
  T4 = CONGRUENT_CALL2(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:32
  return(T4);
}

D Kdo_handlersVKdMM0I (D function_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:120
  T2 = &Kalways_trueF32;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:123
  T3 = MAKE_CLOSURE(&Kdo_with_handlersF29, 1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:123
  INIT_CLOSURE(T3, 1, T2);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:131
  T4 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:131
  get_teb()->function = T3;
  Kdo_with_handlersF29I(function_, T4);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:132
  T5 = Tlast_handlersTVKi;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:132
  get_teb()->function = T3;
  T6 = Kdo_with_handlersF29I(function_, T5);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:119
  return(T6);
}

D Krestart_queryVKdMM0I (D restart_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:43
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:42
  return(T2);
}

static D Kalways_trueF32I (D x_) {
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:121
  T1 = &KPtrueVKi;
  MV_SET_ELT(0, &KPtrueVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:120
  return(T1);
}

static D Kdo_with_handlersF29I (D function_, D handlers_) {
  D T2T, T2;
  D T3;
  D T4;
  D Utmp_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:123
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
  T2T = handlers_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
    T10 = primitive_idQ(T2,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T11 = SLOT_VALUE_INITD(T2, 0);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:125
      T3 = function_;
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:125
      T4 = CALL1(&Khandler_typeVKi, T11);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:126
      Utmp_ = CALL1(&Khandler_testVKi, T11);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:126
      if (Utmp_ != &KPfalseVKi) {
        T6 = Utmp_;
      } else {
        T6 = CREF(0);
      }
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:126
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:127
      T7 = CALL1(&Khandler_functionVKi, T11);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:128
      T8 = CALL1(&Khandler_init_argumentsVKi, T11);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:125
      CALL4(T3, T4, T6, T7, T8);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T13 = SLOT_VALUE_INITD(T2, 1);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T14_0 = T13;
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T12_0 = T14_0;
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T15 = T12_0;
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
      T2T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
    T9 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:123
  return(T9);
}

D KPbreakVKiMM0I (D condition_, D noise_) {
  D T3;
  D T4;
  DWORD T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:26
  T4 = SLOT_VALUE_INITD(noise_, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:26
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:26
  T6 = primitive_machine_word_equalQ(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:26
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:27
    KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:29
  CONGRUENT_CALL_PROLOG(&Kinvoke_debuggerVKi, 1);
  T3 = CONGRUENT_CALL1(condition_);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:25
  return(T3);
}

static D Kanonymous_of_makeF47I (D Unext_method_argsU_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  CAPTURE_ENVIRONMENT

  T6 = primitive_idQ(CREF(1),&KPempty_listVKi);
  if (T6 != &KPfalseVKi) {
    T14 = KerrorVKdMM1I(&K48, &KPempty_vectorVKi);
    T5 = T14;
  } else {
    T7 = SLOT_VALUE_INITD(Unext_method_argsU_, 0);
    T8 = primitive_cast_integer_as_raw(T7);
    T9 = primitive_machine_word_equalQ(T8,1);
    if (T9 != &KPfalseVKi) {
      T10 = SLOT_VALUE_INITD(CREF(1), 0);
      T11 = SLOT_VALUE_INITD(CREF(1), 1);
      MEP_CALL_PROLOG(T10, T11, 2);
      T2 = MEP_CALL2(T10, CREF(2), CREF(0));
      T4 = T2;
    } else {
      T12 = SLOT_VALUE_INITD(CREF(1), 0);
      T13 = SLOT_VALUE_INITD(CREF(1), 1);
      T3 = MEP_APPLY1(T12, T13, Unext_method_argsU_);
      T4 = T3;
    }
    T5 = T4;
  }
  return(T5);
}

static D KUhandler_functionUF66I (D UdummyU_, D Unext_handlerU_) {
  D T3;
  D all_values_;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:61
  T3 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  all_values_ = MV_GET_REST_AT(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:55
  return(T6);
}

D KLsealed_object_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:115
  T3 = primitive_object_allocate_filled(1,&KLsealed_object_errorGVKdW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:115
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLtype_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_type_error_value_, D Uunique_type_error_expected_type_) {
  D T7;
  D Uunique_type_error_expected_typeF8;
  D Uunique_type_error_expected_typeF9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:92
  T7 = primitive_object_allocate_filled(5,&KLtype_errorGVKdW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T7, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T7, 1);
  SLOT_VALUE_SETTER(Uunique_type_error_value_, T7, 2);
  T11 = primitive_idQ(Uunique_type_error_expected_type_,&KPunboundVKi);
  if (T11 != &KPfalseVKi) {
    Uunique_type_error_expected_typeF9 = Uunique_type_error_expected_type_;
  } else {
    Uunique_type_error_expected_typeF8 = Uunique_type_error_expected_type_;
    Uunique_type_error_expected_typeF9 = Uunique_type_error_expected_typeF8;
  }
  SLOT_VALUE_SETTER(Uunique_type_error_expected_typeF9, T7, 3);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T10_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:92
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLabortGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:82
  T3 = primitive_object_allocate_filled(1,&KLabortGVKdW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:82
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLsimple_restartGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:51
  T5 = primitive_object_allocate_filled(3,&KLsimple_restartGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:51
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kreturn_allowedQVKdMM0I (D condition_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:74
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:75
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:74
  return(T2);
}

D KbreakVKdMM0I (D arguments_) {
  volatile D Uunwind_exceptionUPexit_9_;
  volatile D Uoriginal_handlersU_;
  volatile D T4;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile _KLsimple_object_vectorGVKd_2 T9 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T10;
  volatile D T11_0;
  volatile _KLsimple_object_vectorGVKd_8 T12 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T13;
  volatile D T14;
  volatile D T15;
  volatile DWORD T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_9_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_9_))) {
  } else {
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T4 = MAKE_CLOSURE_INITD(&KUhandler_functionUF127, 2, Uoriginal_handlersU_, Uunwind_exceptionUPexit_9_);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:20
    T9.vector_element_[0] = &KJformat_string_;
    T9.vector_element_[1] = &K125;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:20
    T10 = primitive_copy_vector(&T9);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T12.vector_element_[0] = &KJtype_;
    T12.vector_element_[1] = &KLsimple_restartGVKd;
    T12.vector_element_[2] = &KJfunction_;
    T12.vector_element_[3] = T4;
    T12.vector_element_[4] = &KJtest_;
    T12.vector_element_[5] = &KPfalseVKi;
    T12.vector_element_[6] = &KJinit_arguments_;
    T12.vector_element_[7] = T10;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T11_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T12, &KLsimple_restartGVKd, T4, &KPfalseVKi, T10);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T13 = T11_0;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T5 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    SLOT_VALUE_SETTER(T13, T14, 0);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    SLOT_VALUE_SETTER(T5, T14, 1);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T14);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:14
      T15 = SLOT_VALUE_INITD(arguments_, 0);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:14
      T16 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:14
      T17 = primitive_machine_word_equalQ(T16,1);
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:14
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:15
        T18 = KPbreakVKiMM1I(&K126, &KPempty_vectorVKi);
        T7 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:17
        T19 = APPLY1(&KPbreakVKi, arguments_);
        T7 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:14
      // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
      FALL_THROUGH_UNWIND(T7);
    }
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
    /* invalidate Uunwind_exceptionUPexit_9_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:22
  T8 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:12
  return(T8);
}

static D KUhandler_functionUF127I (D UdummyU_, D Unext_handlerU_) {
  D T3_0;
  D all_values_;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  all_values_ = MV_GET_REST_AT(T3_0, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:13
  return(T6);
}

D KabortVKdMM0I () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:87
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T1 = CONGRUENT_CALL2(&KLabortGVKd, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:87
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T2_0 = CONGRUENT_CALL2(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:85
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcheck_typeVKdMM0I (D value_, D type_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:107
  T3 = CALL2(&KinstanceQVKd, value_, type_);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:107
  if (T3 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:108
    T6.vector_element_[0] = &KJvalue_;
    T6.vector_element_[1] = value_;
    T6.vector_element_[2] = &KJtype_;
    T6.vector_element_[3] = type_;
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:108
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T6);
    // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:108
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T4, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:110
  T5 = value_;
  MV_SET_ELT(0, value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition-extras.dylan:106
  return(T5);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_condition_extras_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_condition_extras_for_user () {
  return;
}


/* eof */
