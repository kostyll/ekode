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
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);

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
} _KLfunctionGVKd;

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
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(18);
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
} _KLgetter_methodGVKi;

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
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D sequence_type_;
  D to_element_mapper_;
  D from_element_mapper_;
  D to_sequence_mapper_;
  D from_sequence_mapper_;
} _KLbyte_file_streamGYstreams_internalsVio;


/* Typedefs for defined classes */

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
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_characterG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_no_rest_value_5VKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsimple_methodGVKe Kbuffer_ref_setterYstreams_internalsVio;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe Kstream_element_typeYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLgeneral_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLgeneral_file_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_char_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_char_file_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_multi_buffered_streamGYstreams_internalsVio;
extern _KLclassGVKd KLbyte_file_streamGYstreams_internalsVio;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM2;
D Kstream_sequence_classYstreamsVioMM2I (D);
extern _KLclassGVKd KLbyte_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLbyte_char_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_char_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLtyped_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLtyped_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLgeneral_typed_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLgeneral_typed_streamGYstreams_internalsVioW;
extern _KLsealed_generic_functionGVKe Kfrom_element_mapperYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kcoerce_from_sequenceYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kcoerce_from_elementYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kcoerce_to_sequenceYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kcoerce_to_elementYstreams_internalsVio;
extern _KLinstance_slot_descriptorGVKe Ksequence_typeYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kto_element_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLinstance_slot_descriptorGVKe Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG;
extern _KLsimple_methodGVKe Kbyte_to_byteYstreams_internalsVio;
D Kbyte_to_byteYstreams_internalsVioI (D);
extern _KLsimple_methodGVKe Kbyte_to_byte_charYstreams_internalsVio;
D Kbyte_to_byte_charYstreams_internalsVioI (D);
extern _KLsimple_methodGVKe Kbyte_char_to_byteYstreams_internalsVio;
D Kbyte_char_to_byteYstreams_internalsVioI (D);
static _KLsignatureAvaluesGVKi K26;
static _KLsimple_object_vectorGVKd_1 K27;
static _KLsignatureAvaluesGVKi K28;
static _KLsignatureAvaluesGVKi K29;
static _KLsimple_closure_methodGVKi_0 K36;
static D K36I (D s_, D ss_, D d_, D ds_, D n_);
extern _KLsealed_generic_functionGVKe Kfrom_sequence_mapperYstreams_internalsVio;
extern _KLgetter_methodGVKi Kfrom_sequence_mapperYstreams_internalsVioMM0;
static _KLpairGVKd K34;
static _KLbyte_stringGVKd_20 K35;
static _KLsimple_closure_methodGVKi_0 K43;
static D K43I (D s_, D ss_, D d_, D ds_, D n_);
extern _KLsealed_generic_functionGVKe Kto_sequence_mapperYstreams_internalsVio;
extern _KLgetter_methodGVKi Kto_sequence_mapperYstreams_internalsVioMM0;
static _KLpairGVKd K41;
static _KLbyte_stringGVKd_18 K42;
extern _KLsealed_generic_functionGVKe Kfrom_element_mapper_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kfrom_element_mapper_setterYstreams_internalsVioMM0;
static _KLpairGVKd K46;
static _KLbyte_stringGVKd_26 K47;
extern _KLsealed_generic_functionGVKe Kto_element_mapperYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kto_element_mapper_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kto_element_mapper_setterYstreams_internalsVioMM0;
static _KLpairGVKd K51;
static _KLbyte_stringGVKd_24 K52;
extern _KLgetter_methodGVKi Kto_element_mapperYstreams_internalsVioMM0;
static _KLpairGVKd K54;
static _KLbyte_stringGVKd_17 K55;
extern _KLsealed_generic_functionGVKe Ksequence_typeYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Ksequence_type_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Ksequence_type_setterYstreams_internalsVioMM0;
static _KLpairGVKd K59;
static _KLbyte_stringGVKd_20 K60;
extern _KLgetter_methodGVKi Ksequence_typeYstreams_internalsVioMM0;
static _KLpairGVKd K62;
static _KLbyte_stringGVKd_13 K63;
extern _KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM0;
D Kcoerce_to_elementYstreams_internalsVioMM0I (D, D, D);
extern _KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM1;
D Kcoerce_to_elementYstreams_internalsVioMM1I (D stream_, D buffer_, D index_);
extern _KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM2;
D Kcoerce_to_elementYstreams_internalsVioMM2I (D stream_, D buffer_, D index_);
extern _KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM3;
D Kcoerce_to_elementYstreams_internalsVioMM3I (D, D, D);
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLpairGVKd K74;
static _KLpairGVKd K75;
static _KLsignatureGVKe K76;
static _KLbyte_stringGVKd_17 K77;
static _KLsimple_object_vectorGVKd_3 K78;
static _KLsignatureGVKe K79;
static _KLsimple_object_vectorGVKd_3 K80;
static _KLsignatureGVKe K81;
static _KLsimple_object_vectorGVKd_3 K82;
static _KLsignatureGVKe K83;
static _KLsimple_object_vectorGVKd_3 K84;
extern _KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM0;
D Kcoerce_to_sequenceYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM1;
D Kcoerce_to_sequenceYstreams_internalsVioMM1I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_);
extern _KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM2;
D Kcoerce_to_sequenceYstreams_internalsVioMM2I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_);
extern _KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM3;
D Kcoerce_to_sequenceYstreams_internalsVioMM3I (D, D, D, D, D, D);
static _KLpairGVKd K93;
static _KLpairGVKd K94;
static _KLpairGVKd K95;
static _KLpairGVKd K96;
static _KLsignatureGVKe K97;
static _KLbyte_stringGVKd_18 K98;
static _KLsimple_object_vectorGVKd_6 K99;
static _KLsignatureGVKe K100;
static _KLsimple_object_vectorGVKd_6 K101;
static _KLsignatureGVKe K102;
static _KLsimple_object_vectorGVKd_6 K103;
static _KLsignatureGVKe K104;
static _KLsimple_object_vectorGVKd_6 K105;
extern _KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM0;
D Kcoerce_from_elementYstreams_internalsVioMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM1;
D Kcoerce_from_elementYstreams_internalsVioMM1I (D stream_, D buffer_, D index_, D elt_);
extern _KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM2;
D Kcoerce_from_elementYstreams_internalsVioMM2I (D stream_, D buffer_, D index_, D elt_);
extern _KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM3;
D Kcoerce_from_elementYstreams_internalsVioMM3I (D, D, D, D);
static _KLpairGVKd K114;
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLpairGVKd K117;
static _KLsignatureGVKe K118;
static _KLbyte_stringGVKd_19 K119;
static _KLsimple_object_vectorGVKd_4 K120;
static _KLsignatureGVKe K121;
static _KLsimple_object_vectorGVKd_4 K122;
static _KLsignatureGVKe K123;
static _KLsimple_object_vectorGVKd_4 K124;
static _KLsignatureGVKe K125;
static _KLsimple_object_vectorGVKd_4 K126;
extern _KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM0;
D Kcoerce_from_sequenceYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM1;
D Kcoerce_from_sequenceYstreams_internalsVioMM1I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_);
extern _KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM2;
D Kcoerce_from_sequenceYstreams_internalsVioMM2I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_);
extern _KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM3;
D Kcoerce_from_sequenceYstreams_internalsVioMM3I (D, D, D, D, D, D);
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLbyte_stringGVKd_20 K139;
extern _KLgetter_methodGVKi Kfrom_element_mapperYstreams_internalsVioMM0;
static _KLpairGVKd K141;
static _KLbyte_stringGVKd_19 K142;
static _KLimplementation_classGVKe K143;
static _KLsimple_object_vectorGVKd_9 K144;
static _KLsimple_object_vectorGVKd_1 K145;
static _KLsimple_object_vectorGVKd_6 K146;
static _KLsimple_object_vectorGVKd_1 K147;
static _KLsimple_object_vectorGVKd_1 K148;
static _KLbyte_stringGVKd_22 K149;
static _KLimplementation_classGVKe K150;
static _KLsimple_object_vectorGVKd_1 K151;
static _KLsimple_object_vectorGVKd_6 K152;
static _KLsimple_object_vectorGVKd_1 K153;
static _KLsimple_object_vectorGVKd_5 K154;
static _KLbyte_stringGVKd_14 K155;
static _KLimplementation_classGVKe K156;
static _KLsimple_object_vectorGVKd_6 K157;
static _KLbyte_stringGVKd_26 K158;
static _KLimplementation_classGVKe K159;
static _KLsimple_object_vectorGVKd_6 K160;
static _KLsimple_object_vectorGVKd_3 K161;
static _KLinherited_slot_descriptorGVKe Ksequence_typeYstreams_internalsVioHLbyte_element_streamG;
static _KLinherited_slot_descriptorGVKe Kto_element_mapperYstreams_internalsVioHLbyte_element_streamG;
static _KLinherited_slot_descriptorGVKe Kfrom_element_mapperYstreams_internalsVioHLbyte_element_streamG;
static _KLbyte_stringGVKd_21 K165;
static _KLsignatureGVKe K166;
extern _KLkeyword_methodGVKe KinitializeVKdMioM2;
D KinitializeVKdMioM2I (D, D);
static _KLbyte_stringGVKd_15 K170;
static _KLkeyword_signatureGVKe K171;
static _KLsimple_object_vectorGVKd_1 K172;
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLpairGVKd K178;
static _KLpairGVKd K179;
static _KLpairGVKd K180;
static _KLpairGVKd K181;

