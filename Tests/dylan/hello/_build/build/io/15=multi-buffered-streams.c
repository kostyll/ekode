#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(20);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(15);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(6);

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

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
} _KLunboundGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(119);
define__KLbyte_stringGVKd(48);
define__KLbyte_stringGVKd(134);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(15);

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

#define  define__KLbufferGYstreamsVio(nrepeated) \
  typedef struct { \
    D wrapper; \
    D buffer_next_; \
    D buffer_end_; \
    D buffer_position_; \
    D buffer_dirtyQ_; \
    D buffer_start_; \
    D buffer_on_page_bits_; \
    D buffer_off_page_bits_; \
    D buffer_use_count_; \
    D buffer_owning_stream_; \
    D size_; \
    char buffer_element_[nrepeated+1]; \
  } _KLbufferGYstreamsVio_##nrepeated;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
} _KLintegerGVKd;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_stretchy_vector_typeGVKi;

typedef struct {
  D wrapper;
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D stretchy_representation_;
} _KLstretchy_element_type_vectorGVKe;

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
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;

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
} _KLbuffered_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D actual_stream_input_buffer_;
  D actual_stream_output_buffer_;
  D stream_shared_buffer_;
} _KLsingle_buffered_streamGYstreams_internalsVio;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
} _KLexternal_stream_accessorGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_not_writableGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_closed_errorGYstreamsVio;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_requested_position_;
  D stream_error_size_of_stream_;
} _KLstream_position_errorGYstreamsVio;

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
  D init_arg_type_;
} _KLinit_arg_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D size_for_buffers_;
  D buffer_shift_amount_;
  D buffer_vector_size_mask_;
  D buffer_preemption_index_;
  D buffers_;
} _KLbuffer_vectorGYstreams_internalsVio;

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
  D buffer_map_;
  D buffer_vector_;
  D stream_id_;
} _KLmulti_buffered_streamGYstreams_internalsVio;

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
  D buffer_map_;
  D buffer_vector_;
  D stream_id_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_multi_buffered_streamGYstreams_internalsVio;

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
  D buffer_map_;
  D buffer_vector_;
  D stream_id_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_char_multi_buffered_streamGYstreams_internalsVio;

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
  D buffer_map_;
  D buffer_vector_;
  D stream_id_;
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLgeneral_multi_buffered_streamGYstreams_internalsVio;


/* Referenced object declarations */

D KPadd_classVKeI (D);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I (D, D, D, D);
extern _KLbooleanGVKd KPfalseVKi;
D KLobject_dequeGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_locatorYstreams_internalsVioHLfile_streamG;
extern _KLinstance_slot_descriptorGVKe KaccessorYstreams_internalsVioHLfile_streamG;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLlimited_stretchy_vector_typeGVKi;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vector_typeGVKiW;
D Klimited_collection_instanceQVKeI (D, D);
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLclassGVKd KLstretchy_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_element_type_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
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
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW;
extern _KLclassGVKd KLexternal_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbuffered_streamGYstreamsVioW;
extern _KLclassGVKd KLsingle_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLsingle_buffered_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLfile_streamGYstreams_internalsVioW;
extern _KLsymbolGVKd KJlocator_;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW;
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_shared_buffer_setterYstreams_internalsVio;
D KemptyQVKdMM7I (D);
extern _KLincremental_generic_functionGVKe KlastVKd;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsealed_generic_functionGVKe Kbuffer_dirtyQYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_endYstreamsVio;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsealed_generic_functionGVKe Kbuffer_positionYstreamsVio;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe Kbuffer_owning_streamYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLstream_not_writableGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_not_writableGYstreamsVioW;
D KerrorVKdMM0I (D, D);
extern _KLsymbolGVKd KJtest_;
extern _KLincremental_generic_functionGVKe KsortXVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLkeyword_methodGVKe Kforce_bufferYstreams_internalsVio;
D Kelement_range_errorVKeI (D, D);
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
D Ktrusted_size_setterVKiMM4I (D, D);
D Ksize_setterVKdMM4I (D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW;
extern _KLsymbolGVKd KJfill_;
D Kload_bufferYstreams_internalsVioI (D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe Kstream_shared_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe Kcurrent_position_setterYstreams_internalsVio;
extern _KLsimple_methodGVKe Kread_onlyQYstreams_internalsVio;
D Kload_buffer_and_fillYstreams_internalsVioI (D, D, D, D, D);
D KaddXVKdMM6I (D, D);
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe Kbuffer_nextYstreamsVio;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe Kstream_input_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_sizeYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe KpositionYcommon_extensionsVcommon_dylan;
extern _KLclassGVKd KLstream_position_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_position_errorGYstreamsVioW;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
D Kround_to_power_of_twoYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLinit_arg_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinit_arg_descriptorGVKeW;
extern _KLsymbolGVKd KJencoding_;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan;
extern _KLinstance_slot_descriptorGVKe Ksequence_typeYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kto_element_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLsimple_methodGVKe Kbyte_to_byteYstreams_internalsVio;
extern _KLsymbolGVKd KJdirection_;
D KemptyQVKdMM14I (D);
D Ksize_setterVKdMM1I (D, D);
D KpopVKdMM0I (D);
extern _KLsymbolGVKd KJinput_;
extern _KLsymbolGVKd KJinput_output_;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLkeyword_methodGVKe KinitializeVKdMioM0;
extern _KLkeyword_methodGVKe KinitializeVKdMioM3;
extern _KLkeyword_methodGVKe KinitializeVKdMioM5;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLobject_signatureGVKe KDsignature_LobjectG_no_rest_value_5VKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLsimple_methodGVKe Kbyte_to_byte_charYstreams_internalsVio;
extern _KLsimple_methodGVKe Kbyte_char_to_byteYstreams_internalsVio;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
D Kclass_constructor_atomicallyVKiI (D);
extern _KLkeyword_methodGVKe KmakeVKdMM51;
extern _KLsealed_generic_functionGVKe Kbuffer_dirtyQ_setterYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_owning_stream_setterYstreams_internalsVio;
D KpushVKdMM0I (D, D);
extern _KLsymbolGVKd KJabortQ_;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsymbolGVKd KJfrom_;
extern D Tmulti_buffer_bytesTYstreams_internalsVio;

/* Defined object declarations */

extern _KLclassGVKd KLbuffer_vectorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbuffer_vectorGYstreams_internalsVioW;
static _KLsymbolGVKd KJknown_power_of_two_size_;
static _KLsymbolGVKd KJuse_count_;
extern _KLkeyword_methodGVKe KinitializeVKdMioM6;
D KinitializeVKdMioM6I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kdo_get_output_bufferYstreamsVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM2;
D Kdo_get_output_bufferYstreamsVioMM2I (D, D, D);
extern _KLmethod_domainGVKe Kdo_next_output_bufferYstreamsVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM2;
D Kdo_next_output_bufferYstreamsVioMM2I (D, D, D);
extern _KLmethod_domainGVKe Kdo_get_input_bufferYstreamsVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM2;
D Kdo_get_input_bufferYstreamsVioMM2I (D, D, D, D);
extern _KLmethod_domainGVKe Kdo_next_input_bufferYstreamsVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM2;
D Kdo_next_input_bufferYstreamsVioMM2I (D, D, D, D);
extern _KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM2;
D Kdo_force_output_buffersYstreamsVioMM2I (D);
extern _KLmethod_domainGVKe Kdo_force_output_buffersYstreamsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM2;
D Kforce_output_buffersYstreamsVioMM2I (D);
extern _KLmethod_domainGVKe Kforce_output_buffersYstreamsVioRD_ioRD_0;
extern _KLmethod_domainGVKe Kstream_output_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kstream_output_buffer_setterYstreams_internalsVioMM1;
D Kstream_output_buffer_setterYstreams_internalsVioMM1I (D, D);
extern _KLmethod_domainGVKe Kstream_input_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kstream_input_buffer_setterYstreams_internalsVioMM1;
D Kstream_input_buffer_setterYstreams_internalsVioMM1I (D, D);
extern _KLmethod_domainGVKe Kstream_shared_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kstream_shared_buffer_setterYstreams_internalsVioMM1;
D Kstream_shared_buffer_setterYstreams_internalsVioMM1I (D, D);
static _KLbyte_stringGVKd_15 K38;
static _KLsignatureAvaluesGVKi K39;
static _KLsimple_object_vectorGVKd_2 K40;
static _KLsimple_object_vectorGVKd_1 K41;
static _KLunionGVKe K42;
static _KLsingletonGVKd K43;
extern _KLclassGVKd KLmulti_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLmulti_buffered_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K46;
static _KLsimple_object_vectorGVKd_15 K47;
extern _KLkeyword_methodGVKe KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K50;
static _KLsimple_object_vectorGVKd_11 K51;
static _KLsimple_object_vectorGVKd_1 K52;
static _KLsimple_object_vectorGVKd_4 K53;
static _KLsimple_object_vectorGVKd_3 K54;
static _KLsimple_object_vectorGVKd_15 K55;
extern _KLinstance_slot_descriptorGVKe Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_idYstreams_internalsVioHLmulti_buffered_streamG;
extern _KLsealed_generic_functionGVKe Kstream_idYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kstream_id_setterYstreams_internalsVio;
static _KLunionGVKe K61;
extern _KLsetter_methodGVKi Kstream_id_setterYstreams_internalsVioMM0;
static _KLpairGVKd K63;
static _KLbyte_stringGVKd_16 K64;
extern _KLgetter_methodGVKi Kstream_idYstreams_internalsVioMM0;
static _KLpairGVKd K66;
static _KLbyte_stringGVKd_9 K67;
extern _KLsealed_generic_functionGVKe Kbuffer_vectorYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_vector_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_vector_setterYstreams_internalsVioMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_20 K72;
extern _KLgetter_methodGVKi Kbuffer_vectorYstreams_internalsVioMM0;
static _KLpairGVKd K74;
static _KLbyte_stringGVKd_13 K75;
static _KLsimple_closure_methodGVKi_0 K83;
static D K83I ();
extern _KLsealed_generic_functionGVKe Kbuffer_mapYstreams_internalsVio;
extern _KLlimited_stretchy_vector_typeGVKi KLbuffer_mapGYstreams_internalsVio;
extern _KLgetter_methodGVKi Kbuffer_mapYstreams_internalsVioMM0;
static _KLpairGVKd K81;
static _KLbyte_stringGVKd_10 K82;
static _KLsignatureGVKe K84;
static D K92I ();
static _KLbyte_stringGVKd_23 K86;
static _KLunionGVKe K87;
static _KLunionGVKe K88;
static _KLunionGVKe K89;
static D K91I ();
static _KLkeyword_signatureAvaluesGVKi K93;
static _KLsimple_object_vectorGVKd_12 K94;
static _KLsymbolGVKd KJstream_lock_;
static _KLsymbolGVKd KJbuffer_;
static _KLsymbolGVKd KJaccessor_;
static _KLbyte_stringGVKd_8 K98;
static _KLbyte_stringGVKd_6 K99;
static _KLbyte_stringGVKd_11 K100;
static _KLsimple_object_vectorGVKd_6 K101;
static _KLsimple_object_vectorGVKd_1 K102;
static _KLbyte_stringGVKd_23 K103;
static _KLsignatureAvaluesGVKi K104;
extern _KLsimple_methodGVKe Kbuffer_map_entry_indexYstreams_internalsVio;
D Kbuffer_map_entry_indexYstreams_internalsVioI (D bme_);
extern _KLsimple_methodGVKe Kbuffer_map_entry_emptyQYstreams_internalsVio;
D Kbuffer_map_entry_emptyQYstreams_internalsVioI (D bme_);
D Kdo_get_bufferYstreams_internalsVioMM0I (D, D, D, D);
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_134 K111;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_force_output_buffersF114;
static D Kanonymous_of_force_output_buffersF114I (D, D);
static _KLsignatureGVKe K115;
static _KLsimple_object_vectorGVKd_2 K116;
static _KLbyte_stringGVKd_6 K117;
D Kstream_positionYstreams_protocolVcommon_dylanMioM3I (D);
D Kgrow_buffer_mapYstreams_internalsVioI (D, D);
D Kpreempt_bufferYstreams_internalsVioI (D, D, D, D, D);
extern _KLsimple_methodGVKe Kbuffer_map_entry_dirtyQYstreams_internalsVio;
D Kbuffer_map_entry_dirtyQYstreams_internalsVioI (D bme_);
extern _KLsimple_methodGVKe Kbuffer_map_entry_deposit_indexYstreams_internalsVio;
D Kbuffer_map_entry_deposit_indexYstreams_internalsVioI (D i_, D bme_);
static _KLsignatureGVKe K125;
static _KLsignatureAvaluesGVKi K126;
static _KLbyte_stringGVKd_48 K127;
static _KLsymbolGVKd KJstream_id_;
static _KLsymbolGVKd KJknown_power_of_two_sizeQ_;
extern _KLsimple_methodGVKe Kbuffer_map_entry_deposit_emptyYstreams_internalsVio;
D Kbuffer_map_entry_deposit_emptyYstreams_internalsVioI (D v_, D bme_);
static _KLbyte_stringGVKd_119 K132;
static _KLsignatureGVKe K133;
static _KLsimple_object_vectorGVKd_2 K134;
static _KLbyte_stringGVKd_24 K135;
static _KLbyte_stringGVKd_40 K136;
static _KLsignatureAvaluesGVKi K137;
static _KLsignatureGVKe K138;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM5I (D, D);
D Kstream_sizeYstreams_protocolVcommon_dylanMioM3I (D);
static _KLbyte_stringGVKd_35 K141;
static _KLsymbolGVKd KJposition_;
static _KLbyte_stringGVKd_8 K143;
static _KLbyte_stringGVKd_36 K144;
static _KLkeyword_signatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_4 K146;
static _KLsymbolGVKd KJbytes_;
static _KLbyte_stringGVKd_5 K148;
static _KLsimple_object_vectorGVKd_2 K149;
static _KLkeyword_signatureAvaluesGVKi K150;
static _KLsimple_object_vectorGVKd_2 K151;
static _KLsimple_object_vectorGVKd_1 K152;
static _KLsimple_object_vectorGVKd_1 K153;
extern _KLkeyword_methodGVKe Kread_8_aligned_bytesYstreams_internalsVio;
D Kread_8_aligned_bytesYstreams_internalsVioI (D, D, D);
static _KLbyte_stringGVKd_37 K156;
static _KLkeyword_signatureAvaluesGVKi K157;
static _KLsimple_object_vectorGVKd_2 K158;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K160;
static _KLsimple_object_vectorGVKd_1 K161;
extern _KLkeyword_methodGVKe Kread_4_aligned_bytesYstreams_internalsVio;
D Kread_4_aligned_bytesYstreams_internalsVioI (D, D, D);
static _KLbyte_stringGVKd_37 K164;
static _KLkeyword_signatureAvaluesGVKi K165;
extern _KLsimple_methodGVKe Kwrite_8_aligned_bytesYstreams_internalsVio;
D Kwrite_8_aligned_bytesYstreams_internalsVioI (D, D, D, D, D, D, D, D, D);
static _KLsignatureGVKe K168;
static _KLsimple_object_vectorGVKd_9 K169;
extern _KLsimple_methodGVKe Kwrite_4_aligned_bytesYstreams_internalsVio;
D Kwrite_4_aligned_bytesYstreams_internalsVioI (D, D, D, D, D);
static _KLsignatureGVKe K172;
static _KLsimple_object_vectorGVKd_5 K173;
extern _KLkeyword_methodGVKe Kread_4_aligned_bytes_as_wordYstreams_internalsVio;
D Kread_4_aligned_bytes_as_wordYstreams_internalsVioI (D stream_, D Urest_, D on_end_of_stream_);
static _KLmachine_wordGVKe K176;
static _KLkeyword_signatureGVKe K177;
extern _KLsimple_methodGVKe Kwrite_4_aligned_bytes_from_wordYstreams_internalsVio;
D Kwrite_4_aligned_bytes_from_wordYstreams_internalsVioI (D stream_, D word_);
static _KLsignatureGVKe K180;
static _KLsimple_object_vectorGVKd_2 K181;
extern _KLsimple_methodGVKe Kmulti_buffered_stream_position_setterYstreams_internalsVio;
D Kmulti_buffered_stream_position_setterYstreams_internalsVioI (D, D);
static _KLsignatureAvaluesGVKi K184;
static _KLsimple_object_vectorGVKd_2 K185;
extern _KLsimple_methodGVKe Kmulti_buffer_total_working_setYstreams_internalsVio;
D Kmulti_buffer_total_working_setYstreams_internalsVioI ();
static _KLsignatureAvaluesGVKi K188;
extern _KLsimple_methodGVKe Kmulti_buffer_total_readsYstreams_internalsVio;
D Kmulti_buffer_total_readsYstreams_internalsVioI ();
extern _KLsimple_methodGVKe Kmulti_buffer_total_bytesYstreams_internalsVio;
D Kmulti_buffer_total_bytesYstreams_internalsVioI ();
static _KLunionGVKe K193;
static _KLkeyword_signatureGVKe K194;
static _KLsimple_object_vectorGVKd_6 K195;
static _KLsymbolGVKd KJbuffer_size_;
static _KLsymbolGVKd KJnumber_of_buffers_;
static _KLbyte_stringGVKd_17 K198;
static _KLbyte_stringGVKd_11 K199;
static _KLsimple_object_vectorGVKd_1 K200;
static _KLsimple_object_vectorGVKd_3 K201;
static _KLsimple_object_vectorGVKd_3 K202;
extern _KLclassGVKd KLbyte_multi_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_multi_buffered_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K205;
static _KLsimple_object_vectorGVKd_20 K206;
extern _KLkeyword_methodGVKe KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K209;
static _KLsimple_object_vectorGVKd_14 K210;
static _KLsimple_object_vectorGVKd_20 K211;
static _KLsimple_object_vectorGVKd_1 K212;
static _KLsimple_object_vectorGVKd_1 K213;
static _KLinit_arg_descriptorGVKe KencodingHLbyte_multi_buffered_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_multi_buffered_streamGYstreams_internalsVio;
static D K248I ();
static D K247I ();
static _KLsimple_closure_methodGVKi_0 K246;
static D K246I (D s_, D ss_, D d_, D ds_, D n_);
static _KLsimple_closure_methodGVKi_0 K245;
static D K245I (D s_, D ss_, D d_, D ds_, D n_);
static _KLpairGVKd K222;
static _KLpairGVKd K223;
static _KLpairGVKd K224;
static _KLpairGVKd K225;
extern _KLkeyword_methodGVKe KinitializeVKdMioM7;
D KinitializeVKdMioM7I (D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF238;
static D Kanonymous_of_initializeF238I (D);
static _KLunionGVKe K230;
extern _KLsimple_methodGVKe Kmulti_buffered_stream_directionYstreams_internalsVioMM0;
D Kmulti_buffered_stream_directionYstreams_internalsVioMM0I (D);
D Knew_stream_idYstreams_internalsVioI (D);
static _KLsignatureAvaluesGVKi K234;
static _KLsimple_object_vectorGVKd_1 K235;
static _KLsimple_object_vectorGVKd_1 K236;
static _KLunionGVKe K237;
static _KLsignatureGVKe K239;
static _KLkeyword_signatureGVKe K240;
static _KLsimple_object_vectorGVKd_8 K241;
static _KLsymbolGVKd KJbuffer_vector_;
static _KLsimple_object_vectorGVKd_4 K243;
static _KLsimple_object_vectorGVKd_4 K244;
static _KLkeyword_signatureAvaluesGVKi K249;
static _KLsimple_object_vectorGVKd_1 K250;
static _KLbyte_stringGVKd_28 K251;
extern _KLclassGVKd KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_char_multi_buffered_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K254;
extern _KLkeyword_methodGVKe KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K257;
static _KLsimple_object_vectorGVKd_14 K258;
static _KLsimple_object_vectorGVKd_1 K259;
static _KLsimple_object_vectorGVKd_1 K260;
static _KLinit_arg_descriptorGVKe KencodingHLbyte_char_multi_buffered_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_multi_buffered_streamGYstreams_internalsVio;
static D K266I ();
static D K265I ();
static _KLkeyword_signatureAvaluesGVKi K267;
static _KLsimple_object_vectorGVKd_1 K268;
static _KLbyte_stringGVKd_33 K269;
extern _KLclassGVKd KLgeneral_multi_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLgeneral_multi_buffered_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K272;
extern _KLkeyword_methodGVKe KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K275;
static _KLsimple_object_vectorGVKd_14 K276;
static _KLsimple_object_vectorGVKd_1 K277;
static _KLsimple_object_vectorGVKd_1 K278;
static _KLinit_arg_descriptorGVKe KencodingHLgeneral_multi_buffered_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_multi_buffered_streamGYstreams_internalsVio;
static D K284I ();
static D K283I ();
static _KLkeyword_signatureAvaluesGVKi K285;
static _KLsimple_object_vectorGVKd_1 K286;
static _KLbyte_stringGVKd_31 K287;
static _KLbyte_stringGVKd_9 K288;
static _KLbyte_stringGVKd_23 K289;
static _KLimplementation_classGVKe K290;
static _KLsimple_object_vectorGVKd_5 K291;
extern _KLkeyword_methodGVKe KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0;
D KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K294;
static _KLsimple_object_vectorGVKd_6 K295;
static _KLkeyword_signatureAvaluesGVKi K296;
extern _KLinstance_slot_descriptorGVKe Ksize_for_buffersYstreams_internalsVioHLbuffer_vectorG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_shift_amountYstreams_internalsVioHLbuffer_vectorG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_vector_size_maskYstreams_internalsVioHLbuffer_vectorG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_preemption_indexYstreams_internalsVioHLbuffer_vectorG;
extern _KLinstance_slot_descriptorGVKe KbuffersYstreams_internalsVioHLbuffer_vectorG;
extern _KLsealed_generic_functionGVKe KbuffersYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffers_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffers_setterYstreams_internalsVioMM0;
static _KLpairGVKd K305;
static _KLbyte_stringGVKd_14 K306;
extern _KLgetter_methodGVKi KbuffersYstreams_internalsVioMM0;
static _KLpairGVKd K308;
static _KLbyte_stringGVKd_7 K309;
extern _KLsealed_generic_functionGVKe Kbuffer_preemption_indexYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_preemption_index_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_preemption_index_setterYstreams_internalsVioMM0;
static _KLpairGVKd K313;
static _KLbyte_stringGVKd_30 K314;
extern _KLgetter_methodGVKi Kbuffer_preemption_indexYstreams_internalsVioMM0;
static _KLpairGVKd K316;
static _KLbyte_stringGVKd_23 K317;
extern _KLsealed_generic_functionGVKe Kbuffer_vector_size_maskYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_vector_size_mask_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_vector_size_mask_setterYstreams_internalsVioMM0;
static _KLpairGVKd K321;
static _KLbyte_stringGVKd_30 K322;
extern _KLgetter_methodGVKi Kbuffer_vector_size_maskYstreams_internalsVioMM0;
static _KLpairGVKd K324;
static _KLbyte_stringGVKd_23 K325;
extern _KLsealed_generic_functionGVKe Kbuffer_shift_amountYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_shift_amount_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_shift_amount_setterYstreams_internalsVioMM0;
static _KLpairGVKd K329;
static _KLbyte_stringGVKd_26 K330;
extern _KLgetter_methodGVKi Kbuffer_shift_amountYstreams_internalsVioMM0;
static _KLpairGVKd K332;
static _KLbyte_stringGVKd_19 K333;
extern _KLsealed_generic_functionGVKe Ksize_for_buffersYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Ksize_for_buffers_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Ksize_for_buffers_setterYstreams_internalsVioMM0;
static _KLpairGVKd K337;
static _KLbyte_stringGVKd_23 K338;
extern _KLgetter_methodGVKi Ksize_for_buffersYstreams_internalsVioMM0;
static _KLpairGVKd K340;
static _KLbyte_stringGVKd_16 K341;
static _KLbyte_stringGVKd_15 K342;
extern _KLsimple_methodGVKe Kmulti_buffer_readsYstreams_internalsVioMM0;
D Kmulti_buffer_readsYstreams_internalsVioMM0I (D);
static _KLsignatureAvaluesGVKi K345;
extern _KLsimple_methodGVKe Kmulti_buffer_bytesYstreams_internalsVioMM0;
D Kmulti_buffer_bytesYstreams_internalsVioMM0I (D);
extern _KLsimple_methodGVKe Kmulti_buffer_working_setYstreams_internalsVioMM0;
D Kmulti_buffer_working_setYstreams_internalsVioMM0I (D);
extern _KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3;
D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3I (D, D, D, D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM5;
extern _KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM3;
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM5;
D KcloseYcommon_extensionsVcommon_dylanMioM5I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM3;
extern _KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4;
D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4I (D);
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM4;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM4I (D);
extern _KLkeyword_methodGVKe KmakeVKdMioM4;
D KmakeVKdMioM4I (D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF401;
static D Kanonymous_of_makeF401I (D);
extern _KLsealed_generic_functionGVKe Ktype_for_multi_buffered_streamYstreams_internalsVio;
extern _KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM0;
D Ktype_for_multi_buffered_streamYstreams_internalsVioMM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM1;
D Ktype_for_multi_buffered_streamYstreams_internalsVioMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM2;
D Ktype_for_multi_buffered_streamYstreams_internalsVioMM2I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM3;
D Ktype_for_multi_buffered_streamYstreams_internalsVioMM3I (D, D, D, D);
static _KLpairGVKd K383;
static _KLpairGVKd K384;
static _KLpairGVKd K385;
static _KLpairGVKd K386;
static _KLkeyword_signatureGVKe K387;
static _KLbyte_stringGVKd_30 K388;
static _KLsimple_object_vectorGVKd_3 K389;
static _KLunionGVKe K390;
static _KLkeyword_signatureGVKe K391;
static _KLsimple_object_vectorGVKd_3 K392;
static _KLsingletonGVKd K393;
static _KLkeyword_signatureGVKe K394;
static _KLsimple_object_vectorGVKd_3 K395;
static _KLsingletonGVKd K396;
static _KLkeyword_signatureGVKe K397;
static _KLsimple_object_vectorGVKd_3 K398;
static _KLsingletonGVKd K399;
static _KLkeyword_signatureGVKe K400;
static _KLkeyword_signatureAvaluesGVKi K402;
static _KLsimple_object_vectorGVKd_8 K403;
static _KLsimple_object_vectorGVKd_1 K404;
static _KLsimple_object_vectorGVKd_4 K405;
static _KLsingletonGVKd K406;
static _KLsignatureAvaluesGVKi K407;
static _KLkeyword_signatureGVKe K408;
static _KLsimple_object_vectorGVKd_6 K409;
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLbyte_stringGVKd_12 K411;
static _KLsimple_object_vectorGVKd_3 K412;
static _KLsymbolGVKd KJcurrent_;
static _KLbyte_stringGVKd_32 K414;
static _KLbyte_stringGVKd_7 K415;
static _KLkeyword_signatureAvaluesGVKi K416;
static _KLsimple_object_vectorGVKd_2 K417;
static _KLsimple_object_vectorGVKd_2 K418;
static _KLsimple_object_vectorGVKd_1 K419;
static _KLpairGVKd K420;
static _KLpairGVKd K421;
static _KLpairGVKd K422;

/* Indirection variables */

static D IKJknown_power_of_two_size_ = &KJknown_power_of_two_size_;
static D IKJuse_count_ = &KJuse_count_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJaccessor_ = &KJaccessor_;
static D IKJstream_ = &KJstream_;
static D IKJstream_id_ = &KJstream_id_;
static D IKJknown_power_of_two_sizeQ_ = &KJknown_power_of_two_sizeQ_;
static D IKJposition_ = &KJposition_;
static D IKJbytes_ = &KJbytes_;
static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJbuffer_size_ = &KJbuffer_size_;
static D IKJnumber_of_buffers_ = &KJnumber_of_buffers_;
static D IKJbuffer_vector_ = &KJbuffer_vector_;
static D IKJsynchronizeQ_ = &KJsynchronizeQ_;
static D IKJcurrent_ = &KJcurrent_;

/* Variables */

D multi_buffer_working_setYstreams_internalsVio = &Kmulti_buffer_working_setYstreams_internalsVioMM0;
D multi_buffer_bytesYstreams_internalsVio = &Kmulti_buffer_bytesYstreams_internalsVioMM0;
D multi_buffer_readsYstreams_internalsVio = &Kmulti_buffer_readsYstreams_internalsVioMM0;
D Lbuffer_vectorGYstreams_internalsVio = &KLbuffer_vectorGYstreams_internalsVio;
D Dempty_bufferYstreams_internalsVio = &KPunboundVKi;
D Dfree_stream_idsYstreams_internalsVio = &KPunboundVKi;
D Dstream_id_to_stream_mapYstreams_internalsVio = &KPunboundVKi;
D Lmulti_buffered_streamGYstreams_internalsVio = &KLmulti_buffered_streamGYstreams_internalsVio;
D Lgeneral_multi_buffered_streamGYstreams_internalsVio = &KLgeneral_multi_buffered_streamGYstreams_internalsVio;
D Lbyte_char_multi_buffered_streamGYstreams_internalsVio = &KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
D Lbyte_multi_buffered_streamGYstreams_internalsVio = &KLbyte_multi_buffered_streamGYstreams_internalsVio;
D multi_buffer_total_bytesYstreams_internalsVio = &Kmulti_buffer_total_bytesYstreams_internalsVio;
D multi_buffer_total_readsYstreams_internalsVio = &Kmulti_buffer_total_readsYstreams_internalsVio;
D multi_buffer_total_working_setYstreams_internalsVio = &Kmulti_buffer_total_working_setYstreams_internalsVio;
D multi_buffered_stream_position_setterYstreams_internalsVio = &Kmulti_buffered_stream_position_setterYstreams_internalsVio;
D write_4_aligned_bytes_from_wordYstreams_internalsVio = &Kwrite_4_aligned_bytes_from_wordYstreams_internalsVio;
D read_4_aligned_bytes_as_wordYstreams_internalsVio = &Kread_4_aligned_bytes_as_wordYstreams_internalsVio;
D write_4_aligned_bytesYstreams_internalsVio = &Kwrite_4_aligned_bytesYstreams_internalsVio;
D write_8_aligned_bytesYstreams_internalsVio = &Kwrite_8_aligned_bytesYstreams_internalsVio;
D read_4_aligned_bytesYstreams_internalsVio = &Kread_4_aligned_bytesYstreams_internalsVio;
D read_8_aligned_bytesYstreams_internalsVio = &Kread_8_aligned_bytesYstreams_internalsVio;
D Tmulti_buffer_working_setTYstreams_internalsVio = (D) 1;
D Tmulti_buffer_readsTYstreams_internalsVio = (D) 1;

/* Objects */

_KLclassGVKd KLbuffer_vectorGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K342,
  &K290,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbuffer_vectorGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K290,
  (D) 1,
  21,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJknown_power_of_two_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K289
};

static _KLsymbolGVKd KJuse_count_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K288
};

_KLkeyword_methodGVKe KinitializeVKdMioM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K194,
  &key_mep_5,
  &KinitializeVKdMioM6I,
  &K195
};

_KLmethod_domainGVKe Kdo_get_output_bufferYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kdo_get_output_bufferYstreamsVioMM2
};

_KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K150,
  &key_mep_3,
  &Kdo_get_output_bufferYstreamsVioMM2I,
  &K151
};

