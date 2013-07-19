#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(47);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(1);

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(6);

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
  D library_major_version_;
  D library_minor_version_;
  D library_build_count_;
  D used_library_;
  D used_library_binding_;
} _KLused_libraryGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLstream_positionGYstreamsVio;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_closed_errorGYstreamsVio;

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
  D stream_error_stream_;
} _KLstream_not_readableGYstreamsVio;

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
  D initial_position_;
  D current_position_;
  D final_position_;
  D stream_sequence_;
  D stream_limit_;
} _KLsequence_streamGYstreamsVio;

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
} _KLstring_streamGYstreamsVio;

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
} _KLbyte_string_streamGYstreamsVio;

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
} _KLunicode_string_streamGYstreamsVio;

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
} _KLbyte_element_streamGYstreams_internalsVio;

typedef struct {
  D wrapper;
} _KLexternal_stream_accessorGYstreams_internalsVio;

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
} _KLdouble_buffered_streamGYstreams_internalsVio;

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

typedef struct {
  D wrapper;
  D pending_operation_;
  D pending_status_;
  D pending_stream_;
  D pending_accessor_;
} _KLpending_operationGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D pending_operation_;
  D pending_status_;
  D pending_stream_;
  D pending_accessor_;
  D pending_file_offset_;
  D pending_buffer_;
  D pending_pool_bufferQ_;
  D pending_count_;
  D pending_buffer_offset_;
} _KLpending_writeGYstreams_internalsVio;

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
} _KLfile_streamGYstreams_internalsVio;

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
} _KLbyte_file_streamGYstreams_internalsVio;

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
} _KLgeneral_multi_buffered_streamGYstreams_internalsVio;

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
} _KLbyte_multi_buffered_streamGYstreams_internalsVio;

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
  D pretty_stream_target_;
  D pretty_stream_line_length_;
  D pretty_stream_buffer_;
  D pretty_stream_buffer_fill_pointer_;
  D pretty_stream_buffer_offset_;
  D pretty_stream_buffer_start_column_;
  D pretty_stream_line_number_;
  D pretty_stream_blocks_;
  D pretty_stream_prefix_;
  D pretty_stream_suffix_;
  D pretty_stream_queue_;
  D pretty_stream_pending_blocks_;
  D pretty_stream_closedQ_;
} _KLpretty_streamGYpprintVio;

typedef struct {
  D wrapper;
  D logical_block_start_column_;
  D logical_block_section_column_;
  D logical_block_per_line_prefix_end_;
  D logical_block_prefix_length_;
  D logical_block_suffix_length_;
  D logical_block_section_start_line_;
} _KLlogical_blockGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
} _KLqueued_opGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D section_start_depth_;
  D section_start_section_end_;
} _KLsection_startGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D section_start_depth_;
  D section_start_section_end_;
  D newline_kind_;
} _KLnewlineGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D indentation_kind_;
  D indentation_amount_;
} _KLindentationGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D section_start_depth_;
  D section_start_section_end_;
  D block_start_block_end_;
  D block_start_prefix_;
  D block_start_suffix_;
} _KLblock_startGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
} _KLblock_endGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D tab_sectionQ_;
  D tab_relativeQ_;
  D tab_colnum_;
  D tab_colinc_;
} _KLtabGYprint_internalsVio;

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

typedef struct {
  D wrapper;
  D print_reference_object_;
  D print_reference_id_;
  D print_reference_count_;
} _KLprint_referenceGYprint_internalsVio;

