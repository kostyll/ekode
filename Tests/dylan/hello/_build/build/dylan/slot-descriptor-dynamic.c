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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(55);
define__KLbyte_stringGVKd(95);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(17);

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D symbol_name_;
} _KLsymbolGVKd;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D method_slot_descriptor_;
} _KLrepeated_getter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

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
} _KLconstant_slot_descriptorGVKi;

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
} _KLkeyword_signatureGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_slot_errorGVKi;

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
} _KLslot_initial_value_descriptorGVKi;

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
} _KLclass_slot_descriptorGVKi;

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
  D size_slot_descriptor_;
} _KLrepeated_slot_descriptorGVKe;


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
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLvirtual_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLvirtual_slot_descriptorGVKiW;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLsymbolGVKd KJslot_descriptor_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lslot_descriptorG_typesVKi;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lrepeated_slot_descriptorG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLclassGVKd KLconstant_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLconstant_slot_descriptorGVKiW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLany_instance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_instance_slot_descriptorGVKeW;
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsimple_slot_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_slot_errorGVKiW;
D KerrorVKdMM0I (D, D);
D Kinit_keyword_requiredQ_setterVKiMM0I (D, D);
extern _KLsymbolGVKd KJrequired_init_keyword_;
extern _KLsymbolGVKd KJinit_keyword_;
extern _KLsymbolGVKd KJinit_value_;
extern _KLsymbolGVKd KJinit_function_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLslot_keyword_initialization_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_keyword_initialization_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe;
D Kinit_evaluatedQ_setterVKiMM0I (D, D);
D Kinit_suppliedQ_setterVKiMM0I (D, D);
D Kinit_valueQ_setterVKiMM0I (D, D);
extern _KLclassGVKd KLslot_initial_value_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLslot_initial_value_descriptorGVKiW;
extern _KLsymbolGVKd KJsetter_;
extern _KLsymbolGVKd KJvirtual_;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJconstant_;
extern _KLclassGVKd KLclass_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLclass_slot_descriptorGVKiW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLeach_subclass_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLeach_subclass_slot_descriptorGVKiW;
extern _KLsymbolGVKd KJeach_subclass_;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJrepeated_;
extern D Dnot_foundVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM5;
D Kas_slot_descriptor_classVKiMM5I (D);
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM4;
D Kas_slot_descriptor_classVKiMM4I (D);
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM3;
D Kas_slot_descriptor_classVKiMM3I (D);
extern _KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM2;
D Kas_slot_descriptor_classVKiMM2I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM4;
D Kslot_allocationVKeMM4I (D);
extern _KLsimple_methodGVKe Kslot_allocationVKeMM5;
D Kslot_allocationVKeMM5I (D);
extern _KLkeyword_methodGVKe KinitializeVKdMM12;
D KinitializeVKdMM12I (D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM13;
D KinitializeVKdMM13I (D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM14;
D KinitializeVKdMM14I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM15;
D KinitializeVKdMM15I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM16;
D KinitializeVKdMM16I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM17;
D KinitializeVKdMM17I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM18;
D KinitializeVKdMM18I (D, D, D);
extern _KLsealed_generic_functionGVKe Kadd_getter_methodVKi;
extern _KLsealed_generic_functionGVKe Kadd_setter_methodVKi;
extern _KLsimple_methodGVKe Kadd_setter_methodVKiMM0;
D Kadd_setter_methodVKiMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kadd_setter_methodVKiMM1;
D Kadd_setter_methodVKiMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kadd_setter_methodVKiMM2;
D Kadd_setter_methodVKiMM2I (D, D, D, D);
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_17 K37;
static _KLsignatureGVKe K38;
static _KLsimple_object_vectorGVKd_4 K39;
D Kmake_a_slot_methodVKiI (D, D);
extern _KLsealed_generic_functionGVKe Kslot_accessor_method_classesVKi;
extern _KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM0;
D Kslot_accessor_method_classesVKiMM0I (D);
extern _KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM1;
D Kslot_accessor_method_classesVKiMM1I (D);
extern _KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM2;
D Kslot_accessor_method_classesVKiMM2I (D);
static _KLpairGVKd K48;
static _KLpairGVKd K49;
static _KLpairGVKd K50;
static _KLsignatureAvaluesGVKi K51;
static _KLbyte_stringGVKd_28 K52;
static _KLsimple_object_vectorGVKd_2 K53;
static _KLunionGVKe K54;
static _KLsingletonGVKd K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsignatureAvaluesGVKi K57;
static _KLsimple_object_vectorGVKd_1 K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLsignatureAvaluesGVKi K60;
static _KLsignatureGVKe K61;
static _KLsimple_object_vectorGVKd_4 K62;
static _KLsignatureGVKe K63;
static _KLsimple_object_vectorGVKd_4 K64;
extern _KLsimple_methodGVKe Kadd_getter_methodVKiMM0;
D Kadd_getter_methodVKiMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kadd_getter_methodVKiMM1;
D Kadd_getter_methodVKiMM1I (D, D, D, D);
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLbyte_stringGVKd_17 K71;
static _KLbyte_stringGVKd_15 K72;
static _KLkeyword_signatureGVKe K73;
static _KLsimple_object_vectorGVKd_2 K74;
static _KLsimple_object_vectorGVKd_1 K75;
static _KLsimple_object_vectorGVKd_1 K76;
static _KLkeyword_signatureGVKe K77;
static _KLsimple_object_vectorGVKd_1 K78;
static _KLkeyword_signatureGVKe K79;
static _KLsimple_object_vectorGVKd_1 K80;
static _KLkeyword_signatureGVKe K81;
static _KLsimple_object_vectorGVKd_1 K82;
static _KLbyte_stringGVKd_36 K83;
static _KLbyte_stringGVKd_95 K84;
static _KLkeyword_signatureGVKe K85;
static _KLsimple_object_vectorGVKd_8 K86;
static _KLsimple_object_vectorGVKd_1 K87;
static _KLsimple_object_vectorGVKd_4 K88;
static _KLbyte_stringGVKd_55 K89;
static _KLkeyword_signatureGVKe K90;
static _KLsimple_object_vectorGVKd_4 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLsimple_object_vectorGVKd_2 K93;
static _KLbyte_stringGVKd_63 K94;
static _KLbyte_stringGVKd_45 K95;
static _KLkeyword_signatureGVKe K96;
static _KLsimple_object_vectorGVKd_10 K97;
static _KLsimple_object_vectorGVKd_1 K98;
static _KLsimple_object_vectorGVKd_5 K99;
static _KLsignatureAvaluesGVKi K100;
static _KLsimple_object_vectorGVKd_1 K101;
static _KLsymbolGVKd KJinstance_;
static _KLbyte_stringGVKd_8 K103;
static _KLsignatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_1 K105;
static _KLsignatureGVKe K106;
static _KLsimple_object_vectorGVKd_1 K107;
static _KLsingletonGVKd K108;
static _KLsignatureGVKe K109;
static _KLsimple_object_vectorGVKd_1 K110;
static _KLsingletonGVKd K111;
static _KLsignatureGVKe K112;
static _KLsimple_object_vectorGVKd_1 K113;
static _KLsingletonGVKd K114;
static _KLsignatureGVKe K115;
static _KLsimple_object_vectorGVKd_1 K116;
static _KLsingletonGVKd K117;

/* Indirection variables */

static D IKJinstance_ = &KJinstance_;

/* Variables */

D add_getter_methodVKi = &Kadd_getter_methodVKi;
D add_setter_methodVKi = &Kadd_setter_methodVKi;

/* Objects */

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K115,
  &Kas_slot_descriptor_classVKiMM5I
};

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kas_slot_descriptor_classVKiMM4I
};

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K109,
  &Kas_slot_descriptor_classVKiMM3I
};

