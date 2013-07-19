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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(20);

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
  D symbol_name_;
} _KLsymbolGVKd;

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
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_not_readableGYstreamsVio;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;

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
} _KLintegerGVKd;

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
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLend_of_stream_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_sequence_;
  D stream_error_count_;
} _KLincomplete_read_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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


/* Typedefs for defined classes */

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
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM2;
extern _KLmethod_domainGVKe Kdo_get_output_bufferYstreamsVioRD_ioRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLstandalone_domainGVKe_1 Kdo_get_output_bufferYstreamsVioRD_ioRD_1;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLstream_not_writableGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_not_writableGYstreamsVioW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM1;
extern _KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM2;
extern _KLmethod_domainGVKe Kdo_next_output_bufferYstreamsVioRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kdo_next_output_bufferYstreamsVioRD_ioRD_1;
D Kbuffer_fillYstreamsVioMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM1;
extern _KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM2;
extern _KLmethod_domainGVKe Kdo_get_input_bufferYstreamsVioRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kdo_get_input_bufferYstreamsVioRD_ioRD_1;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLclassGVKd KLstream_not_readableGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_not_readableGYstreamsVioW;
extern _KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM1;
extern _KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM2;
extern _KLmethod_domainGVKe Kdo_next_input_bufferYstreamsVioRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kdo_next_input_bufferYstreamsVioRD_ioRD_1;
extern _KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_read_intoXYstreams_internalsVio;
extern _KLstandalone_domainGVKe_1 Kdo_release_output_bufferYstreamsVioRD_ioRD_0;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM1;
extern _KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM2;
extern _KLmethod_domainGVKe Kdo_force_output_buffersYstreamsVioRD_ioRD_0;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_write_fromYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_force_outputYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_methodGVKe Kstream_output_buffer_setterYstreams_internalsVioMM1;
extern _KLmethod_domainGVKe Kstream_output_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kdo_release_input_bufferYstreamsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kstream_shared_buffer_setterYstreams_internalsVioMM1;
extern _KLmethod_domainGVKe Kstream_shared_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLsimple_methodGVKe Kstream_input_buffer_setterYstreams_internalsVioMM1;
extern _KLmethod_domainGVKe Kstream_input_buffer_setterYstreams_internalsVioRD_ioRD_0;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLbyte_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLbyte_char_element_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_char_element_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLtyped_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLtyped_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLgeneral_typed_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLgeneral_typed_streamGYstreams_internalsVioW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW;
extern _KLclassGVKd KLexternal_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_streamGYstreams_internalsVioW;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
D Kend_of_stream_valueYstreams_internalsVioI (D, D);
extern _KLsealed_generic_functionGVKe Kbuffer_nextYstreamsVio;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_methodGVKe Kbuffer_refYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_next_setterYstreamsVio;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLsealed_generic_functionGVKe Kstream_sequence_classYstreamsVio;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsymbolGVKd KJfill_;
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsealed_generic_functionGVKe Knewline_sequenceYstreams_internalsVio;
extern _KLsimple_methodGVKe Kbuffer_sizeYstreamsVioMM0;
extern _KLsealed_generic_functionGVKe Kcoerce_from_sequenceYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_dirtyQ_setterYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_endYstreamsVio;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsealed_generic_functionGVKe Kbuffer_end_setterYstreamsVio;
extern _KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLend_of_stream_errorGYstreams_protocolVcommon_dylanW;
D KsignalVKdMM0I (D, D);
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM1;
extern _KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM2;
extern _KLmethod_domainGVKe Kforce_output_buffersYstreamsVioRD_ioRD_0;
extern _KLsealed_generic_functionGVKe Kfrom_element_mapperYstreams_internalsVio;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Kbuffer_fillYstreamsVio;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdiscard_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdiscard_inputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe Kcoerce_to_elementYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kcoerce_to_sequenceYstreams_internalsVio;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLincomplete_read_errorGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLsealed_generic_functionGVKe Kcoerce_from_elementYstreams_internalsVio;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kwrite_fillYstreams_internalsVioMM1;
D Kwrite_fillYstreams_internalsVioMM1I (D, D, D);
extern _KLsimple_methodGVKe Kread_skipYstreams_internalsVioMM1;
D Kread_skipYstreams_internalsVioMM1I (D, D);
extern _KLsimple_methodGVKe Kdo_force_outputYstreams_internalsVioMM1;
D Kdo_force_outputYstreams_internalsVioMM1I (D);
extern _KLsimple_methodGVKe Kstream_sequenceYstreams_internalsVioMM1;
D Kstream_sequenceYstreams_internalsVioMM1I (D);
extern _KLclassGVKd KLbuffered_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbuffered_streamGYstreamsVioW;
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM0;
D Kwrite_lineYstreamsVioMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM0;
D Kread_line_intoXYstreamsVioMM0I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kread_lineYstreamsVioMM0;
D Kread_lineYstreamsVioMM0I (D, D, D);
extern _KLinstance_slot_descriptorGVKe Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG;
extern _KLclassGVKd KLsingle_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLsingle_buffered_streamGYstreams_internalsVioW;
extern _KLincremental_generic_functionGVKe Kstream_shared_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_input_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_input_buffer_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_shared_buffer_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kdo_release_input_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kstream_output_buffer_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kdo_force_output_buffersYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_release_output_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_next_input_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_get_input_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_next_output_bufferYstreamsVio;
extern _KLincremental_generic_functionGVKe Kdo_get_output_bufferYstreamsVio;
extern _KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM0;
D Kdo_get_output_bufferYstreamsVioMM0I (D, D, D);
static _KLpairGVKd K36;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLkeyword_signatureAvaluesGVKi K39;
static _KLbyte_stringGVKd_20 K40;
static _KLsimple_object_vectorGVKd_1 K41;
static _KLsimple_object_vectorGVKd_1 K42;
static _KLsimple_object_vectorGVKd_1 K43;
static _KLunionGVKe K44;
static _KLsingletonGVKd K45;
static _KLsymbolGVKd KJbytes_;
static _KLbyte_stringGVKd_5 K47;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_28 K49;
static _KLbyte_stringGVKd_31 K50;
static _KLbyte_stringGVKd_37 K51;
static _KLbyte_stringGVKd_6 K52;
static _KLkeyword_signatureAvaluesGVKi K53;
static _KLsimple_object_vectorGVKd_2 K54;
static _KLsimple_object_vectorGVKd_1 K55;
extern _KLclassGVKd KLdouble_buffered_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLdouble_buffered_streamGYstreams_internalsVioW;
static _KLimplementation_classGVKe K58;
static _KLsimple_object_vectorGVKd_6 K59;
static _KLsimple_object_vectorGVKd_1 K60;
static _KLsimple_object_vectorGVKd_6 K61;
static _KLsimple_object_vectorGVKd_2 K62;
static _KLinherited_slot_descriptorGVKe Kstream_input_bufferYstreams_internalsVioHLdouble_buffered_streamG;
static _KLinherited_slot_descriptorGVKe Kstream_output_bufferYstreams_internalsVioHLdouble_buffered_streamG;
static _KLbyte_stringGVKd_24 K65;
extern _KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM0;
D Kdo_next_output_bufferYstreamsVioMM0I (D, D, D);
static _KLpairGVKd K68;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLkeyword_signatureAvaluesGVKi K71;
static _KLbyte_stringGVKd_21 K72;
static _KLsimple_object_vectorGVKd_1 K73;
static _KLkeyword_signatureAvaluesGVKi K74;
extern _KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM0;
D Kdo_get_input_bufferYstreamsVioMM0I (D, D, D, D);
static _KLpairGVKd K77;
static _KLpairGVKd K78;
static _KLpairGVKd K79;
static _KLkeyword_signatureAvaluesGVKi K80;
static _KLbyte_stringGVKd_19 K81;
static _KLsimple_object_vectorGVKd_2 K82;
static _KLbyte_stringGVKd_29 K83;
static _KLbyte_stringGVKd_33 K84;
static _KLbyte_stringGVKd_36 K85;
static _KLkeyword_signatureAvaluesGVKi K86;
static _KLsimple_object_vectorGVKd_4 K87;
extern _KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM0;
D Kdo_next_input_bufferYstreamsVioMM0I (D, D, D, D);
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLpairGVKd K92;
static _KLbyte_stringGVKd_20 K93;
extern _KLsimple_methodGVKe Kdo_release_output_bufferYstreamsVioMM0;
D Kdo_release_output_bufferYstreamsVioMM0I (D);
extern _KLsimple_methodGVKe Kdo_release_output_bufferYstreamsVioMM1;
D Kdo_release_output_bufferYstreamsVioMM1I (D);
static _KLpairGVKd K98;
static _KLpairGVKd K99;
static _KLsignatureGVKe K100;
static _KLbyte_stringGVKd_24 K101;
static _KLsignatureGVKe K102;
static _KLsimple_object_vectorGVKd_1 K103;
static _KLsignatureGVKe K104;
extern _KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM0;
D Kdo_force_output_buffersYstreamsVioMM0I (D);
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLbyte_stringGVKd_23 K110;
static _KLbyte_stringGVKd_15 K111;
static _KLsignatureGVKe K112;
extern _KLsimple_methodGVKe Kstream_output_bufferYstreams_internalsVioMM0;
D Kstream_output_bufferYstreams_internalsVioMM0I (D stream_);
static _KLpairGVKd K115;
static _KLsignatureAvaluesGVKi K116;
static _KLbyte_stringGVKd_20 K117;
extern _KLsimple_methodGVKe Kstream_output_buffer_setterYstreams_internalsVioMM0;
D Kstream_output_buffer_setterYstreams_internalsVioMM0I (D value_, D stream_);
static _KLpairGVKd K120;
static _KLpairGVKd K121;
static _KLsignatureAvaluesGVKi K122;
static _KLbyte_stringGVKd_27 K123;
static _KLsimple_object_vectorGVKd_2 K124;
extern _KLsimple_methodGVKe Kdo_release_input_bufferYstreamsVioMM0;
D Kdo_release_input_bufferYstreamsVioMM0I (D);
extern _KLsimple_methodGVKe Kdo_release_input_bufferYstreamsVioMM1;
D Kdo_release_input_bufferYstreamsVioMM1I (D);
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_23 K131;
extern _KLsetter_methodGVKi Kstream_shared_buffer_setterYstreams_internalsVioMM0;
static _KLpairGVKd K133;
static _KLpairGVKd K134;
static _KLsignatureAvaluesGVKi K135;
static _KLbyte_stringGVKd_27 K136;
static _KLsimple_object_vectorGVKd_2 K137;
extern _KLsimple_methodGVKe Kstream_input_buffer_setterYstreams_internalsVioMM0;
D Kstream_input_buffer_setterYstreams_internalsVioMM0I (D value_, D stream_);
static _KLpairGVKd K140;
static _KLpairGVKd K141;
static _KLbyte_stringGVKd_26 K142;
extern _KLsimple_methodGVKe Kstream_input_bufferYstreams_internalsVioMM0;
D Kstream_input_bufferYstreams_internalsVioMM0I (D stream_);
static _KLpairGVKd K145;
static _KLbyte_stringGVKd_19 K146;
extern _KLgetter_methodGVKi Kstream_shared_bufferYstreams_internalsVioMM0;
static _KLpairGVKd K148;
static _KLsignatureAvaluesGVKi K149;
static _KLbyte_stringGVKd_20 K150;
static _KLimplementation_classGVKe K151;
static _KLsimple_object_vectorGVKd_7 K152;
static _KLsimple_object_vectorGVKd_6 K153;
static _KLsimple_object_vectorGVKd_2 K154;
static _KLsimple_object_vectorGVKd_7 K155;
static _KLsimple_object_vectorGVKd_1 K156;
static _KLbyte_stringGVKd_24 K157;
static _KLsymbolGVKd KJbuffer_;
static _KLbyte_stringGVKd_6 K159;
extern _KLsealed_generic_functionGVKe Kactual_stream_output_bufferYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kactual_stream_output_buffer_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kactual_stream_output_buffer_setterYstreams_internalsVioMM0;
static _KLpairGVKd K163;
static _KLbyte_stringGVKd_34 K164;
extern _KLgetter_methodGVKi Kactual_stream_output_bufferYstreams_internalsVioMM0;
static _KLpairGVKd K166;
static _KLbyte_stringGVKd_27 K167;
extern _KLsealed_generic_functionGVKe Kactual_stream_input_bufferYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kactual_stream_input_buffer_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kactual_stream_input_buffer_setterYstreams_internalsVioMM0;
static _KLpairGVKd K171;
static _KLbyte_stringGVKd_33 K172;
extern _KLgetter_methodGVKi Kactual_stream_input_bufferYstreams_internalsVioMM0;
static _KLpairGVKd K174;
static _KLbyte_stringGVKd_26 K175;
static _KLsimple_closure_methodGVKi_0 Kextend_lineF184;
static D Kextend_lineF184I (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 KloopF181;
static D KloopF181I (D, D);
static _KLbyte_stringGVKd_35 K180;
static _KLsignatureGVKe K182;
static _KLsimple_object_vectorGVKd_2 K183;
static _KLsignatureGVKe K185;
static _KLsimple_object_vectorGVKd_4 K186;
static _KLkeyword_signatureAvaluesGVKi K187;
static _KLsimple_object_vectorGVKd_2 K188;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K190;
static _KLsimple_object_vectorGVKd_1 K191;
static _KLsimple_object_vectorGVKd_2 K192;
static _KLsimple_closure_methodGVKi_0 KloopF195;
static D KloopF195I (D, D, D, D, D);
static _KLsignatureGVKe K196;
static _KLsimple_object_vectorGVKd_5 K197;
static _KLkeyword_signatureAvaluesGVKi K198;
static _KLsimple_object_vectorGVKd_6 K199;
static _KLsymbolGVKd KJgrowQ_;
static _KLbyte_stringGVKd_5 K201;
static _KLsimple_object_vectorGVKd_2 K202;
static _KLsimple_object_vectorGVKd_3 K203;
static _KLsimple_object_vectorGVKd_3 K204;
static _KLsimple_closure_methodGVKi_0 Kwrite_eltsF207;
static D Kwrite_eltsF207I (D, D, D, D, D);
static _KLsignatureGVKe K208;
static _KLsimple_object_vectorGVKd_5 K209;
static _KLkeyword_signatureGVKe K210;
static _KLsimple_object_vectorGVKd_4 K211;
static _KLsimple_object_vectorGVKd_2 K212;
static _KLsimple_object_vectorGVKd_2 K213;
static _KLimplementation_classGVKe K214;
static _KLsimple_object_vectorGVKd_1 K215;
static _KLsimple_object_vectorGVKd_6 K216;
static _KLsimple_object_vectorGVKd_2 K217;
static _KLsimple_object_vectorGVKd_2 K218;
static _KLbyte_stringGVKd_17 K219;
static _KLbyte_stringGVKd_54 K220;
extern _KLincremental_generic_functionGVKe Kforce_output_buffersYstreamsVio;
extern _KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM0;
D Kforce_output_buffersYstreamsVioMM0I (D);
static _KLpairGVKd K224;
static _KLpairGVKd K225;
static _KLpairGVKd K226;
static _KLbyte_stringGVKd_20 K227;
static _KLsignatureGVKe K228;
static _KLsimple_object_vectorGVKd_2 K229;
static D KloopF231I (D, D, D, D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K232;
static _KLsignatureGVKe K233;
static _KLsimple_object_vectorGVKd_3 K234;
extern _KLsimple_methodGVKe Krelease_output_bufferYstreamsVio;
D Krelease_output_bufferYstreamsVioI (D stream_);
static _KLbyte_stringGVKd_41 K237;
extern _KLkeyword_methodGVKe Knext_output_bufferYstreamsVio;
D Knext_output_bufferYstreamsVioI (D stream_, D Urest_, D bytes_);
static _KLkeyword_signatureGVKe K240;
extern _KLkeyword_methodGVKe Kget_output_bufferYstreamsVio;
D Kget_output_bufferYstreamsVioI (D stream_, D Urest_, D bytes_);
static _KLkeyword_signatureAvaluesGVKi K243;
extern _KLincremental_generic_functionGVKe Kdo_input_available_at_sourceQYstreamsVio;
extern _KLsimple_methodGVKe Kdo_input_available_at_sourceQYstreamsVioMM0;
D Kdo_input_available_at_sourceQYstreamsVioMM0I (D);
static _KLpairGVKd K247;
static _KLsignatureAvaluesGVKi K248;
static _KLbyte_stringGVKd_29 K249;
static _KLsignatureAvaluesGVKi K250;
extern _KLsimple_methodGVKe Kinput_available_at_sourceQYstreamsVio;
D Kinput_available_at_sourceQYstreamsVioI (D stream_);
extern _KLsimple_methodGVKe Krelease_input_bufferYstreamsVio;
D Krelease_input_bufferYstreamsVioI (D stream_);
static _KLbyte_stringGVKd_40 K255;
extern _KLkeyword_methodGVKe Knext_input_bufferYstreamsVio;
D Knext_input_bufferYstreamsVioI (D stream_, D Urest_, D waitQ_, D bytes_);
static _KLkeyword_signatureAvaluesGVKi K258;
extern _KLkeyword_methodGVKe Kget_input_bufferYstreamsVio;
D Kget_input_bufferYstreamsVioI (D stream_, D Urest_, D waitQ_, D bytes_);
extern _KLsimple_methodGVKe Kensure_output_bufferYstreams_internalsVio;
D Kensure_output_bufferYstreams_internalsVioI (D stream_);
extern _KLsimple_methodGVKe Kensure_input_bufferYstreams_internalsVio;
D Kensure_input_bufferYstreams_internalsVioI (D stream_);
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM1;
D KwriteYstreams_protocolVcommon_dylanMioM1I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM1;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM1I (D, D);
extern _KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM0;
D Kdiscard_outputYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMioM0;
D Kdiscard_inputYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM1;
D Kread_intoXYstreams_protocolVcommon_dylanMioM1I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM1;
D KreadYstreams_protocolVcommon_dylanMioM1I (D, D, D, D);
extern _KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM1;
D KpeekYstreams_protocolVcommon_dylanMioM1I (D, D, D);
extern _KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM1;
D Kread_elementYstreams_protocolVcommon_dylanMioM1I (D, D, D);
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM2;
D KcloseYcommon_extensionsVcommon_dylanMioM2I (D, D);
static _KLbyte_stringGVKd_15 K292;
static _KLkeyword_signatureGVKe K293;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K294;
static _KLkeyword_signatureGVKe K295;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K296;
static _KLkeyword_signatureGVKe K297;
static _KLsimple_closure_methodGVKi_0 KloopF300;
static D KloopF300I (D, D, D, D, D, D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K301;
static _KLsymbolGVKd KJsequence_;
static _KLbyte_stringGVKd_8 K303;
static _KLsignatureGVKe K304;
static _KLsimple_object_vectorGVKd_7 K305;
static _KLkeyword_signatureGVKe K306;
static _KLsimple_object_vectorGVKd_4 K307;
static _KLsimple_object_vectorGVKd_3 K308;
static _KLsimple_object_vectorGVKd_2 K309;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K310;
static _KLsignatureGVKe K311;
static _KLsimple_object_vectorGVKd_2 K312;
static D KloopF314I (D, D, D, D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K315;
static _KLkeyword_signatureGVKe K316;
static _KLsimple_object_vectorGVKd_2 K317;
static _KLpairGVKd K318;
static _KLpairGVKd K319;
static _KLpairGVKd K320;

/* Indirection variables */

static D IKJbytes_ = &KJbytes_;
static D IKJstream_ = &KJstream_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJgrowQ_ = &KJgrowQ_;
static D IKJsequence_ = &KJsequence_;

/* Variables */

D actual_stream_input_bufferYstreams_internalsVio = &Kactual_stream_input_bufferYstreams_internalsVio;
D actual_stream_input_buffer_setterYstreams_internalsVio = &Kactual_stream_input_buffer_setterYstreams_internalsVio;
D actual_stream_output_bufferYstreams_internalsVio = &Kactual_stream_output_bufferYstreams_internalsVio;
D actual_stream_output_buffer_setterYstreams_internalsVio = &Kactual_stream_output_buffer_setterYstreams_internalsVio;
D stream_input_bufferYstreams_internalsVio = &Kstream_input_bufferYstreams_internalsVio;
D stream_input_buffer_setterYstreams_internalsVio = &Kstream_input_buffer_setterYstreams_internalsVio;
D stream_output_bufferYstreams_internalsVio = &Kstream_output_bufferYstreams_internalsVio;
D stream_output_buffer_setterYstreams_internalsVio = &Kstream_output_buffer_setterYstreams_internalsVio;
D Lbuffered_streamGYstreamsVio = &KLbuffered_streamGYstreamsVio;
D ensure_input_bufferYstreams_internalsVio = &Kensure_input_bufferYstreams_internalsVio;
D ensure_output_bufferYstreams_internalsVio = &Kensure_output_bufferYstreams_internalsVio;
D get_input_bufferYstreamsVio = &Kget_input_bufferYstreamsVio;
D do_get_input_bufferYstreamsVio = &Kdo_get_input_bufferYstreamsVio;
D next_input_bufferYstreamsVio = &Knext_input_bufferYstreamsVio;
D do_next_input_bufferYstreamsVio = &Kdo_next_input_bufferYstreamsVio;
D release_input_bufferYstreamsVio = &Krelease_input_bufferYstreamsVio;
D do_release_input_bufferYstreamsVio = &Kdo_release_input_bufferYstreamsVio;
D input_available_at_sourceQYstreamsVio = &Kinput_available_at_sourceQYstreamsVio;
D do_input_available_at_sourceQYstreamsVio = &Kdo_input_available_at_sourceQYstreamsVio;
D get_output_bufferYstreamsVio = &Kget_output_bufferYstreamsVio;
D do_get_output_bufferYstreamsVio = &Kdo_get_output_bufferYstreamsVio;
D next_output_bufferYstreamsVio = &Knext_output_bufferYstreamsVio;
D do_next_output_bufferYstreamsVio = &Kdo_next_output_bufferYstreamsVio;
D release_output_bufferYstreamsVio = &Krelease_output_bufferYstreamsVio;
D do_release_output_bufferYstreamsVio = &Kdo_release_output_bufferYstreamsVio;
D stream_shared_bufferYstreams_internalsVio = &Kstream_shared_bufferYstreams_internalsVio;
D stream_shared_buffer_setterYstreams_internalsVio = &Kstream_shared_buffer_setterYstreams_internalsVio;
D Lsingle_buffered_streamGYstreams_internalsVio = &KLsingle_buffered_streamGYstreams_internalsVio;
D Ldouble_buffered_streamGYstreams_internalsVio = &KLdouble_buffered_streamGYstreams_internalsVio;
D Tmulti_buffer_bytesTYstreams_internalsVio = (D) 1;
D force_output_buffersYstreamsVio = &Kforce_output_buffersYstreamsVio;
D do_force_output_buffersYstreamsVio = &Kdo_force_output_buffersYstreamsVio;

/* Objects */

_KLsimple_methodGVKe Kwrite_fillYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K233,
  &Kwrite_fillYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kread_skipYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K228,
  &Kread_skipYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kdo_force_outputYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kdo_force_outputYstreams_internalsVioMM1I
};

_KLsimple_methodGVKe Kstream_sequenceYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kstream_sequenceYstreams_internalsVioMM1I
};

_KLclassGVKd KLbuffered_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K219,
  &K214,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbuffered_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K214,
  (D) 1,
  25,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K210,
  &key_mep_5,
  &Kwrite_lineYstreamsVioMM0I,
  &K211
};

_KLkeyword_methodGVKe Kread_line_intoXYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K198,
  &key_mep_6,
  &Kread_line_intoXYstreamsVioMM0I,
  &K199
};