typedef struct {
  D wrapper;
  D file_descriptor_;
  D file_position_;
  D asynchronousQ_;
  D accessor_positionableQ_;
  D accessor_preferred_buffer_size_;
  D accessor_at_endQ_;
} _KLnative_file_accessorGYstreams_internalsVio;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D Kinitialize_class_dispatch_keys_vectoredVKgI (D);
D KdoVKdMM0I (D, D, D);
extern _KLsimple_methodGVKe Kaugment_class_known_jointVKiMM0;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KPlibrary_version_checkVKeI (D, D);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLused_libraryGVKe;
extern _KLmm_wrapperGVKi_0 KLused_libraryGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLstream_positionGYstreamsVio;
extern _KLclassGVKd KLstream_position_errorGYstreamsVio;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLclassGVKd KLstream_not_writableGYstreamsVio;
extern _KLclassGVKd KLstream_not_readableGYstreamsVio;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLclassGVKd KLsequence_streamGYstreamsVio;
extern _KLclassGVKd KLstring_streamGYstreamsVio;
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLclassGVKd KLunicode_string_streamGYstreamsVio;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLclassGVKd KLtyped_streamGYstreams_internalsVio;
extern _KLclassGVKd KLgeneral_typed_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_char_element_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_element_streamGYstreams_internalsVio;
extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLclassGVKd KLexternal_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLclassGVKd KLsingle_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLdouble_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLwrapper_streamGYstreamsVio;
extern _KLclassGVKd KLsimple_wrapper_streamGYstreams_internalsVio;
extern _KLclassGVKd KLpending_operationGYstreams_internalsVio;
extern _KLclassGVKd KLpending_writeGYstreams_internalsVio;
extern _KLclassGVKd KLexternal_file_accessorGYstreams_internalsVio;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLclassGVKd KLgeneral_file_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_char_file_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_file_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbuffer_vectorGYstreams_internalsVio;
extern _KLclassGVKd KLmulti_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLgeneral_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLpretty_streamGYpprintVio;
extern _KLclassGVKd KLlogical_blockGYprint_internalsVio;
extern _KLclassGVKd KLqueued_opGYprint_internalsVio;
extern _KLclassGVKd KLsection_startGYprint_internalsVio;
extern _KLclassGVKd KLnewlineGYprint_internalsVio;
extern _KLclassGVKd KLindentationGYprint_internalsVio;
extern _KLclassGVKd KLblock_startGYprint_internalsVio;
extern _KLclassGVKd KLblock_endGYprint_internalsVio;
extern _KLclassGVKd KLtabGYprint_internalsVio;
extern _KLclassGVKd KLcircular_print_streamGYprint_internalsVio;
extern _KLclassGVKd KLprint_referenceGYprint_internalsVio;
extern _KLclassGVKd KLnative_file_accessorGYstreams_internalsVio;

/* Defined object declarations */

static _KLsimple_object_vectorGVKd_5 K1;
static _KLsimple_object_vectorGVKd_5 K2;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLmoduleGVKe Kpprint_moduleYdylan_userVio;
extern _KLmoduleGVKe Kprint_internals_moduleYdylan_userVio;
extern _KLmoduleGVKe Kprint_moduleYdylan_userVio;
extern _KLmoduleGVKe Kformat_moduleYdylan_userVio;
static _KLbyte_stringGVKd_6 K12;
static _KLbyte_stringGVKd_5 K13;
static _KLbyte_stringGVKd_15 K14;
static _KLbyte_stringGVKd_6 K15;
static _KLbyte_stringGVKd_17 K16;
static _KLbyte_stringGVKd_7 K17;
static _KLbyte_stringGVKd_2 K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLused_libraryGVKe K20;
static _KLused_libraryGVKe K21;
static _KLsymbolGVKd KJtight_;
static _KLbyte_stringGVKd_5 K23;
extern _KLmoduleGVKe Kformat_internals_moduleYdylan_userVio;
static _KLbyte_stringGVKd_16 K25;
extern _KLmoduleGVKe Kstandard_io_moduleYdylan_userVio;
static _KLbyte_stringGVKd_11 K27;
extern _KLmoduleGVKe Kformat_out_moduleYdylan_userVio;
static _KLbyte_stringGVKd_10 K29;
static _KLsimple_object_vectorGVKd_1 K30;
static _KLsimple_object_vectorGVKd_1 K31;
static _KLsimple_object_vectorGVKd_1 K32;
static _KLsimple_object_vectorGVKd_47 K33;

/* Indirection variables */

static D IKJtight_ = &KJtight_;

/* Variables */

D format_out_moduleYdylan_userVio = &Kformat_out_moduleYdylan_userVio;
D standard_io_moduleYdylan_userVio = &Kstandard_io_moduleYdylan_userVio;
D format_internals_moduleYdylan_userVio = &Kformat_internals_moduleYdylan_userVio;
D format_moduleYdylan_userVio = &Kformat_moduleYdylan_userVio;
D print_internals_moduleYdylan_userVio = &Kprint_internals_moduleYdylan_userVio;
D print_moduleYdylan_userVio = &Kprint_moduleYdylan_userVio;
D pprint_moduleYdylan_userVio = &Kpprint_moduleYdylan_userVio;
D streams_internals_moduleYdylan_userVio = &Kstreams_internals_moduleYdylan_userVio;
D streams_moduleYdylan_userVio = &Kstreams_moduleYdylan_userVio;
D io_libraryYdylan_userVio = &Kio_libraryYdylan_userVio;

/* Objects */

static _KLsimple_object_vectorGVKd_5 K1 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &K30,
  &K31,
  &K32,
  &K30,
  &K32
};

static _KLsimple_object_vectorGVKd_5 K2 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLcollectionGVKd,
  &KLmutable_collectionGVKd,
  &KLserious_conditionGVKd,
  &KLsequenceGVKd,
  &KLerrorGVKd
};

_KLlibraryGVKe Kio_libraryYdylan_userVio = {
  &KLlibraryGVKeW /* wrapper */,
  &K18,
  (D) 9,
  (D) 5,
  (D) 110503493,
  &K19,
  &KPempty_vectorVKi,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6569,
  (D) 5677
};

