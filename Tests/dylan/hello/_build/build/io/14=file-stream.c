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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(13);
define__KLsimple_object_vectorGVKd(17);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(10);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLexternal_stream_accessorGYstreams_internalsVio;

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
define__KLbyte_stringGVKd(114);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(60);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(49);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(24);

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
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_closed_errorGYstreamsVio;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

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
  D stream_error_stream_;
  D stream_error_requested_position_;
  D stream_error_size_of_stream_;
} _KLstream_position_errorGYstreamsVio;

typedef struct {
  D wrapper;
  D file_descriptor_;
  D file_position_;
  D asynchronousQ_;
  D accessor_positionableQ_;
  D accessor_preferred_buffer_size_;
  D accessor_at_endQ_;
} _KLnative_file_accessorGYstreams_internalsVio;

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


/* Typedefs for defined classes */

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
} _KLexternal_file_accessorGYstreams_internalsVio;

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
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_file_streamGYstreams_internalsVio;

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
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_char_file_streamGYstreams_internalsVio;

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
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLgeneral_file_streamGYstreams_internalsVio;


/* Referenced object declarations */

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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
D KLbufferGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D, D, D);
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kbuffer_fillYstreamsVioMM0I (D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_positionYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe Kaccessor_position_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_read_intoXYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_write_fromYstreams_internalsVio;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
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
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLincremental_generic_functionGVKe Kaccessor_setterYstreams_internalsVio;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJlocator_;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW;
D KerrorVKdMM0I (D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLincremental_generic_functionGVKe Kstream_shared_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kdo_force_output_buffersYstreamsVio;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_input_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_input_buffer_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_shared_buffer_setterYstreams_internalsVio;
extern _KLsymbolGVKd KJwaitQ_;
D Kensure_readableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kdo_release_output_bufferYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_nextYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_endYstreamsVio;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsimple_methodGVKe Kbuffer_sizeYstreamsVioMM0;
D Kassertion_failureVKiI (D, D);
extern _KLsealed_generic_functionGVKe Kbuffer_positionYstreamsVio;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe Kstream_output_buffer_setterYstreams_internalsVio;
D Kensure_writableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe Kdo_release_input_bufferYstreamsVio;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D, D);
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
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
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_no_rest_value_5VKi;
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLsimple_methodGVKe Kbyte_to_byte_charYstreams_internalsVio;
extern _KLsimple_methodGVKe Kbyte_char_to_byteYstreams_internalsVio;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLkeyword_methodGVKe Knew_accessorYstreams_internalsVioMM0;
D Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I (D, D, D, D);
extern _KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_position_setterYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kaccessor_sizeYstreams_internalsVio;
extern _KLclassGVKd KLstream_position_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_position_errorGYstreamsVioW;
D KsignalVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe Kstream_directionYstreams_internalsVio;
extern _KLsymbolGVKd KJinput_;
extern _KLsymbolGVKd KJinput_output_;
extern _KLsymbolGVKd KJoutput_;
D Kelement_setterVKdMioM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kstream_contentsYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kunread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdo_next_input_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_get_input_bufferYstreamsVio;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe KpositionYcommon_extensionsVcommon_dylan;
extern _KLsymbolGVKd KJfrom_;
extern _KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLnative_file_accessorGYstreams_internalsVio;
extern _KLclassGVKd KLmulti_buffered_streamGYstreams_internalsVio;

/* Defined object declarations */

extern _KLkeyword_methodGVKe KinitializeVKdMioM5;
D KinitializeVKdMioM5I (D, D, D, D);
static _KLsymbolGVKd KJbuffer_start_;
static _KLsymbolGVKd KJbuffer_end_;
extern _KLgetter_methodGVKi KaccessorYstreams_internalsVioMM0;
extern _KLsetter_methodGVKi Kaccessor_setterYstreams_internalsVioMM0;
extern _KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM1;
D Kdo_get_output_bufferYstreamsVioMM1I (D, D, D);
extern _KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM1;
D Kdo_next_output_bufferYstreamsVioMM1I (D, D, D);
extern _KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM1;
D Kdo_get_input_bufferYstreamsVioMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM1;
D Kdo_next_input_bufferYstreamsVioMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM1;
D Kdo_force_output_buffersYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM1;
D Kforce_output_buffersYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Kread_to_endYstreamsVioMM2;
D Kread_to_endYstreamsVioMM2I (D);
extern _KLinstance_slot_descriptorGVKe Kstream_locatorYstreams_internalsVioHLfile_streamG;
extern _KLinstance_slot_descriptorGVKe KaccessorYstreams_internalsVioHLfile_streamG;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLfile_streamGYstreams_internalsVioW;
extern _KLkeyword_methodGVKe Kforce_bufferYstreams_internalsVio;
D Kforce_bufferYstreams_internalsVioI (D, D, D, D);
D Kload_bufferYstreams_internalsVioI (D, D, D, D, D);
D Kload_buffer_and_fillYstreams_internalsVioI (D, D, D, D, D);
extern _KLclassGVKd KLexternal_file_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_file_accessorGYstreams_internalsVioW;
static _KLimplementation_classGVKe K32;
static _KLsimple_object_vectorGVKd_1 K33;
static _KLsimple_object_vectorGVKd_6 K34;
static _KLbyte_stringGVKd_24 K35;
static _KLsymbolGVKd KJbuffer_;
static _KLbyte_stringGVKd_6 K37;
static _KLsymbolGVKd KJreturn_fresh_bufferQ_;
static _KLbyte_stringGVKd_15 K39;
static _KLbyte_stringGVKd_20 K40;
static _KLkeyword_signatureAvaluesGVKi K41;
static _KLsimple_object_vectorGVKd_2 K42;
static _KLsimple_object_vectorGVKd_2 K43;
static _KLsimple_object_vectorGVKd_1 K44;
static _KLsimple_object_vectorGVKd_1 K45;
static _KLimplementation_classGVKe K46;
static _KLsimple_object_vectorGVKd_12 K47;
static _KLsimple_object_vectorGVKd_3 K48;
static _KLsimple_object_vectorGVKd_10 K49;
static _KLsimple_object_vectorGVKd_1 K50;
static _KLsimple_object_vectorGVKd_4 K51;
static _KLsimple_object_vectorGVKd_2 K52;
static _KLsimple_object_vectorGVKd_12 K53;
static _KLbyte_stringGVKd_13 K54;
static _KLsymbolGVKd KJaccessor_;
static _KLunionGVKe K56;
static _KLsingletonGVKd K57;
static _KLbyte_stringGVKd_8 K58;
extern _KLsealed_generic_functionGVKe Kstream_locatorYstreams_internalsVio;
extern _KLgetter_methodGVKi Kstream_locatorYstreams_internalsVioMM0;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_14 K62;
static _KLbyte_stringGVKd_15 K63;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_29 K65;
static _KLbyte_stringGVKd_6 K66;
static _KLsignatureAvaluesGVKi K67;
static _KLsimple_object_vectorGVKd_1 K68;
static _KLsignatureGVKe K69;
static _KLkeyword_signatureAvaluesGVKi K70;
static _KLsimple_object_vectorGVKd_4 K71;
static _KLsymbolGVKd KJbytes_;
static _KLbyte_stringGVKd_5 K73;
static _KLsimple_object_vectorGVKd_2 K74;
static _KLsimple_object_vectorGVKd_1 K75;
static _KLunionGVKe K76;
static _KLbyte_stringGVKd_18 K77;
extern _KLsimple_methodGVKe Kload_bufferYstreams_internalsVio;
static _KLbyte_stringGVKd_49 K79;
static _KLsignatureAvaluesGVKi K80;
static _KLsimple_object_vectorGVKd_5 K81;
static _KLkeyword_signatureAvaluesGVKi K82;
static _KLsimple_object_vectorGVKd_2 K83;
static _KLsimple_object_vectorGVKd_1 K84;
static _KLbyte_stringGVKd_10 K85;
static _KLbyte_stringGVKd_12 K86;
extern _KLincremental_generic_functionGVKe Ktype_for_file_streamYstreams_internalsVio;
extern _KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM0;
D Ktype_for_file_streamYstreams_internalsVioMM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM1;
D Ktype_for_file_streamYstreams_internalsVioMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM2;
D Ktype_for_file_streamYstreams_internalsVioMM2I (D, D, D, D);
extern _KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM3;
D Ktype_for_file_streamYstreams_internalsVioMM3I (D, D, D, D);
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLpairGVKd K98;
static _KLpairGVKd K99;
static _KLkeyword_signatureAvaluesGVKi K100;
static _KLbyte_stringGVKd_20 K101;
static _KLsimple_object_vectorGVKd_3 K102;
static _KLsimple_object_vectorGVKd_1 K103;
static _KLsubclassGVKe K104;
static _KLunionGVKe K105;
extern _KLclassGVKd KLbyte_file_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_file_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K108;
static _KLsimple_object_vectorGVKd_17 K109;
extern _KLkeyword_methodGVKe KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsimple_object_vectorGVKd_13 K113;
static _KLsimple_object_vectorGVKd_17 K114;
static _KLsimple_object_vectorGVKd_1 K115;
static _KLsimple_object_vectorGVKd_1 K116;
static _KLinit_arg_descriptorGVKe KencodingHLbyte_file_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_file_streamGYstreams_internalsVio;
static D K129I ();
static _KLbyte_stringGVKd_23 K120;
static _KLunionGVKe K121;
static _KLunionGVKe K122;
static _KLsimple_closure_methodGVKi_0 K128;
static D K128I (D s_, D ss_, D d_, D ds_, D n_);
static _KLsimple_closure_methodGVKi_0 K127;
static D K127I (D s_, D ss_, D d_, D ds_, D n_);
static _KLkeyword_signatureAvaluesGVKi K130;
static _KLsimple_object_vectorGVKd_12 K131;
static _KLsymbolGVKd KJstream_lock_;
static _KLbyte_stringGVKd_11 K133;
static _KLsimple_object_vectorGVKd_6 K134;
static _KLsimple_object_vectorGVKd_1 K135;
static _KLbyte_stringGVKd_18 K136;
static _KLkeyword_signatureAvaluesGVKi K137;
static _KLsimple_object_vectorGVKd_3 K138;
static _KLsimple_object_vectorGVKd_1 K139;
static _KLsubclassGVKe K140;
static _KLsingletonGVKd K141;
extern _KLclassGVKd KLbyte_char_file_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_char_file_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K144;
extern _KLkeyword_methodGVKe KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K147;
static _KLsimple_object_vectorGVKd_13 K148;
static _KLsimple_object_vectorGVKd_1 K149;
static _KLsimple_object_vectorGVKd_1 K150;
static _KLinit_arg_descriptorGVKe KencodingHLbyte_char_file_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_file_streamGYstreams_internalsVio;
static D K154I ();
static _KLkeyword_signatureAvaluesGVKi K155;
static _KLsimple_object_vectorGVKd_1 K156;
static _KLbyte_stringGVKd_23 K157;
static _KLkeyword_signatureAvaluesGVKi K158;
static _KLsimple_object_vectorGVKd_3 K159;
static _KLsimple_object_vectorGVKd_1 K160;
static _KLsubclassGVKe K161;
static _KLsingletonGVKd K162;
static _KLkeyword_signatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_3 K164;
static _KLsimple_object_vectorGVKd_1 K165;
static _KLsubclassGVKe K166;
static _KLsingletonGVKd K167;
extern _KLclassGVKd KLgeneral_file_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLgeneral_file_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K170;
extern _KLkeyword_methodGVKe KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K173;
static _KLsimple_object_vectorGVKd_13 K174;
static _KLsimple_object_vectorGVKd_1 K175;
static _KLsimple_object_vectorGVKd_1 K176;
static _KLinit_arg_descriptorGVKe KencodingHLgeneral_file_streamGYstreams_internalsVio;
static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_file_streamGYstreams_internalsVio;
static D K180I ();
static _KLkeyword_signatureAvaluesGVKi K181;
static _KLsimple_object_vectorGVKd_1 K182;
static _KLbyte_stringGVKd_21 K183;
static _KLkeyword_signatureAvaluesGVKi K184;
static _KLsimple_object_vectorGVKd_1 K185;
static _KLsubclassGVKe K186;
static _KLsymbolGVKd KJfile_;
static _KLsymbolGVKd KJknown_power_of_two_sizeQ_;
static _KLbyte_stringGVKd_24 K189;
static _KLbyte_stringGVKd_4 K190;
static _KLkeyword_signatureGVKe K191;
static _KLsimple_object_vectorGVKd_4 K192;
static _KLsymbolGVKd KJbuffer_size_;
static _KLbyte_stringGVKd_11 K194;
static _KLsimple_object_vectorGVKd_2 K195;
extern _KLsimple_methodGVKe Kwritable_file_stream_position_setterYstreams_internalsVioMM0;
D Kwritable_file_stream_position_setterYstreams_internalsVioMM0I (D, D);
static _KLsymbolGVKd KJposition_;
D Kadjust_stream_position_from_startYstreams_internalsVioMM0I (D, D, D);
static _KLbyte_stringGVKd_40 K200;
extern _KLsimple_methodGVKe Kload_buffer_and_fillYstreams_internalsVio;
static _KLsymbolGVKd KJclosed_;
static _KLbyte_stringGVKd_39 K203;
static _KLbyte_stringGVKd_32 K204;
static _KLbyte_stringGVKd_6 K205;
static _KLsignatureGVKe K206;
static _KLbyte_stringGVKd_8 K207;
static _KLsignatureAvaluesGVKi K208;
static _KLsimple_object_vectorGVKd_2 K209;
extern _KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM2;
D Kstream_contentsYstreams_protocolVcommon_dylanMioM2I (D, D, D);
extern _KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM2;
D Kunread_elementYstreams_protocolVcommon_dylanMioM2I (D, D);
extern _KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2;
D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2I (D, D, D, D);
extern _KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM4;
D Kstream_position_setterYstreams_protocolVcommon_dylanMioM4I (D, D);
extern _KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM2;
D Kstream_positionYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM4;
D KcloseYcommon_extensionsVcommon_dylanMioM4I (D, D);
extern _KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM2;
D Kstream_sizeYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3;
D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3I (D);
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM3;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM3I (D);
extern _KLkeyword_methodGVKe KmakeVKdMioM3;
D KmakeVKdMioM3I (D, D, D, D, D);
static _KLkeyword_signatureAvaluesGVKi K240;
static _KLsimple_object_vectorGVKd_6 K241;
static _KLsimple_object_vectorGVKd_1 K242;
static _KLsimple_object_vectorGVKd_3 K243;
static _KLsingletonGVKd K244;
static _KLsignatureAvaluesGVKi K245;
static _KLbyte_stringGVKd_23 K246;
static _KLunionGVKe K247;
static _KLbyte_stringGVKd_37 K248;
static _KLsignatureAvaluesGVKi K249;
static _KLsimple_object_vectorGVKd_1 K250;
static _KLkeyword_signatureGVKe K251;
static _KLsignatureAvaluesGVKi K252;
static _KLbyte_stringGVKd_35 K253;
static _KLsymbolGVKd KJcurrent_;
extern _KLsimple_methodGVKe Kadjust_stream_position_from_startYstreams_internalsVioMM0;
static _KLsignatureGVKe K256;
static _KLsimple_object_vectorGVKd_3 K257;
static _KLbyte_stringGVKd_7 K258;
static _KLkeyword_signatureAvaluesGVKi K259;
static _KLsimple_object_vectorGVKd_2 K260;
static _KLsimple_object_vectorGVKd_2 K261;
static _KLsimple_object_vectorGVKd_1 K262;
static _KLsignatureGVKe K263;
static _KLsimple_object_vectorGVKd_2 K264;
static _KLbyte_stringGVKd_60 K265;
static _KLbyte_stringGVKd_49 K266;
static _KLbyte_stringGVKd_54 K267;
static _KLbyte_stringGVKd_114 K268;
static _KLkeyword_signatureAvaluesGVKi K269;
static _KLsimple_object_vectorGVKd_2 K270;
static _KLsymbolGVKd KJclear_contentsQ_;
static _KLbyte_stringGVKd_15 K272;
static _KLsimple_object_vectorGVKd_1 K273;
static _KLpairGVKd K274;
static _KLpairGVKd K275;
static _KLpairGVKd K276;
static _KLpairGVKd K277;
static _KLpairGVKd K278;

/* Indirection variables */

static D IKJbuffer_start_ = &KJbuffer_start_;
static D IKJbuffer_end_ = &KJbuffer_end_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJreturn_fresh_bufferQ_ = &KJreturn_fresh_bufferQ_;
static D IKJaccessor_ = &KJaccessor_;
static D IKJstream_ = &KJstream_;
static D IKJbytes_ = &KJbytes_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJfile_ = &KJfile_;
static D IKJknown_power_of_two_sizeQ_ = &KJknown_power_of_two_sizeQ_;
static D IKJbuffer_size_ = &KJbuffer_size_;
static D IKJposition_ = &KJposition_;
static D IKJclosed_ = &KJclosed_;
static D IKJcurrent_ = &KJcurrent_;
static D IKJclear_contentsQ_ = &KJclear_contentsQ_;

/* Variables */

D writable_file_stream_position_setterYstreams_internalsVio = &Kwritable_file_stream_position_setterYstreams_internalsVioMM0;
D stream_locatorYstreams_internalsVio = &Kstream_locatorYstreams_internalsVio;
D Lexternal_file_accessorGYstreams_internalsVio = &KLexternal_file_accessorGYstreams_internalsVio;
D Lfile_streamGYstreams_internalsVio = &KLfile_streamGYstreams_internalsVio;
D Lgeneral_file_streamGYstreams_internalsVio = &KLgeneral_file_streamGYstreams_internalsVio;
D Lbyte_char_file_streamGYstreams_internalsVio = &KLbyte_char_file_streamGYstreams_internalsVio;
D Lbyte_file_streamGYstreams_internalsVio = &KLbyte_file_streamGYstreams_internalsVio;
D type_for_file_streamYstreams_internalsVio = &Ktype_for_file_streamYstreams_internalsVio;
D force_bufferYstreams_internalsVio = &Kforce_bufferYstreams_internalsVio;
D Dnull_bufferYstreams_internalsVio = &KPunboundVKi;

/* Objects */

_KLkeyword_methodGVKe KinitializeVKdMioM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K191,
  &key_mep_4,
  &KinitializeVKdMioM5I,
  &K192
};

