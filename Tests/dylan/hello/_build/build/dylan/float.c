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

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);

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
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

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
} _KLabstract_integerGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_underflow_errorGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_37;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_floatG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsingle_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfloatG_typesVKi;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_48;
D Kuninstantiable_errorVKiMM0I (D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kobject_classVKdI (D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_2;
extern _KLkeyword_methodGVKe KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0;
extern _KLclassGVKd KLarithmetic_underflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_underflow_errorGVKeW;
D KerrorVKdMM0I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLkeyword_methodGVKe KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0;
extern _KLclassGVKd KLarithmetic_overflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_overflow_errorGVKeW;
extern _KLkeyword_methodGVKe KLdivision_by_zero_errorGZ32ZconstructorVKiMM0;
extern _KLclassGVKd KLdivision_by_zero_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLdivision_by_zero_errorGVKeW;

/* Defined object declarations */

extern _KLsimple_methodGVKe KLVKdMM11;
D KLVKdMM11I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM12;
D KLVKdMM12I (D x_, D y_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe KEVKdMM12;
D KEVKdMM12I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM13;
D KEVKdMM13I (D x_, D y_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM0;
D Kshallow_copyVKdMM0I (D);
extern _KLsimple_methodGVKe Kshallow_copyVKdMM1;
D Kshallow_copyVKdMM1I (D);
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KnegativeVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KnegativeVKdMM2;
D KnegativeVKdMM2I (D x_);
extern _KLsimple_methodGVKe KnegativeVKdMM1;
D KnegativeVKdMM1I (D x_);
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KnegativeQVKdMM3;
D KnegativeQVKdMM3I (D x_);
extern _KLsimple_methodGVKe KnegativeQVKdMM2;
D KnegativeQVKdMM2I (D x_);
extern _KLsimple_methodGVKe KtruncateSVKdMM3;
D KtruncateSVKdMM3I (D real_, D divisor_);
extern _KLsimple_methodGVKe KtruncateSVKdMM2;
D KtruncateSVKdMM2I (D real_, D divisor_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM10;
D Kcontagious_typeVKiMM10I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM9;
D Kcontagious_typeVKiMM9I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM8;
D Kcontagious_typeVKiMM8I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM7;
D Kcontagious_typeVKiMM7I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM6;
D Kcontagious_typeVKiMM6I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM5;
D Kcontagious_typeVKiMM5I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM4;
D Kcontagious_typeVKiMM4I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM3;
D Kcontagious_typeVKiMM3I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM2;
D Kcontagious_typeVKiMM2I (D x_, D y_);
extern _KLsimple_methodGVKe Kcontagious_typeVKiMM1;
D Kcontagious_typeVKiMM1I (D x_, D y_);
extern _KLsimple_methodGVKe K_VKdMM2;
D K_VKdMM2I (D x_, D y_);
extern _KLsimple_methodGVKe K_VKdMM3;
D K_VKdMM3I (D x_, D y_);
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_0;
extern _KLmethod_domainGVKe K_VKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KAVKdMM2;
D KAVKdMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KAVKdMM3;
D KAVKdMM3I (D x_, D y_);
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KAVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KSVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KSVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KSVKdMM4;
D KSVKdMM4I (D x_, D y_);
extern _KLsimple_methodGVKe KSVKdMM3;
D KSVKdMM3I (D x_, D y_);
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KpositiveQVKdMM3;
D KpositiveQVKdMM3I (D x_);
extern _KLsimple_methodGVKe KpositiveQVKdMM2;
D KpositiveQVKdMM2I (D x_);
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KzeroQVKdMM3;
D KzeroQVKdMM3I (D x_);
extern _KLsimple_methodGVKe KzeroQVKdMM2;
D KzeroQVKdMM2I (D x_);
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KTVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KTVKdMM3;
D KTVKdMM3I (D x_, D y_);
extern _KLsimple_methodGVKe KTVKdMM2;
D KTVKdMM2I (D x_, D y_);
extern _KLmethod_domainGVKe KCVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KCVKdMM1;
D KCVKdMM1I (D base_, D power_);
extern _KLsimple_methodGVKe KCVKdMM2;
D KCVKdMM2I (D base_, D power_);
extern _KLmethod_domainGVKe KCVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KintegralQVKdMM2;
D KintegralQVKdMM2I (D x_);
extern _KLsimple_methodGVKe KintegralQVKdMM3;
D KintegralQVKdMM3I (D x_);
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_46;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_50;
extern _KLkeyword_methodGVKe KmakeVKdMM9;
D KmakeVKdMM9I (D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM10;
D KmakeVKdMM10I (D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_49;
extern _KLsimple_methodGVKe KasVKdMM28;
D KasVKdMM28I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM29;
D KasVKdMM29I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM30;
D KasVKdMM30I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM31;
D KasVKdMM31I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM32;
D KasVKdMM32I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM33;
D KasVKdMM33I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM34;
D KasVKdMM34I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM35;
D KasVKdMM35I (D class_, D x_);
extern _KLsimple_methodGVKe KasVKdMM36;
D KasVKdMM36I (D class_, D x_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_38;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_39;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_40;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_41;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_42;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_44;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_45;
static _KLsignatureAvaluesGVKi K133;
static _KLsimple_object_vectorGVKd_2 K134;
static _KLsingletonGVKd K135;
static _KLsignatureAvaluesGVKi K136;
static _KLsimple_object_vectorGVKd_2 K137;
static _KLsignatureAvaluesGVKi K138;
static _KLsimple_object_vectorGVKd_2 K139;
static _KLsingletonGVKd K140;
static _KLsignatureAvaluesGVKi K141;
static _KLsimple_object_vectorGVKd_2 K142;
static _KLsignatureAvaluesGVKi K143;
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsingletonGVKd K145;
static _KLsignatureAvaluesGVKi K146;
static _KLsimple_object_vectorGVKd_2 K147;
static _KLsignatureAvaluesGVKi K148;
static _KLsimple_object_vectorGVKd_2 K149;
static _KLsignatureAvaluesGVKi K150;
static _KLsimple_object_vectorGVKd_2 K151;
static _KLsignatureAvaluesGVKi K152;
static _KLsimple_object_vectorGVKd_2 K153;
static _KLkeyword_signatureGVKe K154;
static _KLsimple_object_vectorGVKd_1 K155;
static _KLkeyword_signatureGVKe K156;
static _KLsimple_object_vectorGVKd_1 K157;
static _KLsignatureAvaluesGVKi K158;
static _KLsignatureAvaluesGVKi K159;
static _KLsignatureAvaluesGVKi K160;
static _KLsimple_object_vectorGVKd_2 K161;
static _KLsignatureAvaluesGVKi K162;
static _KLsimple_object_vectorGVKd_2 K163;
static _KLsignatureAvaluesGVKi K164;
static _KLsignatureAvaluesGVKi K165;
static _KLsignatureAvaluesGVKi K166;
static _KLsimple_object_vectorGVKd_2 K167;
static _KLsignatureAvaluesGVKi K168;
static _KLsimple_object_vectorGVKd_2 K169;
static _KLsignatureAvaluesGVKi K170;
static _KLsimple_object_vectorGVKd_2 K171;
static _KLsignatureAvaluesGVKi K172;
static _KLsimple_object_vectorGVKd_2 K173;
static _KLsignatureAvaluesGVKi K174;
static _KLsimple_object_vectorGVKd_2 K175;
static _KLsignatureAvaluesGVKi K176;
static _KLsimple_object_vectorGVKd_2 K177;
static _KLsignatureAvaluesGVKi K178;
static _KLsignatureAvaluesGVKi K179;
static _KLsignatureAvaluesGVKi K180;
static _KLsimple_object_vectorGVKd_2 K181;
static _KLsignatureAvaluesGVKi K182;
static _KLsimple_object_vectorGVKd_2 K183;
static _KLsignatureAvaluesGVKi K184;
static _KLsimple_object_vectorGVKd_2 K185;
static _KLsignatureAvaluesGVKi K186;
static _KLsimple_object_vectorGVKd_2 K187;
static _KLsignatureAvaluesGVKi K188;
static _KLsignatureAvaluesGVKi K189;
static _KLsignatureAvaluesGVKi K190;
static _KLsignatureAvaluesGVKi K191;
extern _KLsimple_methodGVKe Kfloat_underflowVKe;
D Kfloat_underflowVKeI ();
static _KLsignatureGVKe K194;
extern _KLsimple_methodGVKe Kfloat_overflowVKe;
D Kfloat_overflowVKeI ();
extern _KLsimple_methodGVKe Kfloat_divide_by_0VKe;
D Kfloat_divide_by_0VKeI ();

/* Indirection variables */


/* Variables */

D float_divide_by_0VKe = &Kfloat_divide_by_0VKe;
D float_overflowVKe = &Kfloat_overflowVKe;
D float_underflowVKe = &Kfloat_underflowVKe;
D Lextended_floatGVKd = &KLdouble_floatGVKd;

/* Objects */

_KLsimple_methodGVKe KLVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K191,
  &KLVKdMM11I
};

_KLsimple_methodGVKe KLVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K190,
  &KLVKdMM12I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_2,
  &KLVKdMM12
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_3,
  &KLVKdMM11
};

_KLsimple_methodGVKe KEVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K191,
  &KEVKdMM12I
};

_KLsimple_methodGVKe KEVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K190,
  &KEVKdMM13I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_9,
  &KEVKdMM13
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_10,
  &KEVKdMM12
};

_KLsimple_methodGVKe Kshallow_copyVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kshallow_copyVKdMM0I
};

_KLsimple_methodGVKe Kshallow_copyVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K189,
  &Kshallow_copyVKdMM1I
};

_KLmethod_domainGVKe KnegativeVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KnegativeVKdMM2
};

_KLmethod_domainGVKe KnegativeVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeVKdRD_dylanRD_0,
  &KnegativeVKdMM1
};

