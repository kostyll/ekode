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
define__KLbyte_stringGVKd(59);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(23);

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

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
  D symbol_name_;
} _KLsymbolGVKd;

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
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

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
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_element_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_char_element_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLtyped_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLgeneral_typed_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;

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
  D actual_stream_input_buffer_;
  D actual_stream_output_buffer_;
} _KLbuffered_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
} _KLexternal_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D actual_stream_input_buffer_;
  D actual_stream_output_buffer_;
  D stream_shared_buffer_;
  D initial_position_;
  D current_position_;
  D final_position_;
  D stream_locator_;
  D accessor_;
} _KLfile_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D initial_position_;
  D current_position_;
  D final_position_;
  D stream_sequence_;
  D stream_limit_;
} _KLsequence_streamGYstreamsVio;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
} _KLbasic_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D initial_position_;
  D current_position_;
  D final_position_;
} _KLbasic_positionable_streamGYstreamsVio;


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
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
extern _KLsimple_methodGVKe Kstream_directionYstreams_internalsVioMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLsymbolGVKd KJinput_output_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJinput_;
extern _KLsymbolGVKd KJoutput_;
D KerrorVKdMM1I (D, D);
extern _KLsimple_methodGVKe Kstream_lockedQYstreamsVioMM1;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLincremental_generic_functionGVKe KownedQYthreadsVdylan;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM1;
extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM2;
extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM3;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLsimple_methodGVKe Kunlock_streamYstreamsVioMM1;
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLsimple_methodGVKe Klock_streamYstreamsVioMM1;
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLsimple_methodGVKe Kdo_force_outputYstreams_internalsVioMM1;
extern _KLsetter_methodGVKi Kstream_limit_setterYstreams_internalsVioMM0;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLgetter_methodGVKi Kstream_limitYstreamsVioMM1;
extern _KLsimple_methodGVKe Kstream_limitYstreamsVioMM2;
extern _KLsimple_methodGVKe Kwrite_fillYstreams_internalsVioMM1;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLsimple_methodGVKe Kread_skipYstreams_internalsVioMM1;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
D Kstream_limit_or_errorYstreams_internalsVioI (D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJfrom_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLbyte_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLbyte_char_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_char_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLtyped_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLtyped_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLgeneral_typed_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLgeneral_typed_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJabortQ_;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLincremental_generic_functionGVKe Kslot_initializedQVKd;
extern _KLclassGVKd KLwrapper_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLwrapper_streamGYstreamsVioW;
extern _KLsymbolGVKd KJdirection_;
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLclassGVKd KLexternal_streamGYstreams_internalsVio;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLclassGVKd KLsequence_streamGYstreamsVio;

/* Defined object declarations */

extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLkeyword_methodGVKe KinitializeVKdMioM0;
D KinitializeVKdMioM0I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kstream_element_typeYstreams_protocolVcommon_dylanMioM0;
D Kstream_element_typeYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM0;
D KcloseYcommon_extensionsVcommon_dylanMioM0I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM0;
D Kstream_openQYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM0;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW;
extern _KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM0;
D Kstream_positionYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM0;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM0I (D, D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM1;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM1I (D, D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM2;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM2I (D, D);
extern _KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0;
D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0;
D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe KwritableQYstreams_internalsVio;
D KwritableQYstreams_internalsVioI (D the_stream_);
extern _KLsimple_methodGVKe KclosedQYstreams_internalsVio;
D KclosedQYstreams_internalsVioI (D the_stream_);
extern _KLsimple_methodGVKe Kread_onlyQYstreams_internalsVio;
D Kread_onlyQYstreams_internalsVioI (D the_stream_);
extern _KLsimple_methodGVKe KreadableQYstreams_internalsVio;
D KreadableQYstreams_internalsVioI (D the_stream_);
extern _KLsimple_methodGVKe Kwrite_onlyQYstreams_internalsVio;
D Kwrite_onlyQYstreams_internalsVioI (D the_stream_);
extern _KLincremental_generic_functionGVKe Kstream_limitYstreamsVio;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLincremental_generic_functionGVKe Kstream_limit_setterYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kdo_force_outputYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLsealed_generic_functionGVKe Kstream_sequence_classYstreamsVio;
extern _KLincremental_generic_functionGVKe Kstream_lockedQYstreamsVio;
extern _KLincremental_generic_functionGVKe Kstream_directionYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kouter_stream_setterYstreamsVio;
extern _KLsealed_generic_functionGVKe Kouter_streamYstreamsVio;
extern _KLsealed_generic_functionGVKe Kcurrent_position_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kcurrent_position_setterYstreams_internalsVioMM0;
static _KLpairGVKd K68;
static _KLbyte_stringGVKd_23 K69;
extern _KLgetter_methodGVKi Kouter_streamYstreamsVioMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_12 K72;
extern _KLsetter_methodGVKi Kouter_stream_setterYstreamsVioMM0;
static _KLpairGVKd K74;
static _KLbyte_stringGVKd_19 K75;
extern _KLsimple_methodGVKe Kstream_directionYstreams_internalsVioMM0;
D Kstream_directionYstreams_internalsVioMM0I (D the_stream_);
static _KLpairGVKd K78;
static _KLpairGVKd K79;
static _KLsignatureGVKe K80;
static _KLbyte_stringGVKd_16 K81;
static _KLsimple_object_vectorGVKd_1 K82;
static _KLsymbolGVKd KJclosed_;
static _KLbyte_stringGVKd_32 K84;
static _KLbyte_stringGVKd_6 K85;
static _KLsignatureGVKe K86;
static _KLsimple_object_vectorGVKd_1 K87;
extern _KLsimple_methodGVKe Kstream_lockedQYstreamsVioMM0;
D Kstream_lockedQYstreamsVioMM0I (D);
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLsignatureAvaluesGVKi K92;
static _KLbyte_stringGVKd_14 K93;
extern _KLincremental_generic_functionGVKe Kstream_lockYstreamsVio;
extern _KLsimple_methodGVKe Kstream_lockYstreamsVioMM0;
D Kstream_lockYstreamsVioMM0I (D);
static _KLpairGVKd K97;
static _KLsignatureAvaluesGVKi K98;
static _KLbyte_stringGVKd_11 K99;
static _KLsimple_object_vectorGVKd_1 K100;
static _KLunionGVKe K101;
static _KLsingletonGVKd K102;
extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM0;
D Kstream_sequence_classYstreamsVioMM0I (D);
static _KLpairGVKd K105;
static _KLpairGVKd K106;
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLbyte_stringGVKd_21 K109;
extern _KLsimple_methodGVKe Kunlock_streamYstreamsVioMM0;
D Kunlock_streamYstreamsVioMM0I (D);
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLsignatureGVKe K114;
static _KLbyte_stringGVKd_13 K115;
extern _KLsimple_methodGVKe Klock_streamYstreamsVioMM0;
D Klock_streamYstreamsVioMM0I (D);
static _KLpairGVKd K118;
static _KLpairGVKd K119;
static _KLbyte_stringGVKd_11 K120;
extern _KLsimple_methodGVKe Kdo_force_outputYstreams_internalsVioMM0;
D Kdo_force_outputYstreams_internalsVioMM0I (D);
static _KLpairGVKd K123;
static _KLpairGVKd K124;
static _KLbyte_stringGVKd_15 K125;
static _KLpairGVKd K126;
static _KLsignatureGVKe K127;
static _KLbyte_stringGVKd_19 K128;
static _KLsimple_object_vectorGVKd_2 K129;
extern _KLsealed_generic_functionGVKe Kfinal_positionYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kfinal_position_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kfinal_position_setterYstreams_internalsVioMM0;
static _KLpairGVKd K133;
static _KLbyte_stringGVKd_21 K134;
extern _KLgetter_methodGVKi Kfinal_positionYstreams_internalsVioMM0;
static _KLpairGVKd K136;
static _KLbyte_stringGVKd_14 K137;
extern _KLsealed_generic_functionGVKe Kcurrent_positionYstreams_internalsVio;
extern _KLgetter_methodGVKi Kcurrent_positionYstreams_internalsVioMM0;
static _KLpairGVKd K140;
static _KLbyte_stringGVKd_16 K141;
extern _KLsealed_generic_functionGVKe Kinitial_positionYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kinitial_position_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kinitial_position_setterYstreams_internalsVioMM0;
static _KLpairGVKd K145;
static _KLbyte_stringGVKd_23 K146;
extern _KLgetter_methodGVKi Kinitial_positionYstreams_internalsVioMM0;
static _KLpairGVKd K148;
static _KLbyte_stringGVKd_16 K149;
static _KLsimple_closure_methodGVKi_0 K161;
static D K161I ();
static _KLsymbolGVKd KJstream_lock_;
extern _KLsealed_generic_functionGVKe Kprivate_stream_lock_valueYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kprivate_stream_lock_value_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kprivate_stream_lock_value_setterYstreams_internalsVioMM0;
static _KLpairGVKd K156;
static _KLbyte_stringGVKd_32 K157;
extern _KLgetter_methodGVKi Kprivate_stream_lock_valueYstreams_internalsVioMM0;
static _KLpairGVKd K159;
static _KLbyte_stringGVKd_25 K160;
static _KLsignatureGVKe K162;
extern _KLsealed_generic_functionGVKe Kprivate_stream_direction_valueYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kprivate_stream_direction_value_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kprivate_stream_direction_value_setterYstreams_internalsVioMM0;
static _KLpairGVKd K166;
static _KLbyte_stringGVKd_37 K167;
extern _KLgetter_methodGVKi Kprivate_stream_direction_valueYstreams_internalsVioMM0;
static _KLpairGVKd K169;
static _KLbyte_stringGVKd_30 K170;
extern _KLsealed_generic_functionGVKe Kprivate_stream_element_type_valueYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kprivate_stream_element_type_value_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kprivate_stream_element_type_value_setterYstreams_internalsVioMM0;
static _KLpairGVKd K174;
static _KLbyte_stringGVKd_40 K175;
extern _KLgetter_methodGVKi Kprivate_stream_element_type_valueYstreams_internalsVioMM0;
static _KLpairGVKd K177;
static _KLbyte_stringGVKd_33 K178;
static _KLunionGVKe K179;
extern _KLsimple_methodGVKe Kstream_limitYstreamsVioMM0;
D Kstream_limitYstreamsVioMM0I (D);
static _KLpairGVKd K182;
static _KLpairGVKd K183;
static _KLpairGVKd K184;
static _KLbyte_stringGVKd_12 K185;
static _KLsignatureAvaluesGVKi K186;
static _KLsimple_object_vectorGVKd_1 K187;
static _KLsignatureAvaluesGVKi K188;
extern _KLincremental_generic_functionGVKe Kwrite_fillYstreams_internalsVio;
extern _KLsimple_methodGVKe Kwrite_fillYstreams_internalsVioMM0;
D Kwrite_fillYstreams_internalsVioMM0I (D, D, D);
static _KLpairGVKd K192;
static _KLpairGVKd K193;
static _KLsignatureGVKe K194;
static _KLbyte_stringGVKd_10 K195;
static _KLsimple_object_vectorGVKd_3 K196;
extern _KLincremental_generic_functionGVKe Kread_skipYstreams_internalsVio;
extern _KLsimple_methodGVKe Kread_skipYstreams_internalsVioMM0;
D Kread_skipYstreams_internalsVioMM0I (D, D);
static _KLpairGVKd K200;
static _KLpairGVKd K201;
static _KLsignatureGVKe K202;
static _KLbyte_stringGVKd_9 K203;
static _KLsimple_object_vectorGVKd_2 K204;
static _KLsymbolGVKd KJcurrent_;
static _KLbyte_stringGVKd_7 K206;
static _KLkeyword_signatureGVKe K207;
static _KLsimple_object_vectorGVKd_2 K208;
static _KLsimple_object_vectorGVKd_2 K209;
static _KLsimple_object_vectorGVKd_1 K210;
static _KLsignatureGVKe K211;
static _KLsimple_object_vectorGVKd_2 K212;
static _KLsingletonGVKd K213;
static _KLsignatureGVKe K214;
static _KLsimple_object_vectorGVKd_2 K215;
static _KLsingletonGVKd K216;
static _KLbyte_stringGVKd_20 K217;
static _KLsignatureGVKe K218;
static _KLsimple_object_vectorGVKd_2 K219;
static _KLsignatureGVKe K220;
static _KLsimple_object_vectorGVKd_1 K221;
static _KLimplementation_classGVKe K222;
static _KLsimple_object_vectorGVKd_7 K223;
static _KLsimple_object_vectorGVKd_2 K224;
static _KLsimple_object_vectorGVKd_6 K225;
static _KLsimple_object_vectorGVKd_1 K226;
static _KLsimple_object_vectorGVKd_4 K227;
static _KLsimple_object_vectorGVKd_3 K228;
static _KLbyte_stringGVKd_27 K229;
static _KLbyte_stringGVKd_15 K230;
static _KLkeyword_signatureGVKe K231;
static _KLsimple_object_vectorGVKd_6 K232;
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLbyte_stringGVKd_12 K234;
static _KLsimple_object_vectorGVKd_3 K235;
extern _KLsealed_generic_functionGVKe Kstream_lock_setterYstreamsVio;
extern _KLsimple_methodGVKe Kstream_lock_setterYstreamsVioMM0;
D Kstream_lock_setterYstreamsVioMM0I (D, D);
static _KLpairGVKd K239;
static _KLsignatureAvaluesGVKi K240;
static _KLbyte_stringGVKd_18 K241;
static _KLsimple_object_vectorGVKd_2 K242;
static _KLsignatureAvaluesGVKi K243;
static _KLsimple_object_vectorGVKd_2 K244;
extern _KLsimple_methodGVKe Kread_writeQYstreams_internalsVio;
D Kread_writeQYstreams_internalsVioI (D the_stream_);
static _KLsignatureAvaluesGVKi K247;
static _KLbyte_stringGVKd_59 K248;
static _KLbyte_stringGVKd_30 K249;
static _KLkeyword_signatureGVKe K250;
static _KLsimple_object_vectorGVKd_6 K251;
static _KLsimple_object_vectorGVKd_3 K252;
static _KLimplementation_classGVKe K253;
static _KLsimple_object_vectorGVKd_4 K254;
static _KLsimple_object_vectorGVKd_6 K255;
static _KLsimple_object_vectorGVKd_1 K256;
static _KLsimple_object_vectorGVKd_1 K257;
static _KLbyte_stringGVKd_14 K258;
static _KLpairGVKd K259;
static _KLpairGVKd K260;
static _KLpairGVKd K261;
static _KLpairGVKd K262;
static _KLpairGVKd K263;
static _KLpairGVKd K264;
static _KLpairGVKd K265;

/* Indirection variables */

static D IKJclosed_ = &KJclosed_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJcurrent_ = &KJcurrent_;
static D IKJsynchronizeQ_ = &KJsynchronizeQ_;

/* Variables */

D initial_positionYstreams_internalsVio = &Kinitial_positionYstreams_internalsVio;
D current_positionYstreams_internalsVio = &Kcurrent_positionYstreams_internalsVio;
D current_position_setterYstreams_internalsVio = &Kcurrent_position_setterYstreams_internalsVio;
D final_positionYstreams_internalsVio = &Kfinal_positionYstreams_internalsVio;
D outer_streamYstreamsVio = &Kouter_streamYstreamsVio;
D outer_stream_setterYstreamsVio = &Kouter_stream_setterYstreamsVio;
D Lbasic_streamGYstreamsVio = &KLbasic_streamGYstreamsVio;
D stream_directionYstreams_internalsVio = &Kstream_directionYstreams_internalsVio;
D readableQYstreams_internalsVio = &KreadableQYstreams_internalsVio;
D writableQYstreams_internalsVio = &KwritableQYstreams_internalsVio;
D closedQYstreams_internalsVio = &KclosedQYstreams_internalsVio;
D read_onlyQYstreams_internalsVio = &Kread_onlyQYstreams_internalsVio;
D write_onlyQYstreams_internalsVio = &Kwrite_onlyQYstreams_internalsVio;
D read_writeQYstreams_internalsVio = &Kread_writeQYstreams_internalsVio;
D stream_lockYstreamsVio = &Kstream_lockYstreamsVio;
D stream_lock_setterYstreamsVio = &Kstream_lock_setterYstreamsVio;
D Lbasic_positionable_streamGYstreamsVio = &KLbasic_positionable_streamGYstreamsVio;
D stream_limitYstreamsVio = &Kstream_limitYstreamsVio;
D stream_limit_setterYstreams_internalsVio = &Kstream_limit_setterYstreams_internalsVio;
D do_force_outputYstreams_internalsVio = &Kdo_force_outputYstreams_internalsVio;
D stream_sequence_classYstreamsVio = &Kstream_sequence_classYstreamsVio;
D stream_lockedQYstreamsVio = &Kstream_lockedQYstreamsVio;
D lock_streamYstreamsVio = &Klock_streamYstreamsVio;
D unlock_streamYstreamsVio = &Kunlock_streamYstreamsVio;
D read_skipYstreams_internalsVio = &Kread_skipYstreams_internalsVio;
D write_fillYstreams_internalsVio = &Kwrite_fillYstreams_internalsVio;

/* Objects */

_KLclassGVKd KLbasic_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K258,
  &K253,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K253,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KinitializeVKdMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K250,
  &key_mep_5,
  &KinitializeVKdMioM0I,
  &K251
};

_KLsimple_methodGVKe Kstream_element_typeYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K247,
  &Kstream_element_typeYstreams_protocolVcommon_dylanMioM0I
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K231,
  &key_mep_5,
  &KcloseYcommon_extensionsVcommon_dylanMioM0I,
  &K232
};

_KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kstream_openQYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM0I
};