static _KLsymbolGVKd KJbuffer_start_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K86
};

static _KLsymbolGVKd KJbuffer_end_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K85
};

_KLgetter_methodGVKi KaccessorYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KaccessorYstreams_internalsVioHLfile_streamG
};

_KLsetter_methodGVKi Kaccessor_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KaccessorYstreams_internalsVioHLfile_streamG
};

_KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K82,
  &key_mep_3,
  &Kdo_get_output_bufferYstreamsVioMM1I,
  &K83
};

_KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K82,
  &key_mep_3,
  &Kdo_next_output_bufferYstreamsVioMM1I,
  &K83
};

_KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K70,
  &key_mep_4,
  &Kdo_get_input_bufferYstreamsVioMM1I,
  &K71
};

_KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K70,
  &key_mep_4,
  &Kdo_next_input_bufferYstreamsVioMM1I,
  &K71
};

_KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K69,
  &Kdo_force_output_buffersYstreamsVioMM1I
};

_KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K69,
  &Kforce_output_buffersYstreamsVioMM1I
};

_KLsimple_methodGVKe Kread_to_endYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K67,
  &Kread_to_endYstreamsVioMM2I
};

_KLinstance_slot_descriptorGVKe Kstream_locatorYstreams_internalsVioHLfile_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLfile_streamGYstreams_internalsVio,
  &KJlocator_,
  &Kstream_locatorYstreams_internalsVio,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe KaccessorYstreams_internalsVioHLfile_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLfile_streamGYstreams_internalsVio,
  &KJaccessor_,
  &KaccessorYstreams_internalsVio,
  &Kaccessor_setterYstreams_internalsVio,
  &K56
};

_KLclassGVKd KLfile_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K54,
  &K46,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLfile_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K46,
  (D) 1,
  49,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe Kforce_bufferYstreams_internalsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K41,
  &key_mep_4,
  &Kforce_bufferYstreams_internalsVioI,
  &K42
};

_KLclassGVKd KLexternal_file_accessorGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K35,
  &K32,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLexternal_file_accessorGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K32,
  (D) 1,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K32 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325844993,
  &KLexternal_file_accessorGYstreams_internalsVio,
  &KLexternal_file_accessorGYstreams_internalsVioW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K33,
  &K34,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K274,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_file_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_24 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<external-file-accessor>"
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K37
};

static _KLbyte_stringGVKd_6 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

static _KLsymbolGVKd KJreturn_fresh_bufferQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K40
};

static _KLbyte_stringGVKd_15 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "Bad write count"
};

static _KLbyte_stringGVKd_20 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "return-fresh-buffer?"
};

static _KLkeyword_signatureAvaluesGVKi K41 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K43,
  &K44,
  &KDsignature_LobjectG_typesVKi,
  &K45
};

static _KLsimple_object_vectorGVKd_2 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJreturn_fresh_bufferQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbufferGYstreamsVio,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJreturn_fresh_bufferQ_
};

static _KLsimple_object_vectorGVKd_1 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

static _KLimplementation_classGVKe K46 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845041,
  &KLfile_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K47,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K48,
  &K49,
  (D) 37,
  &K50,
  &K51,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K275,
  &KPempty_vectorVKi,
  &K52,
  &K53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_12 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
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
  &KaccessorYstreams_internalsVioHLfile_streamG
};

static _KLsimple_object_vectorGVKd_3 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_10 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 45
};

static _KLsimple_object_vectorGVKd_4 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_2 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG,
  &KaccessorYstreams_internalsVioHLfile_streamG
};

static _KLsimple_object_vectorGVKd_12 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
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
  &KaccessorYstreams_internalsVioHLfile_streamG
};

static _KLbyte_stringGVKd_13 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<file-stream>"
};

static _KLsymbolGVKd KJaccessor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K58
};

static _KLunionGVKe K56 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLsingletonGVKd K57 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_8 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "accessor"
};

_KLsealed_generic_functionGVKe Kstream_locatorYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K62,
  &K61,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstream_locatorYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_locatorYstreams_internalsVioHLfile_streamG
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_locatorYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "stream-locator"
};

static _KLbyte_stringGVKd_15 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K66
};

static _KLbyte_stringGVKd_29 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "Can\'t read from closed stream"
};

static _KLbyte_stringGVKd_6 K66 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLsignatureAvaluesGVKi K67 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 37749765,
  &K68,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsignatureGVKe K69 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K68
};

static _KLkeyword_signatureAvaluesGVKi K70 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K68,
  &K74,
  &KDsignature_LobjectG_typesVKi,
  &K75
};

static _KLsimple_object_vectorGVKd_4 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJwaitQ_,
  &KPtrueVKi,
  &KJbytes_,
  (D) 5
};

static _KLsymbolGVKd KJbytes_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K73
};

static _KLbyte_stringGVKd_5 K73 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "bytes"
};

static _KLsimple_object_vectorGVKd_2 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJwaitQ_,
  &KJbytes_
};

static _KLsimple_object_vectorGVKd_1 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K76
};

static _KLunionGVKe K76 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLbufferGYstreamsVio
};

static _KLbyte_stringGVKd_18 K77 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "no reason supplied"
};

_KLsimple_methodGVKe Kload_bufferYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K80,
  &Kload_bufferYstreams_internalsVioI
};

static _KLbyte_stringGVKd_49 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 197,
  "File stream has neither an input or output buffer"
};

static _KLsignatureAvaluesGVKi K80 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K81,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_5 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLfile_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K82 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K68,
  &K84,
  &KDsignature_LobjectG_typesVKi,
  &K45
};

