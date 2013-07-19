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
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
} _KLbasic_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

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
define__KLstandalone_domainGVKe(1);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D Pinner_stream_;
  D circular_first_passQ_;
  D circular_references_;
  D circular_next_id_;
} _KLcircular_print_streamGYprint_internalsVio;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D Pinner_stream_;
} _KLwrapper_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D Pinner_stream_;
} _KLsimple_wrapper_streamGYstreams_internalsVio;


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
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsealed_generic_functionGVKe Kouter_stream_setterYstreamsVio;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLincremental_generic_functionGVKe Kread_toYstreamsVio;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe Kread_throughYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_to_endYstreamsVio;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLincremental_generic_functionGVKe Kskip_throughYstreamsVio;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLincremental_generic_functionGVKe Kread_lineYstreamsVio;
extern _KLincremental_generic_functionGVKe Kread_line_intoXYstreamsVio;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLincremental_generic_functionGVKe Kwrite_lineYstreamsVio;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLincremental_generic_functionGVKe Kstream_directionYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_limitYstreamsVio;
extern _KLsealed_generic_functionGVKe Kstream_sequence_classYstreamsVio;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D, D);
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLincremental_generic_functionGVKe Kstream_lockedQYstreamsVio;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLincremental_generic_functionGVKe Kslot_initializedQVKd;
extern _KLsealed_generic_functionGVKe Kouter_streamYstreamsVio;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLkeyword_methodGVKe KinitializeVKdMioM0;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kstream_contents_asYstreams_protocolVcommon_dylan;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_contentsYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdiscard_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Ksynchronize_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdiscard_inputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kunread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
D KPadd_nonsiblinged_domainVKnI (D, D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLsymbolGVKd KJabortQ_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLsymbolGVKd KJfrom_;
extern _KLclassGVKd KLcircular_print_streamGYprint_internalsVio;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kunlock_streamYstreamsVioMM1;
D Kunlock_streamYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Klock_streamYstreamsVioMM1;
D Klock_streamYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Kstream_lockedQYstreamsVioMM1;
D Kstream_lockedQYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM3;
D Kstream_sequence_classYstreamsVioMM3I (D);
extern _KLsimple_methodGVKe Kstream_limitYstreamsVioMM2;
D Kstream_limitYstreamsVioMM2I (D);
extern _KLsimple_methodGVKe Kstream_directionYstreams_internalsVioMM1;
D Kstream_directionYstreams_internalsVioMM1I (D);
extern _KLclassGVKd KLwrapper_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLwrapper_streamGYstreamsVioW;
extern _KLsimple_methodGVKe Knew_lineYstreamsVioMM1;
D Knew_lineYstreamsVioMM1I (D);
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM2;
D Kwrite_lineYstreamsVioMM2I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM2;
D Kread_line_intoXYstreamsVioMM2I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_lineYstreamsVioMM2;
D Kread_lineYstreamsVioMM2I (D, D, D);
extern _KLkeyword_methodGVKe Kskip_throughYstreamsVioMM1;
D Kskip_throughYstreamsVioMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kread_to_endYstreamsVioMM1;
D Kread_to_endYstreamsVioMM1I (D);
extern _KLkeyword_methodGVKe Kread_throughYstreamsVioMM1;
D Kread_throughYstreamsVioMM1I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_toYstreamsVioMM1;
D Kread_toYstreamsVioMM1I (D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kinner_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kinner_stream_setterYstreamsVio;
extern _KLinstance_slot_descriptorGVKe KPinner_streamYstreams_internalsVioHLwrapper_streamG;
static _KLsymbolGVKd KJinner_stream_;
extern _KLsealed_generic_functionGVKe KPinner_streamYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe KPinner_stream_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi KPinner_stream_setterYstreams_internalsVioMM0;
static _KLpairGVKd K37;
static _KLbyte_stringGVKd_20 K38;
extern _KLgetter_methodGVKi KPinner_streamYstreams_internalsVioMM0;
static _KLpairGVKd K40;
static _KLbyte_stringGVKd_13 K41;
static _KLbyte_stringGVKd_12 K42;
extern _KLsimple_methodGVKe Kinner_stream_setterYstreamsVioMM0;
D Kinner_stream_setterYstreamsVioMM0I (D, D);
static _KLpairGVKd K45;
static _KLsignatureAvaluesGVKi K46;
static _KLbyte_stringGVKd_19 K47;
static _KLsimple_object_vectorGVKd_2 K48;
static _KLsimple_object_vectorGVKd_1 K49;
extern _KLsimple_methodGVKe Kinner_streamYstreamsVioMM0;
D Kinner_streamYstreamsVioMM0I (D);
static _KLpairGVKd K52;
static _KLsignatureAvaluesGVKi K53;
static _KLsimple_object_vectorGVKd_1 K54;
static _KLkeyword_signatureAvaluesGVKi K55;
static _KLsimple_object_vectorGVKd_4 K56;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLsimple_object_vectorGVKd_2 K60;
static _KLsimple_object_vectorGVKd_2 K61;
static _KLsignatureAvaluesGVKi K62;
static _KLkeyword_signatureAvaluesGVKi K63;
static _KLsimple_object_vectorGVKd_2 K64;
static _KLsimple_object_vectorGVKd_1 K65;
static _KLkeyword_signatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_2 K67;
static _KLsimple_object_vectorGVKd_1 K68;
static _KLkeyword_signatureAvaluesGVKi K69;
static _KLsimple_object_vectorGVKd_6 K70;
static _KLsymbolGVKd KJgrowQ_;
static _KLbyte_stringGVKd_5 K72;
static _KLsimple_object_vectorGVKd_2 K73;
static _KLsimple_object_vectorGVKd_3 K74;
static _KLkeyword_signatureGVKe K75;
static _KLsimple_object_vectorGVKd_4 K76;
static _KLsimple_object_vectorGVKd_2 K77;
static _KLsignatureGVKe K78;
static _KLimplementation_classGVKe K79;
static _KLsimple_object_vectorGVKd_5 K80;
static _KLsimple_object_vectorGVKd_1 K81;
static _KLsimple_object_vectorGVKd_6 K82;
static _KLsimple_object_vectorGVKd_1 K83;
static _KLbyte_stringGVKd_16 K84;
static _KLsignatureAvaluesGVKi K85;
static _KLsignatureGVKe K86;
static _KLsubclassGVKe K87;
static _KLsignatureAvaluesGVKi K88;
static _KLsimple_object_vectorGVKd_1 K89;
static _KLsubclassGVKe K90;
extern _KLclassGVKd KLsimple_wrapper_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLsimple_wrapper_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K93;
extern _KLkeyword_methodGVKe KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K96;
static D K110I ();
static _KLbyte_stringGVKd_23 K98;
static _KLunionGVKe K99;
static _KLunionGVKe K100;
static _KLpairGVKd K101;
static _KLpairGVKd K102;
extern _KLkeyword_methodGVKe KinitializeVKdMioM4;
D KinitializeVKdMioM4I (D, D, D);
static _KLbyte_stringGVKd_15 K105;
static _KLkeyword_signatureGVKe K106;
static _KLsimple_object_vectorGVKd_2 K107;
static _KLsimple_object_vectorGVKd_1 K108;
static _KLsingletonGVKd K109;
static _KLkeyword_signatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_8 K112;
static _KLsymbolGVKd KJstream_lock_;
static _KLbyte_stringGVKd_11 K114;
static _KLsimple_object_vectorGVKd_4 K115;
static _KLsimple_object_vectorGVKd_1 K116;
static _KLbyte_stringGVKd_23 K117;
extern _KLkeyword_methodGVKe Kstream_contents_asYstreams_protocolVcommon_dylanMioM1;
D Kstream_contents_asYstreams_protocolVcommon_dylanMioM1I (D, D, D, D);
extern _KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM1;
D Kstream_contentsYstreams_protocolVcommon_dylanMioM1I (D, D, D);
extern _KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM1;
D Kstream_sizeYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1;
D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM3;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM3I (D, D);
extern _KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM1;
D Kstream_positionYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM2;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLsimple_methodGVKe Kstream_element_typeYstreams_protocolVcommon_dylanMioM1;
D Kstream_element_typeYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM1;
D Kstream_openQYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM3;
D KcloseYcommon_extensionsVcommon_dylanMioM3I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM1;
D Kdiscard_outputYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1;
D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM1;
D Kforce_outputYstreams_protocolVcommon_dylanMioM1I (D, D, D);
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM2;
D KwriteYstreams_protocolVcommon_dylanMioM2I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM2;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM2I (D, D);
extern _KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMioM1;
D Kdiscard_inputYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2;
D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM2;
D Kread_intoXYstreams_protocolVcommon_dylanMioM2I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM2;
D KreadYstreams_protocolVcommon_dylanMioM2I (D, D, D, D);
extern _KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM2;
D KpeekYstreams_protocolVcommon_dylanMioM2I (D, D, D);
extern _KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM1;
D Kunread_elementYstreams_protocolVcommon_dylanMioM1I (D, D);
extern _KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM2;
D Kread_elementYstreams_protocolVcommon_dylanMioM2I (D, D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_2;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_1;
extern _KLkeyword_methodGVKe KmakeVKdMioM2;
D KmakeVKdMioM2I (D class_, D initargs_);
static _KLkeyword_signatureAvaluesGVKi K192;
static _KLsimple_object_vectorGVKd_1 K193;
static _KLsingletonGVKd K194;
static _KLsingletonGVKd K195;
static _KLkeyword_signatureGVKe K196;
static _KLsignatureGVKe K197;
static _KLkeyword_signatureGVKe K198;
static _KLsimple_object_vectorGVKd_2 K199;
static _KLkeyword_signatureGVKe K200;
static _KLsimple_object_vectorGVKd_4 K201;
static _KLsimple_object_vectorGVKd_3 K202;
static _KLsimple_object_vectorGVKd_2 K203;
static _KLsignatureGVKe K204;
static _KLkeyword_signatureGVKe K205;
static _KLsimple_object_vectorGVKd_2 K206;
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLbyte_stringGVKd_12 K208;
static _KLkeyword_signatureGVKe K209;
static _KLsimple_object_vectorGVKd_2 K210;
static _KLsimple_object_vectorGVKd_1 K211;
static _KLkeyword_signatureGVKe K212;
static _KLsimple_object_vectorGVKd_6 K213;
static _KLsimple_object_vectorGVKd_3 K214;
static _KLsignatureAvaluesGVKi K215;
static _KLsignatureGVKe K216;
static _KLsimple_object_vectorGVKd_2 K217;
static _KLkeyword_signatureGVKe K218;
static _KLsimple_object_vectorGVKd_2 K219;
static _KLsimple_object_vectorGVKd_1 K220;
static _KLunionGVKe K221;
static _KLsignatureAvaluesGVKi K222;
static _KLsimple_object_vectorGVKd_1 K223;
static _KLkeyword_signatureAvaluesGVKi K224;
static _KLsimple_object_vectorGVKd_2 K225;
static _KLsymbolGVKd KJclear_contentsQ_;
static _KLbyte_stringGVKd_15 K227;
static _KLsimple_object_vectorGVKd_1 K228;
static _KLkeyword_signatureAvaluesGVKi K229;
static _KLsimple_object_vectorGVKd_2 K230;
static _KLpairGVKd K231;
static _KLpairGVKd K232;

/* Indirection variables */

static D IKJinner_stream_ = &KJinner_stream_;
static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJgrowQ_ = &KJgrowQ_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJsynchronizeQ_ = &KJsynchronizeQ_;
static D IKJclear_contentsQ_ = &KJclear_contentsQ_;

/* Variables */

D Lwrapper_streamGYstreamsVio = &KLwrapper_streamGYstreamsVio;
D Lsimple_wrapper_streamGYstreams_internalsVio = &KLsimple_wrapper_streamGYstreams_internalsVio;
D inner_streamYstreamsVio = &Kinner_streamYstreamsVio;
D inner_stream_setterYstreamsVio = &Kinner_stream_setterYstreamsVio;

/* Objects */

_KLsimple_methodGVKe Kunlock_streamYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Kunlock_streamYstreamsVioMM1I
};

_KLsimple_methodGVKe Klock_streamYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Klock_streamYstreamsVioMM1I
};

_KLsimple_methodGVKe Kstream_lockedQYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kstream_lockedQYstreamsVioMM1I
};

_KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &Kstream_sequence_classYstreamsVioMM3I
};

_KLsimple_methodGVKe Kstream_limitYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K86,
  &Kstream_limitYstreamsVioMM2I
};

_KLsimple_methodGVKe Kstream_directionYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kstream_directionYstreams_internalsVioMM1I
};

_KLclassGVKd KLwrapper_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K84,
  &K79,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLwrapper_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K79,
  (D) 1,
  21,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Knew_lineYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Knew_lineYstreamsVioMM1I
};

_KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K75,
  &key_mep_5,
  &Kwrite_lineYstreamsVioMM2I,
  &K76
};

_KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K69,
  &key_mep_6,
  &Kread_line_intoXYstreamsVioMM2I,
  &K70
};

_KLkeyword_methodGVKe Kread_lineYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K66,
  &key_mep_3,
  &Kread_lineYstreamsVioMM2I,
  &K67
};

_KLkeyword_methodGVKe Kskip_throughYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K63,
  &key_mep_4,
  &Kskip_throughYstreamsVioMM1I,
  &K64
};

_KLsimple_methodGVKe Kread_to_endYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K62,
  &Kread_to_endYstreamsVioMM1I
};

_KLkeyword_methodGVKe Kread_throughYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K55,
  &key_mep_5,
  &Kread_throughYstreamsVioMM1I,
  &K56
};

