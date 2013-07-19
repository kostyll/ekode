#include "run-time.h"

/* Typedefs for referenced classes */

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
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(3);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

typedef struct {
  D wrapper;
} _KLrealGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

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
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

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
} _KLnumberGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KPadd_domainVKnMM0I (D, D);
extern _KLincremental_generic_functionGVKe KCVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Ktranscendentals_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LnumberG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLrealGVKd;
extern _KLmm_wrapperGVKi_0 KLrealGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrealG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfloatG_typesVKi;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsingle_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_floatG_typesVKi;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
D KLVKdMM5I (D, D);
extern _KLsealed_generic_functionGVKe Kcontagious_typeVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsealed_generic_functionGVKe KfloorSVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe KSVKd;
extern _KLclassGVKd KLnumberGVKd;
extern _KLmm_wrapperGVKi_0 KLnumberGVKdW;

/* Defined object declarations */

extern _KLstandalone_domainGVKe_2 KCVKdRD_common_dylanRD_5;
extern _KLsimple_methodGVKe KCVKdMcommon_dylanM2;
D KCVKdMcommon_dylanM2I (D base_, D power_);
extern _KLsimple_methodGVKe KCVKdMcommon_dylanM1;
D KCVKdMcommon_dylanM1I (D base_, D power_);
extern _KLsimple_methodGVKe KCVKdMcommon_dylanM0;
D KCVKdMcommon_dylanM0I (D base_, D power_);
extern _KLsimple_methodGVKe KCVKdMcommon_dylanM3;
D KCVKdMcommon_dylanM3I (D base_, D power_);
extern _KLsimple_methodGVKe KCVKdMcommon_dylanM4;
D KCVKdMcommon_dylanM4I (D base_, D power_);
extern _KLincremental_generic_functionGVKe KlogYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM0;
D KlogYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM1;
D KlogYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM2;
D KlogYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K28;
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLsignatureAvaluesGVKi K31;
static _KLbyte_stringGVKd_3 K32;
static _KLsignatureAvaluesGVKi K33;
static _KLbyte_stringGVKd_34 K34;
static _KLsignatureAvaluesGVKi K35;
static _KLsignatureAvaluesGVKi K36;
extern _KLincremental_generic_functionGVKe Katan2YtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM0;
D Katan2YtranscendentalsVcommon_dylanMM0I (D y_, D x_);
extern _KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM1;
D Katan2YtranscendentalsVcommon_dylanMM1I (D y_, D x_);
extern _KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM2;
D Katan2YtranscendentalsVcommon_dylanMM2I (D y_, D x_);
extern _KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM3;
D Katan2YtranscendentalsVcommon_dylanMM3I (D y_, D x_);
extern _KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM4;
D Katan2YtranscendentalsVcommon_dylanMM4I (D y_, D x_);
extern _KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_3;
extern _KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_5;
static _KLpairGVKd K54;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLsignatureAvaluesGVKi K59;
static _KLbyte_stringGVKd_5 K60;
static _KLbyte_stringGVKd_24 K61;
static _KLdouble_floatGVKd K62;
static _KLdouble_floatGVKd K63;
static _KLdouble_floatGVKd K64;
static _KLdouble_floatGVKd K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsingle_floatGVKd K67;
static _KLsingle_floatGVKd K68;
static _KLsingle_floatGVKd K69;
static _KLsingle_floatGVKd K70;
static _KLsignatureAvaluesGVKi K71;
static _KLsignatureAvaluesGVKi K72;
static _KLdouble_floatGVKd K73;
static _KLdouble_floatGVKd K74;
static _KLdouble_floatGVKd K75;
static _KLdouble_floatGVKd K76;
static _KLsignatureAvaluesGVKi K77;
static _KLsimple_object_vectorGVKd_2 K78;
static _KLdouble_floatGVKd K79;
static _KLdouble_floatGVKd K80;
static _KLdouble_floatGVKd K81;
static _KLdouble_floatGVKd K82;
static _KLsignatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLbyte_stringGVKd_31 K85;
static _KLsignatureAvaluesGVKi K86;
static _KLsimple_object_vectorGVKd_2 K87;
extern _KLincremental_generic_functionGVKe KatanhYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM0;
D KatanhYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM1;
D KatanhYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM2;
D KatanhYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K99;
static _KLpairGVKd K100;
static _KLpairGVKd K101;
static _KLbyte_stringGVKd_5 K102;
extern _KLincremental_generic_functionGVKe KacoshYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM0;
D KacoshYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM1;
D KacoshYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM2;
D KacoshYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K114;
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLbyte_stringGVKd_5 K117;
static _KLbyte_stringGVKd_35 K118;
extern _KLincremental_generic_functionGVKe KasinhYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM0;
D KasinhYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM1;
D KasinhYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM2;
D KasinhYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K130;
static _KLpairGVKd K131;
static _KLpairGVKd K132;
static _KLbyte_stringGVKd_5 K133;
extern _KLincremental_generic_functionGVKe KtanhYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM0;
D KtanhYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM1;
D KtanhYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM2;
D KtanhYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K145;
static _KLpairGVKd K146;
static _KLpairGVKd K147;
static _KLbyte_stringGVKd_4 K148;
extern _KLincremental_generic_functionGVKe KcoshYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM0;
D KcoshYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM1;
D KcoshYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM2;
D KcoshYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K160;
static _KLpairGVKd K161;
static _KLpairGVKd K162;
static _KLbyte_stringGVKd_4 K163;
extern _KLincremental_generic_functionGVKe KsinhYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM0;
D KsinhYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM1;
D KsinhYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM2;
D KsinhYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLbyte_stringGVKd_4 K178;
extern _KLincremental_generic_functionGVKe KatanYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM0;
D KatanYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM1;
D KatanYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM2;
D KatanYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K190;
static _KLpairGVKd K191;
static _KLpairGVKd K192;
static _KLbyte_stringGVKd_4 K193;
extern _KLincremental_generic_functionGVKe KacosYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM0;
D KacosYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM1;
D KacosYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM2;
D KacosYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K205;
static _KLpairGVKd K206;
static _KLpairGVKd K207;
static _KLbyte_stringGVKd_4 K208;
static _KLbyte_stringGVKd_33 K209;
extern _KLincremental_generic_functionGVKe KasinYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM0;
D KasinYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM1;
D KasinYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM2;
D KasinYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K221;
static _KLpairGVKd K222;
static _KLpairGVKd K223;
static _KLbyte_stringGVKd_4 K224;
static _KLbyte_stringGVKd_33 K225;
extern _KLincremental_generic_functionGVKe KtanYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM0;
D KtanYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM1;
D KtanYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM2;
D KtanYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K237;
static _KLpairGVKd K238;
static _KLpairGVKd K239;
static _KLbyte_stringGVKd_3 K240;
extern _KLincremental_generic_functionGVKe KcosYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM0;
D KcosYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM1;
D KcosYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM2;
D KcosYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K252;
static _KLpairGVKd K253;
static _KLpairGVKd K254;
static _KLbyte_stringGVKd_3 K255;
extern _KLincremental_generic_functionGVKe KsinYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM0;
D KsinYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM1;
D KsinYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM2;
D KsinYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K267;
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLbyte_stringGVKd_3 K270;
extern _KLsimple_methodGVKe KisqrtYtranscendentalsVcommon_dylan;
D KisqrtYtranscendentalsVcommon_dylanI (D x_);
extern _KLincremental_generic_functionGVKe KsqrtYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM0;
D KsqrtYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM1;
D KsqrtYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM2;
D KsqrtYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K284;
static _KLpairGVKd K285;
static _KLpairGVKd K286;
static _KLbyte_stringGVKd_4 K287;
static _KLsignatureAvaluesGVKi K288;
extern _KLsimple_methodGVKe KlognYtranscendentalsVcommon_dylan;
D KlognYtranscendentalsVcommon_dylanI (D x_, D base_);
extern _KLincremental_generic_functionGVKe KexpYtranscendentalsVcommon_dylan;
extern _KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM0;
D KexpYtranscendentalsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM1;
D KexpYtranscendentalsVcommon_dylanMM1I (D x_);
extern _KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM2;
D KexpYtranscendentalsVcommon_dylanMM2I (D x_);
extern _KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_1;
extern _KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_3;
static _KLpairGVKd K302;
static _KLpairGVKd K303;
static _KLpairGVKd K304;
static _KLbyte_stringGVKd_3 K305;
static _KLdouble_floatGVKd K306;
static _KLdouble_floatGVKd K307;
static _KLsingle_floatGVKd K308;
static _KLsingle_floatGVKd K309;

