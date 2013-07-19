#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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
} _KLserious_conditionGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(53);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(11);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

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
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
} _KLsequenceGVKd;

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

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

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
} _KLkeyword_copy_down_methodGVKi;

typedef struct {
  D wrapper;
} _KLvectorGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D Kmake_last_handlerVKiI (D, D, D, D, D);
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_methodGVKe Kdefault_last_handler_testVKi;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kadd_last_handlerVKi;
D KPadd_methodVKnI (D, D, D);
extern _KLincremental_generic_functionGVKe Kdefault_handlerVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylan;
D Kdebug_messageYsimple_debuggingVdylanMM0I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LwarningG_typesVKi;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLkeyword_methodGVKe Kwrite_consoleYcommon_dylan_internalsVcommon_dylan;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
D Kobject_classVKdI (D);
D Kformat_to_stringYcommon_extensionsVcommon_dylanI (D format_string_, D format_arguments_);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtableG_typesVKi;
extern _KLclassGVKd KLtableGVKd;
extern _KLmm_wrapperGVKi_0 KLtableGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kcommon_extensions_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsymbolGVKd KJskip_;
extern _KLsymbolGVKd KJfailure_;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLincremental_generic_functionGVKe Kfind_keyVKd;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJkey_;
extern _KLsimple_methodGVKe KidentityVKd;
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe KreduceVKd;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kreplace_subsequenceXVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsymbolGVKd KJcount_;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLincremental_generic_functionGVKe KchooseVKd;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstretchy_vectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern D Tlast_handlerTVKi;
extern D Tcurrent_handlersTVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0;
D Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe Kdefault_handlerVKdMcommon_dylanM0;
D Kdefault_handlerVKdMcommon_dylanM0I (D);
D KpositionYcommon_extensionsVcommon_dylanMM3I (D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 KloopF12;
static D KloopF12I (D, D, D, D, D, D);
static _KLunionGVKe K10;
static _KLsingletonGVKd K11;
static _KLsignatureGVKe K13;
static _KLsimple_object_vectorGVKd_6 K14;
extern _KLsimple_methodGVKe Kexit_applicationYcommon_extensionsVcommon_dylan;
D Kexit_applicationYcommon_extensionsVcommon_dylanI (D);
static _KLsignatureGVKe K17;
static _KLbyte_stringGVKd_11 K18;
static _KLsignatureGVKe K19;
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF27;
static D KUhandler_functionUF27I (D, D);
static _KLbyte_stringGVKd_1 K22;
static _KLsymbolGVKd KJstream_;
static _KLsymbolGVKd KJstandard_error_;
static _KLbyte_stringGVKd_14 K25;
static _KLbyte_stringGVKd_6 K26;
static _KLbyte_stringGVKd_53 K28;
static D Kinteger_as_rawF30I (D x_);
static _KLsignatureGVKe K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLsignatureGVKe K33;
static _KLsimple_object_vectorGVKd_2 K34;
extern _KLsimple_methodGVKe Kfill_tableXYcommon_extensionsVcommon_dylan;
D Kfill_tableXYcommon_extensionsVcommon_dylanI (D, D);
static _KLsignatureAvaluesGVKi K37;
static _KLsimple_object_vectorGVKd_2 K38;
extern _KLincremental_generic_functionGVKe Kfind_elementYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe Kfind_elementYcommon_extensionsVcommon_dylanMM0;
D Kfind_elementYcommon_extensionsVcommon_dylanMM0I (D, D, D, D, D);
static _KLpairGVKd K42;
static _KLkeyword_signatureGVKe K43;
static _KLbyte_stringGVKd_12 K44;
static _KLsimple_object_vectorGVKd_2 K45;
static _KLsimple_object_vectorGVKd_2 K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLsimple_object_vectorGVKd_4 K48;
extern _KLincremental_generic_functionGVKe KjoinYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe KjoinYcommon_extensionsVcommon_dylanMM0;
D KjoinYcommon_extensionsVcommon_dylanMM0I (D, D, D, D, D);
static _KLpairGVKd K52;
static _KLkeyword_signatureAvaluesGVKi K53;
static _KLbyte_stringGVKd_4 K54;
static _KLsimple_object_vectorGVKd_2 K55;
static _KLsymbolGVKd KJconjunction_;
static _KLbyte_stringGVKd_11 K57;
static _KLsimple_closure_methodGVKi_0 Kcopy_to_resultF64;
static D Kcopy_to_resultF64I (D);
static _KLunionGVKe K60;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_joinF63;
static D Kanonymous_of_joinF63I (D, D);
static _KLsignatureGVKe K65;
static _KLkeyword_signatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_4 K67;
static _KLsimple_object_vectorGVKd_2 K68;
extern _KLincremental_generic_functionGVKe KsplitYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM0;
D KsplitYcommon_extensionsVcommon_dylanMM0I (D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM1;
D KsplitYcommon_extensionsVcommon_dylanMM1I (D, D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM2;
D KsplitYcommon_extensionsVcommon_dylanMM2I (D, D, D, D, D, D, D, D);
static _KLpairGVKd K76;
static _KLpairGVKd K77;
static _KLpairGVKd K78;
static _KLkeyword_signatureAvaluesGVKi K79;
static _KLbyte_stringGVKd_5 K80;
static _KLsimple_object_vectorGVKd_2 K81;
static _KLsimple_object_vectorGVKd_4 K82;
static _KLsimple_object_vectorGVKd_4 K83;
static _KLsymbolGVKd KJremove_if_emptyQ_;
static _KLbyte_stringGVKd_16 K85;
static _KLsimple_closure_methodGVKi_0 Kfind_posF88;
static D Kfind_posF88I (D, D, D);
static _KLsignatureGVKe K89;
static _KLsimple_object_vectorGVKd_3 K90;
static _KLkeyword_signatureAvaluesGVKi K91;
static _KLsimple_object_vectorGVKd_10 K92;
static _KLsimple_object_vectorGVKd_5 K93;
static _KLsimple_object_vectorGVKd_5 K94;
static _KLsimple_closure_methodGVKi_0 Klooking_atQF100;
static D Klooking_atQF100I (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kfind_subseqF99;
static D Kfind_subseqF99I (D, D, D);
static _KLsignatureGVKe K101;
static _KLsimple_object_vectorGVKd_4 K102;
static _KLkeyword_signatureAvaluesGVKi K103;
static D KloopF106I (D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 KloopF106;
static _KLsignatureGVKe K107;
static _KLsimple_object_vectorGVKd_8 K108;
static _KLkeyword_signatureAvaluesGVKi K109;
static _KLsimple_object_vectorGVKd_8 K110;
static _KLsimple_object_vectorGVKd_2 K111;
extern _KLincremental_generic_functionGVKe KpositionYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe KpositionYcommon_extensionsVcommon_dylanMM0;
D KpositionYcommon_extensionsVcommon_dylanMM0I (D, D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KpositionYcommon_extensionsVcommon_dylanMM1;
D KpositionYcommon_extensionsVcommon_dylanMM1I (D sequence_, D target_, D Urest_, D test_, D Ustart_, D Uend_, D skip_, D count_);
extern _KLkeyword_copy_down_methodGVKi KpositionYcommon_extensionsVcommon_dylanMM2;
D KpositionYcommon_extensionsVcommon_dylanMM2I (D, D, D, D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi KpositionYcommon_extensionsVcommon_dylanMM3;
extern _KLmethod_domainGVKe KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_0;
extern _KLmethod_domainGVKe KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_1;
static _KLpairGVKd K122;
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLpairGVKd K125;
static _KLkeyword_signatureAvaluesGVKi K126;
static _KLbyte_stringGVKd_8 K127;
static _KLsimple_object_vectorGVKd_5 K128;
static _KLsimple_object_vectorGVKd_5 K129;
static _KLsimple_object_vectorGVKd_1 K130;
static _KLkeyword_signatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_10 K132;
static _KLsimple_object_vectorGVKd_2 K133;
static _KLsimple_object_vectorGVKd_5 K134;
static _KLsimple_closure_methodGVKi_0 KloopF137;
static D KloopF137I (D, D, D, D, D, D);
static _KLkeyword_signatureAvaluesGVKi K138;
static _KLsimple_object_vectorGVKd_2 K139;
static _KLsimple_closure_methodGVKi_0 KloopF142;
static D KloopF142I (D, D, D, D, D, D);
static _KLkeyword_signatureAvaluesGVKi K143;
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsimple_closure_methodGVKi_0 KloopF147;
static D KloopF147I (D, D, D, D, D, D, D, D, D, D, D);
static _KLsignatureGVKe K148;
static _KLsimple_object_vectorGVKd_11 K149;
static _KLsimple_object_vectorGVKd_10 K150;
extern _KLincremental_generic_functionGVKe KdifferenceYcommon_extensionsVcommon_dylan;
extern _KLkeyword_methodGVKe KdifferenceYcommon_extensionsVcommon_dylanMM0;
D KdifferenceYcommon_extensionsVcommon_dylanMM0I (D, D, D, D);
static _KLpairGVKd K154;
static _KLkeyword_signatureAvaluesGVKi K155;
static _KLbyte_stringGVKd_10 K156;
static _KLsimple_object_vectorGVKd_1 K157;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_differenceF160;
static D Kanonymous_of_differenceF160I (D);
static _KLsimple_object_vectorGVKd_2 K161;
extern _KLincremental_generic_functionGVKe KconcatenateXYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM0;
D KconcatenateXYcommon_extensionsVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM1;
D KconcatenateXYcommon_extensionsVcommon_dylanMM1I (D, D);
extern _KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM2;
D KconcatenateXYcommon_extensionsVcommon_dylanMM2I (D, D);
static _KLpairGVKd K169;
static _KLpairGVKd K170;
static _KLpairGVKd K171;
static _KLsignatureAvaluesGVKi K172;
static _KLbyte_stringGVKd_12 K173;
static D Kfind_resultF176I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kfind_resultF176;
static D KconnectF181I (D, D, D, D);
static D Kfind_tailF182I (D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 KconnectF181;
static _KLsimple_closure_methodGVKi_0 Kfind_tailF182;
static _KLsignatureGVKe K183;
static _KLsimple_object_vectorGVKd_5 K184;
static _KLsignatureGVKe K185;
static _KLsimple_object_vectorGVKd_4 K186;
static _KLsignatureGVKe K187;
static _KLsimple_object_vectorGVKd_3 K188;
static _KLsignatureAvaluesGVKi K189;
static _KLsignatureAvaluesGVKi K190;
extern _KLsimple_methodGVKe KtrueQYcommon_extensionsVcommon_dylan;
D KtrueQYcommon_extensionsVcommon_dylanI (D object_);
static _KLsignatureAvaluesGVKi K193;
extern _KLsimple_methodGVKe KfalseQYcommon_extensionsVcommon_dylan;
D KfalseQYcommon_extensionsVcommon_dylanI (D object_);
extern _KLsimple_methodGVKe KsuppliedQYcommon_extensionsVcommon_dylan;
D KsuppliedQYcommon_extensionsVcommon_dylanI (D x_);
extern _KLsimple_methodGVKe KunsuppliedQYcommon_extensionsVcommon_dylan;
D KunsuppliedQYcommon_extensionsVcommon_dylanI (D x_);
extern _KLsimple_methodGVKe KunsuppliedYcommon_extensionsVcommon_dylan;
D KunsuppliedYcommon_extensionsVcommon_dylanI ();
static _KLsignatureGVKe K202;
static _KLpairGVKd K203;
static _KLbyte_stringGVKd_10 K204;
extern _KLsimple_methodGVKe KfoundQYcommon_extensionsVcommon_dylan;
D KfoundQYcommon_extensionsVcommon_dylanI (D x_);
extern _KLsimple_methodGVKe KunfoundQYcommon_extensionsVcommon_dylan;
D KunfoundQYcommon_extensionsVcommon_dylanI (D x_);
extern _KLsimple_methodGVKe KunfoundYcommon_extensionsVcommon_dylan;
D KunfoundYcommon_extensionsVcommon_dylanI ();
static _KLpairGVKd K211;
static _KLbyte_stringGVKd_9 K212;
extern _KLkeyword_methodGVKe Kfind_valueYcommon_extensionsVcommon_dylanMM0;
D Kfind_valueYcommon_extensionsVcommon_dylanMM0I (D, D, D, D, D);

/* Indirection variables */

static D IKJstream_ = &KJstream_;
static D IKJstandard_error_ = &KJstandard_error_;
static D IKJconjunction_ = &KJconjunction_;
static D IKJremove_if_emptyQ_ = &KJremove_if_emptyQ_;

/* Variables */

D find_valueYcommon_extensionsVcommon_dylan = &Kfind_valueYcommon_extensionsVcommon_dylanMM0;
D DunfoundYcommon_extensionsVcommon_dylan = &K211;
D unfoundYcommon_extensionsVcommon_dylan = &KunfoundYcommon_extensionsVcommon_dylan;
D unfoundQYcommon_extensionsVcommon_dylan = &KunfoundQYcommon_extensionsVcommon_dylan;
D foundQYcommon_extensionsVcommon_dylan = &KfoundQYcommon_extensionsVcommon_dylan;
D DunsuppliedYcommon_extensionsVcommon_dylan = &K203;
D unsuppliedYcommon_extensionsVcommon_dylan = &KunsuppliedYcommon_extensionsVcommon_dylan;
D unsuppliedQYcommon_extensionsVcommon_dylan = &KunsuppliedQYcommon_extensionsVcommon_dylan;
D suppliedQYcommon_extensionsVcommon_dylan = &KsuppliedQYcommon_extensionsVcommon_dylan;
D falseQYcommon_extensionsVcommon_dylan = &KfalseQYcommon_extensionsVcommon_dylan;
D trueQYcommon_extensionsVcommon_dylan = &KtrueQYcommon_extensionsVcommon_dylan;
D concatenateXYcommon_extensionsVcommon_dylan = &KconcatenateXYcommon_extensionsVcommon_dylan;
D differenceYcommon_extensionsVcommon_dylan = &KdifferenceYcommon_extensionsVcommon_dylan;
D positionYcommon_extensionsVcommon_dylan = &KpositionYcommon_extensionsVcommon_dylan;
D splitYcommon_extensionsVcommon_dylan = &KsplitYcommon_extensionsVcommon_dylan;
D joinYcommon_extensionsVcommon_dylan = &KjoinYcommon_extensionsVcommon_dylan;
D find_elementYcommon_extensionsVcommon_dylan = &Kfind_elementYcommon_extensionsVcommon_dylan;
D fill_tableXYcommon_extensionsVcommon_dylan = &Kfill_tableXYcommon_extensionsVcommon_dylan;
D exit_applicationYcommon_extensionsVcommon_dylan = &Kexit_applicationYcommon_extensionsVcommon_dylan;

/* Objects */

_KLsimple_methodGVKe Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K33,
  &Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kdefault_handlerVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K19,
  &Kdefault_handlerVKdMcommon_dylanM0I
};

static _KLsimple_closure_methodGVKi_0 KloopF12 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_6,
  &K13,
  &KloopF12I,
  (D) 1
};

static _KLunionGVKe K10 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K11,
  &KLintegerGVKd
};

static _KLsingletonGVKd K11 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureGVKe K13 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040217,
  &K14
};

static _KLsimple_object_vectorGVKd_6 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kexit_applicationYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K17,
  &Kexit_applicationYcommon_extensionsVcommon_dylanI
};

static _KLsignatureGVKe K17 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_11 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "Warning: %s"
};

static _KLsignatureGVKe K19 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LwarningG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF27 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K31,
  &KUhandler_functionUF27I,
  (D) 1
};

static _KLbyte_stringGVKd_1 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "\n"
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K26
};

