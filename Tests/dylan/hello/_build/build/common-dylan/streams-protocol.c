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
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
} _KLsequenceGVKd;

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
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

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
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLinstance_slot_descriptorGVKe;

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
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_sequence_;
  D stream_error_count_;
} _KLincomplete_read_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_count_;
} _KLincomplete_write_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLend_of_stream_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kstreams_protocol_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLsymbolGVKd KJcount_;
D KsignalVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsymbolGVKd KJformat_string_;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
D Kclass_instanceQ_initialVKiI (D, D);
D KmakeVKdMM23I (D, D, D, D);
extern _KLsymbolGVKd KJfrom_;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D, D);
extern D DunsuppliedYcommon_extensionsVcommon_dylan;
extern D DunfoundYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLstream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstream_errorGYstreams_protocolVcommon_dylanW;
extern _KLkeyword_methodGVKe KmakeVKdMcommon_dylanM0;
D KmakeVKdMcommon_dylanM0I (D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kdiscard_outputYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMM0;
D Kdiscard_outputYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K9;
static _KLsignatureGVKe K10;
static _KLbyte_stringGVKd_14 K11;
static _KLsimple_object_vectorGVKd_1 K12;
extern _KLincremental_generic_functionGVKe Ksynchronize_outputYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMM0;
D Ksynchronize_outputYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K16;
static _KLbyte_stringGVKd_18 K17;
extern _KLincremental_generic_functionGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0;
D Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K21;
static _KLbyte_stringGVKd_22 K22;
extern _KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan;
extern _KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMM0;
D Kforce_outputYstreams_protocolVcommon_dylanMM0I (D, D, D);
static _KLpairGVKd K26;
static _KLkeyword_signatureGVKe K27;
static _KLbyte_stringGVKd_12 K28;
static _KLsimple_object_vectorGVKd_1 K29;
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLbyte_stringGVKd_12 K31;
static _KLsimple_object_vectorGVKd_2 K32;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMM0;
D KwriteYstreams_protocolVcommon_dylanMM0I (D, D, D, D, D);
static _KLpairGVKd K36;
static _KLkeyword_signatureGVKe K37;
static _KLbyte_stringGVKd_5 K38;
static _KLsimple_object_vectorGVKd_2 K39;
static _KLsimple_object_vectorGVKd_2 K40;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
static _KLsignatureGVKe K42;
static _KLbyte_stringGVKd_13 K43;
static _KLsimple_object_vectorGVKd_2 K44;
static _KLsimple_object_vectorGVKd_4 K45;
extern _KLincremental_generic_functionGVKe Kstream_contents_asYstreams_protocolVcommon_dylan;
static _KLkeyword_signatureAvaluesGVKi K47;
static _KLbyte_stringGVKd_18 K48;
static _KLsimple_object_vectorGVKd_2 K49;
static _KLsimple_object_vectorGVKd_1 K50;
static _KLsymbolGVKd KJclear_contentsQ_;
static _KLbyte_stringGVKd_15 K52;
extern _KLincremental_generic_functionGVKe Kstream_contentsYstreams_protocolVcommon_dylan;
static _KLkeyword_signatureAvaluesGVKi K54;
static _KLbyte_stringGVKd_15 K55;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
static _KLsignatureAvaluesGVKi K57;
static _KLbyte_stringGVKd_23 K58;
extern _KLincremental_generic_functionGVKe Kdiscard_inputYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMM0;
D Kdiscard_inputYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K62;
static _KLbyte_stringGVKd_13 K63;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
extern _KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMM0;
D Kread_intoXYstreams_protocolVcommon_dylanMM0I (D, D, D, D, D, D);
static _KLpairGVKd K67;
static _KLkeyword_signatureGVKe K68;
static _KLbyte_stringGVKd_10 K69;
static _KLsimple_object_vectorGVKd_3 K70;
static _KLsimple_object_vectorGVKd_2 K71;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K73;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
static _KLsymbolGVKd KJstream_;
static _KLsymbolGVKd KJsequence_;
extern _KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLincomplete_read_errorGYstreams_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K79;
static _KLsimple_object_vectorGVKd_5 K80;
extern _KLkeyword_methodGVKe KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K83;
static _KLsimple_object_vectorGVKd_8 K84;
static _KLsimple_object_vectorGVKd_2 K85;
extern _KLinstance_slot_descriptorGVKe Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG;
extern _KLinstance_slot_descriptorGVKe Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_read_errorG;
extern _KLsealed_generic_functionGVKe Kstream_error_countYstreams_protocolVcommon_dylan;
extern _KLgetter_methodGVKi Kstream_error_countYstreams_protocolVcommon_dylanMM0;
extern _KLgetter_methodGVKi Kstream_error_countYstreams_protocolVcommon_dylanMM1;
static _KLpairGVKd K91;
static _KLpairGVKd K92;
static _KLbyte_stringGVKd_18 K93;
extern _KLinstance_slot_descriptorGVKe Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_write_errorG;
extern _KLclassGVKd KLincomplete_write_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLincomplete_write_errorGYstreams_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K97;
static _KLsimple_object_vectorGVKd_4 K98;
extern _KLkeyword_methodGVKe KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_8 K101;
static _KLsimple_object_vectorGVKd_1 K102;
extern _KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLend_of_stream_errorGYstreams_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K105;
static _KLsimple_object_vectorGVKd_3 K106;
extern _KLkeyword_methodGVKe KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K109;
static _KLsimple_object_vectorGVKd_7 K110;
static _KLbyte_stringGVKd_23 K111;
static _KLkeyword_signatureAvaluesGVKi K112;
static _KLsimple_object_vectorGVKd_6 K113;
static _KLsimple_object_vectorGVKd_3 K114;
extern _KLinstance_slot_descriptorGVKe Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG;
extern _KLsealed_generic_functionGVKe Kstream_error_streamYstreams_protocolVcommon_dylan;
extern _KLgetter_methodGVKi Kstream_error_streamYstreams_protocolVcommon_dylanMM0;
static _KLpairGVKd K118;
static _KLbyte_stringGVKd_19 K119;
static _KLbyte_stringGVKd_21 K120;
static _KLkeyword_signatureAvaluesGVKi K121;
static _KLsimple_object_vectorGVKd_8 K122;
static _KLsimple_object_vectorGVKd_4 K123;
static _KLsimple_object_vectorGVKd_1 K124;
static _KLbyte_stringGVKd_24 K125;
extern _KLsealed_generic_functionGVKe Kstream_error_sequenceYstreams_protocolVcommon_dylan;
extern _KLgetter_methodGVKi Kstream_error_sequenceYstreams_protocolVcommon_dylanMM0;
static _KLpairGVKd K128;
static _KLbyte_stringGVKd_21 K129;
static _KLkeyword_signatureAvaluesGVKi K130;
static _KLsimple_object_vectorGVKd_10 K131;
static _KLsimple_object_vectorGVKd_5 K132;
static _KLsimple_object_vectorGVKd_1 K133;
static _KLbyte_stringGVKd_23 K134;
static _KLbyte_stringGVKd_8 K135;
static _KLbyte_stringGVKd_6 K136;
static _KLkeyword_signatureGVKe K137;
static _KLbyte_stringGVKd_12 K138;
static _KLsimple_object_vectorGVKd_1 K139;
static _KLsimple_object_vectorGVKd_4 K140;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMM0;
D KreadYstreams_protocolVcommon_dylanMM0I (D, D, D, D);
static _KLpairGVKd K144;
static _KLkeyword_signatureGVKe K145;
static _KLbyte_stringGVKd_4 K146;
static _KLsimple_object_vectorGVKd_2 K147;
static _KLsimple_object_vectorGVKd_2 K148;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
static _KLbyte_stringGVKd_4 K150;
extern _KLincremental_generic_functionGVKe Kunread_elementYstreams_protocolVcommon_dylan;
static _KLsignatureGVKe K152;
static _KLbyte_stringGVKd_14 K153;
extern _KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan;
static _KLkeyword_signatureGVKe K155;
static _KLbyte_stringGVKd_22 K156;
static _KLsimple_object_vectorGVKd_1 K157;
extern _KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan;
static _KLsignatureGVKe K159;
static _KLbyte_stringGVKd_22 K160;
static _KLsimple_object_vectorGVKd_2 K161;
extern _KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan;
static _KLsignatureGVKe K163;
static _KLbyte_stringGVKd_15 K164;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
static _KLimplementation_classGVKe K167;
static _KLsimple_object_vectorGVKd_6 K168;
static _KLbyte_stringGVKd_21 K169;
extern _KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMM0;
D Kstream_sizeYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K173;
static _KLsignatureAvaluesGVKi K174;
static _KLbyte_stringGVKd_11 K175;
static _KLsimple_object_vectorGVKd_1 K176;
static _KLunionGVKe K177;
static _KLsingletonGVKd K178;
static _KLsignatureAvaluesGVKi K179;
static _KLsimple_object_vectorGVKd_1 K180;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
static _KLbyte_stringGVKd_14 K182;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMM0;
D Kstream_openQYstreams_protocolVcommon_dylanMM0I (D);
static _KLpairGVKd K186;
static _KLbyte_stringGVKd_12 K187;
extern _KLincremental_generic_functionGVKe Kopen_file_streamYstreams_protocolVcommon_dylan;
static _KLkeyword_signatureAvaluesGVKi K189;
static _KLbyte_stringGVKd_16 K190;
extern _KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan;
static _KLsignatureAvaluesGVKi K192;
static _KLbyte_stringGVKd_19 K193;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF197;
static D Kanonymous_of_makeF197I (D);
static _KLbyte_stringGVKd_26 K196;
static _KLbyte_stringGVKd_15 K198;
static _KLsignatureGVKe K199;
static _KLkeyword_signatureAvaluesGVKi K200;
static _KLsimple_object_vectorGVKd_6 K201;
static _KLsimple_object_vectorGVKd_1 K202;
static _KLsimple_object_vectorGVKd_3 K203;
static _KLsimple_object_vectorGVKd_3 K204;
static _KLsubclassGVKe K205;
static _KLimplementation_classGVKe K206;
extern _KLkeyword_methodGVKe KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K209;
static _KLsimple_object_vectorGVKd_6 K210;
static _KLsimple_object_vectorGVKd_1 K211;
static _KLkeyword_signatureAvaluesGVKi K212;
static _KLbyte_stringGVKd_14 K213;
extern _KLkeyword_methodGVKe KmakeVKdMcommon_dylanM1;
D KmakeVKdMcommon_dylanM1I (D, D, D);
static _KLbyte_stringGVKd_16 K217;
static _KLkeyword_signatureAvaluesGVKi K218;
static _KLsimple_object_vectorGVKd_2 K219;
static _KLsimple_object_vectorGVKd_1 K220;
static _KLsimple_object_vectorGVKd_1 K221;
static _KLsingletonGVKd K222;
static _KLpairGVKd K223;
static _KLpairGVKd K224;
static _KLpairGVKd K225;

/* Indirection variables */

static D IKJsynchronizeQ_ = &KJsynchronizeQ_;
static D IKJclear_contentsQ_ = &KJclear_contentsQ_;
static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJstream_ = &KJstream_;
static D IKJsequence_ = &KJsequence_;

/* Variables */

D stream_error_sequenceYstreams_protocolVcommon_dylan = &Kstream_error_sequenceYstreams_protocolVcommon_dylan;
D stream_error_countYstreams_protocolVcommon_dylan = &Kstream_error_countYstreams_protocolVcommon_dylan;
D stream_error_streamYstreams_protocolVcommon_dylan = &Kstream_error_streamYstreams_protocolVcommon_dylan;
D Lstream_errorGYstreams_protocolVcommon_dylan = &KLstream_errorGYstreams_protocolVcommon_dylan;
D Lend_of_stream_errorGYstreams_protocolVcommon_dylan = &KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
D Lincomplete_read_errorGYstreams_protocolVcommon_dylan = &KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
D Lincomplete_write_errorGYstreams_protocolVcommon_dylan = &KLincomplete_write_errorGYstreams_protocolVcommon_dylan;
D stream_element_typeYstreams_protocolVcommon_dylan = &Kstream_element_typeYstreams_protocolVcommon_dylan;
D open_file_streamYstreams_protocolVcommon_dylan = &Kopen_file_streamYstreams_protocolVcommon_dylan;
D stream_openQYstreams_protocolVcommon_dylan = &Kstream_openQYstreams_protocolVcommon_dylan;
D stream_at_endQYstreams_protocolVcommon_dylan = &Kstream_at_endQYstreams_protocolVcommon_dylan;
D stream_sizeYstreams_protocolVcommon_dylan = &Kstream_sizeYstreams_protocolVcommon_dylan;
D Lpositionable_streamGYstreams_protocolVcommon_dylan = &KLpositionable_streamGYstreams_protocolVcommon_dylan;
D stream_positionYstreams_protocolVcommon_dylan = &Kstream_positionYstreams_protocolVcommon_dylan;
D stream_position_setterYstreams_protocolVcommon_dylan = &Kstream_position_setterYstreams_protocolVcommon_dylan;
D adjust_stream_positionYstreams_protocolVcommon_dylan = &Kadjust_stream_positionYstreams_protocolVcommon_dylan;
D read_elementYstreams_protocolVcommon_dylan = &Kread_elementYstreams_protocolVcommon_dylan;
D unread_elementYstreams_protocolVcommon_dylan = &Kunread_elementYstreams_protocolVcommon_dylan;
D peekYstreams_protocolVcommon_dylan = &KpeekYstreams_protocolVcommon_dylan;
D readYstreams_protocolVcommon_dylan = &KreadYstreams_protocolVcommon_dylan;
D read_intoXYstreams_protocolVcommon_dylan = &Kread_intoXYstreams_protocolVcommon_dylan;
D discard_inputYstreams_protocolVcommon_dylan = &Kdiscard_inputYstreams_protocolVcommon_dylan;
D stream_input_availableQYstreams_protocolVcommon_dylan = &Kstream_input_availableQYstreams_protocolVcommon_dylan;
D stream_contentsYstreams_protocolVcommon_dylan = &Kstream_contentsYstreams_protocolVcommon_dylan;
D stream_contents_asYstreams_protocolVcommon_dylan = &Kstream_contents_asYstreams_protocolVcommon_dylan;
D write_elementYstreams_protocolVcommon_dylan = &Kwrite_elementYstreams_protocolVcommon_dylan;
D writeYstreams_protocolVcommon_dylan = &KwriteYstreams_protocolVcommon_dylan;
D force_outputYstreams_protocolVcommon_dylan = &Kforce_outputYstreams_protocolVcommon_dylan;
D wait_for_io_completionYstreams_protocolVcommon_dylan = &Kwait_for_io_completionYstreams_protocolVcommon_dylan;
D synchronize_outputYstreams_protocolVcommon_dylan = &Ksynchronize_outputYstreams_protocolVcommon_dylan;
D discard_outputYstreams_protocolVcommon_dylan = &Kdiscard_outputYstreams_protocolVcommon_dylan;

/* Objects */

_KLclassGVKd KLstream_errorGYstreams_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K213,
  &K206,
  (D) 1,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLstream_errorGYstreams_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K206,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KmakeVKdMcommon_dylanM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K200,
  &key_mep_5,
  &KmakeVKdMcommon_dylanM0I,
  &K201
};