/* Indirection variables */


/* Variables */

D Dsingle_piYtranscendentalsVcommon_dylan = &K309;
D Dsingle_eYtranscendentalsVcommon_dylan = &K308;
D Ddouble_piYtranscendentalsVcommon_dylan = &K307;
D Ddouble_eYtranscendentalsVcommon_dylan = &K306;
D expYtranscendentalsVcommon_dylan = &KexpYtranscendentalsVcommon_dylan;
D logYtranscendentalsVcommon_dylan = &KlogYtranscendentalsVcommon_dylan;
D lognYtranscendentalsVcommon_dylan = &KlognYtranscendentalsVcommon_dylan;
D sqrtYtranscendentalsVcommon_dylan = &KsqrtYtranscendentalsVcommon_dylan;
D isqrtYtranscendentalsVcommon_dylan = &KisqrtYtranscendentalsVcommon_dylan;
D sinYtranscendentalsVcommon_dylan = &KsinYtranscendentalsVcommon_dylan;
D cosYtranscendentalsVcommon_dylan = &KcosYtranscendentalsVcommon_dylan;
D tanYtranscendentalsVcommon_dylan = &KtanYtranscendentalsVcommon_dylan;
D asinYtranscendentalsVcommon_dylan = &KasinYtranscendentalsVcommon_dylan;
D acosYtranscendentalsVcommon_dylan = &KacosYtranscendentalsVcommon_dylan;
D atanYtranscendentalsVcommon_dylan = &KatanYtranscendentalsVcommon_dylan;
D sinhYtranscendentalsVcommon_dylan = &KsinhYtranscendentalsVcommon_dylan;
D coshYtranscendentalsVcommon_dylan = &KcoshYtranscendentalsVcommon_dylan;
D tanhYtranscendentalsVcommon_dylan = &KtanhYtranscendentalsVcommon_dylan;
D asinhYtranscendentalsVcommon_dylan = &KasinhYtranscendentalsVcommon_dylan;
D acoshYtranscendentalsVcommon_dylan = &KacoshYtranscendentalsVcommon_dylan;
D atanhYtranscendentalsVcommon_dylan = &KatanhYtranscendentalsVcommon_dylan;
D atan2YtranscendentalsVcommon_dylan = &Katan2YtranscendentalsVcommon_dylan;

/* Objects */

_KLstandalone_domainGVKe_2 KCVKdRD_common_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  (D) 9,
  &KLrealGVKd,
  &KLrealGVKd
};

_KLsimple_methodGVKe KCVKdMcommon_dylanM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K86,
  &KCVKdMcommon_dylanM2I
};

_KLsimple_methodGVKe KCVKdMcommon_dylanM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K77,
  &KCVKdMcommon_dylanM1I
};

_KLsimple_methodGVKe KCVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K83,
  &KCVKdMcommon_dylanM0I
};

_KLsimple_methodGVKe KCVKdMcommon_dylanM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K71,
  &KCVKdMcommon_dylanM3I
};

_KLsimple_methodGVKe KCVKdMcommon_dylanM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K66,
  &KCVKdMcommon_dylanM4I
};

_KLincremental_generic_functionGVKe KlogYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  (D) 1,
  &K32,
  &K28,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KlogYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KlogYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KlogYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KlogYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KlogYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KlogYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KlogYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KlogYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K28 = {
  &KLpairGVKdW /* wrapper */,
  &KlogYtranscendentalsVcommon_dylanMM0,
  &K29
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &KlogYtranscendentalsVcommon_dylanMM1,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &KlogYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K31 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LnumberG_typesVKi,
  &KDsignature_LnumberG_typesVKi
};

static _KLbyte_stringGVKd_3 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "log"
};

static _KLsignatureAvaluesGVKi K33 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrealG_typesVKi,
  &KDsignature_LfloatG_typesVKi
};

static _KLbyte_stringGVKd_34 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "LOG would produce a complex number"
};

static _KLsignatureAvaluesGVKi K35 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K36 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

_KLincremental_generic_functionGVKe Katan2YtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K59,
  &KPfalseVKi,
  &K60,
  &K54,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_5,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K83,
  &Katan2YtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K77,
  &Katan2YtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K72,
  &Katan2YtranscendentalsVcommon_dylanMM2I
};

_KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K71,
  &Katan2YtranscendentalsVcommon_dylanMM3I
};

_KLsimple_methodGVKe Katan2YtranscendentalsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K66,
  &Katan2YtranscendentalsVcommon_dylanMM4I
};

_KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &Katan2YtranscendentalsVcommon_dylanMM4
};

_KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &Katan2YtranscendentalsVcommon_dylanMM3
};

_KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &Katan2YtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  &Katan2YtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &Katan2YtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_2 Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &Katan2YtranscendentalsVcommon_dylanRD_common_dylanRD_4,
  (D) 9,
  &KLrealGVKd,
  &KLrealGVKd
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Katan2YtranscendentalsVcommon_dylanMM0,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Katan2YtranscendentalsVcommon_dylanMM1,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &Katan2YtranscendentalsVcommon_dylanMM2,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Katan2YtranscendentalsVcommon_dylanMM3,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Katan2YtranscendentalsVcommon_dylanMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LnumberG_typesVKi,
  &KDsignature_LnumberG_typesVKi
};

static _KLbyte_stringGVKd_5 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "atan2"
};

static _KLbyte_stringGVKd_24 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "atan2(0, 0) is undefined"
};

static _KLdouble_floatGVKd K62 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.5707963e0
};

static _KLdouble_floatGVKd K63 = {
  &KLdouble_floatGVKdW /* wrapper */,
  -1.5707963e0
};

static _KLdouble_floatGVKd K64 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

static _KLdouble_floatGVKd K65 = {
  &KLdouble_floatGVKdW /* wrapper */,
  3.1415927e0
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsingle_floatGVKd K67 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.5707964
};

static _KLsingle_floatGVKd K68 = {
  &KLsingle_floatGVKdW /* wrapper */,
  -1.5707964
};

static _KLsingle_floatGVKd K69 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

static _KLsingle_floatGVKd K70 = {
  &KLsingle_floatGVKdW /* wrapper */,
  3.1415928
};

static _KLsignatureAvaluesGVKi K71 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LrealG_typesVKi,
  &KDsignature_LfloatG_typesVKi
};

static _KLdouble_floatGVKd K73 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.5707963e0
};

static _KLdouble_floatGVKd K74 = {
  &KLdouble_floatGVKdW /* wrapper */,
  -1.5707963e0
};

static _KLdouble_floatGVKd K75 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

static _KLdouble_floatGVKd K76 = {
  &KLdouble_floatGVKdW /* wrapper */,
  3.1415927e0
};

static _KLsignatureAvaluesGVKi K77 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K78,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLdouble_floatGVKd
};

static _KLdouble_floatGVKd K79 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.5707963e0
};

static _KLdouble_floatGVKd K80 = {
  &KLdouble_floatGVKdW /* wrapper */,
  -1.5707963e0
};