static _KLsymbolGVKd KJstandard_error_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K25
};

static _KLbyte_stringGVKd_14 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "standard-error"
};

static _KLbyte_stringGVKd_6 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLbyte_stringGVKd_53 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "%=\nsignalled while trying to print an instance of %=\n"
};

static _KLsignatureGVKe K31 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K32
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K33 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K34
};

static _KLsimple_object_vectorGVKd_2 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLserious_conditionGVKd,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe Kfill_tableXYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K37,
  &Kfill_tableXYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K37 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K38,
  &KDsignature_LtableG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtableGVKd,
  &KLsequenceGVKd
};

_KLincremental_generic_functionGVKe Kfind_elementYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K43,
  (D) 1,
  &K44,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kfind_elementYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K43,
  &key_mep_5,
  &Kfind_elementYcommon_extensionsVcommon_dylanMM0I,
  &K48
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_elementYcommon_extensionsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K43 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K45,
  &K46,
  &K47
};

static _KLbyte_stringGVKd_12 K44 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "find-element"
};

static _KLsimple_object_vectorGVKd_2 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollectionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_2 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJskip_,
  &KJfailure_
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_4 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJskip_,
  (D) 1,
  &KJfailure_,
  &KPfalseVKi
};

_KLincremental_generic_functionGVKe KjoinYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K53,
  &KPfalseVKi,
  &K54,
  &K52,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KjoinYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K66,
  &key_mep_5,
  &KjoinYcommon_extensionsVcommon_dylanMM0I,
  &K67
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &KjoinYcommon_extensionsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K53 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K55,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_4 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "join"
};

static _KLsimple_object_vectorGVKd_2 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJkey_,
  &KJconjunction_
};

static _KLsymbolGVKd KJconjunction_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K57
};

static _KLbyte_stringGVKd_11 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "conjunction"
};

static _KLsimple_closure_methodGVKi_0 Kcopy_to_resultF64 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K65,
  &Kcopy_to_resultF64I,
  (D) 1
};

static _KLunionGVKe K60 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K11,
  &KLsequenceGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_joinF63 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_joinF63I,
  (D) 1
};

static _KLsignatureGVKe K65 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LsequenceG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K66 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K55,
  &K68,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJkey_,
  &KidentityVKd,
  &KJconjunction_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &K60
};

_KLincremental_generic_functionGVKe KsplitYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K79,
  (D) 1,
  &K80,
  &K76,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K109,
  &key_mep_7,
  &KsplitYcommon_extensionsVcommon_dylanMM0I,
  &K110
};

_KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K103,
  &key_mep_8,
  &KsplitYcommon_extensionsVcommon_dylanMM1I,
  &K92
};

_KLkeyword_methodGVKe KsplitYcommon_extensionsVcommon_dylanMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K91,
  &key_mep_8,
  &KsplitYcommon_extensionsVcommon_dylanMM2I,
  &K92
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &KsplitYcommon_extensionsVcommon_dylanMM0,
  &K77
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &KsplitYcommon_extensionsVcommon_dylanMM1,
  &K78
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &KsplitYcommon_extensionsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K79 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K81,
  &K82,
  &K83,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_5 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "split"
};

static _KLsimple_object_vectorGVKd_2 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_4 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KJend_,
  &KJcount_,
  &KJremove_if_emptyQ_
};

static _KLsimple_object_vectorGVKd_4 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLbooleanGVKd
};

static _KLsymbolGVKd KJremove_if_emptyQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K85
};

static _KLbyte_stringGVKd_16 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "remove-if-empty?"
};

static _KLsimple_closure_methodGVKi_0 Kfind_posF88 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K89,
  &Kfind_posF88I,
  (D) 1
};