_KLsimple_methodGVKe KnegativeVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K189,
  &KnegativeVKdMM2I
};

_KLsimple_methodGVKe KnegativeVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &KnegativeVKdMM1I
};

_KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KnegativeQVKdMM3
};

_KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeQVKdRD_dylanRD_0,
  &KnegativeQVKdMM2
};

_KLsimple_methodGVKe KnegativeQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &KnegativeQVKdMM3I
};

_KLsimple_methodGVKe KnegativeQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K159,
  &KnegativeQVKdMM2I
};

_KLsimple_methodGVKe KtruncateSVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K186,
  &KtruncateSVKdMM3I
};

_KLsimple_methodGVKe KtruncateSVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K184,
  &KtruncateSVKdMM2I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K182,
  &Kcontagious_typeVKiMM10I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K180,
  &Kcontagious_typeVKiMM9I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K179,
  &Kcontagious_typeVKiMM8I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K178,
  &Kcontagious_typeVKiMM7I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K176,
  &Kcontagious_typeVKiMM6I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K174,
  &Kcontagious_typeVKiMM5I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K172,
  &Kcontagious_typeVKiMM4I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K170,
  &Kcontagious_typeVKiMM3I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K168,
  &Kcontagious_typeVKiMM2I
};

_KLsimple_methodGVKe Kcontagious_typeVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K166,
  &Kcontagious_typeVKiMM1I
};