_KLincremental_generic_functionGVKe Kdiscard_outputYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K10,
  &KPfalseVKi,
  &K11,
  &K9,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Kdiscard_outputYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &Kdiscard_outputYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K10 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K12
};

static _KLbyte_stringGVKd_14 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "discard-output"
};

static _KLsimple_object_vectorGVKd_1 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLincremental_generic_functionGVKe Ksynchronize_outputYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K10,
  &KPfalseVKi,
  &K17,
  &K16,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Ksynchronize_outputYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &Ksynchronize_outputYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "synchronize-output"
};

_KLincremental_generic_functionGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K10,
  &KPfalseVKi,
  &K22,
  &K21,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "wait-for-io-completion"
};

_KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K27,
  &KPfalseVKi,
  &K28,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K27,
  &key_mep_3,
  &Kforce_outputYstreams_protocolVcommon_dylanMM0I,
  &K32
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kforce_outputYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K27 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K12,
  &K29,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_12 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "force-output"
};

static _KLsimple_object_vectorGVKd_1 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsynchronizeQ_
};

static _KLsymbolGVKd KJsynchronizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K31
};

static _KLbyte_stringGVKd_12 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsynchronizeQ_,
  &KPfalseVKi
};

_KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K37,
  &KPfalseVKi,
  &K38,
  &K36,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K37,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMM0I,
  &K45
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &KwriteYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K37 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K39,
  &K40,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_5 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "write"
};