_KLmoduleGVKe Kstreams_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K17,
  &Kio_libraryYdylan_userVio
};

_KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K16,
  &Kio_libraryYdylan_userVio
};

_KLmoduleGVKe Kpprint_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K15,
  &Kio_libraryYdylan_userVio
};

_KLmoduleGVKe Kprint_internals_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K14,
  &Kio_libraryYdylan_userVio
};

_KLmoduleGVKe Kprint_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K13,
  &Kio_libraryYdylan_userVio
};

_KLmoduleGVKe Kformat_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K12,
  &Kio_libraryYdylan_userVio
};

static _KLbyte_stringGVKd_6 K12 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "format"
};

static _KLbyte_stringGVKd_5 K13 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "print"
};

static _KLbyte_stringGVKd_15 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "print-internals"
};

static _KLbyte_stringGVKd_6 K15 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "pprint"
};

static _KLbyte_stringGVKd_17 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "streams-internals"
};

static _KLbyte_stringGVKd_7 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "streams"
};

static _KLbyte_stringGVKd_2 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "io"
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K20,
  &K21
};

static _KLused_libraryGVKe K20 = {
  &KLused_libraryGVKeW /* wrapper */,
  (D) 1,
  (D) 1,
  (D) 110111305,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KJtight_
};

static _KLused_libraryGVKe K21 = {
  &KLused_libraryGVKeW /* wrapper */,
  (D) 9,
  (D) 5,
  (D) 109746541,
  &Kdylan_libraryYdylan_userVdylan,
  &KJtight_
};

static _KLsymbolGVKd KJtight_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K23
};

static _KLbyte_stringGVKd_5 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "tight"
};

_KLmoduleGVKe Kformat_internals_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K25,
  &Kio_libraryYdylan_userVio
};

static _KLbyte_stringGVKd_16 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "format-internals"
};

_KLmoduleGVKe Kstandard_io_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K27,
  &Kio_libraryYdylan_userVio
};

static _KLbyte_stringGVKd_11 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "standard-io"
};

_KLmoduleGVKe Kformat_out_moduleYdylan_userVio = {
  &KLmoduleGVKeW /* wrapper */,
  &K29,
  &Kio_libraryYdylan_userVio
};

static _KLbyte_stringGVKd_10 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "format-out"
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmutable_object_with_elementsGVKe
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_1 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_47 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 189,
  &KLstream_positionGYstreamsVio,
  &KLstream_position_errorGYstreamsVio,
  &KLstream_closed_errorGYstreamsVio,
  &KLstream_not_writableGYstreamsVio,
  &KLstream_not_readableGYstreamsVio,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio,
  &KLstring_streamGYstreamsVio,
  &KLbyte_string_streamGYstreamsVio,
  &KLunicode_string_streamGYstreamsVio,
  &KLbufferGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLdouble_buffered_streamGYstreams_internalsVio,
  &KLwrapper_streamGYstreamsVio,
  &KLsimple_wrapper_streamGYstreams_internalsVio,
  &KLpending_operationGYstreams_internalsVio,
  &KLpending_writeGYstreams_internalsVio,
  &KLexternal_file_accessorGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &KLbyte_file_streamGYstreams_internalsVio,
  &KLbuffer_vectorGYstreams_internalsVio,
  &KLmulti_buffered_streamGYstreams_internalsVio,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &KLpretty_streamGYpprintVio,
  &KLlogical_blockGYprint_internalsVio,
  &KLqueued_opGYprint_internalsVio,
  &KLsection_startGYprint_internalsVio,
  &KLnewlineGYprint_internalsVio,
  &KLindentationGYprint_internalsVio,
  &KLblock_startGYprint_internalsVio,
  &KLblock_endGYprint_internalsVio,
  &KLtabGYprint_internalsVio,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLprint_referenceGYprint_internalsVio,
  &KLnative_file_accessorGYstreams_internalsVio
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_io__X_library_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtight_);
    if (T0 != &KJtight_) {
      primitive_slot_value_setter(T0, &K20, 4);
      primitive_slot_value_setter(T0, &K21, 4);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_library_for_user () {
{
  _KLsimple_object_vectorGVKd_1 T0 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T1;

  Kinitialize_class_dispatch_keys_vectoredVKgI(&K33);
  T0.vector_element_[0] = &K1;
  T1 = KdoVKdMM0I(&Kaugment_class_known_jointVKiMM0, &K2, &T0);
  goto I0;
}
I0:

{
  D T0;

  T0 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/library.dylan:9
  T0 = primitive_runtime_module_handle();
  // /opt/opendylan-2013.1/sources/io/library.dylan:9
  T1 = KPlibrary_version_checkVKeI(&Kio_libraryYdylan_userVio, T0);
  goto I4;
}
I4:

  return;
}


/* eof */