static _KLdouble_floatGVKd K81 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

static _KLdouble_floatGVKd K82 = {
  &KLdouble_floatGVKdW /* wrapper */,
  3.1415927e0
};

static _KLsignatureAvaluesGVKi K83 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K84,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLsingle_floatGVKd
};

static _KLbyte_stringGVKd_31 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "\\^ would produce complex number"
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K87,
  &KDsignature_LfloatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrealGVKd,
  &KLfloatGVKd
};

_KLincremental_generic_functionGVKe KatanhYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K102,
  &K99,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KatanhYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KatanhYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KatanhYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KatanhYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KatanhYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KatanhYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KatanhYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &KatanhYtranscendentalsVcommon_dylanMM0,
  &K100
};

static _KLpairGVKd K100 = {
  &KLpairGVKdW /* wrapper */,
  &KatanhYtranscendentalsVcommon_dylanMM1,
  &K101
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &KatanhYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K102 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "atanh"
};

_KLincremental_generic_functionGVKe KacoshYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K117,
  &K114,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KacoshYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KacoshYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KacoshYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KacoshYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KacoshYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KacoshYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KacoshYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &KacoshYtranscendentalsVcommon_dylanMM0,
  &K115
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &KacoshYtranscendentalsVcommon_dylanMM1,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &KacoshYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "acosh"
};

static _KLbyte_stringGVKd_35 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "SQRT would produce a complex number"
};

_KLincremental_generic_functionGVKe KasinhYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K133,
  &K130,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KasinhYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KasinhYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KasinhYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KasinhYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KasinhYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KasinhYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KasinhYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &KasinhYtranscendentalsVcommon_dylanMM0,
  &K131
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &KasinhYtranscendentalsVcommon_dylanMM1,
  &K132
};

static _KLpairGVKd K132 = {
  &KLpairGVKdW /* wrapper */,
  &KasinhYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "asinh"
};

_KLincremental_generic_functionGVKe KtanhYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K148,
  &K145,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KtanhYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KtanhYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KtanhYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KtanhYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KtanhYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KtanhYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KtanhYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanhYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K145 = {
  &KLpairGVKdW /* wrapper */,
  &KtanhYtranscendentalsVcommon_dylanMM0,
  &K146
};

static _KLpairGVKd K146 = {
  &KLpairGVKdW /* wrapper */,
  &KtanhYtranscendentalsVcommon_dylanMM1,
  &K147
};

static _KLpairGVKd K147 = {
  &KLpairGVKdW /* wrapper */,
  &KtanhYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K148 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "tanh"
};

_KLincremental_generic_functionGVKe KcoshYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K163,
  &K160,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KcoshYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KcoshYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KcoshYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KcoshYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KcoshYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KcoshYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KcoshYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcoshYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K160 = {
  &KLpairGVKdW /* wrapper */,
  &KcoshYtranscendentalsVcommon_dylanMM0,
  &K161
};

static _KLpairGVKd K161 = {
  &KLpairGVKdW /* wrapper */,
  &KcoshYtranscendentalsVcommon_dylanMM1,
  &K162
};

static _KLpairGVKd K162 = {
  &KLpairGVKdW /* wrapper */,
  &KcoshYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K163 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "cosh"
};

_KLincremental_generic_functionGVKe KsinhYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K178,
  &K175,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KsinhYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KsinhYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsinhYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KsinhYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KsinhYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KsinhYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KsinhYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinhYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &KsinhYtranscendentalsVcommon_dylanMM0,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KsinhYtranscendentalsVcommon_dylanMM1,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KsinhYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K178 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "sinh"
};

_KLincremental_generic_functionGVKe KatanYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K193,
  &K190,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KatanYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KatanYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KatanYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KatanYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KatanYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KatanYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KatanYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KatanYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K190 = {
  &KLpairGVKdW /* wrapper */,
  &KatanYtranscendentalsVcommon_dylanMM0,
  &K191
};

static _KLpairGVKd K191 = {
  &KLpairGVKdW /* wrapper */,
  &KatanYtranscendentalsVcommon_dylanMM1,
  &K192
};

static _KLpairGVKd K192 = {
  &KLpairGVKdW /* wrapper */,
  &KatanYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K193 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "atan"
};

_KLincremental_generic_functionGVKe KacosYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K208,
  &K205,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KacosYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KacosYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KacosYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KacosYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KacosYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KacosYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KacosYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KacosYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K205 = {
  &KLpairGVKdW /* wrapper */,
  &KacosYtranscendentalsVcommon_dylanMM0,
  &K206
};

static _KLpairGVKd K206 = {
  &KLpairGVKdW /* wrapper */,
  &KacosYtranscendentalsVcommon_dylanMM1,
  &K207
};

static _KLpairGVKd K207 = {
  &KLpairGVKdW /* wrapper */,
  &KacosYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K208 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "acos"
};

static _KLbyte_stringGVKd_33 K209 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "ACOS would produce complex number"
};

_KLincremental_generic_functionGVKe KasinYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K224,
  &K221,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KasinYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KasinYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KasinYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KasinYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KasinYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KasinYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KasinYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KasinYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K221 = {
  &KLpairGVKdW /* wrapper */,
  &KasinYtranscendentalsVcommon_dylanMM0,
  &K222
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &KasinYtranscendentalsVcommon_dylanMM1,
  &K223
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KasinYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K224 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "asin"
};

static _KLbyte_stringGVKd_33 K225 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "ASIN would produce complex number"
};

_KLincremental_generic_functionGVKe KtanYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K240,
  &K237,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KtanYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KtanYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KtanYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KtanYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KtanYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KtanYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KtanYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KtanYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K237 = {
  &KLpairGVKdW /* wrapper */,
  &KtanYtranscendentalsVcommon_dylanMM0,
  &K238
};

static _KLpairGVKd K238 = {
  &KLpairGVKdW /* wrapper */,
  &KtanYtranscendentalsVcommon_dylanMM1,
  &K239
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &KtanYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K240 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "tan"
};

_KLincremental_generic_functionGVKe KcosYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K255,
  &K252,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KcosYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KcosYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KcosYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KcosYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KcosYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KcosYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KcosYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KcosYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K252 = {
  &KLpairGVKdW /* wrapper */,
  &KcosYtranscendentalsVcommon_dylanMM0,
  &K253
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &KcosYtranscendentalsVcommon_dylanMM1,
  &K254
};

static _KLpairGVKd K254 = {
  &KLpairGVKdW /* wrapper */,
  &KcosYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K255 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "cos"
};

_KLincremental_generic_functionGVKe KsinYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K270,
  &K267,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KsinYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KsinYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsinYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KsinYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KsinYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KsinYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KsinYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsinYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &KsinYtranscendentalsVcommon_dylanMM0,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &KsinYtranscendentalsVcommon_dylanMM1,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &KsinYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K270 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "sin"
};

_KLsimple_methodGVKe KisqrtYtranscendentalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K288,
  &KisqrtYtranscendentalsVcommon_dylanI
};

_KLincremental_generic_functionGVKe KsqrtYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  (D) 1,
  &K287,
  &K284,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KsqrtYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KsqrtYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsqrtYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KsqrtYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KsqrtYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KsqrtYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KsqrtYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KsqrtYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K284 = {
  &KLpairGVKdW /* wrapper */,
  &KsqrtYtranscendentalsVcommon_dylanMM0,
  &K285
};

static _KLpairGVKd K285 = {
  &KLpairGVKdW /* wrapper */,
  &KsqrtYtranscendentalsVcommon_dylanMM1,
  &K286
};

static _KLpairGVKd K286 = {
  &KLpairGVKdW /* wrapper */,
  &KsqrtYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K287 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "sqrt"
};