_KLclassGVKd KLbasic_positionable_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K229,
  &K222,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K222,
  (D) 1,
  29,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K220,
  &Kstream_positionYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K218,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K214,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K211,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM2I
};

_KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K207,
  &key_mep_4,
  &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0I,
  &K208
};

_KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe KwritableQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &KwritableQYstreams_internalsVioI
};

_KLsimple_methodGVKe KclosedQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &KclosedQYstreams_internalsVioI
};

_KLsimple_methodGVKe Kread_onlyQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kread_onlyQYstreams_internalsVioI
};

_KLsimple_methodGVKe KreadableQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &KreadableQYstreams_internalsVioI
};

_KLsimple_methodGVKe Kwrite_onlyQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kwrite_onlyQYstreams_internalsVioI
};

_KLincremental_generic_functionGVKe Kstream_limitYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K80,
  (D) 1,
  &K185,
  &K182,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbasic_streamGYstreamsVio,
  &KJouter_stream_,
  &Kouter_streamYstreamsVio,
  &Kouter_stream_setterYstreamsVio,
  &K179
};

_KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KLobjectGVKd,
  &KLbasic_streamGYstreamsVio,
  &KJelement_type_,
  &Kprivate_stream_element_type_valueYstreams_internalsVio,
  &Kprivate_stream_element_type_value_setterYstreams_internalsVio,
  &KLtypeGVKd
};

_KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbasic_streamGYstreamsVio,
  &KPfalseVKi,
  &Kprivate_stream_direction_valueYstreams_internalsVio,
  &Kprivate_stream_direction_value_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K161,
  &KLbasic_streamGYstreamsVio,
  &KJstream_lock_,
  &Kprivate_stream_lock_valueYstreams_internalsVio,
  &Kprivate_stream_lock_value_setterYstreams_internalsVio,
  &K101
};

_KLinstance_slot_descriptorGVKe Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbasic_positionable_streamGYstreamsVio,
  &KPfalseVKi,
  &Kinitial_positionYstreams_internalsVio,
  &Kinitial_position_setterYstreams_internalsVio,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbasic_positionable_streamGYstreamsVio,
  &KPfalseVKi,
  &Kcurrent_positionYstreams_internalsVio,
  &Kcurrent_position_setterYstreams_internalsVio,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbasic_positionable_streamGYstreamsVio,
  &KPfalseVKi,
  &Kfinal_positionYstreams_internalsVio,
  &Kfinal_position_setterYstreams_internalsVio,
  &KLobjectGVKd
};

_KLincremental_generic_functionGVKe Kstream_limit_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K127,
  (D) 1,
  &K128,
  &K126,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kdo_force_outputYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K114,
  (D) 1,
  &K125,
  &K123,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe Klock_streamYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K114,
  (D) 1,
  &K120,
  &K118,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K114,
  (D) 1,
  &K115,
  &K112,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kstream_sequence_classYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K80,
  (D) 1,
  &K109,
  &K105,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe Kstream_lockedQYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K92,
  (D) 1,
  &K93,
  &K90,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_directionYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K80,
  (D) 1,
  &K81,
  &K78,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kouter_stream_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K75,
  &K74,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kouter_streamYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcurrent_position_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K69,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kcurrent_position_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kcurrent_position_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "current-position-setter"
};