static _KLsimple_object_vectorGVKd_2 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

_KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K42,
  (D) 1,
  &K43,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K44
};

static _KLbyte_stringGVKd_13 K43 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "write-element"
};

static _KLsimple_object_vectorGVKd_2 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_4 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

_KLincremental_generic_functionGVKe Kstream_contents_asYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K47,
  &KPfalseVKi,
  &K48,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureAvaluesGVKi K47 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K49,
  &K50,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_18 K48 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "stream-contents-as"
};

static _KLsimple_object_vectorGVKd_2 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJclear_contentsQ_
};

static _KLsymbolGVKd KJclear_contentsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K52
};

static _KLbyte_stringGVKd_15 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "clear-contents?"
};

_KLincremental_generic_functionGVKe Kstream_contentsYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K54,
  &KPfalseVKi,
  &K55,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureAvaluesGVKi K54 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K12,
  &K50,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_15 K55 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "stream-contents"
};

_KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K57,
  &KPfalseVKi,
  &K58,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K12,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_23 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "stream-input-available?"
};

_KLincremental_generic_functionGVKe Kdiscard_inputYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K10,
  &KPfalseVKi,
  &K63,
  &K62,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Kdiscard_inputYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Kdiscard_inputYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "discard-input"
};

_KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K68,
  (D) 1,
  &K69,
  &K67,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K68,
  &key_mep_6,
  &Kread_intoXYstreams_protocolVcommon_dylanMM0I,
  &K140
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_intoXYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K68 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K70,
  &K71,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_10 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "read-into!"
};