_KLsimple_methodGVKe Kas_slot_descriptor_classVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K106,
  &Kas_slot_descriptor_classVKiMM2I
};

_KLsimple_methodGVKe Kslot_allocationVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kslot_allocationVKeMM4I
};

_KLsimple_methodGVKe Kslot_allocationVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K100,
  &Kslot_allocationVKeMM5I
};

_KLkeyword_methodGVKe KinitializeVKdMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K96,
  &key_mep_7,
  &KinitializeVKdMM12I,
  &K97
};

_KLkeyword_methodGVKe KinitializeVKdMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K90,
  &key_mep_4,
  &KinitializeVKdMM13I,
  &K91
};

_KLkeyword_methodGVKe KinitializeVKdMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K85,
  &key_mep_6,
  &KinitializeVKdMM14I,
  &K86
};

_KLkeyword_methodGVKe KinitializeVKdMM15 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K81,
  &key_mep_3,
  &KinitializeVKdMM15I,
  &K74
};

_KLkeyword_methodGVKe KinitializeVKdMM16 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K79,
  &key_mep_3,
  &KinitializeVKdMM16I,
  &K74
};

_KLkeyword_methodGVKe KinitializeVKdMM17 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K77,
  &key_mep_3,
  &KinitializeVKdMM17I,
  &K74
};