_KLgetter_methodGVKi Kouter_streamYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kouter_streamYstreamsVioHLbasic_streamG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kouter_streamYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "outer-stream"
};

_KLsetter_methodGVKi Kouter_stream_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kouter_streamYstreamsVioHLbasic_streamG
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &Kouter_stream_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "outer-stream-setter"
};

_KLsimple_methodGVKe Kstream_directionYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K86,
  &Kstream_directionYstreams_internalsVioMM0I
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_directionYstreams_internalsVioMM0,
  &K79
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_directionYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K80 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K82
};

static _KLbyte_stringGVKd_16 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "stream-direction"
};

static _KLsimple_object_vectorGVKd_1 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsymbolGVKd KJclosed_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K85
};

static _KLbyte_stringGVKd_32 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_6 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "closed"
};

static _KLsignatureGVKe K86 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K87
};

static _KLsimple_object_vectorGVKd_1 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_streamGYstreamsVio
};

_KLsimple_methodGVKe Kstream_lockedQYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K92,
  &Kstream_lockedQYstreamsVioMM0I
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_lockedQYstreamsVioMM0,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_lockedQYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K92 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K82,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_14 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "stream-locked?"
};

_KLincremental_generic_functionGVKe Kstream_lockYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K98,
  &KPfalseVKi,
  &K99,
  &K97,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstream_lockYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K98,
  &Kstream_lockYstreamsVioMM0I
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_lockYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K98 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K87,
  &K100
};

static _KLbyte_stringGVKd_11 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_1 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K101
};

static _KLunionGVKe K101 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K102,
  &KLlockGYthreadsVdylan
};

static _KLsingletonGVKd K102 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K80,
  &Kstream_sequence_classYstreamsVioMM0I
};

static _KLpairGVKd K105 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequence_classYstreamsVioMM0,
  &K106
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequence_classYstreamsVioMM1,
  &K107
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequence_classYstreamsVioMM2,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequence_classYstreamsVioMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K109 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "stream-sequence-class"
};