static _KLsimple_object_vectorGVKd_3 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K73
};

static _KLbyte_stringGVKd_16 K73 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

_KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K137,
  (D) 1,
  &K138,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K136
};

static _KLsymbolGVKd KJsequence_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K135
};

_KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K134,
  &K79,
  (D) 1,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLincomplete_read_errorGYstreams_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K79,
  (D) 2049,
  21,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K79 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102101,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylanW,
  &KPfalseVKi,
  &K80,
  (D) -3,
  &KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K83,
  &K84,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K85,
  &K80,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG,
  &Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_read_errorG
};

_KLkeyword_methodGVKe KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K130,
  &key_mep_2,
  &KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K131
};

static _KLsimple_object_vectorGVKd_1 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_8 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_read_errorG
};

_KLinstance_slot_descriptorGVKe Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan,
  &KJsequence_,
  &Kstream_error_sequenceYstreams_protocolVcommon_dylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_read_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan,
  &KJcount_,
  &Kstream_error_countYstreams_protocolVcommon_dylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kstream_error_countYstreams_protocolVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K93,
  &K91,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_error_countYstreams_protocolVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_read_errorG
};

_KLgetter_methodGVKi Kstream_error_countYstreams_protocolVcommon_dylanMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_write_errorG
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_countYstreams_protocolVcommon_dylanMM0,
  &K92
};

static _KLpairGVKd K92 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_countYstreams_protocolVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "stream-error-count"
};

_KLinstance_slot_descriptorGVKe Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_write_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan,
  &KJcount_,
  &Kstream_error_countYstreams_protocolVcommon_dylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLclassGVKd KLincomplete_write_errorGYstreams_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K125,
  &K97,
  (D) 1,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLincomplete_write_errorGYstreams_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K97,
  (D) 2049,
  17,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K97 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102097,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylanW,
  &KPfalseVKi,
  &K98,
  (D) -3,
  &KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K83,
  &K101,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K102,
  &K98,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_write_errorG
};

_KLkeyword_methodGVKe KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K121,
  &key_mep_2,
  &KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K122
};

static _KLsimple_object_vectorGVKd_8 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_1 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_error_countYstreams_protocolVcommon_dylanHLincomplete_write_errorG
};

_KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K120,
  &K105,
  (D) 1,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLend_of_stream_errorGYstreams_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K105,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K105 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylanW,
  &KPfalseVKi,
  &K106,
  (D) -3,
  &KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K109,
  &K110,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K224,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K106,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG
};

_KLkeyword_methodGVKe KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K112,
  &key_mep_2,
  &KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K113
};

static _KLsimple_object_vectorGVKd_1 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstream_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_7 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_23 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K112 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K114,
  &KDsignature_LobjectG_typesVKi,
  &K83
};