/* Indirection variables */


/* Variables */

D from_element_mapperYstreams_internalsVio = &Kfrom_element_mapperYstreams_internalsVio;
D byte_to_byte_charYstreams_internalsVio = &Kbyte_to_byte_charYstreams_internalsVio;
D byte_char_to_byteYstreams_internalsVio = &Kbyte_char_to_byteYstreams_internalsVio;
D byte_to_byteYstreams_internalsVio = &Kbyte_to_byteYstreams_internalsVio;
D Ltyped_streamGYstreams_internalsVio = &KLtyped_streamGYstreams_internalsVio;
D Lgeneral_typed_streamGYstreams_internalsVio = &KLgeneral_typed_streamGYstreams_internalsVio;
D Lbyte_char_element_streamGYstreams_internalsVio = &KLbyte_char_element_streamGYstreams_internalsVio;
D Lbyte_element_streamGYstreams_internalsVio = &KLbyte_element_streamGYstreams_internalsVio;
D coerce_to_elementYstreams_internalsVio = &Kcoerce_to_elementYstreams_internalsVio;
D coerce_from_elementYstreams_internalsVio = &Kcoerce_from_elementYstreams_internalsVio;
D coerce_to_sequenceYstreams_internalsVio = &Kcoerce_to_sequenceYstreams_internalsVio;
D coerce_from_sequenceYstreams_internalsVio = &Kcoerce_from_sequenceYstreams_internalsVio;