_KLkeyword_methodGVKe Kread_lineYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K187,
  &key_mep_3,
  &Kread_lineYstreamsVioMM0I,
  &K188
};

_KLinstance_slot_descriptorGVKe Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLbuffered_streamGYstreamsVio,
  &KPfalseVKi,
  &Kactual_stream_input_bufferYstreams_internalsVio,
  &Kactual_stream_input_buffer_setterYstreams_internalsVio,
  &K44
};

_KLinstance_slot_descriptorGVKe Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLbuffered_streamGYstreamsVio,
  &KPfalseVKi,
  &Kactual_stream_output_bufferYstreams_internalsVio,
  &Kactual_stream_output_buffer_setterYstreams_internalsVio,
  &K44
};

_KLinstance_slot_descriptorGVKe Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KJbuffer_,
  &Kstream_shared_bufferYstreams_internalsVio,
  &Kstream_shared_buffer_setterYstreams_internalsVio,
  &K44
};

_KLclassGVKd KLsingle_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K157,
  &K151,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLsingle_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K151,
  (D) 1,
  29,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kstream_shared_bufferYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K149,
  (D) 1,
  &K150,
  &K148,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_input_bufferYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K116,
  (D) 1,
  &K146,
  &K145,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_input_buffer_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K122,
  (D) 1,
  &K142,
  &K140,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kstream_input_buffer_setterYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_shared_buffer_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K135,
  (D) 1,
  &K136,
  &K133,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kstream_shared_buffer_setterYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_release_input_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K100,
  (D) 1,
  &K131,
  &K129,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_release_input_bufferYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_output_buffer_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K122,
  (D) 1,
  &K123,
  &K120,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kstream_output_buffer_setterYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K116,
  (D) 1,
  &K117,
  &K115,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_force_output_buffersYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K100,
  (D) 1,
  &K110,
  &K107,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_force_output_buffersYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_release_output_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K100,
  (D) 1,
  &K101,
  &K98,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_release_output_bufferYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_next_input_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K80,
  (D) 1,
  &K93,
  &K90,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_next_input_bufferYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_get_input_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K80,
  (D) 1,
  &K81,
  &K77,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_get_input_bufferYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_next_output_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K71,
  (D) 1,
  &K72,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_next_output_bufferYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kdo_get_output_bufferYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K39,
  (D) 1,
  &K40,
  &K36,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kdo_get_output_bufferYstreamsVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kdo_get_output_bufferYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K53,
  &key_mep_3,
  &Kdo_get_output_bufferYstreamsVioMM0I,
  &K54
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_output_bufferYstreamsVioMM0,
  &K37
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_output_bufferYstreamsVioMM1,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_output_bufferYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K39 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K41,
  &K42,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

static _KLbyte_stringGVKd_20 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "do-get-output-buffer"
};

static _KLsimple_object_vectorGVKd_1 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_object_vectorGVKd_1 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbytes_
};

static _KLsimple_object_vectorGVKd_1 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K44
};

static _KLunionGVKe K44 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K45,
  &KLbufferGYstreamsVio
};

static _KLsingletonGVKd K45 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsymbolGVKd KJbytes_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K47
};

static _KLbyte_stringGVKd_5 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "bytes"
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K52
};

static _KLbyte_stringGVKd_28 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "Can\'t write to closed stream"
};

static _KLbyte_stringGVKd_31 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Can\'t write to read-only stream"
};

static _KLbyte_stringGVKd_37 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Internal error: output buffer missing"
};

static _KLbyte_stringGVKd_6 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLkeyword_signatureAvaluesGVKi K53 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K55,
  &K42,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

static _KLsimple_object_vectorGVKd_2 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbytes_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_1 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdouble_buffered_streamGYstreams_internalsVio
};

_KLclassGVKd KLdouble_buffered_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K65,
  &K58,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLdouble_buffered_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K58,
  (D) 1,
  25,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K58 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845017,
  &KLdouble_buffered_streamGYstreams_internalsVio,
  &KLdouble_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K59,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K60,
  &K61,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K59,
  &K62,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLsimple_object_vectorGVKd_1 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbuffered_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLdouble_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_2 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kstream_input_bufferYstreams_internalsVioHLdouble_buffered_streamG,
  &Kstream_output_bufferYstreams_internalsVioHLdouble_buffered_streamG
};

static _KLinherited_slot_descriptorGVKe Kstream_input_bufferYstreams_internalsVioHLdouble_buffered_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KPfalseVKi,
  &KLdouble_buffered_streamGYstreams_internalsVio,
  &Kstream_input_bufferYstreams_internalsVio
};

static _KLinherited_slot_descriptorGVKe Kstream_output_bufferYstreams_internalsVioHLdouble_buffered_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KPfalseVKi,
  &KLdouble_buffered_streamGYstreams_internalsVio,
  &Kstream_output_bufferYstreams_internalsVio
};

static _KLbyte_stringGVKd_24 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<double-buffered-stream>"
};

_KLkeyword_methodGVKe Kdo_next_output_bufferYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K74,
  &key_mep_3,
  &Kdo_next_output_bufferYstreamsVioMM0I,
  &K54
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_output_bufferYstreamsVioMM0,
  &K69
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_output_bufferYstreamsVioMM1,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_output_bufferYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K71 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K60,
  &K42,
  &KDsignature_LobjectG_typesVKi,
  &K73
};

static _KLbyte_stringGVKd_21 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "do-next-output-buffer"
};

static _KLsimple_object_vectorGVKd_1 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

static _KLkeyword_signatureAvaluesGVKi K74 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K55,
  &K42,
  &KDsignature_LobjectG_typesVKi,
  &K73
};

_KLkeyword_methodGVKe Kdo_get_input_bufferYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K86,
  &key_mep_4,
  &Kdo_get_input_bufferYstreamsVioMM0I,
  &K87
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_input_bufferYstreamsVioMM0,
  &K78
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_input_bufferYstreamsVioMM1,
  &K79
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_get_input_bufferYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K80 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K41,
  &K82,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