static _KLsimple_object_vectorGVKd_6 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJstream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJstream_
};

_KLinstance_slot_descriptorGVKe Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KJstream_,
  &Kstream_error_streamYstreams_protocolVcommon_dylan,
  &KPfalseVKi,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsealed_generic_functionGVKe Kstream_error_streamYstreams_protocolVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K119,
  &K118,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_error_streamYstreams_protocolVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_streamYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "stream-error-stream"
};

static _KLbyte_stringGVKd_21 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<end-of-stream-error>"
};

static _KLkeyword_signatureAvaluesGVKi K121 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K123,
  &KDsignature_LobjectG_typesVKi,
  &K124
};

static _KLsimple_object_vectorGVKd_8 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJstream_,
  &KPunboundVKi,
  &KJcount_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJstream_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_1 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_24 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<incomplete-write-error>"
};

_KLsealed_generic_functionGVKe Kstream_error_sequenceYstreams_protocolVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K129,
  &K128,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_error_sequenceYstreams_protocolVcommon_dylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_error_sequenceYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K129 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "stream-error-sequence"
};

static _KLkeyword_signatureAvaluesGVKi K130 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K132,
  &KDsignature_LobjectG_typesVKi,
  &K133
};

static _KLsimple_object_vectorGVKd_10 K131 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJstream_,
  &KPunboundVKi,
  &KJsequence_,
  &KPunboundVKi,
  &KJcount_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_5 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJstream_,
  &KJsequence_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_1 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_23 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<incomplete-read-error>"
};

static _KLbyte_stringGVKd_8 K135 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "sequence"
};

static _KLbyte_stringGVKd_6 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLkeyword_signatureGVKe K137 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K12,
  &K139,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_12 K138 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "read-element"
};

static _KLsimple_object_vectorGVKd_1 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLsimple_object_vectorGVKd_4 K140 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

_KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K145,
  &KPfalseVKi,
  &K146,
  &K144,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K145,
  &key_mep_4,
  &KreadYstreams_protocolVcommon_dylanMM0I,
  &K148
};

static _KLpairGVKd K144 = {
  &KLpairGVKdW /* wrapper */,
  &KreadYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K145 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K147,
  &K139,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_4 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "read"
};

static _KLsimple_object_vectorGVKd_2 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_2 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

_KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K137,
  &KPfalseVKi,
  &K150,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_4 K150 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "peek"
};

_KLincremental_generic_functionGVKe Kunread_elementYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K152,
  &KPfalseVKi,
  &K153,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureGVKe K152 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K44
};

static _KLbyte_stringGVKd_14 K153 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "unread-element"
};

_KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K155,
  &KPfalseVKi,
  &K156,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureGVKe K155 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K44,
  &K157,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_22 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "adjust-stream-position"
};

static _KLsimple_object_vectorGVKd_1 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfrom_
};

_KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K159,
  &KPfalseVKi,
  &K160,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureGVKe K159 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K161
};

static _KLbyte_stringGVKd_22 K160 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "stream-position-setter"
};

static _KLsimple_object_vectorGVKd_2 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K163,
  &KPfalseVKi,
  &K164,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureGVKe K163 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K12
};

static _KLbyte_stringGVKd_15 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "stream-position"
};

_KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K169,
  &K167,
  (D) 1,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K167,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K167 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K12,
  &K168,
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

static _KLsimple_object_vectorGVKd_6 K168 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_21 K169 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<positionable-stream>"
};

_KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K174,
  &KPfalseVKi,
  &K175,
  &K173,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K179,
  &Kstream_sizeYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sizeYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K174 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K12,
  &K176
};

static _KLbyte_stringGVKd_11 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-size"
};

static _KLsimple_object_vectorGVKd_1 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K177
};

static _KLunionGVKe K177 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K178,
  &KLabstract_integerGVKe
};

static _KLsingletonGVKd K178 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K179 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K12,
  &K180
};

static _KLsimple_object_vectorGVKd_1 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K178
};

_KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K57,
  &KPfalseVKi,
  &K182,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_14 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "stream-at-end?"
};

_KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K57,
  &KPfalseVKi,
  &K187,
  &K186,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K57,
  &Kstream_openQYstreams_protocolVcommon_dylanMM0I
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_openQYstreams_protocolVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "stream-open?"
};

_KLincremental_generic_functionGVKe Kopen_file_streamYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K189,
  &KPfalseVKi,
  &K190,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLkeyword_signatureAvaluesGVKi K189 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K12
};

static _KLbyte_stringGVKd_16 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "open-file-stream"
};

_KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K192,
  &KPfalseVKi,
  &K193,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_protocol_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsignatureAvaluesGVKi K192 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K12,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_19 K193 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "stream-element-type"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF197 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K199,
  &Kanonymous_of_makeF197I,
  (D) 1
};

static _KLbyte_stringGVKd_26 K196 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "Condition %s for stream %s"
};

static _KLbyte_stringGVKd_15 K198 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureGVKe K199 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K200 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39584773,
  &K202,
  &K203,
  &K204,
  &K109
};

static _KLsimple_object_vectorGVKd_6 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstream_,
  &KPfalseVKi,
  &KJformat_string_,
  &KPfalseVKi,
  &KJformat_arguments_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K205
};