/* Objects */

_KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K166,
  &Kstream_sequence_classYstreamsVioMM2I
};

_KLclassGVKd KLbyte_element_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K165,
  &K159,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_element_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K159,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLclassGVKd KLbyte_char_element_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K158,
  &K156,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_char_element_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K156,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLclassGVKd KLtyped_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K155,
  &K150,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLtyped_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K150,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLclassGVKd KLgeneral_typed_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K149,
  &K143,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLgeneral_typed_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K143,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kfrom_element_mapperYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K142,
  &K141,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcoerce_from_sequenceYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_6,
  &K97,
  (D) 249,
  &K139,
  &K135,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcoerce_from_elementYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K118,
  (D) 25,
  &K119,
  &K114,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcoerce_to_sequenceYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_6,
  &K97,
  (D) 249,
  &K98,
  &K93,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcoerce_to_elementYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K76,
  (D) 25,
  &K77,
  &K72,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLinstance_slot_descriptorGVKe Ksequence_typeYstreams_internalsVioHLtyped_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KLbyte_stringGVKd,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Ksequence_typeYstreams_internalsVio,
  &Ksequence_type_setterYstreams_internalsVio,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kto_element_mapperYstreams_internalsVioHLtyped_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &Kbyte_to_byte_charYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kto_element_mapperYstreams_internalsVio,
  &Kto_element_mapper_setterYstreams_internalsVio,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &Kbyte_char_to_byteYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kfrom_element_mapperYstreams_internalsVio,
  &Kfrom_element_mapper_setterYstreams_internalsVio,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K43,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kto_sequence_mapperYstreams_internalsVio,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K36,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi,
  &Kfrom_sequence_mapperYstreams_internalsVio,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe Kbyte_to_byteYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K29,
  &Kbyte_to_byteYstreams_internalsVioI
};