_KLsimple_methodGVKe Kunlock_streamYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &Kunlock_streamYstreamsVioMM0I
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &Kunlock_streamYstreamsVioMM0,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &Kunlock_streamYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K114 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K82
};

static _KLbyte_stringGVKd_13 K115 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "unlock-stream"
};

_KLsimple_methodGVKe Klock_streamYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &Klock_streamYstreamsVioMM0I
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &Klock_streamYstreamsVioMM0,
  &K119
};

static _KLpairGVKd K119 = {
  &KLpairGVKdW /* wrapper */,
  &Klock_streamYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "lock-stream"
};

_KLsimple_methodGVKe Kdo_force_outputYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &Kdo_force_outputYstreams_internalsVioMM0I
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_force_outputYstreams_internalsVioMM0,
  &K124
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_force_outputYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "do-force-output"
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_limit_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K127 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K129
};

static _KLbyte_stringGVKd_19 K128 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "stream-limit-setter"
};

static _KLsimple_object_vectorGVKd_2 K129 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsealed_generic_functionGVKe Kfinal_positionYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K137,
  &K136,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kfinal_position_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K134,
  &K133,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfinal_position_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &Kfinal_position_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "final-position-setter"
};

_KLgetter_methodGVKi Kfinal_positionYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &Kfinal_positionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "final-position"
};

_KLsealed_generic_functionGVKe Kcurrent_positionYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K141,
  &K140,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kcurrent_positionYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &Kcurrent_positionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "current-position"
};

_KLsealed_generic_functionGVKe Kinitial_positionYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K149,
  &K148,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kinitial_position_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K146,
  &K145,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kinitial_position_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K145 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitial_position_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "initial-position-setter"
};

_KLgetter_methodGVKi Kinitial_positionYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLpairGVKd K148 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitial_positionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K149 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "initial-position"
};

static _KLsimple_closure_methodGVKi_0 K161 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K162,
  &K161I,
  (D) 1
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

_KLsealed_generic_functionGVKe Kprivate_stream_lock_valueYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K160,
  &K159,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kprivate_stream_lock_value_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K157,
  &K156,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kprivate_stream_lock_value_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K156 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_lock_value_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_32 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "private-stream-lock-value-setter"
};

_KLgetter_methodGVKi Kprivate_stream_lock_valueYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K159 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_lock_valueYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K160 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "private-stream-lock-value"
};

static _KLsignatureGVKe K162 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

_KLsealed_generic_functionGVKe Kprivate_stream_direction_valueYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K170,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kprivate_stream_direction_value_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K167,
  &K166,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kprivate_stream_direction_value_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K166 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_direction_value_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_37 K167 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "private-stream-direction-value-setter"
};

_KLgetter_methodGVKi Kprivate_stream_direction_valueYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_direction_valueYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "private-stream-direction-value"
};

_KLsealed_generic_functionGVKe Kprivate_stream_element_type_valueYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K178,
  &K177,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kprivate_stream_element_type_value_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K175,
  &K174,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kprivate_stream_element_type_value_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_element_type_value_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_40 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "private-stream-element-type-value-setter"
};

_KLgetter_methodGVKi Kprivate_stream_element_type_valueYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &Kprivate_stream_element_type_valueYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K178 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "private-stream-element-type-value"
};

static _KLunionGVKe K179 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K102,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsimple_methodGVKe Kstream_limitYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K186,
  &Kstream_limitYstreamsVioMM0I
};

static _KLpairGVKd K182 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_limitYstreamsVioMM0,
  &K183
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_limitYstreamsVioMM1,
  &K184
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_limitYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K185 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "stream-limit"
};

static _KLsignatureAvaluesGVKi K186 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K82,
  &K187
};

static _KLsimple_object_vectorGVKd_1 K187 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K102
};

static _KLsignatureAvaluesGVKi K188 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K87,
  &KDsignature_LbooleanG_typesVKi
};

_KLincremental_generic_functionGVKe Kwrite_fillYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K194,
  &KPfalseVKi,
  &K195,
  &K192,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kwrite_fillYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K194,
  &Kwrite_fillYstreams_internalsVioMM0I
};

static _KLpairGVKd K192 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_fillYstreams_internalsVioMM0,
  &K193
};

static _KLpairGVKd K193 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_fillYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K194 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K196
};

static _KLbyte_stringGVKd_10 K195 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "write-fill"
};

static _KLsimple_object_vectorGVKd_3 K196 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLincremental_generic_functionGVKe Kread_skipYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K202,
  &KPfalseVKi,
  &K203,
  &K200,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kread_skipYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K202,
  &Kread_skipYstreams_internalsVioMM0I
};

static _KLpairGVKd K200 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_skipYstreams_internalsVioMM0,
  &K201
};

static _KLpairGVKd K201 = {
  &KLpairGVKdW /* wrapper */,
  &Kread_skipYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K202 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K204
};

static _KLbyte_stringGVKd_9 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "read-skip"
};

static _KLsimple_object_vectorGVKd_2 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJcurrent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K206
};

static _KLbyte_stringGVKd_7 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "current"
};

static _KLkeyword_signatureGVKe K207 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K209,
  &K210,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfrom_,
  &KJcurrent_
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfrom_
};

static _KLsignatureGVKe K211 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K212
};

static _KLsimple_object_vectorGVKd_2 K212 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K213,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsingletonGVKd K213 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJend_
};

static _KLsignatureGVKe K214 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K215
};

static _KLsimple_object_vectorGVKd_2 K215 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K216,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsingletonGVKd K216 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJstart_
};

static _KLbyte_stringGVKd_20 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "Invalid position: %="
};

static _KLsignatureGVKe K218 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K219
};

static _KLsimple_object_vectorGVKd_2 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsignatureGVKe K220 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K221
};