_KLkeyword_methodGVKe Kread_toYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K55,
  &key_mep_5,
  &Kread_toYstreamsVioMM1I,
  &K56
};

_KLincremental_generic_functionGVKe Kinner_streamYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K53,
  (D) 1,
  &K42,
  &K52,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kinner_stream_setterYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K46,
  (D) 1,
  &K47,
  &K45,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLinstance_slot_descriptorGVKe KPinner_streamYstreams_internalsVioHLwrapper_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLwrapper_streamGYstreamsVio,
  &KJinner_stream_,
  &KPinner_streamYstreams_internalsVio,
  &KPinner_stream_setterYstreams_internalsVio,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsymbolGVKd KJinner_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K42
};

_KLsealed_generic_functionGVKe KPinner_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K41,
  &K40,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPinner_stream_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K38,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPinner_stream_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPinner_streamYstreams_internalsVioHLwrapper_streamG
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &KPinner_stream_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "%inner-stream-setter"
};

_KLgetter_methodGVKi KPinner_streamYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPinner_streamYstreams_internalsVioHLwrapper_streamG
};

static _KLpairGVKd K40 = {
  &KLpairGVKdW /* wrapper */,
  &KPinner_streamYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "%inner-stream"
};

static _KLbyte_stringGVKd_12 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "inner-stream"
};

