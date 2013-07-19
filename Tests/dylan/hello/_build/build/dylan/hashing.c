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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(30);

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

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
  DWORD PPdouble_integer_low_;
  DWORD PPdouble_integer_high_;
} _KLdouble_integerGVKe;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

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
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  DWORD mps_w0_;
  DWORD mps_w1_;
} _KLhash_stateGVKe;


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
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLvalue_classGVKi KLdouble_integerGVKe;
extern _KLmm_wrapperGVKi_1 KLdouble_integerGVKeW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLsealed_generic_functionGVKe KmoduloVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_72;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_42;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lhash_stateG_typesVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsymbolGVKd KJordered_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;

/* Defined object declarations */

extern _KLclassGVKd KLhash_stateGVKe;
extern _KLmm_wrapperGVKi_1 KLhash_stateGVKeW;
D KLhash_stateGZ32ZconstructorVKiMM0I (D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM28;
D KinitializeVKdMM28I (D hs_, D Urest_);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_44;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_73;
extern _KLsimple_methodGVKe Kstring_hashVKe;
D Kstring_hashVKeI (D, D);
extern _KLsealed_generic_functionGVKe Kobject_hashVKd;
D Kcase_insensitive_string_hash_2VKiMM1I (D, D, D);
extern _KLsealed_generic_functionGVKe Kcase_insensitive_string_hash_2VKi;
extern _KLsimple_methodGVKe Kcase_insensitive_string_hashVKe;
D Kcase_insensitive_string_hashVKeI (D, D);
static _KLsignatureAvaluesGVKi K15;
static _KLsimple_object_vectorGVKd_2 K16;
static _KLsimple_object_vectorGVKd_2 K17;
extern _KLsimple_methodGVKe Kcase_insensitive_string_hash_2VKiMM0;
D Kcase_insensitive_string_hash_2VKiMM0I (D str_, D s_, D e_);
extern _KLsimple_methodGVKe Kcase_insensitive_string_hash_2VKiMM1;
static _KLpairGVKd K21;
static _KLpairGVKd K22;
static _KLbyte_stringGVKd_30 K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsimple_object_vectorGVKd_3 K25;
static _KLsignatureAvaluesGVKi K26;
static _KLsimple_object_vectorGVKd_3 K27;
extern _KLsimple_methodGVKe Kobject_hashVKdMM0;
D Kobject_hashVKdMM0I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM1;
D Kobject_hashVKdMM1I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM2;
D Kobject_hashVKdMM2I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM3;
D Kobject_hashVKdMM3I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM4;
D Kobject_hashVKdMM4I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM5;
D Kobject_hashVKdMM5I (D, D);
extern _KLsimple_methodGVKe Kobject_hashVKdMM6;
D Kobject_hashVKdMM6I (D, D);
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLpairGVKd K48;
static _KLsignatureAvaluesGVKi K49;
static _KLbyte_stringGVKd_11 K50;
static _KLsimple_object_vectorGVKd_2 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_2 K53;
D Kmerge_hash_idsVKdI (D, D, D, D);
static _KLsignatureAvaluesGVKi K55;
static _KLsimple_object_vectorGVKd_2 K56;
static _KLsignatureAvaluesGVKi K57;
static _KLsimple_object_vectorGVKd_2 K58;
static _KLsignatureAvaluesGVKi K59;
static _KLsimple_object_vectorGVKd_2 K60;
static _KLsignatureAvaluesGVKi K61;
static _KLsimple_object_vectorGVKd_2 K62;
static _KLsignatureAvaluesGVKi K63;
static D Knext_hashF65I (D, D, D);
static _KLsignatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_2 K67;
static _KLsingletonGVKd K68;
static _KLkeyword_signatureGVKe K69;
static _KLimplementation_classGVKe K70;
static _KLsimple_object_vectorGVKd_2 K71;
extern _KLkeyword_methodGVKe KLhash_stateGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_1 K73;
static _KLsimple_object_vectorGVKd_6 K74;
static _KLkeyword_signatureAvaluesGVKi K75;
extern _KLinstance_slot_descriptorGVKe Kmps_w0VKiHLhash_stateG;
extern _KLinstance_slot_descriptorGVKe Kmps_w1VKiHLhash_stateG;
extern _KLsealed_generic_functionGVKe Kmps_w1VKi;
extern _KLgetter_methodGVKi Kmps_w1VKiMM0;
static _KLpairGVKd K80;
static _KLsignatureAvaluesGVKi K81;
static _KLbyte_stringGVKd_6 K82;
static _KLsimple_object_vectorGVKd_1 K83;
extern _KLsealed_generic_functionGVKe Kmps_w0VKi;
extern _KLgetter_methodGVKi Kmps_w0VKiMM0;
static _KLpairGVKd K86;
static _KLbyte_stringGVKd_6 K87;
static _KLbyte_stringGVKd_12 K88;
extern _KLsimple_methodGVKe Kvalues_hashVKe;
D Kvalues_hashVKeI (D, D, D);
D Ksequence_hashVKeI (D, D, D);
static _KLsignatureAvaluesGVKi K92;
static _KLsimple_object_vectorGVKd_2 K93;
extern _KLsimple_methodGVKe Ksequence_hashVKe;
static _KLsignatureAvaluesGVKi K95;
static _KLsimple_object_vectorGVKd_3 K96;
extern _KLkeyword_methodGVKe Kcollection_hashVKe;
D Kcollection_hashVKeI (D, D, D, D, D, D);
static _KLkeyword_signatureAvaluesGVKi K99;
static _KLsimple_object_vectorGVKd_2 K100;
static _KLsimple_object_vectorGVKd_4 K101;
static _KLsimple_object_vectorGVKd_1 K102;
extern _KLkeyword_methodGVKe Kmerge_hash_idsVKd;
static _KLkeyword_signatureAvaluesGVKi K104;

/* Indirection variables */


/* Variables */

D case_insensitive_string_hash_2VKi = &Kcase_insensitive_string_hash_2VKi;
D Lhash_stateGVKe = &KLhash_stateGVKe;
D merge_hash_idsVKd = &Kmerge_hash_idsVKd;
D object_hashVKd = &Kobject_hashVKd;
D string_hashVKe = &Kstring_hashVKe;
D case_insensitive_string_hashVKe = &Kcase_insensitive_string_hashVKe;
D collection_hashVKe = &Kcollection_hashVKe;
D sequence_hashVKe = &Ksequence_hashVKe;
D values_hashVKe = &Kvalues_hashVKe;

/* Objects */

_KLclassGVKd KLhash_stateGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K88,
  &K70,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLhash_stateGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K70,
  (D) 1,
  10,
  33554439,
  (D) 5,
  0
};

