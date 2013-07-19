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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
} _KLnumberGVKd;

typedef struct {
  D wrapper;
} _KLrationalGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(3);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLdivision_by_zero_errorGVKe;


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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_46;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLnumberGVKd;
extern _KLmm_wrapperGVKi_0 KLnumberGVKdW;
extern _KLclassGVKd KLrationalGVKd;
extern _KLmm_wrapperGVKi_0 KLrationalGVKdW;
D Kuninstantiable_errorVKiMM0I (D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_2;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe KoddQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KevenQVKdRD_dylanRD_0;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KnegativeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrationalG_typesVKi;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_51;
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_1;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_9;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D Kuninitialized_instanceQ_functionVKiI (D obj_, D type_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLkeyword_methodGVKe KLdivision_by_zero_errorGZ32ZconstructorVKiMM0;
extern _KLclassGVKd KLdivision_by_zero_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLdivision_by_zero_errorGVKeW;
D KerrorVKdMM0I (D, D);

/* Defined object declarations */

extern _KLlimited_integerGVKe KLdouble_byteGVKe;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLsimple_methodGVKe KLVKdMM7;
D KLVKdMM7I (D x_, D y_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe KEVKdMM8;
D KEVKdMM8I (D x_, D y_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KnegativeVKdMM0;
D KnegativeVKdMM0I (D x_);
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KnegativeQVKdMM0;
D KnegativeQVKdMM0I (D integer_);
extern _KLsimple_methodGVKe KtruncateSVKdMM1;
D KtruncateSVKdMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KfloorSVKdMM1;
D KfloorSVKdMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM0;
D Kcontagious_typeVKiMM0I (D x_, D y_);
extern _KLsimple_methodGVKe K_VKdMM1;
D K_VKdMM1I (D x_, D y_);
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KAVKdMM1;
D KAVKdMM1I (D x_, D y_);
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KabsVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KabsVKdMM1;
D KabsVKdMM1I (D x_);
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KpositiveQVKdMM0;
D KpositiveQVKdMM0I (D integer_);
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KzeroQVKdMM0;
D KzeroQVKdMM0I (D integer_);
extern _KLsimple_methodGVKe KroundSVKdMM1;
D KroundSVKdMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KceilingSVKdMM1;
D KceilingSVKdMM1I (D dividend_, D divisor_);
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KTVKdMM1;
D KTVKdMM1I (D x_, D y_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_52;
extern _KLsimple_methodGVKe KremainderVKdMM1;
D KremainderVKdMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KmoduloVKdMM1;
D KmoduloVKdMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KtruncateVKdMM1;
D KtruncateVKdMM1I (D x_);
extern _KLsimple_methodGVKe KroundVKdMM1;
D KroundVKdMM1I (D x_);
extern _KLsimple_methodGVKe KceilingVKdMM1;
D KceilingVKdMM1I (D x_);
extern _KLsimple_methodGVKe KfloorVKdMM1;
D KfloorVKdMM1I (D x_);
extern _KLsimple_methodGVKe KCVKdMM0;
D KCVKdMM0I (D, D);
extern _KLmethod_domainGVKe KevenQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KevenQVKdMM0;
D KevenQVKdMM0I (D integer_);
extern _KLmethod_domainGVKe KoddQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KoddQVKdMM0;
D KoddQVKdMM0I (D integer_);
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KintegralQVKdMM0;
D KintegralQVKdMM0I (D number_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_49;
D Kpower_of_two_ceilingVKeMM0I (D);
extern _KLincremental_generic_functionGVKe KlcmVKd;
extern _KLkeyword_methodGVKe KmakeVKdMM7;
D KmakeVKdMM7I (D, D);
extern _KLsimple_methodGVKe KasVKdMM23;
D KasVKdMM23I (D, D);
extern _KLsimple_methodGVKe KasVKdMM24;
D KasVKdMM24I (D, D);
extern _KLsimple_methodGVKe KasVKdMM25;
D KasVKdMM25I (D t_, D x_);
extern _KLsimple_methodGVKe KasVKdMM26;
D KasVKdMM26I (D t_, D x_);
extern _KLsimple_methodGVKe KasVKdMM27;
D KasVKdMM27I (D t_, D x_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_47;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_48;
static _KLsignatureAvaluesGVKi K84;
static _KLsimple_object_vectorGVKd_2 K85;
static _KLsingletonGVKd K86;
static _KLsignatureAvaluesGVKi K87;
static _KLsimple_object_vectorGVKd_2 K88;
static _KLsingletonGVKd K89;
static _KLsignatureAvaluesGVKi K90;
static _KLsimple_object_vectorGVKd_2 K91;
static _KLsingletonGVKd K92;
static _KLsignatureAvaluesGVKi K93;
static _KLsimple_object_vectorGVKd_2 K94;
static _KLsignatureAvaluesGVKi K95;
static _KLsimple_object_vectorGVKd_2 K96;
static _KLsingletonGVKd K97;
static _KLkeyword_signatureGVKe K98;
static _KLsimple_object_vectorGVKd_1 K99;
extern _KLsimple_methodGVKe KlcmVKdMM0;
D KlcmVKdMM0I (D, D);
extern _KLmethod_domainGVKe KlcmVKdRD_dylanRD_0;
static _KLpairGVKd K103;
static _KLsignatureGVKe K104;
static _KLbyte_stringGVKd_3 K105;
D KgcdVKdMM0I (D, D);
static _KLsignatureAvaluesGVKi K107;
static _KLsignatureAvaluesGVKi K108;
static _KLsimple_object_vectorGVKd_1 K109;
static _KLsingletonGVKd K110;
static _KLsignatureAvaluesGVKi K111;
static _KLbyte_stringGVKd_33 K112;
static _KLsignatureAvaluesGVKi K113;
static _KLsignatureAvaluesGVKi K114;
static _KLsignatureAvaluesGVKi K115;
static _KLsignatureAvaluesGVKi K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsignatureAvaluesGVKi K118;
extern _KLlimited_integerGVKe KLbitGVKe;
extern _KLincremental_generic_functionGVKe KgcdVKd;
extern _KLsimple_methodGVKe KgcdVKdMM0;
extern _KLmethod_domainGVKe KgcdVKdRD_dylanRD_0;
static _KLpairGVKd K123;
static _KLbyte_stringGVKd_3 K124;
extern _KLsimple_methodGVKe KlshVKd;
D KlshVKdI (D x_, D shift_);
extern _KLsimple_methodGVKe KashVKd;
D KashVKdI (D x_, D shift_);
extern _KLsimple_methodGVKe Kbit_field_depositVKe;
D Kbit_field_depositVKeI (D field_, D offset_, D size_, D x_);
static _KLsignatureAvaluesGVKi K131;
extern _KLsimple_methodGVKe Kbit_field_extractVKe;
D Kbit_field_extractVKeI (D offset_, D size_, D x_);
static _KLsignatureAvaluesGVKi K134;
extern _KLsimple_methodGVKe Klogbit_depositVKe;
D Klogbit_depositVKeI (D z_, D index_, D integer_);
static _KLsignatureAvaluesGVKi K137;
static _KLsimple_object_vectorGVKd_3 K138;
extern _KLsimple_methodGVKe KlogbitQVKd;
D KlogbitQVKdI (D index_, D integer_);
extern _KLsimple_methodGVKe KlognotVKd;
D KlognotVKdI (D x_);
extern _KLsimple_methodGVKe Kbinary_logxorVKi;
D Kbinary_logxorVKiI (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_logandVKi;
D Kbinary_logandVKiI (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_logiorVKi;
D Kbinary_logiorVKiI (D x_, D y_);
extern _KLsimple_methodGVKe KlogandVKd;
D KlogandVKdI (D);
static _KLsignatureAvaluesGVKi K151;
extern _KLsimple_methodGVKe KlogxorVKd;
D KlogxorVKdI (D);
extern _KLsimple_methodGVKe KlogiorVKd;
D KlogiorVKdI (D);
extern _KLincremental_generic_functionGVKe Kgeneric_binary_logandVKe;
static _KLsignatureAvaluesGVKi K157;
static _KLbyte_stringGVKd_21 K158;
extern _KLsimple_methodGVKe Kgeneric_logandVKe;
D Kgeneric_logandVKeI (D);
static _KLsignatureAvaluesGVKi K161;
extern _KLincremental_generic_functionGVKe Kgeneric_binary_logxorVKe;
static _KLbyte_stringGVKd_21 K163;
extern _KLsimple_methodGVKe Kgeneric_logxorVKe;
D Kgeneric_logxorVKeI (D);
extern _KLincremental_generic_functionGVKe Kgeneric_binary_logiorVKe;
static _KLbyte_stringGVKd_21 K167;
extern _KLsimple_methodGVKe Kgeneric_logiorVKe;
D Kgeneric_logiorVKeI (D);
extern _KLsimple_methodGVKe Kinteger_divide_by_0VKe;
D Kinteger_divide_by_0VKeI ();
static _KLsignatureGVKe K172;
extern _KLsimple_methodGVKe Kpower_of_two_ceilingVKeMM0;

/* Indirection variables */


/* Variables */

D power_of_two_ceilingVKe = &Kpower_of_two_ceilingVKeMM0;
D integer_divide_by_0VKe = &Kinteger_divide_by_0VKe;
D generic_logiorVKe = &Kgeneric_logiorVKe;
D generic_binary_logiorVKe = &Kgeneric_binary_logiorVKe;
D generic_logxorVKe = &Kgeneric_logxorVKe;
D generic_binary_logxorVKe = &Kgeneric_binary_logxorVKe;
D generic_logandVKe = &Kgeneric_logandVKe;
D generic_binary_logandVKe = &Kgeneric_binary_logandVKe;
D Dminimum_integerVKd = &KPunboundVKi;
D Dmaximum_integerVKd = (D) 0x7FFFFFFFFFFFFFFDL;
D logiorVKd = &KlogiorVKd;
D logxorVKd = &KlogxorVKd;
D logandVKd = &KlogandVKd;
D binary_logiorVKi = &Kbinary_logiorVKi;
D binary_logandVKi = &Kbinary_logandVKi;
D binary_logxorVKi = &Kbinary_logxorVKi;
D lognotVKd = &KlognotVKd;
D logbitQVKd = &KlogbitQVKd;
D logbit_depositVKe = &Klogbit_depositVKe;
D bit_field_extractVKe = &Kbit_field_extractVKe;
D bit_field_depositVKe = &Kbit_field_depositVKe;
D ashVKd = &KashVKd;
D lshVKd = &KlshVKd;
D lcmVKd = &KlcmVKd;
D gcdVKd = &KgcdVKd;
D LbitGVKe = &KLbitGVKe;
D LbyteGVKe = &KLbyteGVKe;
D Ldouble_byteGVKe = &KLdouble_byteGVKe;

/* Objects */

_KLlimited_integerGVKe KLdouble_byteGVKe = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 1,
  (D) 262141
};

_KLlimited_integerGVKe KLbyteGVKe = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 1,
  (D) 1021
};

_KLsimple_methodGVKe KLVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K118,
  &KLVKdMM7I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_9,
  &KLVKdMM7
};

_KLsimple_methodGVKe KEVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K118,
  &KEVKdMM8I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_16,
  &KEVKdMM8
};

_KLmethod_domainGVKe KnegativeVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeVKdRD_dylanRD_1,
  &KnegativeVKdMM0
};

_KLsimple_methodGVKe KnegativeVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &KnegativeVKdMM0I
};

_KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeQVKdRD_dylanRD_2,
  &KnegativeQVKdMM0
};

_KLsimple_methodGVKe KnegativeQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K111,
  &KnegativeQVKdMM0I
};

_KLsimple_methodGVKe KtruncateSVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K115,
  &KtruncateSVKdMM1I
};