_KLsimple_methodGVKe Kinner_stream_setterYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K46,
  &Kinner_stream_setterYstreamsVioMM0I
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kinner_stream_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K48,
  &K49
};

static _KLbyte_stringGVKd_19 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "inner-stream-setter"
};

static _KLsimple_object_vectorGVKd_2 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLwrapper_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_1 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsimple_methodGVKe Kinner_streamYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K53,
  &Kinner_streamYstreamsVioMM0I
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Kinner_streamYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &K49
};

static _KLsimple_object_vectorGVKd_1 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLwrapper_streamGYstreamsVio
};

static _KLkeyword_signatureAvaluesGVKi K55 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34867209,
  &K59,
  &K60,
  &KDsignature_LobjectG_typesVKi,
  &K61
};

static _KLsimple_object_vectorGVKd_4 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJon_end_of_stream_,
  &KPfalseVKi,
  &KJtest_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K58
};

static _KLbyte_stringGVKd_16 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLwrapper_streamGYstreamsVio,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KJtest_
};

static _KLsimple_object_vectorGVKd_2 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLbooleanGVKd
};

static _KLsignatureAvaluesGVKi K62 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &KDsignature_LsequenceG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K63 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866185,
  &K59,
  &K65,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLkeyword_signatureAvaluesGVKi K66 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34867205,
  &K54,
  &K68,
  &KDsignature_LobjectG_typesVKi,
  &K61
};

static _KLsimple_object_vectorGVKd_2 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLkeyword_signatureAvaluesGVKi K69 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34867209,
  &K73,
  &K74,
  &KDsignature_LobjectG_typesVKi,
  &K61
};

static _KLsimple_object_vectorGVKd_6 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_,
  &KPfalseVKi,
  &KJon_end_of_stream_,
  &KPfalseVKi,
  &KJgrowQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJgrowQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K72
};

static _KLbyte_stringGVKd_5 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "grow?"
};

static _KLsimple_object_vectorGVKd_2 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLwrapper_streamGYstreamsVio,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_3 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstart_,
  &KJon_end_of_stream_,
  &KJgrowQ_
};

static _KLkeyword_signatureGVKe K75 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43253769,
  &K73,
  &K77,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KPfalseVKi,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsignatureGVKe K78 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K54
};

static _KLimplementation_classGVKe K79 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845013,
  &KLwrapper_streamGYstreamsVio,
  &KLwrapper_streamGYstreamsVioW,
  &KPfalseVKi,
  &K80,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K81,
  &K82,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K231,
  &KPempty_vectorVKi,
  &K83,
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
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &KPinner_streamYstreams_internalsVioHLwrapper_streamG
};

static _KLsimple_object_vectorGVKd_1 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLwrapper_streamGYstreamsVio,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KPinner_streamYstreams_internalsVioHLwrapper_streamG
};

static _KLbyte_stringGVKd_16 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<wrapper-stream>"
};

static _KLsignatureAvaluesGVKi K85 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K86 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K54
};

static _KLsubclassGVKe K87 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K88 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &K89
};

static _KLsimple_object_vectorGVKd_1 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K90
};

static _KLsubclassGVKe K90 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsequenceGVKd
};

_KLclassGVKd KLsimple_wrapper_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K117,
  &K93,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLsimple_wrapper_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K93,
  (D) 1,
  21,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K93 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102101,
  &KLsimple_wrapper_streamGYstreams_internalsVio,
  &KLsimple_wrapper_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K80,
  (D) -3,
  &KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K54,
  &K96,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K80,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K111,
  &key_mep_2,
  &KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K112
};

static _KLsimple_object_vectorGVKd_6 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLwrapper_streamGYstreamsVio,
  &KLsimple_wrapper_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_23 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLunionGVKe K99 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K109,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K100 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K109,
  &KLlockGYthreadsVdylan
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMioM0,
  &K102
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

_KLkeyword_methodGVKe KinitializeVKdMioM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K106,
  &key_mep_3,
  &KinitializeVKdMioM4I,
  &K107
};

static _KLbyte_stringGVKd_15 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K106 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K54,
  &K108,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJinner_stream_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJinner_stream_
};

static _KLsingletonGVKd K109 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K111 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K115,
  &KDsignature_LobjectG_typesVKi,
  &K116
};

static _KLsimple_object_vectorGVKd_8 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJouter_stream_,
  &KPunboundVKi,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJstream_lock_,
  &KPunboundVKi,
  &KJinner_stream_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K114
};

static _KLbyte_stringGVKd_11 K114 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_4 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJinner_stream_
};