_KLsimple_methodGVKe K_VKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K164,
  &K_VKdMM2I
};

_KLsimple_methodGVKe K_VKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &K_VKdMM3I
};

_KLmethod_domainGVKe K_VKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &K_VKdMM3
};

_KLmethod_domainGVKe K_VKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &K_VKdRD_dylanRD_0,
  &K_VKdMM2
};

_KLsimple_methodGVKe KAVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K164,
  &KAVKdMM2I
};

_KLsimple_methodGVKe KAVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &KAVKdMM3I
};

_KLmethod_domainGVKe KAVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KAVKdMM3
};

_KLmethod_domainGVKe KAVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KAVKdRD_dylanRD_0,
  &KAVKdMM2
};

_KLmethod_domainGVKe KSVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KSVKdMM4
};

_KLmethod_domainGVKe KSVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KSVKdRD_dylanRD_0,
  &KSVKdMM3
};

_KLsimple_methodGVKe KSVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &KSVKdMM4I
};

_KLsimple_methodGVKe KSVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K164,
  &KSVKdMM3I
};

_KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KpositiveQVKdMM3
};

_KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KpositiveQVKdRD_dylanRD_0,
  &KpositiveQVKdMM2
};

_KLsimple_methodGVKe KpositiveQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &KpositiveQVKdMM3I
};