static _KLsimple_object_vectorGVKd_2 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbytes_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_1 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbytes_
};

static _KLbyte_stringGVKd_10 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "buffer-end"
};

static _KLbyte_stringGVKd_12 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "buffer-start"
};

_KLincremental_generic_functionGVKe Ktype_for_file_streamYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K100,
  &KPfalseVKi,
  &K101,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K184,
  &key_mep_4,
  &Ktype_for_file_streamYstreams_internalsVioMM0I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K163,
  &key_mep_4,
  &Ktype_for_file_streamYstreams_internalsVioMM1I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K158,
  &key_mep_4,
  &Ktype_for_file_streamYstreams_internalsVioMM2I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Ktype_for_file_streamYstreams_internalsVioMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K137,
  &key_mep_4,
  &Ktype_for_file_streamYstreams_internalsVioMM3I,
  &KPempty_vectorVKi
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_file_streamYstreams_internalsVioMM0,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_file_streamYstreams_internalsVioMM1,
  &K98
};

static _KLpairGVKd K98 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_file_streamYstreams_internalsVioMM2,
  &K99
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_file_streamYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K100 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341901,
  &K102,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K103
};

static _KLbyte_stringGVKd_20 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "type-for-file-stream"
};

static _KLsimple_object_vectorGVKd_3 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K105,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K104
};

static _KLsubclassGVKe K104 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLunionGVKe K105 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLtypeGVKd
};

_KLclassGVKd KLbyte_file_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K136,
  &K108,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_file_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K108,
  (D) 1,
  69,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K108 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835845,
  &KLbyte_file_streamGYstreams_internalsVio,
  &KLbyte_file_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K109,
  (D) -3,
  &KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K112,
  &K113,
  (D) 49,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K114,
  &K115,
  &K116,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_17 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 69,
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
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

_KLkeyword_methodGVKe KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K130,
  &key_mep_2,
  &KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K131
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfile_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_13 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
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
  &KLbyte_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_17 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 69,
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
  &KaccessorYstreams_internalsVioHLfile_streamG
};

static _KLsimple_object_vectorGVKd_1 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLbyte_file_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLbyte_file_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLbyte_file_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_file_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLbyteGVKe,
  &KLbyte_file_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_23 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLunionGVKe K121 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K122 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLlockGYthreadsVdylan
};

static _KLsimple_closure_methodGVKi_0 K128 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K128I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 K127 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K127I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K130 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K134,
  &KDsignature_LobjectG_typesVKi,
  &K135
};

static _KLsimple_object_vectorGVKd_12 K131 = {
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
  &K133
};

static _KLbyte_stringGVKd_11 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_6 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJbuffer_,
  &KJlocator_,
  &KJaccessor_
};

static _KLsimple_object_vectorGVKd_1 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_file_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_18 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<byte-file-stream>"
};

static _KLkeyword_signatureAvaluesGVKi K137 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341901,
  &K138,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K139
};

static _KLsimple_object_vectorGVKd_3 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K141,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K140
};

static _KLsubclassGVKe K140 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsingletonGVKd K141 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyteGVKe
};

_KLclassGVKd KLbyte_char_file_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K157,
  &K144,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_char_file_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K144,
  (D) 1,
  69,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K144 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835845,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &KLbyte_char_file_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K109,
  (D) -3,
  &KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K147,
  &K148,
  (D) 49,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K114,
  &K149,
  &K150,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K155,
  &key_mep_2,
  &KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K131
};

static _KLsimple_object_vectorGVKd_2 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfile_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_13 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
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
  &KLbyte_char_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLbyte_char_file_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLbyte_char_file_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLbyte_char_file_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLbyte_characterGVKe,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K155 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K134,
  &KDsignature_LobjectG_typesVKi,
  &K156
};

static _KLsimple_object_vectorGVKd_1 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_char_file_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_23 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<byte-char-file-stream>"
};

static _KLkeyword_signatureAvaluesGVKi K158 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341901,
  &K159,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K160
};

static _KLsimple_object_vectorGVKd_3 K159 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K162,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K161
};

static _KLsubclassGVKe K161 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsingletonGVKd K162 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLcharacterGVKd
};

static _KLkeyword_signatureAvaluesGVKi K163 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341901,
  &K164,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K165
};

static _KLsimple_object_vectorGVKd_3 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &K167,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K166
};

static _KLsubclassGVKe K166 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsingletonGVKd K167 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

_KLclassGVKd KLgeneral_file_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K183,
  &K170,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLgeneral_file_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K170,
  (D) 1,
  69,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K170 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102149,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &KLgeneral_file_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K109,
  (D) -3,
  &KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K173,
  &K174,
  (D) 49,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K114,
  &K175,
  &K176,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K181,
  &key_mep_2,
  &KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K131
};

static _KLsimple_object_vectorGVKd_2 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfile_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_13 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
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
  &KLgeneral_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_file_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KencodingHLgeneral_file_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KencodingHLgeneral_file_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &KJencoding_,
  &KLobjectGVKd
};

static _KLinherited_slot_descriptorGVKe Kstream_element_typeYstreams_protocolVcommon_dylanHLgeneral_file_streamGYstreams_internalsVio = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLcharacterGVKd,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &Kstream_element_typeYstreams_protocolVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K181 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K134,
  &KDsignature_LobjectG_typesVKi,
  &K182
};

static _KLsimple_object_vectorGVKd_1 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLgeneral_file_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_21 K183 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<general-file-stream>"
};

static _KLkeyword_signatureAvaluesGVKi K184 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341901,
  &K102,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K185
};

static _KLsimple_object_vectorGVKd_1 K185 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K186
};

static _KLsubclassGVKe K186 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsymbolGVKd KJfile_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K190
};

static _KLsymbolGVKd KJknown_power_of_two_sizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K189
};

static _KLbyte_stringGVKd_24 K189 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "known-power-of-two-size?"
};

static _KLbyte_stringGVKd_4 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "file"
};

static _KLkeyword_signatureGVKe K191 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K68,
  &K195,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJbuffer_size_,
  &KPfalseVKi,
  &KJlocator_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJbuffer_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K194
};

static _KLbyte_stringGVKd_11 K194 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "buffer-size"
};

static _KLsimple_object_vectorGVKd_2 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbuffer_size_,
  &KJlocator_
};

_KLsimple_methodGVKe Kwritable_file_stream_position_setterYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K208,
  &Kwritable_file_stream_position_setterYstreams_internalsVioMM0I
};

static _KLsymbolGVKd KJposition_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K207
};

static _KLbyte_stringGVKd_40 K200 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "input-output stream must be positionable"
};

_KLsimple_methodGVKe Kload_buffer_and_fillYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K206,
  &Kload_buffer_and_fillYstreams_internalsVioI
};

static _KLsymbolGVKd KJclosed_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K205
};

static _KLbyte_stringGVKd_39 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "Can\'t set position of closed end stream"
};

static _KLbyte_stringGVKd_32 K204 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_6 K205 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "closed"
};

static _KLsignatureGVKe K206 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K81
};

static _KLbyte_stringGVKd_8 K207 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "position"
};

static _KLsignatureAvaluesGVKi K208 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K209,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLfile_streamGYstreams_internalsVio
};

_KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K269,
  &key_mep_3,
  &Kstream_contentsYstreams_protocolVcommon_dylanMioM2I,
  &K270
};

_KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K263,
  &Kunread_elementYstreams_protocolVcommon_dylanMioM2I
};

_KLkeyword_methodGVKe Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K259,
  &key_mep_4,
  &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2I,
  &K260
};

_KLsimple_methodGVKe Kstream_position_setterYstreams_protocolVcommon_dylanMioM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K208,
  &Kstream_position_setterYstreams_protocolVcommon_dylanMioM4I
};

_KLsimple_methodGVKe Kstream_positionYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K252,
  &Kstream_positionYstreams_protocolVcommon_dylanMioM2I
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K251,
  &key_mep_2,
  &KcloseYcommon_extensionsVcommon_dylanMioM4I,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K249,
  &Kstream_sizeYstreams_protocolVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K245,
  &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3I
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K245,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM3I
};

_KLkeyword_methodGVKe KmakeVKdMioM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K240,
  &key_mep_5,
  &KmakeVKdMioM3I,
  &K241
};

static _KLkeyword_signatureAvaluesGVKi K240 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39060485,
  &K242,
  &K243,
  &KDsignature_LobjectG_typesVKi,
  &K68
};

static _KLsimple_object_vectorGVKd_6 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJlocator_,
  &KPfalseVKi,
  &KJelement_type_,
  &KLbyte_characterGVKe,
  &KJencoding_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K244
};

static _KLsimple_object_vectorGVKd_3 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJlocator_,
  &KJelement_type_,
  &KJencoding_
};

static _KLsingletonGVKd K244 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLfile_streamGYstreams_internalsVio
};

static _KLsignatureAvaluesGVKi K245 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K68,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_23 K246 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "stream-input-available?"
};

static _KLunionGVKe K247 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_37 K248 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Can\'t determine size of closed stream"
};

static _KLsignatureAvaluesGVKi K249 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K68,
  &K250
};

static _KLsimple_object_vectorGVKd_1 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K247
};

static _KLkeyword_signatureGVKe K251 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K68,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K252 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K68,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_35 K253 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Can\'t set position of closed stream"
};

static _KLsymbolGVKd KJcurrent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K258
};

_KLsimple_methodGVKe Kadjust_stream_position_from_startYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K256,
  &Kadjust_stream_position_from_startYstreams_internalsVioMM0I
};

static _KLsignatureGVKe K256 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K257
};

static _KLsimple_object_vectorGVKd_3 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLfile_streamGYstreams_internalsVio,
  &K247
};

static _KLbyte_stringGVKd_7 K258 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "current"
};

static _KLkeyword_signatureAvaluesGVKi K259 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K261,
  &K262,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K260 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfrom_,
  &KJcurrent_
};

static _KLsimple_object_vectorGVKd_2 K261 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfile_streamGYstreams_internalsVio,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K262 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfrom_
};

static _KLsignatureGVKe K263 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K264
};

static _KLsimple_object_vectorGVKd_2 K264 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfile_streamGYstreams_internalsVio,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_60 K265 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 241,
  "Cannot use stream-contents on an output only file stream: %="
};

static _KLbyte_stringGVKd_49 K266 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 197,
  "Can\'t set call stream-contents on a closed stream"
};

static _KLbyte_stringGVKd_54 K267 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Cannot call stream-contents. Stream isn\'t readable: %="
};

static _KLbyte_stringGVKd_114 K268 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 457,
  "Cannot use clear-contents? keyword argument to streams-contents when the stream is a subclass of <file-stream>: %="
};

static _KLkeyword_signatureAvaluesGVKi K269 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K68,
  &K273,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K270 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJclear_contentsQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJclear_contentsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K272
};

static _KLbyte_stringGVKd_15 K272 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "clear-contents?"
};

static _KLsimple_object_vectorGVKd_1 K273 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJclear_contentsQ_
};