_KLsimple_methodGVKe KfloorSVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K115,
  &KfloorSVKdMM1I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K117,
  &Kcontagious_typeVKiMM0I
};

_KLsimple_methodGVKe K_VKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &K_VKdMM1I
};

_KLmethod_domainGVKe K_VKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &K_VKdRD_dylanRD_1,
  &K_VKdMM1
};

_KLsimple_methodGVKe KAVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KAVKdMM1I
};

_KLmethod_domainGVKe KAVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KAVKdRD_dylanRD_1,
  &KAVKdMM1
};

_KLmethod_domainGVKe KabsVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KabsVKdMM1
};

_KLsimple_methodGVKe KabsVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &KabsVKdMM1I
};

_KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KpositiveQVKdRD_dylanRD_2,
  &KpositiveQVKdMM0
};

_KLsimple_methodGVKe KpositiveQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K111,
  &KpositiveQVKdMM0I
};

_KLmethod_domainGVKe KzeroQVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KzeroQVKdRD_dylanRD_2,
  &KzeroQVKdMM0
};

_KLsimple_methodGVKe KzeroQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K111,
  &KzeroQVKdMM0I
};

_KLsimple_methodGVKe KroundSVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K115,
  &KroundSVKdMM1I
};

_KLsimple_methodGVKe KceilingSVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K115,
  &KceilingSVKdMM1I
};

_KLmethod_domainGVKe KTVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KTVKdRD_dylanRD_1,
  &KTVKdMM1
};

_KLsimple_methodGVKe KTVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KTVKdMM1I
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_52 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_51,
  &KmakeVKdMM7
};

_KLsimple_methodGVKe KremainderVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KremainderVKdMM1I
};

_KLsimple_methodGVKe KmoduloVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KmoduloVKdMM1I
};