_KLkeyword_methodGVKe KinitializeVKdMM28 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K69,
  &key_mep_2,
  &KinitializeVKdMM28I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_43 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_42,
  (D) 5,
  &KLhash_stateGVKe
};

_KLmethod_domainGVKe KinitializeVKdRD_dylanRD_44 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_43,
  &KinitializeVKdMM28
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_73 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_72,
  (D) 5,
  &K68
};

_KLsimple_methodGVKe Kstring_hashVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K66,
  &Kstring_hashVKeI
};

_KLsealed_generic_functionGVKe Kobject_hashVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K49,
  &KPfalseVKi,
  &K50,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcase_insensitive_string_hash_2VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 25,
  &K23,
  &K21,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kcase_insensitive_string_hashVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &Kcase_insensitive_string_hashVKeI
};

static _KLsignatureAvaluesGVKi K15 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K16,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_stringGVKd,
  &KLhash_stateGVKe
};

static _KLsimple_object_vectorGVKd_2 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLhash_stateGVKe
};

_KLsimple_methodGVKe Kcase_insensitive_string_hash_2VKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K26,
  &Kcase_insensitive_string_hash_2VKiMM0I
};

_KLsimple_methodGVKe Kcase_insensitive_string_hash_2VKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K24,
  &Kcase_insensitive_string_hash_2VKiMM1I
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_string_hash_2VKiMM0,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_string_hash_2VKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "case-insensitive-string-hash-2"
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K25,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K26 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K27,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kobject_hashVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K49,
  &Kobject_hashVKdMM0I
};

_KLsimple_methodGVKe Kobject_hashVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K63,
  &Kobject_hashVKdMM1I
};

_KLsimple_methodGVKe Kobject_hashVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K61,
  &Kobject_hashVKdMM2I
};

_KLsimple_methodGVKe Kobject_hashVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &Kobject_hashVKdMM3I
};

_KLsimple_methodGVKe Kobject_hashVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &Kobject_hashVKdMM4I
};

_KLsimple_methodGVKe Kobject_hashVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K55,
  &Kobject_hashVKdMM5I
};

_KLsimple_methodGVKe Kobject_hashVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K52,
  &Kobject_hashVKdMM6I
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM0,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM1,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM2,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM3,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM4,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM5,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kobject_hashVKdMM6,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K49 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K51,
  &K17
};

static _KLbyte_stringGVKd_11 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "object-hash"
};

static _KLsimple_object_vectorGVKd_2 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K53,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K55 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K56,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_integerGVKe,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K58,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K60,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcharacterGVKd,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K61 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K62,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLhash_stateGVKe
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K17,
  &K17
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K67,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstringGVKd,
  &KLhash_stateGVKe
};