static _KLsimple_object_vectorGVKd_3 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstream_,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_3 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsubclassGVKe K205 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLstream_errorGYstreams_protocolVcommon_dylan
};

static _KLimplementation_classGVKe K206 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835789,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLstream_errorGYstreams_protocolVcommon_dylanW,
  &KPfalseVKi,
  &K106,
  (D) -3,
  &KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K209,
  &K210,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K223,
  &KPempty_vectorVKi,
  &K211,
  &K106,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K212,
  &key_mep_2,
  &KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K113
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLstream_errorGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_1 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG
};

static _KLkeyword_signatureAvaluesGVKi K212 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K114,
  &KDsignature_LobjectG_typesVKi,
  &K109
};

static _KLbyte_stringGVKd_14 K213 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<stream-error>"
};

_KLkeyword_methodGVKe KmakeVKdMcommon_dylanM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K218,
  &key_mep_3,
  &KmakeVKdMcommon_dylanM1I,
  &K219
};

static _KLbyte_stringGVKd_16 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "End of stream %s"
};

static _KLkeyword_signatureAvaluesGVKi K218 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K220,
  &K221,
  &K12,
  &K83
};

static _KLsimple_object_vectorGVKd_2 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstream_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K220 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K222
};

static _KLsimple_object_vectorGVKd_1 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJstream_
};

static _KLsingletonGVKd K222 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan,
  &KPempty_listVKi
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan,
  &K225
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan,
  &KPempty_listVKi
};

/* Code */

D KmakeVKdMcommon_dylanM0I (D class_, D args_, D stream_, D format_string_, D format_arguments_) {
  D streamF6;
  D T7;
  D T8;
  D format_argumentsF9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  T15 = primitive_copy_vector(args_);
  T13 = primitive_next_methods_parameter();
  T14 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF197, 3, T15, T13, class_);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  primitive_type_check(stream_, &KLstreamGYcommon_extensionsVcommon_dylan);
  streamF6 = stream_;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  T16 = primitive_idQ(format_arguments_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:22
    if (format_string_ != &KPfalseVKi) {
      T7 = &KPempty_vectorVKi;
    } else {
      T7 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:22
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
    T8 = T7;
    format_argumentsF9 = T8;
  } else {
    format_argumentsF9 = format_arguments_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:28
  if (format_string_ != &KPfalseVKi) {
    T10 = format_string_;
  } else {
    T10 = &K196;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:28
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:29
  if (format_argumentsF9 != &KPfalseVKi) {
    T11 = format_argumentsF9;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:29
    T17.vector_element_[0] = class_;
    T17.vector_element_[1] = streamF6;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:29
    T18 = primitive_copy_vector(&T17);
    T11 = T18;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:29
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:25
  T19_0 = APPLY8(T14, class_, IKJstream_, streamF6, &KJformat_string_, T10, &KJformat_arguments_, T11, T15);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  T12_0 = T19_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T19_0);
    primitive_type_check(T12_0, &KLstream_errorGYstreams_protocolVcommon_dylan);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdiscard_outputYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:206
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:207
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:206
  MV_SET_COUNT(0);
  return(T2);
}

D Ksynchronize_outputYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:201
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:202
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:201
  MV_SET_COUNT(0);
  return(T2);
}

D Kwait_for_io_completionYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:196
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:197
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:196
  MV_SET_COUNT(0);
  return(T2);
}

D Kforce_outputYstreams_protocolVcommon_dylanMM0I (D stream_, D Urest_, D synchronizeQ_) {
  D T4;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:189
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:189
  primitive_type_check(synchronizeQ_, &KLbooleanGVKd);
  synchronizeQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:192
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:189
  MV_SET_COUNT(0);
  return(T4);
}