_KLmethod_domainGVKe Kdo_next_output_bufferYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kdo_next_output_bufferYstreamsVioMM2
};

_KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K150,
  &key_mep_3,
  &Kdo_next_output_bufferYstreamsVioMM2I,
  &K151
};

_KLmethod_domainGVKe Kdo_get_input_bufferYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kdo_get_input_bufferYstreamsVioMM2
};

_KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K145,
  &key_mep_4,
  &Kdo_get_input_bufferYstreamsVioMM2I,
  &K146
};

_KLmethod_domainGVKe Kdo_next_input_bufferYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kdo_next_input_bufferYstreamsVioMM2
};

_KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K145,
  &key_mep_4,
  &Kdo_next_input_bufferYstreamsVioMM2I,
  &K146
};

_KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K138,
  &Kdo_force_output_buffersYstreamsVioMM2I
};

_KLmethod_domainGVKe Kdo_force_output_buffersYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kdo_force_output_buffersYstreamsVioMM2
};

_KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K138,
  &Kforce_output_buffersYstreamsVioMM2I
};

_KLmethod_domainGVKe Kforce_output_buffersYstreamsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kforce_output_buffersYstreamsVioMM2
};

_KLmethod_domainGVKe Kstream_output_buffer_setterYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kstream_output_buffer_setterYstreams_internalsVioMM1
};

_KLsimple_methodGVKe Kstream_output_buffer_setterYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K104,
  &Kstream_output_buffer_setterYstreams_internalsVioMM1I
};

_KLmethod_domainGVKe Kstream_input_buffer_setterYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kstream_input_buffer_setterYstreams_internalsVioMM1
};

_KLsimple_methodGVKe Kstream_input_buffer_setterYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K104,
  &Kstream_input_buffer_setterYstreams_internalsVioMM1I
};

_KLmethod_domainGVKe Kstream_shared_buffer_setterYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kstream_shared_buffer_setterYstreams_internalsVioMM1
};

_KLsimple_methodGVKe Kstream_shared_buffer_setterYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K39,
  &Kstream_shared_buffer_setterYstreams_internalsVioMM1I
};

static _KLbyte_stringGVKd_15 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureAvaluesGVKi K39 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 37749769,
  &K40,
  &K41
};

static _KLsimple_object_vectorGVKd_2 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K42,
  &KLmulti_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K42
};

static _KLunionGVKe K42 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLbufferGYstreamsVio
};

static _KLsingletonGVKd K43 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLclassGVKd KLmulti_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K103,
  &K46,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLmulti_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K46,
  (D) 1,
  61,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K46 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958077,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K47,
  (D) -3,
  &KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K50,
  &K51,
  (D) 41,
  &K52,
  &K53,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K420,
  &KPempty_vectorVKi,
  &K54,
  &K55,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_15 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 61,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG,
  &KaccessorYstreams_internalsVioHLfile_streamG,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

_KLkeyword_methodGVKe KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K93,
  &key_mep_2,
  &KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K94
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_11 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 49
};

static _KLsimple_object_vectorGVKd_4 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_3 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLsimple_object_vectorGVKd_15 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 61,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG,
  &KaccessorYstreams_internalsVioHLfile_streamG,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

_KLinstance_slot_descriptorGVKe Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K83,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kbuffer_mapYstreams_internalsVio,
  &KPfalseVKi,
  &KLbuffer_mapGYstreams_internalsVio
};

_KLinstance_slot_descriptorGVKe Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kbuffer_vectorYstreams_internalsVio,
  &Kbuffer_vector_setterYstreams_internalsVio,
  &KLbuffer_vectorGYstreams_internalsVio
};

_KLinstance_slot_descriptorGVKe Kstream_idYstreams_internalsVioHLmulti_buffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kstream_idYstreams_internalsVio,
  &Kstream_id_setterYstreams_internalsVio,
  &K61
};

_KLsealed_generic_functionGVKe Kstream_idYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K67,
  &K66,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstream_id_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K64,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K61 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLintegerGVKd
};

_KLsetter_methodGVKi Kstream_id_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_id_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "stream-id-setter"
};

_KLgetter_methodGVKi Kstream_idYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_idYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "stream-id"
};

_KLsealed_generic_functionGVKe Kbuffer_vectorYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K75,
  &K74,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_vector_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_vector_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_vector_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "buffer-vector-setter"
};

_KLgetter_methodGVKi Kbuffer_vectorYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_vectorYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "buffer-vector"
};

static _KLsimple_closure_methodGVKi_0 K83 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K84,
  &K83I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kbuffer_mapYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K82,
  &K81,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLlimited_stretchy_vector_typeGVKi KLbuffer_mapGYstreams_internalsVio = {
  &KLlimited_stretchy_vector_typeGVKiW /* wrapper */,
  &Klimited_collection_instanceQVKeI,
  &KLstretchy_vectorGVKd,
  &KLintegerGVKd,
  &KLstretchy_element_type_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

_KLgetter_methodGVKi Kbuffer_mapYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_mapYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "buffer-map"
};

static _KLsignatureGVKe K84 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_23 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLunionGVKe K87 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K88 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLlockGYthreadsVdylan
};

static _KLunionGVKe K89 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLkeyword_signatureAvaluesGVKi K93 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K101,
  &KDsignature_LobjectG_typesVKi,
  &K102
};

static _KLsimple_object_vectorGVKd_12 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJouter_stream_,
  &KPunboundVKi,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJstream_lock_,
  &KPunboundVKi,
  &KJbuffer_,
  &KPfalseVKi,
  &KJlocator_,
  &KPunboundVKi,
  &KJaccessor_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K100
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

static _KLsymbolGVKd KJaccessor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K98
};

static _KLbyte_stringGVKd_8 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "accessor"
};

static _KLbyte_stringGVKd_6 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

static _KLbyte_stringGVKd_11 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_6 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJbuffer_,
  &KJlocator_,
  &KJaccessor_
};

static _KLsimple_object_vectorGVKd_1 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmulti_buffered_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_23 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<multi-buffered-stream>"
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K40,
  &K41
};