static _KLsingletonGVKd K68 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLhash_stateGVKe
};

static _KLkeyword_signatureGVKe K69 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 48496645,
  &KDsignature_Lhash_stateG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLimplementation_classGVKe K70 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLhash_stateGVKe,
  &KLhash_stateGVKeW,
  &KPfalseVKi,
  &K71,
  (D) 7297,
  &KLhash_stateGZ32ZconstructorVKiMM0,
  &K73,
  &K74,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K71,
  &K71,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kmps_w0VKiHLhash_stateG,
  &Kmps_w1VKiHLhash_stateG
};

_KLkeyword_methodGVKe KLhash_stateGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K75,
  &key_mep_2,
  &KLhash_stateGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLhash_stateGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K75 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lhash_stateG_typesVKi
};

_KLinstance_slot_descriptorGVKe Kmps_w0VKiHLhash_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhash_stateGVKe,
  &KPfalseVKi,
  &Kmps_w0VKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kmps_w1VKiHLhash_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhash_stateGVKe,
  &KPfalseVKi,
  &Kmps_w1VKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kmps_w1VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K81,
  &KPfalseVKi,
  &K82,
  &K80,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kmps_w1VKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kmps_w1VKiHLhash_stateG
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &Kmps_w1VKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K81 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lhash_stateG_typesVKi,
  &K83
};

static _KLbyte_stringGVKd_6 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "mps-w1"
};

static _KLsimple_object_vectorGVKd_1 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kmps_w0VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K81,
  &KPfalseVKi,
  &K87,
  &K86,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kmps_w0VKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kmps_w0VKiHLhash_stateG
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &Kmps_w0VKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "mps-w0"
};

static _KLbyte_stringGVKd_12 K88 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "<hash-state>"
};

_KLsimple_methodGVKe Kvalues_hashVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K92,
  &Kvalues_hashVKeI
};

static _KLsignatureAvaluesGVKi K92 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34605065,
  &K93,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLhash_stateGVKe
};

_KLsimple_methodGVKe Ksequence_hashVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K95,
  &Ksequence_hashVKeI
};

static _KLsignatureAvaluesGVKi K95 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K96,
  &K17
};

static _KLsimple_object_vectorGVKd_3 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsequenceGVKd,
  &KLhash_stateGVKe
};

_KLkeyword_methodGVKe Kcollection_hashVKe = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K99,
  &key_mep_6,
  &Kcollection_hashVKeI,
  &K100
};

static _KLkeyword_signatureAvaluesGVKi K99 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818641,
  &K101,
  &K102,
  &KDsignature_LbooleanG_typesVKi,
  &K17
};

static _KLsimple_object_vectorGVKd_2 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJordered_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLcollectionGVKd,
  &KLhash_stateGVKe
};

static _KLsimple_object_vectorGVKd_1 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJordered_
};

_KLkeyword_methodGVKe Kmerge_hash_idsVKd = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K104,
  &key_mep_4,
  &Kmerge_hash_idsVKdI,
  &K100
};