_KLkeyword_methodGVKe KinitializeVKdMM18 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K73,
  &key_mep_3,
  &KinitializeVKdMM18I,
  &K74
};

_KLsealed_generic_functionGVKe Kadd_getter_methodVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 45,
  &K71,
  &K69,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kadd_setter_methodVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 45,
  &K37,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kadd_setter_methodVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K63,
  &Kadd_setter_methodVKiMM0I
};

_KLsimple_methodGVKe Kadd_setter_methodVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K61,
  &Kadd_setter_methodVKiMM1I
};

_KLsimple_methodGVKe Kadd_setter_methodVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K38,
  &Kadd_setter_methodVKiMM2I
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_setter_methodVKiMM0,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_setter_methodVKiMM1,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_setter_methodVKiMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "add-setter-method"
};

static _KLsignatureGVKe K38 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K39
};

static _KLsimple_object_vectorGVKd_4 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLgeneric_functionGVKd,
  &KLvirtual_slot_descriptorGVKi,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe Kslot_accessor_method_classesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K51,
  (D) 1,
  &K52,
  &K48,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K60,
  &Kslot_accessor_method_classesVKiMM0I
};

_KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K57,
  &Kslot_accessor_method_classesVKiMM1I
};

_KLsimple_methodGVKe Kslot_accessor_method_classesVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &Kslot_accessor_method_classesVKiMM2I
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_accessor_method_classesVKiMM0,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_accessor_method_classesVKiMM1,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_accessor_method_classesVKiMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K51 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lslot_descriptorG_typesVKi,
  &K53
};

static _KLbyte_stringGVKd_28 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "slot-accessor-method-classes"
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K54,
  &K54
};

static _KLunionGVKe K54 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K55,
  &KLclassGVKd
};

static _KLsingletonGVKd K55 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lrepeated_slot_descriptorG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &K58,
  &K59
};

static _KLsimple_object_vectorGVKd_1 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLvirtual_slot_descriptorGVKi
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K55,
  &K55
};

static _KLsignatureAvaluesGVKi K60 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lslot_descriptorG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureGVKe K61 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K62
};

static _KLsimple_object_vectorGVKd_4 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLgeneric_functionGVKd,
  &KLslot_descriptorGVKe,
  &KLbooleanGVKd
};

static _KLsignatureGVKe K63 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K64
};

static _KLsimple_object_vectorGVKd_4 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLgeneric_functionGVKd,
  &KLconstant_slot_descriptorGVKi,
  &KLbooleanGVKd
};

_KLsimple_methodGVKe Kadd_getter_methodVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K61,
  &Kadd_getter_methodVKiMM0I
};