static _KLsignatureGVKe K89 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K90
};

static _KLsimple_object_vectorGVKd_3 K90 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &K10
};

static _KLkeyword_signatureAvaluesGVKi K91 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K81,
  &K93,
  &K94,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_10 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi,
  &KJcount_,
  &KPunboundVKi,
  &KJtest_,
  &KEEVKd,
  &KJremove_if_emptyQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_5 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJstart_,
  &KJend_,
  &KJcount_,
  &KJtest_,
  &KJremove_if_emptyQ_
};

static _KLsimple_object_vectorGVKd_5 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd,
  &KLbooleanGVKd
};

static _KLsimple_closure_methodGVKi_0 Klooking_atQF100 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K101,
  &Klooking_atQF100I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kfind_subseqF99 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K89,
  &Kfind_subseqF99I,
  (D) 1
};

static _KLsignatureGVKe K101 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K102
};

static _KLsimple_object_vectorGVKd_4 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K103 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K93,
  &K94,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 KloopF106 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_8,
  &K107,
  &KloopF106I,
  (D) 1
};

static _KLsignatureGVKe K107 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040225,
  &K108
};

static _KLsimple_object_vectorGVKd_8 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K109 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K111,
  &K82,
  &K83,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi,
  &KJcount_,
  &KPunboundVKi,
  &KJremove_if_emptyQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLfunctionGVKd
};

_KLincremental_generic_functionGVKe KpositionYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K126,
  &KPfalseVKi,
  &K127,
  &K122,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KpositionYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K126,
  &key_mep_8,
  &KpositionYcommon_extensionsVcommon_dylanMM0I,
  &K150
};

_KLkeyword_methodGVKe KpositionYcommon_extensionsVcommon_dylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K143,
  &key_mep_8,
  &KpositionYcommon_extensionsVcommon_dylanMM1I,
  &K132
};

_KLkeyword_copy_down_methodGVKi KpositionYcommon_extensionsVcommon_dylanMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_8,
  &K138,
  &key_mep_8,
  &KpositionYcommon_extensionsVcommon_dylanMM2I,
  &K132
};

_KLkeyword_copy_down_methodGVKi KpositionYcommon_extensionsVcommon_dylanMM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_8,
  &K131,
  &key_mep_8,
  &KpositionYcommon_extensionsVcommon_dylanMM3I,
  &K132
};

_KLmethod_domainGVKe KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KpositionYcommon_extensionsVcommon_dylanMM3
};

_KLmethod_domainGVKe KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KpositionYcommon_extensionsVcommon_dylanRD_common_dylanRD_0,
  &KpositionYcommon_extensionsVcommon_dylanMM2
};

static _KLpairGVKd K122 = {
  &KLpairGVKdW /* wrapper */,
  &KpositionYcommon_extensionsVcommon_dylanMM0,
  &K123
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &KpositionYcommon_extensionsVcommon_dylanMM1,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &KpositionYcommon_extensionsVcommon_dylanMM2,
  &K125
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &KpositionYcommon_extensionsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K126 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K81,
  &K128,
  &K129,
  &K130
};

static _KLbyte_stringGVKd_8 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "position"
};

static _KLsimple_object_vectorGVKd_5 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJtest_,
  &KJstart_,
  &KJend_,
  &KJskip_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_5 K129 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLfunctionGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K10
};

static _KLkeyword_signatureAvaluesGVKi K131 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K133,
  &K128,
  &K134,
  &K130
};

static _KLsimple_object_vectorGVKd_10 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJtest_,
  &KEEVKd,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi,
  &KJskip_,
  (D) 1,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyte_stringGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_5 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLfunctionGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 KloopF137 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_6,
  &K13,
  &KloopF137I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K138 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K139,
  &K128,
  &K134,
  &K130
};

static _KLsimple_object_vectorGVKd_2 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 KloopF142 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_6,
  &K13,
  &KloopF142I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K143 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K144,
  &K128,
  &K134,
  &K130
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLvectorGVKd,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 KloopF147 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep,
  &K148,
  &KloopF147I,
  (D) 1
};

static _KLsignatureGVKe K148 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040237,
  &K149
};

static _KLsimple_object_vectorGVKd_11 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_10 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJtest_,
  &KEEVKd,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi,
  &KJskip_,
  (D) 1,
  &KJcount_,
  &KPfalseVKi
};

_KLincremental_generic_functionGVKe KdifferenceYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K155,
  &KPfalseVKi,
  &K156,
  &K154,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KdifferenceYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K155,
  &key_mep_4,
  &KdifferenceYcommon_extensionsVcommon_dylanMM0I,
  &K161
};

static _KLpairGVKd K154 = {
  &KLpairGVKdW /* wrapper */,
  &KdifferenceYcommon_extensionsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K155 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_LsequenceG_typesVKi,
  &K157,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_10 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "difference"
};

static _KLsimple_object_vectorGVKd_1 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_differenceF160 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_differenceF160I,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

_KLincremental_generic_functionGVKe KconcatenateXYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K172,
  &KPfalseVKi,
  &K173,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K172,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K190,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KconcatenateXYcommon_extensionsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K189,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM2I
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM0,
  &K170
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM1,
  &K171
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &KconcatenateXYcommon_extensionsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K172 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_12 K173 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "concatenate!"
};

static _KLsimple_closure_methodGVKi_0 Kfind_resultF176 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K187,
  &Kfind_resultF176I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KconnectF181 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K185,
  &KconnectF181I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kfind_tailF182 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K183,
  &Kfind_tailF182I,
  (D) 1
};

static _KLsignatureGVKe K183 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040213,
  &K184
};

static _KLsimple_object_vectorGVKd_5 K184 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLlistGVKd
};

static _KLsignatureGVKe K185 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K186
};

static _KLsimple_object_vectorGVKd_4 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K187 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K188
};

static _KLsimple_object_vectorGVKd_3 K188 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K189 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsignatureAvaluesGVKi K190 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_Lstretchy_vectorG_typesVKi,
  &KDsignature_Lstretchy_vectorG_typesVKi
};

_KLsimple_methodGVKe KtrueQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K193,
  &KtrueQYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K193 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe KfalseQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K193,
  &KfalseQYcommon_extensionsVcommon_dylanI
};

_KLsimple_methodGVKe KsuppliedQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KsuppliedQYcommon_extensionsVcommon_dylanI
};

_KLsimple_methodGVKe KunsuppliedQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KunsuppliedQYcommon_extensionsVcommon_dylanI
};

_KLsimple_methodGVKe KunsuppliedYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K202,
  &KunsuppliedYcommon_extensionsVcommon_dylanI
};

static _KLsignatureGVKe K202 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLpairGVKd K203 = {
  &KLpairGVKdW /* wrapper */,
  &K204,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K204 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "UNSUPPLIED"
};

_KLsimple_methodGVKe KfoundQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KfoundQYcommon_extensionsVcommon_dylanI
};

_KLsimple_methodGVKe KunfoundQYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KunfoundQYcommon_extensionsVcommon_dylanI
};

_KLsimple_methodGVKe KunfoundYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K202,
  &KunfoundYcommon_extensionsVcommon_dylanI
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &K212,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K212 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "NOT FOUND"
};

_KLkeyword_methodGVKe Kfind_valueYcommon_extensionsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K43,
  &key_mep_5,
  &Kfind_valueYcommon_extensionsVcommon_dylanMM0I,
  &K48
};

/* Code */

D Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0I (D condition_, D next_handler_) {
  volatile D Uunwind_exceptionUPexit_44_;
  volatile D Uoriginal_handlersU_;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D T11_0;
  volatile _KLsimple_object_vectorGVKd_8 T12 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T13;
  volatile D T14;
  volatile _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T16;
  volatile D T17_0;
  volatile D T18;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:431
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_44_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_44_))) {
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T5 = MAKE_CLOSURE_INITD(&KUhandler_functionUF27, 3, Uoriginal_handlersU_, Uunwind_exceptionUPexit_44_, condition_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T12.vector_element_[0] = &KJtype_;
    T12.vector_element_[1] = &KLerrorGVKd;
    T12.vector_element_[2] = &KJfunction_;
    T12.vector_element_[3] = T5;
    T12.vector_element_[4] = &KJtest_;
    T12.vector_element_[5] = &KPfalseVKi;
    T12.vector_element_[6] = &KJinit_arguments_;
    T12.vector_element_[7] = &KPempty_vectorVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T11_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T12, &KLerrorGVKd, T5, &KPfalseVKi, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T13 = T11_0;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T6 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    SLOT_VALUE_SETTER(T13, T14, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    SLOT_VALUE_SETTER(T6, T14, 1);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T14);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    ENTER_UNWIND_FRAME(T7);
    if (!nlx_setjmp(FRAME_DEST(T7))) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      CONGRUENT_CALL_PROLOG(&Kcondition_to_stringYcommon_extensionsVcommon_dylan, 1);
      T8 = CONGRUENT_CALL1(condition_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      T15.vector_element_[0] = &K22;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
      T16 = CONGRUENT_CALL1(T8);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      T17_0 = APPLY3(&Kconcatenate_asVKd, T16, T8, &T15);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      T18 = T17_0;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:433
      T9 = CALL3(&Kwrite_consoleYcommon_dylan_internalsVcommon_dylan, T18, IKJstream_, IKJstandard_error_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
      FALL_THROUGH_UNWIND(T9);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
    /* invalidate Uunwind_exceptionUPexit_44_ */
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:441
  T10 = CALL0(next_handler_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:431
  return(T10);
}

D Kdefault_handlerVKdMcommon_dylanM0I (D condition_) {
  D Utmp_;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:446
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:447
  CONGRUENT_CALL_PROLOG(&Kcondition_to_stringYcommon_extensionsVcommon_dylan, 1);
  Utmp_ = CONGRUENT_CALL1(condition_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:447
  T4.vector_element_[0] = Utmp_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:447
  T3 = Kdebug_messageYsimple_debuggingVdylanMM0I(&K18, &T4);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:446
  return(T3);
}

D KpositionYcommon_extensionsVcommon_dylanMM3I (D sequence_, D target_, D Urest_, D test_, D Ustart_, D Uend_, D skip_, D count_) {
  D testF9;
  D UstartF10;
  D T11;
  D UendF12;
  D skipF13;
  D T14;
  D T15;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:180
  primitive_type_check(test_, &KLfunctionGVKd);
  testF9 = test_;
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF10 = Ustart_;
  T18 = primitive_idQ(Uend_,&KPunboundVKi);
  if (T18 != &KPfalseVKi) {
    T20 = SLOT_VALUE_INITD(sequence_, 0);
    T11 = T20;
    UendF12 = T11;
  } else {
    primitive_type_check(Uend_, &KLintegerGVKd);
    T19 = Uend_;
    UendF12 = T19;
  }
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF13 = skip_;
  if (count_ != &KPfalseVKi) {
    T21 = count_;
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T14 = CONGRUENT_CALL2(T21, (D) 5);
    T15 = T14;
  } else {
    T15 = skipF13;
  }
  T16_0 = CALL6(&KloopF12, UendF12, testF9, target_, sequence_, UstartF10, T15);
  T17_0 = T16_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T16_0);
    primitive_type_check(T17_0, &K10);
    MV_CHECK_TYPE_EPILOGUE();
  }
  MV_SET_COUNT(1);
  return(T17_0);
}

static D KloopF12I (D Uend_, D test_, D target_, D sequence_, D index_, D skip_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD indexF19;
  DWORD skipF20;
  DWORD T21;
  D T22;
  DWORD indexF23T, indexF23;
  DWORD skipF24T, skipF24;
  D T29;
  DWORD T30;
  DWORD T31;

  T30 = primitive_cast_integer_as_raw(index_);
  T31 = primitive_cast_integer_as_raw(skip_);
  indexF23T = T30;
  skipF24T = T31;
L0: ;
    indexF23 = indexF23T;
    skipF24 = skipF24T;
    indexF19 = indexF23;
    T29 = primitive_cast_raw_as_integer(indexF19);
    skipF20 = skipF24;
    T13 = primitive_cast_integer_as_raw(Uend_);
    T14 = primitive_machine_word_less_thanQ(indexF19,T13);
    if (T14 != &KPfalseVKi) {
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(sequence_, T29, &KPempty_vectorVKi);
      T8 = CALL2(test_, target_, T7);
      if (T8 != &KPfalseVKi) {
        T15 = primitive_machine_word_equalQ(skipF20,1);
        if (T15 != &KPfalseVKi) {
          T9 = T29;
          MV_SET_ELT(0, T29);
          MV_SET_COUNT(1);
          T10 = T9;
        } else {
          T16 = primitive_machine_word_add_signal_overflow(indexF19,4);
          T17 = primitive_machine_word_subtract_signal_overflow(skipF20,4);
          indexF23T = T16;
          skipF24T = T17;
          goto L0;
          T10 = T18;
        }
        T11 = T10;
      } else {
        T21 = primitive_machine_word_add_signal_overflow(indexF19,4);
        indexF23T = T21;
        skipF24T = skipF20;
        goto L0;
        T11 = T22;
      }
      T12 = T11;
    } else {
      T6 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T12 = T6;
    }
  return(T12);
}

D Kexit_applicationYcommon_extensionsVcommon_dylanI (D code_) {
  D T1;
  DWORD T2;
  DWORD T3;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:451
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:452
  T3 = primitive_cast_integer_as_raw(code_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:452
  T2 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:452
  primitive_exit_application(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:452
  T1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:451
  MV_SET_COUNT(0);
  return(T1);
}

static D KUhandler_functionUF27I (D print_error_, D Unext_handlerU_) {
  D T3;
  D stringF4;
  D all_values_;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7;
  D T8;
  DBSTR T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:438
  T3 = Kobject_classVKdI(CREF(2));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:437
  T6.vector_element_[0] = print_error_;
  T6.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:437
  stringF4 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K28, &T6);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(stringF4);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  primitive_type_check(T7, &KLintegerGVKd);
  T12 = T7;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T8 = Kinteger_as_rawF30I((D) 9);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T9 = primitive_string_as_raw(stringF4);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T13 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  write(T8, T9, T13);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T10 = Kinteger_as_rawF30I((D) 9);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  fsync(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:439
  T11 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  all_values_ = MV_GET_REST_AT(T11, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  T15 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  T16 = NLX(CREF(1), T15);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:432
  return(T16);
}

static D Kinteger_as_rawF30I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  T3 = primitive_cast_integer_as_raw(x_);
  T2 = primitive_machine_word_shift_right(T3,2);
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  return(T1);
}

D Kfill_tableXYcommon_extensionsVcommon_dylanI (D table_, D keys_and_elements_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8T, T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D key_;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:415
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:418
  key_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(keys_and_elements_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T3 = T2;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T7 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  T8T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
    T8 = T8T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
    T9 = CALL3(T6, keys_and_elements_, T8, T4);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
    if (T9 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
      T10 = CALL2(T7, keys_and_elements_, T8);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:420
      T14 = key_;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:420
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:421
        T15 = key_;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:421
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T10, table_, T15);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:422
        key_ = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:424
        key_ = T10;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:420
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
      T11 = CALL2(T5, keys_and_elements_, T8);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
      T8T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:419
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:427
  T12_0 = table_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:415
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kfind_elementYcommon_extensionsVcommon_dylanMM0I (D collection_, D predicate_, D Urest_, D skip_, D failure_) {
  D skipF6;
  D key_;
  D T8_0;
  D T9_0;
  D T10_0;
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:392
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:392
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF6 = skip_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:397
  T11.vector_element_[0] = &KJskip_;
  T11.vector_element_[1] = skipF6;
  T11.vector_element_[2] = &KJfailure_;
  T11.vector_element_[3] = DunfoundYcommon_extensionsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:397
  CONGRUENT_CALL_PROLOG(&Kfind_keyVKd, 3);
  key_ = CONGRUENT_CALL3(collection_, predicate_, &T11);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:398
  T12 = primitive_idQ(key_,DunfoundYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:398
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:399
    T8_0 = failure_;
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:401
    T13.vector_element_[0] = &KJdefault_;
    T13.vector_element_[1] = failure_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:401
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T9_0 = CONGRUENT_CALL3(collection_, key_, &T13);
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:398
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:392
  MV_SET_COUNT(1);
  return(T10_0);
}

D KjoinYcommon_extensionsVcommon_dylanMM0I (D sequences_, D separator_, D Urest_, D key_, D conjunction_) {
  D keyF6;
  D conjunctionF7;
  D T8;
  D T9;
  D length_;
  D T11;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D result_size_;
  D first_;
  D T25;
  D resultF26;
  D T27;
  DWORD i_T, i_;
  D T29;
  D seq_;
  D T31;
  D T32;
  D T33_0;
  D T34_0;
  D T35_0;
  D sequencesF36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D resultF43;
  D T44;
  D result_index_;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T52;
  DWORD T53;
  DWORD T54;
  D T55;
  _KLsimple_object_vectorGVKd_2 T56 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  D T62;
  DWORD T63;
  D T64_0;
  D T65_0;
  D T66_0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:336
  sequencesF36 = sequences_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:336
  primitive_type_check(key_, &KLfunctionGVKd);
  keyF6 = key_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:336
  primitive_type_check(conjunction_, &K60);
  conjunctionF7 = conjunction_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:341
  T47 = primitive_idQ(keyF6,&KidentityVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:341
  if (T47 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:344
    T42 = sequencesF36;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:344
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T48 = CONGRUENT_CALL1(T42);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:344
    T49 = CALL3(&Kmap_as_oneVKi, T48, keyF6, T42);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:344
    primitive_type_check(T49, &KLsequenceGVKd);
    T8 = T49;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:344
    sequencesF36 = T8;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:341
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:346
  T41 = sequencesF36;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:346
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T9 = CONGRUENT_CALL1(T41);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:341
  primitive_type_check(T9, &KLintegerGVKd);
  length_ = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:347
  T50 = primitive_idQ(length_,(D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:347
  if (T50 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:348
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T11 = CONGRUENT_CALL1(separator_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:348
    T51.vector_element_[0] = &KJsize_;
    T51.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:348
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T12_0 = CONGRUENT_CALL2(T11, &T51);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:348
    T64_0 = T12_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T12_0);
      primitive_type_check(T64_0, &KLsequenceGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T35_0 = T64_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:349
    T52 = primitive_idQ(length_,(D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:347
    if (T52 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:350
      T40 = sequencesF36;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:350
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T13_0 = CONGRUENT_CALL3(T40, (D) 1, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:350
      T65_0 = T13_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T13_0);
        primitive_type_check(T65_0, &KLsequenceGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T34_0 = T65_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
      T39 = sequencesF36;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
      CONGRUENT_CALL_PROLOG(&KreduceVKd, 3);
      T14 = CONGRUENT_CALL3(&Kanonymous_of_joinF63, (D) 1, T39);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:358
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T15 = CONGRUENT_CALL1(separator_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:358
      T53 = primitive_cast_integer_as_raw(length_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:358
      T54 = primitive_machine_word_subtract_signal_overflow(T53,4);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:358
      T55 = primitive_cast_raw_as_integer(T54);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:358
      CONGRUENT_CALL_PROLOG(&KTVKd, 2);
      T16 = CONGRUENT_CALL2(T15, T55);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T17 = CONGRUENT_CALL2(T14, T16);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:359
      if (conjunctionF7 != &KPfalseVKi) {
        T46 = conjunctionF7;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:361
        CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
        T18 = CONGRUENT_CALL1(T46);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:361
        CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
        T19 = CONGRUENT_CALL1(separator_);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:361
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T20 = CONGRUENT_CALL2(T18, T19);
        T21 = T20;
      } else {
        T21 = (D) 1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:359
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T22 = CONGRUENT_CALL2(T17, T21);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:352
      primitive_type_check(T22, &KLintegerGVKd);
      result_size_ = T22;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:365
      T38 = sequencesF36;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:365
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      first_ = CONGRUENT_CALL3(T38, (D) 1, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:366
      T25 = Kobject_classVKdI(first_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:366
      T56.vector_element_[0] = &KJsize_;
      T56.vector_element_[1] = result_size_;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:366
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      resultF26 = CONGRUENT_CALL2(T25, &T56);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:366
      resultF43 = MAKE_D_CELL(resultF26);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:367
      result_index_ = MAKE_D_CELL((D) 1);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:368
      T27 = MAKE_CLOSURE_INITD(&Kcopy_to_resultF64, 2, result_index_, resultF43);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:372
      CALL1(T27, first_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:373
      T57 = primitive_cast_integer_as_raw(length_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:373
      T58 = primitive_machine_word_subtract_signal_overflow(T57,4);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:373
      T59 = primitive_cast_raw_as_integer(T58);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
      i_T = 5;
    L0: ;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
        i_ = i_T;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
        T61 = primitive_cast_raw_as_integer(i_);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
        T60 = primitive_machine_word_less_thanQ(T58,i_);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
        if (T60 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:375
          T37 = sequencesF36;
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:375
          CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
          T29 = CONGRUENT_CALL3(T37, T61, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:375
          primitive_type_check(T29, &KLsequenceGVKd);
          seq_ = T29;
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
          if (conjunctionF7 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
            T62 = primitive_idQ(T61,T59);
            T31 = T62;
          } else {
            T31 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
          if (T31 != &KPfalseVKi) {
            T32 = conjunctionF7;
          } else {
            T32 = separator_;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:376
          CALL1(T27, T32);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:381
          get_teb()->function = T27;
          Kcopy_to_resultF64I(seq_);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
          T63 = primitive_machine_word_add_signal_overflow(i_,4);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
          i_T = T63;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:374
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:383
      T44 = GET_D_CELL_VAL(resultF43);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:383
      T33_0 = T44;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:383
      T66_0 = T33_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T33_0);
        primitive_type_check(T66_0, &KLsequenceGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T34_0 = T66_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:347
    T35_0 = T34_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:347
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:336
  MV_SET_COUNT(1);
  return(T35_0);
}

static D Kcopy_to_resultF64I (D seq_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:368
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:369
  T6 = GET_D_CELL_VAL(CREF(1));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:369
  T8 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:369
  T1 = CALL4(&Kreplace_subsequenceXVKd, T6, seq_, &KJstart_, T8);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:369
  SET_D_CELL_VAL(CREF(1), T1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(seq_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  T7 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T3 = CONGRUENT_CALL2(T7, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  primitive_type_check(T3, &KLintegerGVKd);
  T4 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  SET_D_CELL_VAL(CREF(0), T4);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:370
  T5 = T4;
  MV_SET_ELT(0, T4);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:368
  return(T5);
}

static D Kanonymous_of_joinF63I (D len_, D seq_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:354
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(seq_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:354
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T3 = CONGRUENT_CALL2(len_, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:353
  return(T3);
}

D KsplitYcommon_extensionsVcommon_dylanMM0I (D seq_, D find_separator_, D Urest_, D start_, D epos_, D count_, D remove_if_emptyQ_) {
  D startF8;
  D T9;
  D T10;
  DWORD eposF11;
  D T12;
  D countF13;
  D remove_if_emptyQF14;
  D T15;
  D T16_0;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  primitive_type_check(start_, &KLintegerGVKd);
  startF8 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  T17 = primitive_idQ(epos_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:222
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T9 = CONGRUENT_CALL1(seq_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
    T10 = T9;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
    primitive_type_check(T10, &KLintegerGVKd);
    T18 = T10;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:223
    T23 = primitive_cast_integer_as_raw(T18);
    eposF11 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
    primitive_type_check(epos_, &KLintegerGVKd);
    T19 = epos_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:223
    T24 = primitive_cast_integer_as_raw(T19);
    eposF11 = T24;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:223
  T25 = primitive_cast_raw_as_integer(eposF11);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  T20 = primitive_idQ(count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:223
    T21 = primitive_machine_word_add_signal_overflow(eposF11,4);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:223
    T22 = primitive_cast_raw_as_integer(T21);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
    T12 = T22;
    countF13 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
    primitive_type_check(count_, &KLintegerGVKd);
    T26 = count_;
    countF13 = T26;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  primitive_type_check(remove_if_emptyQ_, &KLbooleanGVKd);
  remove_if_emptyQF14 = remove_if_emptyQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:226
  T15 = KloopF106I(T25, remove_if_emptyQF14, countF13, find_separator_, seq_, startF8, &KPempty_listVKi, (D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:226
  T16_0 = CALL1(&KreverseXVKd, T15);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:219
  MV_SET_COUNT(1);
  return(T16_0);
}

D KsplitYcommon_extensionsVcommon_dylanMM1I (D seq_, D separator_, D Urest_, D start_, D epos_, D count_, D test_, D remove_if_emptyQ_) {
  D startF9;
  D T10;
  D T11;
  DWORD eposF12;
  D T13;
  D countF14;
  D testF15;
  D remove_if_emptyQF16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  _KLsimple_object_vectorGVKd_8 T30 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  primitive_type_check(start_, &KLintegerGVKd);
  startF9 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  T20 = primitive_idQ(epos_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:256
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T10 = CONGRUENT_CALL1(seq_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
    T11 = T10;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
    primitive_type_check(T11, &KLintegerGVKd);
    T21 = T11;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:257
    T26 = primitive_cast_integer_as_raw(T21);
    eposF12 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
    primitive_type_check(epos_, &KLintegerGVKd);
    T22 = epos_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:257
    T27 = primitive_cast_integer_as_raw(T22);
    eposF12 = T27;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:257
  T28 = primitive_cast_raw_as_integer(eposF12);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  T23 = primitive_idQ(count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:257
    T24 = primitive_machine_word_add_signal_overflow(eposF12,4);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:257
    T25 = primitive_cast_raw_as_integer(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
    T13 = T25;
    countF14 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
    primitive_type_check(count_, &KLintegerGVKd);
    T29 = count_;
    countF14 = T29;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  primitive_type_check(test_, &KLfunctionGVKd);
  testF15 = test_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  primitive_type_check(remove_if_emptyQ_, &KLbooleanGVKd);
  remove_if_emptyQF16 = remove_if_emptyQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:262
  T17 = &Klooking_atQF100;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:262
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
  T18 = MAKE_CLOSURE(&Kfind_subseqF99, 3);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
  INIT_CLOSURE(T18, 3, T17, testF15, separator_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:291
  T30.vector_element_[0] = &KJstart_;
  T30.vector_element_[1] = startF9;
  T30.vector_element_[2] = &KJend_;
  T30.vector_element_[3] = T28;
  T30.vector_element_[4] = &KJcount_;
  T30.vector_element_[5] = countF14;
  T30.vector_element_[6] = IKJremove_if_emptyQ_;
  T30.vector_element_[7] = remove_if_emptyQF16;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:291
  CONGRUENT_CALL_PROLOG(&KsplitYcommon_extensionsVcommon_dylan, 3);
  T19_0 = CONGRUENT_CALL3(seq_, T18, &T30);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:253
  MV_SET_COUNT(1);
  return(T19_0);
}

D KsplitYcommon_extensionsVcommon_dylanMM2I (D seq_, D separator_, D Urest_, D start_, D epos_, D count_, D test_, D remove_if_emptyQ_) {
  D startF9;
  D T10;
  D T11;
  DWORD eposF12;
  D T13;
  D countF14;
  D testF15;
  D remove_if_emptyQF16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_8 T29 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  primitive_type_check(start_, &KLintegerGVKd);
  startF9 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  T19 = primitive_idQ(epos_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:300
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T10 = CONGRUENT_CALL1(seq_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
    T11 = T10;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
    primitive_type_check(T11, &KLintegerGVKd);
    T20 = T11;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:301
    T25 = primitive_cast_integer_as_raw(T20);
    eposF12 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
    primitive_type_check(epos_, &KLintegerGVKd);
    T21 = epos_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:301
    T26 = primitive_cast_integer_as_raw(T21);
    eposF12 = T26;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:301
  T27 = primitive_cast_raw_as_integer(eposF12);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  T22 = primitive_idQ(count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:301
    T23 = primitive_machine_word_add_signal_overflow(eposF12,4);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:301
    T24 = primitive_cast_raw_as_integer(T23);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
    T13 = T24;
    countF14 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
    primitive_type_check(count_, &KLintegerGVKd);
    T28 = count_;
    countF14 = T28;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  primitive_type_check(test_, &KLfunctionGVKd);
  testF15 = test_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  primitive_type_check(remove_if_emptyQ_, &KLbooleanGVKd);
  remove_if_emptyQF16 = remove_if_emptyQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:305
  T17 = MAKE_CLOSURE_INITD(&Kfind_posF88, 2, testF15, separator_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:319
  T29.vector_element_[0] = &KJstart_;
  T29.vector_element_[1] = startF9;
  T29.vector_element_[2] = &KJend_;
  T29.vector_element_[3] = T27;
  T29.vector_element_[4] = &KJcount_;
  T29.vector_element_[5] = countF14;
  T29.vector_element_[6] = IKJremove_if_emptyQ_;
  T29.vector_element_[7] = remove_if_emptyQF16;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:319
  CONGRUENT_CALL_PROLOG(&KsplitYcommon_extensionsVcommon_dylan, 3);
  T18_0 = CONGRUENT_CALL3(seq_, T17, &T29);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:297
  MV_SET_COUNT(1);
  return(T18_0);
}

static D Kfind_posF88I (D seq_, D bpos_, D epos_) {
  D eposF3;
  D exit_loopPexit_43_;
  D T5;
  D i_T, i_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T15;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:305
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:305
  eposF3 = epos_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:310
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
  i_T = bpos_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(i_, eposF3);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:312
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T8 = CONGRUENT_CALL3(seq_, i_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:312
      T9 = CALL2(CREF(0), T8, CREF(1));
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:312
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:313
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T10 = CONGRUENT_CALL2(i_, (D) 5);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:313
        T14.vector_element_[0] = i_;
        T14.vector_element_[1] = T10;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:310
        T15 = MV_SET_REST_AT(&T14, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:310
        T13 = T15;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:312
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T11 = CONGRUENT_CALL2(i_, (D) 5);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:311
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:316
  T12 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:310
  T13 = T12;
  L1: ;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:310
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:305
  return(T13);
}

static D Klooking_atQF100I (D test_, D pattern_, D big_, D bpos_) {
  D returnPexit_41_;
  D T5;
  D T6;
  D len_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
  D pos_T, pos_;
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
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:262
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:264
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:265
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T6 = CONGRUENT_CALL1(big_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:265
  primitive_type_check(T6, &KLintegerGVKd);
  len_ = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T8 = CONGRUENT_CALL1(pattern_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T9 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T10 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T11 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T12 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T13 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  T14T = T9;
  pos_T = bpos_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
    T14 = T14T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
    pos_ = pos_T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
    T16 = CALL3(T12, pattern_, T14, T10);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
      T17 = CALL2(T13, pattern_, T14);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T25 = CONGRUENT_CALL2(pos_, len_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      T26 = primitive_not(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T18 = CONGRUENT_CALL3(big_, pos_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
        T19 = CALL2(test_, T17, T18);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
        T27 = primitive_not(T19);
        T20 = T27;
      } else {
        T20 = T26;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:268
        T28.vector_element_[0] = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:264
        T29 = MV_SET_REST_AT(&T28, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:264
        T24 = T29;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:267
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
      T21 = CALL2(T11, pattern_, T14);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T22 = CONGRUENT_CALL2(pos_, (D) 5);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
      T14T = T21;
      pos_T = T22;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:266
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:271
  T23 = &KPtrueVKi;
  MV_SET_ELT(0, &KPtrueVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:264
  T24 = T23;
  L1: ;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:264
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:262
  return(T24);
}

static D Kfind_subseqF99I (D seq_, D bpos_, D epos_) {
  D eposF3;
  D T4;
  D T5;
  D T6;
  D T7;
  D max_separator_start_;
  D exit_loopPexit_42_;
  D T10;
  D seq_index_T, seq_index_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
  eposF3 = epos_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:280
  if (eposF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
    primitive_type_check(eposF3, &KLintegerGVKd);
    T19 = eposF3;
    T5 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:280
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T4 = CONGRUENT_CALL1(seq_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:280
    primitive_type_check(T4, &KLintegerGVKd);
    T20 = T4;
    T5 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:280
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:281
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T6 = CONGRUENT_CALL1(CREF(2));
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:281
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T7 = CONGRUENT_CALL2(T5, T6);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:281
  primitive_type_check(T7, &KLintegerGVKd);
  max_separator_start_ = T7;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:282
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
  seq_index_T = bpos_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
    seq_index_ = seq_index_T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T12 = CONGRUENT_CALL2(max_separator_start_, seq_index_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:284
      T13 = CALL4(CREF(0), CREF(1), CREF(2), seq_, seq_index_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:284
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:285
        CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
        T14 = CONGRUENT_CALL1(CREF(2));
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:285
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T15 = CONGRUENT_CALL2(seq_index_, T14);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:285
        T21.vector_element_[0] = seq_index_;
        T21.vector_element_[1] = T15;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:282
        T22 = MV_SET_REST_AT(&T21, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:282
        T18 = T22;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:284
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T16 = CONGRUENT_CALL2(seq_index_, (D) 5);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
      seq_index_T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:283
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:288
  T17 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:282
  T18 = T17;
  L1: ;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:282
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:275
  return(T18);
}

static D KloopF106I (D implicit_argument_, D remove_if_emptyQ_, D count_, D find_separator_, D seq_, D bpos_, D parts_, D nparts_) {
  D T8_0;
  D T8_1;
  D sep_start_;
  D sep_end_;
  D T11;
  D T12;
  D partF13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D partF21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  _KLsimple_object_vectorGVKd_4 T36 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T37;
  D T38_0;
  _KLsimple_object_vectorGVKd_4 T39 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T40;
  D T41_0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:226
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:229
  T8_0 = CALL3(find_separator_, seq_, bpos_, implicit_argument_);
  T8_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:229
  sep_start_ = T8_0;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:229
  sep_end_ = T8_1;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  if (sep_start_ != &KPfalseVKi) {
    T11 = sep_end_;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T27 = CONGRUENT_CALL2(implicit_argument_, sep_end_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
    T28 = primitive_not(T27);
    T12 = T28;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:231
    T29.vector_element_[0] = &KJstart_;
    T29.vector_element_[1] = bpos_;
    T29.vector_element_[2] = &KJend_;
    T29.vector_element_[3] = sep_start_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:231
    CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
    partF13 = CONGRUENT_CALL2(seq_, &T29);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
    if (remove_if_emptyQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T14 = CONGRUENT_CALL1(partF13);
      T15 = T14;
    } else {
      T15 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:233
      T16 = CALL8(&KloopF106, implicit_argument_, remove_if_emptyQ_, count_, find_separator_, seq_, sep_end_, parts_, nparts_);
      T20 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:234
      T30 = primitive_cast_integer_as_raw(nparts_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:234
      T31 = primitive_cast_integer_as_raw(count_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:234
      T32 = primitive_machine_word_less_thanQ(T30,T31);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        T33 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        SLOT_VALUE_SETTER(partF13, T33, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        SLOT_VALUE_SETTER(parts_, T33, 1);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        T34 = primitive_machine_word_add_signal_overflow(T30,4);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        T35 = primitive_cast_raw_as_integer(T34);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:235
        T17 = CALL8(&KloopF106, implicit_argument_, remove_if_emptyQ_, count_, find_separator_, seq_, sep_end_, T33, T35);
        T19 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        T36.vector_element_[0] = &KJstart_;
        T36.vector_element_[1] = bpos_;
        T36.vector_element_[2] = &KJend_;
        T36.vector_element_[3] = implicit_argument_;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
        T18 = CONGRUENT_CALL2(seq_, &T36);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        T37 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        SLOT_VALUE_SETTER(T18, T37, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        SLOT_VALUE_SETTER(parts_, T37, 1);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:237
        T38_0 = T37;
        T19 = T38_0;
        MV_SET_COUNT(1);
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:232
    T26 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:240
    T39.vector_element_[0] = &KJstart_;
    T39.vector_element_[1] = bpos_;
    T39.vector_element_[2] = &KJend_;
    T39.vector_element_[3] = implicit_argument_;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:240
    CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
    partF21 = CONGRUENT_CALL2(seq_, &T39);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:241
    if (remove_if_emptyQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:241
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T22 = CONGRUENT_CALL1(partF21);
      T23 = T22;
    } else {
      T23 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:241
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:241
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:242
      T24 = parts_;
      MV_SET_ELT(0, parts_);
      MV_SET_COUNT(1);
      T25 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:244
      T40 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:244
      SLOT_VALUE_SETTER(partF21, T40, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:244
      SLOT_VALUE_SETTER(parts_, T40, 1);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:244
      T41_0 = T40;
      T25 = T41_0;
      MV_SET_COUNT(1);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:241
    T26 = T25;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:230
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:226
  return(T26);
}

D KpositionYcommon_extensionsVcommon_dylanMM0I (D sequence_, D target_, D Urest_, D test_, D Ustart_, D Uend_, D skip_, D count_) {
  D testF9;
  D UstartF10;
  D skipF11;
  D T12_0;
  D T12_1;
  D T12_2;
  D T12_3;
  D T12_4;
  D T12_5;
  D T12_6;
  D T12_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_;
  DWORD index_T, index_;
  D state_T, state_;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24_0;
  DWORD T25;
  D T26;
  DWORD T27;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  primitive_type_check(test_, &KLfunctionGVKd);
  testF9 = test_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF10 = Ustart_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF11 = skip_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T12_0 = CONGRUENT_CALL1(sequence_);
  T12_1 = MV_GET_ELT(1);
  T12_2 = MV_GET_ELT(2);
  T12_3 = MV_GET_ELT(3);
  T12_4 = MV_GET_ELT(4);
  T12_5 = MV_GET_ELT(5);
  T12_6 = MV_GET_ELT(6);
  T12_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  initial_state_ = T12_0;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  limit_ = T12_1;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  next_state_ = T12_2;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  finished_stateQ_ = T12_3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:120
  current_element_ = T12_5;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
  index_T = 1;
  state_T = initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    T25 = primitive_cast_integer_as_raw(UstartF10);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    T26 = primitive_machine_word_less_thanQ(index_,T25);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
      T27 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:123
      T20 = CALL2(next_state_, sequence_, state_);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
      index_T = T27;
      state_T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:127
    if (count_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:127
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T21 = CONGRUENT_CALL2(count_, (D) 5);
      T22 = T21;
    } else {
      T22 = skipF11;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:127
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:126
    T23_0 = CALLN(&KloopF147, 11), current_element_, finished_stateQ_, next_state_, limit_, testF9, Uend_, target_, sequence_, UstartF10, T22, state_));
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:122
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  T24_0 = T23_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T23_0);
    primitive_type_check(T24_0, &K10);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:112
  MV_SET_COUNT(1);
  return(T24_0);
}

D KpositionYcommon_extensionsVcommon_dylanMM1I (D sequence_, D target_, D Urest_, D test_, D Ustart_, D Uend_, D skip_, D count_) {
  D testF9;
  D UstartF10;
  D T11;
  D T12;
  D UendF13;
  D skipF14;
  D T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  primitive_type_check(test_, &KLfunctionGVKd);
  testF9 = test_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF10 = Ustart_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  T19 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:150
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T11 = CONGRUENT_CALL1(sequence_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
    T12 = T11;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
    primitive_type_check(T12, &KLintegerGVKd);
    T20 = T12;
    UendF13 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
    primitive_type_check(Uend_, &KLintegerGVKd);
    T21 = Uend_;
    UendF13 = T21;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF14 = skip_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:156
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:156
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T15 = CONGRUENT_CALL2(count_, (D) 5);
    T16 = T15;
  } else {
    T16 = skipF14;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:156
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:155
  T17_0 = CALL6(&KloopF142, UendF13, testF9, target_, sequence_, UstartF10, T16);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  T18_0 = T17_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T17_0);
    primitive_type_check(T18_0, &K10);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:146
  MV_SET_COUNT(1);
  return(T18_0);
}

D KpositionYcommon_extensionsVcommon_dylanMM2I (D sequence_, D target_, D Urest_, D test_, D Ustart_, D Uend_, D skip_, D count_) {
  D testF9;
  D UstartF10;
  D T11;
  D UendF12;
  D skipF13;
  D T14;
  D T15;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:171
  primitive_type_check(test_, &KLfunctionGVKd);
  testF9 = test_;
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF10 = Ustart_;
  T18 = primitive_idQ(Uend_,&KPunboundVKi);
  if (T18 != &KPfalseVKi) {
    T20 = SLOT_VALUE_INITD(sequence_, 0);
    T11 = T20;
    UendF12 = T11;
  } else {
    primitive_type_check(Uend_, &KLintegerGVKd);
    T19 = Uend_;
    UendF12 = T19;
  }
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF13 = skip_;
  if (count_ != &KPfalseVKi) {
    T21 = count_;
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T14 = CONGRUENT_CALL2(T21, (D) 5);
    T15 = T14;
  } else {
    T15 = skipF13;
  }
  T16_0 = CALL6(&KloopF137, UendF12, testF9, target_, sequence_, UstartF10, T15);
  T17_0 = T16_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T16_0);
    primitive_type_check(T17_0, &K10);
    MV_CHECK_TYPE_EPILOGUE();
  }
  MV_SET_COUNT(1);
  return(T17_0);
}

static D KloopF137I (D Uend_, D test_, D target_, D sequence_, D index_, D skip_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD indexF19;
  DWORD skipF20;
  DWORD T21;
  D T22;
  DWORD indexF23T, indexF23;
  DWORD skipF24T, skipF24;
  D T29;
  DWORD T30;
  DWORD T31;

  T30 = primitive_cast_integer_as_raw(index_);
  T31 = primitive_cast_integer_as_raw(skip_);
  indexF23T = T30;
  skipF24T = T31;
L0: ;
    indexF23 = indexF23T;
    skipF24 = skipF24T;
    indexF19 = indexF23;
    T29 = primitive_cast_raw_as_integer(indexF19);
    skipF20 = skipF24;
    T13 = primitive_cast_integer_as_raw(Uend_);
    T14 = primitive_machine_word_less_thanQ(indexF19,T13);
    if (T14 != &KPfalseVKi) {
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(sequence_, T29, &KPempty_vectorVKi);
      T8 = CALL2(test_, target_, T7);
      if (T8 != &KPfalseVKi) {
        T15 = primitive_machine_word_equalQ(skipF20,1);
        if (T15 != &KPfalseVKi) {
          T9 = T29;
          MV_SET_ELT(0, T29);
          MV_SET_COUNT(1);
          T10 = T9;
        } else {
          T16 = primitive_machine_word_add_signal_overflow(indexF19,4);
          T17 = primitive_machine_word_subtract_signal_overflow(skipF20,4);
          indexF23T = T16;
          skipF24T = T17;
          goto L0;
          T10 = T18;
        }
        T11 = T10;
      } else {
        T21 = primitive_machine_word_add_signal_overflow(indexF19,4);
        indexF23T = T21;
        skipF24T = skipF20;
        goto L0;
        T11 = T22;
      }
      T12 = T11;
    } else {
      T6 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T12 = T6;
    }
  return(T12);
}

static D KloopF142I (D Uend_, D test_, D target_, D sequence_, D index_, D skip_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD T16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  D indexF25;
  D T26;
  D skipF27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  D indexF33T, indexF33;
  D skipF34T, skipF34;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
  indexF33T = index_;
  skipF34T = skip_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
    indexF33 = indexF33T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
    skipF34 = skipF34T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
    indexF25 = indexF33;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
    primitive_type_check(indexF25, &KLintegerGVKd);
    T26 = indexF25;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
    skipF27 = skipF34;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
    primitive_type_check(skipF27, &KLintegerGVKd);
    T28 = skipF27;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
    T13 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
    T14 = primitive_cast_integer_as_raw(Uend_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
    T15 = primitive_machine_word_less_thanQ(T13,T14);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:159
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(sequence_, T26, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:159
      T8 = CALL2(test_, target_, T7);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:160
        T16 = primitive_cast_integer_as_raw(T28);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:160
        T17 = primitive_machine_word_equalQ(T16,1);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:160
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:161
          T9 = T26;
          MV_SET_ELT(0, T26);
          MV_SET_COUNT(1);
          T10 = T9;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T18 = primitive_cast_integer_as_raw(T26);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T19 = primitive_machine_word_add_signal_overflow(T18,4);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T20 = primitive_cast_raw_as_integer(T19);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T21 = primitive_cast_integer_as_raw(T28);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T22 = primitive_machine_word_subtract_signal_overflow(T21,4);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          T23 = primitive_cast_raw_as_integer(T22);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
          indexF33T = T20;
          skipF34T = T23;
          goto L0;
          T10 = T24;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:160
        T11 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
        T29 = primitive_cast_integer_as_raw(T26);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
        T30 = primitive_machine_word_add_signal_overflow(T29,4);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
        T31 = primitive_cast_raw_as_integer(T30);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:166
        indexF33T = T31;
        skipF34T = T28;
        goto L0;
        T11 = T32;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
      T12 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:158
      T6 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T12 = T6;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:157
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:163
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:155
  return(T12);
}

static D KloopF147I (D current_element_, D finished_stateQ_, D next_state_, D limit_, D test_, D Uend_, D target_, D sequence_, D index_, D skip_, D state_) {
  D Utmp_;
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
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34;
  D indexF35;
  D T36;
  D skipF37;
  D T38;
  D stateF39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;
  D indexF45T, indexF45;
  D skipF46T, skipF46;
  D stateF47T, stateF47;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:126
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
  indexF45T = index_;
  skipF46T = skip_;
  stateF47T = state_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
    indexF45 = indexF45T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
    skipF46 = skipF46T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
    stateF47 = stateF47T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    indexF35 = indexF45;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    primitive_type_check(indexF35, &KLintegerGVKd);
    T36 = indexF35;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    skipF37 = skipF46;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    primitive_type_check(skipF37, &KLintegerGVKd);
    T38 = skipF37;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    stateF39 = stateF47;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
    primitive_type_check(stateF39, &KLobjectGVKd);
    T40 = stateF39;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
    Utmp_ = CALL3(finished_stateQ_, sequence_, T40, limit_);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
    if (Utmp_ != &KPfalseVKi) {
      T14 = Utmp_;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
      if (Uend_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(T36, Uend_);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
        T25 = primitive_not(T24);
        T13 = T25;
      } else {
        T13 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:130
      T15 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T23 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:131
      T16 = CALL2(current_element_, sequence_, T40);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:131
      T17 = CALL2(test_, target_, T16);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:132
        T26 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:132
        T27 = primitive_machine_word_equalQ(T26,1);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:132
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:133
          T18 = T36;
          MV_SET_ELT(0, T36);
          MV_SET_COUNT(1);
          T20 = T18;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T28 = primitive_cast_integer_as_raw(T36);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T29 = primitive_machine_word_add_signal_overflow(T28,4);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T30 = primitive_cast_raw_as_integer(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T31 = primitive_cast_integer_as_raw(T38);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T32 = primitive_machine_word_subtract_signal_overflow(T31,4);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T33 = primitive_cast_raw_as_integer(T32);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          T19 = CALL2(next_state_, sequence_, T40);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
          indexF45T = T30;
          skipF46T = T33;
          stateF47T = T19;
          goto L0;
          T20 = T34;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:132
        T22 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
        T41 = primitive_cast_integer_as_raw(T36);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
        T42 = primitive_machine_word_add_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
        T21 = CALL2(next_state_, sequence_, T40);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:138
        indexF45T = T43;
        skipF46T = T38;
        stateF47T = T21;
        goto L0;
        T22 = T44;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
      T23 = T22;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:129
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:135
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:126
  return(T23);
}

D KdifferenceYcommon_extensionsVcommon_dylanMM0I (D sequence_1_, D sequence_2_, D Urest_, D test_) {
  D testF5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:93
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:93
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  T6 = MAKE_CLOSURE_INITD(&Kanonymous_of_differenceF160, 2, testF5, sequence_2_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  CONGRUENT_CALL_PROLOG(&KchooseVKd, 2);
  T7_0 = CONGRUENT_CALL2(T6, sequence_1_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:93
  MV_SET_COUNT(1);
  return(T7_0);
}

static D Kanonymous_of_differenceF160I (D item_) {
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T3_0;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  T2.vector_element_[0] = &KJtest_;
  T2.vector_element_[1] = CREF(0);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
  T1 = CONGRUENT_CALL3(item_, CREF(1), &T2);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  T4 = primitive_not(T1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:97
  MV_SET_COUNT(1);
  return(T3_0);
}

D KconcatenateXYcommon_extensionsVcommon_dylanMM0I (D s_, D more_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:37
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:39
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T3 = CONGRUENT_CALL1(s_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:39
  T4_0 = APPLY3(&Kconcatenate_asVKd, T3, s_, more_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:37
  MV_SET_COUNT(1);
  return(T4_0);
}

D KconcatenateXYcommon_extensionsVcommon_dylanMM1I (D vector_, D more_) {
  DWORD T3T, T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
  T15 = SLOT_VALUE_INITD(more_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
  T16 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
    T17 = primitive_machine_word_equalQ(T3,T16);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
      T18 = REPEATED_D_SLOT_VALUE_TAGGED(more_, 1, T3);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T4 = CALL1(&Kforward_iteration_protocolVKd, T18);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T5 = T4;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T6 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T7 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T8 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T9 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      T10T = T5;
    L1: ;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
        T10 = T10T;
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
        T11 = CALL3(T8, T18, T10, T6);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
        if (T11 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
          T12 = CALL2(T9, T18, T10);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:47
          CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
          CONGRUENT_CALL2(vector_, T12);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
          T13 = CALL2(T7, T18, T10);
          // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
          T10T = T13;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:46
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
      T19 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
      T3T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:50
  T14_0 = vector_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:42
  MV_SET_COUNT(1);
  return(T14_0);
}

D KconcatenateXYcommon_extensionsVcommon_dylanMM2I (D x_, D more_) {
  D T3_0;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:54
  T5 = primitive_copy_vector(more_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:56
  T3_0 = Kfind_resultF176I(T5, x_, (D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:54
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLlistGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:54
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kfind_resultF176I (D implicit_argument_, D r_, D i_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:56
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  T9 = SLOT_VALUE_INITD(implicit_argument_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  T10 = primitive_cast_integer_as_raw(i_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  T12 = primitive_machine_word_equalQ(T10,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:58
    T3 = r_;
    MV_SET_ELT(0, r_);
    MV_SET_COUNT(1);
    T8 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:59
    T13 = primitive_idQ(r_,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:60
      T14 = KelementVKdMM11I(implicit_argument_, i_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:60
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T4 = CONGRUENT_CALL2(&KLlistGVKd, T14);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:60
      T15 = primitive_machine_word_add_signal_overflow(T10,4);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:60
      T16 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:60
      T5 = CALL3(&Kfind_resultF176, implicit_argument_, T4, T16);
      T7 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:63
      T6 = KconnectF181I(implicit_argument_, r_, r_, i_);
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:57
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:56
  return(T8);
}

static D KconnectF181I (D implicit_argument_, D r_, D p_, D i_) {
  D T4;
  D xF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D pF19T, pF19;
  D T20;
  D iF21T, iF21;
  D T22;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
  pF19T = p_;
  iF21T = i_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
    pF19 = pF19T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
    primitive_type_check(pF19, &KLlistGVKd);
    T20 = pF19;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
    iF21 = iF21T;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
    primitive_type_check(iF21, &KLintegerGVKd);
    T22 = iF21;
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    T10 = SLOT_VALUE_INITD(implicit_argument_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    T11 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    T12 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    T13 = primitive_machine_word_equalQ(T11,T12);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:65
      T4 = r_;
      MV_SET_ELT(0, r_);
      MV_SET_COUNT(1);
      T9 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:68
      T14 = KelementVKdMM11I(implicit_argument_, T22, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:68
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      xF5 = CONGRUENT_CALL2(&KLlistGVKd, T14);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:69
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T6 = CONGRUENT_CALL1(xF5);
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:69
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
        T15 = primitive_cast_integer_as_raw(T22);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
        T16 = primitive_machine_word_add_signal_overflow(T15,4);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
        T17 = primitive_cast_raw_as_integer(T16);
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
        pF19T = p_;
        iF21T = T17;
        goto L0;
        T8 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:73
        T7 = Kfind_tailF182I(implicit_argument_, r_, T22, xF5, T20);
        T8 = T7;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:69
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:64
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:70
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:63
  return(T9);
}

static D Kfind_tailF182I (D implicit_argumentF17, D r_, D implicit_argumentF15, D x_, D p_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:73
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:74
  T9 = SLOT_VALUE_INITD(p_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:74
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T5 = CONGRUENT_CALL1(T9);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:74
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:75
    SLOT_VALUE_SETTER(x_, p_, 1);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:76
    T10 = primitive_cast_integer_as_raw(implicit_argumentF15);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:76
    T11 = primitive_machine_word_add_signal_overflow(T10,4);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:76
    T12 = primitive_cast_raw_as_integer(T11);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:76
    T6 = CALL4(&KconnectF181, implicit_argumentF17, r_, x_, T12);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:78
    T13 = SLOT_VALUE_INITD(p_, 1);
    // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:78
    T7 = CALL5(&Kfind_tailF182, implicit_argumentF17, r_, implicit_argumentF15, x_, T13);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:74
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:73
  return(T8);
}

D KtrueQYcommon_extensionsVcommon_dylanI (D object_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:27
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:29
  T3 = primitive_as_boolean(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:29
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:27
  MV_SET_COUNT(1);
  return(T2_0);
}

D KfalseQYcommon_extensionsVcommon_dylanI (D object_) {
  D T1_0;
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:22
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:24
  T2 = primitive_not(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:24
  T1_0 = T2;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:22
  MV_SET_COUNT(1);
  return(T1_0);
}

D KsuppliedQYcommon_extensionsVcommon_dylanI (D x_) {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:17
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:17
  T1 = primitive_idQ(x_,DunsuppliedYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:17
  T3 = primitive_not(T1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:17
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:17
  MV_SET_COUNT(1);
  return(T2_0);
}

D KunsuppliedQYcommon_extensionsVcommon_dylanI (D x_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:16
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:16
  T1 = primitive_idQ(x_,DunsuppliedYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:16
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:16
  return(T2);
}

D KunsuppliedYcommon_extensionsVcommon_dylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:15
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:15
  T0 = DunsuppliedYcommon_extensionsVcommon_dylan;
  MV_SET_ELT(0, DunsuppliedYcommon_extensionsVcommon_dylan);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:15
  return(T0);
}

D KfoundQYcommon_extensionsVcommon_dylanI (D x_) {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:12
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:12
  T1 = primitive_idQ(x_,DunfoundYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:12
  T3 = primitive_not(T1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:12
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:12
  MV_SET_COUNT(1);
  return(T2_0);
}

D KunfoundQYcommon_extensionsVcommon_dylanI (D x_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:11
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:11
  T1 = primitive_idQ(x_,DunfoundYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:11
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:11
  return(T2);
}

D KunfoundYcommon_extensionsVcommon_dylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:10
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:10
  T0 = DunfoundYcommon_extensionsVcommon_dylan;
  MV_SET_ELT(0, DunfoundYcommon_extensionsVcommon_dylan);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:10
  return(T0);
}

D Kfind_valueYcommon_extensionsVcommon_dylanMM0I (D collection_, D predicate_, D Urest_, D skip_, D failure_) {
  D skipF6;
  D T7_0;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:406
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:406
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF6 = skip_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:411
  T8.vector_element_[0] = &KJskip_;
  T8.vector_element_[1] = skipF6;
  T8.vector_element_[2] = &KJfailure_;
  T8.vector_element_[3] = failure_;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:411
  CONGRUENT_CALL_PROLOG(&Kfind_elementYcommon_extensionsVcommon_dylan, 3);
  T7_0 = CONGRUENT_CALL3(collection_, predicate_, &T8);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:406
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_common_extensions_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      IKJstream_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstandard_error_);
    if (T0 != &KJstandard_error_) {
      IKJstandard_error_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJconjunction_);
    if (T0 != &KJconjunction_) {
      primitive_repeated_slot_value_setter(T0, &K67, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K55, 1, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJremove_if_emptyQ_);
    if (T0 != &KJremove_if_emptyQ_) {
      primitive_repeated_slot_value_setter(T0, &K110, 1, 6);
      IKJremove_if_emptyQ_ = T0;
      primitive_repeated_slot_value_setter(T0, &K93, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K92, 1, 8);
      primitive_repeated_slot_value_setter(T0, &K82, 1, 3);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_common_extensions_for_user () {
{
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:444
  Tlast_handlerTVKi = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:444
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:444
  T0 = Kmake_last_handlerVKiI(&KLserious_conditionGVKd, &Kdefault_last_handlerYcommon_dylan_internalsVcommon_dylanMM0, &KPempty_vectorVKi, &Kdefault_last_handler_testVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:444
  T1 = CALL1(&Kadd_last_handlerVKi, T0);
  goto I1;
}
I1:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/common-extensions.dylan:446
  T0 = KPadd_methodVKnI(&Kdefault_handlerVKd, &Kdefault_handlerVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan);
  goto I6;
}
I6:

  return;
}


/* eof */