static _KLkeyword_signatureAvaluesGVKi K104 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LintegerG_typesVKi,
  &K102,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D KLhash_stateGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:12
  T3 = primitive_object_allocate_filled(3,&KLhash_stateGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(0, T3, 0);
  SLOT_VALUE_SETTER(0, T3, 1);
  primitive_mps_ld_reset(T3);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D KinitializeVKdMM28I (D hs_, D Urest_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:22
  primitive_mps_ld_reset(hs_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:22
  T3 = &KPfalseVKi;
  MV_SET_COUNT(0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:20
  return(T3);
}

D Kstring_hashVKeI (D collection_, D hash_state_) {
  D len_;
  DWORD T4T, T4;
  DWORD hashF5T, hashF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13T, T13;
  DWORD hashF14T, hashF14;
  D T15;
  D T16;
  D c_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T24_1;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29_0;
  D T29_1;
  D T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  DBCHR T36;
  DWORD T37;
  D shiftF38;
  D T39;
  D T40;
  D T41;
  DWORD mxF42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DWORD T57;
  DWORD T58;
  DWORD rmremainder_;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  D T63_0;
  D T63_1;
  D shiftF64;
  D T65;
  D T66;
  D T67;
  DWORD mxF68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  D T81;
  DWORD T82;
  DWORD T83;
  D T84;
  D T85_0;
  D T85_1;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  DWORD T89;
  D T90;
  D T91_0;
  D T91_1;
  D T92_0;
  D T92_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:133
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  len_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:134
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T31 = CONGRUENT_CALL2((D) 121, len_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:134
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T25 = Knext_hashF65I(collection_, len_, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T86 = primitive_cast_integer_as_raw(len_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T87 = primitive_machine_word_shift_right(T86,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T88 = primitive_machine_word_logand(T87,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T89 = primitive_machine_word_logior(T88,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T90 = primitive_cast_raw_as_integer(T89);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T26 = Knext_hashF65I(collection_, T25, T90);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T27 = CONGRUENT_CALL2(len_, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T28 = Knext_hashF65I(collection_, T26, T27);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T91_0 = T28;
    T91_1 = hash_state_;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:157
    T92_0 = T91_0;
    T92_1 = T91_1;
    T29_0 = T92_0;
    T29_1 = T92_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:135
    T32 = primitive_instanceQ(collection_,&KLbyte_stringGVKd);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:135
    if (T32 != &KPfalseVKi) {
      T30 = collection_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
      T33 = SLOT_VALUE_INITD(T30, 0);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
      T34 = primitive_cast_integer_as_raw(T33);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
      T6 = len_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
      T55 = primitive_cast_integer_as_raw(T6);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
      T4T = 1;
      hashF5T = T55;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
        T4 = T4T;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
        hashF5 = hashF5T;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
        T56 = primitive_cast_raw_as_integer(hashF5);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
        T35 = primitive_machine_word_equalQ(T4,T34);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
        if (T35 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
          T36 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T30, 1, T4);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
          T37 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          shiftF38 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T45 = primitive_machine_word_logxor(hashF5,1);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          mxF42 = T45;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T41 = shiftF38;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T46 = primitive_cast_integer_as_raw(T41);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T47 = primitive_machine_word_equalQ(T46,257);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          if (T47 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            shiftF38 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            T40 = shiftF38;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            T44 = mxF42;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            T50 = primitive_cast_integer_as_raw(T40);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            T49 = primitive_machine_word_shift_right(T50,2);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            T48 = primitive_machine_word_shift_left_signal_overflow(T44,T49);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
            mxF42 = T48;
          }
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T39 = shiftF38;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T43 = mxF42;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T53 = primitive_cast_integer_as_raw(T39);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T52 = primitive_machine_word_shift_right(T53,2);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T51 = primitive_machine_word_shift_left_signal_overflow(T43,T52);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T54 = primitive_machine_word_logior(T51,1);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T57 = primitive_machine_word_shift_left_signal_overflow(T36,2);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T58 = primitive_machine_word_add_signal_overflow(T54,T57);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T60 = primitive_machine_word_shift_right(T58,2);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          rmremainder_ = primitive_machine_word_floorS_remainder(T60,970747);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T61 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:140
          T62 = primitive_machine_word_logior(T61,1);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
          T4T = T37;
          hashF5T = T62;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:142
        T63_0 = T56;
        T63_1 = hash_state_;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:138
      T24_0 = T63_0;
      T24_1 = T63_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T7 = CONGRUENT_CALL1(collection_);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T8 = T7;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T9 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T10 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T11 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T12 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T15 = len_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
      T82 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T13T = T8;
      hashF14T = T82;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
        T13 = T13T;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
        hashF14 = hashF14T;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
        T84 = primitive_cast_raw_as_integer(hashF14);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
        T16 = CALL3(T11, collection_, T13, T9);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
        if (T16 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
          T18 = CALL2(T12, collection_, T13);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
          c_ = T18;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
          T19 = CALL2(T10, collection_, T13);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          shiftF64 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T71 = primitive_machine_word_logxor(hashF14,1);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          mxF68 = T71;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T67 = shiftF64;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T72 = primitive_cast_integer_as_raw(T67);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T73 = primitive_machine_word_equalQ(T72,257);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          if (T73 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            shiftF64 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            T66 = shiftF64;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            T70 = mxF68;
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            T76 = primitive_cast_integer_as_raw(T66);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            T75 = primitive_machine_word_shift_right(T76,2);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            T74 = primitive_machine_word_shift_left_signal_overflow(T70,T75);
            // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
            mxF68 = T74;
          }
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T65 = shiftF64;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T69 = mxF68;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T79 = primitive_cast_integer_as_raw(T65);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T78 = primitive_machine_word_shift_right(T79,2);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T77 = primitive_machine_word_shift_left_signal_overflow(T69,T78);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T80 = primitive_machine_word_logior(T77,1);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T81 = primitive_cast_raw_as_integer(T80);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          CONGRUENT_CALL_PROLOG(&KasVKd, 2);
          T20 = CONGRUENT_CALL2(&KLintegerGVKd, c_);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T21 = CONGRUENT_CALL2(T81, T20);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T22 = CALL2(&KmoduloVKd, T21, (D) 3882989);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
          T23 = T22;
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:147
          T83 = primitive_cast_integer_as_raw(T23);
          // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
          T13T = T19;
          hashF14T = T83;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:149
        T85_0 = T84;
        T85_1 = hash_state_;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:145
      T24_0 = T85_0;
      T24_1 = T85_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:135
    T29_0 = T24_0;
    T29_1 = T24_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:130
  MV_SET_ELT(1, T29_1);
  MV_SET_COUNT(2);
  return(T29_0);
}

D Kcase_insensitive_string_hash_2VKiMM1I (D str_, D s_, D e_) {
  DWORD i_T, i_;
  DWORD hash_T, hash_;
  D T6_0;
  DWORD T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  D shiftF12;
  D T13;
  D T14;
  D T15;
  DWORD mx_;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;
  D T33;
  D T34_0;
  DBYTE T35;
  D T36_0;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD rmremainder_;
  DWORD T49;
  DWORD T50;
  DWORD T51;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
  T9 = primitive_cast_integer_as_raw(s_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
  i_T = T9;
  hash_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    T10 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    hash_ = hash_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
    T29 = primitive_cast_raw_as_integer(hash_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    T7 = primitive_cast_integer_as_raw(e_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    T8 = primitive_machine_word_less_thanQ(i_,T7);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      shiftF12 = (D) 25;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T19 = primitive_machine_word_logxor(hash_,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      mx_ = T19;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T15 = shiftF12;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T20 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T21 = primitive_machine_word_equalQ(T20,257);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        shiftF12 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T14 = shiftF12;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T18 = mx_;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T24 = primitive_cast_integer_as_raw(T14);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T23 = primitive_machine_word_shift_right(T24,2);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T22 = primitive_machine_word_shift_left_signal_overflow(T18,T23);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        mx_ = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T13 = shiftF12;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T17 = mx_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T27 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T26 = primitive_machine_word_shift_right(T27,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T25 = primitive_machine_word_shift_left_signal_overflow(T17,T26);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T28 = primitive_machine_word_logior(T25,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T31 = SLOT_VALUE_INITD(str_, 0);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T32 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T33 = primitive_machine_word_unsigned_less_thanQ(i_,T32);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T35 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(str_, 1, i_);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T37 = primitive_machine_word_shift_left_signal_overflow(T35,2);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T38 = primitive_machine_word_logior(T37,1);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T39 = primitive_cast_raw_as_integer(T38);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T36_0 = T39;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T34_0 = T36_0;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T40 = T34_0;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T44 = primitive_cast_integer_as_raw(T40);
        T42 = T44;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T30_0 = Kelement_range_errorVKeI(str_, T10);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T41 = T30_0;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
        T45 = primitive_cast_integer_as_raw(T41);
        T42 = T45;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T43 = primitive_machine_word_logand(T42,637);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T46 = primitive_machine_word_logxor(T43,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T47 = primitive_machine_word_add_signal_overflow(T28,T46);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T49 = primitive_machine_word_shift_right(T47,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      rmremainder_ = primitive_machine_word_floorS_remainder(T49,970747);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T50 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:207
      T51 = primitive_machine_word_logior(T50,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
      i_T = T11;
      hash_T = T51;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:209
    T6_0 = T29;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:205
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:203
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcase_insensitive_string_hashVKeI (D str_, D hash_state_) {
  D T2;
  DWORD i_T, i_;
  DWORD hash_T, hash_;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D shiftF9;
  D T10;
  D T11;
  D T12;
  DWORD mx_;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27_0;
  D T28;
  DBCHR T29;
  D T30;
  DBCHR T31;
  DWORD T32;
  DWORD T33;
  DSINT T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD rmremainder_;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42_0;
  D T42_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
  T2 = SLOT_VALUE_INITD(str_, 0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
  T5 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
  i_T = 1;
  hash_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    T7 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    hash_ = hash_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    T26 = primitive_cast_raw_as_integer(hash_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T8 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      shiftF9 = (D) 25;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T16 = primitive_machine_word_logxor(hash_,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      mx_ = T16;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T12 = shiftF9;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T17 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T18 = primitive_machine_word_equalQ(T17,257);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        shiftF9 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T11 = shiftF9;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T15 = mx_;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T21 = primitive_cast_integer_as_raw(T11);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T20 = primitive_machine_word_shift_right(T21,2);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T19 = primitive_machine_word_shift_left_signal_overflow(T15,T20);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        mx_ = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T10 = shiftF9;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T14 = mx_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T24 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T23 = primitive_machine_word_shift_right(T24,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T22 = primitive_machine_word_shift_left_signal_overflow(T14,T23);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T25 = primitive_machine_word_logior(T22,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T28 = primitive_machine_word_unsigned_less_thanQ(i_,T5);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T29 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(str_, 1, i_);
        T31 = T29;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T27_0 = Kelement_range_errorVKeI(str_, T7);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T30 = T27_0;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
        T34 = primitive_byte_character_as_raw(T30);
        T31 = T34;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T32 = primitive_machine_word_shift_left_signal_overflow(T31,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T33 = primitive_machine_word_logior(T32,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T35 = primitive_machine_word_logand(T33,637);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T36 = primitive_machine_word_logxor(T35,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T37 = primitive_machine_word_add_signal_overflow(T25,T36);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T39 = primitive_machine_word_shift_right(T37,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      rmremainder_ = primitive_machine_word_floorS_remainder(T39,970747);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T40 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      T41 = primitive_machine_word_logior(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
      i_T = T8;
      hash_T = T41;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:189
  T42_0 = T26;
  T42_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:186
  MV_SET_ELT(1, T42_1);
  MV_SET_COUNT(2);
  return(T42_0);
}

D Kcase_insensitive_string_hash_2VKiMM0I (D str_, D s_, D e_) {
  DWORD i_T, i_;
  DWORD hash_T, hash_;
  D T6_0;
  DWORD T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  D shiftF12;
  D T13;
  D T14;
  D T15;
  DWORD mx_;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;
  D T33;
  DBCHR T34;
  D T35;
  DBCHR T36;
  DWORD T37;
  DWORD T38;
  DSINT T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD rmremainder_;
  DWORD T44;
  DWORD T45;
  DWORD T46;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:193
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
  T9 = primitive_cast_integer_as_raw(s_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
  i_T = T9;
  hash_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    T10 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    hash_ = hash_T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
    T29 = primitive_cast_raw_as_integer(hash_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    T7 = primitive_cast_integer_as_raw(e_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    T8 = primitive_machine_word_less_thanQ(i_,T7);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      shiftF12 = (D) 25;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T19 = primitive_machine_word_logxor(hash_,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      mx_ = T19;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T15 = shiftF12;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T20 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T21 = primitive_machine_word_equalQ(T20,257);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        shiftF12 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T14 = shiftF12;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T18 = mx_;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T24 = primitive_cast_integer_as_raw(T14);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T23 = primitive_machine_word_shift_right(T24,2);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T22 = primitive_machine_word_shift_left_signal_overflow(T18,T23);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        mx_ = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T13 = shiftF12;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T17 = mx_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T27 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T26 = primitive_machine_word_shift_right(T27,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T25 = primitive_machine_word_shift_left_signal_overflow(T17,T26);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T28 = primitive_machine_word_logior(T25,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T31 = SLOT_VALUE_INITD(str_, 0);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T32 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T33 = primitive_machine_word_unsigned_less_thanQ(i_,T32);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T34 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(str_, 1, i_);
        T36 = T34;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T30_0 = Kelement_range_errorVKeI(str_, T10);
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T35 = T30_0;
        // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
        T39 = primitive_byte_character_as_raw(T35);
        T36 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T37 = primitive_machine_word_shift_left_signal_overflow(T36,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T38 = primitive_machine_word_logior(T37,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T40 = primitive_machine_word_logand(T38,637);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T41 = primitive_machine_word_logxor(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T42 = primitive_machine_word_add_signal_overflow(T28,T41);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T44 = primitive_machine_word_shift_right(T42,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      rmremainder_ = primitive_machine_word_floorS_remainder(T44,970747);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T45 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:197
      T46 = primitive_machine_word_logior(T45,1);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
      i_T = T11;
      hash_T = T46;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:199
    T6_0 = T29;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:195
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:193
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kobject_hashVKdMM0I (D object_, D hash_state_) {
  DADDR T3;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:81
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:84
  primitive_mps_ld_add(hash_state_,object_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  T3 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  T4 = primitive_machine_word_shift_right(T3,61);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  T5 = primitive_machine_word_equalQ(T4,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  if (T5 != &KPfalseVKi) {
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T6 = primitive_machine_word_equalQ(T4,-1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T8 = primitive_machine_word_shift_left_signal_overflow(T3,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T9 = primitive_machine_word_logior(T8,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T10 = primitive_cast_raw_as_integer(T9);
    T14 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T11 = primitive_machine_word_logand(T3,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T12 = primitive_machine_word_logior(T11,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
    T13 = primitive_cast_raw_as_integer(T12);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:85
  T15_0 = T14;
  T15_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:81
  MV_SET_ELT(1, T15_1);
  MV_SET_COUNT(2);
  return(T15_0);
}

D Kobject_hashVKdMM1I (D object_, D hash_state_) {
  D T3_0;
  D T3_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:91
  T3_0 = object_;
  T3_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:88
  MV_SET_ELT(1, T3_1);
  MV_SET_COUNT(2);
  return(T3_0);
}

D Kobject_hashVKdMM2I (D object_, D hash_state_) {
  D T3;
  D T4_0;
  D T4_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:98
  if (object_ != &KPfalseVKi) {
    T3 = (D) 576893;
  } else {
    T3 = (D) 767997;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:97
  T4_0 = T3;
  T4_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:94
  MV_SET_ELT(1, T4_1);
  MV_SET_COUNT(2);
  return(T4_0);
}

D Kobject_hashVKdMM3I (D object_, D hash_state_) {
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D T6_0;
  D T6_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:109
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLintegerGVKd, object_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:109
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T4 = CONGRUENT_CALL2(T3, (D) 929333);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:109
  T6_0 = T4;
  T6_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:106
  T5_0 = T6_0;
  T5_1 = T6_1;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:106
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

D Kobject_hashVKdMM4I (D object_, D hash_state_) {
  DWORD raw_x_;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  raw_x_ = primitive_unwrap_machine_word(object_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  T4 = primitive_machine_word_shift_right(raw_x_,61);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  T5 = primitive_machine_word_equalQ(T4,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  if (T5 != &KPfalseVKi) {
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T6 = primitive_machine_word_equalQ(T4,-1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T8 = primitive_machine_word_shift_left_signal_overflow(raw_x_,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T9 = primitive_machine_word_logior(T8,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T10 = primitive_cast_raw_as_integer(T9);
    T14 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T11 = primitive_machine_word_logand(raw_x_,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T12 = primitive_machine_word_logior(T11,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
    T13 = primitive_cast_raw_as_integer(T12);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:114
  T15_0 = T14;
  T15_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:112
  MV_SET_ELT(1, T15_1);
  MV_SET_COUNT(2);
  return(T15_0);
}

D Kobject_hashVKdMM5I (D object_, D hash_state_) {
  D T3;
  D T4;
  DADDR T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  DADDR T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  D T30_0;
  D T30_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  T4 = primitive_initialized_slot_value(object_,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  T5 = primitive_cast_pointer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  T6 = primitive_machine_word_shift_right(T5,61);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  T7 = primitive_machine_word_equalQ(T6,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  if (T7 != &KPfalseVKi) {
    T9 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T8 = primitive_machine_word_equalQ(T6,-1);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T10 = primitive_machine_word_shift_left_signal_overflow(T5,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T11 = primitive_machine_word_logior(T10,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T12 = primitive_cast_raw_as_integer(T11);
    T16 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T13 = primitive_machine_word_logand(T5,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T14 = primitive_machine_word_logior(T13,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
    T15 = primitive_cast_raw_as_integer(T14);
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  T17 = primitive_initialized_slot_value(object_,1);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  T18 = primitive_cast_pointer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  T19 = primitive_machine_word_shift_right(T18,61);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  T20 = primitive_machine_word_equalQ(T19,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  if (T20 != &KPfalseVKi) {
    T22 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T21 = primitive_machine_word_equalQ(T19,-1);
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T23 = primitive_machine_word_shift_left_signal_overflow(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T24 = primitive_machine_word_logior(T23,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T25 = primitive_cast_raw_as_integer(T24);
    T29 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T26 = primitive_machine_word_logand(T18,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T27 = primitive_machine_word_logior(T26,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
    T28 = primitive_cast_raw_as_integer(T27);
    T29 = T28;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:121
  T3 = Kmerge_hash_idsVKdI(T16, T29, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:121
  T30_0 = T3;
  T30_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:117
  MV_SET_ELT(1, T30_1);
  MV_SET_COUNT(2);
  return(T30_0);
}

D Kobject_hashVKdMM6I (D object_, D hash_state_) {
  DSFLT T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:125
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  T3 = primitive_single_float_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  T4 = primitive_cast_single_float_as_machine_word(T3);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  T5 = primitive_machine_word_shift_right(T4,61);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  T6 = primitive_machine_word_equalQ(T5,0);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  if (T6 != &KPfalseVKi) {
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T7 = primitive_machine_word_equalQ(T5,-1);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T9 = primitive_machine_word_shift_left_signal_overflow(T4,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T10 = primitive_machine_word_logior(T9,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T11 = primitive_cast_raw_as_integer(T10);
    T15 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T12 = primitive_machine_word_logand(T4,-4);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T13 = primitive_machine_word_logior(T12,1);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
    T14 = primitive_cast_raw_as_integer(T13);
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:127
  T16_0 = Kobject_hashVKdMM1I(T15, hash_state_);
  T16_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:125
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D Kmerge_hash_idsVKdI (D id1_, D id2_, D Urest_, D ordered_) {
  DWORD id3_;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18_0;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:44
  if (ordered_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:49
    T7 = primitive_cast_integer_as_raw(id1_);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:49
    T6 = primitive_machine_word_shift_right(T7,2);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:48
    T8 = primitive_machine_word_unsigned_rotate_left(T6,5);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    T9 = primitive_machine_word_shift_right(T8,61);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    T10 = primitive_machine_word_equalQ(T9,0);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    if (T10 != &KPfalseVKi) {
      T12 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
      T11 = primitive_machine_word_equalQ(T9,-1);
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
      T13 = primitive_machine_word_shift_left_signal_overflow(T8,2);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
      T14 = primitive_machine_word_logior(T13,1);
      T17 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
      T15 = primitive_machine_word_logand(T8,-4);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
      T16 = primitive_machine_word_logior(T15,1);
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:47
    id3_ = T17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
    T24 = primitive_cast_integer_as_raw(id1_);
    id3_ = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:44
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T19 = primitive_cast_integer_as_raw(id2_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T20 = primitive_machine_word_logxor(T19,id3_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T21 = primitive_machine_word_logand(T20,-4);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T22 = primitive_machine_word_logior(T21,1);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T23 = primitive_cast_raw_as_integer(T22);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:53
  T18_0 = T23;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:42
  MV_SET_COUNT(1);
  return(T18_0);
}

static D Knext_hashF65I (D collection_, D hash_, D index_) {
  D T3;
  D c_;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:153
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:154
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T3 = CONGRUENT_CALL3(collection_, index_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:154
  c_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:155
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T5 = CONGRUENT_CALL2(&KLintegerGVKd, c_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:155
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T6 = CONGRUENT_CALL2(T5, (D) 929333);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:155
  T7 = Kmerge_hash_idsVKdI(hash_, T6, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:153
  return(T7);
}

D Kvalues_hashVKeI (D element_hash_, D hash_state_, D values_) {
  D T4_0;
  D T4_1;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:255
  T5 = primitive_copy_vector(values_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:258
  T4_0 = Ksequence_hashVKeI(element_hash_, T5, hash_state_);
  T4_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:255
  MV_SET_ELT(1, T4_1);
  MV_SET_COUNT(2);
  return(T4_0);
}

D Ksequence_hashVKeI (D element_hash_, D seq_, D hash_state_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D T10;
  D T11;
  D id_;
  D T13;
  D T14;
  D current_id_;
  D T16;
  D T17;
  D T18_0;
  D T18_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:242
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:246
  current_id_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(seq_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
    T10 = CALL3(T7, seq_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
      T11 = CALL2(T8, seq_, T9);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:248
      id_ = CALL2(element_hash_, T11, hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:249
      T17 = current_id_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:249
      T13 = Kmerge_hash_idsVKdI(T17, id_, &KPempty_vectorVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:249
      current_id_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
      T14 = CALL2(T6, seq_, T9);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
      T9T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:247
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:251
  T16 = current_id_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:251
  T18_0 = T16;
  T18_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:242
  MV_SET_ELT(1, T18_1);
  MV_SET_COUNT(2);
  return(T18_0);
}

D Kcollection_hashVKeI (D key_hash_, D element_hash_, D col_, D hash_state_, D Urest_, D ordered_) {
  D orderedF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D T16;
  D T17;
  D key_;
  D elt_id_;
  D key_id_;
  D captured_id1_;
  D T22;
  D T23;
  D current_id_;
  D T25;
  D T26;
  D T27_0;
  D T27_1;

  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:221
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:221
  primitive_type_check(ordered_, &KLbooleanGVKd);
  orderedF7 = ordered_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:225
  current_id_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T8 = CONGRUENT_CALL1(col_);
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T9 = T8;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T10 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T11 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T12 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T13 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T14 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  T15T = T9;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
    T15 = T15T;
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
    T16 = CALL3(T12, col_, T15, T10);
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
      T17 = CALL2(T14, col_, T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
      key_ = CALL2(T13, col_, T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:227
      elt_id_ = CALL2(element_hash_, T17, hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:228
      key_id_ = CALL2(key_hash_, key_, hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:229
      captured_id1_ = Kmerge_hash_idsVKdI(elt_id_, key_id_, &KPempty_vectorVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:230
      T26 = current_id_;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:230
      T22 = Kmerge_hash_idsVKdI(T26, captured_id1_, &KPempty_vectorVKi, orderedF7);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:230
      current_id_ = T22;
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
      T23 = CALL2(T11, col_, T15);
      // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
      T15T = T23;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
    // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:226
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:232
  T25 = current_id_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:232
  T27_0 = T25;
  T27_1 = hash_state_;
  // /opt/opendylan-2013.1/sources/dylan/hashing.dylan:221
  MV_SET_ELT(1, T27_1);
  MV_SET_COUNT(2);
  return(T27_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_hashing_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_hashing_for_user () {
  return;
}


/* eof */