static _KLsimple_object_vectorGVKd_1 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_wrapper_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_23 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<simple-wrapper-stream>"
};

_KLkeyword_methodGVKe Kstream_contents_asYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K229,
  &key_mep_4,
  &Kstream_contents_asYstreams_protocolVcommon_dylanMioM1I,
  &K225
};

_KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K224,
  &key_mep_3,
  &Kstream_contentsYstreams_protocolVcommon_dylanMioM1I,
  &K225
};

_KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K222,
  &Kstream_sizeYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K218,
  &key_mep_4,
  &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1I,
  &K219
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K216,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM3I
};

_KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K86,
  &Kstream_positionYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Kstream_element_typeYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K215,
  &Kstream_element_typeYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kstream_openQYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K212,
  &key_mep_5,
  &KcloseYcommon_extensionsVcommon_dylanMioM3I,
  &K213
};

_KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Kdiscard_outputYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K209,
  &key_mep_3,
  &Kforce_outputYstreams_protocolVcommon_dylanMioM1I,
  &K210
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K205,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM2I,
  &K76
};

_KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K204,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Kdiscard_inputYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2I
};

_KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K200,
  &key_mep_6,
  &Kread_intoXYstreams_protocolVcommon_dylanMioM2I,
  &K201
};

_KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K198,
  &key_mep_4,
  &KreadYstreams_protocolVcommon_dylanMioM2I,
  &K67
};

_KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K196,
  &key_mep_3,
  &KpeekYstreams_protocolVcommon_dylanMioM2I,
  &K67
};

_KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K197,
  &Kunread_elementYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K196,
  &key_mep_3,
  &Kread_elementYstreams_protocolVcommon_dylanMioM2I,
  &K67
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLsimple_wrapper_streamGYstreams_internalsVio
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &K195
};

_KLkeyword_methodGVKe KmakeVKdMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K192,
  &key_mep_2,
  &KmakeVKdMioM2I,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K192 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K193,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K116
};

static _KLsimple_object_vectorGVKd_1 K193 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K194
};

static _KLsingletonGVKd K194 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLwrapper_streamGYstreamsVio
};

static _KLsingletonGVKd K195 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_wrapper_streamGYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K196 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K54,
  &K68,
  &KDsignature_LobjectG_typesVKi
};

static _KLsignatureGVKe K197 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K59
};

static _KLkeyword_signatureGVKe K198 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254793,
  &K199,
  &K68,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K199 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLwrapper_streamGYstreamsVio,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K200 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254797,
  &K202,
  &K203,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KPfalseVKi,
  &KJon_end_of_stream_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLwrapper_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsignatureGVKe K204 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K59
};

static _KLkeyword_signatureGVKe K205 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43253769,
  &K206,
  &K77,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLwrapper_streamGYstreamsVio,
  &KLsequenceGVKd
};

static _KLsymbolGVKd KJsynchronizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K208
};

static _KLbyte_stringGVKd_12 K208 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLkeyword_signatureGVKe K209 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K54,
  &K211,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsynchronizeQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsynchronizeQ_
};

static _KLkeyword_signatureGVKe K212 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43253765,
  &K54,
  &K214,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJwaitQ_,
  &KPfalseVKi,
  &KJsynchronizeQ_,
  &KPfalseVKi,
  &KJabortQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K214 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJwaitQ_,
  &KJsynchronizeQ_,
  &KJabortQ_
};

static _KLsignatureAvaluesGVKi K215 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureGVKe K216 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K217
};

static _KLsimple_object_vectorGVKd_2 K217 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLwrapper_streamGYstreamsVio
};

static _KLkeyword_signatureGVKe K218 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254793,
  &K199,
  &K220,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfrom_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K220 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfrom_
};

static _KLunionGVKe K221 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K109,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K222 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K54,
  &K223
};

static _KLsimple_object_vectorGVKd_1 K223 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K221
};

static _KLkeyword_signatureAvaluesGVKi K224 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K54,
  &K228,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K225 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJclear_contentsQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJclear_contentsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K227
};

static _KLbyte_stringGVKd_15 K227 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "clear-contents?"
};

static _KLsimple_object_vectorGVKd_1 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJclear_contentsQ_
};

static _KLkeyword_signatureAvaluesGVKi K229 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866185,
  &K230,
  &K228,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K230 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLwrapper_streamGYstreamsVio
};

static _KLpairGVKd K231 = {
  &KLpairGVKdW /* wrapper */,
  &KLcircular_print_streamGYprint_internalsVio,
  &K232
};

static _KLpairGVKd K232 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_wrapper_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D Kunlock_streamYstreamsVioMM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:281
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:283
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:283
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:281
  MV_SET_COUNT(0);
  return(T3);
}

D Klock_streamYstreamsVioMM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:276
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:278
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:278
  CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:276
  MV_SET_COUNT(0);
  return(T3);
}