D KwriteYstreams_protocolVcommon_dylanMM0I (D stream_, D elements_, D Urest_, D start_index_, D end_index_) {
  D T6;
  D T7;
  D i_T, i_;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:177
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
  if (end_index_ != &KPfalseVKi) {
    T7 = end_index_;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(elements_);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
  i_T = start_index_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T9 = CONGRUENT_CALL2(i_, T7);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:181
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T10 = CONGRUENT_CALL3(elements_, i_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:181
      CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(stream_, T10);
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T11 = CONGRUENT_CALL2(i_, (D) 5);
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:180
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:183
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:177
  MV_SET_COUNT(0);
  return(T12);
}

D Kdiscard_inputYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:156
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:157
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:156
  MV_SET_COUNT(0);
  return(T2);
}

D Kread_intoXYstreams_protocolVcommon_dylanMM0I (D stream_, D n_, D sequence_, D Urest_, D start_, D on_end_of_stream_) {
  D T7;
  D on_end_of_streamF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D elt_;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_2 T25 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T26;
  D T27;
  D iF28T, iF28;
  D T29;
  _KLsimple_object_vectorGVKd_4 T30 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T31 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T32;
  D T33_0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
  T11 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:132
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T9 = CONGRUENT_CALL2(n_, start_);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:132
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T10 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:132
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T12 = CONGRUENT_CALL2(T9, T10);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:132
  if (T12 != &KPfalseVKi) {
    T13 = T9;
  } else {
    T13 = T10;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:132
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:138
  iF28T = start_;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:138
    iF28 = iF28T;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:134
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T14 = CONGRUENT_CALL2(iF28, T13);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:134
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:135
      T25.vector_element_[0] = IKJon_end_of_stream_;
      T25.vector_element_[1] = DunfoundYcommon_extensionsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:135
      CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
      elt_ = CONGRUENT_CALL2(stream_, &T25);
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:136
      T26 = primitive_idQ(elt_,DunfoundYcommon_extensionsVcommon_dylan);
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:136
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:139
        T29 = primitive_idQ(on_end_of_streamF8,DunsuppliedYcommon_extensionsVcommon_dylan);
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:136
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:144
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T18 = CONGRUENT_CALL2(iF28, start_);
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:145
          T30.vector_element_[0] = &KJstart_;
          T30.vector_element_[1] = start_;
          T30.vector_element_[2] = &KJend_;
          T30.vector_element_[3] = iF28;
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:145
          CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
          T19 = CONGRUENT_CALL2(sequence_, &T30);
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:142
          T31.vector_element_[0] = IKJstream_;
          T31.vector_element_[1] = stream_;
          T31.vector_element_[2] = &KJcount_;
          T31.vector_element_[3] = T18;
          T31.vector_element_[4] = IKJsequence_;
          T31.vector_element_[5] = T19;
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:142
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T20 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T31);
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:142
          T32 = KsignalVKdMM0I(T20, &KPempty_vectorVKi);
          T21 = T32;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:140
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T17 = CONGRUENT_CALL2(iF28, start_);
          T21 = T17;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:136
        T22 = T21;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:137
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(elt_, sequence_, iF28);
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:138
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T16 = CONGRUENT_CALL2(iF28, (D) 5);
        // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:138
        iF28T = T16;
        goto L0;
        T22 = T27;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:136
      T24 = T22;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:148
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T23 = CONGRUENT_CALL2(iF28, start_);
      T24 = T23;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:134
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:138
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:133
  T33_0 = T24;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:128
  MV_SET_COUNT(1);
  return(T33_0);
}

D KLincomplete_read_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_, D Uunique_stream_error_sequence_, D Uunique_stream_error_count_) {
  D T8;
  D Uunique_stream_error_streamF9;
  D T10;
  D Uunique_stream_error_sequenceF11;
  D T12;
  D Uunique_stream_error_countF13;
  D T14;
  D Uunique_stream_error_streamF15;
  D T16_0;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  T17 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = IKJstream_;
    T19 = KerrorVKdMM1I(&K111, &T18);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
    T8 = T19;
    Uunique_stream_error_streamF9 = T8;
  } else {
    Uunique_stream_error_streamF9 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  T20 = primitive_idQ(Uunique_stream_error_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = IKJsequence_;
    T22 = KerrorVKdMM1I(&K111, &T21);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
    T10 = T22;
    Uunique_stream_error_sequenceF11 = T10;
  } else {
    Uunique_stream_error_sequenceF11 = Uunique_stream_error_sequence_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  T23 = primitive_idQ(Uunique_stream_error_count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJcount_;
    T25 = KerrorVKdMM1I(&K111, &T24);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
    T12 = T25;
    Uunique_stream_error_countF13 = T12;
  } else {
    Uunique_stream_error_countF13 = Uunique_stream_error_count_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  T14 = primitive_object_allocate_filled(6,&KLincomplete_read_errorGYstreams_protocolVcommon_dylanW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T14, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T14, 1);
  primitive_type_check(Uunique_stream_error_streamF9, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF15 = Uunique_stream_error_streamF9;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF15, T14, 2);
  SLOT_VALUE_SETTER(Uunique_stream_error_sequenceF11, T14, 3);
  SLOT_VALUE_SETTER(Uunique_stream_error_countF13, T14, 4);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T16_0 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:46
  MV_SET_COUNT(1);
  return(T16_0);
}

D KLincomplete_write_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_, D Uunique_stream_error_count_) {
  D T7;
  D Uunique_stream_error_streamF8;
  D T9;
  D Uunique_stream_error_countF10;
  D T11;
  D Uunique_stream_error_streamF12;
  D T13_0;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  T14 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  if (T14 != &KPfalseVKi) {
    T15.vector_element_[0] = IKJstream_;
    T16 = KerrorVKdMM1I(&K111, &T15);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
    T7 = T16;
    Uunique_stream_error_streamF8 = T7;
  } else {
    Uunique_stream_error_streamF8 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  T17 = primitive_idQ(Uunique_stream_error_count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = &KJcount_;
    T19 = KerrorVKdMM1I(&K111, &T18);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
    T9 = T19;
    Uunique_stream_error_countF10 = T9;
  } else {
    Uunique_stream_error_countF10 = Uunique_stream_error_count_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  T11 = primitive_object_allocate_filled(5,&KLincomplete_write_errorGYstreams_protocolVcommon_dylanW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T11, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T11, 1);
  primitive_type_check(Uunique_stream_error_streamF8, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF12 = Uunique_stream_error_streamF8;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF12, T11, 2);
  SLOT_VALUE_SETTER(Uunique_stream_error_countF10, T11, 3);
  APPLY2(&KinitializeVKd, T11, init_args_);
  T13_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:53
  MV_SET_COUNT(1);
  return(T13_0);
}

D KLend_of_stream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_) {
  D T6;
  D Uunique_stream_error_streamF7;
  D T8;
  D Uunique_stream_error_streamF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
  T11 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = IKJstream_;
    T13 = KerrorVKdMM1I(&K111, &T12);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
    T6 = T13;
    Uunique_stream_error_streamF7 = T6;
  } else {
    Uunique_stream_error_streamF7 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
  T8 = primitive_object_allocate_filled(4,&KLend_of_stream_errorGYstreams_protocolVcommon_dylanW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  primitive_type_check(Uunique_stream_error_streamF7, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF9 = Uunique_stream_error_streamF7;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF9, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T10_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:34
  MV_SET_COUNT(1);
  return(T10_0);
}

D KreadYstreams_protocolVcommon_dylanMM0I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D T7_0;
  D T8;
  D T9_0;
  D elements_;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
  T8 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:112
  T9_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, n_);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:112
  elements_ = T9_0;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:113
  T11 = primitive_idQ(on_end_of_streamF6,DunsuppliedYcommon_extensionsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:113
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:116
    CONGRUENT_CALL_PROLOG(&Kread_intoXYstreams_protocolVcommon_dylan, 4);
    CONGRUENT_CALL4(stream_, n_, elements_, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:114
    T12.vector_element_[0] = IKJon_end_of_stream_;
    T12.vector_element_[1] = on_end_of_streamF6;
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:114
    CONGRUENT_CALL_PROLOG(&Kread_intoXYstreams_protocolVcommon_dylan, 4);
    CONGRUENT_CALL4(stream_, n_, elements_, &T12);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:118
  T7_0 = elements_;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:109
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kstream_sizeYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:79
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:80
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:79
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstream_openQYstreams_protocolVcommon_dylanMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:69
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:70
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:69
  MV_SET_COUNT(1);
  return(T2_0);
}

static D Kanonymous_of_makeF197I (D Unext_method_argsU_) {
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
    T14 = KerrorVKdMM1I(&K198, &KPempty_vectorVKi);
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

D KLstream_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_stream_error_stream_) {
  D T6;
  D Uunique_stream_error_streamF7;
  D T8;
  D Uunique_stream_error_streamF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  T11 = primitive_idQ(Uunique_stream_error_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = IKJstream_;
    T13 = KerrorVKdMM1I(&K111, &T12);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
    T6 = T13;
    Uunique_stream_error_streamF7 = T6;
  } else {
    Uunique_stream_error_streamF7 = Uunique_stream_error_stream_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  T8 = primitive_object_allocate_filled(4,&KLstream_errorGYstreams_protocolVcommon_dylanW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  primitive_type_check(Uunique_stream_error_streamF7, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_stream_error_streamF9 = Uunique_stream_error_streamF7;
  SLOT_VALUE_SETTER(Uunique_stream_error_streamF9, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T10_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  MV_SET_COUNT(1);
  return(T10_0);
}

D KmakeVKdMcommon_dylanM1I (D class_, D Urest_, D stream_) {
  D streamF4;
  D T5_0;
  D T6;
  _KLsimple_object_vectorGVKd_1 T7 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T8;
  _KLsimple_object_vectorGVKd_7 T9 = {&KLsimple_object_vectorGVKdW, (D) 29};
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:37
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:37
  primitive_type_check(stream_, &KLstreamGYcommon_extensionsVcommon_dylan);
  streamF4 = stream_;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:43
  T7.vector_element_[0] = streamF4;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:43
  T8 = primitive_copy_vector(&T7);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
  T9.vector_element_[0] = class_;
  T9.vector_element_[1] = IKJstream_;
  T9.vector_element_[2] = streamF4;
  T9.vector_element_[3] = &KJformat_string_;
  T9.vector_element_[4] = &K217;
  T9.vector_element_[5] = &KJformat_arguments_;
  T9.vector_element_[6] = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
  T12 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
    T15 = KerrorVKdMM1I(&K198, &KPempty_vectorVKi);
    T11 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
    T13 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
    T14 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
    T10 = MEP_APPLY1(T13, T14, &T9);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:40
  T16_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:37
  T5_0 = T16_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T16_0);
    primitive_type_check(T5_0, &KLend_of_stream_errorGYstreams_protocolVcommon_dylan);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:37
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_streams_protocol_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K32, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K29, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclear_contentsQ_);
    if (T0 != &KJclear_contentsQ_) {
      primitive_repeated_slot_value_setter(T0, &K50, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K148, 1, 0);
      IKJon_end_of_stream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K140, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K139, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K71, 1, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      primitive_repeated_slot_value_setter(T0, &K221, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K219, 1, 0);
      IKJstream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K203, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K201, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K132, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K131, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K123, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K122, 1, 4);
      primitive_slot_value_setter(T0, &Kstream_error_streamYstreams_protocolVcommon_dylanHLstream_errorG, 3);
      primitive_repeated_slot_value_setter(T0, &K114, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K113, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsequence_);
    if (T0 != &KJsequence_) {
      primitive_repeated_slot_value_setter(T0, &K132, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K131, 1, 6);
      IKJsequence_ = T0;
      primitive_slot_value_setter(T0, &Kstream_error_sequenceYstreams_protocolVcommon_dylanHLincomplete_read_errorG, 3);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:8
  T0 = KPadd_classVKeI(&KLstream_errorGYstreams_protocolVcommon_dylan);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_streams_protocol_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:17
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I5;
}
I5:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/streams-protocol.dylan:37
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMcommon_dylanM1, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I216;
}
I216:

  return;
}


/* eof */