_KLsimple_methodGVKe Kbuffer_map_entry_indexYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K137,
  &Kbuffer_map_entry_indexYstreams_internalsVioI
};

_KLsimple_methodGVKe Kbuffer_map_entry_emptyQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K126,
  &Kbuffer_map_entry_emptyQYstreams_internalsVioI
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K117
};

static _KLbyte_stringGVKd_134 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 537,
  "Internal error closing stream: buffer for read-only<multi-buffered-stream> (dood stream) wasmodified. Can\'t write the modified buffer."
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_force_output_buffersF114 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K115,
  &Kanonymous_of_force_output_buffersF114I,
  (D) 1
};

static _KLsignatureGVKe K115 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K116
};

static _KLsimple_object_vectorGVKd_2 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbufferGYstreamsVio,
  &KLbufferGYstreamsVio
};

static _KLbyte_stringGVKd_6 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

_KLsimple_methodGVKe Kbuffer_map_entry_dirtyQYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K126,
  &Kbuffer_map_entry_dirtyQYstreams_internalsVioI
};

_KLsimple_methodGVKe Kbuffer_map_entry_deposit_indexYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K125,
  &Kbuffer_map_entry_deposit_indexYstreams_internalsVioI
};

static _KLsignatureGVKe K125 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K126 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_48 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 193,
  "Stream closed: Can\'t read, write or set-position"
};

static _KLsymbolGVKd KJstream_id_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K67
};

static _KLsymbolGVKd KJknown_power_of_two_sizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K135
};

_KLsimple_methodGVKe Kbuffer_map_entry_deposit_emptyYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &Kbuffer_map_entry_deposit_emptyYstreams_internalsVioI
};

static _KLbyte_stringGVKd_119 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 477,
  "Internal error: buffer for read-only<multi-buffered-stream> (dood stream) wasmodified, can\'t write the modified buffer."
};

static _KLsignatureGVKe K133 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K134
};

static _KLsimple_object_vectorGVKd_2 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_24 K135 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "known-power-of-two-size?"
};

static _KLbyte_stringGVKd_40 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "Cant get the position of a closed stream"
};

static _KLsignatureAvaluesGVKi K137 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureGVKe K138 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K102
};

static _KLbyte_stringGVKd_35 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Can\'t set position of closed stream"
};

static _KLsymbolGVKd KJposition_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K143
};

static _KLbyte_stringGVKd_8 K143 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "position"
};

static _KLbyte_stringGVKd_36 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "Cant get the size of a closed stream"
};

static _KLkeyword_signatureAvaluesGVKi K145 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K102,
  &K149,
  &KDsignature_LobjectG_typesVKi,
  &K41
};

static _KLsimple_object_vectorGVKd_4 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJwaitQ_,
  &KPtrueVKi,
  &KJbytes_,
  (D) 5
};

static _KLsymbolGVKd KJbytes_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K148
};

static _KLbyte_stringGVKd_5 K148 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "bytes"
};

static _KLsimple_object_vectorGVKd_2 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJwaitQ_,
  &KJbytes_
};

static _KLkeyword_signatureAvaluesGVKi K150 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K102,
  &K152,
  &KDsignature_LobjectG_typesVKi,
  &K153
};

static _KLsimple_object_vectorGVKd_2 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbytes_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbytes_
};

static _KLsimple_object_vectorGVKd_1 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

_KLkeyword_methodGVKe Kread_8_aligned_bytesYstreams_internalsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K157,
  &key_mep_3,
  &Kread_8_aligned_bytesYstreams_internalsVioI,
  &K158
};

static _KLbyte_stringGVKd_37 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "End of stream in read-8-aligned-bytes"
};

static _KLkeyword_signatureAvaluesGVKi K157 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33824773,
  &K102,
  &K161,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K160
};

static _KLbyte_stringGVKd_16 K160 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_1 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

_KLkeyword_methodGVKe Kread_4_aligned_bytesYstreams_internalsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K165,
  &key_mep_3,
  &Kread_4_aligned_bytesYstreams_internalsVioI,
  &K158
};

static _KLbyte_stringGVKd_37 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "End of stream in read-4-aligned-bytes"
};

static _KLkeyword_signatureAvaluesGVKi K165 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33820677,
  &K102,
  &K161,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kwrite_8_aligned_bytesYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_9,
  &K168,
  &Kwrite_8_aligned_bytesYstreams_internalsVioI
};

static _KLsignatureGVKe K168 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943077,
  &K169
};

static _KLsimple_object_vectorGVKd_9 K169 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kwrite_4_aligned_bytesYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K172,
  &Kwrite_4_aligned_bytesYstreams_internalsVioI
};

static _KLsignatureGVKe K172 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K173
};

static _KLsimple_object_vectorGVKd_5 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLkeyword_methodGVKe Kread_4_aligned_bytes_as_wordYstreams_internalsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K177,
  &key_mep_3,
  &Kread_4_aligned_bytes_as_wordYstreams_internalsVioI,
  &K158
};

static _KLmachine_wordGVKe K176 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

static _KLkeyword_signatureGVKe K177 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K102,
  &K161,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe Kwrite_4_aligned_bytes_from_wordYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K180,
  &Kwrite_4_aligned_bytes_from_wordYstreams_internalsVioI
};

static _KLsignatureGVKe K180 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K181
};

static _KLsimple_object_vectorGVKd_2 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLmachine_wordGVKe
};

_KLsimple_methodGVKe Kmulti_buffered_stream_position_setterYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K184,
  &Kmulti_buffered_stream_position_setterYstreams_internalsVioI
};

static _KLsignatureAvaluesGVKi K184 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K185,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K185 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLmulti_buffered_streamGYstreams_internalsVio
};

_KLsimple_methodGVKe Kmulti_buffer_total_working_setYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K188,
  &Kmulti_buffer_total_working_setYstreams_internalsVioI
};

static _KLsignatureAvaluesGVKi K188 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kmulti_buffer_total_readsYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K188,
  &Kmulti_buffer_total_readsYstreams_internalsVioI
};

_KLsimple_methodGVKe Kmulti_buffer_total_bytesYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K188,
  &Kmulti_buffer_total_bytesYstreams_internalsVioI
};

static _KLunionGVKe K193 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLexternal_streamGYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K194 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K200,
  &K201,
  &K202
};

static _KLsimple_object_vectorGVKd_6 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJbuffer_size_,
  &KPfalseVKi,
  &KJnumber_of_buffers_,
  (D) 129,
  &KJstream_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJbuffer_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K199
};

static _KLsymbolGVKd KJnumber_of_buffers_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K198
};

static _KLbyte_stringGVKd_17 K198 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "number-of-buffers"
};

static _KLbyte_stringGVKd_11 K199 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "buffer-size"
};

static _KLsimple_object_vectorGVKd_1 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbuffer_vectorGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_3 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJbuffer_size_,
  &KJnumber_of_buffers_,
  &KJstream_
};

static _KLsimple_object_vectorGVKd_3 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K61,
  &KLintegerGVKd,
  &K193
};

_KLclassGVKd KLbyte_multi_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K251,
  &K205,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_multi_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K205,
  (D) 1,
  81,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K205 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958097,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &KLbyte_multi_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K206,
  (D) -3,
  &KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K209,
  &K210,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K211,
  &K212,
  &K213,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_20 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 81,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG,
  &KaccessorYstreams_internalsVioHLfile_streamG,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

_KLkeyword_methodGVKe KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K249,
  &key_mep_2,
  &KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K94
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_14 K210 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_20 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 81,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG,
  &KaccessorYstreams_internalsVioHLfile_streamG,
  &Kbuffer_mapYstreams_internalsVioHLmulti_buffered_streamG,
  &Kbuffer_vectorYstreams_internalsVioHLmulti_buffered_streamG,
  &Kstream_idYstreams_internalsVioHLmulti_buffered_streamG
};

static _KLsimple_object_vectorGVKd_1 K212 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLbyte_multi_buffered_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLbyte_multi_buffered_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_multi_buffered_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLbyteGVKe,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 K246 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K246I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 K245 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K245I,
  (D) 1
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMioM5,
  &K223
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMioM3,
  &K224
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMioM0,
  &K225
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

_KLkeyword_methodGVKe KinitializeVKdMioM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K240,
  &key_mep_6,
  &KinitializeVKdMioM7I,
  &K241
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF238 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K239,
  &Kanonymous_of_initializeF238I,
  (D) 1
};

static _KLunionGVKe K230 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLbuffer_vectorGYstreams_internalsVio
};

_KLsimple_methodGVKe Kmulti_buffered_stream_directionYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K234,
  &Kmulti_buffered_stream_directionYstreams_internalsVioMM0I
};

static _KLsignatureAvaluesGVKi K234 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K235,
  &K236
};

static _KLsimple_object_vectorGVKd_1 K235 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K237
};

static _KLsimple_object_vectorGVKd_1 K236 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLunionGVKe K237 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLsymbolGVKd
};

static _KLsignatureGVKe K239 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K240 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K102,
  &K243,
  &K244
};

static _KLsimple_object_vectorGVKd_8 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJdirection_,
  &KJinput_output_,
  &KJbuffer_vector_,
  &KPfalseVKi,
  &KJbuffer_size_,
  &KPfalseVKi,
  &KJnumber_of_buffers_,
  (D) 129
};

static _KLsymbolGVKd KJbuffer_vector_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K75
};

static _KLsimple_object_vectorGVKd_4 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdirection_,
  &KJbuffer_vector_,
  &KJbuffer_size_,
  &KJnumber_of_buffers_
};

static _KLsimple_object_vectorGVKd_4 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &K230,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K249 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K101,
  &KDsignature_LobjectG_typesVKi,
  &K250
};

static _KLsimple_object_vectorGVKd_1 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_28 K251 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<byte-multi-buffered-stream>"
};

_KLclassGVKd KLbyte_char_multi_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K269,
  &K254,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_char_multi_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K254,
  (D) 1,
  81,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K254 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958097,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K206,
  (D) -3,
  &KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K257,
  &K258,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K211,
  &K259,
  &K260,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K267,
  &key_mep_2,
  &KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K94
};

static _KLsimple_object_vectorGVKd_2 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_14 K258 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K259 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K260 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLbyte_char_multi_buffered_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLbyte_char_multi_buffered_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_multi_buffered_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLbyte_characterGVKe,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K267 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K101,
  &KDsignature_LobjectG_typesVKi,
  &K268
};

static _KLsimple_object_vectorGVKd_1 K268 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_33 K269 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "<byte-char-multi-buffered-stream>"
};

_KLclassGVKd KLgeneral_multi_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K287,
  &K272,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLgeneral_multi_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K272,
  (D) 1,
  81,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K272 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958097,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K206,
  (D) -3,
  &KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K275,
  &K276,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K211,
  &K277,
  &K278,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K285,
  &key_mep_2,
  &KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K94
};

static _KLsimple_object_vectorGVKd_2 K275 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_14 K276 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K277 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_multi_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K278 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLgeneral_multi_buffered_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLgeneral_multi_buffered_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_multi_buffered_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLcharacterGVKd,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K285 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K101,
  &KDsignature_LobjectG_typesVKi,
  &K286
};

static _KLsimple_object_vectorGVKd_1 K286 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_31 K287 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<general-multi-buffered-stream>"
};

static _KLbyte_stringGVKd_9 K288 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "use-count"
};

static _KLbyte_stringGVKd_23 K289 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "known-power-of-two-size"
};

static _KLimplementation_classGVKe K290 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958037,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KLbuffer_vectorGYstreams_internalsVioW,
  &KPfalseVKi,
  &K291,
  (D) -3,
  &KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0,
  &K294,
  &K295,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K291,
  &K291,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K291 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Ksize_for_buffersYstreams_internalsVioHLbuffer_vectorG,
  &Kbuffer_shift_amountYstreams_internalsVioHLbuffer_vectorG,
  &Kbuffer_vector_size_maskYstreams_internalsVioHLbuffer_vectorG,
  &Kbuffer_preemption_indexYstreams_internalsVioHLbuffer_vectorG,
  &KbuffersYstreams_internalsVioHLbuffer_vectorG
};

_KLkeyword_methodGVKe KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K296,
  &key_mep_2,
  &KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K294 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K295 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K296 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K200
};

_KLinstance_slot_descriptorGVKe Ksize_for_buffersYstreams_internalsVioHLbuffer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &Ksize_for_buffersYstreams_internalsVio,
  &Ksize_for_buffers_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_shift_amountYstreams_internalsVioHLbuffer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kbuffer_shift_amountYstreams_internalsVio,
  &Kbuffer_shift_amount_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_vector_size_maskYstreams_internalsVioHLbuffer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kbuffer_vector_size_maskYstreams_internalsVio,
  &Kbuffer_vector_size_mask_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_preemption_indexYstreams_internalsVioHLbuffer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kbuffer_preemption_indexYstreams_internalsVio,
  &Kbuffer_preemption_index_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KbuffersYstreams_internalsVioHLbuffer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KPfalseVKi,
  &KbuffersYstreams_internalsVio,
  &Kbuffers_setterYstreams_internalsVio,
  &KLsimple_object_vectorGVKd
};

_KLsealed_generic_functionGVKe KbuffersYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K309,
  &K308,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffers_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K306,
  &K305,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffers_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KbuffersYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K305 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffers_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K306 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "buffers-setter"
};

_KLgetter_methodGVKi KbuffersYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KbuffersYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K308 = {
  &KLpairGVKdW /* wrapper */,
  &KbuffersYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K309 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "buffers"
};

_KLsealed_generic_functionGVKe Kbuffer_preemption_indexYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K317,
  &K316,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_preemption_index_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K314,
  &K313,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_preemption_index_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_preemption_indexYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K313 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_preemption_index_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K314 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "buffer-preemption-index-setter"
};

_KLgetter_methodGVKi Kbuffer_preemption_indexYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_preemption_indexYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K316 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_preemption_indexYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K317 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "buffer-preemption-index"
};

_KLsealed_generic_functionGVKe Kbuffer_vector_size_maskYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K325,
  &K324,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_vector_size_mask_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K322,
  &K321,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_vector_size_mask_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_vector_size_maskYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_vector_size_mask_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K322 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "buffer-vector-size-mask-setter"
};

_KLgetter_methodGVKi Kbuffer_vector_size_maskYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_vector_size_maskYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K324 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_vector_size_maskYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K325 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "buffer-vector-size-mask"
};

_KLsealed_generic_functionGVKe Kbuffer_shift_amountYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K333,
  &K332,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_shift_amount_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K330,
  &K329,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_shift_amount_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_shift_amountYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K329 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_shift_amount_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K330 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "buffer-shift-amount-setter"
};

_KLgetter_methodGVKi Kbuffer_shift_amountYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_shift_amountYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_shift_amountYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K333 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "buffer-shift-amount"
};

_KLsealed_generic_functionGVKe Ksize_for_buffersYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K341,
  &K340,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksize_for_buffers_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K338,
  &K337,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ksize_for_buffers_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksize_for_buffersYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K337 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_for_buffers_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K338 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "size-for-buffers-setter"
};

_KLgetter_methodGVKi Ksize_for_buffersYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksize_for_buffersYstreams_internalsVioHLbuffer_vectorG
};

static _KLpairGVKd K340 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_for_buffersYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K341 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "size-for-buffers"
};

static _KLbyte_stringGVKd_15 K342 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<buffer-vector>"
};

_KLsimple_methodGVKe Kmulti_buffer_readsYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &Kmulti_buffer_readsYstreams_internalsVioMM0I
};

static _KLsignatureAvaluesGVKi K345 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K102,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kmulti_buffer_bytesYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &Kmulti_buffer_bytesYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kmulti_buffer_working_setYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &Kmulti_buffer_working_setYstreams_internalsVioMM0I
};

_KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K416,
  &key_mep_4,
  &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3I,
  &K417
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K184,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM5I
};

_KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &Kstream_positionYstreams_protocolVcommon_dylanMioM3I
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K408,
  &key_mep_5,
  &KcloseYcommon_extensionsVcommon_dylanMioM5I,
  &K409
};

_KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &Kstream_sizeYstreams_protocolVcommon_dylanMioM3I
};

_KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K407,
  &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4I
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K407,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM4I
};

_KLkeyword_methodGVKe KmakeVKdMioM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K402,
  &key_mep_6,
  &KmakeVKdMioM4I,
  &K403
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF401 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K239,
  &Kanonymous_of_makeF401I,
  (D) 1
};

_KLsealed_generic_functionGVKe Ktype_for_multi_buffered_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K387,
  &KPfalseVKi,
  &K388,
  &K383,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K400,
  &key_mep_4,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM0I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K397,
  &key_mep_4,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM1I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K394,
  &key_mep_4,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM2I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_multi_buffered_streamYstreams_internalsVioMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K391,
  &key_mep_4,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM3I,
  &KPempty_vectorVKi
};

static _KLpairGVKd K383 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM0,
  &K384
};

static _KLpairGVKd K384 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM1,
  &K385
};

static _KLpairGVKd K385 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM2,
  &K386
};

static _KLpairGVKd K386 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_multi_buffered_streamYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K387 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42730509,
  &K389,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_30 K388 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "type-for-multi-buffered-stream"
};

static _KLsimple_object_vectorGVKd_3 K389 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K390,
  &KLobjectGVKd
};

static _KLunionGVKe K390 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K43,
  &KLtypeGVKd
};

static _KLkeyword_signatureGVKe K391 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K392,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K393,
  &KLobjectGVKd
};

static _KLsingletonGVKd K393 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyteGVKe
};

static _KLkeyword_signatureGVKe K394 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K395,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K395 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K396,
  &KLobjectGVKd
};

static _KLsingletonGVKd K396 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLcharacterGVKd
};

static _KLkeyword_signatureGVKe K397 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K398,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K398 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K399,
  &KLobjectGVKd
};

static _KLsingletonGVKd K399 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLkeyword_signatureGVKe K400 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K389,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K402 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39060485,
  &K404,
  &K405,
  &KDsignature_LobjectG_typesVKi,
  &K102
};

static _KLsimple_object_vectorGVKd_8 K403 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJlocator_,
  &KPfalseVKi,
  &KJdirection_,
  &KPfalseVKi,
  &KJelement_type_,
  &KLbyte_characterGVKe,
  &KJencoding_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K404 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K406
};

static _KLsimple_object_vectorGVKd_4 K405 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJlocator_,
  &KJdirection_,
  &KJelement_type_,
  &KJencoding_
};

static _KLsingletonGVKd K406 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmulti_buffered_streamGYstreams_internalsVio
};

static _KLsignatureAvaluesGVKi K407 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K102,
  &KDsignature_LbooleanG_typesVKi
};

static _KLkeyword_signatureGVKe K408 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K102,
  &K412,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K409 = {
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
  &K411
};