_KLsimple_methodGVKe KpositiveQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K159,
  &KpositiveQVKdMM2I
};

_KLmethod_domainGVKe KzeroQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KzeroQVKdMM3
};

_KLmethod_domainGVKe KzeroQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KzeroQVKdRD_dylanRD_0,
  &KzeroQVKdMM2
};

_KLsimple_methodGVKe KzeroQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &KzeroQVKdMM3I
};

_KLsimple_methodGVKe KzeroQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K159,
  &KzeroQVKdMM2I
};

_KLmethod_domainGVKe KTVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KTVKdMM3
};

_KLmethod_domainGVKe KTVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KTVKdRD_dylanRD_0,
  &KTVKdMM2
};

_KLsimple_methodGVKe KTVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &KTVKdMM3I
};

_KLsimple_methodGVKe KTVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K164,
  &KTVKdMM2I
};

_KLmethod_domainGVKe KCVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KCVKdRD_dylanRD_0,
  &KCVKdMM1
};

_KLsimple_methodGVKe KCVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K162,
  &KCVKdMM1I
};

_KLsimple_methodGVKe KCVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K160,
  &KCVKdMM2I
};

_KLmethod_domainGVKe KCVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KCVKdMM2
};

_KLsimple_methodGVKe KintegralQVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K159,
  &KintegralQVKdMM2I
};

_KLsimple_methodGVKe KintegralQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &KintegralQVKdMM3I
};

_KLmethod_domainGVKe KintegralQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KintegralQVKdMM3
};

_KLmethod_domainGVKe KintegralQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KintegralQVKdRD_dylanRD_0,
  &KintegralQVKdMM2
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_46 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_45,
  &KasVKdMM28
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_50 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_49,
  &KmakeVKdMM9
};

_KLkeyword_methodGVKe KmakeVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K156,
  &key_mep_2,
  &KmakeVKdMM9I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K154,
  &key_mep_2,
  &KmakeVKdMM10I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_49 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_48,
  &KmakeVKdMM10
};

_KLsimple_methodGVKe KasVKdMM28 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K152,
  &KasVKdMM28I
};

_KLsimple_methodGVKe KasVKdMM29 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K150,
  &KasVKdMM29I
};

_KLsimple_methodGVKe KasVKdMM30 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K148,
  &KasVKdMM30I
};

_KLsimple_methodGVKe KasVKdMM31 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K146,
  &KasVKdMM31I
};

_KLsimple_methodGVKe KasVKdMM32 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K143,
  &KasVKdMM32I
};

_KLsimple_methodGVKe KasVKdMM33 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K141,
  &KasVKdMM33I
};

_KLsimple_methodGVKe KasVKdMM34 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K138,
  &KasVKdMM34I
};

_KLsimple_methodGVKe KasVKdMM35 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K136,
  &KasVKdMM35I
};

_KLsimple_methodGVKe KasVKdMM36 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &KasVKdMM36I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_38 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_37,
  &KasVKdMM36
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_39 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_38,
  &KasVKdMM35
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_40 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_39,
  &KasVKdMM34
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_41 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_40,
  &KasVKdMM33
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_42 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_41,
  &KasVKdMM32
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_43 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_42,
  &KasVKdMM31
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_44 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_43,
  &KasVKdMM30
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_45 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_44,
  &KasVKdMM29
};

static _KLsignatureAvaluesGVKi K133 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K134,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K135,
  &KLsingle_floatGVKd
};

static _KLsingletonGVKd K135 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K136 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K137,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K135,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K138 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K139,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K140,
  &KLdouble_floatGVKd
};

static _KLsingletonGVKd K140 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K141 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K142,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K142 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K140,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K143 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K144,
  &KDsignature_LfloatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K145,
  &KLintegerGVKd
};