static _KLbyte_stringGVKd_19 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "do-get-input-buffer"
};

static _KLsimple_object_vectorGVKd_2 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJwaitQ_,
  &KJbytes_
};

static _KLbyte_stringGVKd_29 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "Can\'t read from closed stream"
};

static _KLbyte_stringGVKd_33 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Can\'t read from write-only stream"
};

static _KLbyte_stringGVKd_36 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "Internal error: input buffer missing"
};

static _KLkeyword_signatureAvaluesGVKi K86 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K55,
  &K82,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

static _KLsimple_object_vectorGVKd_4 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJwaitQ_,
  &KPtrueVKi,
  &KJbytes_,
  (D) 5
};

_KLkeyword_methodGVKe Kdo_next_input_bufferYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K86,
  &key_mep_4,
  &Kdo_next_input_bufferYstreamsVioMM0I,
  &K87
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_input_bufferYstreamsVioMM0,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_input_bufferYstreamsVioMM1,
  &K92
};

static _KLpairGVKd K92 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_next_input_bufferYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "do-next-input-buffer"
};

_KLsimple_methodGVKe Kdo_release_output_bufferYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kdo_release_output_bufferYstreamsVioMM0I
};

_KLsimple_methodGVKe Kdo_release_output_bufferYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K102,
  &Kdo_release_output_bufferYstreamsVioMM1I
};

static _KLpairGVKd K98 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_release_output_bufferYstreamsVioMM0,
  &K99
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_release_output_bufferYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K100 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K41
};

static _KLbyte_stringGVKd_24 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "do-release-output-buffer"
};

static _KLsignatureGVKe K102 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K103
};

static _KLsimple_object_vectorGVKd_1 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsingle_buffered_streamGYstreams_internalsVio
};

static _KLsignatureGVKe K104 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K60
};

_KLsimple_methodGVKe Kdo_force_output_buffersYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kdo_force_output_buffersYstreamsVioMM0I
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_force_output_buffersYstreamsVioMM0,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_force_output_buffersYstreamsVioMM1,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_force_output_buffersYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "do-force-output-buffers"
};

static _KLbyte_stringGVKd_15 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "Bad write count"
};

static _KLsignatureGVKe K112 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K55
};

_KLsimple_methodGVKe Kstream_output_bufferYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &Kstream_output_bufferYstreams_internalsVioMM0I
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_output_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K116 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K60,
  &K43
};

static _KLbyte_stringGVKd_20 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "stream-output-buffer"
};

_KLsimple_methodGVKe Kstream_output_buffer_setterYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kstream_output_buffer_setterYstreams_internalsVioMM0I
};

static _KLpairGVKd K120 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_output_buffer_setterYstreams_internalsVioMM0,
  &K121
};

static _KLpairGVKd K121 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_output_buffer_setterYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K122 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K124,
  &K43
};

static _KLbyte_stringGVKd_27 K123 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "stream-output-buffer-setter"
};

static _KLsimple_object_vectorGVKd_2 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K44,
  &KLbuffered_streamGYstreamsVio
};

_KLsimple_methodGVKe Kdo_release_input_bufferYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kdo_release_input_bufferYstreamsVioMM0I
};

_KLsimple_methodGVKe Kdo_release_input_bufferYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K102,
  &Kdo_release_input_bufferYstreamsVioMM1I
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_release_input_bufferYstreamsVioMM0,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_release_input_bufferYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "do-release-input-buffer"
};

_KLsetter_methodGVKi Kstream_shared_buffer_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_shared_buffer_setterYstreams_internalsVioMM0,
  &K134
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_shared_buffer_setterYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K135 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K137,
  &K43
};

static _KLbyte_stringGVKd_27 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "stream-shared-buffer-setter"
};

static _KLsimple_object_vectorGVKd_2 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K44,
  &KLsingle_buffered_streamGYstreams_internalsVio
};

_KLsimple_methodGVKe Kstream_input_buffer_setterYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kstream_input_buffer_setterYstreams_internalsVioMM0I
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_input_buffer_setterYstreams_internalsVioMM0,
  &K141
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_input_buffer_setterYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "stream-input-buffer-setter"
};

_KLsimple_methodGVKe Kstream_input_bufferYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &Kstream_input_bufferYstreams_internalsVioMM0I
};

static _KLpairGVKd K145 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_input_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "stream-input-buffer"
};

_KLgetter_methodGVKi Kstream_shared_bufferYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG
};

static _KLpairGVKd K148 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_shared_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K149 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K103,
  &K43
};

static _KLbyte_stringGVKd_20 K150 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "stream-shared-buffer"
};

static _KLimplementation_classGVKe K151 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845021,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KLsingle_buffered_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K152,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K60,
  &K153,
  (D) 21,
  &K154,
  &K155,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K320,
  &KPempty_vectorVKi,
  &K156,
  &K152,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG
};

static _KLsimple_object_vectorGVKd_6 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbuffered_streamGYstreamsVio,
  &KLsingle_buffered_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_2 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  (D) 33,
  (D) 41
};

static _KLsimple_object_vectorGVKd_7 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG
};

static _KLbyte_stringGVKd_24 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<single-buffered-stream>"
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K159
};

static _KLbyte_stringGVKd_6 K159 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

_KLsealed_generic_functionGVKe Kactual_stream_output_bufferYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K167,
  &K166,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kactual_stream_output_buffer_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K164,
  &K163,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kactual_stream_output_buffer_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLpairGVKd K163 = {
  &KLpairGVKdW /* wrapper */,
  &Kactual_stream_output_buffer_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "actual-stream-output-buffer-setter"
};

_KLgetter_methodGVKi Kactual_stream_output_bufferYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLpairGVKd K166 = {
  &KLpairGVKdW /* wrapper */,
  &Kactual_stream_output_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K167 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "actual-stream-output-buffer"
};

_KLsealed_generic_functionGVKe Kactual_stream_input_bufferYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K175,
  &K174,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kactual_stream_input_buffer_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K172,
  &K171,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kactual_stream_input_buffer_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &Kactual_stream_input_buffer_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K172 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "actual-stream-input-buffer-setter"
};

_KLgetter_methodGVKi Kactual_stream_input_bufferYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &Kactual_stream_input_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "actual-stream-input-buffer"
};

static _KLsimple_closure_methodGVKi_0 Kextend_lineF184 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K185,
  &Kextend_lineF184I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KloopF181 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K182,
  &KloopF181I,
  (D) 1
};

static _KLbyte_stringGVKd_35 K180 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Can\'t set position of closed stream"
};

static _KLsignatureGVKe K182 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K183
};

static _KLsimple_object_vectorGVKd_2 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &K44
};

static _KLsignatureGVKe K185 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K186
};

static _KLsimple_object_vectorGVKd_4 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLbufferGYstreamsVio,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K187 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818629,
  &K60,
  &K191,
  &KDsignature_LobjectG_typesVKi,
  &K192
};

static _KLsimple_object_vectorGVKd_2 K188 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K190
};

static _KLbyte_stringGVKd_16 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_1 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLsimple_object_vectorGVKd_2 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLbooleanGVKd
};

static _KLsimple_closure_methodGVKi_0 KloopF195 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K196,
  &KloopF195I,
  (D) 1
};

static _KLsignatureGVKe K196 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040213,
  &K197
};

static _KLsimple_object_vectorGVKd_5 K197 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &K44
};

static _KLkeyword_signatureAvaluesGVKi K198 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818633,
  &K202,
  &K203,
  &K204,
  &K192
};

static _KLsimple_object_vectorGVKd_6 K199 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi,
  &KJgrowQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJgrowQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K201
};

static _KLbyte_stringGVKd_5 K201 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "grow?"
};

static _KLsimple_object_vectorGVKd_2 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbuffered_streamGYstreamsVio,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_3 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstart_,
  &KJon_end_of_stream_,
  &KJgrowQ_
};

static _KLsimple_object_vectorGVKd_3 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 Kwrite_eltsF207 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K208,
  &Kwrite_eltsF207I,
  (D) 1
};

static _KLsignatureGVKe K208 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040213,
  &K209
};

static _KLsimple_object_vectorGVKd_5 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLstringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K210 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K202,
  &K212,
  &K213
};

static _KLsimple_object_vectorGVKd_4 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K212 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K214 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845017,
  &KLbuffered_streamGYstreamsVio,
  &KLbuffered_streamGYstreamsVioW,
  &KPfalseVKi,
  &K59,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K215,
  &K216,
  (D) 17,
  &K217,
  &K155,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K318,
  &KPempty_vectorVKi,
  &K218,
  &K59,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K215 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K216 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbuffered_streamGYstreamsVio,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K217 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  (D) 29,
  (D) 37
};

static _KLsimple_object_vectorGVKd_2 K218 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kactual_stream_input_bufferYstreams_internalsVioHLbuffered_streamG,
  &Kactual_stream_output_bufferYstreams_internalsVioHLbuffered_streamG
};

static _KLbyte_stringGVKd_17 K219 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<buffered-stream>"
};

static _KLbyte_stringGVKd_54 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "<buffered-stream>\'s do not have an underlying sequence"
};

_KLincremental_generic_functionGVKe Kforce_output_buffersYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K100,
  (D) 1,
  &K227,
  &K224,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &Kforce_output_buffersYstreamsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kforce_output_buffersYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kforce_output_buffersYstreamsVioMM0I
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &Kforce_output_buffersYstreamsVioMM0,
  &K225
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &Kforce_output_buffersYstreamsVioMM1,
  &K226
};

static _KLpairGVKd K226 = {
  &KLpairGVKdW /* wrapper */,
  &Kforce_output_buffersYstreamsVioMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K227 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "force-output-buffers"
};

static _KLsignatureGVKe K228 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K229
};

static _KLsimple_object_vectorGVKd_2 K229 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbuffered_streamGYstreamsVio,
  &KLintegerGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K232 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kbuffer_fillYstreamsVio
};

static _KLsignatureGVKe K233 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K234
};

static _KLsimple_object_vectorGVKd_3 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbuffered_streamGYstreamsVio,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Krelease_output_bufferYstreamsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Krelease_output_bufferYstreamsVioI
};

static _KLbyte_stringGVKd_41 K237 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Stream %= does not have the output buffer"
};

_KLkeyword_methodGVKe Knext_output_bufferYstreamsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K240,
  &key_mep_3,
  &Knext_output_bufferYstreamsVioI,
  &K54
};

static _KLkeyword_signatureGVKe K240 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K60,
  &K42,
  &KDsignature_LobjectG_typesVKi
};

_KLkeyword_methodGVKe Kget_output_bufferYstreamsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K243,
  &key_mep_3,
  &Kget_output_bufferYstreamsVioI,
  &K54
};

static _KLkeyword_signatureAvaluesGVKi K243 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K60,
  &K42,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

_KLincremental_generic_functionGVKe Kdo_input_available_at_sourceQYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K248,
  (D) 1,
  &K249,
  &K247,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kdo_input_available_at_sourceQYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K250,
  &Kdo_input_available_at_sourceQYstreamsVioMM0I
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_input_available_at_sourceQYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K248 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K41,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_29 K249 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "do-input-available-at-source?"
};

static _KLsignatureAvaluesGVKi K250 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K60,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kinput_available_at_sourceQYstreamsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K250,
  &Kinput_available_at_sourceQYstreamsVioI
};

_KLsimple_methodGVKe Krelease_input_bufferYstreamsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Krelease_input_bufferYstreamsVioI
};

static _KLbyte_stringGVKd_40 K255 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "Stream %= does not have the input buffer"
};

_KLkeyword_methodGVKe Knext_input_bufferYstreamsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K258,
  &key_mep_4,
  &Knext_input_bufferYstreamsVioI,
  &K87
};

static _KLkeyword_signatureAvaluesGVKi K258 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K60,
  &K82,
  &KDsignature_LobjectG_typesVKi,
  &K43
};

_KLkeyword_methodGVKe Kget_input_bufferYstreamsVio = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K258,
  &key_mep_4,
  &Kget_input_bufferYstreamsVioI,
  &K87
};

_KLsimple_methodGVKe Kensure_output_bufferYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kensure_output_bufferYstreams_internalsVioI
};

_KLsimple_methodGVKe Kensure_input_bufferYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kensure_input_bufferYstreams_internalsVioI
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K316,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM1I,
  &K211
};

_KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K311,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kdiscard_outputYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kdiscard_inputYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kdiscard_inputYstreams_protocolVcommon_dylanMioM0I
};

_KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K306,
  &key_mep_6,
  &Kread_intoXYstreams_protocolVcommon_dylanMioM1I,
  &K307
};

_KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K297,
  &key_mep_4,
  &KreadYstreams_protocolVcommon_dylanMioM1I,
  &K188
};

_KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K295,
  &key_mep_3,
  &KpeekYstreams_protocolVcommon_dylanMioM1I,
  &K188
};

_KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K295,
  &key_mep_3,
  &Kread_elementYstreams_protocolVcommon_dylanMioM1I,
  &K188
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K293,
  &key_mep_2,
  &KcloseYcommon_extensionsVcommon_dylanMioM2I,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_15 K292 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K293 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K55,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K294 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_to_elementYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K295 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K60,
  &K191,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K296 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_to_elementYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K297 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K229,
  &K191,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 KloopF300 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_7,
  &K304,
  &KloopF300I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K301 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 4063289,
  &KPfalseVKi,
  &cache_header_engine_6,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_to_sequenceYstreams_internalsVio
};

static _KLsymbolGVKd KJsequence_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K303
};

static _KLbyte_stringGVKd_8 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "sequence"
};

static _KLsignatureGVKe K304 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040221,
  &K305
};

static _KLsimple_object_vectorGVKd_7 K305 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &K44
};

static _KLkeyword_signatureGVKe K306 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K308,
  &K309,
  &K213
};

static _KLsimple_object_vectorGVKd_4 K307 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K308 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbuffered_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K309 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K310 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_from_elementYstreams_internalsVio
};

static _KLsignatureGVKe K311 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K312
};

static _KLsimple_object_vectorGVKd_2 K312 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbuffered_streamGYstreamsVio,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K315 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 4063289,
  &KPfalseVKi,
  &cache_header_engine_6,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcoerce_from_sequenceYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K316 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K317,
  &K212,
  &K213
};

static _KLsimple_object_vectorGVKd_2 K317 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbuffered_streamGYstreamsVio,
  &KLsequenceGVKd
};

static _KLpairGVKd K318 = {
  &KLpairGVKdW /* wrapper */,
  &KLdouble_buffered_streamGYstreams_internalsVio,
  &K319
};