_KLsimple_methodGVKe Kbyte_to_byte_charYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K28,
  &Kbyte_to_byte_charYstreams_internalsVioI
};

_KLsimple_methodGVKe Kbyte_char_to_byteYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K26,
  &Kbyte_char_to_byteYstreams_internalsVioI
};

static _KLsignatureAvaluesGVKi K26 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_characterG_typesVKi,
  &K27
};

static _KLsimple_object_vectorGVKd_1 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyteGVKe
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K27,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsignatureAvaluesGVKi K29 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K27,
  &K27
};

static _KLsimple_closure_methodGVKi_0 K36 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K36I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kfrom_sequence_mapperYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K35,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kfrom_sequence_mapperYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kfrom_sequence_mapperYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "from-sequence-mapper"
};

static _KLsimple_closure_methodGVKi_0 K43 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &KDsignature_LobjectG_no_rest_value_5VKi,
  &K43I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kto_sequence_mapperYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K42,
  &K41,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kto_sequence_mapperYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K41 = {
  &KLpairGVKdW /* wrapper */,
  &Kto_sequence_mapperYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "to-sequence-mapper"
};

_KLsealed_generic_functionGVKe Kfrom_element_mapper_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K47,
  &K46,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfrom_element_mapper_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kfrom_element_mapper_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "from-element-mapper-setter"
};

_KLsealed_generic_functionGVKe Kto_element_mapperYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K55,
  &K54,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kto_element_mapper_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K52,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kto_element_mapper_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Kto_element_mapper_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "to-element-mapper-setter"
};

_KLgetter_methodGVKi Kto_element_mapperYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Kto_element_mapperYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K55 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "to-element-mapper"
};

_KLsealed_generic_functionGVKe Ksequence_typeYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K63,
  &K62,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksequence_type_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K60,
  &K59,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ksequence_type_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Ksequence_type_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "sequence-type-setter"
};

_KLgetter_methodGVKi Ksequence_typeYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Ksequence_typeYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "sequence-type"
};

_KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K83,
  &Kcoerce_to_elementYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K81,
  &Kcoerce_to_elementYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K79,
  &Kcoerce_to_elementYstreams_internalsVioMM2I
};

_KLsimple_methodGVKe Kcoerce_to_elementYstreams_internalsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K76,
  &Kcoerce_to_elementYstreams_internalsVioMM3I
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_elementYstreams_internalsVioMM0,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_elementYstreams_internalsVioMM1,
  &K74
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_elementYstreams_internalsVioMM2,
  &K75
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_elementYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K76 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K78
};

static _KLbyte_stringGVKd_17 K77 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "coerce-to-element"
};

static _KLsimple_object_vectorGVKd_3 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

static _KLsignatureGVKe K79 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K80
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

static _KLsignatureGVKe K81 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K82
};

static _KLsimple_object_vectorGVKd_3 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

static _KLsignatureGVKe K83 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K84
};

static _KLsimple_object_vectorGVKd_3 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K104,
  &Kcoerce_to_sequenceYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K102,
  &Kcoerce_to_sequenceYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K100,
  &Kcoerce_to_sequenceYstreams_internalsVioMM2I
};

_KLsimple_methodGVKe Kcoerce_to_sequenceYstreams_internalsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K97,
  &Kcoerce_to_sequenceYstreams_internalsVioMM3I
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_sequenceYstreams_internalsVioMM0,
  &K94
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_sequenceYstreams_internalsVioMM1,
  &K95
};

static _KLpairGVKd K95 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_sequenceYstreams_internalsVioMM2,
  &K96
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_to_sequenceYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K97 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943065,
  &K99
};

static _KLbyte_stringGVKd_18 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "coerce-to-sequence"
};

static _KLsimple_object_vectorGVKd_6 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K100 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943065,
  &K101
};

static _KLsimple_object_vectorGVKd_6 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K102 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943065,
  &K103
};

static _KLsimple_object_vectorGVKd_6 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K104 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943065,
  &K105
};

static _KLsimple_object_vectorGVKd_6 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsequenceGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K125,
  &Kcoerce_from_elementYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K123,
  &Kcoerce_from_elementYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K121,
  &Kcoerce_from_elementYstreams_internalsVioMM2I
};