D Kstream_lockedQYstreamsVioMM1I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:271
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:273
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:273
  CONGRUENT_CALL_PROLOG(&Kstream_lockedQYstreamsVio, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:271
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_sequence_classYstreamsVioMM3I (D stream_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:288
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:290
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:290
  CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:288
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &K87);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:288
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstream_limitYstreamsVioMM2I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:296
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:298
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:298
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:296
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_directionYstreams_internalsVioMM1I (D stream_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:223
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:225
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:225
  CONGRUENT_CALL_PROLOG(&Kstream_directionYstreams_internalsVio, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:223
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLbooleanGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:223
  MV_SET_COUNT(1);
  return(T4_0);
}

D Knew_lineYstreamsVioMM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:195
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:196
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:196
  CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:195
  MV_SET_COUNT(0);
  return(T3);
}

D Kwrite_lineYstreamsVioMM2I (D stream_, D string_, D keys_, D Ustart_, D Uend_) {
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:192
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:192
  T7 = APPLY3(&Kwrite_lineYstreamsVio, T6, string_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:188
  MV_SET_COUNT(0);
  return(T7);
}

D Kread_line_intoXYstreamsVioMM2I (D stream_, D string_, D keys_, D start_, D on_end_of_stream_, D growQ_) {
  D T7;
  D T8_0;
  D T8_1;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:180
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:185
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:185
  T8_0 = APPLY3(&Kread_line_intoXYstreamsVio, T7, string_, keys_);
  T8_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:180
  MV_SET_ELT(1, T8_1);
  MV_SET_COUNT(2);
  return(T8_0);
}

D Kread_lineYstreamsVioMM2I (D stream_, D keys_, D on_end_of_stream_) {
  D T4;
  D T5_0;
  D T5_1;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:173
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:177
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:177
  T5_0 = APPLY2(&Kread_lineYstreamsVio, T4, keys_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:173
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

D Kskip_throughYstreamsVioMM1I (D stream_, D elt_, D keys_, D test_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:167
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:167
  T6_0 = APPLY3(&Kskip_throughYstreamsVio, T5, elt_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:163
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kread_to_endYstreamsVioMM1I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:157
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:160
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:160
  CONGRUENT_CALL_PROLOG(&Kread_to_endYstreamsVio, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:157
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kread_throughYstreamsVioMM1I (D stream_, D elt_, D keys_, D on_end_of_stream_, D test_) {
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:150
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:154
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:154
  T7_0 = APPLY3(&Kread_throughYstreamsVio, T6, elt_, keys_);
  T7_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:150
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D Kread_toYstreamsVioMM1I (D stream_, D elt_, D keys_, D on_end_of_stream_, D test_) {
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:143
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:147
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:147
  T7_0 = APPLY3(&Kread_toYstreamsVio, T6, elt_, keys_);
  T7_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:143
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D Kinner_stream_setterYstreamsVioMM0I (D stream_, D wrapper_stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:41
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:44
  SLOT_VALUE_SETTER(stream_, wrapper_stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:45
  CALL2(&Kouter_stream_setterYstreamsVio, wrapper_stream_, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:46
  T3_0 = stream_;
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:41
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinner_streamYstreamsVioMM0I (D wrapper_stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:32
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:34
  T2 = SLOT_VALUE_INITD(wrapper_stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:34
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:32
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_Pinner_stream_) {
  D T7;
  D T8;
  D Uunique_private_stream_lock_valueF9;
  D T10;
  D Uunique_Pinner_streamF11;
  D T12;
  D Uunique_outer_streamF13;
  D Uunique_outer_streamF14;
  D Uunique_private_stream_element_type_valueF15;
  D Uunique_private_stream_lock_valueF16;
  D Uunique_Pinner_streamF17;
  D T18_0;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  D T23;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  T19 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  if (T19 != &KPfalseVKi) {
    T7 = K110I();
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  T20 = primitive_idQ(Uunique_Pinner_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = IKJinner_stream_;
    T22 = KerrorVKdMM1I(&K98, &T21);
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
    T10 = T22;
    Uunique_Pinner_streamF11 = T10;
  } else {
    Uunique_Pinner_streamF11 = Uunique_Pinner_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  T12 = primitive_object_allocate_filled(6,&KLsimple_wrapper_streamGYstreams_internalsVioW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  T23 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T23 != &KPfalseVKi) {
    Uunique_outer_streamF14 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K99);
    Uunique_outer_streamF13 = Uunique_outer_stream_;
    Uunique_outer_streamF14 = Uunique_outer_streamF13;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF14, T12, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF15 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF15, T12, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T12, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K100);
  Uunique_private_stream_lock_valueF16 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF16, T12, 3);
  primitive_type_check(Uunique_Pinner_streamF11, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_Pinner_streamF17 = Uunique_Pinner_streamF11;
  SLOT_VALUE_SETTER(Uunique_Pinner_streamF17, T12, 4);
  MEP_APPLY2(&KinitializeVKdMioM4, &K101, T12, init_args_);
  T18_0 = T12;
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:16
  MV_SET_COUNT(1);
  return(T18_0);
}

static D K110I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D KinitializeVKdMioM4I (D wrapper_stream_, D Urest_, D stream_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:49
  T9 = primitive_copy_vector(Urest_);
  T8 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
  T10 = primitive_idQ(T8,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
    KerrorVKdMM1I(&K105, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
    T11 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
    T12 = SLOT_VALUE_INITD(T8, 1);
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
    MEP_CALL_PROLOG(T11, T12, 2);
    MEP_CALL2(T11, wrapper_stream_, T9);
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:51
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:52
  CALL2(&Kouter_stream_setterYstreamsVio, wrapper_stream_, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:53
  CONGRUENT_CALL_PROLOG(&Kslot_initializedQVKd, 2);
  T4 = CONGRUENT_CALL2(wrapper_stream_, &Kouter_streamYstreamsVio);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:53
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:53
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:54
    SLOT_VALUE_SETTER(wrapper_stream_, wrapper_stream_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:54
    T5 = &KPfalseVKi;
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:53
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:49
  MV_SET_COUNT(0);
  return(T7);
}

D Kstream_contents_asYstreams_protocolVcommon_dylanMioM1I (D type_, D stream_, D keys_, D clear_contentsQ_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:261
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:265
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:265
  T6_0 = APPLY3(&Kstream_contents_asYstreams_protocolVcommon_dylan, type_, T5, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:261
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kstream_contentsYstreams_protocolVcommon_dylanMioM1I (D stream_, D keys_, D clear_contentsQ_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:258
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:258
  T5_0 = APPLY2(&Kstream_contentsYstreams_protocolVcommon_dylan, T4, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:254
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kstream_sizeYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:249
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:251
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:251
  CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:249
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &K221);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:249
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1I (D stream_, D delta_, D keys_, D from_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:242
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:246
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:246
  T6_0 = APPLY3(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, T5, delta_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:242
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM3I (D position_, D stream_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:236
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:239
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:239
  CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
  T4_0 = CONGRUENT_CALL2(position_, T3);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:236
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstream_positionYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:231
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:233
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:233
  CONGRUENT_CALL_PROLOG(&Kstream_positionYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:231
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:218
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:220
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:220
  CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:218
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_element_typeYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:213
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:215
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:215
  CONGRUENT_CALL_PROLOG(&Kstream_element_typeYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:213
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_openQYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:208
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:210
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:210
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:208
  MV_SET_COUNT(1);
  return(T3_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM3I (D stream_, D keys_, D waitQ_, D synchronizeQ_, D abortQ_) {
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:202
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:205
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:205
  T7 = APPLY2(&KcloseYcommon_extensionsVcommon_dylan, T6, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:202
  MV_SET_COUNT(0);
  return(T7);
}

D Kdiscard_outputYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:135
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:137
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:137
  CONGRUENT_CALL_PROLOG(&Kdiscard_outputYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:135
  MV_SET_COUNT(0);
  return(T3);
}

D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:130
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:132
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:132
  CONGRUENT_CALL_PROLOG(&Ksynchronize_outputYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:130
  MV_SET_COUNT(0);
  return(T3);
}

D Kforce_outputYstreams_protocolVcommon_dylanMioM1I (D stream_, D Urest_, D synchronizeQ_) {
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:125
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:127
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:127
  T6.vector_element_[0] = IKJsynchronizeQ_;
  T6.vector_element_[1] = synchronizeQ_;
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:127
  CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
  T5 = CONGRUENT_CALL2(T4, &T6);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:125
  MV_SET_COUNT(0);
  return(T5);
}

D KwriteYstreams_protocolVcommon_dylanMioM2I (D stream_, D elements_, D keys_, D Ustart_, D Uend_) {
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:118
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:122
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:122
  T7 = APPLY3(&KwriteYstreams_protocolVcommon_dylan, T6, elements_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:118
  MV_SET_COUNT(0);
  return(T7);
}

D Kwrite_elementYstreams_protocolVcommon_dylanMioM2I (D stream_, D elt_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:113
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:115
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:115
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  T4 = CONGRUENT_CALL2(T3, elt_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:113
  MV_SET_COUNT(0);
  return(T4);
}

D Kdiscard_inputYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:105
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:107
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:107
  CONGRUENT_CALL_PROLOG(&Kdiscard_inputYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:105
  MV_SET_COUNT(0);
  return(T3);
}

D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:100
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:102
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:102
  CONGRUENT_CALL_PROLOG(&Kstream_input_availableQYstreams_protocolVcommon_dylan, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:100
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kread_intoXYstreams_protocolVcommon_dylanMioM2I (D stream_, D n_, D seq_, D keys_, D start_, D on_end_of_stream_) {
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:92
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:97
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:97
  T8_0 = APPLY4(&Kread_intoXYstreams_protocolVcommon_dylan, T7, n_, seq_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:92
  MV_SET_COUNT(1);
  return(T8_0);
}

D KreadYstreams_protocolVcommon_dylanMioM2I (D stream_, D n_, D keys_, D on_end_of_stream_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:85
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:89
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:89
  T6_0 = APPLY3(&KreadYstreams_protocolVcommon_dylan, T5, n_, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:85
  MV_SET_COUNT(1);
  return(T6_0);
}

D KpeekYstreams_protocolVcommon_dylanMioM2I (D stream_, D keys_, D on_end_of_stream_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:78
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:82
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:82
  T5_0 = APPLY2(&KpeekYstreams_protocolVcommon_dylan, T4, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:78
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kunread_elementYstreams_protocolVcommon_dylanMioM1I (D stream_, D elt_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:72
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:75
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:75
  CONGRUENT_CALL_PROLOG(&Kunread_elementYstreams_protocolVcommon_dylan, 2);
  T4_0 = CONGRUENT_CALL2(T3, elt_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:72
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kread_elementYstreams_protocolVcommon_dylanMioM2I (D stream_, D keys_, D on_end_of_stream_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:65
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:69
  CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:69
  T5_0 = APPLY2(&Kread_elementYstreams_protocolVcommon_dylan, T4, keys_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:65
  MV_SET_COUNT(1);
  return(T5_0);
}

D KmakeVKdMioM2I (D class_, D initargs_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:19
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:22
  T3_0 = APPLY2(&KLsimple_wrapper_streamGZ32ZconstructorYstreams_internalsVioMM0, &KLsimple_wrapper_streamGYstreams_internalsVio, initargs_);
  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:19
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_10Ewrapper_stream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJinner_stream_);
    if (T0 != &KJinner_stream_) {
      primitive_repeated_slot_value_setter(T0, &K115, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K112, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K108, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K107, 1, 0);
      IKJinner_stream_ = T0;
      primitive_slot_value_setter(T0, &KPinner_streamYstreams_internalsVioHLwrapper_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K203, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K201, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K74, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K70, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K68, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K67, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K60, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K56, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJgrowQ_);
    if (T0 != &KJgrowQ_) {
      primitive_repeated_slot_value_setter(T0, &K74, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K70, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K115, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K112, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K214, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K213, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K211, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K210, 1, 0);
      IKJsynchronizeQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclear_contentsQ_);
    if (T0 != &KJclear_contentsQ_) {
      primitive_repeated_slot_value_setter(T0, &K228, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K225, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_10Ewrapper_stream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:19
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I191;
}
I191:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:25
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_ioRD_1);
  goto I188;
}
I188:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:26
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_ioRD_2);
  goto I186;
}
I186:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:49
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I184;
}
I184:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:65
  T0 = KPadd_a_methodVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I183;
}
I183:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:72
  T0 = KPadd_a_methodVKnI(&Kunread_elementYstreams_protocolVcommon_dylan, &Kunread_elementYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I180;
}
I180:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:78
  T0 = KPadd_a_methodVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I177;
}
I177:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:85
  T0 = KPadd_a_methodVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I174;
}
I174:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:92
  T0 = KPadd_a_methodVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I171;
}
I171:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:100
  T0 = KPadd_a_methodVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I168;
}
I168:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:105
  T0 = KPadd_a_methodVKnI(&Kdiscard_inputYstreams_protocolVcommon_dylan, &Kdiscard_inputYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I165;
}
I165:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:113
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I162;
}
I162:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:118
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I159;
}
I159:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:125
  T0 = KPadd_a_methodVKnI(&Kforce_outputYstreams_protocolVcommon_dylan, &Kforce_outputYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I156;
}
I156:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:130
  T0 = KPadd_a_methodVKnI(&Ksynchronize_outputYstreams_protocolVcommon_dylan, &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I153;
}
I153:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:135
  T0 = KPadd_a_methodVKnI(&Kdiscard_outputYstreams_protocolVcommon_dylan, &Kdiscard_outputYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I150;
}
I150:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:202
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I147;
}
I147:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:208
  T0 = KPadd_a_methodVKnI(&Kstream_openQYstreams_protocolVcommon_dylan, &Kstream_openQYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I144;
}
I144:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:213
  T0 = KPadd_a_methodVKnI(&Kstream_element_typeYstreams_protocolVcommon_dylan, &Kstream_element_typeYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I141;
}
I141:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:218
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I138;
}
I138:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:231
  T0 = KPadd_a_methodVKnI(&Kstream_positionYstreams_protocolVcommon_dylan, &Kstream_positionYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I135;
}
I135:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:236
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I132;
}
I132:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:242
  T0 = KPadd_a_methodVKnI(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I129;
}
I129:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:249
  T0 = KPadd_a_methodVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I126;
}
I126:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:254
  T0 = KPadd_a_methodVKnI(&Kstream_contentsYstreams_protocolVcommon_dylan, &Kstream_contentsYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I123;
}
I123:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/wrapper-stream.dylan:261
  T0 = KPadd_a_methodVKnI(&Kstream_contents_asYstreams_protocolVcommon_dylan, &Kstream_contents_asYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I120;
}
I120:

  return;
}


/* eof */