static _KLsingletonGVKd K145 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLfloatGVKd
};

static _KLsignatureAvaluesGVKi K146 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K147,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K145,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K148 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K149,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K135,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K150 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K151,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K140,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K152 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K153,
  &KDsignature_LfloatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K145,
  &KLfloatGVKd
};

static _KLkeyword_signatureGVKe K154 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K155,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K135
};

static _KLkeyword_signatureGVKe K156 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K157,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K140
};

static _KLsignatureAvaluesGVKi K158 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K159 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K161,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K162 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K163,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K164 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K165 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K166 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K167,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K167 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLfloatGVKd
};

static _KLsignatureAvaluesGVKi K168 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K169,
  &K157
};

static _KLsimple_object_vectorGVKd_2 K169 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K170 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K171,
  &K155
};

static _KLsimple_object_vectorGVKd_2 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K172 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K173,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfloatGVKd,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K174 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K175,
  &K157
};

static _KLsimple_object_vectorGVKd_2 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K176 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K177,
  &K155
};

static _KLsimple_object_vectorGVKd_2 K177 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K178 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lsingle_floatG_typesVKi,
  &K157
};

static _KLsignatureAvaluesGVKi K179 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Ldouble_floatG_typesVKi,
  &K155
};

static _KLsignatureAvaluesGVKi K180 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K181,
  &K155
};

static _KLsimple_object_vectorGVKd_2 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K182 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K183,
  &K155
};

static _KLsimple_object_vectorGVKd_2 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K184 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Lsingle_floatG_typesVKi,
  &K185
};

static _KLsimple_object_vectorGVKd_2 K185 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K186 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Ldouble_floatG_typesVKi,
  &K187
};

static _KLsimple_object_vectorGVKd_2 K187 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K188 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K189 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K190 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K191 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kfloat_underflowVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K194,
  &Kfloat_underflowVKeI
};

static _KLsignatureGVKe K194 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kfloat_overflowVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K194,
  &Kfloat_overflowVKeI
};

_KLsimple_methodGVKe Kfloat_divide_by_0VKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K194,
  &Kfloat_divide_by_0VKeI
};

/* Code */

D KLVKdMM11I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:170
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:173
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:174
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:172
  T5 = primitive_single_float_less_thanQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:172
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:170
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM12I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:297
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:300
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:301
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:299
  T5 = primitive_double_float_less_thanQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:299
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:297
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM12I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:163
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:166
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:167
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:165
  T5 = primitive_single_float_equalsQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:165
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:163
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM13I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:293
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:294
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:292
  T5 = primitive_double_float_equalsQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:292
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:290
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kshallow_copyVKdMM0I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:137
  T2_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:136
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kshallow_copyVKdMM1I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:261
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:262
  T2_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:261
  MV_SET_COUNT(1);
  return(T2_0);
}

D KnegativeVKdMM2I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:362
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:362
  T3 = primitive_double_float_negate(T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:361
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:361
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:359
  MV_SET_COUNT(1);
  return(T5_0);
}

D KnegativeVKdMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:232
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:235
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:235
  T3 = primitive_single_float_negate(T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:234
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:234
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:232
  MV_SET_COUNT(1);
  return(T5_0);
}

D KnegativeQVKdMM3I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:316
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:318
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:317
  T3 = primitive_double_float_less_thanQ(T2,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:317
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:316
  MV_SET_COUNT(1);
  return(T4_0);
}

D KnegativeQVKdMM2I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:191
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:190
  T3 = primitive_single_float_less_thanQ(T2,0.0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:190
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:189
  MV_SET_COUNT(1);
  return(T4_0);
}