_KLsimple_methodGVKe Kcoerce_from_elementYstreams_internalsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K118,
  &Kcoerce_from_elementYstreams_internalsVioMM3I
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_elementYstreams_internalsVioMM0,
  &K115
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_elementYstreams_internalsVioMM1,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_elementYstreams_internalsVioMM2,
  &K117
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_elementYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K118 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K120
};

static _KLbyte_stringGVKd_19 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "coerce-from-element"
};

static _KLsimple_object_vectorGVKd_4 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K121 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K122
};

static _KLsimple_object_vectorGVKd_4 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K123 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K124
};

static _KLsimple_object_vectorGVKd_4 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K125 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944081,
  &K126
};

static _KLsimple_object_vectorGVKd_4 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K104,
  &Kcoerce_from_sequenceYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K102,
  &Kcoerce_from_sequenceYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K100,
  &Kcoerce_from_sequenceYstreams_internalsVioMM2I
};

_KLsimple_methodGVKe Kcoerce_from_sequenceYstreams_internalsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K97,
  &Kcoerce_from_sequenceYstreams_internalsVioMM3I
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_sequenceYstreams_internalsVioMM0,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_sequenceYstreams_internalsVioMM1,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_sequenceYstreams_internalsVioMM2,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &Kcoerce_from_sequenceYstreams_internalsVioMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K139 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "coerce-from-sequence"
};

_KLgetter_methodGVKi Kfrom_element_mapperYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &Kfrom_element_mapperYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "from-element-mapper"
};

static _KLimplementation_classGVKe K143 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 308543525,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K144,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K145,
  &K146,
  (D) 21,
  &K147,
  &K148,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K176,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K144,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLsimple_object_vectorGVKd_1 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtyped_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 25
};

static _KLsimple_object_vectorGVKd_1 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan
};

static _KLbyte_stringGVKd_22 K149 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<general-typed-stream>"
};

static _KLimplementation_classGVKe K150 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 308543525,
  &KLtyped_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K144,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K151,
  &K152,
  (D) 17,
  &K153,
  &K148,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K173,
  &KPempty_vectorVKi,
  &K154,
  &K144,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 21
};

static _KLsimple_object_vectorGVKd_5 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Ksequence_typeYstreams_internalsVioHLtyped_streamG,
  &Kto_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLtyped_streamG,
  &Kto_sequence_mapperYstreams_internalsVioHLtyped_streamG,
  &Kfrom_sequence_mapperYstreams_internalsVioHLtyped_streamG
};

static _KLbyte_stringGVKd_14 K155 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<typed-stream>"
};

static _KLimplementation_classGVKe K156 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989093,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K144,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K145,
  &K157,
  (D) 21,
  &K147,
  &K148,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K178,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K144,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_26 K158 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<byte-char-element-stream>"
};

static _KLimplementation_classGVKe K159 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989093,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K144,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K145,
  &K160,
  (D) 21,
  &K147,
  &K148,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K180,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K144,
  &K161,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_3 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Ksequence_typeYstreams_internalsVioHLbyte_element_streamG,
  &Kto_element_mapperYstreams_internalsVioHLbyte_element_streamG,
  &Kfrom_element_mapperYstreams_internalsVioHLbyte_element_streamG
};

static _KLinherited_slot_descriptorGVKe Ksequence_typeYstreams_internalsVioHLbyte_element_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KLsimple_byte_vectorGVKe,
  &KLbyte_element_streamGYstreams_internalsVio,
  &Ksequence_typeYstreams_internalsVio
};

static _KLinherited_slot_descriptorGVKe Kto_element_mapperYstreams_internalsVioHLbyte_element_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &Kbyte_to_byteYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio,
  &Kto_element_mapperYstreams_internalsVio
};

static _KLinherited_slot_descriptorGVKe Kfrom_element_mapperYstreams_internalsVioHLbyte_element_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &Kbyte_to_byteYstreams_internalsVio,
  &KLbyte_element_streamGYstreams_internalsVio,
  &Kfrom_element_mapperYstreams_internalsVio
};

static _KLbyte_stringGVKd_21 K165 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<byte-element-stream>"
};

static _KLsignatureGVKe K166 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K145
};