_KLsimple_methodGVKe Kadd_getter_methodVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K38,
  &Kadd_getter_methodVKiMM1I
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_getter_methodVKiMM0,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &Kadd_getter_methodVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K71 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "add-getter-method"
};

static _KLbyte_stringGVKd_15 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K73 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K75,
  &K76,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJslot_descriptor_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrepeated_setter_methodGVKi
};

static _KLsimple_object_vectorGVKd_1 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJslot_descriptor_
};

static _KLkeyword_signatureGVKe K77 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K78,
  &K76,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrepeated_getter_methodGVKi
};

static _KLkeyword_signatureGVKe K79 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K80,
  &K76,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsetter_methodGVKi
};

static _KLkeyword_signatureGVKe K81 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K82,
  &K76,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLgetter_methodGVKi
};

static _KLbyte_stringGVKd_36 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "Init-keyword: must be a <symbol>: %="
};

static _KLbyte_stringGVKd_95 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 381,
  "Required-init-keyword: may not be specified with init-keyword, init-value, or init-function: %="
};

static _KLkeyword_signatureGVKe K85 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46923781,
  &K87,
  &K88,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJrequired_init_keyword_,
  &KPfalseVKi,
  &KJinit_keyword_,
  &KPfalseVKi,
  &KJinit_value_,
  &KPunboundVKi,
  &KJinit_function_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_keyword_initialization_descriptorGVKe
};

static _KLsimple_object_vectorGVKd_4 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJrequired_init_keyword_,
  &KJinit_keyword_,
  &KJinit_value_,
  &KJinit_function_
};

static _KLbyte_stringGVKd_55 K89 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 221,
  "Init-value: may not be specified with init-function: %="
};

static _KLkeyword_signatureGVKe K90 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47972357,
  &K92,
  &K93,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJinit_value_,
  &KPunboundVKi,
  &KJinit_function_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_initial_value_descriptorGVKi
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJinit_value_,
  &KJinit_function_
};

static _KLbyte_stringGVKd_63 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "Must specify init-value or init-function for a constant slot %="
};

static _KLbyte_stringGVKd_45 K95 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Illegal slot-definition for constant slot %=."
};

static _KLkeyword_signatureGVKe K96 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &K98,
  &K99,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_10 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJinit_value_,
  &KPunboundVKi,
  &KJinit_function_,
  &KPfalseVKi,
  &KJinit_keyword_,
  &KPfalseVKi,
  &KJrequired_init_keyword_,
  &KPfalseVKi,
  &KJsetter_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconstant_slot_descriptorGVKi
};

static _KLsimple_object_vectorGVKd_5 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJinit_value_,
  &KJinit_function_,
  &KJinit_keyword_,
  &KJrequired_init_keyword_,
  &KJsetter_
};

static _KLsignatureAvaluesGVKi K100 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K58,
  &K101
};

static _KLsimple_object_vectorGVKd_1 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsymbolGVKd KJinstance_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K103
};

static _KLbyte_stringGVKd_8 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "instance"
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K105,
  &K101
};

static _KLsimple_object_vectorGVKd_1 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinstance_slot_descriptorGVKe
};

static _KLsignatureGVKe K106 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K107
};

static _KLsimple_object_vectorGVKd_1 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K108
};

static _KLsingletonGVKd K108 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJconstant_
};

static _KLsignatureGVKe K109 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K110
};

static _KLsimple_object_vectorGVKd_1 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K111
};

static _KLsingletonGVKd K111 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJclass_
};

static _KLsignatureGVKe K112 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K113
};

static _KLsimple_object_vectorGVKd_1 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K114
};

static _KLsingletonGVKd K114 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJeach_subclass_
};

static _KLsignatureGVKe K115 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K116
};

static _KLsimple_object_vectorGVKd_1 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K117
};

static _KLsingletonGVKd K117 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJrepeated_
};