static _KLpairGVKd K274 = {
  &KLpairGVKdW /* wrapper */,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &K276
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_file_streamGYstreams_internalsVio,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &K278
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D KinitializeVKdMioM5I (D stream_, D initargs_, D requested_buffer_size_, D locator_) {
  D T5;
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
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:70
  T13 = primitive_copy_vector(initargs_);
  T12 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
  T14 = primitive_idQ(T12,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
    KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
    T15 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
    T16 = SLOT_VALUE_INITD(T12, 1);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
    MEP_CALL_PROLOG(T15, T16, 2);
    MEP_CALL2(T15, stream_, T13);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:73
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:74
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:74
  if (T5 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:75
    T17 = APPLY2(&Knew_accessorYstreams_internalsVioMM0, IKJfile_, T13);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:75
    CONGRUENT_CALL_PROLOG(&Kaccessor_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(T17, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:74
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:77
  if (requested_buffer_size_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:79
    T18.vector_element_[0] = IKJknown_power_of_two_sizeQ_;
    T18.vector_element_[1] = &KPfalseVKi;
    T18.vector_element_[2] = &KJsize_;
    T18.vector_element_[3] = requested_buffer_size_;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:79
    T6 = Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I(&T18, &KPfalseVKi, requested_buffer_size_, C('\x0'));
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:78
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(T6, stream_);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:87
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T7 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:87
    T8 = CALL1(&Kaccessor_preferred_buffer_sizeYstreams_internalsVio, T7);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:85
    T19.vector_element_[0] = IKJknown_power_of_two_sizeQ_;
    T19.vector_element_[1] = &KPtrueVKi;
    T19.vector_element_[2] = &KJsize_;
    T19.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:85
    T9 = Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I(&T19, &KPtrueVKi, T8, C('\x0'));
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:84
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(T9, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:77
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:95
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T10 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:95
  T11 = CALL1(&Kaccessor_positionYstreams_internalsVio, T10);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:95
  CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2(T11, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:96
  T20 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:70
  MV_SET_COUNT(0);
  return(T20);
}

D Kdo_get_output_bufferYstreamsVioMM1I (D the_stream_, D Urest_, D bytes_) {
  D T4;
  D the_buffer_;
  D T6;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:332
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:335
  Kensure_writableYstreams_internalsVioI(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:336
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:335
  primitive_type_check(T4, &KLbufferGYstreamsVio);
  the_buffer_ = T4;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:337
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T6 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:337
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:339
    T8 = SLOT_VALUE_INITD(the_buffer_, 1);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:339
    Kbuffer_fillYstreamsVioMM0I(the_buffer_, (D) 1, &KPempty_vectorVKi, T8, &KPunboundVKi);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:340
    CONGRUENT_CALL_PROLOG(&Kdo_release_input_bufferYstreamsVio, 1);
    CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:341
    CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(the_buffer_, the_stream_);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:343
    KerrorVKdMM1I(&K79, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:337
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:345
  T7_0 = the_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:332
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdo_next_output_bufferYstreamsVioMM1I (D the_stream_, D Urest_, D bytes_) {
  D T4;
  D the_bufferF5;
  D T6;
  D T7_0;
  D the_bufferF8;
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
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:354
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:358
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:357
  primitive_type_check(T4, &KLbufferGYstreamsVio);
  the_bufferF5 = T4;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:357
  the_bufferF8 = the_bufferF5;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T22 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T23 = SLOT_VALUE_INITD(T22, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T21 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T24 = SLOT_VALUE_INITD(T21, 9);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T25 = primitive_cast_integer_as_raw(T23);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T26 = primitive_cast_integer_as_raw(T24);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  T27 = primitive_machine_word_equalQ(T25,T26);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  if (T27 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
    Kassertion_failureVKiI(&K77, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:359
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T20 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T28 = SLOT_VALUE_INITD(T20, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T19 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T29 = SLOT_VALUE_INITD(T19, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T30 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T31 = primitive_cast_integer_as_raw(T29);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T32 = primitive_machine_word_logxor(T31,1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T33 = primitive_machine_word_add_signal_overflow(T30,T32);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:361
  T34 = primitive_cast_raw_as_integer(T33);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:362
  T18 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:362
  T6 = Kforce_bufferYstreams_internalsVioI(T18, the_stream_, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:362
  the_bufferF8 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:363
  T17 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:363
  CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(T17, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:364
  T16 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:364
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(T16, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:365
  T15 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:365
  Kbuffer_fillYstreamsVioMM0I(T15, (D) 1, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:366
  T14 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:366
  SLOT_VALUE_SETTER(T34, T14, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:367
  T13 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:367
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 3);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:368
  T12 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:368
  SLOT_VALUE_SETTER((D) 1, T12, 4);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:369
  T11 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:369
  SLOT_VALUE_SETTER((D) 1, T11, 0);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:370
  T10 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:370
  SLOT_VALUE_SETTER((D) 1, T10, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:371
  T9 = the_bufferF8;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:371
  T7_0 = T9;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:354
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdo_get_input_bufferYstreamsVioMM1I (D the_stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D read_position_;
  D start_;
  D T16;
  D count_;
  D T18;
  D T19;
  D T20_0;
  D current_buffer_;
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
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:242
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:246
  Kensure_readableYstreams_internalsVioI(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:247
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:246
  current_buffer_ = T5;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:248
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T6 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:248
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:252
    T35 = current_buffer_;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:252
    CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(T35, the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:253
    CONGRUENT_CALL_PROLOG(&Kdo_release_output_bufferYstreamsVio, 1);
    CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    T34 = current_buffer_;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    T7 = CALL1(&Kbuffer_nextYstreamsVio, T34);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    T33 = current_buffer_;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    T8 = CALL1(&Kbuffer_endYstreamsVio, T33);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T36 = CONGRUENT_CALL2(T7, T8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
    if (T36 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      T32 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      T9 = CALL1(&Kbuffer_endYstreamsVio, T32);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      T31 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      T10 = CALL1(&Kbuffer_sizeYstreamsVioMM0, T31);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T11 = CONGRUENT_CALL2(T9, T10);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      if (T11 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
        Kassertion_failureVKiI(&K77, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:258
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:260
      T30 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:260
      T12 = CALL1(&Kbuffer_positionYstreamsVio, T30);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:260
      T29 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:260
      T13 = CALL1(&Kbuffer_endYstreamsVio, T29);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:260
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      read_position_ = CONGRUENT_CALL2(T12, T13);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:261
      T28 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:261
      start_ = CALL1(&Kbuffer_endYstreamsVio, T28);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:262
      T27 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:262
      T16 = CALL1(&Kbuffer_endYstreamsVio, T27);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:262
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      count_ = CONGRUENT_CALL2(T16, start_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:263
      T26 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:263
      CALL5(&Kload_bufferYstreams_internalsVio, the_stream_, T26, read_position_, start_, count_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      T25 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      T18 = CALL1(&Kbuffer_nextYstreamsVio, T25);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      T24 = current_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      T19 = CALL1(&Kbuffer_endYstreamsVio, T24);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T37 = CONGRUENT_CALL2(T18, T19);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
      if (T37 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:266
        T23 = current_buffer_;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:266
        CALL4(&Kforce_bufferYstreams_internalsVio, T23, the_stream_, IKJreturn_fresh_bufferQ_, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:268
        current_buffer_ = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:264
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:254
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:272
    KerrorVKdMM1I(&K79, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:248
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:274
  T22 = current_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:274
  T20_0 = T22;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:242
  MV_SET_COUNT(1);
  return(T20_0);
}

D Kdo_next_input_bufferYstreamsVioMM1I (D the_stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D the_bufferF6;
  D T7;
  D nread_;
  D T9_0;
  D T10_0;
  D T11_0;
  D the_bufferF12;
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
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD T34;
  D T35;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:289
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:288
  primitive_type_check(T5, &KLbufferGYstreamsVio);
  the_bufferF6 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:288
  the_bufferF12 = the_bufferF6;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:290
  T25 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:290
  T26 = SLOT_VALUE_INITD(T25, 9);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T24 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T27 = SLOT_VALUE_INITD(T24, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T23 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T28 = SLOT_VALUE_INITD(T23, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T29 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T30 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T31 = primitive_machine_word_logxor(T30,1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T32 = primitive_machine_word_add_signal_overflow(T29,T31);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:293
  T33 = primitive_cast_raw_as_integer(T32);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:302
  T22 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:302
  T7 = Kforce_bufferYstreams_internalsVioI(T22, the_stream_, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:302
  the_bufferF12 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:303
  T21 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:303
  CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(T21, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:304
  T20 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:304
  CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(T20, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:306
  T19 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:306
  nread_ = Kload_bufferYstreams_internalsVioI(the_stream_, T19, T33, (D) 1, T26);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:312
  T18 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:312
  SLOT_VALUE_SETTER(T33, T18, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:313
  T17 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:313
  SLOT_VALUE_SETTER(&KPfalseVKi, T17, 3);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:314
  T16 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:314
  SLOT_VALUE_SETTER(nread_, T16, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:315
  T15 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:315
  SLOT_VALUE_SETTER((D) 1, T15, 4);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:316
  T14 = the_bufferF12;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:316
  SLOT_VALUE_SETTER((D) 1, T14, 0);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:317
  T34 = primitive_cast_integer_as_raw(nread_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:317
  T35 = primitive_machine_word_less_thanQ(1,T34);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:317
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:318
    T13 = the_bufferF12;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:318
    T9_0 = T13;
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:320
    T10_0 = &KPfalseVKi;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:317
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:285
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kdo_force_output_buffersYstreamsVioMM1I (D the_stream_) {
  D T2;
  D the_buffer_;
  D T4;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:387
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:389
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:389
  primitive_type_check(T2, &KLbufferGYstreamsVio);
  the_buffer_ = T2;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:390
  Kforce_bufferYstreams_internalsVioI(the_buffer_, the_stream_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:391
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:387
  MV_SET_COUNT(0);
  return(T4);
}

D Kforce_output_buffersYstreamsVioMM1I (D stream_) {
  D sb_;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:378
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:380
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:381
  if (sb_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:382
    CONGRUENT_CALL_PROLOG(&Kdo_force_output_buffersYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:381
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:384
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:378
  MV_SET_COUNT(0);
  return(T3);
}

D Kread_to_endYstreamsVioMM2I (D stream_) {
  D T2;
  D the_size_;
  D T4;
  D n_;
  D T6_0;
  D T7_0;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20_0;
  D T21_0;
  D T22_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:750
  T10 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:752
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:752
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:753
    CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
    the_size_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:754
    if (the_size_ != &KPfalseVKi) {
      T11 = the_size_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:755
      CONGRUENT_CALL_PROLOG(&Kstream_positionYstreams_protocolVcommon_dylan, 1);
      T4 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:755
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      n_ = CONGRUENT_CALL2(T11, T4);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:756
      T6_0 = CALL2(&KreadYstreams_protocolVcommon_dylan, stream_, n_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:756
      T21_0 = T6_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T6_0);
        primitive_type_check(T21_0, &KLsequenceGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T7_0 = T21_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
      T14 = primitive_idQ(T10,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
        T17 = KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
        T13 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
        T15 = SLOT_VALUE_INITD(T10, 0);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
        T16 = SLOT_VALUE_INITD(T10, 1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
        MEP_CALL_PROLOG(T15, T16, 1);
        T12 = MEP_CALL1(T15, stream_);
        T13 = T12;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
      T18_0 = T13;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:759
      T22_0 = T18_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T18_0);
        primitive_type_check(T22_0, &KLsequenceGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T7_0 = T22_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:754
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:762
    T19.vector_element_[0] = IKJstream_;
    T19.vector_element_[1] = stream_;
    T19.vector_element_[2] = &KJformat_string_;
    T19.vector_element_[3] = &K65;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:762
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T19);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:762
    T20_0 = KerrorVKdMM0I(T8, &KPempty_vectorVKi);
    T9_0 = T20_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:752
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:750
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kforce_bufferYstreams_internalsVioI (D the_buffer_, D the_stream_, D Urest_, D return_fresh_bufferQ_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T9_1;
  D nwritten_;
  D new_buffer_;
  D T12_0;
  D the_bufferF13;
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
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36;
  D T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:398
  the_bufferF13 = the_buffer_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:402
  T21 = the_bufferF13;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:402
  T22 = SLOT_VALUE_INITD(T21, 3);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:402
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:403
    T20 = the_bufferF13;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:403
    T23 = SLOT_VALUE_INITD(T20, 4);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T19 = the_bufferF13;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T24 = SLOT_VALUE_INITD(T19, 1);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T25 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T26 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T27 = primitive_machine_word_logxor(T26,1);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T28 = primitive_machine_word_subtract_signal_overflow(T25,T27);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:404
    T29 = primitive_cast_raw_as_integer(T28);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T18 = the_bufferF13;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T30 = SLOT_VALUE_INITD(T18, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T31 = primitive_cast_integer_as_raw(T30);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T32 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T33 = primitive_machine_word_logxor(T32,1);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T34 = primitive_machine_word_add_signal_overflow(T31,T33);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:405
    T35 = primitive_cast_raw_as_integer(T34);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:406
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:406
    T6 = CALL1(&Kaccessor_positionYstreams_internalsVio, T5);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:406
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T36 = CONGRUENT_CALL2(T35, T6);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:406
    if (T36 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:407
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T7 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:407
      CALL2(&Kaccessor_position_setterYstreams_internalsVio, T35, T7);
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:406
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:409
    T37 = primitive_machine_word_less_thanQ(1,T28);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:409
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:411
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T8 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:411
      T17 = the_bufferF13;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:411
      T9_0 = CALL8(&Kaccessor_write_fromYstreams_internalsVio, T8, the_stream_, T23, T29, IKJbuffer_, T17, IKJreturn_fresh_bufferQ_, return_fresh_bufferQ_);
      T9_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:410
      nwritten_ = T9_0;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:410
      new_buffer_ = T9_1;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:414
      the_bufferF13 = new_buffer_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:415
      T38 = primitive_cast_integer_as_raw(nwritten_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:415
      T39 = primitive_machine_word_equalQ(T38,T28);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:415
      if (T39 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:416
        KerrorVKdMM1I(&K39, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:415
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:418
      T40 = SLOT_VALUE(the_stream_, 2);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:418
      T41 = primitive_idQ(T40,(D) 9);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:418
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T42 = primitive_cast_integer_as_raw(T23);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T43 = primitive_cast_integer_as_raw(nwritten_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T44 = primitive_machine_word_logxor(T43,1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T45 = primitive_machine_word_add_signal_overflow(T42,T44);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T46 = primitive_cast_raw_as_integer(T45);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        T16 = the_bufferF13;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:419
        SLOT_VALUE_SETTER(T46, T16, 4);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:418
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:409
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:422
    T15 = the_bufferF13;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:422
    SLOT_VALUE_SETTER(&KPfalseVKi, T15, 3);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:402
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:424
  T14 = the_bufferF13;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:424
  T12_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:398
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kload_bufferYstreams_internalsVioI (D the_stream_, D the_buffer_, D desired_file_position_, D start_, D count_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T9_1;
  D nread_;
  D T11_0;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:206
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  T6 = CALL1(&Kaccessor_positionYstreams_internalsVio, T5);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T12 = CONGRUENT_CALL2(desired_file_position_, T6);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:211
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T7 = CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:211
    CALL2(&Kaccessor_position_setterYstreams_internalsVio, desired_file_position_, T7);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:215
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T8 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:214
  T9_0 = CALL6(&Kaccessor_read_intoXYstreams_internalsVio, T8, the_stream_, start_, count_, IKJbuffer_, the_buffer_);
  T9_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:210
  nread_ = T9_0;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  T13 = primitive_cast_integer_as_raw(start_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  T14 = primitive_cast_integer_as_raw(nread_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  T17 = primitive_cast_raw_as_integer(T16);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:216
  SLOT_VALUE_SETTER(T17, the_buffer_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:217
  T11_0 = nread_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:206
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kload_buffer_and_fillYstreams_internalsVioI (D the_stream_, D the_buffer_, D desired_file_position_, D start_, D count_) {
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:220
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:225
  Kload_bufferYstreams_internalsVioI(the_stream_, the_buffer_, desired_file_position_, start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:226
  T7 = SLOT_VALUE_INITD(the_buffer_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:226
  Kbuffer_fillYstreamsVioMM0I(the_buffer_, (D) 1, &KPempty_vectorVKi, T7, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:227
  T6 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:220
  MV_SET_COUNT(0);
  return(T6);
}

D Ktype_for_file_streamYstreams_internalsVioMM0I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:117
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:122
  T5_0 = &KLgeneral_file_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:117
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_file_streamYstreams_internalsVioMM1I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:125
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:130
  T5_0 = &KLbyte_char_file_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:125
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_file_streamYstreams_internalsVioMM2I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:134
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:139
  T5_0 = &KLbyte_char_file_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:134
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_file_streamYstreams_internalsVioMM3I (D locator_, D element_type_, D encoding_, D Urest_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:142
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:147
  T5_0 = &KLbyte_file_streamGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:142
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLbyte_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
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
  D T21_0;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  T22 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  if (T22 != &KPfalseVKi) {
    T9 = K129I();
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  T23 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJlocator_;
    T25 = KerrorVKdMM1I(&K120, &T24);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
    T12 = T25;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  T14 = primitive_object_allocate_filled(18,&KLbyte_file_streamGYstreams_internalsVioW,17,&KPunboundVKi,0,0,&KPunboundVKi);
  T26 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T26 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K121);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K122);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K76);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K56);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  SLOT_VALUE_SETTER(&KLsimple_byte_vectorGVKe, T14, 12);
  SLOT_VALUE_SETTER(&Kbyte_to_byteYstreams_internalsVio, T14, 13);
  SLOT_VALUE_SETTER(&Kbyte_to_byteYstreams_internalsVio, T14, 14);
  SLOT_VALUE_SETTER(&K128, T14, 15);
  SLOT_VALUE_SETTER(&K127, T14, 16);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T21_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:54
  MV_SET_COUNT(1);
  return(T21_0);
}

static D K129I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K128I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  MV_SET_COUNT(0);
  return(T5);
}

static D K127I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  MV_SET_COUNT(0);
  return(T5);
}

D KLbyte_char_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
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
  D T21_0;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  T22 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  if (T22 != &KPfalseVKi) {
    T9 = K154I();
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  T23 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJlocator_;
    T25 = KerrorVKdMM1I(&K120, &T24);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
    T12 = T25;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  T14 = primitive_object_allocate_filled(18,&KLbyte_char_file_streamGYstreams_internalsVioW,17,&KPunboundVKi,0,0,&KPunboundVKi);
  T26 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T26 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K121);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K122);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K76);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K56);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  SLOT_VALUE_SETTER(&KLbyte_stringGVKd, T14, 12);
  SLOT_VALUE_SETTER(&Kbyte_to_byte_charYstreams_internalsVio, T14, 13);
  SLOT_VALUE_SETTER(&Kbyte_char_to_byteYstreams_internalsVio, T14, 14);
  SLOT_VALUE_SETTER(&K128, T14, 15);
  SLOT_VALUE_SETTER(&K127, T14, 16);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T21_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:48
  MV_SET_COUNT(1);
  return(T21_0);
}

static D K154I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLgeneral_file_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_shared_buffer_, D Uunique_stream_locator_, D Uunique_accessor_) {
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
  D T21_0;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  T22 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  if (T22 != &KPfalseVKi) {
    T9 = K180I();
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
    T10 = T9;
    Uunique_private_stream_lock_valueF11 = T10;
  } else {
    Uunique_private_stream_lock_valueF11 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  T23 = primitive_idQ(Uunique_stream_locator_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJlocator_;
    T25 = KerrorVKdMM1I(&K120, &T24);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
    T12 = T25;
    Uunique_stream_locatorF13 = T12;
  } else {
    Uunique_stream_locatorF13 = Uunique_stream_locator_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  T14 = primitive_object_allocate_filled(18,&KLgeneral_file_streamGYstreams_internalsVioW,17,&KPunboundVKi,0,0,&KPunboundVKi);
  T26 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T26 != &KPfalseVKi) {
    Uunique_outer_streamF16 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K121);
    Uunique_outer_streamF15 = Uunique_outer_stream_;
    Uunique_outer_streamF16 = Uunique_outer_streamF15;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF16, T14, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF17 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF17, T14, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T14, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF11, &K122);
  Uunique_private_stream_lock_valueF18 = Uunique_private_stream_lock_valueF11;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF18, T14, 3);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 5);
  primitive_type_check(Uunique_stream_shared_buffer_, &K76);
  Uunique_stream_shared_bufferF19 = Uunique_stream_shared_buffer_;
  SLOT_VALUE_SETTER(Uunique_stream_shared_bufferF19, T14, 6);
  SLOT_VALUE_SETTER((D) 1, T14, 7);
  SLOT_VALUE_SETTER((D) 1, T14, 8);
  SLOT_VALUE_SETTER((D) 1, T14, 9);
  SLOT_VALUE_SETTER(Uunique_stream_locatorF13, T14, 10);
  primitive_type_check(Uunique_accessor_, &K56);
  Uunique_accessorF20 = Uunique_accessor_;
  SLOT_VALUE_SETTER(Uunique_accessorF20, T14, 11);
  SLOT_VALUE_SETTER(&KLbyte_stringGVKd, T14, 12);
  SLOT_VALUE_SETTER(&Kbyte_to_byte_charYstreams_internalsVio, T14, 13);
  SLOT_VALUE_SETTER(&Kbyte_char_to_byteYstreams_internalsVio, T14, 14);
  SLOT_VALUE_SETTER(&K128, T14, 15);
  SLOT_VALUE_SETTER(&K127, T14, 16);
  APPLY2(&KinitializeVKd, T14, init_args_);
  T21_0 = T14;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:42
  MV_SET_COUNT(1);
  return(T21_0);
}

static D K180I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kwritable_file_stream_position_setterYstreams_internalsVioMM0I (D position_, D stream_) {
  D T3;
  D size_of_stream_;
  D T5;
  D T6;
  D T7;
  D T8_0;
  DWORD T9;
  D T10;
  _KLsimple_object_vectorGVKd_6 T11 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:473
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:476
  CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:476
  primitive_type_check(T3, &KLintegerGVKd);
  size_of_stream_ = T3;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:477
  T9 = primitive_cast_integer_as_raw(position_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:477
  T10 = primitive_machine_word_less_thanQ(T9,1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:477
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:482
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:482
    T6 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T5);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:481
    T11.vector_element_[0] = IKJstream_;
    T11.vector_element_[1] = stream_;
    T11.vector_element_[2] = &KJsize_;
    T11.vector_element_[3] = T6;
    T11.vector_element_[4] = IKJposition_;
    T11.vector_element_[5] = position_;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:481
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T11);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:481
    KsignalVKdMM0I(T7, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:478
    SLOT_VALUE_SETTER(position_, stream_, 8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:479
    Kadjust_stream_position_from_startYstreams_internalsVioMM0I(position_, stream_, size_of_stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:477
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:484
  T8_0 = position_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:473
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kadjust_stream_position_from_startYstreams_internalsVioMM0I (D position_from_start_, D the_stream_, D size_of_stream_) {
  D Uobject_;
  D T5;
  D the_bufferF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D the_bufferF15;
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
  D the_bufferF26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D the_bufferF32;
  D T33;
  D T34;
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
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71;
  D the_bufferF72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  DWORD T94;
  DWORD T95;
  DWORD T96;
  D T97;
  D T98;
  DWORD T99;
  DWORD T100;
  D T101;
  DWORD T102;
  D T103;
  _KLsimple_object_vectorGVKd_6 T104 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T105;
  DWORD T106;
  D T107;
  D T108;
  D T109;
  DWORD T110;
  D T111;
  D T112;
  D T113;
  DWORD T114;
  D T115;
  D T116;
  _KLsimple_object_vectorGVKd_8 T117 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T118;
  DWORD T119;
  DWORD T120;
  DWORD T121;
  D T122;
  D T123;
  DWORD T124;
  DWORD T125;
  D T126;
  D T127_0;
  D T128;
  D T129;
  DWORD T130;
  D T131;
  D T132;
  D T133;
  DWORD T134;
  DWORD T135;
  DWORD T136;
  DWORD T137;
  D T138;
  D T139;
  D T140;
  D T141;
  DWORD T142;
  D T143;
  D T144;
  DWORD T145;
  D T146;
  D T147;
  D T148;
  DWORD T149;
  DWORD T150;
  D T151;
  D T152;
  D T153;
  DWORD T154;
  DWORD T155;
  DWORD T156;
  DWORD T157;
  D T158;
  D T159;
  D T160;
  D T161;
  D T162;
  D T163;
  D T164;
  D T165;
  D T166;
  DWORD T167;
  DWORD T168;
  DWORD T169;
  D T170;
  D T171;
  DWORD T172;
  DWORD T173;
  D T174;
  D T175;
  DWORD T176;
  D T177;
  D T178;
  D T179;
  DWORD T180;
  D T181;
  D T182;
  D T183;
  DWORD T184;
  D T185;
  DWORD T186;
  D T187;
  D T188;
  DWORD T189;
  D T190;
  DWORD T191;
  D T192;
  DWORD T193;
  D T194;
  D T195;
  _KLsimple_object_vectorGVKd_4 T196 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_1 T197 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T198;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:521
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
  CONGRUENT_CALL_PROLOG(&Kstream_directionYstreams_internalsVio, 1);
  Uobject_ = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
  T92 = primitive_idQ(Uobject_,&KJinput_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
  if (T92 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:528
    CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:528
    primitive_type_check(T5, &KLbufferGYstreamsVio);
    the_bufferF6 = T5;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:530
    T93 = SLOT_VALUE(the_bufferF6, 6);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:530
    T94 = primitive_cast_integer_as_raw(T93);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:530
    T95 = primitive_cast_integer_as_raw(position_from_start_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:530
    T96 = primitive_machine_word_logand(T94,T95);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:530
    T97 = primitive_cast_raw_as_integer(T96);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:532
    T98 = SLOT_VALUE(the_bufferF6, 5);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:532
    T99 = primitive_cast_integer_as_raw(T98);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:532
    T100 = primitive_machine_word_logand(T99,T95);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:532
    T101 = primitive_cast_raw_as_integer(T100);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
    if (size_of_stream_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:456
      T90 = size_of_stream_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
      T102 = primitive_cast_integer_as_raw(T90);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
      T103 = primitive_machine_word_less_thanQ(T102,T95);
      T7 = T103;
    } else {
      T7 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:535
      T104.vector_element_[0] = IKJstream_;
      T104.vector_element_[1] = the_stream_;
      T104.vector_element_[2] = &KJsize_;
      T104.vector_element_[3] = size_of_stream_;
      T104.vector_element_[4] = IKJposition_;
      T104.vector_element_[5] = position_from_start_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:535
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T104);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:535
      KsignalVKdMM0I(T8, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      T9 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:538
        T105 = SLOT_VALUE_INITD(the_bufferF6, 2);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:538
        T106 = primitive_cast_integer_as_raw(T105);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:538
        T107 = primitive_machine_word_equalQ(T96,T106);
        T10 = T107;
      } else {
        T10 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:539
        T108 = SLOT_VALUE_INITD(the_bufferF6, 4);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:539
        T110 = primitive_cast_integer_as_raw(T108);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:539
        T111 = primitive_machine_word_less_thanQ(T100,T110);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:539
        T109 = primitive_not(T111);
        T11 = T109;
      } else {
        T11 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:540
        T112 = SLOT_VALUE_INITD(the_bufferF6, 1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:540
        T114 = primitive_cast_integer_as_raw(T112);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:540
        T115 = primitive_machine_word_less_thanQ(T114,T100);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:540
        T113 = primitive_not(T115);
        T12 = T113;
      } else {
        T12 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:537
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:542
        SLOT_VALUE_SETTER(T101, the_bufferF6, 0);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:545
        SLOT_VALUE_SETTER(T101, the_bufferF6, 1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:546
        SLOT_VALUE_SETTER(T97, the_bufferF6, 2);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:547
        SLOT_VALUE_SETTER(T101, the_bufferF6, 4);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:548
        SLOT_VALUE_SETTER(T101, the_bufferF6, 0);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:553
        CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
        CONGRUENT_CALL2(the_bufferF6, the_stream_);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:534
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
    T116 = primitive_idQ(Uobject_,&KJinput_output_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
    if (T116 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:558
      if (size_of_stream_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:559
        T117.vector_element_[0] = IKJstream_;
        T117.vector_element_[1] = the_stream_;
        T117.vector_element_[2] = &KJsize_;
        T117.vector_element_[3] = size_of_stream_;
        T117.vector_element_[4] = IKJposition_;
        T117.vector_element_[5] = position_from_start_;
        T117.vector_element_[6] = &KJformat_string_;
        T117.vector_element_[7] = &K200;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:559
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T13 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T117);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:559
        KerrorVKdMM0I(T13, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:558
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:563
      CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
      T14 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:558
      primitive_type_check(T14, &KLbufferGYstreamsVio);
      the_bufferF15 = T14;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:558
      the_bufferF32 = the_bufferF15;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T71 = the_bufferF32;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T118 = SLOT_VALUE(T71, 6);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T119 = primitive_cast_integer_as_raw(T118);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T120 = primitive_cast_integer_as_raw(position_from_start_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T121 = primitive_machine_word_logand(T119,T120);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:565
      T122 = primitive_cast_raw_as_integer(T121);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:567
      T70 = the_bufferF32;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:567
      T123 = SLOT_VALUE(T70, 5);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:567
      T124 = primitive_cast_integer_as_raw(T123);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:567
      T125 = primitive_machine_word_logand(T124,T120);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:567
      T126 = primitive_cast_raw_as_integer(T125);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T127_0 = CONGRUENT_CALL2(size_of_stream_, position_from_start_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
      T128 = T127_0;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
      if (T128 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        T69 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        T129 = SLOT_VALUE_INITD(T69, 2);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        T130 = primitive_cast_integer_as_raw(T129);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        T131 = primitive_machine_word_equalQ(T121,T130);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        if (T131 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T68 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T132 = SLOT_VALUE_INITD(T68, 2);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T67 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T133 = SLOT_VALUE_INITD(T67, 1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T134 = primitive_cast_integer_as_raw(T132);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T135 = primitive_cast_integer_as_raw(T133);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T136 = primitive_machine_word_logxor(T135,1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T137 = primitive_machine_word_add_signal_overflow(T134,T136);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:578
          T138 = primitive_cast_raw_as_integer(T137);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:579
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T16 = CONGRUENT_CALL2(T138, size_of_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:579
          if (T16 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:583
            T66 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:583
            T139 = SLOT_VALUE_INITD(T66, 1);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:584
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T17 = CONGRUENT_CALL2(size_of_stream_, T138);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:581
            T65 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:581
            CALL5(&Kload_buffer_and_fillYstreams_internalsVio, the_stream_, T65, T138, T139, T17);
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:579
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:587
          T64 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:587
          T18 = Kforce_bufferYstreams_internalsVioI(T64, the_stream_, &KPempty_vectorVKi, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:587
          the_bufferF32 = T18;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:589
          T63 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:589
          CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
          CONGRUENT_CALL2(T63, the_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:592
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T19 = CONGRUENT_CALL2(T122, size_of_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:592
          if (T19 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:596
            T62 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:596
            T140 = SLOT_VALUE_INITD(T62, 9);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:595
            T61 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:595
            Kload_buffer_and_fillYstreams_internalsVioI(the_stream_, T61, T122, (D) 1, T140);
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:600
            T60 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:600
            Kbuffer_fillYstreamsVioMM0I(T60, (D) 1, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:592
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:602
          T59 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:602
          SLOT_VALUE_SETTER((D) 1, T59, 4);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:603
          T58 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:603
          SLOT_VALUE_SETTER(T122, T58, 2);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:604
          T141 = primitive_machine_word_equalQ(T125,1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:604
          if (T141 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:612
            T142 = primitive_machine_word_subtract_signal_overflow(T120,4);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:612
            T143 = primitive_cast_raw_as_integer(T142);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:612
            SLOT_VALUE_SETTER(T143, Dnull_bufferYstreams_internalsVio, 2);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:613
            SLOT_VALUE_SETTER(&KPtrueVKi, Dnull_bufferYstreams_internalsVio, 3);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:614
            Kforce_bufferYstreams_internalsVioI(Dnull_bufferYstreams_internalsVio, the_stream_, &KPempty_vectorVKi, &KPfalseVKi);
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:604
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:573
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:618
        T57 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:618
        SLOT_VALUE_SETTER(T126, T57, 0);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:622
        T56 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:622
        SLOT_VALUE_SETTER(T126, T56, 1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:625
        T55 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:625
        SLOT_VALUE_SETTER(&KPtrueVKi, T55, 3);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:630
        CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
        T20 = CONGRUENT_CALL1(the_stream_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:630
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:631
          CONGRUENT_CALL_PROLOG(&Kdo_release_input_bufferYstreamsVio, 1);
          CONGRUENT_CALL1(the_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:632
          T54 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:632
          CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
          CONGRUENT_CALL2(T54, the_stream_);
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:630
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:634
        T53 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:634
        T144 = SLOT_VALUE_INITD(T53, 2);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:634
        T145 = primitive_cast_integer_as_raw(T144);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:634
        T146 = primitive_machine_word_equalQ(T121,T145);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
        if (T146 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T52 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T147 = SLOT_VALUE_INITD(T52, 1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T51 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T148 = SLOT_VALUE_INITD(T51, 9);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T149 = primitive_cast_integer_as_raw(T147);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T150 = primitive_cast_integer_as_raw(T148);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          T151 = primitive_machine_word_less_thanQ(T149,T150);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          if (T151 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T50 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T152 = SLOT_VALUE_INITD(T50, 2);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T49 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T153 = SLOT_VALUE_INITD(T49, 1);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T154 = primitive_cast_integer_as_raw(T152);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T155 = primitive_cast_integer_as_raw(T153);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T156 = primitive_machine_word_logxor(T155,1);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T157 = primitive_machine_word_add_signal_overflow(T154,T156);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:640
            T158 = primitive_cast_raw_as_integer(T157);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:641
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T21 = CONGRUENT_CALL2(T158, size_of_stream_);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:641
            if (T21 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:643
              T48 = the_bufferF32;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:643
              T159 = SLOT_VALUE_INITD(T48, 1);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:646
              T47 = the_bufferF32;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:646
              T160 = SLOT_VALUE_INITD(T47, 9);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:647
              CONGRUENT_CALL_PROLOG(&K_VKd, 2);
              T22 = CONGRUENT_CALL2(size_of_stream_, T158);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:646
              CONGRUENT_CALL_PROLOG(&KLVKd, 2);
              T161 = CONGRUENT_CALL2(T160, T22);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:646
              if (T161 != &KPfalseVKi) {
                T162 = T160;
              } else {
                T162 = T22;
              }
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:646
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:644
              T46 = the_bufferF32;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:644
              CALL5(&Kload_bufferYstreams_internalsVio, the_stream_, T46, T158, T159, T162);
            }
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:641
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:650
            T45 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:650
            T163 = SLOT_VALUE_INITD(T45, 1);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:650
            T44 = the_bufferF32;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:650
            Kbuffer_fillYstreamsVioMM0I(T44, (D) 1, &KPempty_vectorVKi, T163, &KPunboundVKi);
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:638
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:652
          T43 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:652
          SLOT_VALUE_SETTER(T126, T43, 0);
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:654
          T42 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:654
          T23 = Kforce_bufferYstreams_internalsVioI(T42, the_stream_, &KPempty_vectorVKi, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:654
          the_bufferF32 = T23;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:656
          T41 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:656
          CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
          CONGRUENT_CALL2(T41, the_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:661
          T40 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:661
          T164 = SLOT_VALUE_INITD(T40, 9);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:660
          T39 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:660
          Kload_buffer_and_fillYstreams_internalsVioI(the_stream_, T39, T122, (D) 1, T164);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:662
          T38 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:662
          SLOT_VALUE_SETTER(T122, T38, 2);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:663
          T37 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:663
          SLOT_VALUE_SETTER((D) 1, T37, 4);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:664
          T36 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:664
          SLOT_VALUE_SETTER(T126, T36, 0);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:665
          T35 = the_bufferF32;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:665
          SLOT_VALUE_SETTER(&KPfalseVKi, T35, 3);
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:568
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:667
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      T24 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:667
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:668
        T34 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:668
        CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
        CONGRUENT_CALL2(T34, the_stream_);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:673
        T33 = the_bufferF32;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:673
        CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
        CONGRUENT_CALL2(T33, the_stream_);
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:667
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
      T165 = primitive_idQ(Uobject_,&KJoutput_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
      if (T165 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:677
        CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
        T25 = CONGRUENT_CALL1(the_stream_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:677
        primitive_type_check(T25, &KLbufferGYstreamsVio);
        the_bufferF26 = T25;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:677
        the_bufferF72 = the_bufferF26;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T89 = the_bufferF72;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T166 = SLOT_VALUE(T89, 6);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T167 = primitive_cast_integer_as_raw(T166);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T168 = primitive_cast_integer_as_raw(position_from_start_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T169 = primitive_machine_word_logand(T167,T168);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:679
        T170 = primitive_cast_raw_as_integer(T169);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:681
        T88 = the_bufferF72;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:681
        T171 = SLOT_VALUE(T88, 5);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:681
        T172 = primitive_cast_integer_as_raw(T171);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:681
        T173 = primitive_machine_word_logand(T172,T168);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:681
        T174 = primitive_cast_raw_as_integer(T173);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        T87 = the_bufferF72;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        T175 = SLOT_VALUE_INITD(T87, 2);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        T176 = primitive_cast_integer_as_raw(T175);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        T177 = primitive_machine_word_equalQ(T169,T176);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        if (T177 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:691
          T86 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:691
          T178 = SLOT_VALUE_INITD(T86, 4);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:691
          T180 = primitive_cast_integer_as_raw(T178);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:691
          T181 = primitive_machine_word_less_thanQ(T173,T180);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:691
          T179 = primitive_not(T181);
          T27 = T179;
        } else {
          T27 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:692
          T85 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:692
          T182 = SLOT_VALUE_INITD(T85, 1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:692
          T184 = primitive_cast_integer_as_raw(T182);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:692
          T185 = primitive_machine_word_less_thanQ(T184,T173);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:692
          T183 = primitive_not(T185);
          T28 = T183;
        } else {
          T28 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:698
          T84 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:698
          SLOT_VALUE_SETTER(T174, T84, 0);
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:703
          T83 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:703
          T29 = Kforce_bufferYstreams_internalsVioI(T83, the_stream_, &KPempty_vectorVKi, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:703
          the_bufferF72 = T29;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:705
          T82 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:705
          CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
          CONGRUENT_CALL2(T82, the_stream_);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:707
          T81 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:707
          SLOT_VALUE_SETTER(T170, T81, 2);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:708
          T80 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:708
          SLOT_VALUE_SETTER(T174, T80, 0);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:709
          T79 = the_bufferF72;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:709
          SLOT_VALUE_SETTER(T174, T79, 1);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:710
          if (size_of_stream_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:456
            T91 = size_of_stream_;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:711
            T186 = primitive_cast_integer_as_raw(T91);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:711
            T187 = primitive_machine_word_less_thanQ(T186,T168);
            T30 = T187;
          } else {
            T30 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:710
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:710
          if (T30 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:714
            T188 = primitive_machine_word_equalQ(T173,1);
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:714
            if (T188 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:717
              T189 = primitive_machine_word_subtract_signal_overflow(T168,4);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:717
              T190 = primitive_cast_raw_as_integer(T189);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:717
              SLOT_VALUE_SETTER(T190, Dnull_bufferYstreams_internalsVio, 2);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:718
              SLOT_VALUE_SETTER(&KPtrueVKi, Dnull_bufferYstreams_internalsVio, 3);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:719
              Kforce_bufferYstreams_internalsVioI(Dnull_bufferYstreams_internalsVio, the_stream_, &KPempty_vectorVKi, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:721
              T78 = the_bufferF72;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:721
              SLOT_VALUE_SETTER(T174, T78, 4);
            } else {
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:723
              T191 = primitive_machine_word_subtract_signal_overflow(T173,4);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:723
              T192 = primitive_cast_raw_as_integer(T191);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:723
              T77 = the_bufferF72;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:723
              Kelement_setterVKdMioM0I((D) 1, T77, T192);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:724
              T193 = primitive_machine_word_subtract_signal_overflow(T173,4);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:724
              T194 = primitive_cast_raw_as_integer(T193);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:724
              T76 = the_bufferF72;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:724
              SLOT_VALUE_SETTER(T194, T76, 4);
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:725
              T75 = the_bufferF72;
              // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:725
              SLOT_VALUE_SETTER(&KPtrueVKi, T75, 3);
            }
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:714
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:728
            T74 = the_bufferF72;
            // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:728
            SLOT_VALUE_SETTER(T174, T74, 4);
          }
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:710
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:690
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:732
        T73 = the_bufferF72;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:732
        CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
        CONGRUENT_CALL2(T73, the_stream_);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
        T195 = primitive_idQ(Uobject_,IKJclosed_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
        if (T195 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:734
          T196.vector_element_[0] = IKJstream_;
          T196.vector_element_[1] = the_stream_;
          T196.vector_element_[2] = &KJformat_string_;
          T196.vector_element_[3] = &K203;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:734
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T31 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T196);
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:734
          KerrorVKdMM0I(T31, &KPempty_vectorVKi);
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
          T197.vector_element_[0] = Uobject_;
          // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
          KerrorVKdMM1I(&K204, &T197);
        }
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:525
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:738
  T198 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:521
  MV_SET_COUNT(0);
  return(T198);
}

D Kstream_contentsYstreams_protocolVcommon_dylanMioM2I (D stream_, D Urest_, D clear_contentsQ_) {
  D T4;
  D T5_0;
  D T6_0;
  D original_position_;
  D T8;
  D contents_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22_0;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_4 T25 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T26_0;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29_0;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32_0;
  D T33_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:769
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  T13 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  T15 = primitive_machine_word_logand(T14,5);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  T16 = primitive_cast_raw_as_integer(T15);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  T17 = primitive_idQ(T16,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
    T18 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
    T19 = primitive_idQ(T18,(D) 9);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:775
      T20 = SLOT_VALUE_INITD(stream_, 10);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:774
      T21.vector_element_[0] = T20;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:774
      T22_0 = KerrorVKdMM1I(&K265, &T21);
      T6_0 = T22_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:776
      T23 = SLOT_VALUE(stream_, 2);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:776
      T24 = primitive_idQ(T23,(D) 17);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:777
        T25.vector_element_[0] = IKJstream_;
        T25.vector_element_[1] = stream_;
        T25.vector_element_[2] = &KJformat_string_;
        T25.vector_element_[3] = &K266;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:777
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T4 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T25);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:777
        T26_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
        T5_0 = T26_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:782
        T27 = SLOT_VALUE_INITD(stream_, 10);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:781
        T28.vector_element_[0] = T27;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:781
        T29_0 = KerrorVKdMM1I(&K267, &T28);
        T5_0 = T29_0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:773
    T12_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
    if (clear_contentsQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:787
      T30 = SLOT_VALUE_INITD(stream_, 10);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:785
      T31.vector_element_[0] = T30;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:785
      T32_0 = KerrorVKdMM1I(&K268, &T31);
      T11_0 = T32_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:789
      CONGRUENT_CALL_PROLOG(&Kstream_positionYstreams_protocolVcommon_dylan, 1);
      original_position_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:790
      CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:791
      CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2((D) 1, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:792
      CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
      T8 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:792
      contents_ = CALL2(&KreadYstreams_protocolVcommon_dylan, stream_, T8);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:793
      CONGRUENT_CALL_PROLOG(&Kstream_position_setterYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(original_position_, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:794
      T10_0 = contents_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:794
      T33_0 = T10_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T10_0);
        primitive_type_check(T33_0, &KLsequenceGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T11_0 = T33_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:772
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:769
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kunread_elementYstreams_protocolVcommon_dylanMioM2I (D stream_, D elt_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:743
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:746
  CONGRUENT_CALL_PROLOG(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, (D) -3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:747
  T3_0 = elt_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:743
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2I (D stream_, D delta_, D Urest_, D from_) {
  D T5;
  D size_of_stream_;
  D T7;
  D T8;
  D T9;
  D T10;
  D position_from_start_;
  D Utmp_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  _KLsimple_object_vectorGVKd_1 T29 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_4 T37 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T38 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:487
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:491
  CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:491
  primitive_type_check(T5, &KLintegerGVKd);
  size_of_stream_ = T5;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
  T21 = primitive_idQ(from_,IKJcurrent_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:494
    CONGRUENT_CALL_PROLOG(&Kstream_positionYstreams_protocolVcommon_dylan, 1);
    T7 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:494
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T8 = CONGRUENT_CALL2(T7, delta_);
    position_from_start_ = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
    T22 = primitive_idQ(from_,&KJstart_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
    if (T22 != &KPfalseVKi) {
      T10 = delta_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
      T23 = primitive_idQ(from_,&KJend_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:496
        T24 = primitive_cast_integer_as_raw(size_of_stream_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:496
        T25 = primitive_cast_integer_as_raw(delta_);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:496
        T26 = primitive_machine_word_logxor(T25,1);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:496
        T27 = primitive_machine_word_add_signal_overflow(T24,T26);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:496
        T28 = primitive_cast_raw_as_integer(T27);
        T9 = T28;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
        T29.vector_element_[0] = from_;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
        T30 = KerrorVKdMM1I(&K204, &T29);
        T9 = T30;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
    position_from_start_ = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:493
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:498
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  Utmp_ = CONGRUENT_CALL2(position_from_start_, (D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:498
  if (Utmp_ != &KPfalseVKi) {
    T14 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
    T31 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
    T32 = primitive_idQ(T31,(D) 9);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T33_0 = CONGRUENT_CALL2(size_of_stream_, position_from_start_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
      T34 = T33_0;
      T13 = T34;
    } else {
      T13 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:499
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:498
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:498
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:500
    T35 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:500
    T36 = primitive_idQ(T35,(D) 17);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:500
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:501
      T37.vector_element_[0] = IKJstream_;
      T37.vector_element_[1] = stream_;
      T37.vector_element_[2] = &KJformat_string_;
      T37.vector_element_[3] = &K253;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:501
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T15 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T37);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:501
      KerrorVKdMM0I(T15, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:506
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T16 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:506
      T17 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T16);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:505
      T38.vector_element_[0] = IKJstream_;
      T38.vector_element_[1] = stream_;
      T38.vector_element_[2] = &KJsize_;
      T38.vector_element_[3] = T17;
      T38.vector_element_[4] = IKJposition_;
      T38.vector_element_[5] = &KpositionYcommon_extensionsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:505
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T18 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T38);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:505
      KerrorVKdMM0I(T18, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:500
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:510
    SLOT_VALUE_SETTER(&KpositionYcommon_extensionsVcommon_dylan, stream_, 8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:511
    CALL3(&Kadjust_stream_position_from_startYstreams_internalsVioMM0, position_from_start_, stream_, size_of_stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:498
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:514
  T19_0 = position_from_start_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:487
  T20_0 = T19_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T19_0);
    primitive_type_check(T20_0, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:487
  MV_SET_COUNT(1);
  return(T20_0);
}

D Kstream_position_setterYstreams_protocolVcommon_dylanMioM4I (D position_, D stream_) {
  D T3;
  D size_of_stream_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T20 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:449
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:452
  CONGRUENT_CALL_PROLOG(&Kstream_sizeYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:452
  primitive_type_check(T3, &K247);
  size_of_stream_ = T3;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  T12 = primitive_cast_integer_as_raw(position_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  T13 = primitive_machine_word_less_thanQ(T12,1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  if (T13 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
    T14 = primitive_not(size_of_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
    if (size_of_stream_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T15 = CONGRUENT_CALL2(size_of_stream_, position_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
      T16 = primitive_not(T15);
      T5 = T16;
    } else {
      T5 = T14;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:455
    SLOT_VALUE_SETTER(position_, stream_, 8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:456
    Kadjust_stream_position_from_startYstreams_internalsVioMM0I(position_, stream_, size_of_stream_);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:458
    T17 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:458
    T18 = primitive_idQ(T17,(D) 17);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:458
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:459
      T19.vector_element_[0] = IKJstream_;
      T19.vector_element_[1] = stream_;
      T19.vector_element_[2] = &KJformat_string_;
      T19.vector_element_[3] = &K253;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:459
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T19);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:459
      KerrorVKdMM0I(T7, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:464
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T8 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:464
      T9 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T8);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:463
      T20.vector_element_[0] = IKJstream_;
      T20.vector_element_[1] = stream_;
      T20.vector_element_[2] = &KJsize_;
      T20.vector_element_[3] = T9;
      T20.vector_element_[4] = IKJposition_;
      T20.vector_element_[5] = position_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:463
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T10 = CONGRUENT_CALL2(&KLstream_position_errorGYstreamsVio, &T20);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:463
      KerrorVKdMM0I(T10, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:458
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:453
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:467
  T11_0 = position_;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:449
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kstream_positionYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D Utmp_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15;
  D T16;
  D T17_0;
  D T18_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:429
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
  if (Utmp_ != &KPfalseVKi) {
    T4 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:432
    CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:432
    T6 = CALL1(&Kbuffer_positionYstreamsVio, T5);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:433
    CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
    T7 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:433
    T8 = CALL1(&Kbuffer_nextYstreamsVio, T7);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:432
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T9_0 = CONGRUENT_CALL2(T6, T8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:432
    T17_0 = T9_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T9_0);
      primitive_type_check(T17_0, &KLintegerGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T14_0 = T17_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:434
    T15 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:434
    T16 = primitive_idQ(T15,(D) 17);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:440
      T10_0 = (D) 1;
      T13_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:445
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T11 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:445
      T12_0 = CALL1(&Kaccessor_positionYstreams_internalsVio, T11);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:445
      T18_0 = T12_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T12_0);
        primitive_type_check(T18_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T13_0 = T18_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:431
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:429
  MV_SET_COUNT(1);
  return(T14_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM4I (D stream_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:189
  T8 = primitive_copy_vector(Urest_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:190
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:190
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
    T9 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
      KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
      T10 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
      T11 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
      MEP_CALL_PROLOG(T10, T11, 2);
      MEP_CALL2(T10, stream_, T8);
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:191
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:196
    CONGRUENT_CALL_PROLOG(&Kstream_shared_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:197
    CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:198
    CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:199
    CONGRUENT_CALL_PROLOG(&Kaccessor_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:199
    T4 = &KPfalseVKi;
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:190
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:190
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:189
  MV_SET_COUNT(0);
  return(T6);
}

D Kstream_sizeYstreams_protocolVcommon_dylanMioM2I (D the_stream_) {
  D the_bufferF2;
  D T3;
  D the_bufferF4;
  D T5;
  D the_size_;
  D T7_0;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23_0;
  D T24_0;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34_0;
  _KLsimple_object_vectorGVKd_4 T35 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T36_0;
  D T37_0;
  D T38_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:170
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:172
  CONGRUENT_CALL_PROLOG(&Kstream_shared_bufferYstreams_internalsVio, 1);
  the_bufferF2 = CONGRUENT_CALL1(the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
  if (the_bufferF2 != &KPfalseVKi) {
    T14 = the_bufferF2;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
    T15 = SLOT_VALUE_INITD(T14, 3);
    T3 = T15;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:174
    primitive_type_check(the_bufferF2, &KLbufferGYstreamsVio);
    the_bufferF4 = the_bufferF2;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:175
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:175
    the_size_ = CALL1(&Kaccessor_sizeYstreams_internalsVio, T5);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:176
    if (the_size_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T16 = SLOT_VALUE_INITD(the_bufferF4, 2);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T17 = SLOT_VALUE_INITD(the_bufferF4, 1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T18 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T19 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T20 = primitive_machine_word_logxor(T19,1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T21 = primitive_machine_word_add_signal_overflow(T18,T20);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T22 = primitive_cast_raw_as_integer(T21);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T24_0 = CONGRUENT_CALL2(the_size_, T22);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T25 = T24_0;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      if (T25 != &KPfalseVKi) {
        T26 = T22;
      } else {
        T26 = the_size_;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T23_0 = T26;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:177
      T38_0 = T23_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T23_0);
        primitive_type_check(T38_0, &K247);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T7_0 = T38_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T27 = SLOT_VALUE_INITD(the_bufferF4, 2);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T28 = SLOT_VALUE_INITD(the_bufferF4, 1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T29 = primitive_cast_integer_as_raw(T27);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T30 = primitive_cast_integer_as_raw(T28);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T31 = primitive_machine_word_logxor(T30,1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T32 = primitive_machine_word_add_signal_overflow(T29,T31);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T33 = primitive_cast_raw_as_integer(T32);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:179
      T34_0 = T33;
      T7_0 = T34_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:176
    T13_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:181
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T8 = CONGRUENT_CALL1(the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:182
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T9 = CONGRUENT_CALL1(the_stream_);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:182
      T10_0 = CALL1(&Kaccessor_sizeYstreams_internalsVio, T9);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:182
      T37_0 = T10_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T10_0);
        primitive_type_check(T37_0, &K247);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T12_0 = T37_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:184
      T35.vector_element_[0] = IKJstream_;
      T35.vector_element_[1] = the_stream_;
      T35.vector_element_[2] = &KJformat_string_;
      T35.vector_element_[3] = &K248;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:184
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T11 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T35);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:184
      T36_0 = KerrorVKdMM0I(T11, &KPempty_vectorVKi);
      T12_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:173
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:170
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3I (D stream_) {
  D T2_0;
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:159
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  T4 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  T6 = primitive_machine_word_logand(T5,5);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  T8 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
    T2_0 = &KPfalseVKi;
    T3_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:162
    T9_0 = KerrorVKdMM1I(&K246, &KPempty_vectorVKi);
    T3_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:161
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:159
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM3I (D stream_) {
  D T2_0;
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8;
  D sb_;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:153
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  T4 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  T6 = primitive_machine_word_logand(T5,5);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  T8 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
    T2_0 = &KPfalseVKi;
    T3_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T12 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T13 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T14 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T15 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T16 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T17 = primitive_machine_word_less_thanQ(T15,T16);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      if (T17 != &KPfalseVKi) {
        T21 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
        T18.vector_element_[0] = &KJwaitQ_;
        T18.vector_element_[1] = &KPtrueVKi;
        T18.vector_element_[2] = IKJbytes_;
        T18.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T10_0 = CONGRUENT_CALL2(stream_, &T18);
        // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
        T20 = T10_0;
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T23 = T21;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T19.vector_element_[0] = &KJwaitQ_;
      T19.vector_element_[1] = &KPtrueVKi;
      T19.vector_element_[2] = IKJbytes_;
      T19.vector_element_[3] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
      T11_0 = CONGRUENT_CALL2(stream_, &T19);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
      T22 = T11_0;
      T23 = T22;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
    T25 = primitive_not(T23);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:156
    T24_0 = T25;
    T3_0 = T24_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:155
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:153
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMioM3I (D class_, D initargs_, D locator_, D element_type_, D encoding_) {
  D T6_0;
  D T7;
  D T8;
  D type_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20_0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:99
  T8 = primitive_copy_vector(initargs_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:103
  type_ = APPLY4(&Ktype_for_file_streamYstreams_internalsVio, locator_, element_type_, encoding_, T8);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:104
  T10 = primitive_idQ(type_,class_);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:104
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
    T13 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
      T16 = KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
      T12 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
      T14 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
      T15 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
      MEP_CALL_PROLOG(T14, T15, 2);
      T11 = MEP_CALL2(T14, class_, T8);
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
    T17_0 = T12;
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:105
    T19_0 = T17_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T17_0);
      primitive_type_check(T19_0, &KLfile_streamGYstreams_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:107
    T18_0 = APPLY2(&KmakeVKd, type_, T8);
    // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:107
    T20_0 = T18_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T18_0);
      primitive_type_check(T20_0, &KLfile_streamGYstreams_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T20_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:104
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:99
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_14Efile_stream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_start_);
    if (T0 != &KJbuffer_start_) {
      IKJbuffer_start_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_end_);
    if (T0 != &KJbuffer_end_) {
      IKJbuffer_end_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_repeated_slot_value_setter(T0, &K134, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K131, 1, 6);
      IKJbuffer_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJreturn_fresh_bufferQ_);
    if (T0 != &KJreturn_fresh_bufferQ_) {
      IKJreturn_fresh_bufferQ_ = T0;
      primitive_repeated_slot_value_setter(T0, &K44, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K42, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJaccessor_);
    if (T0 != &KJaccessor_) {
      primitive_repeated_slot_value_setter(T0, &K134, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K131, 1, 10);
      primitive_slot_value_setter(T0, &KaccessorYstreams_internalsVioHLfile_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      IKJstream_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbytes_);
    if (T0 != &KJbytes_) {
      IKJbytes_ = T0;
      primitive_repeated_slot_value_setter(T0, &K84, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K83, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K74, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K71, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K134, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K131, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_);
    if (T0 != &KJfile_) {
      IKJfile_ = T0;
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

    T0 = KPresolve_symbolVKiI(&KJbuffer_size_);
    if (T0 != &KJbuffer_size_) {
      primitive_repeated_slot_value_setter(T0, &K195, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K192, 1, 0);
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

    T0 = KPresolve_symbolVKiI(&KJclosed_);
    if (T0 != &KJclosed_) {
      IKJclosed_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcurrent_);
    if (T0 != &KJcurrent_) {
      primitive_repeated_slot_value_setter(T0, &K260, 1, 1);
      IKJcurrent_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclear_contentsQ_);
    if (T0 != &KJclear_contentsQ_) {
      primitive_repeated_slot_value_setter(T0, &K273, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K270, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_14Efile_stream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:70
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I0;
}
I0:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:99
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I239;
}
I239:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:153
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I236;
}
I236:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:159
  T0 = KPadd_a_methodVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I233;
}
I233:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:170
  T0 = KPadd_a_methodVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I230;
}
I230:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:189
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I227;
}
I227:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:429
  T0 = KPadd_a_methodVKnI(&Kstream_positionYstreams_protocolVcommon_dylan, &Kstream_positionYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I224;
}
I224:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:449
  T0 = KPadd_a_methodVKnI(&Kstream_position_setterYstreams_protocolVcommon_dylan, &Kstream_position_setterYstreams_protocolVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I221;
}
I221:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:487
  T0 = KPadd_a_methodVKnI(&Kadjust_stream_positionYstreams_protocolVcommon_dylan, &Kadjust_stream_positionYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I218;
}
I218:

{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_10 T3 = {&KLsimple_object_vectorGVKdW, (D) 41};

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:519
  T3.vector_element_[0] = &KJfill_;
  T3.vector_element_[1] = C('\x0');
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = (D) 5;
  T3.vector_element_[4] = &KJfill_;
  T3.vector_element_[5] = (D) 1;
  T3.vector_element_[6] = IKJbuffer_start_;
  T3.vector_element_[7] = (D) 1;
  T3.vector_element_[8] = IKJbuffer_end_;
  T3.vector_element_[9] = (D) 5;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:519
  T2_0 = KLbufferGZ32ZconstructorYstreams_internalsVioMM0I(&KLbufferGYstreamsVio, &T3, (D) 1, (D) 5, (D) 1, &KPfalseVKi, (D) 1, (D) 1, &KPfalseVKi, (D) 5);
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:519
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:518
  Dnull_bufferYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:518
  T0 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:743
  T0 = KPadd_a_methodVKnI(&Kunread_elementYstreams_protocolVcommon_dylan, &Kunread_elementYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I215;
}
I215:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/file-stream.dylan:769
  T0 = KPadd_a_methodVKnI(&Kstream_contentsYstreams_protocolVcommon_dylan, &Kstream_contentsYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I212;
}
I212:

  return;
}


/* eof */