static _KLsimple_object_vectorGVKd_1 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLimplementation_classGVKe K222 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 308543517,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVioW,
  &KPfalseVKi,
  &K223,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K224,
  &K225,
  (D) 21,
  &K226,
  &K227,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K264,
  &KPempty_vectorVKi,
  &K228,
  &K223,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K223 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLsimple_object_vectorGVKd_2 K224 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbasic_streamGYstreamsVio,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan
};

static _KLsimple_object_vectorGVKd_6 K225 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_1 K226 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 29
};

static _KLsimple_object_vectorGVKd_4 K227 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_3 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG
};

static _KLbyte_stringGVKd_27 K229 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<basic-positionable-stream>"
};

static _KLbyte_stringGVKd_15 K230 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K231 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K87,
  &K235,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K232 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJabortQ_,
  &KPfalseVKi,
  &KJwaitQ_,
  &KPfalseVKi,
  &KJsynchronizeQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJsynchronizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K234
};

static _KLbyte_stringGVKd_12 K234 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLsimple_object_vectorGVKd_3 K235 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJabortQ_,
  &KJwaitQ_,
  &KJsynchronizeQ_
};

_KLsealed_generic_functionGVKe Kstream_lock_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K240,
  &KPfalseVKi,
  &K241,
  &K239,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kstream_lock_setterYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K243,
  &Kstream_lock_setterYstreamsVioMM0I
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_lock_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K240 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K242,
  &K100
};

static _KLbyte_stringGVKd_18 K241 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "stream-lock-setter"
};

static _KLsimple_object_vectorGVKd_2 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLbasic_streamGYstreamsVio
};

static _KLsignatureAvaluesGVKi K243 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K244,
  &K100
};

static _KLsimple_object_vectorGVKd_2 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K101,
  &KLbasic_streamGYstreamsVio
};

_KLsimple_methodGVKe Kread_writeQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K188,
  &Kread_writeQYstreams_internalsVioI
};

static _KLsignatureAvaluesGVKi K247 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K87,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_59 K248 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 237,
  "START: and END: keywords are not allowed for output streams"
};

static _KLbyte_stringGVKd_30 K249 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "%= is not one of %=, %=, or %="
};

static _KLkeyword_signatureGVKe K250 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K87,
  &K252,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_,
  &KPfalseVKi,
  &KJend_,
  &KPfalseVKi,
  &KJdirection_,
  &KJinput_
};

static _KLsimple_object_vectorGVKd_3 K252 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstart_,
  &KJend_,
  &KJdirection_
};

static _KLimplementation_classGVKe K253 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845009,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_streamGYstreamsVioW,
  &KPfalseVKi,
  &K254,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K82,
  &K255,
  (D) 13,
  &K256,
  &K257,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K259,
  &KPempty_vectorVKi,
  &K254,
  &K254,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K254 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG
};

static _KLsimple_object_vectorGVKd_6 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 17
};

static _KLsimple_object_vectorGVKd_1 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_14 K258 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<basic-stream>"
};

static _KLpairGVKd K259 = {
  &KLpairGVKdW /* wrapper */,
  &KLwrapper_streamGYstreamsVio,
  &K260
};

static _KLpairGVKd K260 = {
  &KLpairGVKdW /* wrapper */,
  &KLbuffered_streamGYstreamsVio,
  &K261
};

static _KLpairGVKd K261 = {
  &KLpairGVKdW /* wrapper */,
  &KLexternal_streamGYstreams_internalsVio,
  &K262
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &KLtyped_streamGYstreams_internalsVio,
  &K263
};