/* Code */

D Kas_slot_descriptor_classVKiMM5I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:68
  T2 = &KLrepeated_slot_descriptorGVKe;
  MV_SET_ELT(0, &KLrepeated_slot_descriptorGVKe);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:67
  return(T2);
}

D Kas_slot_descriptor_classVKiMM4I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:59
  T2 = &KLeach_subclass_slot_descriptorGVKi;
  MV_SET_ELT(0, &KLeach_subclass_slot_descriptorGVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:58
  return(T2);
}

D Kas_slot_descriptor_classVKiMM3I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:55
  T2 = &KLclass_slot_descriptorGVKi;
  MV_SET_ELT(0, &KLclass_slot_descriptorGVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:54
  return(T2);
}

D Kas_slot_descriptor_classVKiMM2I (D symbol_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:14
  T2 = &KLconstant_slot_descriptorGVKi;
  MV_SET_ELT(0, &KLconstant_slot_descriptorGVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:13
  return(T2);
}

D Kslot_allocationVKeMM4I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:10
  T2_0 = IKJinstance_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kslot_allocationVKeMM5I (D descriptor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:64
  T2_0 = &KJvirtual_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:62
  MV_SET_COUNT(1);
  return(T2_0);
}

D KinitializeVKdMM12I (D descriptor_, D all_keys_, D init_value_, D init_function_, D init_keyword_, D required_init_keyword_, D setter_var_) {
  D T8;
  D init_valueF9;
  D T10;
  D T11;
  D T12;
  D Utmp_;
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
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T27 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
  T19 = primitive_copy_vector(all_keys_);
  T18 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
  T20 = primitive_idQ(init_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
    T8 = Dnot_foundVKi;
    init_valueF9 = T8;
  } else {
    init_valueF9 = init_value_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
  T21 = primitive_idQ(T18,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
    T22 = SLOT_VALUE_INITD(T18, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
    T23 = SLOT_VALUE_INITD(T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
    MEP_CALL_PROLOG(T22, T23, 2);
    MEP_CALL2(T22, descriptor_, T19);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
  T24 = primitive_idQ(init_valueF9,Dnot_foundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
    T25 = primitive_not(init_function_);
    T10 = T25;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:44
    T26.vector_element_[0] = descriptor_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:44
    T11 = KlistVKdI(&T26);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:42
    T27.vector_element_[0] = &KJformat_string_;
    T27.vector_element_[1] = &K94;
    T27.vector_element_[2] = &KJformat_arguments_;
    T27.vector_element_[3] = T11;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:42
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T12 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T27);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:42
    KerrorVKdMM0I(T12, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  if (init_keyword_ != &KPfalseVKi) {
    Utmp_ = init_keyword_;
  } else {
    Utmp_ = required_init_keyword_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  if (Utmp_ != &KPfalseVKi) {
    T14 = Utmp_;
  } else {
    T14 = setter_var_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:49
    T28.vector_element_[0] = T19;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:49
    T15 = KlistVKdI(&T28);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:47
    T29.vector_element_[0] = &KJformat_string_;
    T29.vector_element_[1] = &K95;
    T29.vector_element_[2] = &KJformat_arguments_;
    T29.vector_element_[3] = T15;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:47
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T29);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:47
    KerrorVKdMM0I(T16, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:51
  T17 = descriptor_;
  MV_SET_ELT(0, descriptor_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:32
  return(T17);
}

D KinitializeVKdMM13I (D descriptor_, D all_keys_, D init_value_, D init_function_) {
  D T5;
  D init_valueF6;
  D T7;
  D init_functionF8;
  D T9;
  D T10;
  D T11;
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
  D T24;
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_1 T27 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T28 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  T18 = primitive_copy_vector(all_keys_);
  T17 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  T19 = primitive_idQ(init_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
    T5 = Dnot_foundVKi;
    init_valueF6 = T5;
  } else {
    init_valueF6 = init_value_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  T20 = primitive_idQ(init_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
    T7 = Dnot_foundVKi;
    init_functionF8 = T7;
  } else {
    init_functionF8 = init_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
  T21 = primitive_idQ(T17,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
    T22 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
    T23 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
    MEP_CALL_PROLOG(T22, T23, 2);
    MEP_CALL2(T22, descriptor_, T18);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:79
  APPLY2(&Kinitialize_packed_slotsVKe, descriptor_, T18);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:80
  T24 = primitive_idQ(init_valueF6,Dnot_foundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:81
  T26 = primitive_idQ(init_functionF8,Dnot_foundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:81
  T25 = primitive_not(T26);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:82
  if (T24 != &KPfalseVKi) {
    T9 = &KPfalseVKi;
  } else {
    T9 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:82
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:85
    T27.vector_element_[0] = descriptor_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:85
    T10 = KlistVKdI(&T27);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:83
    T28.vector_element_[0] = &KJformat_string_;
    T28.vector_element_[1] = &K89;
    T28.vector_element_[2] = &KJformat_arguments_;
    T28.vector_element_[3] = T10;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:83
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T11 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T28);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:83
    KerrorVKdMM0I(T11, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:87
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:87
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:87
      T14 = &KPfalseVKi;
      T15 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:93
      Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:94
      Kinit_suppliedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:95
      SLOT_VALUE_SETTER(init_functionF8, descriptor_, 1);
      // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:95
      T13 = &KPfalseVKi;
      T15 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:87
    T16 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:88
    Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:89
    Kinit_suppliedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:90
    Kinit_valueQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:91
    SLOT_VALUE_SETTER(init_valueF6, descriptor_, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:91
    T12 = &KPfalseVKi;
    T16 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:71
  MV_SET_COUNT(0);
  return(T16);
}

D KinitializeVKdMM14I (D descriptor_, D Urest_, D required_init_keyword_, D init_keyword_, D init_value_, D init_function_) {
  D T7;
  D init_valueF8;
  D T9;
  D init_functionF10;
  D T11;
  D T12;
  D T13;
  D Utmp_;
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
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T34 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T35;
  D T36;
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T40 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  T23 = primitive_copy_vector(Urest_);
  T22 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  T26 = primitive_idQ(init_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
    T7 = Dnot_foundVKi;
    init_valueF8 = T7;
  } else {
    init_valueF8 = init_value_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  T27 = primitive_idQ(init_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
    T9 = Dnot_foundVKi;
    init_functionF10 = T9;
  } else {
    init_functionF10 = init_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
  T28 = primitive_idQ(T22,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
    T29 = SLOT_VALUE_INITD(T22, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
    T30 = SLOT_VALUE_INITD(T22, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
    MEP_CALL_PROLOG(T29, T30, 2);
    MEP_CALL2(T29, descriptor_, T23);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
  if (init_keyword_ != &KPfalseVKi) {
    T24 = init_keyword_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
    T31 = primitive_instanceQ(T24,&KLsymbolGVKd);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
    T32 = primitive_not(T31);
    T11 = T32;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:111
    T33.vector_element_[0] = init_keyword_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:111
    T12 = KlistVKdI(&T33);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:109
    T34.vector_element_[0] = &KJformat_string_;
    T34.vector_element_[1] = &K83;
    T34.vector_element_[2] = &KJformat_arguments_;
    T34.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:109
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T34);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:109
    KerrorVKdMM0I(T13, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:113
  T36 = primitive_idQ(init_valueF8,Dnot_foundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:113
  T35 = primitive_not(T36);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:114
  T38 = primitive_idQ(init_functionF10,Dnot_foundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:114
  T37 = primitive_not(T38);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:115
  if (required_init_keyword_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:116
    if (init_keyword_ != &KPfalseVKi) {
      Utmp_ = init_keyword_;
    } else {
      Utmp_ = T35;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:116
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:116
    if (Utmp_ != &KPfalseVKi) {
      T15 = Utmp_;
    } else {
      T15 = T37;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:116
    T16 = T15;
  } else {
    T16 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:115
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:120
    T39.vector_element_[0] = descriptor_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:120
    T17 = KlistVKdI(&T39);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:117
    T40.vector_element_[0] = &KJformat_string_;
    T40.vector_element_[1] = &K84;
    T40.vector_element_[2] = &KJformat_arguments_;
    T40.vector_element_[3] = T17;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:117
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T18 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T40);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:117
    KerrorVKdMM0I(T18, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:122
  if (required_init_keyword_ != &KPfalseVKi) {
    T25 = required_init_keyword_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:123
    Kinit_keyword_requiredQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:124
    SLOT_VALUE_SETTER(T25, descriptor_, 3);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:124
    T19 = &KPfalseVKi;
    T21 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:122
    T20 = &KPfalseVKi;
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:99
  MV_SET_COUNT(0);
  return(T21);
}

D KinitializeVKdMM15I (D m_, D initargs_, D slot_descriptor_) {
  D slot_descriptorF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:157
  T7 = primitive_copy_vector(initargs_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:157
  primitive_type_check(slot_descriptor_, &KLslot_descriptorGVKe);
  slot_descriptorF4 = slot_descriptor_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:159
  T8 = primitive_instanceQ(slot_descriptorF4,&KLany_instance_slot_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:159
  if (T8 != &KPfalseVKi) {
    T5 = (D) 1;
  } else {
    T5 = (D) 9;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:159
  primitive_set_accessor_method_xep(m_,T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
  T9 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
    T10 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
    T11 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
    MEP_CALL_PROLOG(T10, T11, 2);
    MEP_CALL2(T10, m_, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:166
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:157
  MV_SET_COUNT(0);
  return(T12);
}

D KinitializeVKdMM16I (D m_, D initargs_, D slot_descriptor_) {
  D slot_descriptorF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:169
  T7 = primitive_copy_vector(initargs_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:169
  primitive_type_check(slot_descriptor_, &KLslot_descriptorGVKe);
  slot_descriptorF4 = slot_descriptor_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:171
  T8 = primitive_instanceQ(slot_descriptorF4,&KLany_instance_slot_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:171
  if (T8 != &KPfalseVKi) {
    T5 = (D) 5;
  } else {
    T5 = (D) 13;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:171
  primitive_set_accessor_method_xep(m_,T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
  T9 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
    T10 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
    T11 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
    MEP_CALL_PROLOG(T10, T11, 2);
    MEP_CALL2(T10, m_, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:178
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:169
  MV_SET_COUNT(0);
  return(T12);
}

D KinitializeVKdMM17I (D m_, D initargs_, D slot_descriptor_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:181
  T5 = primitive_copy_vector(initargs_);
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:181
  primitive_type_check(slot_descriptor_, &KLslot_descriptorGVKe);
  slot_descriptor_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:183
  primitive_set_accessor_method_xep(m_,(D) 17);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
  T6 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
    T7 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
    T8 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
    MEP_CALL_PROLOG(T7, T8, 2);
    MEP_CALL2(T7, m_, T5);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:186
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:181
  MV_SET_COUNT(0);
  return(T9);
}

D KinitializeVKdMM18I (D m_, D initargs_, D slot_descriptor_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:189
  T5 = primitive_copy_vector(initargs_);
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:189
  primitive_type_check(slot_descriptor_, &KLslot_descriptorGVKe);
  slot_descriptor_;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:191
  primitive_set_accessor_method_xep(m_,(D) 21);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
  T6 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
    KerrorVKdMM1I(&K72, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
    T7 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
    T8 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
    MEP_CALL_PROLOG(T7, T8, 2);
    MEP_CALL2(T7, m_, T5);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:194
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:189
  MV_SET_COUNT(0);
  return(T9);
}

D Kadd_setter_methodVKiMM0I (D class_, D slot_setter_, D descriptor_, D override_sealingQ_) {
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:22
  T5 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_ELT(1, &KPfalseVKi);
  MV_SET_COUNT(2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:17
  return(T5);
}

D Kadd_setter_methodVKiMM1I (D class_not_, D slot_setter_, D descriptor_, D override_sealingQ_) {
  D new_method_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:274
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:279
  new_method_ = Kmake_a_slot_methodVKiI(descriptor_, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:280
  T7 = SLOT_VALUE_INITD(class_not_, 4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:280
  T8 = SLOT_VALUE_INITD(T7, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:281
  T9 = primitive_not(override_sealingQ_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:281
  T10 = SLOT_VALUE_INITD(descriptor_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:281
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:281
  T12 = primitive_machine_word_logbitQ(14,T11);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:280
  T6 = KPadd_a_methodVKnI(slot_setter_, new_method_, T8, &KPtrueVKi, T9, T12);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:274
  return(T6);
}

D Kadd_setter_methodVKiMM2I (D class_, D slot_setter_, D descriptor_, D override_sealingQ_) {
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:316
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:321
  T5 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_ELT(1, &KPfalseVKi);
  MV_SET_COUNT(2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:316
  return(T5);
}

D Kmake_a_slot_methodVKiI (D sd_, D setterQ_) {
  D T2_0;
  D T2_1;
  D gtype_;
  D stype_;
  D thetype_;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:243
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:244
  CONGRUENT_CALL_PROLOG(&Kslot_accessor_method_classesVKi, 1);
  T2_0 = CONGRUENT_CALL1(sd_);
  T2_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:244
  gtype_ = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:244
  stype_ = T2_1;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:245
  if (setterQ_ != &KPfalseVKi) {
    thetype_ = stype_;
  } else {
    thetype_ = gtype_;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:246
  if (thetype_ != &KPfalseVKi) {
    T9 = thetype_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:246
    T10.vector_element_[0] = &KJslot_descriptor_;
    T10.vector_element_[1] = sd_;
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:246
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(T9, &T10);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:246
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:246
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:243
  return(T8);
}

D Kslot_accessor_method_classesVKiMM0I (D sd_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:205
  T2_0 = &KLgetter_methodGVKi;
  T2_1 = &KLsetter_methodGVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:203
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Kslot_accessor_method_classesVKiMM1I (D sd_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:210
  T2_0 = &KPfalseVKi;
  T2_1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:208
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Kslot_accessor_method_classesVKiMM2I (D sd_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:215
  T2_0 = &KLrepeated_getter_methodGVKi;
  T2_1 = &KLrepeated_setter_methodGVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:213
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Kadd_getter_methodVKiMM0I (D class_not_, D slot_getter_, D descriptor_, D override_sealingQ_) {
  D new_method_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:263
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:268
  new_method_ = Kmake_a_slot_methodVKiI(descriptor_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:269
  T7 = SLOT_VALUE_INITD(class_not_, 4);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:269
  T8 = SLOT_VALUE_INITD(T7, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:270
  T9 = primitive_not(override_sealingQ_);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:270
  T10 = SLOT_VALUE_INITD(descriptor_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:270
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:270
  T12 = primitive_machine_word_logbitQ(14,T11);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:269
  T6 = KPadd_a_methodVKnI(slot_getter_, new_method_, T8, &KPtrueVKi, T9, T12);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:263
  return(T6);
}

D Kadd_getter_methodVKiMM1I (D class_, D slot_getter_, D descriptor_, D override_sealingQ_) {
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:308
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:313
  T5 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_ELT(1, &KPfalseVKi);
  MV_SET_COUNT(2);
  // /opt/opendylan-2013.1/sources/dylan/slot-descriptor-dynamic.dylan:308
  return(T5);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_slot_descriptor_dynamic_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJinstance_);
    if (T0 != &KJinstance_) {
      IKJinstance_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_slot_descriptor_dynamic_for_user () {
  return;
}


/* eof */