D KtruncateSVKdMM3I (D real_, D divisor_) {
  DSINT T3;
  DDFLT T4;
  DDFLT T5;
  DDFLT T6;
  DWORD T7;
  DWORD T8;
  D T9;
  DDFLT T10;
  DDFLT T11;
  DDFLT T12;
  D T13;
  D T14_0;
  D T14_1;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:365
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:367
  T4 = primitive_double_float_as_raw(real_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:367
  T5 = primitive_double_float_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:367
  T6 = primitive_double_float_divide(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:369
  T3 = primitive_double_float_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:368
  T7 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:368
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:368
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:371
  T10 = primitive_integer_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:371
  T11 = primitive_double_float_subtract(T6,T10);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:371
  T12 = primitive_double_float_multiply(T5,T11);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:371
  T13 = primitive_raw_as_double_float(T12);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:371
  T14_0 = T9;
  T14_1 = T13;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:365
  MV_SET_ELT(1, T14_1);
  MV_SET_COUNT(2);
  return(T14_0);
}

D KtruncateSVKdMM2I (D real_, D divisor_) {
  DSINT T3;
  DSFLT T4;
  DSFLT T5;
  DSFLT T6;
  DWORD T7;
  DWORD T8;
  D T9;
  DSFLT T10;
  DSFLT T11;
  DSFLT T12;
  D T13;
  D T14_0;
  D T14_1;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:238
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:240
  T4 = primitive_single_float_as_raw(real_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:240
  T5 = primitive_single_float_as_raw(divisor_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:240
  T6 = primitive_single_float_divide(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:242
  T3 = primitive_single_float_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:241
  T7 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:241
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:241
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:244
  T10 = primitive_integer_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:244
  T11 = primitive_single_float_subtract(T6,T10);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:244
  T12 = primitive_single_float_multiply(T5,T11);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:244
  T13 = primitive_raw_as_single_float(T12);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:244
  T14_0 = T9;
  T14_1 = T13;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:238
  MV_SET_ELT(1, T14_1);
  MV_SET_COUNT(2);
  return(T14_0);
}

D Kcontagious_typeVKiMM10I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:72
  T3_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:70
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM9I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:67
  T3_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:65
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM8I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:62
  T3_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:60
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM7I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:57
  T3_0 = &KLsingle_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:55
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM6I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:52
  T3_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:50
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM5I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:47
  T3_0 = &KLsingle_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:45
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM4I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:42
  T3_0 = Kobject_classVKdI(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:40
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM3I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:37
  T3_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:35
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM2I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:32
  T3_0 = &KLsingle_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:30
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcontagious_typeVKiMM1I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:27
  T3_0 = Kobject_classVKdI(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:25
  MV_SET_COUNT(1);
  return(T3_0);
}

D K_VKdMM2I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:212
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:213
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:211
  T5 = primitive_single_float_subtract(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:210
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:210
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:208
  MV_SET_COUNT(1);
  return(T7_0);
}

D K_VKdMM3I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:335
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:339
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:340
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:338
  T5 = primitive_double_float_subtract(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:337
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:337
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:335
  MV_SET_COUNT(1);
  return(T7_0);
}

D KAVKdMM2I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:200
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:204
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:205
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:203
  T5 = primitive_single_float_add(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:202
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:202
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:200
  MV_SET_COUNT(1);
  return(T7_0);
}

D KAVKdMM3I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:327
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:331
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:332
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:330
  T5 = primitive_double_float_add(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:329
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:329
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:327
  MV_SET_COUNT(1);
  return(T7_0);
}

D KSVKdMM4I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:355
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:356
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:354
  T5 = primitive_double_float_divide(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:353
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:353
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:351
  MV_SET_COUNT(1);
  return(T7_0);
}

D KSVKdMM3I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:224
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:228
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:229
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:227
  T5 = primitive_single_float_divide(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:226
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:226
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:224
  MV_SET_COUNT(1);
  return(T7_0);
}

D KpositiveQVKdMM3I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:310
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:313
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:311
  T3 = primitive_double_float_less_thanQ(0.0e0,T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:311
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:310
  MV_SET_COUNT(1);
  return(T4_0);
}

D KpositiveQVKdMM2I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:186
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:184
  T3 = primitive_single_float_less_thanQ(0.0,T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:184
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:183
  MV_SET_COUNT(1);
  return(T4_0);
}

D KzeroQVKdMM3I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:304
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:306
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:305
  T3 = primitive_double_float_equalsQ(T2,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:305
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:304
  MV_SET_COUNT(1);
  return(T4_0);
}

D KzeroQVKdMM2I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:177
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:179
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:178
  T3 = primitive_single_float_equalsQ(T2,0.0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:178
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:177
  MV_SET_COUNT(1);
  return(T4_0);
}

D KTVKdMM3I (D x_, D y_) {
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:343
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:347
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:348
  T4 = primitive_double_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:346
  T5 = primitive_double_float_multiply(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:345
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:345
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:343
  MV_SET_COUNT(1);
  return(T7_0);
}

D KTVKdMM2I (D x_, D y_) {
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:216
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:220
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:221
  T4 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:219
  T5 = primitive_single_float_multiply(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:218
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:218
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:216
  MV_SET_COUNT(1);
  return(T7_0);
}

D KCVKdMM1I (D base_, D power_) {
  D negative_resultQ_;
  DSFLT T4;
  DSFLT T5;
  D result_;
  D T7_0;
  D T8_0;
  DSFLT T9;
  D T10;
  DWORD T11;
  D T12;
  DSFLT T13;
  D T14;
  DSFLT T15;
  DWORD T16;
  DWORD T17;
  DSFLT T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:247
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
  T9 = primitive_single_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
  T10 = primitive_single_float_less_thanQ(T9,0.0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
    T11 = primitive_cast_integer_as_raw(power_);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
    T12 = primitive_machine_word_logbitQ(2,T11);
    negative_resultQ_ = T12;
  } else {
    negative_resultQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:249
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:252
  T14 = primitive_single_float_less_thanQ(T9,0.0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:252
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:252
    T15 = primitive_single_float_negate(T9);
    T13 = T15;
  } else {
    T13 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:252
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:253
  T17 = primitive_cast_integer_as_raw(power_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:253
  T16 = primitive_machine_word_shift_right(T17,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:253
  T4 = primitive_integer_as_single_float(T16);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:251
  T5 = primitive_single_float_expt(T13,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:250
  result_ = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
  if (negative_resultQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
    T18 = primitive_single_float_negate(T5);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
    T19 = primitive_raw_as_single_float(T18);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
    T20_0 = T19;
    T8_0 = T20_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
    T7_0 = result_;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:254
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:247
  MV_SET_COUNT(1);
  return(T8_0);
}

D KCVKdMM2I (D base_, D power_) {
  D negative_resultQ_;
  DDFLT T4;
  DDFLT T5;
  D result_;
  D T7_0;
  D T8_0;
  DDFLT T9;
  D T10;
  DWORD T11;
  D T12;
  DDFLT T13;
  D T14;
  DDFLT T15;
  DWORD T16;
  DWORD T17;
  DDFLT T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:374
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
  T9 = primitive_double_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
  T10 = primitive_double_float_less_thanQ(T9,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
    T11 = primitive_cast_integer_as_raw(power_);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
    T12 = primitive_machine_word_logbitQ(2,T11);
    negative_resultQ_ = T12;
  } else {
    negative_resultQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:376
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:379
  T14 = primitive_double_float_less_thanQ(T9,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:379
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:379
    T15 = primitive_double_float_negate(T9);
    T13 = T15;
  } else {
    T13 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:379
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:380
  T17 = primitive_cast_integer_as_raw(power_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:380
  T16 = primitive_machine_word_shift_right(T17,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:380
  T4 = primitive_integer_as_double_float(T16);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:378
  T5 = primitive_double_float_expt(T13,T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:377
  result_ = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
  if (negative_resultQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
    T18 = primitive_double_float_negate(T5);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
    T19 = primitive_raw_as_double_float(T18);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
    T20_0 = T19;
    T8_0 = T20_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
    T7_0 = result_;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:381
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:374
  MV_SET_COUNT(1);
  return(T8_0);
}

D KintegralQVKdMM2I (D x_) {
  DSINT T2;
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  DSFLT T6;
  DSFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:195
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T4 = primitive_single_float_divide(T3,1.0000000);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T2 = primitive_single_float_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T5 = primitive_integer_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T6 = primitive_single_float_subtract(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:196
  T7 = primitive_single_float_multiply(1.0000000,T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:197
  T8 = primitive_single_float_equalsQ(T7,0.0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:197
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:195
  MV_SET_COUNT(1);
  return(T9_0);
}

D KintegralQVKdMM3I (D x_) {
  DSINT T2;
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  DDFLT T6;
  DDFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:322
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T4 = primitive_double_float_divide(T3,1.0000000e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T2 = primitive_double_float_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T5 = primitive_integer_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T6 = primitive_double_float_subtract(T4,T5);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:323
  T7 = primitive_double_float_multiply(1.0000000e0,T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:324
  T8 = primitive_double_float_equalsQ(T7,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:324
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:322
  MV_SET_COUNT(1);
  return(T9_0);
}

D KmakeVKdMM9I (D class_, D all_keys_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:13
  T3_0 = Kuninstantiable_errorVKiMM0I(class_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:12
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D KmakeVKdMM10I (D class_, D all_keys_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:16
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:17
  T3_0 = Kuninstantiable_errorVKiMM0I(class_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:16
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:16
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM28I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:75
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:76
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:75
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM29I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:85
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:82
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM30I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:91
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:88
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM31I (D class_, D x_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:97
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:99
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLdouble_floatGVKd, x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:97
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:97
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM32I (D class_, D x_) {
  D T3;
  D T4_0;
  DWORD T5;
  D T6;
  D T7;
  DDFLT T8;
  D T9;
  D T10_0;
  DWORD T11;
  DSFLT T12;
  D T13;
  D T14_0;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  T5 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  T6 = primitive_machine_word_less_thanQ(T5,-67108855);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  if (T6 != &KPfalseVKi) {
    T3 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
    T7 = primitive_machine_word_less_thanQ(67108857,T5);
    T3 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:110
    T11 = primitive_machine_word_shift_right(T5,2);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:110
    T8 = primitive_integer_as_double_float(T11);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:110
    T9 = primitive_raw_as_double_float(T8);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:110
    T10_0 = T9;
    T4_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:112
    T15 = primitive_machine_word_shift_right(T5,2);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:112
    T12 = primitive_integer_as_single_float(T15);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:112
    T13 = primitive_raw_as_single_float(T12);
    // /opt/opendylan-2013.1/sources/dylan/float.dylan:112
    T14_0 = T13;
    T4_0 = T14_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:107
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM33I (D class_, D x_) {
  DSFLT T3;
  D T4;
  D T5_0;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:140
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:142
  T7 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:142
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:142
  T3 = primitive_integer_as_single_float(T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:142
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:142
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:140
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM34I (D class_, D x_) {
  DDFLT T3;
  DSFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:145
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:148
  T3 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:148
  T4 = primitive_double_float_as_single(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:147
  T5 = primitive_raw_as_single_float(T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:147
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:145
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM35I (D class_, D x_) {
  DDFLT T3;
  D T4;
  D T5_0;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:265
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:267
  T7 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:267
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:267
  T3 = primitive_integer_as_double_float(T6);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:267
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:267
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:265
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM36I (D class_, D x_) {
  DSFLT T3;
  DDFLT T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:270
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:273
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:273
  T4 = primitive_single_float_as_double(T3);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:272
  T5 = primitive_raw_as_double_float(T4);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:272
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:270
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kfloat_underflowVKeI () {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:129
  T2_0 = CALL1(&KLarithmetic_underflow_errorGZ32ZconstructorVKiMM0, &KLarithmetic_underflow_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:129
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:129
  T3 = KerrorVKdMM0I(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:128
  return(T3);
}

D Kfloat_overflowVKeI () {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:125
  T2_0 = CALL1(&KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0, &KLarithmetic_overflow_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:125
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:125
  T3 = KerrorVKdMM0I(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:124
  return(T3);
}

D Kfloat_divide_by_0VKeI () {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/float.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:121
  T2_0 = CALL1(&KLdivision_by_zero_errorGZ32ZconstructorVKiMM0, &KLdivision_by_zero_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:121
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:121
  T3 = KerrorVKdMM0I(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/float.dylan:120
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_float_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_float_for_user () {
  return;
}


/* eof */