static _KLbyte_stringGVKd_12 K411 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLsimple_object_vectorGVKd_3 K412 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJabortQ_,
  &KJwaitQ_,
  &KJsynchronizeQ_
};

static _KLsymbolGVKd KJcurrent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K415
};

static _KLbyte_stringGVKd_32 K414 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_7 K415 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "current"
};

static _KLkeyword_signatureAvaluesGVKi K416 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K418,
  &K419,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K417 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfrom_,
  &KJcurrent_
};

static _KLsimple_object_vectorGVKd_2 K418 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K419 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfrom_
};

static _KLpairGVKd K420 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &K421
};

static _KLpairGVKd K421 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &K422
};

static _KLpairGVKd K422 = {
  &KLpairGVKdW /* wrapper */,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D KinitializeVKdMioM6I (D the_vector_, D initargs_, D requested_buffer_size_, D requested_number_of_buffers_, D stream_) {
  D requested_buffer_sizeF6;
  D requested_number_of_buffersF7;
  D streamF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;
  D buffer_size_;
  D shift_amount_;
  D number_of_buffers_;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  primitive_type_check(requested_buffer_size_, &K61);
  requested_buffer_sizeF6 = requested_buffer_size_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  primitive_type_check(requested_number_of_buffers_, &KLintegerGVKd);
  requested_number_of_buffersF7 = requested_number_of_buffers_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  primitive_type_check(stream_, &K193);
  streamF8 = stream_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:114
  if (requested_buffer_sizeF6 != &KPfalseVKi) {
    T19 = requested_buffer_sizeF6;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:115
    T9 = Kround_to_power_of_twoYstreams_internalsVioI(T19);
    T13 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:114
    if (streamF8 != &KPfalseVKi) {
      T20 = streamF8;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:117
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T10 = CONGRUENT_CALL1(T20);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:117
      T11 = CALL1(&Kaccessor_preferred_buffer_sizeYstreams_internalsVio, T10);
      T12 = T11;
    } else {
      T12 = (D) 4097;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:114
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:114
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:114
  T14_0 = Kround_to_power_of_twoYstreams_internalsVioI(T13);
  T14_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:112
  buffer_size_ = T14_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:112
  shift_amount_ = T14_1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:119
  SLOT_VALUE_SETTER(buffer_size_, the_vector_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  T21 = primitive_cast_integer_as_raw(shift_amount_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  T22 = primitive_machine_word_logxor(T21,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  T23 = primitive_machine_word_negative_signal_overflow(T22);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  T24 = primitive_machine_word_logior(T23,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  T25 = primitive_cast_raw_as_integer(T24);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:120
  SLOT_VALUE_SETTER(T25, the_vector_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:122
  number_of_buffers_ = Kround_to_power_of_twoYstreams_internalsVioI(requested_number_of_buffersF7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:123
  T26 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, Dempty_bufferYstreams_internalsVio, number_of_buffers_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:123
  SLOT_VALUE_SETTER(T26, the_vector_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:127
  T27 = primitive_cast_integer_as_raw(number_of_buffers_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:127
  T28 = primitive_machine_word_subtract_signal_overflow(T27,4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:127
  T29 = primitive_cast_raw_as_integer(T28);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:127
  SLOT_VALUE_SETTER(T29, the_vector_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:127
  T18 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  MV_SET_COUNT(0);
  return(T18);
}

D Kdo_get_output_bufferYstreamsVioMM2I (D the_stream_, D Urest_, D bytes_) {
  D T4_0;
  D T4_1;
  D the_buffer_;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:516
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:519
  T4_0 = Kdo_get_bufferYstreams_internalsVioMM0I(the_stream_, &KPempty_vectorVKi, &KPtrueVKi, bytes_);
  T4_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:519
  the_buffer_ = T4_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:521
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(the_buffer_, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:522
  SLOT_VALUE_SETTER((D) 1, the_buffer_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:523
  T6_0 = the_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:516
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdo_next_output_bufferYstreamsVioMM2I (D the_stream_, D Urest_, D bytes_) {
  D T4;
  D last_buffer_;
  D T6_0;
  D T6_1;
  D new_buffer_;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:528
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:532
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:531
  primitive_type_check(T4, &KLbufferGYstreamsVio);
  last_buffer_ = T4;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T9 = SLOT_VALUE_INITD(last_buffer_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T10 = SLOT_VALUE_INITD(last_buffer_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T13 = primitive_machine_word_logxor(T12,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T14 = primitive_machine_word_add_signal_overflow(T11,T13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:534
  T15 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:533
  Kstream_position_setterYstreams_protocolVcommon_dylanMioM5I(T15, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:536
  T6_0 = Kdo_get_bufferYstreams_internalsVioMM0I(the_stream_, &KPempty_vectorVKi, &KPtrueVKi, bytes_);
  T6_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:533
  new_buffer_ = T6_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:538
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(new_buffer_, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:539
  SLOT_VALUE_SETTER((D) 1, new_buffer_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:540
  T8_0 = new_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:528
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kdo_get_input_bufferYstreamsVioMM2I (D the_stream_, D Urest_, D waitQ_, D bytes_) {
  D T5_0;
  D T5_1;
  D the_buffer_;
  D eofQ_;
  D T8_0;
  D T9_0;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:289
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:294
  T5_0 = Kdo_get_bufferYstreams_internalsVioMM0I(the_stream_, &KPempty_vectorVKi, waitQ_, bytes_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:293
  the_buffer_ = T5_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:293
  eofQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:295
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(the_buffer_, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:296
  SLOT_VALUE_SETTER((D) 1, the_buffer_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:297
  if (eofQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:297
    T8_0 = &KPfalseVKi;
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:297
    T9_0 = the_buffer_;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:297
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:289
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kdo_next_input_bufferYstreamsVioMM2I (D the_stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D last_buffer_;
  D T7_0;
  D T7_1;
  D new_buffer_;
  D eofQ_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:499
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:503
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:502
  primitive_type_check(T5, &KLbufferGYstreamsVio);
  last_buffer_ = T5;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T13 = SLOT_VALUE_INITD(last_buffer_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T14 = SLOT_VALUE_INITD(last_buffer_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T15 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T16 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T18 = primitive_machine_word_add_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:505
  T19 = primitive_cast_raw_as_integer(T18);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:504
  Kstream_position_setterYstreams_protocolVcommon_dylanMioM5I(T19, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:507
  T7_0 = Kdo_get_bufferYstreams_internalsVioMM0I(the_stream_, &KPempty_vectorVKi, waitQ_, bytes_);
  T7_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:504
  new_buffer_ = T7_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:504
  eofQ_ = T7_1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:508
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(new_buffer_, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:509
  SLOT_VALUE_SETTER((D) 1, new_buffer_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:510
  if (eofQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:510
    T10_0 = &KPfalseVKi;
    T12_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:510
    T11_0 = new_buffer_;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:510
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:499
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdo_force_output_buffersYstreamsVioMM2I (D the_stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:630
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:632
  Kforce_output_buffersYstreamsVioMM2I(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:633
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:630
  MV_SET_COUNT(0);
  return(T2);
}

D Kforce_output_buffersYstreamsVioMM2I (D stream_) {
  D map_entry_;
  D map_entry_index_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D previous_buffer_;
  DWORD T13T, T13;
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
  D T27;
  D T28;
  D T29;
  D T30T, T30;
  D T31;
  D T32;
  D T33;
  D sordid_buffers_;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53_0;
  D T54;
  D T55;
  D T56;
  D T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  _KLsimple_object_vectorGVKd_4 T67 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_2 T68 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T69;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:546
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:548
  T42 = SLOT_VALUE_INITD(stream_, 12);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:548
  T43 = KemptyQVKdMM7I(T42);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:548
  if (T43 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:549
    CONGRUENT_CALL_PROLOG(&KlastVKd, 2);
    map_entry_ = CONGRUENT_CALL2(T42, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:550
    map_entry_index_ = CALL1(&Kbuffer_map_entry_indexYstreams_internalsVio, map_entry_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    T4 = CALL1(&Kbuffer_map_entry_emptyQYstreams_internalsVio, map_entry_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    if (T4 != &KPfalseVKi) {
      T6 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:552
      T44 = SLOT_VALUE(stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:552
      T45 = SLOT_VALUE(T44, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:552
      T46 = KelementVKdMM11I(T45, map_entry_index_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:552
      T5 = CALL1(&Kbuffer_dirtyQYstreamsVio, T46);
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:553
      T47 = SLOT_VALUE(stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:553
      T48 = SLOT_VALUE(T47, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:553
      T49 = KelementVKdMM11I(T48, map_entry_index_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:553
      T7 = CALL1(&Kbuffer_endYstreamsVio, T49);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:553
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T8 = CONGRUENT_CALL2(T7, (D) 1);
      T9 = T8;
    } else {
      T9 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:558
      T50 = SLOT_VALUE(stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:558
      T51 = SLOT_VALUE(T50, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:558
      T52 = KelementVKdMM11I(T51, map_entry_index_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:558
      T10 = CALL1(&Kbuffer_positionYstreamsVio, T52);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:558
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T11 = CONGRUENT_CALL2(T10, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:557
      CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(T11, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:559
      previous_buffer_ = Kdo_get_bufferYstreams_internalsVioMM0I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:560
      SLOT_VALUE_SETTER(&KPtrueVKi, previous_buffer_, 3);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:551
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:548
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:565
  T53_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:565
  T54 = T53_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:548
  sordid_buffers_ = T54;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  T55 = SLOT_VALUE(stream_, 13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  T56 = SLOT_VALUE(T55, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  T57 = SLOT_VALUE_INITD(T56, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  T58 = primitive_cast_integer_as_raw(T57);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  T13T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
    T59 = primitive_machine_word_equalQ(T13,T58);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
    if (T59 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
      T60 = REPEATED_D_SLOT_VALUE_TAGGED(T56, 1, T13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      T14 = CALL1(&Kbuffer_owning_streamYstreams_internalsVio, T60);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      T61 = SLOT_VALUE(stream_, 14);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      T62 = primitive_idQ(T14,T61);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      if (T62 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
        T15 = CALL1(&Kbuffer_dirtyQYstreamsVio, T60);
        T16 = T15;
      } else {
        T16 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:568
        T41 = sordid_buffers_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:568
        CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
        T17 = CONGRUENT_CALL2(T41, T60);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:568
        primitive_type_check(T17, &KLstretchy_vectorGVKd);
        T18 = T17;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:568
        sordid_buffers_ = T18;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:567
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
      T63 = primitive_machine_word_add_signal_overflow(T13,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
      T13T = T63;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:566
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  T64 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  T65 = primitive_idQ(T64,(D) 5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  if (T65 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
    T40 = sordid_buffers_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T19 = CONGRUENT_CALL1(T40);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
    T66 = primitive_not(T19);
    T20 = T66;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:572
    T67.vector_element_[0] = IKJstream_;
    T67.vector_element_[1] = stream_;
    T67.vector_element_[2] = &KJformat_string_;
    T67.vector_element_[3] = &K111;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:572
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T21 = CONGRUENT_CALL2(&KLstream_not_writableGYstreamsVio, &T67);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:572
    KerrorVKdMM0I(T21, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:580
    T39 = sordid_buffers_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:580
    T68.vector_element_[0] = &KJtest_;
    T68.vector_element_[1] = &Kanonymous_of_force_output_buffersF114;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:580
    CONGRUENT_CALL_PROLOG(&KsortXVKd, 2);
    T22 = CONGRUENT_CALL2(T39, &T68);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:579
    primitive_type_check(T22, &KLstretchy_vectorGVKd);
    T23 = T22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:579
    sordid_buffers_ = T23;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T38 = sordid_buffers_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T24 = CONGRUENT_CALL1(T38);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T25 = T24;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T26 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T27 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T28 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T29 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
    T30T = T25;
  L1: ;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
      T30 = T30T;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
      T37 = sordid_buffers_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
      T31 = CALL3(T28, T37, T30, T26);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
      if (T31 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
        T36 = sordid_buffers_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
        T32 = CALL2(T29, T36, T30);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:586
        CALL2(&Kforce_bufferYstreams_internalsVio, T32, stream_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
        T35 = sordid_buffers_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
        T33 = CALL2(T27, T35, T30);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
        T30T = T33;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:585
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:571
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:590
  T69 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:546
  MV_SET_COUNT(0);
  return(T69);
}

D Kstream_output_buffer_setterYstreams_internalsVioMM1I (D value_, D stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:281
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:284
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(value_, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:284
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:281
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_input_buffer_setterYstreams_internalsVioMM1I (D value_, D stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:275
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:278
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(value_, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:278
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:275
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_shared_buffer_setterYstreams_internalsVioMM1I (D value_, D stream_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:267
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
  T5 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
    KerrorVKdMM1I(&K38, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
    T6 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
    T7 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
    MEP_CALL_PROLOG(T6, T7, 2);
    MEP_CALL2(T6, value_, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:270
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:271
  SLOT_VALUE_SETTER(value_, stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:272
  SLOT_VALUE_SETTER(value_, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:272
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:267
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLmulti_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
  D T9;
  D T10;
  D Uunique_private_stream_lock_valueF11;
  D T12;
  D Uunique_stream_locatorF13;
  D T14;
  D Uunique_outer_streamF15;
  D Uunique_outer_streamF16;
  D Uunique_private_stream_element_type_valueF17;
  D Uunique_private_stream_lock_valueF18;
  D Uunique_stream_shared_bufferF19;
  D Uunique_accessorF20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  T23 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  if (T23 != &KPfalseVKi) {
    T9 = K92I();
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  T24 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = &KJlocator_;
    T26 = KerrorVKdMM1I(&K86, &T25);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
    T12 = T26;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  T14 = primitive_object_allocate_filled(16,&KLmulti_buffered_streamGYstreams_internalsVioW,15,&KPunboundVKi,0,0,&KPunboundVKi);
  T27 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T27 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K87);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K88);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K42);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K89);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  T21 = K91I();
  SLOT_VALUE_SETTER(T21, T14, 12);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 13);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 14);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T22_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:80
  MV_SET_COUNT(1);
  return(T22_0);
}

static D K83I () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:81
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:81
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLbuffer_mapGYstreams_internalsVio, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:81
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:81
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K92I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K91I () {
  D T0;
  D T1_0;

  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLbuffer_mapGYstreams_internalsVio, &KPempty_vectorVKi);
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kbuffer_map_entry_indexYstreams_internalsVioI (D bme_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:68
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T2 = primitive_cast_integer_as_raw(bme_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T3 = primitive_machine_word_bit_field_extract(2,26,T2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T4 = primitive_machine_word_logand(T3,-4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:70
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:68
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbuffer_map_entry_emptyQYstreams_internalsVioI (D bme_) {
  DWORD T2;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:48
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:50
  T2 = primitive_cast_integer_as_raw(bme_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:50
  T3 = primitive_machine_word_logbitQ(2,T2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:50
  T5 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:50
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:48
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kdo_get_bufferYstreams_internalsVioMM0I (D the_stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D buffer_index_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D the_buffer_;
  D eofQ_;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D shiftF31;
  D T32;
  D T33;
  D T34;
  DWORD mx_;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DSINT T51;
  DWORD T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  D T58;
  D T59;
  D T60_0;
  D T61;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  D T67;
  DWORD T68;
  DWORD T69;
  D T70;
  D T71;
  _KLsimple_object_vectorGVKd_4 T72 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T73;
  D T74;
  D T75;
  D T76;
  DWORD T77;
  D T78;
  DWORD T79;
  D T80;
  DWORD T81;
  D T82;
  DWORD T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  DWORD T89;
  DWORD T90;
  DWORD T91;
  D T92;
  D T93;
  DWORD T94;
  D T95;
  D T96;
  DWORD T97;
  D T98;
  D T99_0;
  D T99_1;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:303
  T15 = Kstream_positionYstreams_protocolVcommon_dylanMioM3I(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:304
  eofQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:305
  T16 = SLOT_VALUE(the_stream_, 13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
  T17 = SLOT_VALUE(T16, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
  T18 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
  T19 = primitive_machine_word_less_thanQ(T18,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T20 = primitive_machine_word_logxor(T18,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T21 = primitive_machine_word_negative_signal_overflow(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T22 = primitive_machine_word_logior(T21,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T23 = primitive_machine_word_less_thanQ(T22,257);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T24 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T26 = primitive_machine_word_shift_right(T21,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T25 = primitive_machine_word_shift_right(T24,T26);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T27 = primitive_machine_word_logand(T25,-4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T28 = primitive_machine_word_logior(T27,1);
      T52 = T28;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T29 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T30 = primitive_machine_word_less_thanQ(T29,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      if (T30 != &KPfalseVKi) {
        T51 = -3;
      } else {
        T51 = 1;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T52 = T51;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T53 = T52;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T39 = primitive_machine_word_less_thanQ(T18,257);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    if (T39 != &KPfalseVKi) {
      T38 = T17;
    } else {
      T38 = (D) 257;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    shiftF31 = T38;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T40 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T41 = primitive_machine_word_logxor(T40,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    mx_ = T41;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T34 = shiftF31;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T42 = primitive_cast_integer_as_raw(T34);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T43 = primitive_machine_word_equalQ(T42,257);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    if (T43 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      shiftF31 = (D) 129;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T33 = shiftF31;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T37 = mx_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T46 = primitive_cast_integer_as_raw(T33);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T45 = primitive_machine_word_shift_right(T46,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      T44 = primitive_machine_word_shift_left_signal_overflow(T37,T45);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
      mx_ = T44;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T32 = shiftF31;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T36 = mx_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T49 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T48 = primitive_machine_word_shift_right(T49,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T47 = primitive_machine_word_shift_left_signal_overflow(T36,T48);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
    T50 = primitive_machine_word_logior(T47,1);
    T53 = T50;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:307
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  T59 = primitive_cast_raw_as_integer(T53);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:308
  T54 = SLOT_VALUE_INITD(the_stream_, 12);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  T55 = SLOT_VALUE_INITD(T54, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  T56 = SLOT_VALUE_INITD(T55, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  T57 = primitive_cast_integer_as_raw(T56);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  T58 = primitive_machine_word_less_thanQ(T53,T57);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  if (T58 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:311
    Kgrow_buffer_mapYstreams_internalsVioI(the_stream_, T59);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:310
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  T61 = SLOT_VALUE_INITD(T54, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  T62 = SLOT_VALUE_INITD(T61, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  T63 = primitive_cast_integer_as_raw(T62);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  T64 = primitive_machine_word_unsigned_less_thanQ(T53,T63);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  if (T64 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
    T65 = REPEATED_D_SLOT_VALUE_TAGGED(T61, 2, T53);
    T67 = T65;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
    T60_0 = Kelement_range_errorVKeI(T54, T59);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
    T66 = T60_0;
    T67 = T66;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:314
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:316
  T5 = CALL1(&Kbuffer_map_entry_emptyQYstreams_internalsVio, T67);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:316
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:318
    buffer_index_ = Kpreempt_bufferYstreams_internalsVioI(the_stream_, T15, &KPempty_vectorVKi, waitQ_, bytes_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:319
    T7 = CALL1(&Kbuffer_map_entry_dirtyQYstreams_internalsVio, T67);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:319
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:320
      T8 = Tmulti_buffer_working_setTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:320
      T68 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:320
      T69 = primitive_machine_word_add_signal_overflow(T68,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:320
      T70 = primitive_cast_raw_as_integer(T69);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:320
      Tmulti_buffer_working_setTYstreams_internalsVio = T70;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:319
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:323
    T9 = CALL2(&Kbuffer_map_entry_deposit_indexYstreams_internalsVio, buffer_index_, T67);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T73 = primitive_instanceQ(T9,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    if (T73 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      T72.vector_element_[0] = &KJvalue_;
      T72.vector_element_[1] = T9;
      T72.vector_element_[2] = &KJtype_;
      T72.vector_element_[3] = &KLintegerGVKd;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T71 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T72);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T71, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T74 = primitive_machine_word_less_thanQ(T53,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    if (T74 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      Kelement_range_errorVKeI(T54, T59);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T75 = SLOT_VALUE_INITD(T54, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T76 = SLOT_VALUE_INITD(T75, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T77 = primitive_cast_integer_as_raw(T76);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T78 = primitive_machine_word_less_thanQ(T53,T77);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    if (T78 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      T79 = primitive_cast_integer_as_raw(T76);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      T80 = primitive_machine_word_equalQ(T53,T79);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
      if (T80 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        T81 = primitive_machine_word_add_signal_overflow(T53,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        T82 = primitive_cast_raw_as_integer(T81);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        Ktrusted_size_setterVKiMM4I(T82, T54);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        T83 = primitive_machine_word_add_signal_overflow(T53,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        T84 = primitive_cast_raw_as_integer(T83);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
        Ksize_setterVKdMM4I(T84, T54);
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    T85 = SLOT_VALUE_INITD(T54, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:322
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T9, T85, 2, T53);
    T11 = buffer_index_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:326
    T10 = CALL1(&Kbuffer_map_entry_indexYstreams_internalsVio, T67);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:316
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:329
  T86 = SLOT_VALUE(T16, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:329
  T87 = KelementVKdMM11I(T86, T11, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:328
  primitive_type_check(T87, &KLbufferGYstreamsVio);
  the_buffer_ = T87;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:332
  T88 = SLOT_VALUE(the_buffer_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:332
  T89 = primitive_cast_integer_as_raw(T88);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:332
  T90 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:332
  T91 = primitive_machine_word_logand(T89,T90);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:332
  T92 = primitive_cast_raw_as_integer(T91);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:333
  SLOT_VALUE_SETTER(T92, the_buffer_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  T93 = SLOT_VALUE_INITD(the_buffer_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  T94 = primitive_cast_integer_as_raw(T93);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  T95 = primitive_machine_word_less_thanQ(T94,T91);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  if (T95 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:337
    SLOT_VALUE_SETTER(&KPtrueVKi, the_buffer_, 3);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:338
    SLOT_VALUE_SETTER(T92, the_buffer_, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:339
    eofQ_ = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:340
    T96 = SLOT_VALUE_INITD(the_buffer_, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:340
    T97 = primitive_cast_integer_as_raw(T96);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:340
    T98 = primitive_machine_word_equalQ(T91,T97);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
    if (T98 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:341
      eofQ_ = &KPtrueVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:334
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:343
  T14 = eofQ_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:343
  T99_0 = the_buffer_;
  T99_1 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:300
  MV_SET_ELT(1, T99_1);
  MV_SET_COUNT(2);
  return(T99_0);
}

static D Kanonymous_of_force_output_buffersF114I (D buffer_1_, D buffer_2_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:582
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T2 = SLOT_VALUE_INITD(buffer_1_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T3 = SLOT_VALUE_INITD(buffer_2_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T4 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T6 = primitive_machine_word_less_thanQ(T4,T5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:583
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:582
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kstream_positionYstreams_protocolVcommon_dylanMioM3I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15_0;
  D T16_0;
  D T17_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:637
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:639
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:639
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:640
    CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:640
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:641
      CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
      T4 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:641
      T5 = CALL1(&Kbuffer_positionYstreamsVio, T4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:642
      CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
      T6 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:642
      T7 = CALL1(&Kbuffer_nextYstreamsVio, T6);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:641
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T8_0 = CONGRUENT_CALL2(T5, T7);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:641
      T16_0 = T8_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T8_0);
        primitive_type_check(T16_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T9_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:644
      T12 = SLOT_VALUE_INITD(stream_, 8);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:644
      T13_0 = T12;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:644
      T17_0 = T13_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T13_0);
        primitive_type_check(T17_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T9_0 = T17_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:640
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:647
    T14.vector_element_[0] = IKJstream_;
    T14.vector_element_[1] = stream_;
    T14.vector_element_[2] = &KJformat_string_;
    T14.vector_element_[3] = &K136;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:647
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:647
    T15_0 = KerrorVKdMM0I(T10, &KPempty_vectorVKi);
    T11_0 = T15_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:639
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:637
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kgrow_buffer_mapYstreams_internalsVioI (D the_stream_, D new_index_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  DWORD T7;
  DWORD map_indexF8T, map_indexF8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:346
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:351
  T2 = SLOT_VALUE_INITD(the_stream_, 12);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:351
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:351
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:352
  T10 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:356
  map_indexF8T = T10;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:356
    map_indexF8 = map_indexF8T;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:352
    T5 = primitive_cast_integer_as_raw(new_index_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:352
    T6 = primitive_machine_word_less_thanQ(T5,map_indexF8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:352
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:353
      KaddXVKdMM6I(T2, (D) 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:356
      T7 = primitive_machine_word_add_signal_overflow(map_indexF8,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:356
      map_indexF8T = T7;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:352
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:356
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:351
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:346
  MV_SET_COUNT(0);
  return(T9);
}

D Kpreempt_bufferYstreams_internalsVioI (D the_stream_, D the_position_, D Urest_, D waitQ_, D bytes_) {
  D T6;
  D the_bufferF7;
  D buffer_index_;
  D the_bufferF9;
  D T10;
  D the_owning_stream_;
  D buffer_map_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D the_bufferF22;
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
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D new_buffer_position_;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  _KLsimple_object_vectorGVKd_4 T48 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T49;
  D T50;
  DWORD T51;
  DWORD T52;
  D T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  D T58;
  D T59;
  DWORD T60;
  D T61;
  D T62;
  DWORD T63;
  DWORD T64;
  D T65;
  D the_bufferF66;
  D T67;
  D T68;
  DWORD T69;
  D T70;
  D T71;
  DWORD T72;
  D T73;
  D T74;
  DWORD T75;
  DWORD T76;
  D T77;
  D T78;
  D T79;
  D T80;
  DWORD T81;
  D T82;
  D T83;
  DWORD T84;
  DWORD T85;
  D T86;
  D T87;
  DWORD indexF88T, indexF88;
  D bufferF89T, bufferF89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94;
  D T95;
  _KLsimple_object_vectorGVKd_8 T96 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T97;
  D T98;
  DWORD T99;
  DWORD T100;
  D T101;
  D T102;
  DWORD T103;
  DWORD T104;
  DWORD T105;
  D T106;
  D T107;
  D T108;
  D T109;
  D T110;
  D T111;
  D T112;
  DWORD T113;
  D T114;
  DWORD T115;
  DWORD T116;
  DWORD T117;
  D T118;
  DWORD T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  D T124;
  DWORD T125;
  D T126;
  D shiftF127;
  D T128;
  D T129;
  D T130;
  DWORD mx_;
  DWORD T132;
  DWORD T133;
  D T134;
  D T135;
  DWORD T136;
  DWORD T137;
  DWORD T138;
  D T139;
  DWORD T140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  DWORD T144;
  DWORD T145;
  DWORD T146;
  D T147;
  D T148;
  D T149;
  D T150;
  D T151;
  D T152;
  _KLsimple_object_vectorGVKd_4 T153 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T154;
  D T155;
  DWORD T156;
  DWORD T157;
  DWORD T158;
  D T159;
  D T160;
  DWORD T161;
  DWORD T162;
  D T163;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:400
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:404
  T46 = SLOT_VALUE(the_stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:404
  T47 = primitive_idQ(T46,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:404
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:405
    T48.vector_element_[0] = IKJstream_;
    T48.vector_element_[1] = the_stream_;
    T48.vector_element_[2] = &KJformat_string_;
    T48.vector_element_[3] = &K127;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:405
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T48);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:405
    KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:404
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:409
  T49 = SLOT_VALUE(the_stream_, 13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T50 = SLOT_VALUE_INITD(T49, 3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T51 = primitive_cast_integer_as_raw(T50);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T52 = primitive_machine_word_add_signal_overflow(T51,4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:412
  T53 = SLOT_VALUE(T49, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T54 = primitive_cast_integer_as_raw(T53);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T55 = primitive_machine_word_logand(T52,T54);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:411
  T56 = primitive_cast_raw_as_integer(T55);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:414
  T57 = SLOT_VALUE(T49, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:414
  T58 = KelementVKdMM11I(T57, T56, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:413
  primitive_type_check(T58, &KLbufferGYstreamsVio);
  the_bufferF7 = T58;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  T59 = SLOT_VALUE_INITD(the_bufferF7, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  T60 = primitive_cast_integer_as_raw(T59);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  T61 = primitive_machine_word_less_thanQ(T60,13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  if (T61 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:416
    T62 = SLOT_VALUE_INITD(the_bufferF7, 7);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:416
    T63 = primitive_cast_integer_as_raw(T62);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:416
    T64 = primitive_machine_word_add_signal_overflow(T63,4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:416
    T65 = primitive_cast_raw_as_integer(T64);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:416
    SLOT_VALUE_SETTER(T65, the_bufferF7, 7);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:432
  indexF88T = T55;
  bufferF89T = the_bufferF7;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:432
    indexF88 = indexF88T;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:425
    T90 = primitive_cast_raw_as_integer(indexF88);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:432
    bufferF89 = bufferF89T;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:421
    T68 = SLOT_VALUE_INITD(bufferF89, 7);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:421
    T69 = primitive_cast_integer_as_raw(T68);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:421
    T70 = primitive_machine_word_equalQ(T69,13);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:421
    if (T70 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:422
      T71 = T90;
      MV_SET_ELT(0, T90);
      MV_SET_ELT(1, bufferF89);
      MV_SET_COUNT(2);
      T67 = T71;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:425
      T72 = primitive_machine_word_add_signal_overflow(indexF88,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:426
      T73 = SLOT_VALUE(the_stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:426
      T74 = SLOT_VALUE(T73, 2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:425
      T75 = primitive_cast_integer_as_raw(T74);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:425
      T76 = primitive_machine_word_logand(T72,T75);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:425
      T77 = primitive_cast_raw_as_integer(T76);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:428
      T78 = SLOT_VALUE(T49, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:428
      T79 = KelementVKdMM11I(T78, T77, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:427
      primitive_type_check(T79, &KLbufferGYstreamsVio);
      the_bufferF66 = T79;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:429
      T80 = SLOT_VALUE_INITD(the_bufferF66, 7);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:429
      T81 = primitive_cast_integer_as_raw(T80);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:429
      T82 = primitive_machine_word_less_thanQ(T81,13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:429
      if (T82 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:430
        T83 = SLOT_VALUE_INITD(the_bufferF66, 7);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:430
        T84 = primitive_cast_integer_as_raw(T83);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:430
        T85 = primitive_machine_word_add_signal_overflow(T84,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:430
        T86 = primitive_cast_raw_as_integer(T85);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:430
        SLOT_VALUE_SETTER(T86, the_bufferF66, 7);
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:429
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:432
      indexF88T = T76;
      bufferF89T = the_bufferF66;
      goto L0;
      T67 = T87;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:421
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:432
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  buffer_index_ = T67;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  the_bufferF9 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:415
  the_bufferF22 = the_bufferF9;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:435
  T91 = SLOT_VALUE(the_stream_, 13);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:435
  SLOT_VALUE_SETTER(buffer_index_, T91, 3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:435
  new_buffer_position_ = (D) 149;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:437
  T41 = the_bufferF22;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:437
  T92 = primitive_idQ(T41,Dempty_bufferYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:437
  if (T92 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:440
    T93 = SLOT_VALUE(the_stream_, 14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:441
    T94 = SLOT_VALUE(the_stream_, 13);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:441
    T95 = SLOT_VALUE(T94, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:439
    T96.vector_element_[0] = IKJstream_id_;
    T96.vector_element_[1] = T93;
    T96.vector_element_[2] = &KJsize_;
    T96.vector_element_[3] = T95;
    T96.vector_element_[4] = IKJknown_power_of_two_sizeQ_;
    T96.vector_element_[5] = &KPtrueVKi;
    T96.vector_element_[6] = &KJfill_;
    T96.vector_element_[7] = (D) 1;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:439
    T10 = Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I(&T96, &KPtrueVKi, T95, (D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:438
    the_bufferF22 = T10;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T40 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T97 = SLOT_VALUE(T49, 4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T98 = SLOT_VALUE_INITD(T97, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T99 = primitive_cast_integer_as_raw(buffer_index_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T100 = primitive_cast_integer_as_raw(T98);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    T101 = primitive_machine_word_unsigned_less_thanQ(T99,T100);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    if (T101 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T40, T97, 1, T99);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
      Kelement_range_errorVKeI(T97, buffer_index_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:443
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T39 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T102 = SLOT_VALUE(T39, 6);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T103 = primitive_cast_integer_as_raw(T102);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T104 = primitive_cast_integer_as_raw(the_position_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T105 = primitive_machine_word_logand(T103,T104);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    T106 = primitive_cast_raw_as_integer(T105);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:444
    new_buffer_position_ = T106;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:445
    T38 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:445
    T107 = SLOT_VALUE_INITD(T38, 9);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:446
    T37 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:446
    T45 = new_buffer_position_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:446
    Kload_bufferYstreams_internalsVioI(the_stream_, T37, T45, (D) 1, T107);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:452
    T36 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:452
    T108 = SLOT_VALUE_INITD(T36, 8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:452
    if (T108 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:454
      T35 = the_bufferF22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:454
      T109 = SLOT_VALUE_INITD(T35, 8);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:454
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      the_owning_stream_ = CONGRUENT_CALL3(Dstream_id_to_stream_mapYstreams_internalsVio, T109, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      T34 = the_bufferF22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      T110 = SLOT_VALUE_INITD(T34, 2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:457
      T111 = SLOT_VALUE(the_stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:457
      T112 = SLOT_VALUE(T111, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      T113 = primitive_cast_integer_as_raw(T112);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      T114 = primitive_machine_word_less_thanQ(T113,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      if (T114 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T115 = primitive_machine_word_logxor(T113,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T116 = primitive_machine_word_negative_signal_overflow(T115);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T117 = primitive_machine_word_logior(T116,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T118 = primitive_machine_word_less_thanQ(T117,257);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        if (T118 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T119 = primitive_cast_integer_as_raw(T110);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T121 = primitive_machine_word_shift_right(T116,2);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T120 = primitive_machine_word_shift_right(T119,T121);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T122 = primitive_machine_word_logand(T120,-4);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T123 = primitive_machine_word_logior(T122,1);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T124 = primitive_cast_raw_as_integer(T123);
          T149 = T124;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T125 = primitive_cast_integer_as_raw(T110);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T126 = primitive_machine_word_less_thanQ(T125,1);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          if (T126 != &KPfalseVKi) {
            T148 = (D) -3;
          } else {
            T148 = (D) 1;
          }
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T149 = T148;
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T150 = T149;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T135 = primitive_machine_word_less_thanQ(T113,257);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        if (T135 != &KPfalseVKi) {
          T134 = T112;
        } else {
          T134 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        shiftF127 = T134;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T136 = primitive_cast_integer_as_raw(T110);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T137 = primitive_machine_word_logxor(T136,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        mx_ = T137;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T130 = shiftF127;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T138 = primitive_cast_integer_as_raw(T130);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T139 = primitive_machine_word_equalQ(T138,257);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        if (T139 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          shiftF127 = (D) 129;
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T129 = shiftF127;
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T133 = mx_;
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T142 = primitive_cast_integer_as_raw(T129);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T141 = primitive_machine_word_shift_right(T142,2);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          T140 = primitive_machine_word_shift_left_signal_overflow(T133,T141);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
          mx_ = T140;
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T128 = shiftF127;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T132 = mx_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T145 = primitive_cast_integer_as_raw(T128);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T144 = primitive_machine_word_shift_right(T145,2);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T143 = primitive_machine_word_shift_left_signal_overflow(T132,T144);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T146 = primitive_machine_word_logior(T143,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
        T147 = primitive_cast_raw_as_integer(T146);
        T150 = T147;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:456
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:458
      buffer_map_ = CALL1(&Kbuffer_mapYstreams_internalsVio, the_owning_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:460
      T13 = CALL2(&KelementVKd, buffer_map_, T150);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:460
      T14 = CALL2(&Kbuffer_map_entry_deposit_emptyYstreams_internalsVio, &KPtrueVKi, T13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:459
      CALL3(&Kelement_setterVKd, T14, buffer_map_, T150);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:465
      T15 = CALL1(&Kstream_shared_bufferYstreams_internalsVio, the_owning_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:465
      T33 = the_bufferF22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:465
      T151 = primitive_idQ(T15,T33);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:465
      if (T151 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:468
        T16 = CALL1(&Kstream_positionYstreams_protocolVcommon_dylan, the_owning_stream_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:467
        CALL2(&Kcurrent_position_setterYstreams_internalsVio, T16, the_owning_stream_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:469
        CALL2(&Kstream_shared_buffer_setterYstreams_internalsVio, &KPfalseVKi, the_owning_stream_);
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:465
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      T32 = the_bufferF22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      T152 = SLOT_VALUE_INITD(T32, 3);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      if (T152 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
        T17 = CALL1(&Kread_onlyQYstreams_internalsVio, the_owning_stream_);
        T18 = T17;
      } else {
        T18 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:472
        T153.vector_element_[0] = IKJstream_;
        T153.vector_element_[1] = the_owning_stream_;
        T153.vector_element_[2] = &KJformat_string_;
        T153.vector_element_[3] = &K132;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:472
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T19 = CONGRUENT_CALL2(&KLstream_not_writableGYstreamsVio, &T153);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:472
        KerrorVKdMM0I(T19, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:471
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:479
      T31 = the_bufferF22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:479
      CALL2(&Kforce_bufferYstreams_internalsVio, T31, the_owning_stream_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:452
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:482
    T154 = SLOT_VALUE(the_stream_, 14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:482
    T30 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:482
    SLOT_VALUE_SETTER(T154, T30, 8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T29 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T155 = SLOT_VALUE(T29, 6);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T156 = primitive_cast_integer_as_raw(T155);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T157 = primitive_cast_integer_as_raw(the_position_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T158 = primitive_machine_word_logand(T156,T157);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    T159 = primitive_cast_raw_as_integer(T158);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:483
    new_buffer_position_ = T159;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:484
    T28 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:484
    T160 = SLOT_VALUE_INITD(T28, 9);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:485
    T27 = the_bufferF22;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:485
    T44 = new_buffer_position_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:485
    Kload_buffer_and_fillYstreams_internalsVioI(the_stream_, T27, T44, (D) 1, T160);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:437
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:488
  T20 = Tmulti_buffer_readsTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:488
  T161 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:488
  T162 = primitive_machine_word_add_signal_overflow(T161,4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:488
  T163 = primitive_cast_raw_as_integer(T162);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:488
  Tmulti_buffer_readsTYstreams_internalsVio = T163;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:489
  T43 = new_buffer_position_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:489
  T26 = the_bufferF22;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:489
  SLOT_VALUE_SETTER(T43, T26, 2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:490
  T25 = the_bufferF22;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:490
  SLOT_VALUE_SETTER((D) 1, T25, 4);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:491
  T24 = the_bufferF22;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:491
  SLOT_VALUE_SETTER(&KPfalseVKi, T24, 3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:492
  T23 = the_bufferF22;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:492
  SLOT_VALUE_SETTER((D) 1, T23, 7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:493
  T21_0 = buffer_index_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:400
  MV_SET_COUNT(1);
  return(T21_0);
}

D Kbuffer_map_entry_dirtyQYstreams_internalsVioI (D bme_) {
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:58
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:60
  T2 = primitive_cast_integer_as_raw(bme_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:60
  T3 = primitive_machine_word_logbitQ(3,T2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:60
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:58
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kbuffer_map_entry_deposit_indexYstreams_internalsVioI (D i_, D bme_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:73
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:77
  T4 = primitive_cast_integer_as_raw(i_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:77
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:77
  T5 = primitive_cast_integer_as_raw(bme_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:77
  T6 = primitive_machine_word_bit_field_deposit(T3,4,24,T5);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:76
  T7 = primitive_machine_word_logbit_set(2,T6);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:75
  T8 = primitive_machine_word_logbit_set(3,T7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:75
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:75
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:73
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kbuffer_map_entry_deposit_emptyYstreams_internalsVioI (D v_, D bme_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:53
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
  T3 = primitive_cast_integer_as_raw(bme_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
  if (v_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
    T5 = primitive_machine_word_logbit_clear(2,T3);
    T6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
    T4 = primitive_machine_word_logbit_set(2,T3);
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:55
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:53
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM5I (D the_position_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T18 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:653
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:656
  T9 = Kstream_sizeYstreams_protocolVcommon_dylanMioM3I(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  T10 = primitive_cast_integer_as_raw(the_position_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  T11 = primitive_machine_word_less_thanQ(T10,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  if (T11 != &KPfalseVKi) {
    T3 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
    T13 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
    T14 = primitive_machine_word_less_thanQ(T13,T10);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
    T12 = primitive_not(T14);
    T3 = T12;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:659
    SLOT_VALUE_SETTER(the_position_, stream_, 8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:660
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:662
    T15 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:662
    T16 = primitive_idQ(T15,(D) 17);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:662
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:663
      T17.vector_element_[0] = IKJstream_;
      T17.vector_element_[1] = stream_;
      T17.vector_element_[2] = &KJformat_string_;
      T17.vector_element_[3] = &K141;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:663
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T4 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T17);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:663
      KerrorVKdMM0I(T4, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:668
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T5 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:668
      T6 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:667
      T18.vector_element_[0] = IKJstream_;
      T18.vector_element_[1] = stream_;
      T18.vector_element_[2] = &KJsize_;
      T18.vector_element_[3] = T6;
      T18.vector_element_[4] = IKJposition_;
      T18.vector_element_[5] = &KpositionYcommon_extensionsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:667
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T18);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:667
      KerrorVKdMM0I(T7, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:662
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:657
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:671
  T8_0 = the_position_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:653
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kstream_sizeYstreams_protocolVcommon_dylanMioM3I (D the_stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D index_;
  D T8;
  D T9;
  D T10;
  D last_buffer_;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16_0;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36_0;
  D T37_0;
  D T38;
  D T39;
  _KLsimple_object_vectorGVKd_4 T40 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T41_0;
  D T42_0;
  D T43_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:235
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:237
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T2 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:237
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    T19 = SLOT_VALUE_INITD(the_stream_, 12);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    T20 = SLOT_VALUE_INITD(T19, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    T21 = SLOT_VALUE_INITD(T20, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    T22 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    T23 = primitive_machine_word_less_thanQ(1,T22);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:243
      CONGRUENT_CALL_PROLOG(&KlastVKd, 2);
      T3 = CONGRUENT_CALL2(T19, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:243
      T4 = CALL1(&Kbuffer_map_entry_emptyQYstreams_internalsVio, T3);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:243
      T24 = primitive_not(T4);
      T5 = T24;
    } else {
      T5 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:244
      CONGRUENT_CALL_PROLOG(&KlastVKd, 2);
      T6 = CONGRUENT_CALL2(T19, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:244
      index_ = CALL1(&Kbuffer_map_entry_indexYstreams_internalsVio, T6);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:245
      T25 = SLOT_VALUE(the_stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:245
      T26 = SLOT_VALUE(T25, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:245
      T27 = KelementVKdMM11I(T26, index_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:245
      primitive_type_check(T27, &K42);
      T28 = T27;
      T8 = T28;
    } else {
      T8 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:242
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:247
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:247
      T9 = CALL1(&Kbuffer_dirtyQYstreamsVio, T8);
      T10 = T9;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:247
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:247
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:248
      primitive_type_check(T8, &KLbufferGYstreamsVio);
      last_buffer_ = T8;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T29 = SLOT_VALUE_INITD(last_buffer_, 2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T30 = SLOT_VALUE_INITD(last_buffer_, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T31 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T32 = primitive_cast_integer_as_raw(T30);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T33 = primitive_machine_word_logxor(T32,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T34 = primitive_machine_word_add_signal_overflow(T31,T33);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T35 = primitive_cast_raw_as_integer(T34);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:250
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T12 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:250
      T13 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T12);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T37_0 = CONGRUENT_CALL2(T13, T35);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T38 = T37_0;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      if (T38 != &KPfalseVKi) {
        T39 = T35;
      } else {
        T39 = T13;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T36_0 = T39;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:249
      T42_0 = T36_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T36_0);
        primitive_type_check(T42_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T16_0 = T42_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:252
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T14 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:252
      T15_0 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T14);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:252
      T43_0 = T15_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T15_0);
        primitive_type_check(T43_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T16_0 = T43_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:247
    T18_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:255
    T40.vector_element_[0] = IKJstream_;
    T40.vector_element_[1] = the_stream_;
    T40.vector_element_[2] = &KJformat_string_;
    T40.vector_element_[3] = &K144;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:255
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T17 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T40);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:255
    T41_0 = KerrorVKdMM0I(T17, &KPempty_vectorVKi);
    T18_0 = T41_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:237
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:235
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kread_8_aligned_bytesYstreams_internalsVioI (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;
  D T7;
  D sb_;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  DBCHR T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DBCHR T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  DWORD T40;
  DBCHR T41;
  DWORD T42;
  DWORD T43;
  D T44;
  DWORD T45;
  DWORD T46;
  DBCHR T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DBCHR T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DWORD T57;
  DWORD T58;
  DBCHR T59;
  DWORD T60;
  DWORD T61;
  D T62;
  DWORD T63;
  DWORD T64;
  DBCHR T65;
  DWORD T66;
  DWORD T67;
  D T68;
  DWORD T69;
  DWORD T70;
  DBCHR T71;
  DWORD T72;
  DWORD T73;
  D T74;
  D T75_0;
  D T75_1;
  D T75_2;
  D T75_3;
  D T75_4;
  D T75_5;
  D T75_6;
  D T75_7;
  D T76_0;
  D T76_1;
  D T76_2;
  D T76_3;
  D T76_4;
  D T76_5;
  D T76_6;
  D T76_7;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:847
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T9 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T10 = SLOT_VALUE_INITD(T9, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T11 = SLOT_VALUE_INITD(T9, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T13 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T14 = primitive_machine_word_less_thanQ(T12,T13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      if (T14 != &KPfalseVKi) {
        T16 = T9;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
        T19_0 = Kdo_next_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
        T15 = T19_0;
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T18 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T20_0 = Kdo_get_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
      T17 = T20_0;
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:854
    if (T18 != &KPfalseVKi) {
      T7 = T18;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:855
      T5 = Tmulti_buffer_bytesTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:855
      T21 = primitive_cast_integer_as_raw(T5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:855
      T22 = primitive_machine_word_add_signal_overflow(T21,32);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:855
      T23 = primitive_cast_raw_as_integer(T22);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:855
      Tmulti_buffer_bytesTYstreams_internalsVio = T23;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:857
      T24 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:858
      T25 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:858
      T26 = primitive_machine_word_add_signal_overflow(T25,32);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:858
      T27 = primitive_cast_raw_as_integer(T26);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:858
      SLOT_VALUE_SETTER(T27, T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T29 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T28 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T29);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T30 = primitive_machine_word_shift_left_signal_overflow(T28,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T31 = primitive_machine_word_logior(T30,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T32 = primitive_cast_raw_as_integer(T31);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T33 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T34 = primitive_machine_word_add_signal_overflow(T33,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T35 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T34);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T36 = primitive_machine_word_shift_left_signal_overflow(T35,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T37 = primitive_machine_word_logior(T36,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T38 = primitive_cast_raw_as_integer(T37);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T39 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T40 = primitive_machine_word_add_signal_overflow(T39,8);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T41 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T40);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T42 = primitive_machine_word_shift_left_signal_overflow(T41,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T43 = primitive_machine_word_logior(T42,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T44 = primitive_cast_raw_as_integer(T43);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T45 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T46 = primitive_machine_word_add_signal_overflow(T45,12);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T47 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T46);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T48 = primitive_machine_word_shift_left_signal_overflow(T47,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T49 = primitive_machine_word_logior(T48,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T50 = primitive_cast_raw_as_integer(T49);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T51 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T52 = primitive_machine_word_add_signal_overflow(T51,16);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T53 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T52);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T54 = primitive_machine_word_shift_left_signal_overflow(T53,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T55 = primitive_machine_word_logior(T54,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T56 = primitive_cast_raw_as_integer(T55);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T57 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T58 = primitive_machine_word_add_signal_overflow(T57,20);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T59 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T58);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T60 = primitive_machine_word_shift_left_signal_overflow(T59,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T61 = primitive_machine_word_logior(T60,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T62 = primitive_cast_raw_as_integer(T61);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T63 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T64 = primitive_machine_word_add_signal_overflow(T63,24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T65 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T64);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T66 = primitive_machine_word_shift_left_signal_overflow(T65,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T67 = primitive_machine_word_logior(T66,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T68 = primitive_cast_raw_as_integer(T67);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T69 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T70 = primitive_machine_word_add_signal_overflow(T69,28);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T71 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T70);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T72 = primitive_machine_word_shift_left_signal_overflow(T71,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T73 = primitive_machine_word_logior(T72,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:861
      T74 = primitive_cast_raw_as_integer(T73);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:860
      T75_0 = T32;
      T75_1 = T38;
      T75_2 = T44;
      T75_3 = T50;
      T75_4 = T56;
      T75_5 = T62;
      T75_6 = T68;
      T75_7 = T74;
      T6_0 = T75_0;
      T6_1 = T75_1;
      T6_2 = T75_2;
      T6_3 = T75_3;
      T6_4 = T75_4;
      T6_5 = T75_5;
      T6_6 = T75_6;
      T6_7 = T75_7;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:864
      T76_0 = KerrorVKdMM1I(&K156, &KPempty_vectorVKi);
      T76_1 = MV_GET_ELT(1);
      T76_2 = MV_GET_ELT(2);
      T76_3 = MV_GET_ELT(3);
      T76_4 = MV_GET_ELT(4);
      T76_5 = MV_GET_ELT(5);
      T76_6 = MV_GET_ELT(6);
      T76_7 = MV_GET_ELT(7);
      T6_0 = T76_0;
      T6_1 = T76_1;
      T6_2 = T76_2;
      T6_3 = T76_3;
      T6_4 = T76_4;
      T6_5 = T76_5;
      T6_6 = T76_6;
      T6_7 = T76_7;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:854
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
    FALL_THROUGH_UNWIND(T6_0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:853
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:847
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kread_4_aligned_bytesYstreams_internalsVioI (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T7;
  D sb_;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  DBCHR T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DBCHR T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  DWORD T40;
  DBCHR T41;
  DWORD T42;
  DWORD T43;
  D T44;
  DWORD T45;
  DWORD T46;
  DBCHR T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51_0;
  D T51_1;
  D T51_2;
  D T51_3;
  D T52_0;
  D T52_1;
  D T52_2;
  D T52_3;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:827
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T9 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T10 = SLOT_VALUE_INITD(T9, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T11 = SLOT_VALUE_INITD(T9, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T13 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T14 = primitive_machine_word_less_thanQ(T12,T13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      if (T14 != &KPfalseVKi) {
        T16 = T9;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
        T19_0 = Kdo_next_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
        T15 = T19_0;
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T18 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T20_0 = Kdo_get_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
      T17 = T20_0;
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:833
    if (T18 != &KPfalseVKi) {
      T7 = T18;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:834
      T5 = Tmulti_buffer_bytesTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:834
      T21 = primitive_cast_integer_as_raw(T5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:834
      T22 = primitive_machine_word_add_signal_overflow(T21,16);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:834
      T23 = primitive_cast_raw_as_integer(T22);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:834
      Tmulti_buffer_bytesTYstreams_internalsVio = T23;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:836
      T24 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:837
      T25 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:837
      T26 = primitive_machine_word_add_signal_overflow(T25,16);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:837
      T27 = primitive_cast_raw_as_integer(T26);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:837
      SLOT_VALUE_SETTER(T27, T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T29 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T28 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T29);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T30 = primitive_machine_word_shift_left_signal_overflow(T28,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T31 = primitive_machine_word_logior(T30,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T32 = primitive_cast_raw_as_integer(T31);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T33 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T34 = primitive_machine_word_add_signal_overflow(T33,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T35 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T34);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T36 = primitive_machine_word_shift_left_signal_overflow(T35,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T37 = primitive_machine_word_logior(T36,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T38 = primitive_cast_raw_as_integer(T37);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T39 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T40 = primitive_machine_word_add_signal_overflow(T39,8);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T41 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T40);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T42 = primitive_machine_word_shift_left_signal_overflow(T41,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T43 = primitive_machine_word_logior(T42,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T44 = primitive_cast_raw_as_integer(T43);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T45 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T46 = primitive_machine_word_add_signal_overflow(T45,12);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T47 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T7, 10, T46);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T48 = primitive_machine_word_shift_left_signal_overflow(T47,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T49 = primitive_machine_word_logior(T48,1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T50 = primitive_cast_raw_as_integer(T49);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:839
      T51_0 = T32;
      T51_1 = T38;
      T51_2 = T44;
      T51_3 = T50;
      T6_0 = T51_0;
      T6_1 = T51_1;
      T6_2 = T51_2;
      T6_3 = T51_3;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:842
      T52_0 = KerrorVKdMM1I(&K164, &KPempty_vectorVKi);
      T52_1 = MV_GET_ELT(1);
      T52_2 = MV_GET_ELT(2);
      T52_3 = MV_GET_ELT(3);
      T6_0 = T52_0;
      T6_1 = T52_1;
      T6_2 = T52_2;
      T6_3 = T52_3;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:833
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
    FALL_THROUGH_UNWIND(T6_0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:832
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:827
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_COUNT(4);
  return(T6_0);
}

D Kwrite_8_aligned_bytesYstreams_internalsVioI (D stream_, D byte_1_, D byte_2_, D byte_3_, D byte_4_, D byte_5_, D byte_6_, D byte_7_, D byte_8_) {
  D T9;
  D T10;
  D sb_;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23_0;
  D T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  D T58;
  DWORD T59;
  DWORD T60;
  D T61;
  D T62;
  D T63;
  DWORD T64;
  D T65;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:808
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
  ENTER_UNWIND_FRAME(T9);
  if (!nlx_setjmp(FRAME_DEST(T9))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T12 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T13 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T14 = SLOT_VALUE_INITD(T12, 9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T15 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T16 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T17 = primitive_machine_word_less_thanQ(T15,T16);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      if (T17 != &KPfalseVKi) {
        T19 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
        T22_0 = Kdo_next_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
        T18 = T22_0;
        T19 = T18;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T21 = T19;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T23_0 = Kdo_get_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
      T20 = T23_0;
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:815
    T24 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T26 = primitive_cast_integer_as_raw(byte_1_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T25 = primitive_machine_word_shift_right(T26,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T27 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T25, T21, 10, T27);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T28 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T29 = primitive_machine_word_add_signal_overflow(T28,4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T31 = primitive_cast_integer_as_raw(byte_2_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T30 = primitive_machine_word_shift_right(T31,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T30, T21, 10, T29);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T32 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T33 = primitive_machine_word_add_signal_overflow(T32,8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T35 = primitive_cast_integer_as_raw(byte_3_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    T34 = primitive_machine_word_shift_right(T35,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:817
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T34, T21, 10, T33);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T36 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T37 = primitive_machine_word_add_signal_overflow(T36,12);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T39 = primitive_cast_integer_as_raw(byte_4_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T38 = primitive_machine_word_shift_right(T39,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T38, T21, 10, T37);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T40 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T41 = primitive_machine_word_add_signal_overflow(T40,16);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T43 = primitive_cast_integer_as_raw(byte_5_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T42 = primitive_machine_word_shift_right(T43,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T42, T21, 10, T41);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T44 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T45 = primitive_machine_word_add_signal_overflow(T44,20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T47 = primitive_cast_integer_as_raw(byte_6_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    T46 = primitive_machine_word_shift_right(T47,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:818
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T46, T21, 10, T45);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T48 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T49 = primitive_machine_word_add_signal_overflow(T48,24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T51 = primitive_cast_integer_as_raw(byte_7_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T50 = primitive_machine_word_shift_right(T51,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T50, T21, 10, T49);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T52 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T53 = primitive_machine_word_add_signal_overflow(T52,28);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T55 = primitive_cast_integer_as_raw(byte_8_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    T54 = primitive_machine_word_shift_right(T55,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:819
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T54, T21, 10, T53);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:821
    T56 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:821
    T57 = primitive_machine_word_add_signal_overflow(T56,32);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:821
    T58 = primitive_cast_raw_as_integer(T57);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:821
    SLOT_VALUE_SETTER(T58, T21, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T59 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T60 = primitive_machine_word_add_signal_overflow(T59,32);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T61 = primitive_cast_raw_as_integer(T60);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T62 = SLOT_VALUE_INITD(T21, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T64 = primitive_cast_integer_as_raw(T62);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    T65 = primitive_machine_word_less_thanQ(T64,T60);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    if (T65 != &KPfalseVKi) {
      T63 = T61;
    } else {
      T63 = T62;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:822
    SLOT_VALUE_SETTER(T63, T21, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:823
    SLOT_VALUE_SETTER(&KPtrueVKi, T21, 3);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:823
    T10 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
    FALL_THROUGH_UNWIND(T10);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:813
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:808
  MV_SET_COUNT(0);
  return(T10);
}

D Kwrite_4_aligned_bytesYstreams_internalsVioI (D stream_, D byte_1_, D byte_2_, D byte_3_, D byte_4_) {
  D T5;
  D T6;
  D sb_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  DWORD T40;
  D T41;
  D T42;
  D T43;
  DWORD T44;
  D T45;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:792
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
  ENTER_UNWIND_FRAME(T5);
  if (!nlx_setjmp(FRAME_DEST(T5))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T8 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T9 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T10 = SLOT_VALUE_INITD(T8, 9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T11 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T13 = primitive_machine_word_less_thanQ(T11,T12);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      if (T13 != &KPfalseVKi) {
        T15 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
        T18_0 = Kdo_next_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
        T14 = T18_0;
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T17 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T19_0 = Kdo_get_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
      T16 = T19_0;
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:797
    T20 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T22 = primitive_cast_integer_as_raw(byte_1_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T21 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T23 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T21, T17, 10, T23);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T24 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T25 = primitive_machine_word_add_signal_overflow(T24,4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T27 = primitive_cast_integer_as_raw(byte_2_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T26 = primitive_machine_word_shift_right(T27,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T26, T17, 10, T25);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T28 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T29 = primitive_machine_word_add_signal_overflow(T28,8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T31 = primitive_cast_integer_as_raw(byte_3_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    T30 = primitive_machine_word_shift_right(T31,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:799
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T30, T17, 10, T29);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:800
    T32 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:800
    T33 = primitive_machine_word_add_signal_overflow(T32,12);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:800
    T35 = primitive_cast_integer_as_raw(byte_4_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:800
    T34 = primitive_machine_word_shift_right(T35,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:800
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T34, T17, 10, T33);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:802
    T36 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:802
    T37 = primitive_machine_word_add_signal_overflow(T36,16);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:802
    T38 = primitive_cast_raw_as_integer(T37);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:802
    SLOT_VALUE_SETTER(T38, T17, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T39 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T40 = primitive_machine_word_add_signal_overflow(T39,16);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T41 = primitive_cast_raw_as_integer(T40);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T42 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T44 = primitive_cast_integer_as_raw(T42);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    T45 = primitive_machine_word_less_thanQ(T44,T40);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    if (T45 != &KPfalseVKi) {
      T43 = T41;
    } else {
      T43 = T42;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:803
    SLOT_VALUE_SETTER(T43, T17, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:804
    SLOT_VALUE_SETTER(&KPtrueVKi, T17, 3);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:804
    T6 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
    FALL_THROUGH_UNWIND(T6);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:795
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:792
  MV_SET_COUNT(0);
  return(T6);
}

D Kread_4_aligned_bytes_as_wordYstreams_internalsVioI (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D T5;
  D T6;
  DADDR T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  D sb_;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24_0;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:771
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T13 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T14 = SLOT_VALUE_INITD(T13, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T15 = SLOT_VALUE_INITD(T13, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T16 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T17 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T18 = primitive_machine_word_less_thanQ(T16,T17);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      if (T18 != &KPfalseVKi) {
        T20 = T13;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
        T23_0 = Kdo_next_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
        T19 = T23_0;
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T22 = T20;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T24_0 = Kdo_get_input_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, &KPtrueVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
      T21 = T24_0;
      T22 = T21;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:776
    if (T22 != &KPfalseVKi) {
      T11 = T22;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:778
      T25 = SLOT_VALUE_INITD(T11, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:779
      T26 = primitive_cast_integer_as_raw(T25);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:779
      T27 = primitive_machine_word_add_signal_overflow(T26,16);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:779
      T28 = primitive_cast_raw_as_integer(T27);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:779
      SLOT_VALUE_SETTER(T28, T11, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:783
      T5 = primitive_repeated_slot_as_raw(T11,11);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:784
      T30 = primitive_cast_integer_as_raw(T25);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:784
      T29 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:782
      T6 = primitive_element(T5,0,T29);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:781
      T7 = primitive_cast_pointer_as_raw(T6);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:780
      T8 = primitive_wrap_machine_word(T7);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:780
      T9_0 = T8;
      T10_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:786
      KerrorVKdMM1I(&K164, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:787
      T31_0 = &K176;
      T10_0 = T31_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:776
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
    FALL_THROUGH_UNWIND(T10_0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:775
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:771
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kwrite_4_aligned_bytes_from_wordYstreams_internalsVioI (D stream_, D word_) {
  D T2;
  DWORD T3;
  D T4;
  D T5;
  D T6;
  D sb_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:756
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
  ENTER_UNWIND_FRAME(T2);
  if (!nlx_setjmp(FRAME_DEST(T2))) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T8 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T9 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T10 = SLOT_VALUE_INITD(T8, 9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T11 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T13 = primitive_machine_word_less_thanQ(T11,T12);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      if (T13 != &KPfalseVKi) {
        T15 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
        T18_0 = Kdo_next_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
        T14 = T18_0;
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T17 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T19_0 = Kdo_get_output_bufferYstreamsVioMM2I(stream_, &KPempty_vectorVKi, (D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
      T16 = T19_0;
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:760
    T20 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:764
    T3 = primitive_unwrap_machine_word(word_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:764
    T4 = primitive_cast_raw_as_pointer(T3);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:762
    T5 = primitive_repeated_slot_as_raw(T17,11);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:763
    T22 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:763
    T21 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:761
    primitive_element_setter(T4,T5,0,T21);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:765
    T23 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:765
    T24 = primitive_machine_word_add_signal_overflow(T23,16);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:765
    T25 = primitive_cast_raw_as_integer(T24);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:765
    SLOT_VALUE_SETTER(T25, T17, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T26 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T27 = primitive_machine_word_add_signal_overflow(T26,16);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T28 = primitive_cast_raw_as_integer(T27);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T29 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T31 = primitive_cast_integer_as_raw(T29);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    T32 = primitive_machine_word_less_thanQ(T31,T27);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    if (T32 != &KPfalseVKi) {
      T30 = T28;
    } else {
      T30 = T29;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:766
    SLOT_VALUE_SETTER(T30, T17, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:767
    SLOT_VALUE_SETTER(&KPtrueVKi, T17, 3);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:767
    T6 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
    FALL_THROUGH_UNWIND(T6);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:758
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:756
  MV_SET_COUNT(0);
  return(T6);
}

D Kmulti_buffered_stream_position_setterYstreams_internalsVioI (D the_position_, D stream_) {
  D T2;
  D T3;
  D the_buffer_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_4 T36 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T37 = {&KLsimple_object_vectorGVKdW, (D) 25};
  DWORD T38;
  D T39;
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_4 T42 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T43 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:677
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:680
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:680
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:681
    CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:681
    primitive_type_check(T3, &KLbufferGYstreamsVio);
    the_buffer_ = T3;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T14 = SLOT_VALUE_INITD(the_buffer_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T15 = SLOT_VALUE_INITD(the_buffer_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T16 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T17 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T18 = primitive_machine_word_logxor(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T19 = primitive_machine_word_add_signal_overflow(T16,T18);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    T21 = primitive_idQ(T20,the_position_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    if (T21 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T22 = SLOT_VALUE(the_buffer_, 6);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T23 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T24 = primitive_cast_integer_as_raw(the_position_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T25 = primitive_machine_word_logand(T23,T24);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T26 = primitive_cast_raw_as_integer(T25);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:685
      T27 = SLOT_VALUE_INITD(the_buffer_, 2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:684
      T28 = primitive_idQ(T26,T27);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:688
        T29 = SLOT_VALUE(the_buffer_, 5);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:688
        T30 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:688
        T31 = primitive_machine_word_logand(T30,T24);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:688
        T32 = primitive_cast_raw_as_integer(T31);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:687
        SLOT_VALUE_SETTER(T32, the_buffer_, 0);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:689
        T33 = primitive_machine_word_less_thanQ(T24,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:693
          T34 = SLOT_VALUE(stream_, 2);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:693
          T35 = primitive_idQ(T34,(D) 17);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:693
          if (T35 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:694
            T36.vector_element_[0] = IKJstream_;
            T36.vector_element_[1] = stream_;
            T36.vector_element_[2] = &KJformat_string_;
            T36.vector_element_[3] = &K141;
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:694
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T5 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T36);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:694
            KerrorVKdMM0I(T5, &KPempty_vectorVKi);
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:699
            CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
            T6 = CONGRUENT_CALL1(stream_);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:699
            T7 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T6);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:698
            T37.vector_element_[0] = IKJstream_;
            T37.vector_element_[1] = stream_;
            T37.vector_element_[2] = &KJsize_;
            T37.vector_element_[3] = T7;
            T37.vector_element_[4] = IKJposition_;
            T37.vector_element_[5] = &KpositionYcommon_extensionsVcommon_dylan;
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:698
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T8 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T37);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:698
            KerrorVKdMM0I(T8, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:693
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:690
          SLOT_VALUE_SETTER(the_position_, stream_, 8);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:691
          CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
          CONGRUENT_CALL2(&KPfalseVKi, stream_);
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:682
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:702
    T38 = primitive_cast_integer_as_raw(the_position_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:702
    T39 = primitive_machine_word_less_thanQ(T38,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:680
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:705
      T40 = SLOT_VALUE(stream_, 2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:705
      T41 = primitive_idQ(T40,(D) 17);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:705
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:706
        T42.vector_element_[0] = IKJstream_;
        T42.vector_element_[1] = stream_;
        T42.vector_element_[2] = &KJformat_string_;
        T42.vector_element_[3] = &K141;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:706
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T9 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T42);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:706
        KerrorVKdMM0I(T9, &KPempty_vectorVKi);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:711
        CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
        T10 = CONGRUENT_CALL1(stream_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:711
        T11 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T10);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:710
        T43.vector_element_[0] = IKJstream_;
        T43.vector_element_[1] = stream_;
        T43.vector_element_[2] = &KJsize_;
        T43.vector_element_[3] = T11;
        T43.vector_element_[4] = IKJposition_;
        T43.vector_element_[5] = &KpositionYcommon_extensionsVcommon_dylan;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:710
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T12 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T43);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:710
        KerrorVKdMM0I(T12, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:705
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:703
      SLOT_VALUE_SETTER(the_position_, stream_, 8);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:680
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:680
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:714
  T13_0 = the_position_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:677
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kmulti_buffer_total_working_setYstreams_internalsVioI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:373
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:374
  T0 = Tmulti_buffer_working_setTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:374
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:373
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kmulti_buffer_total_readsYstreams_internalsVioI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:367
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:368
  T0 = Tmulti_buffer_readsTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:368
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:367
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kmulti_buffer_total_bytesYstreams_internalsVioI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:361
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:362
  T0 = Tmulti_buffer_bytesTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:362
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:361
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLbyte_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
  D T9;
  D T10;
  D Uunique_private_stream_lock_valueF11;
  D T12;
  D Uunique_stream_locatorF13;
  D T14;
  D Uunique_outer_streamF15;
  D Uunique_outer_streamF16;
  D Uunique_private_stream_element_type_valueF17;
  D Uunique_private_stream_lock_valueF18;
  D Uunique_stream_shared_bufferF19;
  D Uunique_accessorF20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  T23 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  if (T23 != &KPfalseVKi) {
    T9 = K248I();
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  T24 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = &KJlocator_;
    T26 = KerrorVKdMM1I(&K86, &T25);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
    T12 = T26;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  T14 = primitive_object_allocate_filled(21,&KLbyte_multi_buffered_streamGYstreams_internalsVioW,20,&KPunboundVKi,0,0,&KPunboundVKi);
  T27 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T27 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K87);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K88);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K42);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K89);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  T21 = K247I();
  SLOT_VALUE_SETTER(T21, T14, 12);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 13);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 14);
  SLOT_VALUE_SETTER(&KLsimple_byte_vectorGVKe, T14, 15);
  SLOT_VALUE_SETTER(&Kbyte_to_byteYstreams_internalsVio, T14, 16);
  SLOT_VALUE_SETTER(&Kbyte_to_byteYstreams_internalsVio, T14, 17);
  SLOT_VALUE_SETTER(&K246, T14, 18);
  SLOT_VALUE_SETTER(&K245, T14, 19);
  MEP_APPLY2(&KinitializeVKdMioM7, &K222, T14, init_args_);
  T22_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:98
  MV_SET_COUNT(1);
  return(T22_0);
}

static D K248I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K247I () {
  D T0;
  D T1_0;

  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLbuffer_mapGYstreams_internalsVio, &KPempty_vectorVKi);
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K246I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  MV_SET_COUNT(0);
  return(T5);
}

static D K245I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  MV_SET_COUNT(0);
  return(T5);
}

D KinitializeVKdMioM7I (D the_stream_, D initargs_, D direction_, D input_buffer_vector_, D requested_buffer_size_, D requested_number_of_buffers_) {
  D input_buffer_vectorF7;
  D directionF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_6 T16 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:139
  T15 = primitive_copy_vector(initargs_);
  T13 = primitive_next_methods_parameter();
  T14 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF238, 3, T15, T13, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:139
  primitive_type_check(input_buffer_vector_, &K230);
  input_buffer_vectorF7 = input_buffer_vector_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:146
  directionF8 = CALL1(&Kmulti_buffered_stream_directionYstreams_internalsVioMM0, direction_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:147
  APPLY4(T14, the_stream_, &KJdirection_, directionF8, T15);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:150
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(&KPfalseVKi, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:153
  if (input_buffer_vectorF7 != &KPfalseVKi) {
    T10 = input_buffer_vectorF7;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:156
    T16.vector_element_[0] = IKJstream_;
    T16.vector_element_[1] = the_stream_;
    T16.vector_element_[2] = IKJbuffer_size_;
    T16.vector_element_[3] = requested_buffer_size_;
    T16.vector_element_[4] = IKJnumber_of_buffers_;
    T16.vector_element_[5] = requested_number_of_buffers_;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:156
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLbuffer_vectorGYstreams_internalsVio, &T16);
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:153
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:152
  CALL2(&Kbuffer_vector_setterYstreams_internalsVio, T10, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:161
  T11 = Knew_stream_idYstreams_internalsVioI(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:161
  SLOT_VALUE_SETTER(T11, the_stream_, 14);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:161
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:139
  MV_SET_COUNT(0);
  return(T12);
}

static D Kanonymous_of_initializeF238I (D Unext_method_argsU_) {
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
    T14 = KerrorVKdMM1I(&K38, &KPempty_vectorVKi);
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

D Kmulti_buffered_stream_directionYstreams_internalsVioMM0I (D direction_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:130
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:132
  T5 = primitive_idQ(direction_,&KJinput_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:132
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:133
    T2_0 = &KJinput_;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:135
    T3_0 = &KJinput_output_;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:132
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:130
  MV_SET_COUNT(1);
  return(T4_0);
}

D Knew_stream_idYstreams_internalsVioI (D the_stream_) {
  D new_id_;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:29
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:32
  T5 = KemptyQVKdMM14I(Dfree_stream_idsYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:32
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:35
    T7 = SLOT_VALUE_INITD(Dstream_id_to_stream_mapYstreams_internalsVio, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:35
    T8 = SLOT_VALUE_INITD(T7, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:36
    T9 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:36
    T10 = primitive_machine_word_add_signal_overflow(T9,4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:36
    T11 = primitive_cast_raw_as_integer(T10);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:36
    Ksize_setterVKdMM1I(T11, Dstream_id_to_stream_mapYstreams_internalsVio);
    new_id_ = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:33
    T6 = KpopVKdMM0I(Dfree_stream_idsYstreams_internalsVio);
    new_id_ = T6;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:32
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:39
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(the_stream_, Dstream_id_to_stream_mapYstreams_internalsVio, new_id_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:40
  T3_0 = new_id_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:29
  T4_0 = T3_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T3_0);
    primitive_type_check(T4_0, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:29
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLbyte_char_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
  D T9;
  D T10;
  D Uunique_private_stream_lock_valueF11;
  D T12;
  D Uunique_stream_locatorF13;
  D T14;
  D Uunique_outer_streamF15;
  D Uunique_outer_streamF16;
  D Uunique_private_stream_element_type_valueF17;
  D Uunique_private_stream_lock_valueF18;
  D Uunique_stream_shared_bufferF19;
  D Uunique_accessorF20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  T23 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  if (T23 != &KPfalseVKi) {
    T9 = K266I();
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  T24 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = &KJlocator_;
    T26 = KerrorVKdMM1I(&K86, &T25);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
    T12 = T26;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  T14 = primitive_object_allocate_filled(21,&KLbyte_char_multi_buffered_streamGYstreams_internalsVioW,20,&KPunboundVKi,0,0,&KPunboundVKi);
  T27 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T27 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K87);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K88);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K42);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K89);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  T21 = K265I();
  SLOT_VALUE_SETTER(T21, T14, 12);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 13);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 14);
  SLOT_VALUE_SETTER(&KLbyte_stringGVKd, T14, 15);
  SLOT_VALUE_SETTER(&Kbyte_to_byte_charYstreams_internalsVio, T14, 16);
  SLOT_VALUE_SETTER(&Kbyte_char_to_byteYstreams_internalsVio, T14, 17);
  SLOT_VALUE_SETTER(&K246, T14, 18);
  SLOT_VALUE_SETTER(&K245, T14, 19);
  MEP_APPLY2(&KinitializeVKdMioM7, &K222, T14, init_args_);
  T22_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:92
  MV_SET_COUNT(1);
  return(T22_0);
}

static D K266I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K265I () {
  D T0;
  D T1_0;

  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLbuffer_mapGYstreams_internalsVio, &KPempty_vectorVKi);
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLgeneral_multi_buffered_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
  D T9;
  D T10;
  D Uunique_private_stream_lock_valueF11;
  D T12;
  D Uunique_stream_locatorF13;
  D T14;
  D Uunique_outer_streamF15;
  D Uunique_outer_streamF16;
  D Uunique_private_stream_element_type_valueF17;
  D Uunique_private_stream_lock_valueF18;
  D Uunique_stream_shared_bufferF19;
  D Uunique_accessorF20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  T23 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  if (T23 != &KPfalseVKi) {
    T9 = K284I();
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  T24 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = &KJlocator_;
    T26 = KerrorVKdMM1I(&K86, &T25);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
    T12 = T26;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  T14 = primitive_object_allocate_filled(21,&KLgeneral_multi_buffered_streamGYstreams_internalsVioW,20,&KPunboundVKi,0,0,&KPunboundVKi);
  T27 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T27 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K87);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K88);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K42);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K89);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  T21 = K283I();
  SLOT_VALUE_SETTER(T21, T14, 12);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 13);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 14);
  SLOT_VALUE_SETTER(&KLbyte_stringGVKd, T14, 15);
  SLOT_VALUE_SETTER(&Kbyte_to_byte_charYstreams_internalsVio, T14, 16);
  SLOT_VALUE_SETTER(&Kbyte_char_to_byteYstreams_internalsVio, T14, 17);
  SLOT_VALUE_SETTER(&K246, T14, 18);
  SLOT_VALUE_SETTER(&K245, T14, 19);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T22_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:86
  MV_SET_COUNT(1);
  return(T22_0);
}

static D K284I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K283I () {
  D T0;
  D T1_0;

  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLbuffer_mapGYstreams_internalsVio, &KPempty_vectorVKi);
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLbuffer_vectorGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:9
  T3 = primitive_object_allocate_filled(6,&KLbuffer_vectorGYstreams_internalsVioW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 2);
  SLOT_VALUE_SETTER((D) 1, T3, 3);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 4);
  MEP_APPLY2(&KinitializeVKdMioM6, &K225, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:9
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kmulti_buffer_readsYstreams_internalsVioMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:377
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:379
  T2_0 = Kmulti_buffer_total_readsYstreams_internalsVioI();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:377
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmulti_buffer_bytesYstreams_internalsVioMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:382
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:384
  T2_0 = Kmulti_buffer_total_bytesYstreams_internalsVioI();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:382
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmulti_buffer_working_setYstreams_internalsVioMM0I (D stream_) {
  DWORD T2T, T2;
  D T3;
  D T4_0;
  D count_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:387
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:388
  count_ = (D) 1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  T8 = SLOT_VALUE_INITD(stream_, 12);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  T9 = SLOT_VALUE_INITD(T8, 1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
    T12 = primitive_machine_word_equalQ(T2,T11);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
      T13 = SLOT_VALUE_INITD(T8, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(T13, 2, T2);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:390
      T3 = CALL1(&Kbuffer_map_entry_dirtyQYstreams_internalsVio, T14);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:390
      if (T3 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:391
        T7 = count_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:391
        T15 = primitive_cast_integer_as_raw(T7);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:391
        T16 = primitive_machine_word_add_signal_overflow(T15,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:391
        T17 = primitive_cast_raw_as_integer(T16);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:391
        count_ = T17;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:390
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
      T18 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
      T2T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:389
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:394
  T6 = count_;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:394
  T4_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:387
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3I (D stream_, D delta_, D Urest_, D from_) {
  DWORD T5;
  DWORD T6;
  DWORD position_from_start_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  _KLsimple_object_vectorGVKd_4 T34 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T35 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:717
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:721
  T13 = Kstream_sizeYstreams_protocolVcommon_dylanMioM3I(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
  T14 = primitive_idQ(from_,IKJcurrent_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:724
    T15 = Kstream_positionYstreams_protocolVcommon_dylanMioM3I(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:724
    T16 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:724
    T17 = primitive_cast_integer_as_raw(delta_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:724
    T18 = primitive_machine_word_logxor(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:724
    T19 = primitive_machine_word_add_signal_overflow(T16,T18);
    position_from_start_ = T19;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
    T20 = primitive_idQ(from_,&KJstart_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
      T30 = primitive_cast_integer_as_raw(delta_);
      T6 = T30;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
      T21 = primitive_idQ(from_,&KJend_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:726
        T22 = primitive_cast_integer_as_raw(T13);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:726
        T23 = primitive_cast_integer_as_raw(delta_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:726
        T24 = primitive_machine_word_logxor(T23,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:726
        T25 = primitive_machine_word_add_signal_overflow(T22,T24);
        T5 = T25;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
        T26.vector_element_[0] = from_;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
        T27 = KerrorVKdMM1I(&K414, &T26);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
        T31 = primitive_cast_integer_as_raw(T27);
        T5 = T31;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
    position_from_start_ = T6;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:723
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
  T29 = primitive_cast_raw_as_integer(position_from_start_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
  T28 = primitive_machine_word_less_thanQ(position_from_start_,1);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:729
    T32 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:729
    T33 = primitive_idQ(T32,(D) 17);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:729
    if (T33 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:730
      T34.vector_element_[0] = IKJstream_;
      T34.vector_element_[1] = stream_;
      T34.vector_element_[2] = &KJformat_string_;
      T34.vector_element_[3] = &K141;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:730
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T34);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:730
      KerrorVKdMM0I(T8, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:735
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T9 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:735
      T10 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T9);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:734
      T35.vector_element_[0] = IKJstream_;
      T35.vector_element_[1] = stream_;
      T35.vector_element_[2] = &KJsize_;
      T35.vector_element_[3] = T10;
      T35.vector_element_[4] = IKJposition_;
      T35.vector_element_[5] = &KpositionYcommon_extensionsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:734
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T11 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T35);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:734
      KerrorVKdMM0I(T11, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:729
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:739
    SLOT_VALUE_SETTER(T29, stream_, 8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:740
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:728
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:742
  T12_0 = T29;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:717
  MV_SET_COUNT(1);
  return(T12_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM5I (D stream_, D keys_, D abortQ_, D waitQ_, D synchronizeQ_) {
  D T6;
  DWORD T7T, T7;
  D T8;
  DWORD T9T, T9;
  D T10;
  DWORD map_index_T, map_index_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  D T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  DWORD T44;
  D T45;
  D T46;
  D T47_0;
  D T48;
  D T49;
  DWORD T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  _KLsimple_object_vectorGVKd_4 T56 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T57;
  D T58;
  D T59;
  D T60;
  DWORD T61;
  D T62;
  DWORD T63;
  D T64;
  DWORD T65;
  D T66;
  DWORD T67;
  D T68;
  D T69;
  DWORD T70;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:593
  T17 = primitive_copy_vector(keys_);
  T16 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:597
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:597
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:598
    if (abortQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
      T18 = SLOT_VALUE(stream_, 13);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
      T19 = SLOT_VALUE(T18, 4);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
      T20 = SLOT_VALUE_INITD(T19, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
      T21 = primitive_cast_integer_as_raw(T20);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
      T7T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
        T7 = T7T;
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
        T22 = primitive_machine_word_equalQ(T7,T21);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
        if (T22 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
          T23 = REPEATED_D_SLOT_VALUE_TAGGED(T19, 1, T7);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:600
          T8 = CALL1(&Kbuffer_owning_streamYstreams_internalsVio, T23);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:600
          T24 = SLOT_VALUE(stream_, 14);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:600
          T25 = primitive_idQ(T8,T24);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:600
          if (T25 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:601
            CALL2(&Kbuffer_dirtyQ_setterYstreamsVio, &KPfalseVKi, T23);
          }
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:600
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
          T26 = primitive_machine_word_add_signal_overflow(T7,4);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
          T7T = T26;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:599
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:598
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
    T27 = primitive_idQ(T16,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
      KerrorVKdMM1I(&K38, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
      T28 = SLOT_VALUE_INITD(T16, 0);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
      T29 = SLOT_VALUE_INITD(T16, 1);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
      MEP_CALL_PROLOG(T28, T29, 2);
      MEP_CALL2(T28, stream_, T17);
    }
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:605
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    T30 = SLOT_VALUE(stream_, 13);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    T31 = SLOT_VALUE(T30, 4);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    T32 = SLOT_VALUE_INITD(T31, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    T33 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    T9T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
      T9 = T9T;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
      T34 = primitive_machine_word_equalQ(T9,T33);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
      if (T34 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
        T35 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 1, T9);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:609
        T10 = CALL1(&Kbuffer_owning_streamYstreams_internalsVio, T35);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:609
        T36 = SLOT_VALUE(stream_, 14);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:609
        T37 = primitive_idQ(T10,T36);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:609
        if (T37 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:610
          CALL2(&Kbuffer_owning_stream_setterYstreams_internalsVio, &KPfalseVKi, T35);
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:609
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
        T38 = primitive_machine_word_add_signal_overflow(T9,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
        T9T = T38;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:608
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:613
    T39 = SLOT_VALUE(stream_, 14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:613
    CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
    CONGRUENT_CALL3(&KPfalseVKi, Dstream_id_to_stream_mapYstreams_internalsVio, T39);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:614
    T40 = SLOT_VALUE(stream_, 14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:614
    KpushVKdMM0I(Dfree_stream_idsYstreams_internalsVio, T40);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:615
    SLOT_VALUE_SETTER(&KPfalseVKi, stream_, 14);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    T41 = SLOT_VALUE_INITD(stream_, 12);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    T42 = SLOT_VALUE_INITD(T41, 1);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    T43 = SLOT_VALUE_INITD(T42, 0);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    T44 = primitive_cast_integer_as_raw(T43);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    map_index_T = 1;
  L2: ;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
      map_index_ = map_index_T;
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
      T46 = primitive_cast_raw_as_integer(map_index_);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
      T45 = primitive_machine_word_less_thanQ(map_index_,T44);
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        T48 = SLOT_VALUE_INITD(T41, 1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        T49 = SLOT_VALUE_INITD(T48, 0);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        T50 = primitive_cast_integer_as_raw(T49);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        T51 = primitive_machine_word_unsigned_less_thanQ(map_index_,T50);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        if (T51 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
          T52 = REPEATED_D_SLOT_VALUE_TAGGED(T48, 2, map_index_);
          T54 = T52;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
          T47_0 = Kelement_range_errorVKeI(T41, T46);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
          T53 = T47_0;
          T54 = T53;
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:619
        T12 = CALL2(&Kbuffer_map_entry_deposit_emptyYstreams_internalsVio, &KPtrueVKi, T54);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T57 = primitive_instanceQ(T12,&KLintegerGVKd);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        if (T57 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          T56.vector_element_[0] = &KJvalue_;
          T56.vector_element_[1] = T12;
          T56.vector_element_[2] = &KJtype_;
          T56.vector_element_[3] = &KLintegerGVKd;
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T55 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T56);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
          CONGRUENT_CALL2(T55, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T58 = primitive_machine_word_less_thanQ(map_index_,1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        if (T58 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          Kelement_range_errorVKeI(T41, T46);
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T59 = SLOT_VALUE_INITD(T41, 1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T60 = SLOT_VALUE_INITD(T59, 0);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T61 = primitive_cast_integer_as_raw(T60);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T62 = primitive_machine_word_less_thanQ(map_index_,T61);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        if (T62 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          T63 = primitive_cast_integer_as_raw(T60);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          T64 = primitive_machine_word_equalQ(map_index_,T63);
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
          if (T64 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            T65 = primitive_machine_word_add_signal_overflow(map_index_,4);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            T66 = primitive_cast_raw_as_integer(T65);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            Ktrusted_size_setterVKiMM4I(T66, T41);
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            T67 = primitive_machine_word_add_signal_overflow(map_index_,4);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            T68 = primitive_cast_raw_as_integer(T67);
            // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
            Ksize_setterVKdMM4I(T68, T41);
          }
          // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        }
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        T69 = SLOT_VALUE_INITD(T41, 1);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:618
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T12, T69, 2, map_index_);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
        T70 = primitive_machine_word_add_signal_overflow(map_index_,4);
        // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
        map_index_T = T70;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
      // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:617
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:626
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:626
    T13 = &KPfalseVKi;
    T15 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:597
    T14 = &KPfalseVKi;
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:597
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:593
  MV_SET_COUNT(0);
  return(T15);
}

D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4I (D stream_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:226
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:228
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:228
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T5 = Kstream_positionYstreams_protocolVcommon_dylanMioM3I(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T6 = Kstream_sizeYstreams_protocolVcommon_dylanMioM3I(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T7 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T8 = primitive_cast_integer_as_raw(T6);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T9 = primitive_machine_word_less_thanQ(T7,T8);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:229
    T10_0 = T9;
    T4_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:231
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:228
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:226
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM4I (D stream_) {
  D T2;
  D T3;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:221
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T2 = Kstream_positionYstreams_protocolVcommon_dylanMioM3I(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T3 = Kstream_sizeYstreams_protocolVcommon_dylanMioM3I(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T6 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T7 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T8 = primitive_machine_word_less_thanQ(T6,T7);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T5 = primitive_not(T8);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:223
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:221
  MV_SET_COUNT(1);
  return(T4_0);
}

D KmakeVKdMioM4I (D class_, D initargs_, D locator_, D direction_, D element_type_, D encoding_) {
  D directionF7;
  D T8_0;
  D T9;
  D type_;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:164
  T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF401, 2, initargs_, class_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:169
  type_ = APPLY4(&Ktype_for_multi_buffered_streamYstreams_internalsVio, locator_, element_type_, encoding_, initargs_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:171
  directionF7 = CALL1(&Kmulti_buffered_stream_directionYstreams_internalsVioMM0, direction_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:172
  T11 = primitive_idQ(type_,class_);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:172
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:173
    T12_0 = APPLY4(T9, class_, &KJdirection_, directionF7, initargs_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:173
    T14_0 = T12_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T12_0);
      primitive_type_check(T14_0, &KLmulti_buffered_streamGYstreams_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:175
    T13_0 = APPLY4(&KmakeVKd, type_, &KJdirection_, directionF7, initargs_);
    // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:175
    T15_0 = T13_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T13_0);
      primitive_type_check(T15_0, &KLmulti_buffered_streamGYstreams_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T8_0 = T15_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:172
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:164
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kanonymous_of_makeF401I (D Unext_method_argsU_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  D T8_0;
  CAPTURE_ENVIRONMENT

  T4 = SLOT_VALUE_INITD(Unext_method_argsU_, 0);
  T5 = primitive_cast_integer_as_raw(T4);
  T6 = primitive_machine_word_equalQ(T5,1);
  if (T6 != &KPfalseVKi) {
    T7 = Kclass_constructor_atomicallyVKiI(CREF(1));
    T8_0 = APPLY2(T7, CREF(1), CREF(0));
    T3 = T8_0;
    MV_SET_COUNT(1);
  } else {
    T2 = MEP_APPLY1(&KmakeVKdMM51, &KPempty_listVKi, Unext_method_argsU_);
    T3 = T2;
  }
  return(T3);
}

D Ktype_for_multi_buffered_streamYstreams_internalsVioMM0I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:185
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:190
  T5_0 = &KLgeneral_multi_buffered_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:185
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_multi_buffered_streamYstreams_internalsVioMM1I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:193
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:198
  T5_0 = &KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:193
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_multi_buffered_streamYstreams_internalsVioMM2I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:202
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:207
  T5_0 = &KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:202
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_multi_buffered_streamYstreams_internalsVioMM3I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:210
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:215
  T5_0 = &KLbyte_multi_buffered_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:210
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_15Emulti_buffered_streams_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJknown_power_of_two_size_);
    if (T0 != &KJknown_power_of_two_size_) {
      IKJknown_power_of_two_size_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJuse_count_);
    if (T0 != &KJuse_count_) {
      IKJuse_count_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K101, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K94, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_repeated_slot_value_setter(T0, &K101, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K94, 1, 6);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJaccessor_);
    if (T0 != &KJaccessor_) {
      primitive_repeated_slot_value_setter(T0, &K101, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K94, 1, 10);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      IKJstream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K201, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K195, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_id_);
    if (T0 != &KJstream_id_) {
      IKJstream_id_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJknown_power_of_two_sizeQ_);
    if (T0 != &KJknown_power_of_two_sizeQ_) {
      IKJknown_power_of_two_sizeQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJposition_);
    if (T0 != &KJposition_) {
      IKJposition_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbytes_);
    if (T0 != &KJbytes_) {
      primitive_repeated_slot_value_setter(T0, &K152, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K151, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K149, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K146, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K161, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K158, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_size_);
    if (T0 != &KJbuffer_size_) {
      primitive_repeated_slot_value_setter(T0, &K243, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K241, 1, 4);
      IKJbuffer_size_ = T0;
      primitive_repeated_slot_value_setter(T0, &K201, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K195, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJnumber_of_buffers_);
    if (T0 != &KJnumber_of_buffers_) {
      primitive_repeated_slot_value_setter(T0, &K243, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K241, 1, 6);
      IKJnumber_of_buffers_ = T0;
      primitive_repeated_slot_value_setter(T0, &K201, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K195, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_vector_);
    if (T0 != &KJbuffer_vector_) {
      primitive_repeated_slot_value_setter(T0, &K243, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K241, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K412, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K409, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcurrent_);
    if (T0 != &KJcurrent_) {
      primitive_repeated_slot_value_setter(T0, &K417, 1, 1);
      IKJcurrent_ = T0;
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:9
  T0 = KPadd_classVKeI(&KLbuffer_vectorGYstreams_internalsVio);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_io__X_15Emulti_buffered_streams_for_user () {
{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_6 T2 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:22
  T2.vector_element_[0] = &KJsize_;
  T2.vector_element_[1] = (D) 9;
  T2.vector_element_[2] = IKJknown_power_of_two_size_;
  T2.vector_element_[3] = &KPtrueVKi;
  T2.vector_element_[4] = IKJuse_count_;
  T2.vector_element_[5] = (D) 13;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:22
  T0 = Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I(&T2, &KPfalseVKi, (D) 9, C('\x0'));
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:21
  Dempty_bufferYstreams_internalsVio = T0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:21
  T1 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:25
  T2_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:25
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:25
  Dfree_stream_idsYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:25
  T0 = &KPfalseVKi;
  goto I6;
}
I6:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:27
  T2_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:27
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:26
  Dstream_id_to_stream_mapYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:26
  T0 = &KPfalseVKi;
  goto I7;
}
I7:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:107
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM6, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I10;
}
I10:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:139
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM7, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I371;
}
I371:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:164
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I370;
}
I370:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:221
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I367;
}
I367:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:226
  T0 = KPadd_a_methodVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I364;
}
I364:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:235
  T0 = KPadd_a_methodVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I361;
}
I361:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:593
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I359;
}
I359:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:637
  T0 = KPadd_a_methodVKnI(&Kstream_positionYstreams_protocolVcommon_dylan, &Kstream_positionYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I356;
}
I356:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:653
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I354;
}
I354:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/multi-buffered-streams.dylan:717
  T0 = KPadd_a_methodVKnI(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I352;
}
I352:

  return;
}


/* eof */