static _KLpairGVKd K319 = {
  &KLpairGVKdW /* wrapper */,
  &KLsingle_buffered_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &KLfile_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D Kwrite_fillYstreams_internalsVioMM1I (D stream_, D elt_, D n_) {
  D T4;
  D T5;
  D sb_;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T17;
  D T18;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:805
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T9 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T10 = SLOT_VALUE_INITD(T9, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T11 = SLOT_VALUE_INITD(T9, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T13 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T14 = primitive_machine_word_less_thanQ(T12,T13);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      if (T14 != &KPfalseVKi) {
        T18 = T9;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
        T15.vector_element_[0] = IKJbytes_;
        T15.vector_element_[1] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T7_0 = CONGRUENT_CALL2(stream_, &T15);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
        T17 = T7_0;
        T18 = T17;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T20 = T18;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T16.vector_element_[0] = IKJbytes_;
      T16.vector_element_[1] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
      T8_0 = CONGRUENT_CALL2(stream_, &T16);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
      T19 = T8_0;
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:809
    T5 = KloopF231I(n_, elt_, stream_, (D) 1, T20);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
    FALL_THROUGH_UNWIND(T5);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:807
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:805
  MV_SET_COUNT(0);
  return(T5);
}

D Kread_skipYstreams_internalsVioMM1I (D stream_, D n_) {
  D T3;
  D sbF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D i_;
  D T12;
  D T13;
  D T14;
  D sbF15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  D sbF21;
  D T22_0;
  D T23_0;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  _KLsimple_object_vectorGVKd_4 T30 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  D T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:683
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:685
  T19 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:685
  T20 = primitive_machine_word_less_thanQ(1,T19);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:685
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
      CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
      CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      sbF21 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
      if (sbF21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T24 = sbF21;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T25 = SLOT_VALUE_INITD(T24, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T26 = SLOT_VALUE_INITD(T24, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T27 = primitive_cast_integer_as_raw(T25);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T28 = primitive_cast_integer_as_raw(T26);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T29 = primitive_machine_word_less_thanQ(T27,T28);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        if (T29 != &KPfalseVKi) {
          T33 = T24;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
          T30.vector_element_[0] = &KJwaitQ_;
          T30.vector_element_[1] = &KPtrueVKi;
          T30.vector_element_[2] = IKJbytes_;
          T30.vector_element_[3] = (D) 5;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
          CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
          T22_0 = CONGRUENT_CALL2(stream_, &T30);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
          T32 = T22_0;
          T33 = T32;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T35 = T33;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T31.vector_element_[0] = &KJwaitQ_;
        T31.vector_element_[1] = &KPtrueVKi;
        T31.vector_element_[2] = IKJbytes_;
        T31.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
        T23_0 = CONGRUENT_CALL2(stream_, &T31);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
        T34 = T23_0;
        T35 = T34;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:687
      i_ = (D) 1;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
    L0: ;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
        if (T35 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
          T12 = i_;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
          T36 = primitive_cast_integer_as_raw(T12);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
          T37 = primitive_machine_word_less_thanQ(T36,T19);
          T7 = T37;
        } else {
          T7 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
        if (T7 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:690
          primitive_type_check(T35, &KLbufferGYstreamsVio);
          sbF4 = T35;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:690
          sbF15 = sbF4;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:691
          T18 = sbF15;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:691
          T38 = SLOT_VALUE_INITD(T18, 0);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:692
          T17 = sbF15;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:692
          T39 = SLOT_VALUE_INITD(T17, 1);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:693
          T40 = primitive_cast_integer_as_raw(T38);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:693
          T41 = primitive_cast_integer_as_raw(T39);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:693
          T42 = primitive_machine_word_less_thanQ(T40,T41);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:693
          if (T42 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T43 = primitive_cast_integer_as_raw(T39);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T44 = primitive_cast_integer_as_raw(T38);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T45 = primitive_machine_word_logxor(T44,1);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T46 = primitive_machine_word_subtract_signal_overflow(T43,T45);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T14 = i_;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T47 = primitive_cast_integer_as_raw(T14);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T48 = primitive_machine_word_logxor(T47,1);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T49 = primitive_machine_word_subtract_signal_overflow(T19,T48);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            T51 = primitive_machine_word_less_thanQ(T46,T49);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            if (T51 != &KPfalseVKi) {
              T50 = T46;
            } else {
              T50 = T49;
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:696
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            T13 = i_;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            T52 = primitive_cast_integer_as_raw(T13);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            T53 = primitive_machine_word_logxor(T50,1);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            T54 = primitive_machine_word_add_signal_overflow(T52,T53);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            T55 = primitive_cast_raw_as_integer(T54);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:697
            i_ = T55;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            T56 = primitive_cast_integer_as_raw(T38);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            T57 = primitive_machine_word_logxor(T50,1);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            T58 = primitive_machine_word_add_signal_overflow(T56,T57);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            T59 = primitive_cast_raw_as_integer(T58);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            T16 = sbF15;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:698
            SLOT_VALUE_SETTER(T59, T16, 0);
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:694
            CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
            T5 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:694
            primitive_type_check(T5, &KLbufferGYstreamsVio);
            T6 = T5;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:694
            sbF15 = T6;
          }
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:693
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:689
      T8 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
      FALL_THROUGH_UNWIND(T8);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
    CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:686
    CONTINUE_UNWIND();
    T10 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:685
    T9 = &KPfalseVKi;
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:685
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:683
  MV_SET_COUNT(0);
  return(T10);
}

D Kdo_force_outputYstreams_internalsVioMM1I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:492
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  T5 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  T7 = primitive_machine_word_logand(T6,9);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  T9 = primitive_idQ(T8,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
    T3 = &KPfalseVKi;
    T4 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:495
    CONGRUENT_CALL_PROLOG(&Kforce_output_buffersYstreamsVio, 1);
    T2 = CONGRUENT_CALL1(stream_);
    T4 = T2;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:494
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:492
  MV_SET_COUNT(0);
  return(T4);
}

D Kstream_sequenceYstreams_internalsVioMM1I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:65
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:67
  T2 = KerrorVKdMM1I(&K220, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:65
  MV_SET_COUNT(0);
  return(T2);
}

D Kwrite_lineYstreamsVioMM0I (D stream_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D UstartF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D sb_;
  D T15_0;
  D T16_0;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T24 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T25;
  D T26;
  D T27;
  D T28;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:754
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:754
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF6 = Ustart_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T17 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T18 = SLOT_VALUE_INITD(T17, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T19 = SLOT_VALUE_INITD(T17, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T20 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T21 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T22 = primitive_machine_word_less_thanQ(T20,T21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      if (T22 != &KPfalseVKi) {
        T26 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
        T23.vector_element_[0] = IKJbytes_;
        T23.vector_element_[1] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T15_0 = CONGRUENT_CALL2(stream_, &T23);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
        T25 = T15_0;
        T26 = T25;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T28 = T26;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T24.vector_element_[0] = IKJbytes_;
      T24.vector_element_[1] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
      T16_0 = CONGRUENT_CALL2(stream_, &T24);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
      T27 = T16_0;
      T28 = T27;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:797
    if (Uend_ != &KPfalseVKi) {
      T9 = Uend_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:797
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T8 = CONGRUENT_CALL1(elements_);
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:797
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:797
    CALL5(&Kwrite_eltsF207, T28, stream_, elements_, UstartF6, T9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:798
    CONGRUENT_CALL_PROLOG(&Knewline_sequenceYstreams_internalsVio, 1);
    T10 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:798
    CONGRUENT_CALL_PROLOG(&Knewline_sequenceYstreams_internalsVio, 1);
    T11 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:798
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T12 = CONGRUENT_CALL1(T11);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:798
    T13 = CALL5(&Kwrite_eltsF207, T28, stream_, T10, (D) 1, T12);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
    FALL_THROUGH_UNWIND(T13);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:757
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:754
  MV_SET_COUNT(0);
  return(T13);
}

D Kread_line_intoXYstreamsVioMM0I (D stream_, D string_, D Urest_, D start_, D on_end_of_stream_, D growQ_) {
  D startF7;
  D T8;
  D on_end_of_streamF9;
  D T10;
  D ssize_;
  D T12;
  D T13;
  D T14;
  D T15;
  D Utmp_;
  D T17;
  D T18;
  D T19_0;
  D T19_1;
  D T20_0;
  D T20_1;
  D stringF21;
  D T22;
  D T23;
  D T24;
  D index_;
  D T26;
  D overflow_;
  D T28;
  D T29;
  D T30;
  D matchedQ_;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_4 T37 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T38_0;
  D T38_1;
  D sb_;
  D T40_0;
  D T41_0;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  DWORD T46;
  D T47;
  _KLsimple_object_vectorGVKd_4 T48 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T49 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T50;
  D T51;
  D T52;
  D T53;
  _KLsimple_object_vectorGVKd_1 T54 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T55;
  D T56_0;
  D T57;
  DWORD T58;
  DWORD T59;
  D T60;
  D T61_0;
  D T61_1;
  D T62_0;
  D T62_1;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  stringF21 = MAKE_D_CELL(string_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  primitive_type_check(start_, &KLintegerGVKd);
  startF7 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  T34 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
    T8 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF9 = T8;
  } else {
    on_end_of_streamF9 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:605
  T24 = GET_D_CELL_VAL(stringF21);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:605
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T10 = CONGRUENT_CALL1(T24);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:605
  primitive_type_check(T10, &KLintegerGVKd);
  ssize_ = T10;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:606
  index_ = MAKE_D_CELL(startF7);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:607
  overflow_ = MAKE_D_CELL(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:622
  T35 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:622
  T36 = primitive_idQ(T35,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:622
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:623
    T37.vector_element_[0] = IKJstream_;
    T37.vector_element_[1] = stream_;
    T37.vector_element_[2] = &KJformat_string_;
    T37.vector_element_[3] = &K180;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:623
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T12 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T37);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:623
    T38_0 = KerrorVKdMM0I(T12, &KPempty_vectorVKi);
    T38_1 = MV_GET_ELT(1);
    T20_0 = T38_0;
    T20_1 = T38_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:627
    matchedQ_ = MAKE_D_CELL(&KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
    ENTER_UNWIND_FRAME(T13);
    if (!nlx_setjmp(FRAME_DEST(T13))) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
      CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
      CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      sb_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
      if (sb_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T42 = sb_;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T43 = SLOT_VALUE_INITD(T42, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T44 = SLOT_VALUE_INITD(T42, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T45 = primitive_cast_integer_as_raw(T43);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T46 = primitive_cast_integer_as_raw(T44);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T47 = primitive_machine_word_less_thanQ(T45,T46);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        if (T47 != &KPfalseVKi) {
          T51 = T42;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
          T48.vector_element_[0] = &KJwaitQ_;
          T48.vector_element_[1] = &KPtrueVKi;
          T48.vector_element_[2] = IKJbytes_;
          T48.vector_element_[3] = (D) 5;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
          CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
          T40_0 = CONGRUENT_CALL2(stream_, &T48);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
          T50 = T40_0;
          T51 = T50;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T53 = T51;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T49.vector_element_[0] = &KJwaitQ_;
        T49.vector_element_[1] = &KPtrueVKi;
        T49.vector_element_[2] = IKJbytes_;
        T49.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
        T41_0 = CONGRUENT_CALL2(stream_, &T49);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
        T52 = T41_0;
        T53 = T52;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:633
      T14 = MAKE_CLOSURE_INITD(&KloopF195, 4, matchedQ_, overflow_, index_, stringF21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:633
      get_teb()->function = T14;
      KloopF195I(ssize_, startF7, growQ_, stream_, T53);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
    CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:632
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:668
    T29 = GET_D_CELL_VAL(overflow_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:668
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      T23 = GET_D_CELL_VAL(stringF21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      T30 = GET_D_CELL_VAL(overflow_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      T54.vector_element_[0] = T30;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
      T55 = CONGRUENT_CALL1(T23);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      T56_0 = APPLY3(&Kconcatenate_asVKd, T55, T23, &T54);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      T57 = T56_0;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      primitive_type_check(T57, &KLstringGVKd);
      T15 = T57;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:669
      SET_D_CELL_VAL(stringF21, T15);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:668
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    T26 = GET_D_CELL_VAL(index_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    T58 = primitive_cast_integer_as_raw(startF7);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    T59 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    T60 = primitive_machine_word_less_thanQ(T58,T59);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    if (T60 != &KPfalseVKi) {
      Utmp_ = T60;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
      T33 = GET_D_CELL_VAL(matchedQ_);
      Utmp_ = T33;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    if (Utmp_ != &KPfalseVKi) {
      T17 = Utmp_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
      T28 = GET_D_CELL_VAL(overflow_);
      T17 = T28;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:672
      T22 = GET_D_CELL_VAL(stringF21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:672
      T32 = GET_D_CELL_VAL(matchedQ_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:672
      T61_0 = T22;
      T61_1 = T32;
      T19_0 = T61_0;
      T19_1 = T61_1;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:674
      T18 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:674
      T62_0 = T18;
      T62_1 = &KPfalseVKi;
      T19_0 = T62_0;
      T19_1 = T62_1;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:671
    T20_0 = T19_0;
    T20_1 = T19_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:622
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:601
  MV_SET_ELT(1, T20_1);
  MV_SET_COUNT(2);
  return(T20_0);
}

D Kread_lineYstreamsVioMM0I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T12_0;
  D T12_1;
  D line_;
  D T14;
  D T15;
  D matchedQ_;
  D T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22_0;
  D T22_1;
  D sb_;
  D T24_0;
  D T25_0;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  _KLsimple_object_vectorGVKd_4 T32 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T33 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T38_1;
  D T39_0;
  D T39_1;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
  T18 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:524
  T19 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:524
  T20 = primitive_idQ(T19,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:524
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:525
    T21.vector_element_[0] = IKJstream_;
    T21.vector_element_[1] = stream_;
    T21.vector_element_[2] = &KJformat_string_;
    T21.vector_element_[3] = &K180;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:525
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T21);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:525
    T22_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    T22_1 = MV_GET_ELT(1);
    T12_0 = T22_0;
    T12_1 = T22_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:529
    line_ = MAKE_D_CELL(&KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:530
    matchedQ_ = MAKE_D_CELL(&KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
    ENTER_UNWIND_FRAME(T7);
    if (!nlx_setjmp(FRAME_DEST(T7))) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
      CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
      CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      sb_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
      if (sb_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T26 = sb_;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T27 = SLOT_VALUE_INITD(T26, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T28 = SLOT_VALUE_INITD(T26, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T29 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T30 = primitive_cast_integer_as_raw(T28);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T31 = primitive_machine_word_less_thanQ(T29,T30);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        if (T31 != &KPfalseVKi) {
          T35 = T26;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
          T32.vector_element_[0] = &KJwaitQ_;
          T32.vector_element_[1] = &KPtrueVKi;
          T32.vector_element_[2] = IKJbytes_;
          T32.vector_element_[3] = (D) 5;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
          CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
          T24_0 = CONGRUENT_CALL2(stream_, &T32);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
          T34 = T24_0;
          T35 = T34;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T37 = T35;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T33.vector_element_[0] = &KJwaitQ_;
        T33.vector_element_[1] = &KPtrueVKi;
        T33.vector_element_[2] = IKJbytes_;
        T33.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
        T25_0 = CONGRUENT_CALL2(stream_, &T33);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
        T36 = T25_0;
        T37 = T36;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:536
      T8 = MAKE_CLOSURE_INITD(&Kextend_lineF184, 1, line_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
      T9 = MAKE_CLOSURE(&KloopF181, 3);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
      INIT_CLOSURE(T9, 3, matchedQ_, line_, T8);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
      get_teb()->function = T9;
      KloopF181I(stream_, T37);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
    CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:535
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:593
    T14 = GET_D_CELL_VAL(line_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:593
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:594
      T15 = GET_D_CELL_VAL(line_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:594
      T17 = GET_D_CELL_VAL(matchedQ_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:594
      T38_0 = T15;
      T38_1 = T17;
      T11_0 = T38_0;
      T11_1 = T38_1;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:596
      T10 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:596
      T39_0 = T10;
      T39_1 = &KPfalseVKi;
      T11_0 = T39_0;
      T11_1 = T39_1;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:593
    T12_0 = T11_0;
    T12_1 = T11_1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:524
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:518
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D Kdo_get_output_bufferYstreamsVioMM0I (D stream_, D Urest_, D bytes_) {
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:319
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
  T7 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
  T8 = primitive_idQ(T7,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:328
    T9.vector_element_[0] = IKJstream_;
    T9.vector_element_[1] = stream_;
    T9.vector_element_[2] = &KJformat_string_;
    T9.vector_element_[3] = &K49;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:328
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:328
    KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:331
    T10 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:331
    T11 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:332
      T12.vector_element_[0] = IKJstream_;
      T12.vector_element_[1] = stream_;
      T12.vector_element_[2] = &KJformat_string_;
      T12.vector_element_[3] = &K50;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:332
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T5 = CONGRUENT_CALL2(&KLstream_not_writableGYstreamsVio, &T12);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:332
      KerrorVKdMM0I(T5, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:336
      KerrorVKdMM1I(&K51, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:327
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:338
  T6_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:319
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdo_next_output_bufferYstreamsVioMM0I (D stream_, D Urest_, D bytes_) {
  D T4;
  D sb_;
  D T6_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:341
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:345
  CONGRUENT_CALL_PROLOG(&Kdo_force_output_buffersYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:346
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T4 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:344
  primitive_type_check(T4, &KLbufferGYstreamsVio);
  sb_ = T4;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:347
  SLOT_VALUE_SETTER((D) 1, sb_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:348
  SLOT_VALUE_SETTER((D) 1, sb_, 1);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:349
  SLOT_VALUE_SETTER((D) 1, sb_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:350
  SLOT_VALUE_SETTER(&KPfalseVKi, sb_, 3);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:351
  Kbuffer_fillYstreamsVioMM0I(sb_, (D) 1, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:352
  T6_0 = sb_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:341
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdo_get_input_bufferYstreamsVioMM0I (D stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:280
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
  T8 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
  T9 = primitive_idQ(T8,(D) 17);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:289
    T10.vector_element_[0] = IKJstream_;
    T10.vector_element_[1] = stream_;
    T10.vector_element_[2] = &KJformat_string_;
    T10.vector_element_[3] = &K83;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:289
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T10);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:289
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:292
    T11 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:292
    T12 = primitive_idQ(T11,(D) 9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:293
      T13.vector_element_[0] = IKJstream_;
      T13.vector_element_[1] = stream_;
      T13.vector_element_[2] = &KJformat_string_;
      T13.vector_element_[3] = &K84;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:293
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLstream_not_readableGYstreamsVio, &T13);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:293
      KerrorVKdMM0I(T6, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:296
      KerrorVKdMM1I(&K85, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:288
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:298
  T7_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:280
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdo_next_input_bufferYstreamsVioMM0I (D stream_, D Urest_, D waitQ_, D bytes_) {
  D T5;
  D sb_;
  D T7;
  D T8_0;
  D T8_1;
  D nread_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  DWORD T14;
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:301
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:305
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:304
  primitive_type_check(T5, &KLbufferGYstreamsVio);
  sb_ = T5;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:306
  T13 = SLOT_VALUE_INITD(sb_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:309
  T7 = CALL1(&KaccessorYstreams_internalsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:309
  T8_0 = CALL4(&Kaccessor_read_intoXYstreams_internalsVio, T7, stream_, (D) 1, T13);
  T8_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:308
  nread_ = T8_0;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:310
  T14 = primitive_cast_integer_as_raw(nread_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:310
  T15 = primitive_machine_word_less_thanQ(1,T14);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:310
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:311
    SLOT_VALUE_SETTER((D) 1, sb_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:312
    SLOT_VALUE_SETTER(nread_, sb_, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:313
    T10_0 = sb_;
    T12_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:315
    T11_0 = &KPfalseVKi;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:310
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:301
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdo_release_output_bufferYstreamsVioMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:213
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:215
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:213
  MV_SET_COUNT(0);
  return(T2);
}

D Kdo_release_output_bufferYstreamsVioMM1I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:256
  CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(&KPfalseVKi, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:256
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:254
  MV_SET_COUNT(0);
  return(T2);
}

D Kdo_force_output_buffersYstreamsVioMM0I (D stream_) {
  D T2;
  D T3;
  D sb_;
  D T5;
  D nwritten_;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:367
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:369
  ENTER_UNWIND_FRAME(T2);
  if (!nlx_setjmp(FRAME_DEST(T2))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:369
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:372
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:372
    primitive_type_check(T3, &KLbufferGYstreamsVio);
    sb_ = T3;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:373
    T8 = SLOT_VALUE_INITD(sb_, 4);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T9 = SLOT_VALUE_INITD(sb_, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T10 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T11 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T12 = primitive_machine_word_logxor(T11,1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T13 = primitive_machine_word_subtract_signal_overflow(T10,T12);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:374
    T14 = primitive_cast_raw_as_integer(T13);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:375
    T15 = primitive_machine_word_less_thanQ(1,T13);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:375
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:377
      T5 = CALL1(&KaccessorYstreams_internalsVio, stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:377
      nwritten_ = CALL4(&Kaccessor_write_fromYstreams_internalsVio, T5, stream_, T8, T14);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:378
      T16 = primitive_cast_integer_as_raw(nwritten_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:378
      T17 = primitive_machine_word_equalQ(T16,T13);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:378
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:379
        KerrorVKdMM1I(&K111, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:378
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:375
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:382
    T7 = CALL1(&KaccessorYstreams_internalsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:382
    CALL2(&Kaccessor_force_outputYstreams_internalsVio, T7, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:383
    SLOT_VALUE_SETTER(&KPfalseVKi, sb_, 3);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:387
    T18 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:369
    FALL_THROUGH_UNWIND(T18);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:369
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:369
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:367
  MV_SET_COUNT(0);
  return(T18);
}

D Kstream_output_bufferYstreams_internalsVioMM0I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:53
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:55
  T2 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:55
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:53
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_output_buffer_setterYstreams_internalsVioMM0I (D value_, D stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:58
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:61
  SLOT_VALUE_SETTER(value_, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:61
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:58
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdo_release_input_bufferYstreamsVioMM0I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:133
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:135
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:133
  MV_SET_COUNT(0);
  return(T2);
}

D Kdo_release_input_bufferYstreamsVioMM1I (D stream_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:249
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:251
  CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(&KPfalseVKi, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:251
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:249
  MV_SET_COUNT(0);
  return(T2);
}

D Kstream_input_buffer_setterYstreams_internalsVioMM0I (D value_, D stream_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:47
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:50
  SLOT_VALUE_SETTER(value_, stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:50
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:47
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstream_input_bufferYstreams_internalsVioMM0I (D stream_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:42
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:44
  T2 = SLOT_VALUE_INITD(stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:44
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:42
  MV_SET_COUNT(1);
  return(T3_0);
}

static D Kextend_lineF184I (D stream_, D sb_, D i_, D bi_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D new_;
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
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:536
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:537
  T19 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:537
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:538
    CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:539
    T24 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:539
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T5 = CONGRUENT_CALL1(T24);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:539
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T6 = CONGRUENT_CALL2(T5, i_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:539
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T7 = CONGRUENT_CALL2(T6, bi_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:538
    new_ = CALL3(&KmakeVKd, T4, &KJsize_, T7);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:540
    T23 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:540
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T9 = CONGRUENT_CALL1(T23);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:540
    T22 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:540
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(new_, (D) 1, T22, (D) 1, T9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:541
    T21 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:541
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T10 = CONGRUENT_CALL1(T21);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:541
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T11 = CONGRUENT_CALL2(i_, bi_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:541
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(new_, T10, sb_, bi_, T11);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:542
    SET_D_CELL_VAL(CREF(0), new_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:542
    T12 = &KPfalseVKi;
    T18 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:544
    CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
    T13 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:545
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T14 = CONGRUENT_CALL2(i_, bi_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:544
    T15 = CALL3(&KmakeVKd, T13, &KJsize_, T14);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:544
    SET_D_CELL_VAL(CREF(0), T15);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:546
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T16 = CONGRUENT_CALL2(i_, bi_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:546
    T20 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:546
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    T17 = CONGRUENT_CALL5(T20, (D) 1, sb_, bi_, T16);
    T18 = T17;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:537
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:536
  MV_SET_COUNT(0);
  return(T18);
}

static D KloopF181I (D stream_, D sb_) {
  D sbF2;
  D T3;
  D sbF4;
  D T5;
  D i_T, i_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D peek_elt_;
  D T14;
  D T15;
  D T16;
  D sbF17;
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
  D ni_;
  D T29;
  D T30;
  D T31;
  D nsb_;
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
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DBCHR T51;
  DWORD T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  D T58;
  D T59;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64;
  DWORD T65;
  DWORD T66;
  D T67;
  DWORD T68;
  D T69;
  D T70;
  D sbF71;
  D T72;
  D T73;
  D sbF74T, sbF74;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
  sbF74T = sb_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:588
    sbF74 = sbF74T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
    sbF71 = sbF74;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
    primitive_type_check(sbF71, &KLobjectGVKd);
    T72 = sbF71;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
    sbF2 = T72;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
    if (sbF2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
      T41 = GET_D_CELL_VAL(CREF(0));
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
      T42 = primitive_not(T41);
      T3 = T42;
    } else {
      T3 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:551
      primitive_type_check(sbF2, &KLbufferGYstreamsVio);
      sbF4 = sbF2;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:551
      sbF17 = sbF4;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:552
      T27 = sbF17;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:552
      T43 = SLOT_VALUE_INITD(T27, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:553
      T26 = sbF17;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:553
      T44 = SLOT_VALUE_INITD(T26, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:554
      T45 = primitive_cast_integer_as_raw(T43);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:554
      T46 = primitive_cast_integer_as_raw(T44);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:554
      T47 = primitive_machine_word_less_thanQ(T45,T46);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:554
      if (T47 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
        i_T = T43;
      L1: ;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          i_ = i_T;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          T48 = primitive_cast_integer_as_raw(i_);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          T49 = primitive_cast_integer_as_raw(T44);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          T50 = primitive_machine_word_less_thanQ(T48,T49);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          if (T50 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
            T40 = GET_D_CELL_VAL(CREF(0));
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
            if (T40 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:559
              T25 = sbF17;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:559
              T51 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T25, 10, T48);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:559
              T52 = primitive_machine_word_shift_left_signal_overflow(T51,2);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:559
              T53 = primitive_machine_word_logior(T52,1);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:559
              T54 = primitive_cast_raw_as_integer(T53);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
              T55 = primitive_idQ(T54,(D) 41);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
              if (T55 != &KPfalseVKi) {
                T7 = T55;
              } else {
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
                T56 = primitive_idQ(T54,(D) 53);
                T7 = T56;
              }
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
              if (T7 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:561
                T24 = sbF17;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:561
                get_teb()->function = CREF(2);
                Kextend_lineF184I(stream_, T24, i_, T43);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:562
                SET_D_CELL_VAL(CREF(0), &KPtrueVKi);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:563
                T57 = primitive_machine_word_add_signal_overflow(T48,4);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:563
                T58 = primitive_cast_raw_as_integer(T57);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:563
                T23 = sbF17;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:563
                SLOT_VALUE_SETTER(T58, T23, 0);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:564
                T59 = primitive_idQ(T54,(D) 53);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:564
                if (T59 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:567
                  T22 = sbF17;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:567
                  T60 = SLOT_VALUE_INITD(T22, 0);
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:567
                  ni_ = T60;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:568
                  T21 = sbF17;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:568
                  nsb_ = T21;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  T31 = ni_;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  T61 = primitive_cast_integer_as_raw(T31);
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  T62 = primitive_cast_integer_as_raw(T44);
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  T63 = primitive_machine_word_less_thanQ(T61,T62);
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  if (T63 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:570
                    CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
                    T8 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:570
                    nsb_ = T8;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:571
                    T36 = nsb_;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:571
                    if (T36 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:572
                      T38 = nsb_;
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:572
                      primitive_type_check(T38, &KLbufferGYstreamsVio);
                      T9 = T38;
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:572
                      sbF17 = T9;
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:573
                      T37 = nsb_;
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:573
                      T10 = CALL1(&Kbuffer_nextYstreamsVio, T37);
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:573
                      primitive_type_check(T10, &KLintegerGVKd);
                      T11 = T10;
                      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:573
                      ni_ = T11;
                    }
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:571
                  }
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:569
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                  T34 = nsb_;
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                  if (T34 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                    T30 = ni_;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                    T35 = nsb_;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                    T12 = CALL2(&Kbuffer_refYstreams_internalsVio, T35, T30);
                    peek_elt_ = T12;
                  } else {
                    peek_elt_ = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:576
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:577
                  T64 = primitive_idQ(peek_elt_,(D) 41);
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:577
                  if (T64 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    T29 = ni_;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    T65 = primitive_cast_integer_as_raw(T29);
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    T66 = primitive_machine_word_add_signal_overflow(T65,4);
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    T67 = primitive_cast_raw_as_integer(T66);
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    T33 = nsb_;
                    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:578
                    CALL2(&Kbuffer_next_setterYstreamsVio, T67, T33);
                  }
                  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:577
                }
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:564
              }
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:560
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
              T68 = primitive_machine_word_add_signal_overflow(T48,4);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
              T69 = primitive_cast_raw_as_integer(T68);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
              i_T = T69;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          }
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:558
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:584
        T39 = GET_D_CELL_VAL(CREF(0));
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:584
        if (T39 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:585
          T20 = sbF17;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:585
          get_teb()->function = CREF(2);
          Kextend_lineF184I(stream_, T20, T44, T43);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:586
          T19 = sbF17;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:586
          SLOT_VALUE_SETTER(T44, T19, 0);
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:584
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:588
        T18 = sbF17;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:588
        sbF74T = T18;
        goto L0;
        T14 = T73;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T5 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
        sbF74T = T5;
        goto L0;
        T14 = T70;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:554
      T16 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
      T15 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T16 = T15;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:550
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:555
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:549
  return(T16);
}

static D KloopF195I (D ssize_, D start_, D growQ_, D stream_, D sb_) {
  D sbF5;
  D T6;
  D sbF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D peek_elt_;
  D T13;
  D T14;
  D T15;
  D sbF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D ni_;
  D T26;
  D T27;
  D T28;
  D nsb_;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  DWORD T40;
  D T41;
  DBCHR T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  D T50;
  D T51;
  D T52;
  DWORD T53;
  DWORD T54;
  D T55;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  DWORD T69;
  DWORD T70;
  D T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  D T76;
  D T77;
  D T78;
  _KLsimple_object_vectorGVKd_4 T79 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T80_0;
  D T81;
  DWORD T82;
  DWORD T83;
  D T84;
  D T85;
  D sbF86;
  D T87;
  D T88;
  D sbF89T, sbF89;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:633
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
  sbF89T = sb_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:663
    sbF89 = sbF89T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
    sbF86 = sbF89;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
    primitive_type_check(sbF86, &KLobjectGVKd);
    T87 = sbF86;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:633
    sbF5 = T87;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
    if (sbF5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
      T35 = GET_D_CELL_VAL(CREF(0));
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
      T36 = primitive_not(T35);
      T6 = T36;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:635
      primitive_type_check(sbF5, &KLbufferGYstreamsVio);
      sbF7 = sbF5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:635
      sbF16 = sbF7;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:636
      T24 = sbF16;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:636
      T37 = SLOT_VALUE_INITD(T24, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:637
      T23 = sbF16;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:637
      T38 = SLOT_VALUE_INITD(T23, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:638
      T39 = primitive_cast_integer_as_raw(T37);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:638
      T40 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:638
      T41 = primitive_machine_word_less_thanQ(T39,T40);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:638
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T22 = sbF16;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T43 = primitive_cast_integer_as_raw(T37);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T42 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T22, 10, T43);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T44 = primitive_machine_word_shift_left_signal_overflow(T42,2);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T45 = primitive_machine_word_logior(T44,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:641
        T46 = primitive_cast_raw_as_integer(T45);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:642
        T47 = primitive_cast_integer_as_raw(T37);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:642
        T48 = primitive_machine_word_add_signal_overflow(T47,4);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:642
        T49 = primitive_cast_raw_as_integer(T48);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:642
        T21 = sbF16;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:642
        SLOT_VALUE_SETTER(T49, T21, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:643
        T50 = primitive_idQ(T46,(D) 41);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:643
        if (T50 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:644
          SET_D_CELL_VAL(CREF(0), &KPtrueVKi);
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:645
          T51 = primitive_idQ(T46,(D) 53);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:643
          if (T51 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:646
            SET_D_CELL_VAL(CREF(0), &KPtrueVKi);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:647
            T20 = sbF16;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:647
            T52 = SLOT_VALUE_INITD(T20, 0);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:646
            ni_ = T52;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:648
            T19 = sbF16;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:648
            nsb_ = T19;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            T28 = ni_;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            T53 = primitive_cast_integer_as_raw(T28);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            T54 = primitive_cast_integer_as_raw(T38);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            T55 = primitive_machine_word_less_thanQ(T53,T54);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            if (T55 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:650
              CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
              T9 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:650
              nsb_ = T9;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:651
              T33 = nsb_;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:651
              if (T33 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:652
                T34 = nsb_;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:652
                primitive_type_check(T34, &KLbufferGYstreamsVio);
                T10 = T34;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:652
                sbF16 = T10;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:653
                T18 = sbF16;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:653
                T56 = SLOT_VALUE_INITD(T18, 0);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:653
                ni_ = T56;
              }
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:651
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:649
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
            T31 = nsb_;
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
            if (T31 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
              T27 = ni_;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
              T32 = nsb_;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
              T11 = CALL2(&Kbuffer_refYstreams_internalsVio, T32, T27);
              peek_elt_ = T11;
            } else {
              peek_elt_ = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:656
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:657
            T57 = primitive_idQ(peek_elt_,(D) 41);
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:657
            if (T57 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              T26 = ni_;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              T58 = primitive_cast_integer_as_raw(T26);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              T59 = primitive_machine_word_add_signal_overflow(T58,4);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              T60 = primitive_cast_raw_as_integer(T59);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              T30 = nsb_;
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:658
              CALL2(&Kbuffer_next_setterYstreamsVio, T60, T30);
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:657
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
            if (growQ_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
              T65 = GET_D_CELL_VAL(CREF(2));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
              T69 = primitive_cast_integer_as_raw(T65);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
              T70 = primitive_cast_integer_as_raw(ssize_);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
              T71 = primitive_machine_word_less_thanQ(T69,T70);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
              T68 = primitive_not(T71);
              T61 = T68;
            } else {
              T61 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
            if (T61 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:610
              T67 = GET_D_CELL_VAL(CREF(1));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:610
              if (T67 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T72 = primitive_cast_integer_as_raw(start_);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T73 = primitive_cast_integer_as_raw(ssize_);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T74 = primitive_machine_word_logxor(T73,1);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T75 = primitive_machine_word_subtract_signal_overflow(T72,T74);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T76 = primitive_cast_raw_as_integer(T75);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                T78 = primitive_machine_word_less_thanQ(T75,1);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                if (T78 != &KPfalseVKi) {
                  T77 = (D) 1;
                } else {
                  T77 = T76;
                }
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:612
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:611
                T79.vector_element_[0] = &KJsize_;
                T79.vector_element_[1] = T77;
                T79.vector_element_[2] = &KJfill_;
                T79.vector_element_[3] = C(' ');
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:611
                T80_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &T79);
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:611
                T81 = T80_0;
                // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:611
                SET_D_CELL_VAL(CREF(1), T81);
              }
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:610
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:615
              T66 = GET_D_CELL_VAL(CREF(1));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:615
              CALL2(&KaddXVKd, T66, T46);
            } else {
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:617
              T62 = GET_D_CELL_VAL(CREF(3));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:617
              T64 = GET_D_CELL_VAL(CREF(2));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:617
              CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
              CONGRUENT_CALL3(T46, T62, T64);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:618
              T63 = GET_D_CELL_VAL(CREF(2));
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:618
              T82 = primitive_cast_integer_as_raw(T63);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:618
              T83 = primitive_machine_word_add_signal_overflow(T82,4);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:618
              T84 = primitive_cast_raw_as_integer(T83);
              // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:618
              SET_D_CELL_VAL(CREF(2), T84);
            }
            // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:609
          }
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:643
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:643
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:663
        T17 = sbF16;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:663
        sbF89T = T17;
        goto L0;
        T13 = T88;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T8 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
        sbF89T = T8;
        goto L0;
        T13 = T85;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:638
      T15 = T13;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
      T14 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T15 = T14;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:634
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:639
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:633
  return(T15);
}

static D Kwrite_eltsF207I (D implicit_argument_, D stream_, D elts_, D i_, D e_) {
  D T6;
  D T7;
  D bi_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  D T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D T41;
  D T42_0;
  D T43;
  D T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T52;
  D T53;
  D iF54;
  D sbF55;
  D T56;
  D iF57T, iF57;
  D sbF58T, sbF58;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:758
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
  iF57T = i_;
  sbF58T = implicit_argument_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
    iF57 = iF57T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
    sbF58 = sbF58T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
    iF54 = iF57;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
    sbF55 = sbF58;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
    if (sbF55 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
      T17 = primitive_cast_integer_as_raw(iF54);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
      T18 = primitive_cast_integer_as_raw(e_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      T6 = T19;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:778
      T7 = CALL1(&Kbuffer_nextYstreamsVio, sbF55);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:778
      primitive_type_check(T7, &KLintegerGVKd);
      bi_ = T7;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:779
      T9 = CALL1(&Kbuffer_sizeYstreamsVioMM0, sbF55);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:780
      T20 = primitive_cast_integer_as_raw(bi_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:780
      T21 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:780
      T22 = primitive_machine_word_less_thanQ(T20,T21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:780
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T23 = primitive_cast_integer_as_raw(T9);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T24 = primitive_cast_integer_as_raw(bi_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T25 = primitive_machine_word_logxor(T24,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T26 = primitive_machine_word_subtract_signal_overflow(T23,T25);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T27 = primitive_cast_integer_as_raw(e_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T28 = primitive_cast_integer_as_raw(iF54);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T29 = primitive_machine_word_logxor(T28,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T30 = primitive_machine_word_subtract_signal_overflow(T27,T29);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        T32 = primitive_machine_word_less_thanQ(T26,T30);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        if (T32 != &KPfalseVKi) {
          T31 = T26;
        } else {
          T31 = T30;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:783
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        T37 = primitive_cast_raw_as_integer(T31);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:784
        CALL6(&Kcoerce_from_sequenceYstreams_internalsVio, stream_, sbF55, bi_, elts_, iF54, T37);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:785
        CALL2(&Kbuffer_dirtyQ_setterYstreamsVio, &KPtrueVKi, sbF55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        T33 = primitive_cast_integer_as_raw(bi_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        T34 = primitive_machine_word_logxor(T31,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        T35 = primitive_machine_word_add_signal_overflow(T33,T34);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        T36 = primitive_cast_raw_as_integer(T35);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:786
        CALL2(&Kbuffer_next_setterYstreamsVio, T36, sbF55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T38 = primitive_cast_integer_as_raw(bi_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T39 = primitive_machine_word_logxor(T31,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T40 = primitive_machine_word_add_signal_overflow(T38,T39);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T41 = primitive_cast_raw_as_integer(T40);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T11 = CALL1(&Kbuffer_endYstreamsVio, sbF55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T42_0 = CONGRUENT_CALL2(T11, T41);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        T43 = T42_0;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        if (T43 != &KPfalseVKi) {
          T44 = T41;
        } else {
          T44 = T11;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:787
        CALL2(&Kbuffer_end_setterYstreamsVio, T44, sbF55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
        T45 = primitive_machine_word_logxor(T31,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
        T46 = primitive_machine_word_add_signal_overflow(T28,T45);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
        T47 = primitive_cast_raw_as_integer(T46);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:788
        iF57T = T47;
        sbF58T = sbF55;
        goto L0;
        T12 = T56;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T10 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
        iF57T = iF57;
        sbF58T = T10;
        goto L0;
        T12 = T53;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:780
      T16 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
      T48 = primitive_cast_integer_as_raw(iF54);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
      T49 = primitive_cast_integer_as_raw(e_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
      T50 = primitive_machine_word_less_thanQ(T48,T49);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:792
        T51.vector_element_[0] = IKJstream_;
        T51.vector_element_[1] = stream_;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:792
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T13 = CONGRUENT_CALL2(&KLend_of_stream_errorGYstreams_protocolVcommon_dylan, &T51);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:792
        T52 = KsignalVKdMM0I(T13, &KPempty_vectorVKi);
        T15 = T52;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
        T14 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:791
      T16 = T15;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:760
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:781
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:758
  return(T16);
}

D Kforce_output_buffersYstreamsVioMM0I (D stream_) {
  D sb_;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:356
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:358
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:359
  if (sb_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:360
    CONGRUENT_CALL_PROLOG(&Kdo_force_output_buffersYstreamsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:359
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:359
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:356
  MV_SET_COUNT(0);
  return(T5);
}

static D KloopF231I (D n_, D elt_, D stream_, D i_, D sb_) {
  D sbF5;
  D T6;
  D sbF7;
  D T8;
  D T9;
  D T10;
  D rep_;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  _KLsimple_object_vectorGVKd_4 T36 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52;
  D T53;
  D iF54;
  D T55;
  D sbF56;
  D T57;
  D T58;
  D iF59T, iF59;
  D sbF60T, sbF60;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:809
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
  iF59T = i_;
  sbF60T = sb_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
    iF59 = iF59T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
    sbF60 = sbF60T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
    iF54 = iF59;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
    primitive_type_check(iF54, &KLintegerGVKd);
    T55 = iF54;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
    sbF56 = sbF60;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
    primitive_type_check(sbF56, &KLobjectGVKd);
    T57 = sbF56;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:809
    sbF5 = T57;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
    if (sbF5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
      T15 = primitive_cast_integer_as_raw(T55);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
      T16 = primitive_cast_integer_as_raw(n_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
      T17 = primitive_machine_word_less_thanQ(T15,T16);
      T6 = T17;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:811
      primitive_type_check(sbF5, &KLbufferGYstreamsVio);
      sbF7 = sbF5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:812
      T18 = SLOT_VALUE_INITD(sbF7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:813
      T19 = SLOT_VALUE_INITD(sbF7, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:814
      T20 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:814
      T21 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:814
      T22 = primitive_machine_word_less_thanQ(T20,T21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:814
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T23 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T24 = primitive_machine_word_logxor(T23,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T25 = primitive_machine_word_subtract_signal_overflow(T21,T24);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T26 = primitive_cast_integer_as_raw(n_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T27 = primitive_cast_integer_as_raw(T55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T28 = primitive_machine_word_logxor(T27,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T29 = primitive_machine_word_subtract_signal_overflow(T26,T28);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        T31 = primitive_machine_word_less_thanQ(T25,T29);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        if (T31 != &KPfalseVKi) {
          T30 = T25;
        } else {
          T30 = T29;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:817
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:818
        T9 = CALL1(&Kfrom_element_mapperYstreams_internalsVio, stream_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:818
        primitive_type_check(T9, &KLfunctionGVKd);
        T10 = T9;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:818
        rep_ = CALL1(T10, elt_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        T32 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        T33 = primitive_machine_word_logxor(T30,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        T34 = primitive_machine_word_add_signal_overflow(T32,T33);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        T35 = primitive_cast_raw_as_integer(T34);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        T36.vector_element_[0] = &KJstart_;
        T36.vector_element_[1] = T18;
        T36.vector_element_[2] = &KJend_;
        T36.vector_element_[3] = T35;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:819
        ENGINE_NODE_CALL_PROLOG(&Kbuffer_fillYstreamsVio, &K232, 3);
        ENGINE_NODE_CALL3(&K232, sbF7, rep_, &T36);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:820
        SLOT_VALUE_SETTER(&KPtrueVKi, sbF7, 3);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:821
        T37 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:821
        T38 = primitive_machine_word_logxor(T30,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:821
        T39 = primitive_machine_word_add_signal_overflow(T37,T38);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:821
        T40 = primitive_cast_raw_as_integer(T39);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:821
        SLOT_VALUE_SETTER(T40, sbF7, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T41 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T42 = primitive_machine_word_logxor(T30,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T43 = primitive_machine_word_add_signal_overflow(T41,T42);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T44 = primitive_cast_raw_as_integer(T43);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T45 = SLOT_VALUE_INITD(sbF7, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T47 = primitive_cast_integer_as_raw(T45);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        T48 = primitive_machine_word_less_thanQ(T47,T43);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        if (T48 != &KPfalseVKi) {
          T46 = T44;
        } else {
          T46 = T45;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:822
        SLOT_VALUE_SETTER(T46, sbF7, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
        T49 = primitive_cast_integer_as_raw(T55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
        T50 = primitive_machine_word_logxor(T30,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
        T51 = primitive_machine_word_add_signal_overflow(T49,T50);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
        T52 = primitive_cast_raw_as_integer(T51);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:823
        iF59T = T52;
        sbF60T = sbF7;
        goto L0;
        T12 = T58;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T8 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
        iF59T = iF59;
        sbF60T = T8;
        goto L0;
        T12 = T53;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:814
      T14 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
      T13 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:810
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:815
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:809
  return(T14);
}

D Krelease_output_bufferYstreamsVioI (D stream_) {
  D T1;
  D T2;
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:204
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:206
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:206
  if (T2 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:206
    T3.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:206
    KerrorVKdMM1I(&K237, &T3);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:206
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:207
  CONGRUENT_CALL_PROLOG(&Kdo_release_output_bufferYstreamsVio, 1);
  T1 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:204
  MV_SET_COUNT(0);
  return(T1);
}

D Knext_output_bufferYstreamsVioI (D stream_, D Urest_, D bytes_) {
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:194
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:196
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T5 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:196
  if (T5 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:196
    T6.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:196
    KerrorVKdMM1I(&K237, &T6);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:196
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:197
  T7.vector_element_[0] = IKJbytes_;
  T7.vector_element_[1] = bytes_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:197
  CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T7);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:194
  MV_SET_COUNT(0);
  return(T4);
}

D Kget_output_bufferYstreamsVioI (D stream_, D Urest_, D bytes_) {
  D sb_;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:172
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:175
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:176
  if (sb_ != &KPfalseVKi) {
    T10 = sb_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T11 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T12 = SLOT_VALUE_INITD(T10, 9);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T13 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T14 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T15 = primitive_machine_word_less_thanQ(T13,T14);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:181
      T6_0 = T10;
      T7_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:179
      T16.vector_element_[0] = IKJbytes_;
      T16.vector_element_[1] = bytes_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:179
      CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
      T5_0 = CONGRUENT_CALL2(stream_, &T16);
      T7_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:178
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:184
    T17.vector_element_[0] = IKJbytes_;
    T17.vector_element_[1] = bytes_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:184
    CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
    T8_0 = CONGRUENT_CALL2(stream_, &T17);
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:176
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:172
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kdo_input_available_at_sourceQYstreamsVioMM0I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:149
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:151
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:149
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kinput_available_at_sourceQYstreamsVioI (D stream_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:139
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:142
  CONGRUENT_CALL_PROLOG(&Kdo_input_available_at_sourceQYstreamsVio, 1);
  T1_0 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:139
  MV_SET_COUNT(1);
  return(T1_0);
}

D Krelease_input_bufferYstreamsVioI (D stream_) {
  D T1;
  D T2;
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:124
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:126
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:126
  if (T2 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:126
    T3.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:126
    KerrorVKdMM1I(&K255, &T3);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:126
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:127
  CONGRUENT_CALL_PROLOG(&Kdo_release_input_bufferYstreamsVio, 1);
  T1 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:124
  MV_SET_COUNT(0);
  return(T1);
}

D Knext_input_bufferYstreamsVioI (D stream_, D Urest_, D waitQ_, D bytes_) {
  D T5_0;
  D T6;
  _KLsimple_object_vectorGVKd_1 T7 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:109
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:112
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T6 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:112
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:112
    T7.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:112
    KerrorVKdMM1I(&K255, &T7);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:112
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:113
  T8.vector_element_[0] = &KJwaitQ_;
  T8.vector_element_[1] = waitQ_;
  T8.vector_element_[2] = IKJbytes_;
  T8.vector_element_[3] = bytes_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:113
  CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
  T5_0 = CONGRUENT_CALL2(stream_, &T8);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:109
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kget_input_bufferYstreamsVioI (D stream_, D Urest_, D waitQ_, D bytes_) {
  D sb_;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:86
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:89
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:90
  if (sb_ != &KPfalseVKi) {
    T11 = sb_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T13 = SLOT_VALUE_INITD(T11, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T14 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T15 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T16 = primitive_machine_word_less_thanQ(T14,T15);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:96
      T7_0 = T11;
      T8_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:93
      T17.vector_element_[0] = &KJwaitQ_;
      T17.vector_element_[1] = waitQ_;
      T17.vector_element_[2] = IKJbytes_;
      T17.vector_element_[3] = bytes_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:93
      CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
      T6_0 = CONGRUENT_CALL2(stream_, &T17);
      T8_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:92
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:99
    T18.vector_element_[0] = &KJwaitQ_;
    T18.vector_element_[1] = waitQ_;
    T18.vector_element_[2] = IKJbytes_;
    T18.vector_element_[3] = bytes_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:99
    CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
    T9_0 = CONGRUENT_CALL2(stream_, &T18);
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:90
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:86
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kensure_output_bufferYstreams_internalsVioI (D stream_) {
  D T1;
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:77
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:78
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  T1 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:78
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:78
    T2 = &KPfalseVKi;
    T3 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:79
    T4.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:79
    T5 = KerrorVKdMM1I(&K237, &T4);
    T3 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:78
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:77
  MV_SET_COUNT(0);
  return(T3);
}

D Kensure_input_bufferYstreams_internalsVioI (D stream_) {
  D T1;
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T5;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:71
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:72
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  T1 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:72
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:72
    T2 = &KPfalseVKi;
    T3 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:73
    T4.vector_element_[0] = stream_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:73
    T5 = KerrorVKdMM1I(&K255, &T4);
    T3 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:72
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:71
  MV_SET_COUNT(0);
  return(T3);
}

D KwriteYstreams_protocolVcommon_dylanMioM1I (D stream_, D elements_, D Urest_, D Ustart_, D Uend_) {
  D UstartF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D sb_;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:724
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:724
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF6 = Ustart_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T14 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T15 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T16 = SLOT_VALUE_INITD(T14, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T17 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T18 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      if (T19 != &KPfalseVKi) {
        T23 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
        T20.vector_element_[0] = IKJbytes_;
        T20.vector_element_[1] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T12_0 = CONGRUENT_CALL2(stream_, &T20);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
        T22 = T12_0;
        T23 = T22;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T25 = T23;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T21.vector_element_[0] = IKJbytes_;
      T21.vector_element_[1] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
      T13_0 = CONGRUENT_CALL2(stream_, &T21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
      T24 = T13_0;
      T25 = T24;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:728
    if (Uend_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:728
      primitive_type_check(Uend_, &KLintegerGVKd);
      T26 = Uend_;
      T9 = T26;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:728
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T8 = CONGRUENT_CALL1(elements_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:728
      primitive_type_check(T8, &KLintegerGVKd);
      T27 = T8;
      T9 = T27;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:728
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:729
    T10 = KloopF314I(T9, elements_, stream_, UstartF6, T25);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
    FALL_THROUGH_UNWIND(T10);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:727
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:724
  MV_SET_COUNT(0);
  return(T10);
}

D Kwrite_elementYstreams_protocolVcommon_dylanMioM1I (D stream_, D elt_) {
  D T3;
  D T4;
  D sb_;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:712
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
  ENTER_UNWIND_FRAME(T3);
  if (!nlx_setjmp(FRAME_DEST(T3))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T8 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T9 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T10 = SLOT_VALUE_INITD(T8, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T11 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T12 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T13 = primitive_machine_word_less_thanQ(T11,T12);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      if (T13 != &KPfalseVKi) {
        T17 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
        T14.vector_element_[0] = IKJbytes_;
        T14.vector_element_[1] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T6_0 = CONGRUENT_CALL2(stream_, &T14);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
        T16 = T6_0;
        T17 = T16;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T19 = T17;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T15.vector_element_[0] = IKJbytes_;
      T15.vector_element_[1] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      CONGRUENT_CALL_PROLOG(&Kdo_get_output_bufferYstreamsVio, 2);
      T7_0 = CONGRUENT_CALL2(stream_, &T15);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      T18 = T7_0;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
      primitive_type_check(T18, &KLbufferGYstreamsVio);
      T20 = T18;
      T19 = T20;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:716
    T21 = SLOT_VALUE_INITD(T19, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:717
    ENGINE_NODE_CALL_PROLOG(&Kcoerce_from_elementYstreams_internalsVio, &K310, 4);
    ENGINE_NODE_CALL4(&K310, stream_, T19, T21, elt_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:718
    T22 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:718
    T23 = primitive_machine_word_add_signal_overflow(T22,4);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:718
    T24 = primitive_cast_raw_as_integer(T23);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:718
    SLOT_VALUE_SETTER(T24, T19, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T25 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T26 = primitive_machine_word_add_signal_overflow(T25,4);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T27 = primitive_cast_raw_as_integer(T26);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T28 = SLOT_VALUE_INITD(T19, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    T31 = primitive_machine_word_less_thanQ(T30,T26);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    if (T31 != &KPfalseVKi) {
      T29 = T27;
    } else {
      T29 = T28;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:719
    SLOT_VALUE_SETTER(T29, T19, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:720
    SLOT_VALUE_SETTER(&KPtrueVKi, T19, 3);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:720
    T4 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
    FALL_THROUGH_UNWIND(T4);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:714
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:712
  MV_SET_COUNT(0);
  return(T4);
}

D Kdiscard_outputYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D sb_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:505
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:507
  CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:508
  if (sb_ != &KPfalseVKi) {
    T6 = sb_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:509
    T7 = SLOT_VALUE_INITD(T6, 4);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:510
    SLOT_VALUE_SETTER(T7, T6, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:511
    SLOT_VALUE_SETTER(T7, T6, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:511
    T3 = &KPfalseVKi;
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:508
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:508
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:505
  MV_SET_COUNT(0);
  return(T5);
}

D Kdiscard_inputYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D sb_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:480
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:482
  CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
  sb_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:483
  if (sb_ != &KPfalseVKi) {
    T6 = sb_;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:484
    T7 = SLOT_VALUE_INITD(T6, 4);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:485
    SLOT_VALUE_SETTER(T7, T6, 0);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:486
    SLOT_VALUE_SETTER(T7, T6, 1);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:486
    T3 = &KPfalseVKi;
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:483
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:483
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:480
  MV_SET_COUNT(0);
  return(T5);
}

D Kread_intoXYstreams_protocolVcommon_dylanMioM1I (D stream_, D n_, D seq_, D Urest_, D start_, D on_end_of_stream_) {
  D startF7;
  D T8;
  D on_end_of_streamF9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D nF14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  D T21;
  D sb_;
  D T23_0;
  D T24_0;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T32 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  nF14 = MAKE_D_CELL(n_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  primitive_type_check(start_, &KLintegerGVKd);
  startF7 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  T19 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
    T8 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF9 = T8;
  } else {
    on_end_of_streamF9 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:444
  T18 = GET_D_CELL_VAL(nF14);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:444
  T20 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:444
  T21 = primitive_machine_word_less_thanQ(1,T20);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:444
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
    ENTER_UNWIND_FRAME(T10);
    if (!nlx_setjmp(FRAME_DEST(T10))) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
      CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
      CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      sb_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
      if (sb_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T25 = sb_;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T26 = SLOT_VALUE_INITD(T25, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T27 = SLOT_VALUE_INITD(T25, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T28 = primitive_cast_integer_as_raw(T26);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T29 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T30 = primitive_machine_word_less_thanQ(T28,T29);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        if (T30 != &KPfalseVKi) {
          T34 = T25;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
          T31.vector_element_[0] = &KJwaitQ_;
          T31.vector_element_[1] = &KPtrueVKi;
          T31.vector_element_[2] = IKJbytes_;
          T31.vector_element_[3] = (D) 5;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
          CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
          T23_0 = CONGRUENT_CALL2(stream_, &T31);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
          T33 = T23_0;
          T34 = T33;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T36 = T34;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T32.vector_element_[0] = &KJwaitQ_;
        T32.vector_element_[1] = &KPtrueVKi;
        T32.vector_element_[2] = IKJbytes_;
        T32.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
        T24_0 = CONGRUENT_CALL2(stream_, &T32);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
        T35 = T24_0;
        T36 = T35;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T17 = GET_D_CELL_VAL(nF14);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T37 = primitive_cast_integer_as_raw(startF7);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T38 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T39 = primitive_machine_word_logxor(T38,1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T40 = primitive_machine_word_add_signal_overflow(T37,T39);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:446
      T41 = primitive_cast_raw_as_integer(T40);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T11 = Tmulti_buffer_bytesTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T16 = GET_D_CELL_VAL(nF14);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T42 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T43 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T44 = primitive_machine_word_logxor(T43,1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T45 = primitive_machine_word_add_signal_overflow(T42,T44);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      T46 = primitive_cast_raw_as_integer(T45);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:448
      Tmulti_buffer_bytesTYstreams_internalsVio = T46;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:449
      T12 = MAKE_CLOSURE_INITD(&KloopF300, 1, nF14);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:449
      get_teb()->function = T12;
      KloopF300I(T41, on_end_of_streamF9, startF7, seq_, stream_, startF7, T36);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
    CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:445
    CONTINUE_UNWIND();
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:444
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:476
  T15 = GET_D_CELL_VAL(nF14);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:476
  T13_0 = T15;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  MV_SET_COUNT(1);
  return(T13_0);
}

D KreadYstreams_protocolVcommon_dylanMioM1I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D T7;
  D elements_;
  D T9_0;
  D T10;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  T10 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:431
  CONGRUENT_CALL_PROLOG(&Kstream_sequence_classYstreamsVio, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:431
  elements_ = CALL3(&KmakeVKd, T7, &KJsize_, n_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:432
  CALL5(&Kread_intoXYstreams_protocolVcommon_dylan, stream_, n_, elements_, IKJon_end_of_stream_, on_end_of_streamF6);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:433
  T9_0 = elements_;
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  MV_SET_COUNT(1);
  return(T9_0);
}

D KpeekYstreams_protocolVcommon_dylanMioM1I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D sb_;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  T10 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T14 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T15 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T16 = SLOT_VALUE_INITD(T14, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T17 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T18 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      if (T19 != &KPfalseVKi) {
        T23 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
        T20.vector_element_[0] = &KJwaitQ_;
        T20.vector_element_[1] = &KPtrueVKi;
        T20.vector_element_[2] = IKJbytes_;
        T20.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T12_0 = CONGRUENT_CALL2(stream_, &T20);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
        T22 = T12_0;
        T23 = T22;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T25 = T23;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T21.vector_element_[0] = &KJwaitQ_;
      T21.vector_element_[1] = &KPtrueVKi;
      T21.vector_element_[2] = IKJbytes_;
      T21.vector_element_[3] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
      T13_0 = CONGRUENT_CALL2(stream_, &T21);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
      T24 = T13_0;
      T25 = T24;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:418
    if (T25 != &KPfalseVKi) {
      T9 = T25;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:420
      T26 = SLOT_VALUE_INITD(T9, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:420
      ENGINE_NODE_CALL_PROLOG(&Kcoerce_to_elementYstreams_internalsVio, &K296, 3);
      T27_0 = ENGINE_NODE_CALL3(&K296, stream_, T9, T26);
      T8_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:422
      T7_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:418
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
    FALL_THROUGH_UNWIND(T8_0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:417
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kread_elementYstreams_protocolVcommon_dylanMioM1I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D sb_;
  D T13_0;
  D T14_0;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T22 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D elt_;
  DWORD T29;
  DWORD T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  T11 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
    CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
    sb_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
    if (sb_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T15 = sb_;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T16 = SLOT_VALUE_INITD(T15, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T17 = SLOT_VALUE_INITD(T15, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T18 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T19 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T20 = primitive_machine_word_less_thanQ(T18,T19);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      if (T20 != &KPfalseVKi) {
        T24 = T15;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
        T21.vector_element_[0] = &KJwaitQ_;
        T21.vector_element_[1] = &KPtrueVKi;
        T21.vector_element_[2] = IKJbytes_;
        T21.vector_element_[3] = (D) 5;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T13_0 = CONGRUENT_CALL2(stream_, &T21);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
        T23 = T13_0;
        T24 = T23;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T26 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T22.vector_element_[0] = &KJwaitQ_;
      T22.vector_element_[1] = &KPtrueVKi;
      T22.vector_element_[2] = IKJbytes_;
      T22.vector_element_[3] = (D) 5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      CONGRUENT_CALL_PROLOG(&Kdo_get_input_bufferYstreamsVio, 2);
      T14_0 = CONGRUENT_CALL2(stream_, &T22);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
      T25 = T14_0;
      T26 = T25;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:401
    if (T26 != &KPfalseVKi) {
      T10 = T26;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:403
      T27 = SLOT_VALUE_INITD(T10, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:404
      ENGINE_NODE_CALL_PROLOG(&Kcoerce_to_elementYstreams_internalsVio, &K294, 3);
      elt_ = ENGINE_NODE_CALL3(&K294, stream_, T10, T27);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:405
      T29 = primitive_cast_integer_as_raw(T27);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:405
      T30 = primitive_machine_word_add_signal_overflow(T29,4);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:405
      T31 = primitive_cast_raw_as_integer(T30);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:405
      SLOT_VALUE_SETTER(T31, T10, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:406
      T7_0 = elt_;
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:408
      T8_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:401
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
    FALL_THROUGH_UNWIND(T9_0);
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:400
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  MV_SET_COUNT(1);
  return(T9_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM2I (D stream_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:269
  T8 = primitive_copy_vector(Urest_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:270
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T3 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:270
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
    T9 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
      KerrorVKdMM1I(&K292, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
      T10 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
      T11 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
      MEP_CALL_PROLOG(T10, T11, 2);
      MEP_CALL2(T10, stream_, T8);
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:271
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:275
    CONGRUENT_CALL_PROLOG(&Kstream_input_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:276
    CONGRUENT_CALL_PROLOG(&Kstream_output_buffer_setterYstreams_internalsVio, 2);
    CONGRUENT_CALL2(&KPfalseVKi, stream_);
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:276
    T4 = &KPfalseVKi;
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:270
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:270
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:269
  MV_SET_COUNT(0);
  return(T6);
}

static D KloopF300I (D implicit_argument_, D on_end_of_stream_, D start_, D seq_, D stream_, D i_, D sb_) {
  D sbF7;
  D T8;
  D sbF9;
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
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  D T57;
  D T58;
  _KLsimple_object_vectorGVKd_6 T59 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T60;
  D T61;
  D iF62;
  D T63;
  D sbF64;
  D T65;
  D T66;
  D iF67T, iF67;
  D sbF68T, sbF68;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:449
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
  iF67T = i_;
  sbF68T = sb_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
    iF67 = iF67T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
    sbF68 = sbF68T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
    iF62 = iF67;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
    primitive_type_check(iF62, &KLintegerGVKd);
    T63 = iF62;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
    sbF64 = sbF68;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
    primitive_type_check(sbF64, &KLobjectGVKd);
    T65 = sbF64;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:449
    sbF7 = T65;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
    if (sbF7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
      T20 = primitive_cast_integer_as_raw(T63);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
      T21 = primitive_cast_integer_as_raw(implicit_argument_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
      T22 = primitive_machine_word_less_thanQ(T20,T21);
      T8 = T22;
    } else {
      T8 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:451
      primitive_type_check(sbF7, &KLbufferGYstreamsVio);
      sbF9 = sbF7;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:452
      T23 = SLOT_VALUE_INITD(sbF9, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:453
      T24 = SLOT_VALUE_INITD(sbF9, 1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:454
      T25 = primitive_cast_integer_as_raw(T23);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:454
      T26 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:454
      T27 = primitive_machine_word_less_thanQ(T25,T26);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:454
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T28 = primitive_cast_integer_as_raw(T24);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T29 = primitive_cast_integer_as_raw(T23);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T30 = primitive_machine_word_logxor(T29,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T31 = primitive_machine_word_subtract_signal_overflow(T28,T30);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T32 = primitive_cast_integer_as_raw(implicit_argument_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T33 = primitive_cast_integer_as_raw(T63);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T34 = primitive_machine_word_logxor(T33,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T35 = primitive_machine_word_subtract_signal_overflow(T32,T34);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        T37 = primitive_machine_word_less_thanQ(T31,T35);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        if (T37 != &KPfalseVKi) {
          T36 = T31;
        } else {
          T36 = T35;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:457
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        T42 = primitive_cast_raw_as_integer(T36);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:458
        ENGINE_NODE_CALL_PROLOG(&Kcoerce_to_sequenceYstreams_internalsVio, &K301, 6);
        ENGINE_NODE_CALL6(&K301, stream_, sbF9, T23, seq_, T63, T42);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        T38 = primitive_cast_integer_as_raw(T23);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        T39 = primitive_machine_word_logxor(T36,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        T40 = primitive_machine_word_add_signal_overflow(T38,T39);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        T41 = primitive_cast_raw_as_integer(T40);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:459
        SLOT_VALUE_SETTER(T41, sbF9, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
        T43 = primitive_cast_integer_as_raw(T63);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
        T44 = primitive_machine_word_logxor(T36,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
        T45 = primitive_machine_word_add_signal_overflow(T43,T44);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
        T46 = primitive_cast_raw_as_integer(T45);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:460
        iF67T = T46;
        sbF68T = sbF9;
        goto L0;
        T11 = T66;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
        CONGRUENT_CALL_PROLOG(&Kdo_next_input_bufferYstreamsVio, 2);
        T10 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
        iF67T = iF67;
        sbF68T = T10;
        goto L0;
        T11 = T61;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:454
      T17 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T47 = primitive_cast_integer_as_raw(T63);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T48 = primitive_cast_integer_as_raw(start_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T49 = primitive_machine_word_logxor(T48,1);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T50 = primitive_machine_word_subtract_signal_overflow(T47,T49);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T19 = GET_D_CELL_VAL(CREF(0));
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T51 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T52 = primitive_machine_word_less_thanQ(T50,T51);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      if (T52 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        T53 = primitive_cast_integer_as_raw(T63);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        T54 = primitive_cast_integer_as_raw(start_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        T55 = primitive_machine_word_logxor(T54,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        T56 = primitive_machine_word_subtract_signal_overflow(T53,T55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        T57 = primitive_cast_raw_as_integer(T56);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:465
        SET_D_CELL_VAL(CREF(0), T57);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:466
        T58 = primitive_idQ(on_end_of_stream_,DunsuppliedYcommon_extensionsVcommon_dylan);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:466
        if (T58 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:467
          T18 = GET_D_CELL_VAL(CREF(0));
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:467
          T59.vector_element_[0] = IKJstream_;
          T59.vector_element_[1] = stream_;
          T59.vector_element_[2] = &KJcount_;
          T59.vector_element_[3] = T18;
          T59.vector_element_[4] = IKJsequence_;
          T59.vector_element_[5] = seq_;
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:467
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T12 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T59);
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:467
          T60 = KsignalVKdMM0I(T12, &KPempty_vectorVKi);
          T14 = T60;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:466
          T13 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T14 = T13;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:466
        T16 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
        T15 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:464
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:450
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:455
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:449
  return(T17);
}

static D KloopF314I (D implicit_argument_, D elements_, D stream_, D i_, D sb_) {
  D sbF5;
  D T6;
  D sbF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T52;
  D T53;
  D iF54;
  D T55;
  D sbF56;
  D T57;
  D T58;
  D iF59T, iF59;
  D sbF60T, sbF60;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:729
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
  iF59T = i_;
  sbF60T = sb_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
    iF59 = iF59T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
    sbF60 = sbF60T;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
    iF54 = iF59;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
    primitive_type_check(iF54, &KLintegerGVKd);
    T55 = iF54;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
    sbF56 = sbF60;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
    primitive_type_check(sbF56, &KLobjectGVKd);
    T57 = sbF56;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:729
    sbF5 = T57;
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
    if (sbF5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
      T14 = primitive_cast_integer_as_raw(T55);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
      T15 = primitive_cast_integer_as_raw(implicit_argument_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
      T16 = primitive_machine_word_less_thanQ(T14,T15);
      T6 = T16;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:731
      primitive_type_check(sbF5, &KLbufferGYstreamsVio);
      sbF7 = sbF5;
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:732
      T17 = SLOT_VALUE_INITD(sbF7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:733
      T18 = SLOT_VALUE_INITD(sbF7, 9);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:734
      T19 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:734
      T20 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:734
      T21 = primitive_machine_word_less_thanQ(T19,T20);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:734
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T22 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T23 = primitive_machine_word_logxor(T22,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T24 = primitive_machine_word_subtract_signal_overflow(T20,T23);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T25 = primitive_cast_integer_as_raw(implicit_argument_);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T26 = primitive_cast_integer_as_raw(T55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T27 = primitive_machine_word_logxor(T26,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T28 = primitive_machine_word_subtract_signal_overflow(T25,T27);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        T30 = primitive_machine_word_less_thanQ(T24,T28);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        if (T30 != &KPfalseVKi) {
          T29 = T24;
        } else {
          T29 = T28;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:737
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        T35 = primitive_cast_raw_as_integer(T29);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:738
        ENGINE_NODE_CALL_PROLOG(&Kcoerce_from_sequenceYstreams_internalsVio, &K315, 6);
        ENGINE_NODE_CALL6(&K315, stream_, sbF7, T17, elements_, T55, T35);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:739
        SLOT_VALUE_SETTER(&KPtrueVKi, sbF7, 3);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        T31 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        T32 = primitive_machine_word_logxor(T29,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        T33 = primitive_machine_word_add_signal_overflow(T31,T32);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        T34 = primitive_cast_raw_as_integer(T33);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:740
        SLOT_VALUE_SETTER(T34, sbF7, 0);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T36 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T37 = primitive_machine_word_logxor(T29,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T38 = primitive_machine_word_add_signal_overflow(T36,T37);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T39 = primitive_cast_raw_as_integer(T38);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T40 = SLOT_VALUE_INITD(sbF7, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T42 = primitive_cast_integer_as_raw(T40);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        T43 = primitive_machine_word_less_thanQ(T42,T38);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        if (T43 != &KPfalseVKi) {
          T41 = T39;
        } else {
          T41 = T40;
        }
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:741
        SLOT_VALUE_SETTER(T41, sbF7, 1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
        T44 = primitive_cast_integer_as_raw(T55);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
        T45 = primitive_machine_word_logxor(T29,1);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
        T46 = primitive_machine_word_add_signal_overflow(T44,T45);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
        T47 = primitive_cast_raw_as_integer(T46);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:742
        iF59T = T47;
        sbF60T = sbF7;
        goto L0;
        T9 = T58;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
        CONGRUENT_CALL_PROLOG(&Kdo_next_output_bufferYstreamsVio, 2);
        T8 = CONGRUENT_CALL2(stream_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
        iF59T = iF59;
        sbF60T = T8;
        goto L0;
        T9 = T53;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:734
      T13 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
      T48 = primitive_cast_integer_as_raw(T55);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
      T49 = primitive_cast_integer_as_raw(implicit_argument_);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
      T50 = primitive_machine_word_less_thanQ(T48,T49);
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:746
        T51.vector_element_[0] = IKJstream_;
        T51.vector_element_[1] = stream_;
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:746
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T10 = CONGRUENT_CALL2(&KLend_of_stream_errorGYstreams_protocolVcommon_dylan, &T51);
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:746
        T52 = KsignalVKdMM0I(T10, &KPempty_vectorVKi);
        T12 = T52;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
        T11 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:745
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:730
    // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:735
  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:729
  return(T13);
}


/* SYSTEM INIT CODE */

void _Init_io__X_8Ebuffered_stream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbytes_);
    if (T0 != &KJbytes_) {
      IKJbytes_ = T0;
      primitive_repeated_slot_value_setter(T0, &K87, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K82, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K54, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K42, 1, 0);
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

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_slot_value_setter(T0, &Kstream_shared_bufferYstreams_internalsVioHLsingle_buffered_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K309, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K307, 1, 2);
      IKJon_end_of_stream_ = T0;
      primitive_repeated_slot_value_setter(T0, &K203, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K199, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K191, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K188, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJgrowQ_);
    if (T0 != &KJgrowQ_) {
      primitive_repeated_slot_value_setter(T0, &K203, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K199, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsequence_);
    if (T0 != &KJsequence_) {
      IKJsequence_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_8Ebuffered_stream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:269
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I291;
}
I291:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:396
  T0 = KPadd_a_methodVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I288;
}
I288:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:413
  T0 = KPadd_a_methodVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I285;
}
I285:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:427
  T0 = KPadd_a_methodVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I282;
}
I282:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:440
  T0 = KPadd_a_methodVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I279;
}
I279:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:480
  T0 = KPadd_a_methodVKnI(&Kdiscard_inputYstreams_protocolVcommon_dylan, &Kdiscard_inputYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I276;
}
I276:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:505
  T0 = KPadd_a_methodVKnI(&Kdiscard_outputYstreams_protocolVcommon_dylan, &Kdiscard_outputYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I273;
}
I273:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:712
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I270;
}
I270:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/buffered-stream.dylan:724
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I267;
}
I267:

  return;
}


/* eof */