_KLsimple_methodGVKe KtruncateVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &KtruncateVKdMM1I
};

_KLsimple_methodGVKe KroundVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &KroundVKdMM1I
};

_KLsimple_methodGVKe KceilingVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &KceilingVKdMM1I
};

_KLsimple_methodGVKe KfloorVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &KfloorVKdMM1I
};

_KLsimple_methodGVKe KCVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K113,
  &KCVKdMM0I
};

_KLmethod_domainGVKe KevenQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KevenQVKdRD_dylanRD_0,
  &KevenQVKdMM0
};

_KLsimple_methodGVKe KevenQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K111,
  &KevenQVKdMM0I
};

_KLmethod_domainGVKe KoddQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KoddQVKdRD_dylanRD_0,
  &KoddQVKdMM0
};

_KLsimple_methodGVKe KoddQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K111,
  &KoddQVKdMM0I
};

_KLmethod_domainGVKe KintegralQVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KintegralQVKdRD_dylanRD_2,
  &KintegralQVKdMM0
};

_KLsimple_methodGVKe KintegralQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K108,
  &KintegralQVKdMM0I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_49 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_48,
  &KasVKdMM25
};

_KLincremental_generic_functionGVKe KlcmVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K104,
  (D) 1,
  &K105,
  &K103,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KlcmVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KmakeVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K98,
  &key_mep_2,
  &KmakeVKdMM7I,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe KasVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K95,
  &KasVKdMM23I
};

_KLsimple_methodGVKe KasVKdMM24 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K93,
  &KasVKdMM24I
};

_KLsimple_methodGVKe KasVKdMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K90,
  &KasVKdMM25I
};

_KLsimple_methodGVKe KasVKdMM26 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K87,
  &KasVKdMM26I
};

_KLsimple_methodGVKe KasVKdMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K84,
  &KasVKdMM27I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_47 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_46,
  &KasVKdMM27
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_48 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_47,
  &KasVKdMM26
};

static _KLsignatureAvaluesGVKi K84 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K85,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K86,
  &KLmachine_wordGVKe
};

static _KLsingletonGVKd K86 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K87 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K88,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K89,
  &KLabstract_integerGVKe
};

static _KLsingletonGVKd K89 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K90 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K91,
  &KDsignature_Labstract_integerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K92,
  &KLmachine_wordGVKe
};

static _KLsingletonGVKd K92 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K93 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K94,
  &KDsignature_Labstract_integerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K92,
  &KLnumberGVKd
};

static _KLsignatureAvaluesGVKi K95 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K96,
  &KDsignature_Labstract_integerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K97,
  &KLabstract_integerGVKe
};

static _KLsingletonGVKd K97 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrationalGVKd
};

static _KLkeyword_signatureGVKe K98 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K99,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K86
};

_KLsimple_methodGVKe KlcmVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KlcmVKdMM0I
};

_KLmethod_domainGVKe KlcmVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KlcmVKdMM0
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &KlcmVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K104 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_3 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "lcm"
};

static _KLsignatureAvaluesGVKi K107 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K108 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &K109
};

static _KLsimple_object_vectorGVKd_1 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K110
};

static _KLsingletonGVKd K110 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_33 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Negative powers are unimplemented"
};

static _KLsignatureAvaluesGVKi K113 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LrationalG_typesVKi
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K115 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K116 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K118 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLlimited_integerGVKe KLbitGVKe = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 1,
  (D) 5
};

_KLincremental_generic_functionGVKe KgcdVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K104,
  &KPfalseVKi,
  &K124,
  &K123,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KgcdVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KgcdVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KgcdVKdMM0I
};

_KLmethod_domainGVKe KgcdVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KgcdVKdMM0
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &KgcdVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K124 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "gcd"
};

_KLsimple_methodGVKe KlshVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KlshVKdI
};

_KLsimple_methodGVKe KashVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &KashVKdI
};

_KLsimple_methodGVKe Kbit_field_depositVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K131,
  &Kbit_field_depositVKeI
};

static _KLsignatureAvaluesGVKi K131 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kbit_field_extractVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K134,
  &Kbit_field_extractVKeI
};

static _KLsignatureAvaluesGVKi K134 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Klogbit_depositVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K137,
  &Klogbit_depositVKeI
};

static _KLsignatureAvaluesGVKi K137 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K138,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbooleanGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe KlogbitQVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K118,
  &KlogbitQVKdI
};

_KLsimple_methodGVKe KlognotVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &KlognotVKdI
};

_KLsimple_methodGVKe Kbinary_logxorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &Kbinary_logxorVKiI
};

_KLsimple_methodGVKe Kbinary_logandVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &Kbinary_logandVKiI
};

_KLsimple_methodGVKe Kbinary_logiorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K107,
  &Kbinary_logiorVKiI
};

_KLsimple_methodGVKe KlogandVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K151,
  &KlogandVKdI
};

static _KLsignatureAvaluesGVKi K151 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KlogxorVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K151,
  &KlogxorVKdI
};

_KLsimple_methodGVKe KlogiorVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K151,
  &KlogiorVKdI
};

_KLincremental_generic_functionGVKe Kgeneric_binary_logandVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K157,
  &KPfalseVKi,
  &K158,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureAvaluesGVKi K157 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Labstract_integerG_typesVKi
};

static _KLbyte_stringGVKd_21 K158 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "generic-binary-logand"
};

_KLsimple_methodGVKe Kgeneric_logandVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K161,
  &Kgeneric_logandVKeI
};

static _KLsignatureAvaluesGVKi K161 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_Labstract_integerG_typesVKi
};

_KLincremental_generic_functionGVKe Kgeneric_binary_logxorVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K157,
  &KPfalseVKi,
  &K163,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_21 K163 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "generic-binary-logxor"
};

_KLsimple_methodGVKe Kgeneric_logxorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K161,
  &Kgeneric_logxorVKeI
};

_KLincremental_generic_functionGVKe Kgeneric_binary_logiorVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K157,
  &KPfalseVKi,
  &K167,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_21 K167 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "generic-binary-logior"
};

_KLsimple_methodGVKe Kgeneric_logiorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K161,
  &Kgeneric_logiorVKeI
};

_KLsimple_methodGVKe Kinteger_divide_by_0VKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K172,
  &Kinteger_divide_by_0VKeI
};

static _KLsignatureGVKe K172 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kpower_of_two_ceilingVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &Kpower_of_two_ceilingVKeMM0I
};

/* Code */

D KLVKdMM7I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:97
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:98
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:97
  T5 = primitive_machine_word_less_thanQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:97
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:95
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM8I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:89
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:91
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:92
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:91
  T5 = primitive_machine_word_equalQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:91
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:89
  MV_SET_COUNT(1);
  return(T6_0);
}