_KLkeyword_methodGVKe KinitializeVKdMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K171,
  &key_mep_2,
  &KinitializeVKdMioM2I,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_15 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K171 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47972357,
  &K172,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K172 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLgeneral_typed_streamGYstreams_internalsVio
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_element_streamGYstreams_internalsVio,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &K175
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KLgeneral_multi_buffered_streamGYstreams_internalsVio,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KLgeneral_file_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_char_multi_buffered_streamGYstreams_internalsVio,
  &K179
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_char_file_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_multi_buffered_streamGYstreams_internalsVio,
  &K181
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_file_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D Kstream_sequence_classYstreamsVioMM2I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:63
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:65
  CONGRUENT_CALL_PROLOG(&Ksequence_typeYstreams_internalsVio, 1);
  T2_0 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:63
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kbyte_to_byteYstreams_internalsVioI (D byte_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:21
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:22
  T1_0 = byte_;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:21
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kbyte_to_byte_charYstreams_internalsVioI (D byte_) {
  D T2;
  D T3_0;
  DWORD T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:11
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:13
  T5 = primitive_cast_integer_as_raw(byte_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:13
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:13
  T2 = primitive_raw_as_byte_character(T4);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:13
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:11
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kbyte_char_to_byteYstreams_internalsVioI (D character_) {
  D T1_0;
  DSINT T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:16
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:18
  T2 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:18
  T3 = primitive_machine_word_shift_left_signal_overflow(T2,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:18
  T4 = primitive_machine_word_logior(T3,1);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:18
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:18
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:16
  T1_0 = T6_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T6_0);
    primitive_type_check(T1_0, &KLbyteGVKe);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:16
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K36I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:34
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:34
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:34
  MV_SET_COUNT(0);
  return(T5);
}

static D K43I (D s_, D ss_, D d_, D ds_, D n_) {
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:32
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:32
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T5 = CONGRUENT_CALL5(d_, ds_, s_, ss_, n_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:32
  MV_SET_COUNT(0);
  return(T5);
}

D Kcoerce_to_elementYstreams_internalsVioMM0I (D stream_, D buffer_, D index_) {
  D T4;
  D T5;
  D T6_0;
  DBCHR T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:72
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  CONGRUENT_CALL_PROLOG(&Kto_element_mapperYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  primitive_type_check(T4, &KLfunctionGVKd);
  T5 = T4;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T7 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T8);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T9 = primitive_machine_word_shift_left_signal_overflow(T7,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:75
  T6_0 = CALL1(T5, T11);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:72
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcoerce_to_elementYstreams_internalsVioMM1I (D stream_, D buffer_, D index_) {
  D T4_0;
  DBCHR T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:78
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T5 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T6);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T7 = primitive_machine_word_shift_left_signal_overflow(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:81
  T4_0 = CALL1(&Kbyte_to_byte_charYstreams_internalsVio, T9);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:78
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcoerce_to_elementYstreams_internalsVioMM2I (D stream_, D buffer_, D index_) {
  DBCHR T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:84
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T4 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T5);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T6 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:87
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:84
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kcoerce_to_elementYstreams_internalsVioMM3I (D stream_, D buffer_, D index_) {
  D T4_0;
  DBCHR T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:90
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T5 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T6);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T7 = primitive_machine_word_shift_left_signal_overflow(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:93
  T4_0 = CALL1(&Kbyte_to_byte_charYstreams_internalsVio, T9);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:90
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcoerce_to_sequenceYstreams_internalsVioMM0I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:132
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:137
  CONGRUENT_CALL_PROLOG(&Kto_sequence_mapperYstreams_internalsVio, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:137
  primitive_type_check(T7, &KLfunctionGVKd);
  T8 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:137
  T9 = CALL5(T8, buffer_, buf_start_, sequence_, seq_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:132
  MV_SET_COUNT(0);
  return(T9);
}

D Kcoerce_to_sequenceYstreams_internalsVioMM1I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:140
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:145
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(sequence_, seq_start_, buffer_, buf_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:140
  MV_SET_COUNT(0);
  return(T7);
}

D Kcoerce_to_sequenceYstreams_internalsVioMM2I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:148
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:153
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(sequence_, seq_start_, buffer_, buf_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:148
  MV_SET_COUNT(0);
  return(T7);
}

D Kcoerce_to_sequenceYstreams_internalsVioMM3I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:156
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:161
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(sequence_, seq_start_, buffer_, buf_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:156
  MV_SET_COUNT(0);
  return(T7);
}

D Kcoerce_from_elementYstreams_internalsVioMM0I (D stream_, D buffer_, D index_, D elt_) {
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:101
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:104
  CONGRUENT_CALL_PROLOG(&Kfrom_element_mapperYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:104
  primitive_type_check(T5, &KLfunctionGVKd);
  T6 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:104
  T7 = CALL1(T6, elt_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:104
  CALL3(&Kbuffer_ref_setterYstreams_internalsVio, T7, buffer_, index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:104
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:101
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kcoerce_from_elementYstreams_internalsVioMM1I (D stream_, D buffer_, D index_, D elt_) {
  D T5;
  D T6_0;
  DWORD T7;
  DWORD T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:107
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  T5 = CALL1(&Kbyte_char_to_byteYstreams_internalsVio, elt_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  T8 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T7, buffer_, 10, T9);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:110
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:107
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcoerce_from_elementYstreams_internalsVioMM2I (D stream_, D buffer_, D index_, D elt_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:113
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:116
  CALL3(&Kbuffer_ref_setterYstreams_internalsVio, elt_, buffer_, index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:116
  T5_0 = elt_;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:113
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kcoerce_from_elementYstreams_internalsVioMM3I (D stream_, D buffer_, D index_, D elt_) {
  D T5;
  D T6_0;
  DWORD T7;
  DWORD T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:119
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  T5 = CALL1(&Kbyte_char_to_byteYstreams_internalsVio, elt_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  T8 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T7, buffer_, 10, T9);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:122
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:119
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcoerce_from_sequenceYstreams_internalsVioMM0I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:171
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:176
  CONGRUENT_CALL_PROLOG(&Kfrom_sequence_mapperYstreams_internalsVio, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:176
  primitive_type_check(T7, &KLfunctionGVKd);
  T8 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:176
  T9 = CALL5(T8, sequence_, seq_start_, buffer_, buf_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:171
  MV_SET_COUNT(0);
  return(T9);
}

D Kcoerce_from_sequenceYstreams_internalsVioMM1I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:179
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:184
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(buffer_, buf_start_, sequence_, seq_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:179
  MV_SET_COUNT(0);
  return(T7);
}

D Kcoerce_from_sequenceYstreams_internalsVioMM2I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:187
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:192
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(buffer_, buf_start_, sequence_, seq_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:187
  MV_SET_COUNT(0);
  return(T7);
}

D Kcoerce_from_sequenceYstreams_internalsVioMM3I (D stream_, D buffer_, D buf_start_, D sequence_, D seq_start_, D count_) {
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:195
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:200
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  T7 = CONGRUENT_CALL5(buffer_, buf_start_, sequence_, seq_start_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:195
  MV_SET_COUNT(0);
  return(T7);
}

D KinitializeVKdMioM2I (D stream_, D initargs_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:40
  T9 = primitive_copy_vector(initargs_);
  T8 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
  T10 = primitive_idQ(T8,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
    KerrorVKdMM1I(&K170, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
    T11 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
    T12 = SLOT_VALUE_INITD(T8, 1);
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
    MEP_CALL_PROLOG(T11, T12, 2);
    MEP_CALL2(T11, stream_, T9);
  }
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:42
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:45
  CONGRUENT_CALL_PROLOG(&Kstream_element_typeYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:45
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  T4 = CONGRUENT_CALL2(T3, &KLbyteGVKe);
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:45
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:47
    CONGRUENT_CALL_PROLOG(&Ksequence_type_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KLsimple_byte_vectorGVKe, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:48
    CONGRUENT_CALL_PROLOG(&Kto_element_mapper_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&Kbyte_to_byteYstreams_internalsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:49
    CONGRUENT_CALL_PROLOG(&Kfrom_element_mapper_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&Kbyte_to_byteYstreams_internalsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:49
    T5 = &KPfalseVKi;
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:45
    T6 = &KPfalseVKi;
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:45
  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:40
  MV_SET_COUNT(0);
  return(T7);
}


/* SYSTEM INIT CODE */

void _Init_io__X_6Etyped_stream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_io__X_6Etyped_stream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/typed-stream.dylan:40
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I169;
}
I169:

  return;
}


/* eof */