static _KLsignatureAvaluesGVKi K288 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KlognYtranscendentalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &KlognYtranscendentalsVcommon_dylanI
};

_KLincremental_generic_functionGVKe KexpYtranscendentalsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K31,
  &KPfalseVKi,
  &K305,
  &K302,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktranscendentals_moduleYdylan_userVcommon_dylan,
  &KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K36,
  &KexpYtranscendentalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &KexpYtranscendentalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KexpYtranscendentalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KexpYtranscendentalsVcommon_dylanMM2I
};

_KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KexpYtranscendentalsVcommon_dylanMM0
};

_KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_0,
  &KexpYtranscendentalsVcommon_dylanMM1
};

_KLmethod_domainGVKe KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_1,
  &KexpYtranscendentalsVcommon_dylanMM2
};

_KLstandalone_domainGVKe_1 KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KexpYtranscendentalsVcommon_dylanRD_common_dylanRD_2,
  (D) 5,
  &KLrealGVKd
};

static _KLpairGVKd K302 = {
  &KLpairGVKdW /* wrapper */,
  &KexpYtranscendentalsVcommon_dylanMM0,
  &K303
};

static _KLpairGVKd K303 = {
  &KLpairGVKdW /* wrapper */,
  &KexpYtranscendentalsVcommon_dylanMM1,
  &K304
};

static _KLpairGVKd K304 = {
  &KLpairGVKdW /* wrapper */,
  &KexpYtranscendentalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K305 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "exp"
};

static _KLdouble_floatGVKd K306 = {
  &KLdouble_floatGVKdW /* wrapper */,
  2.7182818e0
};

static _KLdouble_floatGVKd K307 = {
  &KLdouble_floatGVKdW /* wrapper */,
  3.1415927e0
};

static _KLsingle_floatGVKd K308 = {
  &KLsingle_floatGVKdW /* wrapper */,
  2.7182820
};

static _KLsingle_floatGVKd K309 = {
  &KLsingle_floatGVKdW /* wrapper */,
  3.1415928
};

/* Code */