D KnegativeVKdMM0I (D x_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T2 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T3 = primitive_machine_word_logxor(T2,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T4 = primitive_machine_word_negative_signal_overflow(T3);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:215
  MV_SET_COUNT(1);
  return(T7_0);
}

D KnegativeQVKdMM0I (D integer_) {
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:123
  T2 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:123
  T3 = primitive_machine_word_less_thanQ(T2,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:123
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:121
  MV_SET_COUNT(1);
  return(T4_0);
}

D KtruncateSVKdMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T4 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T6 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T7_0 = primitive_machine_word_truncateS_byref(T3,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T10 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T13 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  T16_0 = T12;
  T16_1 = T15;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:186
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KfloorSVKdMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T4 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T6 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T7_0 = primitive_machine_word_floorS_byref(T3,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T10 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T13 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  T16_0 = T12;
  T16_1 = T15;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:183
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D Kcontagious_typeVKiMM0I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:81
  T3_0 = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:79
  MV_SET_COUNT(1);
  return(T3_0);
}

D K_VKdMM1I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:140
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:141
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:141
  T5 = primitive_machine_word_logxor(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:142
  T6 = primitive_machine_word_subtract_signal_overflow(T3,T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:143
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:143
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:138
  MV_SET_COUNT(1);
  return(T8_0);
}

D KAVKdMM1I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:132
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:133
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:133
  T5 = primitive_machine_word_logxor(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:134
  T6 = primitive_machine_word_add_signal_overflow(T3,T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:135
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:135
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:130
  MV_SET_COUNT(1);
  return(T8_0);
}

D KabsVKdMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T2 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T3 = primitive_machine_word_logxor(T2,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T4 = primitive_machine_word_abs_signal_overflow(T3);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:216
  MV_SET_COUNT(1);
  return(T7_0);
}

D KpositiveQVKdMM0I (D integer_) {
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:118
  T2 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:118
  T3 = primitive_machine_word_less_thanQ(1,T2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:118
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:116
  MV_SET_COUNT(1);
  return(T4_0);
}

D KzeroQVKdMM0I (D integer_) {
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:113
  T2 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:113
  T3 = primitive_machine_word_equalQ(T2,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:113
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:111
  MV_SET_COUNT(1);
  return(T4_0);
}

D KroundSVKdMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T4 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T6 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T7_0 = primitive_machine_word_roundS_byref(T3,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T10 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T13 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  T16_0 = T12;
  T16_1 = T15;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:185
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KceilingSVKdMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T4 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T6 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T7_0 = primitive_machine_word_ceilingS_byref(T3,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T10 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T13 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  T16_0 = T12;
  T16_1 = T15;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:184
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KTVKdMM1I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:146
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:148
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:148
  T4 = primitive_machine_word_logxor(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:149
  T6 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:149
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:150
  T7 = primitive_machine_word_multiply_signal_overflow(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:150
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:151
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:151
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:146
  MV_SET_COUNT(1);
  return(T10_0);
}

D KremainderVKdMM1I (D dividend_, D divisor_) {
  DWORD rmremainder_;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T5 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T7 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  rmremainder_ = primitive_machine_word_truncateS_remainder(T4,T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T8 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:202
  MV_SET_COUNT(1);
  return(T11_0);
}

D KmoduloVKdMM1I (D dividend_, D divisor_) {
  DWORD rmremainder_;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T5 = primitive_cast_integer_as_raw(dividend_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T7 = primitive_cast_integer_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  rmremainder_ = primitive_machine_word_floorS_remainder(T4,T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T8 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:201
  MV_SET_COUNT(1);
  return(T11_0);
}

D KtruncateVKdMM1I (D x_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:167
  T2_0 = x_;
  T2_1 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:167
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D KroundVKdMM1I (D x_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:166
  T2_0 = x_;
  T2_1 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:166
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D KceilingVKdMM1I (D x_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:165
  T2_0 = x_;
  T2_1 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:165
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D KfloorVKdMM1I (D x_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:164
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:164
  T2_0 = x_;
  T2_1 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:164
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D KCVKdMM0I (D base_, D power_) {
  D T3_0;
  D T4_0;
  DWORD T5;
  DWORD T6;
  D T7_0;
  D T8_0;
  D T9_0;
  DWORD T10;
  D T11;
  D T12_0;
  DWORD T13;
  D T14;
  D T15_0;
  DWORD T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21_0;
  D T22_0;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29_0;
  D shiftF30;
  D T31;
  D T32;
  D T33;
  DWORD mx_;
  DWORD T35;
  DWORD T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  D T48;
  D T49_0;
  DWORD T50;
  D T51;
  DWORD T52;
  D T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  D T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  D T64;
  D T65_0;
  D baseF66T, baseF66;
  D T67;
  D powerF68T, powerF68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  D T83;
  D T84;
  DWORD T85;
  DWORD T86;
  D T87;
  D T88;
  D T89;
  DWORD T90;
  DWORD T91;
  DWORD T92;
  DWORD T93;
  DWORD T94;
  DWORD T95;
  DWORD T96;
  D T97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  D T102;
  DWORD baseF103T, baseF103;
  DWORD pF104T, pF104;
  DWORD xF105T, xF105;
  D T106;
  DWORD T107;
  DWORD T108;
  D T109_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:218
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
  baseF66T = base_;
  powerF68T = power_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
    baseF66 = baseF66T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
    T67 = baseF66;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
    powerF68 = powerF68T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
    T69 = powerF68;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
    T10 = primitive_cast_integer_as_raw(T69);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
    T11 = primitive_machine_word_less_thanQ(T10,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:223
      T12_0 = KerrorVKdMM1I(&K112, &KPempty_vectorVKi);
      T9_0 = T12_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:224
      T13 = primitive_cast_integer_as_raw(T67);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:224
      T14 = primitive_machine_word_equalQ(T13,9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
        T16 = primitive_cast_integer_as_raw(T69);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
        T17 = primitive_machine_word_less_thanQ(T16,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T18 = primitive_machine_word_logxor(T16,1);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T19 = primitive_machine_word_negative_signal_overflow(T18);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T20 = primitive_machine_word_logior(T19,1);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T23 = primitive_machine_word_less_thanQ(T20,257);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          if (T23 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T25 = primitive_machine_word_shift_right(T19,2);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T24 = primitive_machine_word_shift_right(5,T25);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T26 = primitive_machine_word_logand(T24,-4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T27 = primitive_machine_word_logior(T26,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T28 = primitive_cast_raw_as_integer(T27);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T29_0 = T28;
            T22_0 = T29_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T21_0 = (D) 1;
            T22_0 = T21_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T15_0 = T22_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T38 = primitive_machine_word_less_thanQ(T16,257);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          if (T38 != &KPfalseVKi) {
            T37 = T69;
          } else {
            T37 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          shiftF30 = T37;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          mx_ = 4;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T33 = shiftF30;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T39 = primitive_cast_integer_as_raw(T33);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T40 = primitive_machine_word_equalQ(T39,257);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          if (T40 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            shiftF30 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T32 = shiftF30;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T36 = mx_;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T43 = primitive_cast_integer_as_raw(T32);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T42 = primitive_machine_word_shift_right(T43,2);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            T41 = primitive_machine_word_shift_left_signal_overflow(T36,T42);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
            mx_ = T41;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T31 = shiftF30;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T35 = mx_;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T46 = primitive_cast_integer_as_raw(T31);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T45 = primitive_machine_word_shift_right(T46,2);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T44 = primitive_machine_word_shift_left_signal_overflow(T35,T45);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T47 = primitive_machine_word_logior(T44,1);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T48 = primitive_cast_raw_as_integer(T47);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
          T49_0 = T48;
          T15_0 = T49_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:225
        T8_0 = T15_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:226
        T50 = primitive_cast_integer_as_raw(T67);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:226
        T51 = primitive_machine_word_less_thanQ(T50,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
        if (T51 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
          T52 = primitive_cast_integer_as_raw(T69);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
          T53 = primitive_machine_word_logbitQ(2,T52);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
          if (T53 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T54 = primitive_cast_integer_as_raw(T67);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T55 = primitive_machine_word_logxor(T54,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T56 = primitive_machine_word_negative_signal_overflow(T55);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T57 = primitive_machine_word_logior(T56,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T58 = primitive_cast_raw_as_integer(T57);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T59 = KCVKdMM0I(T58, T69);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
            T3_0 = CONGRUENT_CALL1(T59);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T109_0 = T3_0;
            T4_0 = T109_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T60 = primitive_cast_integer_as_raw(T67);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T61 = primitive_machine_word_logxor(T60,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T62 = primitive_machine_word_negative_signal_overflow(T61);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T63 = primitive_machine_word_logior(T62,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            T64 = primitive_cast_raw_as_integer(T63);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
            baseF66T = T64;
            powerF68T = power_;
            goto L0;
            T4_0 = T65_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
          T7_0 = T4_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
          T70 = primitive_cast_integer_as_raw(T69);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
          T71 = primitive_machine_word_less_thanQ(5,T70);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
          if (T71 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T72 = primitive_cast_integer_as_raw(T67);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T73 = primitive_machine_word_logxor(T72,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T75 = primitive_cast_integer_as_raw(T67);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T74 = primitive_machine_word_shift_right(T75,2);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T76 = primitive_machine_word_multiply_signal_overflow(T73,T74);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
            T77 = primitive_machine_word_logior(T76,1);
            T5 = T77;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
            T108 = primitive_cast_integer_as_raw(T67);
            T5 = T108;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:230
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:231
          T78 = primitive_cast_integer_as_raw(T69);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:231
          T79 = primitive_machine_word_shift_right(T78,1);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:231
          T80 = primitive_machine_word_logand(T79,-4);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:231
          T81 = primitive_machine_word_logior(T80,1);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:232
          T82 = primitive_cast_integer_as_raw(T69);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:232
          T83 = primitive_machine_word_logbitQ(2,T82);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:232
          if (T83 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
            T107 = primitive_cast_integer_as_raw(T67);
            T6 = T107;
          } else {
            T6 = 5;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:232
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
          baseF103T = T5;
          pF104T = T81;
          xF105T = T6;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
            baseF103 = baseF103T;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
            pF104 = pF104T;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
            xF105 = xF105T;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
            T106 = primitive_cast_raw_as_integer(xF105);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:233
            T88 = primitive_machine_word_equalQ(pF104,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:233
            if (T88 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:234
              T84 = T106;
              MV_SET_ELT(0, T106);
              MV_SET_COUNT(1);
              T87 = T84;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
              T89 = primitive_machine_word_less_thanQ(5,pF104);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
              if (T89 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
                T90 = primitive_machine_word_logxor(baseF103,1);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
                T91 = primitive_machine_word_shift_right(baseF103,2);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
                T92 = primitive_machine_word_multiply_signal_overflow(T90,T91);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
                T93 = primitive_machine_word_logior(T92,1);
                T85 = T93;
              } else {
                T85 = baseF103;
              }
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:237
              T94 = primitive_machine_word_shift_right(pF104,1);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:237
              T95 = primitive_machine_word_logand(T94,-4);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:237
              T96 = primitive_machine_word_logior(T95,1);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
              T97 = primitive_machine_word_logbitQ(2,pF104);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
              if (T97 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
                T98 = primitive_machine_word_logxor(baseF103,1);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
                T99 = primitive_machine_word_shift_right(xF105,2);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
                T100 = primitive_machine_word_multiply_signal_overflow(T98,T99);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
                T101 = primitive_machine_word_logior(T100,1);
                T86 = T101;
              } else {
                T86 = xF105;
              }
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:238
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
              baseF103T = T85;
              pF104T = T96;
              xF105T = T86;
              goto L1;
              T87 = T102;
            }
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:233
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:236
          T7_0 = T87;
        }
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
        T8_0 = T7_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:220
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:218
  MV_SET_COUNT(1);
  return(T9_0);
}

D KevenQVKdMM0I (D integer_) {
  DWORD T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:108
  T2 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:108
  T3 = primitive_machine_word_logbitQ(2,T2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:108
  T5 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:108
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:106
  MV_SET_COUNT(1);
  return(T4_0);
}

D KoddQVKdMM0I (D integer_) {
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:103
  T2 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:103
  T3 = primitive_machine_word_logbitQ(2,T2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:103
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:101
  MV_SET_COUNT(1);
  return(T4_0);
}

D KintegralQVKdMM0I (D number_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:127
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:126
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kpower_of_two_ceilingVKeMM0I (D value_) {
  D T2;
  D T3;
  DWORD T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  DWORD power_of_twoF9T, power_of_twoF9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:441
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
  power_of_twoF9T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
    power_of_twoF9 = power_of_twoF9T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:443
    T10 = primitive_cast_raw_as_integer(power_of_twoF9);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:443
    T4 = primitive_cast_integer_as_raw(value_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:443
    T5 = primitive_machine_word_less_thanQ(power_of_twoF9,T4);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:443
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
      T6 = primitive_machine_word_logxor(power_of_twoF9,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
      T7 = primitive_machine_word_add_signal_overflow(power_of_twoF9,T6);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
      power_of_twoF9T = T7;
      goto L0;
      T3 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:444
      T2 = T10;
      MV_SET_ELT(0, T10);
      MV_SET_COUNT(1);
      T3 = T2;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:443
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:446
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:441
  return(T3);
}

D KmakeVKdMM7I (D class_, D all_keys_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:70
  T3_0 = Kuninstantiable_errorVKiMM0I(class_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:69
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:69
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM23I (D class_, D integer_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:23
  T3_0 = integer_;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM24I (D class_, D number_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:30
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLintegerGVKd, number_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:27
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:27
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM25I (D t_, D x_) {
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:35
  T3 = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:35
  T4 = primitive_wrap_abstract_integer(T3);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:35
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:33
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM26I (D t_, D x_) {
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:44
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:44
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:44
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:42
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM27I (D t_, D x_) {
  DWORD raw_x_;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:84
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:86
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:86
  T4 = primitive_machine_word_shift_left_signal_overflow(raw_x_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:86
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:86
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:86
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:84
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlcmVKdMM0I (D n_, D m_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11_0;
  DWORD T11_1;
  DWORD quotient_;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:392
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T4 = primitive_cast_integer_as_raw(m_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T5 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T6 = primitive_machine_word_less_thanQ(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  if (T6 != &KPfalseVKi) {
    T3 = T5;
  } else {
    T3 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T7 = KgcdVKdMM0I(n_, m_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T8 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T9 = primitive_machine_word_shift_right(T10,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T11_0 = primitive_machine_word_truncateS_byref(T8,T9,(DWORD*)&T11_1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  quotient_ = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T13 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T15 = primitive_machine_word_less_thanQ(T5,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  if (T15 != &KPfalseVKi) {
    T14 = T5;
  } else {
    T14 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T16 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T17 = primitive_machine_word_multiply_signal_overflow(T13,T16);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T18 = primitive_machine_word_logior(T17,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T19 = primitive_cast_raw_as_integer(T18);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:393
  T20_0 = T19;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:392
  MV_SET_COUNT(1);
  return(T20_0);
}

D KgcdVKdMM0I (D n_, D m_) {
  D T3_0;
  D T4_0;
  D T5_0;
  DWORD k_T, k_;
  D uF7T, uF7;
  D vF8T, vF8;
  D returnPexit_11_;
  D T10;
  D T11;
  D tmpF12T, tmpF12;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D uF18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D vF25;
  D T26;
  D T27;
  D T28;
  D T29;
  D tmpF30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  D T53;
  DWORD T54;
  D T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  D T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  D T65;
  DWORD T66;
  D T67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  D T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  D T77;
  DWORD T78;
  D T79;
  DWORD T80;
  D T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  DWORD T85;
  D T86;
  DWORD T87;
  DWORD T88;
  DWORD T89;
  DWORD T90;
  D T91;
  DWORD T92;
  D T93;
  D T94;
  DWORD T95;
  DWORD T96;
  DWORD T97;
  D T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  DWORD T103;
  D T104;
  DWORD T105;
  D T106;
  D shiftF107;
  D T108;
  D T109;
  D T110;
  DWORD mx_;
  DWORD T112;
  DWORD T113;
  D T114;
  D T115;
  DWORD T116;
  DWORD T117;
  DWORD T118;
  D T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  DWORD T125;
  DWORD T126;
  D T127;
  D T128;
  D T129;
  D T130;
  _KLsimple_object_vectorGVKd_1 T131 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T132;
  DWORD T133;
  DWORD T134;
  DWORD T135;
  DWORD T136;
  D T137;
  D T138_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:401
  T37 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:401
  T38 = primitive_machine_word_equalQ(T37,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
  if (T38 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:402
    T3_0 = m_;
    T17_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:403
    T39 = primitive_cast_integer_as_raw(m_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:403
    T40 = primitive_machine_word_equalQ(T39,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
    if (T40 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:404
      T4_0 = n_;
      T16_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:405
      T41 = primitive_machine_word_equalQ(T37,T39);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:406
        T5_0 = n_;
        T15_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
        T42 = primitive_machine_word_logxor(T37,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
        T43 = primitive_machine_word_abs_signal_overflow(T42);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
        T44 = primitive_machine_word_logior(T43,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
        T45 = primitive_cast_raw_as_integer(T44);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
        T46 = primitive_machine_word_logxor(T39,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
        T47 = primitive_machine_word_abs_signal_overflow(T46);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
        T48 = primitive_machine_word_logior(T47,1);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
        T49 = primitive_cast_raw_as_integer(T48);
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
        k_T = 1;
        uF7T = T45;
        vF8T = T49;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          k_ = k_T;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          T55 = primitive_cast_raw_as_integer(k_);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          uF7 = uF7T;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          uF18 = uF7;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          vF8 = vF8T;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          vF25 = vF8;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T23 = uF18;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T28 = vF25;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T50 = primitive_cast_integer_as_raw(T23);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T51 = primitive_cast_integer_as_raw(T28);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T52 = primitive_machine_word_logior(T50,T51);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:411
          T53 = primitive_machine_word_logbitQ(2,T52);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          if (T53 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
            T54 = primitive_machine_word_add_signal_overflow(k_,4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T24 = uF18;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T56 = primitive_cast_integer_as_raw(T24);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T57 = primitive_machine_word_shift_right(T56,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T58 = primitive_machine_word_logand(T57,-4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T59 = primitive_machine_word_logior(T58,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:409
            T60 = primitive_cast_raw_as_integer(T59);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T29 = vF25;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T61 = primitive_cast_integer_as_raw(T29);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T62 = primitive_machine_word_shift_right(T61,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T63 = primitive_machine_word_logand(T62,-4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T64 = primitive_machine_word_logior(T63,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:410
            T65 = primitive_cast_raw_as_integer(T64);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
            k_T = T54;
            uF7T = T60;
            vF8T = T65;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:415
          T22 = uF18;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:415
          T66 = primitive_cast_integer_as_raw(T22);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:415
          T67 = primitive_machine_word_logbitQ(2,T66);
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:415
          if (T67 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T27 = vF25;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T68 = primitive_cast_integer_as_raw(T27);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T69 = primitive_machine_word_logxor(T68,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T70 = primitive_machine_word_negative_signal_overflow(T69);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T71 = primitive_machine_word_logior(T70,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:416
            T72 = primitive_cast_raw_as_integer(T71);
            T11 = T72;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T21 = uF18;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T73 = primitive_cast_integer_as_raw(T21);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T74 = primitive_machine_word_shift_right(T73,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T75 = primitive_machine_word_logand(T74,-4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T76 = primitive_machine_word_logior(T75,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:418
            T77 = primitive_cast_raw_as_integer(T76);
            T11 = T77;
          }
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:415
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
          tmpF12T = T11;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
            tmpF12 = tmpF12T;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
            tmpF30 = tmpF12;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:421
            T36 = tmpF30;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:421
            T78 = primitive_cast_integer_as_raw(T36);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:421
            T79 = primitive_machine_word_logbitQ(2,T78);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:421
            if (T79 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:422
              T35 = tmpF30;
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:422
              T80 = primitive_cast_integer_as_raw(T35);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:422
              T81 = primitive_machine_word_less_thanQ(1,T80);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:422
              if (T81 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:423
                T34 = tmpF30;
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:423
                uF18 = T34;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T33 = tmpF30;
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T82 = primitive_cast_integer_as_raw(T33);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T83 = primitive_machine_word_logxor(T82,1);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T84 = primitive_machine_word_negative_signal_overflow(T83);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T85 = primitive_machine_word_logior(T84,1);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                T86 = primitive_cast_raw_as_integer(T85);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:425
                vF25 = T86;
              }
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:422
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T20 = uF18;
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T26 = vF25;
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T87 = primitive_cast_integer_as_raw(T20);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T88 = primitive_cast_integer_as_raw(T26);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T89 = primitive_machine_word_logxor(T88,1);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T90 = primitive_machine_word_subtract_signal_overflow(T87,T89);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              T91 = primitive_cast_raw_as_integer(T90);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:427
              tmpF30 = T91;
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:428
              T32 = tmpF30;
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:428
              T92 = primitive_cast_integer_as_raw(T32);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:428
              T93 = primitive_machine_word_equalQ(T92,1);
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:428
              if (T93 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                T19 = uF18;
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                T94 = primitive_machine_word_less_thanQ(k_,1);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                if (T94 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T95 = primitive_machine_word_logxor(k_,1);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T96 = primitive_machine_word_negative_signal_overflow(T95);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T97 = primitive_machine_word_logior(T96,1);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T98 = primitive_machine_word_less_thanQ(T97,257);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  if (T98 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T99 = primitive_cast_integer_as_raw(T19);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T101 = primitive_machine_word_shift_right(T96,2);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T100 = primitive_machine_word_shift_right(T99,T101);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T102 = primitive_machine_word_logand(T100,-4);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T103 = primitive_machine_word_logior(T102,1);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T104 = primitive_cast_raw_as_integer(T103);
                    T129 = T104;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T105 = primitive_cast_integer_as_raw(T19);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T106 = primitive_machine_word_less_thanQ(T105,1);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    if (T106 != &KPfalseVKi) {
                      T128 = (D) -3;
                    } else {
                      T128 = (D) 1;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T129 = T128;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T130 = T129;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T115 = primitive_machine_word_less_thanQ(k_,257);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  if (T115 != &KPfalseVKi) {
                    T114 = T55;
                  } else {
                    T114 = (D) 257;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  shiftF107 = T114;
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T116 = primitive_cast_integer_as_raw(T19);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T117 = primitive_machine_word_logxor(T116,1);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  mx_ = T117;
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T110 = shiftF107;
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T118 = primitive_cast_integer_as_raw(T110);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T119 = primitive_machine_word_equalQ(T118,257);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  if (T119 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    shiftF107 = (D) 129;
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T109 = shiftF107;
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T113 = mx_;
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T122 = primitive_cast_integer_as_raw(T109);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T121 = primitive_machine_word_shift_right(T122,2);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    T120 = primitive_machine_word_shift_left_signal_overflow(T113,T121);
                    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                    mx_ = T120;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T108 = shiftF107;
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T112 = mx_;
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T125 = primitive_cast_integer_as_raw(T108);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T124 = primitive_machine_word_shift_right(T125,2);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T123 = primitive_machine_word_shift_left_signal_overflow(T112,T124);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T126 = primitive_machine_word_logior(T123,1);
                  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                  T127 = primitive_cast_raw_as_integer(T126);
                  T130 = T127;
                }
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:429
                T131.vector_element_[0] = T130;
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
                T132 = MV_SET_REST_AT(&T131, 0);
                // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
                T14_0 = T132;
                goto L2;
              }
              // /opt/opendylan-2013.1/sources/dylan/integer.dylan:428
            }
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:421
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T31 = tmpF30;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T133 = primitive_cast_integer_as_raw(T31);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T134 = primitive_machine_word_shift_right(T133,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T135 = primitive_machine_word_logand(T134,-4);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T136 = primitive_machine_word_logior(T135,1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:420
            T137 = primitive_cast_raw_as_integer(T136);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
            tmpF12T = T137;
            goto L1;
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
            T13 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            // /opt/opendylan-2013.1/sources/dylan/integer.dylan:414
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
          T14_0 = T13;
          L2: ;
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
          // /opt/opendylan-2013.1/sources/dylan/integer.dylan:408
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:413
        T138_0 = T14_0;
        T15_0 = T138_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:400
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:398
  MV_SET_COUNT(1);
  return(T17_0);
}

D KlshVKdI (D x_, D shift_) {
  D T2_0;
  DWORD T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8_0;
  D T9_0;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:356
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:357
  T3 = primitive_cast_integer_as_raw(shift_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:357
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:357
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    T5 = primitive_machine_word_logxor(T3,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    T6 = primitive_machine_word_negative_signal_overflow(T5);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    T7 = primitive_machine_word_logior(T6,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    T10 = primitive_machine_word_less_thanQ(T7,257);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T11 = primitive_cast_integer_as_raw(x_);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T13 = primitive_machine_word_shift_right(T6,2);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T12 = primitive_machine_word_unsigned_shift_right(T11,T13);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T14 = primitive_machine_word_logand(T12,-4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T15 = primitive_machine_word_logior(T14,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T16 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T17_0 = T16;
      T9_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
      T8_0 = (D) 1;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:358
    T2_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
    T20 = primitive_machine_word_less_thanQ(T3,257);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T21 = primitive_cast_integer_as_raw(x_);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T22 = primitive_machine_word_logxor(T21,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T24 = primitive_machine_word_shift_right(T3,2);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T23 = primitive_machine_word_unsigned_double_shift_left_high(0,T22,T24);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T25 = primitive_machine_word_logior(T23,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T26 = primitive_cast_raw_as_integer(T25);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T27_0 = T26;
      T19_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
      T18_0 = (D) 1;
      T19_0 = T18_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:360
    T2_0 = T19_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:357
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:356
  MV_SET_COUNT(1);
  return(T2_0);
}

D KashVKdI (D x_, D shift_) {
  D T2_0;
  DWORD T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19_0;
  DWORD T20;
  D T21;
  D shiftF22;
  D T23;
  D T24;
  D T25;
  DWORD mx_;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42;
  D T43_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:318
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:319
  T3 = primitive_cast_integer_as_raw(shift_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:319
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:319
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    T5 = primitive_machine_word_logxor(T3,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    T6 = primitive_machine_word_negative_signal_overflow(T5);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    T7 = primitive_machine_word_logior(T6,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    T12 = primitive_machine_word_less_thanQ(T7,257);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T13 = primitive_cast_integer_as_raw(x_);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T15 = primitive_machine_word_shift_right(T6,2);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T14 = primitive_machine_word_shift_right(T13,T15);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T16 = primitive_machine_word_logand(T14,-4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T17 = primitive_machine_word_logior(T16,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T19_0 = T18;
      T11_0 = T19_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T20 = primitive_cast_integer_as_raw(x_);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T21 = primitive_machine_word_less_thanQ(T20,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
        T8_0 = (D) -3;
        T10_0 = T8_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
        T9_0 = (D) 1;
        T10_0 = T9_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:320
    T2_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T30 = primitive_machine_word_less_thanQ(T3,257);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    if (T30 != &KPfalseVKi) {
      T29 = shift_;
    } else {
      T29 = (D) 257;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    shiftF22 = T29;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T31 = primitive_cast_integer_as_raw(x_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T32 = primitive_machine_word_logxor(T31,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    mx_ = T32;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T25 = shiftF22;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T33 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T34 = primitive_machine_word_equalQ(T33,257);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      shiftF22 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      T24 = shiftF22;
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      T28 = mx_;
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      T37 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      T36 = primitive_machine_word_shift_right(T37,2);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      T35 = primitive_machine_word_shift_left_signal_overflow(T28,T36);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
      mx_ = T35;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T23 = shiftF22;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T27 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T40 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T39 = primitive_machine_word_shift_right(T40,2);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T38 = primitive_machine_word_shift_left_signal_overflow(T27,T39);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T41 = primitive_machine_word_logior(T38,1);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T42 = primitive_cast_raw_as_integer(T41);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:322
    T43_0 = T42;
    T2_0 = T43_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:319
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:318
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kbit_field_depositVKeI (D field_, D offset_, D size_, D x_) {
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:305
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:313
  T6 = primitive_cast_integer_as_raw(field_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:313
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:314
  T7 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:314
  T8 = primitive_machine_word_add_signal_overflow(T7,8);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:315
  T9 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:312
  T11 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:312
  T13 = primitive_cast_integer_as_raw(size_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:312
  T12 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:312
  T10 = primitive_machine_word_bit_field_deposit(T5,T11,T12,T9);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:311
  T14 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:311
  T15_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:305
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kbit_field_extractVKeI (D offset_, D size_, D x_) {
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:294
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:301
  T4 = primitive_cast_integer_as_raw(size_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:301
  T5 = primitive_machine_word_add_signal_overflow(T4,8);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:302
  T6 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:300
  T9 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:300
  T8 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:300
  T10 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:300
  T7 = primitive_machine_word_bit_field_extract(T8,T10,T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:299
  T11 = primitive_machine_word_logand(T7,-4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:299
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:298
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:298
  T14_0 = T13;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:294
  MV_SET_COUNT(1);
  return(T14_0);
}

D Klogbit_depositVKeI (D z_, D index_, D integer_) {
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:290
  T4 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:290
  T5 = primitive_machine_word_add_signal_overflow(T4,8);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:291
  T6 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:289
  T9 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:289
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:289
    T7 = primitive_machine_word_logbit_set(T9,T6);
    T10 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:289
    T8 = primitive_machine_word_logbit_clear(T9,T6);
    T10 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:289
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:288
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:288
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:286
  MV_SET_COUNT(1);
  return(T12_0);
}

D KlogbitQVKdI (D index_, D integer_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:280
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:283
  T3 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:283
  T4 = primitive_machine_word_add_signal_overflow(T3,8);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:283
  T5 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:282
  T8 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:282
  T6 = primitive_machine_word_logbitQ(T8,T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:282
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:280
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlognotVKdI (D x_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:275
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:276
  T2 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:277
  T3 = primitive_machine_word_lognot(T2);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:277
  T4 = primitive_machine_word_logand(T3,-4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:277
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:277
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:277
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:275
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_logxorVKiI (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T5 = primitive_machine_word_logxor(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T6 = primitive_machine_word_logand(T5,-4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:273
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kbinary_logandVKiI (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  T5 = primitive_machine_word_logand(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:272
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_logiorVKiI (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  T4 = primitive_cast_integer_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  T5 = primitive_machine_word_logior(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:271
  MV_SET_COUNT(1);
  return(T7_0);
}

D KlogandVKdI (D integers_) {
  DWORD result_T, result_;
  DWORD T3T, T3;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:252
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
  T5 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
  result_T = -3;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    T11 = primitive_cast_raw_as_integer(result_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    T7 = primitive_machine_word_equalQ(T3,T6);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
      T9 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
      T10 = primitive_machine_word_logand(result_,T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
      T12 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
      result_T = T10;
      T3T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
    T4_0 = T11;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:252
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlogxorVKdI (D integers_) {
  DWORD result_T, result_;
  DWORD T3T, T3;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
  T5 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
  result_T = 1;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    T13 = primitive_cast_raw_as_integer(result_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    T7 = primitive_machine_word_equalQ(T3,T6);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T9 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T10 = primitive_machine_word_logxor(result_,T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T11 = primitive_machine_word_logand(T10,-4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T12 = primitive_machine_word_logior(T11,1);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      T14 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
      result_T = T12;
      T3T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
    T4_0 = T13;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:249
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:248
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlogiorVKdI (D integers_) {
  DWORD result_T, result_;
  DWORD T3T, T3;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:244
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
  T5 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
  result_T = 1;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    T11 = primitive_cast_raw_as_integer(result_);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    T7 = primitive_machine_word_equalQ(T3,T6);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
      T9 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
      T10 = primitive_machine_word_logior(result_,T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
      T12 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
      result_T = T10;
      T3T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
    T4_0 = T11;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:244
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kgeneric_logandVKeI (D integers_) {
  D result_T, result_;
  DWORD T3T, T3;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  T6 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  result_T = (D) -3;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    T8 = primitive_machine_word_equalQ(T3,T7);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
      T4 = CALL2(&Kgeneric_binary_logandVKe, result_, T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
      T10 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
      result_T = T4;
      T3T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:62
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kgeneric_logxorVKeI (D integers_) {
  D result_T, result_;
  DWORD T3T, T3;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  T6 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  result_T = (D) 1;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    T8 = primitive_machine_word_equalQ(T3,T7);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
      T4 = CALL2(&Kgeneric_binary_logxorVKe, result_, T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
      T10 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
      result_T = T4;
      T3T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:61
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kgeneric_logiorVKeI (D integers_) {
  D result_T, result_;
  DWORD T3T, T3;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  T6 = SLOT_VALUE_INITD(integers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  result_T = (D) 1;
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    T8 = primitive_machine_word_equalQ(T3,T7);
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(integers_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
      T4 = CALL2(&Kgeneric_binary_logiorVKe, result_, T9);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
      T10 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
      result_T = T4;
      T3T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:60
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kinteger_divide_by_0VKeI () {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:16
  T2_0 = CALL1(&KLdivision_by_zero_errorGZ32ZconstructorVKiMM0, &KLdivision_by_zero_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:16
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:16
  T3 = KerrorVKdMM0I(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:15
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_integer_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_integer_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:74
  T1 = primitive_cast_raw_as_integer(0x8000000000000001L);
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:73
  Dminimum_integerVKd = T1;
  // /opt/opendylan-2013.1/sources/dylan/integer.dylan:73
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