static _KLpairGVKd K263 = {
  &KLpairGVKdW /* wrapper */,
  &KLbasic_positionable_streamGYstreamsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K264 = {
  &KLpairGVKdW /* wrapper */,
  &KLfile_streamGYstreams_internalsVio,
  &K265
};

static _KLpairGVKd K265 = {
  &KLpairGVKdW /* wrapper */,
  &KLsequence_streamGYstreamsVio,
  &KPempty_listVKi
};

/* Code */

D KinitializeVKdMioM0I (D stream_, D Urest_, D Ustart_, D Uend_, D Udirection_) {
  D T6;
  D T7;
  D T8;
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
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_1 T29 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T30;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:30
  T13 = primitive_copy_vector(Urest_);
  T12 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
  T14 = primitive_idQ(T12,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
    KerrorVKdMM1I(&K230, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
    T15 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
    T16 = SLOT_VALUE_INITD(T12, 1);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
    MEP_CALL_PROLOG(T15, T16, 2);
    MEP_CALL2(T15, stream_, T13);
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:34
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:35
  CONGRUENT_CALL_PROLOG(&Kslot_initializedQVKd, 2);
  T6 = CONGRUENT_CALL2(stream_, &Kouter_streamYstreamsVio);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:35
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:36
    SLOT_VALUE_SETTER(stream_, stream_, 0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:35
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:38
  T17 = primitive_instanceQ(stream_,&KLwrapper_streamGYstreamsVio);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:38
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:38
    T10 = &KPfalseVKi;
    T11 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
    T18 = primitive_idQ(Udirection_,&KJinput_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
    if (T18 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
      T19 = primitive_idQ(Udirection_,&KJoutput_);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
      if (T19 != &KPfalseVKi) {
        T7 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
        T20 = primitive_idQ(Udirection_,&KJinput_output_);
        T7 = T20;
      }
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:42
        if (Ustart_ != &KPfalseVKi) {
          T8 = Ustart_;
        } else {
          T8 = Uend_;
        }
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:42
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:42
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:43
          KerrorVKdMM1I(&K248, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:42
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:46
        T21.vector_element_[0] = Udirection_;
        T21.vector_element_[1] = &KJinput_;
        T21.vector_element_[2] = &KJoutput_;
        T21.vector_element_[3] = &KJinput_output_;
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:46
        KerrorVKdMM1I(&K249, &T21);
      }
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:39
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
    T26 = primitive_idQ(Udirection_,&KJinput_output_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
    if (T26 != &KPfalseVKi) {
      T25 = (D) 13;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
      if (T18 != &KPfalseVKi) {
        T24 = (D) 5;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
        T27 = primitive_idQ(Udirection_,&KJoutput_);
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
        if (T27 != &KPfalseVKi) {
          T23 = (D) 9;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
          T28 = primitive_idQ(Udirection_,IKJclosed_);
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
          if (T28 != &KPfalseVKi) {
            T22 = (D) 17;
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
            T29.vector_element_[0] = Udirection_;
            // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
            T30 = KerrorVKdMM1I(&K84, &T29);
            T22 = T30;
          }
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
          T23 = T22;
        }
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
        T24 = T23;
      }
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
      T25 = T24;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
    SLOT_VALUE_SETTER(T25, stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:49
    T9 = &KPfalseVKi;
    T11 = T9;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:38
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:30
  MV_SET_COUNT(0);
  return(T11);
}

D Kstream_element_typeYstreams_protocolVcommon_dylanMioM0I (D the_stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:54
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:56
  T2 = SLOT_VALUE_INITD(the_stream_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:56
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:54
  MV_SET_COUNT(1);
  return(T3_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM0I (D stream_, D keys_, D abortQ_, D waitQ_, D synchronizeQ_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  T7 = primitive_copy_vector(keys_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  primitive_type_check(abortQ_, &KLbooleanGVKd);
  abortQ_;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  primitive_type_check(waitQ_, &KLbooleanGVKd);
  waitQ_;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  primitive_type_check(synchronizeQ_, &KLbooleanGVKd);
  synchronizeQ_;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:156
  SLOT_VALUE_SETTER(&KPfalseVKi, stream_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:157
  SLOT_VALUE_SETTER((D) 17, stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
  T8 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
    KerrorVKdMM1I(&K230, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
    T9 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
    T10 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
    MEP_CALL_PROLOG(T9, T10, 2);
    MEP_CALL2(T9, stream_, T7);
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:158
  T11 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  MV_SET_COUNT(0);
  return(T11);
}

D Kstream_openQYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:161
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:162
  T2 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:162
  T3 = primitive_idQ(T2,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:162
  T5 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:162
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:161
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:165
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:166
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:165
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstream_positionYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:218
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:220
  CONGRUENT_CALL_PROLOG(&Kcurrent_positionYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:220
  CONGRUENT_CALL_PROLOG(&Kinitial_positionYstreams_internalsVio, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:220
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T4_0 = CONGRUENT_CALL2(T2, T3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:218
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM0I (D position_, D stream_) {
  D T3;
  D T4;
  D limit_;
  D T6;
  D new_position_;
  D T8;
  D Utmp_;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:223
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:226
  CONGRUENT_CALL_PROLOG(&Kstream_directionYstreams_internalsVio, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:226
  T13 = primitive_idQ(T3,&KJinput_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:226
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:227
    CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    limit_ = T4;
  } else {
    limit_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:226
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:228
  CONGRUENT_CALL_PROLOG(&Kinitial_positionYstreams_internalsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:228
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  new_position_ = CONGRUENT_CALL2(position_, T6);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  CONGRUENT_CALL_PROLOG(&Kinitial_positionYstreams_internalsVio, 1);
  T8 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  Utmp_ = CONGRUENT_CALL2(position_, T8);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  if (Utmp_ != &KPfalseVKi) {
    T11 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:230
    if (limit_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:230
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T14_0 = CONGRUENT_CALL2(limit_, new_position_);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:230
      T15 = T14_0;
      T10 = T15;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:230
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:231
    T16.vector_element_[0] = position_;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:231
    KerrorVKdMM1I(&K217, &T16);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:233
    CONGRUENT_CALL_PROLOG(&Kcurrent_position_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(new_position_, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:235
  T12_0 = position_;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:223
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM1I (D position_, D stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:238
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:241
  CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2((D) 1, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:241
  T3_0 = (D) 1;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:238
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM2I (D position_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:244
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:248
  T3 = Kstream_limit_or_errorYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:248
  CONGRUENT_CALL_PROLOG(&Kinitial_positionYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:248
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T5 = CONGRUENT_CALL2(T3, T4);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:247
  CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2(T5, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:247
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:244
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0I (D stream_, D delta_, D Urest_, D from_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:251
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
  T13 = primitive_idQ(from_,IKJcurrent_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:257
    CONGRUENT_CALL_PROLOG(&Kstream_positionYstreams_protocolVcommon_dylan, 1);
    T5 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:257
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T6 = CONGRUENT_CALL2(T5, delta_);
    T11 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
    T14 = primitive_idQ(from_,&KJstart_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
    if (T14 != &KPfalseVKi) {
      T10 = delta_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
      T15 = primitive_idQ(from_,&KJend_);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:259
        T7 = Kstream_limit_or_errorYstreams_internalsVioI(stream_);
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:259
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T8 = CONGRUENT_CALL2(T7, delta_);
        T9 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
        T16.vector_element_[0] = from_;
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
        T17 = KerrorVKdMM1I(&K84, &T16);
        T9 = T17;
      }
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:256
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:255
  CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2(T11, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:255
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:251
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:278
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:280
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:278
  MV_SET_COUNT(1);
  return(T2_0);
}

D KwritableQYstreams_internalsVioI (D the_stream_) {
  D T1;
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:105
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T3 = primitive_machine_word_logand(T2,9);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T4 = primitive_cast_raw_as_integer(T3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T7 = primitive_idQ(T4,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T6 = primitive_not(T7);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:107
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:105
  MV_SET_COUNT(1);
  return(T5_0);
}

D KclosedQYstreams_internalsVioI (D the_stream_) {
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:110
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:112
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:112
  T2 = primitive_idQ(T1,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:112
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:110
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kread_onlyQYstreams_internalsVioI (D the_stream_) {
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:115
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:117
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:117
  T2 = primitive_idQ(T1,(D) 5);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:117
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:115
  MV_SET_COUNT(1);
  return(T3_0);
}

D KreadableQYstreams_internalsVioI (D the_stream_) {
  D T1;
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:100
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T3 = primitive_machine_word_logand(T2,5);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T4 = primitive_cast_raw_as_integer(T3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T7 = primitive_idQ(T4,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T6 = primitive_not(T7);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:102
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:100
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kwrite_onlyQYstreams_internalsVioI (D the_stream_) {
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:120
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:122
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:122
  T2 = primitive_idQ(T1,(D) 9);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:122
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:120
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_directionYstreams_internalsVioMM0I (D the_stream_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:76
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
  T10 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
  T11 = primitive_idQ(T10,(D) 13);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:79
    T2_0 = &KJinput_output_;
    T9_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
    T12 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:80
      T3_0 = &KJinput_;
      T8_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
      T13 = primitive_idQ(T10,(D) 9);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:81
        T4_0 = &KJoutput_;
        T7_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
        T14 = primitive_idQ(T10,(D) 17);
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:82
          T5_0 = IKJclosed_;
          T6_0 = T5_0;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
          T15.vector_element_[0] = T10;
          // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
          T16_0 = KerrorVKdMM1I(&K84, &T15);
          T6_0 = T16_0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
        T7_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:78
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:76
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kstream_lockedQYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:313
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:315
  T2 = CALL1(&Kstream_lockYstreamsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:315
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:316
    T3 = CALL1(&Kstream_lockYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:316
    T4_0 = CALL1(&KownedQYthreadsVdylan, T3);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:315
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:313
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kstream_lockYstreamsVioMM0I (D the_stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:136
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:138
  T2 = SLOT_VALUE_INITD(the_stream_, 3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:138
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:136
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_sequence_classYstreamsVioMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:302
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:304
  T2_0 = &KLvectorGVKd;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:302
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kunlock_streamYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:332
  T2 = CALL1(&Kstream_lockYstreamsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:332
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:333
    T3 = CALL1(&Kstream_lockYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:333
    T4 = CALL1(&KreleaseYthreadsVdylan, T3);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:332
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:332
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:331
  MV_SET_COUNT(0);
  return(T6);
}

D Klock_streamYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:322
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:323
  T2 = CALL1(&Kstream_lockYstreamsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:323
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:324
    T3 = CALL1(&Kstream_lockYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:324
    T4 = CALL1(&Kwait_forYthreadsVdylan, T3);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:323
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:323
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:322
  MV_SET_COUNT(0);
  return(T6);
}

D Kdo_force_outputYstreams_internalsVioMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:291
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:293
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:291
  MV_SET_COUNT(0);
  return(T2);
}

static D K161I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:26
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:26
  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:26
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:26
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:26
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kstream_limitYstreamsVioMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:207
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:209
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:207
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kwrite_fillYstreams_internalsVioMM0I (D stream_, D elt_, D n_) {
  DWORD i_T, i_;
  D T5;
  DWORD T6;
  D T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:367
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    T6 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:370
      CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(stream_, elt_);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
      T8 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
      i_T = T8;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
    T5 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:369
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:367
  MV_SET_COUNT(0);
  return(T5);
}

D Kread_skipYstreams_internalsVioMM0I (D stream_, D n_) {
  DWORD i_T, i_;
  D T4;
  DWORD T5;
  D T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:356
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    T5 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:359
      CONGRUENT_CALL_PROLOG(&Kread_elementYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
      T7 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
      i_T = T7;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
    T4 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:358
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:356
  MV_SET_COUNT(0);
  return(T4);
}

D Kstream_lock_setterYstreamsVioMM0I (D value_, D the_stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:144
  SLOT_VALUE_SETTER(value_, the_stream_, 3);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:144
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:141
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kread_writeQYstreams_internalsVioI (D the_stream_) {
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:125
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:127
  T1 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:127
  T2 = primitive_idQ(T1,(D) 13);
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:127
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:125
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_2Estream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclosed_);
    if (T0 != &KJclosed_) {
      IKJclosed_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_slot_value_setter(T0, &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcurrent_);
    if (T0 != &KJcurrent_) {
      primitive_repeated_slot_value_setter(T0, &K208, 1, 1);
      IKJcurrent_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K235, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K232, 1, 4);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:19
  T0 = KPadd_classVKeI(&KLbasic_streamGYstreamsVio);
  goto I0;
}
I0:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:173
  T0 = KPadd_classVKeI(&KLbasic_positionable_streamGYstreamsVio);
  goto I18;
}
I18:

  return;
}

/* USER INIT CODE */

void _Init_io__X_2Estream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:30
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I3;
}
I3:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:54
  T0 = KPadd_a_methodVKnI(&Kstream_element_typeYstreams_protocolVcommon_dylan, &Kstream_element_typeYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I8;
}
I8:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:149
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I11;
}
I11:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:161
  T0 = KPadd_a_methodVKnI(&Kstream_openQYstreams_protocolVcommon_dylan, &Kstream_openQYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I14;
}
I14:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:165
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I17;
}
I17:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:218
  T0 = KPadd_a_methodVKnI(&Kstream_positionYstreams_protocolVcommon_dylan, &Kstream_positionYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I23;
}
I23:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:223
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I26;
}
I26:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:238
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I29;
}
I29:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:244
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I32;
}
I32:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:251
  T0 = KPadd_a_methodVKnI(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I35;
}
I35:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/stream.dylan:278
  T0 = KPadd_a_methodVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I38;
}
I38:

  return;
}


/* eof */