D KCVKdMcommon_dylanM2I (D base_, D power_) {
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLfloatGVKd, base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  CONGRUENT_CALL_PROLOG(&KCVKd, 2);
  T4_0 = CONGRUENT_CALL2(T3, power_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T5_0 = T4_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T4_0);
    primitive_type_check(T5_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  MV_SET_COUNT(1);
  return(T5_0);
}

D KCVKdMcommon_dylanM1I (D base_, D power_) {
  DSFLT T3;
  DDFLT T4;
  D T5_0;
  DDFLT T6;
  DDFLT T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  DSINT T12;
  DDFLT T13;
  DDFLT T14;
  DDFLT T15;
  DDFLT T16;
  DDFLT T17;
  D T18;
  DSINT T19;
  DDFLT T20;
  DWORD T21;
  DWORD T22;
  D negative_resultQ_;
  DDFLT T24;
  DDFLT T25;
  D result_;
  D T27_0;
  D T28_0;
  D T29;
  D T30;
  DDFLT T31;
  D T32;
  DDFLT T33;
  DDFLT T34;
  D T35;
  D T36_0;
  D T37_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T3 = primitive_single_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T4 = primitive_single_float_as_double(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T11 = primitive_double_float_less_thanQ(T4,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T13 = primitive_double_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T14 = primitive_double_float_divide(T13,1.0000000e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T12 = primitive_double_float_as_integer(T14);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T15 = primitive_integer_as_double_float(T12);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T16 = primitive_double_float_subtract(T14,T15);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T17 = primitive_double_float_multiply(1.0000000e0,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T18 = primitive_double_float_equalsQ(T17,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T20 = primitive_double_float_divide(T13,1.0000000e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T19 = primitive_double_float_as_integer(T20);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T21 = primitive_machine_word_shift_left_signal_overflow(T19,2);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T22 = primitive_machine_word_logior(T21,1);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T29 = primitive_double_float_less_thanQ(T4,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T30 = primitive_machine_word_logbitQ(2,T22);
        negative_resultQ_ = T30;
      } else {
        negative_resultQ_ = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T32 = primitive_double_float_less_thanQ(T4,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T33 = primitive_double_float_negate(T4);
        T31 = T33;
      } else {
        T31 = T4;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T24 = primitive_integer_as_double_float(T19);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T25 = primitive_double_float_expt(T31,T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      result_ = primitive_raw_as_double_float(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (negative_resultQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T34 = primitive_double_float_negate(T25);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T35 = primitive_raw_as_double_float(T34);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T36_0 = T35;
        T28_0 = T36_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T27_0 = result_;
        T28_0 = T27_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T5_0 = T28_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T37_0 = KerrorVKdMM1I(&K85, &KPempty_vectorVKi);
      T5_0 = T37_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T10_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T6 = primitive_double_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T7 = primitive_double_float_expt(T4,T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T8 = primitive_raw_as_double_float(T7);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T9_0 = T8;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  MV_SET_COUNT(1);
  return(T10_0);
}

D KCVKdMcommon_dylanM0I (D base_, D power_) {
  DSFLT T3;
  DDFLT T4;
  D T5_0;
  DDFLT T6;
  D T7;
  D T8_0;
  D T9_0;
  DDFLT T10;
  D T11;
  DSINT T12;
  DDFLT T13;
  DDFLT T14;
  DDFLT T15;
  DDFLT T16;
  D T17;
  DSINT T18;
  DDFLT T19;
  DWORD T20;
  DWORD T21;
  D negative_resultQ_;
  DDFLT T23;
  DDFLT T24;
  D result_;
  D T26_0;
  D T27_0;
  D T28;
  D T29;
  DDFLT T30;
  D T31;
  DDFLT T32;
  DDFLT T33;
  D T34;
  D T35_0;
  D T36_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T3 = primitive_single_float_as_raw(power_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T4 = primitive_single_float_as_double(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T10 = primitive_double_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T11 = primitive_double_float_less_thanQ(T10,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T13 = primitive_double_float_divide(T4,1.0000000e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T12 = primitive_double_float_as_integer(T13);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T14 = primitive_integer_as_double_float(T12);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T15 = primitive_double_float_subtract(T13,T14);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T16 = primitive_double_float_multiply(1.0000000e0,T15);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T17 = primitive_double_float_equalsQ(T16,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T19 = primitive_double_float_divide(T4,1.0000000e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T18 = primitive_double_float_as_integer(T19);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T20 = primitive_machine_word_shift_left_signal_overflow(T18,2);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T21 = primitive_machine_word_logior(T20,1);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T28 = primitive_double_float_less_thanQ(T10,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T29 = primitive_machine_word_logbitQ(2,T21);
        negative_resultQ_ = T29;
      } else {
        negative_resultQ_ = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T31 = primitive_double_float_less_thanQ(T10,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T32 = primitive_double_float_negate(T10);
        T30 = T32;
      } else {
        T30 = T10;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T23 = primitive_integer_as_double_float(T18);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T24 = primitive_double_float_expt(T30,T23);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      result_ = primitive_raw_as_double_float(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      if (negative_resultQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T33 = primitive_double_float_negate(T24);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T34 = primitive_raw_as_double_float(T33);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T35_0 = T34;
        T27_0 = T35_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
        T26_0 = result_;
        T27_0 = T26_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T5_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
      T36_0 = KerrorVKdMM1I(&K85, &KPempty_vectorVKi);
      T5_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T9_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T6 = primitive_double_float_expt(T10,T4);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T7 = primitive_raw_as_double_float(T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
    T8_0 = T7;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  MV_SET_COUNT(1);
  return(T9_0);
}

D KCVKdMcommon_dylanM3I (D base_, D power_) {
  D T3_0;
  DSFLT T4;
  DSFLT T5;
  D T6;
  D T7_0;
  D T8_0;
  DSFLT T9;
  D T10;
  DSINT T11;
  DSFLT T12;
  DSFLT T13;
  DSFLT T14;
  DSFLT T15;
  DSFLT T16;
  D T17;
  DSINT T18;
  DSFLT T19;
  DWORD T20;
  DWORD T21;
  D negative_resultQ_;
  DSFLT T23;
  DSFLT T24;
  D result_;
  D T26_0;
  D T27_0;
  D T28;
  D T29;
  DSFLT T30;
  D T31;
  DSFLT T32;
  DSFLT T33;
  D T34;
  D T35_0;
  D T36_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:176
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:178
  T9 = primitive_single_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:178
  T10 = primitive_single_float_less_thanQ(T9,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:178
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T12 = primitive_single_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T13 = primitive_single_float_divide(T12,1.0000000);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T11 = primitive_single_float_as_integer(T13);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T14 = primitive_integer_as_single_float(T11);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T15 = primitive_single_float_subtract(T13,T14);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T16 = primitive_single_float_multiply(1.0000000,T15);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T17 = primitive_single_float_equalsQ(T16,0.0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T19 = primitive_single_float_divide(T12,1.0000000);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T18 = primitive_single_float_as_integer(T19);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T20 = primitive_machine_word_shift_left_signal_overflow(T18,2);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T21 = primitive_machine_word_logior(T20,1);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T28 = primitive_single_float_less_thanQ(T9,0.0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T29 = primitive_machine_word_logbitQ(2,T21);
        negative_resultQ_ = T29;
      } else {
        negative_resultQ_ = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T31 = primitive_single_float_less_thanQ(T9,0.0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T32 = primitive_single_float_negate(T9);
        T30 = T32;
      } else {
        T30 = T9;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T23 = primitive_integer_as_single_float(T18);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T24 = primitive_single_float_expt(T30,T23);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      result_ = primitive_raw_as_single_float(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      if (negative_resultQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T33 = primitive_single_float_negate(T24);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T34 = primitive_raw_as_single_float(T33);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T35_0 = T34;
        T27_0 = T35_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
        T26_0 = result_;
        T27_0 = T26_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:180
      T3_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:182
      T36_0 = KerrorVKdMM1I(&K85, &KPempty_vectorVKi);
      T3_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:179
    T8_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:187
    T4 = primitive_single_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:185
    T5 = primitive_single_float_expt(T9,T4);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:185
    T6 = primitive_raw_as_single_float(T5);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:185
    T7_0 = T6;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:178
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:176
  MV_SET_COUNT(1);
  return(T8_0);
}

D KCVKdMcommon_dylanM4I (D base_, D power_) {
  D T3_0;
  DDFLT T4;
  DDFLT T5;
  D T6;
  D T7_0;
  D T8_0;
  DDFLT T9;
  D T10;
  DSINT T11;
  DDFLT T12;
  DDFLT T13;
  DDFLT T14;
  DDFLT T15;
  DDFLT T16;
  D T17;
  DSINT T18;
  DDFLT T19;
  DWORD T20;
  DWORD T21;
  D negative_resultQ_;
  DDFLT T23;
  DDFLT T24;
  D result_;
  D T26_0;
  D T27_0;
  D T28;
  D T29;
  DDFLT T30;
  D T31;
  DDFLT T32;
  DDFLT T33;
  D T34;
  D T35_0;
  D T36_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:191
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:193
  T9 = primitive_double_float_as_raw(base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:193
  T10 = primitive_double_float_less_thanQ(T9,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:193
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T12 = primitive_double_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T13 = primitive_double_float_divide(T12,1.0000000e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T11 = primitive_double_float_as_integer(T13);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T14 = primitive_integer_as_double_float(T11);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T15 = primitive_double_float_subtract(T13,T14);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T16 = primitive_double_float_multiply(1.0000000e0,T15);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T17 = primitive_double_float_equalsQ(T16,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T19 = primitive_double_float_divide(T12,1.0000000e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T18 = primitive_double_float_as_integer(T19);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T20 = primitive_machine_word_shift_left_signal_overflow(T18,2);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T21 = primitive_machine_word_logior(T20,1);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T28 = primitive_double_float_less_thanQ(T9,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T29 = primitive_machine_word_logbitQ(2,T21);
        negative_resultQ_ = T29;
      } else {
        negative_resultQ_ = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T31 = primitive_double_float_less_thanQ(T9,0.0e0);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T32 = primitive_double_float_negate(T9);
        T30 = T32;
      } else {
        T30 = T9;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T23 = primitive_integer_as_double_float(T18);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T24 = primitive_double_float_expt(T30,T23);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      result_ = primitive_raw_as_double_float(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      if (negative_resultQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T33 = primitive_double_float_negate(T24);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T34 = primitive_raw_as_double_float(T33);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T35_0 = T34;
        T27_0 = T35_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
        T26_0 = result_;
        T27_0 = T26_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:195
      T3_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:197
      T36_0 = KerrorVKdMM1I(&K85, &KPempty_vectorVKi);
      T3_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:194
    T8_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:202
    T4 = primitive_double_float_as_raw(power_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:200
    T5 = primitive_double_float_expt(T9,T4);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:200
    T6 = primitive_raw_as_double_float(T5);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:200
    T7_0 = T6;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:193
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:191
  MV_SET_COUNT(1);
  return(T8_0);
}

D KlogYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;
  DDFLT T5;
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  T5 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  T6 = primitive_double_float_less_thanQ(T5,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:55
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T2 = primitive_double_float_log(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T3 = primitive_raw_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlogYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;
  DSFLT T5;
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  T5 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  T6 = primitive_single_float_less_thanQ(T5,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:55
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T2 = primitive_single_float_log(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T3 = primitive_raw_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlogYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T3_0 = CALL1(&KlogYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:53
  MV_SET_COUNT(1);
  return(T4_0);
}

D Katan2YtranscendentalsVcommon_dylanMM0I (D y_, D x_) {
  DSFLT T3;
  DDFLT T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15;
  DDFLT T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;
  D T21_0;
  DDFLT T22;
  D T23;
  D T24;
  DDFLT T25;
  DDFLT T26;
  D T27;
  D T28;
  D T29;
  DDFLT T30;
  D T31;
  D T32_0;
  DDFLT T33;
  D T34;
  D T35_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T3 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T4 = primitive_single_float_as_double(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T15 = primitive_double_float_equalsQ(T4,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T16 = primitive_double_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T17 = primitive_double_float_equalsQ(T16,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T18_0 = KerrorVKdMM1I(&K61, &KPempty_vectorVKi);
      T6_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T19 = primitive_double_float_less_thanQ(0.0e0,T16);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T20_0 = &K79;
        T5_0 = T20_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T21_0 = &K80;
        T5_0 = T21_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T14_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T22 = primitive_double_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T23 = primitive_double_float_equalsQ(T22,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T24 = primitive_double_float_less_thanQ(0.0e0,T4);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T7_0 = &K81;
        T9_0 = T7_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T8_0 = &K82;
        T9_0 = T8_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T13_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T25 = primitive_double_float_divide(T22,T4);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T26 = primitive_double_float_atan(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T27 = primitive_raw_as_double_float(T26);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T28 = primitive_double_float_less_thanQ(0.0e0,T4);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T10_0 = T27;
        T12_0 = T10_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T29 = primitive_double_float_less_thanQ(0.0e0,T22);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T30 = primitive_double_float_add(T26,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T31 = primitive_raw_as_double_float(T30);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T32_0 = T31;
          T11_0 = T32_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T33 = primitive_double_float_subtract(T26,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T34 = primitive_raw_as_double_float(T33);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T35_0 = T34;
          T11_0 = T35_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T12_0 = T11_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  MV_SET_COUNT(1);
  return(T14_0);
}

D Katan2YtranscendentalsVcommon_dylanMM1I (D y_, D x_) {
  DSFLT T3;
  DDFLT T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  DDFLT T15;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;
  D T21_0;
  D T22;
  D T23;
  DDFLT T24;
  DDFLT T25;
  D T26;
  D T27;
  D T28;
  DDFLT T29;
  D T30;
  D T31_0;
  DDFLT T32;
  D T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T3 = primitive_single_float_as_raw(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T4 = primitive_single_float_as_double(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T15 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T16 = primitive_double_float_equalsQ(T15,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T17 = primitive_double_float_equalsQ(T4,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T18_0 = KerrorVKdMM1I(&K61, &KPempty_vectorVKi);
      T6_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T19 = primitive_double_float_less_thanQ(0.0e0,T4);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T20_0 = &K73;
        T5_0 = T20_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T21_0 = &K74;
        T5_0 = T21_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T14_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T22 = primitive_double_float_equalsQ(T4,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T23 = primitive_double_float_less_thanQ(0.0e0,T15);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T7_0 = &K75;
        T9_0 = T7_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T8_0 = &K76;
        T9_0 = T8_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T13_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T24 = primitive_double_float_divide(T4,T15);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T25 = primitive_double_float_atan(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T26 = primitive_raw_as_double_float(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T27 = primitive_double_float_less_thanQ(0.0e0,T15);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T10_0 = T26;
        T12_0 = T10_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T28 = primitive_double_float_less_thanQ(0.0e0,T4);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T29 = primitive_double_float_add(T25,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T30 = primitive_raw_as_double_float(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T31_0 = T30;
          T11_0 = T31_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T32 = primitive_double_float_subtract(T25,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T33 = primitive_raw_as_double_float(T32);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
          T34_0 = T33;
          T11_0 = T34_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
        T12_0 = T11_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  MV_SET_COUNT(1);
  return(T14_0);
}

D Katan2YtranscendentalsVcommon_dylanMM2I (D y_, D x_) {
  D T3;
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLfloatGVKd, y_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T5_0 = CALL2(&Katan2YtranscendentalsVcommon_dylan, T3, T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  T6_0 = T5_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T5_0);
    primitive_type_check(T6_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:206
  MV_SET_COUNT(1);
  return(T6_0);
}

D Katan2YtranscendentalsVcommon_dylanMM3I (D y_, D x_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  DSFLT T13;
  D T14;
  DSFLT T15;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20_0;
  DSFLT T21;
  D T22;
  D T23;
  DSFLT T24;
  DSFLT T25;
  D T26;
  D T27;
  D T28;
  DSFLT T29;
  D T30;
  D T31_0;
  DSFLT T32;
  D T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  T13 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  T14 = primitive_single_float_equalsQ(T13,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T15 = primitive_single_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T16 = primitive_single_float_equalsQ(T15,0.0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T17_0 = KerrorVKdMM1I(&K61, &KPempty_vectorVKi);
      T4_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T18 = primitive_single_float_less_thanQ(0.0,T15);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T19_0 = &K67;
        T3_0 = T19_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T20_0 = &K68;
        T3_0 = T20_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T4_0 = T3_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T12_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T21 = primitive_single_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T22 = primitive_single_float_equalsQ(T21,0.0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T23 = primitive_single_float_less_thanQ(0.0,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T5_0 = &K69;
        T7_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T6_0 = &K70;
        T7_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T11_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T24 = primitive_single_float_divide(T21,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T25 = primitive_single_float_atan(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T26 = primitive_raw_as_single_float(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T27 = primitive_single_float_less_thanQ(0.0,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T8_0 = T26;
        T10_0 = T8_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T28 = primitive_single_float_less_thanQ(0.0,T21);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T29 = primitive_single_float_add(T25,3.1415928);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T30 = primitive_raw_as_single_float(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T31_0 = T30;
          T9_0 = T31_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T32 = primitive_single_float_subtract(T25,3.1415928);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T33 = primitive_raw_as_single_float(T32);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
          T34_0 = T33;
          T9_0 = T34_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
        T10_0 = T9_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:240
  MV_SET_COUNT(1);
  return(T12_0);
}

D Katan2YtranscendentalsVcommon_dylanMM4I (D y_, D x_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  DDFLT T13;
  D T14;
  DDFLT T15;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20_0;
  DDFLT T21;
  D T22;
  D T23;
  DDFLT T24;
  DDFLT T25;
  D T26;
  D T27;
  D T28;
  DDFLT T29;
  D T30;
  D T31_0;
  DDFLT T32;
  D T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  T13 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  T14 = primitive_double_float_equalsQ(T13,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T15 = primitive_double_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T16 = primitive_double_float_equalsQ(T15,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T17_0 = KerrorVKdMM1I(&K61, &KPempty_vectorVKi);
      T4_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T18 = primitive_double_float_less_thanQ(0.0e0,T15);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T19_0 = &K62;
        T3_0 = T19_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T20_0 = &K63;
        T3_0 = T20_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T4_0 = T3_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T12_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T21 = primitive_double_float_as_raw(y_);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T22 = primitive_double_float_equalsQ(T21,0.0e0);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T23 = primitive_double_float_less_thanQ(0.0e0,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T5_0 = &K64;
        T7_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T6_0 = &K65;
        T7_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T11_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T24 = primitive_double_float_divide(T21,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T25 = primitive_double_float_atan(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T26 = primitive_raw_as_double_float(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T27 = primitive_double_float_less_thanQ(0.0e0,T13);
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T8_0 = T26;
        T10_0 = T8_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T28 = primitive_double_float_less_thanQ(0.0e0,T21);
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T29 = primitive_double_float_add(T25,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T30 = primitive_raw_as_double_float(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T31_0 = T30;
          T9_0 = T31_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T32 = primitive_double_float_subtract(T25,3.1415927e0);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T33 = primitive_raw_as_double_float(T32);
          // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
          T34_0 = T33;
          T9_0 = T34_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
        T10_0 = T9_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:241
  MV_SET_COUNT(1);
  return(T12_0);
}

D KatanhYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  DDFLT T4;
  D T5;
  DDFLT T6;
  DDFLT T7;
  D T8;
  DDFLT T9;
  DDFLT T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T3 = primitive_double_float_add(1.0000000e0,T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T5 = primitive_double_float_less_thanQ(T3,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T4 = primitive_double_float_log(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T6 = primitive_double_float_subtract(1.0000000e0,T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T8 = primitive_double_float_less_thanQ(T6,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T7 = primitive_double_float_log(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T9 = primitive_double_float_subtract(T4,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T10 = primitive_double_float_divide(T9,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T11 = primitive_raw_as_double_float(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:142
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  MV_SET_COUNT(1);
  return(T12_0);
}

D KatanhYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  DSFLT T4;
  D T5;
  DSFLT T6;
  DSFLT T7;
  D T8;
  DSFLT T9;
  DSFLT T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T3 = primitive_single_float_add(1.0000000,T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T5 = primitive_single_float_less_thanQ(T3,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T4 = primitive_single_float_log(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T6 = primitive_single_float_subtract(1.0000000,T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T8 = primitive_single_float_less_thanQ(T6,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T7 = primitive_single_float_log(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T9 = primitive_single_float_subtract(T4,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T10 = primitive_single_float_divide(T9,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T11 = primitive_raw_as_single_float(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:141
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  MV_SET_COUNT(1);
  return(T12_0);
}

D KatanhYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  T3_0 = CALL1(&KatanhYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:140
  MV_SET_COUNT(1);
  return(T4_0);
}

D KacoshYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  D T6;
  DDFLT T7;
  DDFLT T8;
  DDFLT T9;
  D T10;
  DDFLT T11;
  DDFLT T12;
  D T13;
  DDFLT T14;
  D T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T3 = primitive_double_float_add(T2,1.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T4 = primitive_double_float_divide(T3,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T6 = primitive_double_float_less_thanQ(T4,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T5 = primitive_double_float_sqrt(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T7 = primitive_double_float_subtract(T2,1.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T8 = primitive_double_float_divide(T7,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T10 = primitive_double_float_less_thanQ(T8,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T9 = primitive_double_float_sqrt(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T11 = primitive_double_float_add(T5,T9);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T13 = primitive_double_float_less_thanQ(T11,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T12 = primitive_double_float_log(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T14 = primitive_double_float_multiply(2.0000000e0,T12);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T15 = primitive_raw_as_double_float(T14);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:137
  T16_0 = T15;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  MV_SET_COUNT(1);
  return(T16_0);
}

D KacoshYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  D T6;
  DSFLT T7;
  DSFLT T8;
  DSFLT T9;
  D T10;
  DSFLT T11;
  DSFLT T12;
  D T13;
  DSFLT T14;
  D T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T3 = primitive_single_float_add(T2,1.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T4 = primitive_single_float_divide(T3,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T6 = primitive_single_float_less_thanQ(T4,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T5 = primitive_single_float_sqrt(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T7 = primitive_single_float_subtract(T2,1.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T8 = primitive_single_float_divide(T7,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T10 = primitive_single_float_less_thanQ(T8,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T9 = primitive_single_float_sqrt(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T11 = primitive_single_float_add(T5,T9);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T13 = primitive_single_float_less_thanQ(T11,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T12 = primitive_single_float_log(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T14 = primitive_single_float_multiply(2.0000000,T12);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T15 = primitive_raw_as_single_float(T14);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:136
  T16_0 = T15;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  MV_SET_COUNT(1);
  return(T16_0);
}

D KacoshYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  T3_0 = CALL1(&KacoshYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:135
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasinhYtranscendentalsVcommon_dylanMM0I (D x_) {
  D negative_resultQ_;
  DDFLT T3;
  DDFLT T4;
  D T5;
  DDFLT T6;
  D T7;
  DDFLT T8;
  DDFLT T9;
  DDFLT T10;
  DDFLT T11;
  DDFLT T12;
  D T13;
  DDFLT T14;
  DDFLT T15;
  D T16;
  D T17_0;
  D T18;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T4 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T5 = primitive_double_float_less_thanQ(T4,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  if (T5 != &KPfalseVKi) {
    negative_resultQ_ = &KPfalseVKi;
  } else {
    negative_resultQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T7 = primitive_double_float_less_thanQ(T4,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
    T8 = primitive_double_float_negate(T4);
    T6 = T8;
  } else {
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T3 = primitive_double_float_expt(T6,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  if (negative_resultQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
    T9 = primitive_double_float_negate(T3);
    T10 = T9;
  } else {
    T10 = T3;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T11 = primitive_double_float_add(1.0000000e0,T10);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T13 = primitive_double_float_less_thanQ(T11,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T12 = primitive_double_float_sqrt(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T14 = primitive_double_float_add(T4,T12);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T18 = primitive_double_float_less_thanQ(T14,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T15 = primitive_double_float_log(T14);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T16 = primitive_raw_as_double_float(T15);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:132
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  MV_SET_COUNT(1);
  return(T17_0);
}

D KasinhYtranscendentalsVcommon_dylanMM1I (D x_) {
  D negative_resultQ_;
  DSFLT T3;
  DSFLT T4;
  D T5;
  DSFLT T6;
  D T7;
  DSFLT T8;
  DSFLT T9;
  DSFLT T10;
  DSFLT T11;
  DSFLT T12;
  D T13;
  DSFLT T14;
  DSFLT T15;
  D T16;
  D T17_0;
  D T18;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T4 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T5 = primitive_single_float_less_thanQ(T4,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  if (T5 != &KPfalseVKi) {
    negative_resultQ_ = &KPfalseVKi;
  } else {
    negative_resultQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T7 = primitive_single_float_less_thanQ(T4,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
    T8 = primitive_single_float_negate(T4);
    T6 = T8;
  } else {
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T3 = primitive_single_float_expt(T6,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  if (negative_resultQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
    T9 = primitive_single_float_negate(T3);
    T10 = T9;
  } else {
    T10 = T3;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T11 = primitive_single_float_add(1.0000000,T10);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T13 = primitive_single_float_less_thanQ(T11,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T12 = primitive_single_float_sqrt(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T14 = primitive_single_float_add(T4,T12);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T18 = primitive_single_float_less_thanQ(T14,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
    KerrorVKdMM1I(&K34, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T15 = primitive_single_float_log(T14);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T16 = primitive_raw_as_single_float(T15);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:131
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  MV_SET_COUNT(1);
  return(T17_0);
}

D KasinhYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  T3_0 = CALL1(&KasinhYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:130
  MV_SET_COUNT(1);
  return(T4_0);
}

D KtanhYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  DDFLT T6;
  DDFLT T7;
  DDFLT T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T3 = primitive_double_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T4 = primitive_double_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T5 = primitive_double_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T6 = primitive_double_float_subtract(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T7 = primitive_double_float_add(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T8 = primitive_double_float_divide(T6,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T9 = primitive_raw_as_double_float(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:127
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  MV_SET_COUNT(1);
  return(T10_0);
}

D KtanhYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  DSFLT T6;
  DSFLT T7;
  DSFLT T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T3 = primitive_single_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T4 = primitive_single_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T5 = primitive_single_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T6 = primitive_single_float_subtract(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T7 = primitive_single_float_add(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T8 = primitive_single_float_divide(T6,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T9 = primitive_raw_as_single_float(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:126
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  MV_SET_COUNT(1);
  return(T10_0);
}

D KtanhYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  T3_0 = CALL1(&KtanhYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:125
  MV_SET_COUNT(1);
  return(T4_0);
}

D KcoshYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  DDFLT T6;
  DDFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T3 = primitive_double_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T4 = primitive_double_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T5 = primitive_double_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T6 = primitive_double_float_add(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T7 = primitive_double_float_divide(T6,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T8 = primitive_raw_as_double_float(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:122
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  MV_SET_COUNT(1);
  return(T9_0);
}

D KcoshYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  DSFLT T6;
  DSFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T3 = primitive_single_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T4 = primitive_single_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T5 = primitive_single_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T6 = primitive_single_float_add(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T7 = primitive_single_float_divide(T6,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T8 = primitive_raw_as_single_float(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:121
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  MV_SET_COUNT(1);
  return(T9_0);
}

D KcoshYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  T3_0 = CALL1(&KcoshYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:120
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsinhYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  DDFLT T4;
  DDFLT T5;
  DDFLT T6;
  DDFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T3 = primitive_double_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T4 = primitive_double_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T5 = primitive_double_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T6 = primitive_double_float_subtract(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T7 = primitive_double_float_divide(T6,2.0000000e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T8 = primitive_raw_as_double_float(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:117
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  MV_SET_COUNT(1);
  return(T9_0);
}

D KsinhYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  DSFLT T4;
  DSFLT T5;
  DSFLT T6;
  DSFLT T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T3 = primitive_single_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T4 = primitive_single_float_negate(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T5 = primitive_single_float_exp(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T6 = primitive_single_float_subtract(T3,T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T7 = primitive_single_float_divide(T6,2.0000000);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T8 = primitive_raw_as_single_float(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:116
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  MV_SET_COUNT(1);
  return(T9_0);
}

D KsinhYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  T3_0 = CALL1(&KsinhYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:115
  MV_SET_COUNT(1);
  return(T4_0);
}

D KatanYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T3 = primitive_double_float_atan(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  MV_SET_COUNT(1);
  return(T5_0);
}

D KatanYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T3 = primitive_single_float_atan(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  MV_SET_COUNT(1);
  return(T5_0);
}

D KatanYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T3_0 = CALL1(&KatanYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:89
  MV_SET_COUNT(1);
  return(T4_0);
}

D KacosYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;
  D T5;
  DDFLT T6;
  D T7;
  DDFLT T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T6 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T7 = primitive_double_float_less_thanQ(T6,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
    T8 = primitive_double_float_negate(T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
    T9 = primitive_raw_as_double_float(T8);
    T5 = T9;
  } else {
    T5 = x_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T11_0 = KLVKdMM5I((D) 5, T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T10 = T11_0;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:85
    KerrorVKdMM1I(&K209, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T2 = primitive_double_float_acos(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T3 = primitive_raw_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  MV_SET_COUNT(1);
  return(T4_0);
}

D KacosYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;
  D T5;
  DSFLT T6;
  D T7;
  DSFLT T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T6 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T7 = primitive_single_float_less_thanQ(T6,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
    T8 = primitive_single_float_negate(T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
    T9 = primitive_raw_as_single_float(T8);
    T5 = T9;
  } else {
    T5 = x_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T11_0 = KLVKdMM5I((D) 5, T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  T10 = T11_0;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:85
    KerrorVKdMM1I(&K209, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:84
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T2 = primitive_single_float_acos(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T3 = primitive_raw_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  MV_SET_COUNT(1);
  return(T4_0);
}

D KacosYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T3_0 = CALL1(&KacosYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:83
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasinYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;
  D T5;
  DDFLT T6;
  D T7;
  DDFLT T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T6 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T7 = primitive_double_float_less_thanQ(T6,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
    T8 = primitive_double_float_negate(T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
    T9 = primitive_raw_as_double_float(T8);
    T5 = T9;
  } else {
    T5 = x_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T11_0 = KLVKdMM5I((D) 5, T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T10 = T11_0;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:79
    KerrorVKdMM1I(&K225, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T2 = primitive_double_float_asin(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T3 = primitive_raw_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasinYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;
  D T5;
  DSFLT T6;
  D T7;
  DSFLT T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T6 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T7 = primitive_single_float_less_thanQ(T6,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
    T8 = primitive_single_float_negate(T6);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
    T9 = primitive_raw_as_single_float(T8);
    T5 = T9;
  } else {
    T5 = x_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T11_0 = KLVKdMM5I((D) 5, T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  T10 = T11_0;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:79
    KerrorVKdMM1I(&K225, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T2 = primitive_single_float_asin(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T3 = primitive_raw_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasinYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T3_0 = CALL1(&KasinYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:77
  MV_SET_COUNT(1);
  return(T4_0);
}

D KtanYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T3 = primitive_double_float_tan(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  MV_SET_COUNT(1);
  return(T5_0);
}

D KtanYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T3 = primitive_single_float_tan(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  MV_SET_COUNT(1);
  return(T5_0);
}

D KtanYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T3_0 = CALL1(&KtanYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:75
  MV_SET_COUNT(1);
  return(T4_0);
}

D KcosYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T3 = primitive_double_float_cos(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  MV_SET_COUNT(1);
  return(T5_0);
}

D KcosYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T3 = primitive_single_float_cos(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  MV_SET_COUNT(1);
  return(T5_0);
}

D KcosYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T3_0 = CALL1(&KcosYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:74
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsinYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T3 = primitive_double_float_sin(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsinYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T3 = primitive_single_float_sin(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsinYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T3_0 = CALL1(&KsinYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:73
  MV_SET_COUNT(1);
  return(T4_0);
}

D KisqrtYtranscendentalsVcommon_dylanI (D x_) {
  D T2_0;
  D T3_0;
  D T4;
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
  D T16;
  D T17;
  D T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:69
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T6 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T7 = primitive_machine_word_less_thanQ(T6,-67108855);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  if (T7 != &KPfalseVKi) {
    T5 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T8 = primitive_machine_word_less_thanQ(67108857,T6);
    T5 = T8;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T11 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T9 = primitive_integer_as_double_float(T11);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T10 = primitive_raw_as_double_float(T9);
    T15 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T14 = primitive_machine_word_shift_right(T6,2);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T12 = primitive_integer_as_single_float(T14);
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
    T13 = primitive_raw_as_single_float(T12);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  CONGRUENT_CALL_PROLOG(&KsqrtYtranscendentalsVcommon_dylan, 1);
  T2_0 = CONGRUENT_CALL1(T15);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T3_0 = T2_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T2_0);
    primitive_type_check(T3_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T4 = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
  T16 = CONGRUENT_CALL2(T4, (D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T17 = CONGRUENT_CALL2(T16, T4);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T18 = CONGRUENT_CALL2(T16, (D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T19 = CALL2(&KfloorSVKd, T17, T18);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:70
  T20_0 = T19;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:69
  MV_SET_COUNT(1);
  return(T20_0);
}

D KsqrtYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  D T3;
  D T4_0;
  DDFLT T5;
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  T5 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  T6 = primitive_double_float_less_thanQ(T5,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:65
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T2 = primitive_double_float_sqrt(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T3 = primitive_raw_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsqrtYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  D T3;
  D T4_0;
  DSFLT T5;
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  T5 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  T6 = primitive_single_float_less_thanQ(T5,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:65
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:64
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T2 = primitive_single_float_sqrt(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T3 = primitive_raw_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsqrtYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T3_0 = CALL1(&KsqrtYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:63
  MV_SET_COUNT(1);
  return(T4_0);
}

D KlognYtranscendentalsVcommon_dylanI (D x_, D base_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:59
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:60
  CONGRUENT_CALL_PROLOG(&KlogYtranscendentalsVcommon_dylan, 1);
  T2 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:60
  CONGRUENT_CALL_PROLOG(&KlogYtranscendentalsVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(base_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:60
  CONGRUENT_CALL_PROLOG(&KSVKd, 2);
  T4_0 = CONGRUENT_CALL2(T2, T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:59
  T5_0 = T4_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T4_0);
    primitive_type_check(T5_0, &KLnumberGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:59
  MV_SET_COUNT(1);
  return(T5_0);
}

D KexpYtranscendentalsVcommon_dylanMM0I (D x_) {
  DDFLT T2;
  DDFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T2 = primitive_double_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T3 = primitive_double_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T4 = primitive_raw_as_double_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  MV_SET_COUNT(1);
  return(T5_0);
}

D KexpYtranscendentalsVcommon_dylanMM1I (D x_) {
  DSFLT T2;
  DSFLT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T2 = primitive_single_float_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T3 = primitive_single_float_exp(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T4 = primitive_raw_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  MV_SET_COUNT(1);
  return(T5_0);
}

D KexpYtranscendentalsVcommon_dylanMM2I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLfloatGVKd, x_);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T3_0 = CALL1(&KexpYtranscendentalsVcommon_dylan, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLfloatGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:51
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_transcendentals_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_transcendentals_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T0 = KPadd_domainVKnMM0I(&KCVKd, &KCVKdRD_common_dylanRD_5);
  goto I1;
}
I1:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T0 = KPadd_a_methodVKnI(&KCVKd, &KCVKdMcommon_dylanM2, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I4;
}
I4:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T0 = KPadd_a_methodVKnI(&KCVKd, &KCVKdMcommon_dylanM1, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I7;
}
I7:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:174
  T0 = KPadd_a_methodVKnI(&KCVKd, &KCVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I10;
}
I10:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:176
  T0 = KPadd_a_methodVKnI(&KCVKd, &KCVKdMcommon_dylanM3, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I13;
}
I13:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/transcendentals.dylan:191
  T0 = KPadd_a_methodVKnI(&KCVKd, &KCVKdMcommon_dylanM4, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I16;
}
I16:

  return;
}


/* eof */
