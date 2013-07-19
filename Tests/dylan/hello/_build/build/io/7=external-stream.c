#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

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
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(22);

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

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_closed_errorGYstreamsVio;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D init_arg_type_;
} _KLinit_arg_descriptorGVKe;

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
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

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


/* Typedefs for defined classes */

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


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLgetter_methodGVKi Kaccessor_positionableQYstreams_internalsVioMM0;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLmethod_domainGVKe Kaccessor_positionableQYstreams_internalsVioRD_ioRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsetter_methodGVKi Kaccessor_at_endQ_setterYstreams_internalsVioMM0;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLmethod_domainGVKe Kaccessor_at_endQ_setterYstreams_internalsVioRD_ioRD_0;
extern _KLgetter_methodGVKi Kaccessor_at_endQYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_at_endQYstreams_internalsVioRD_ioRD_0;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLkeyword_methodGVKe Kaccessor_openYstreams_internalsVioMM0;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJdirection_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJif_exists_;
extern _KLsymbolGVKd KJif_does_not_exist_;
extern _KLsimple_methodGVKe Kplatform_accessor_classYstreams_internalsVioMM0;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsymbolGVKd KJlocator_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_methodGVKe Kaccessor_sizeYstreams_internalsVioMM0;
extern _KLsimple_methodGVKe Kaccessor_position_setterYstreams_internalsVioMM0;
extern _KLsimple_methodGVKe Kaccessor_positionYstreams_internalsVioMM0;
extern _KLsetter_methodGVKi Kaccessor_setterYstreams_internalsVioMM0;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLgetter_methodGVKi Kaccessor_preferred_buffer_sizeYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLstream_closed_errorGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstream_closed_errorGYstreamsVioW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_methodGVKe Kaccessor_newline_sequenceYstreams_internalsVioMM0;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLkeyword_methodGVKe Kaccessor_read_intoXYstreams_internalsVioMM0;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLkeyword_methodGVKe Kaccessor_write_fromYstreams_internalsVioMM0;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLgetter_methodGVKi KaccessorYstreams_internalsVioMM0;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLinit_arg_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinit_arg_descriptorGVKeW;
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
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe Kaccessor_synchronizeYstreams_internalsVioMM1;
extern _KLsimple_methodGVKe Kaccessor_openQYstreams_internalsVioMM0;
extern _KLkeyword_methodGVKe Kaccessor_closeYstreams_internalsVioMM0;
extern _KLsymbolGVKd KJabortQ_;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLsimple_methodGVKe Kaccessor_fdYstreams_internalsVioMM0;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D KputhashVKiI (D, D, D);
D KerrorVKdMM1I (D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLincremental_generic_functionGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Ksynchronize_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe Kdo_force_outputYstreams_internalsVio;
D Kremove_keyXVKdMM0I (D, D);
extern _KLclassGVKd KLexternal_file_accessorGYstreams_internalsVio;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;

/* Defined object declarations */

extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW;
extern _KLkeyword_methodGVKe KinitializeVKdMioM3;
D KinitializeVKdMioM3I (D, D, D, D);
extern _KLclassGVKd KLexternal_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_streamGYstreams_internalsVioW;
extern _KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_write_fromYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_force_outputYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_read_intoXYstreams_internalsVio;
extern _KLsimple_methodGVKe Knewline_sequenceYstreams_internalsVioMM0;
D Knewline_sequenceYstreams_internalsVioMM0I (D);
extern _KLsimple_methodGVKe Kclose_external_streamsYstreams_internalsVio;
D Kclose_external_streamsYstreams_internalsVioI ();
extern _KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_positionYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_position_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_sizeYstreams_internalsVio;
extern _KLkeyword_methodGVKe Knew_accessorYstreams_internalsVioMM0;
D Knew_accessorYstreams_internalsVioMM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kaccessor_at_endQYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_at_endQ_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_positionableQYstreams_internalsVio;
static _KLpairGVKd K27;
static _KLsignatureAvaluesGVKi K28;
static _KLbyte_stringGVKd_22 K29;
static _KLsimple_object_vectorGVKd_1 K30;
static _KLpairGVKd K31;
static _KLsignatureAvaluesGVKi K32;
static _KLbyte_stringGVKd_23 K33;
static _KLsimple_object_vectorGVKd_2 K34;
static _KLpairGVKd K35;
static _KLbyte_stringGVKd_16 K36;
extern _KLincremental_generic_functionGVKe Kplatform_accessor_classYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_openYstreams_internalsVio;
static _KLpairGVKd K39;
static _KLkeyword_signatureGVKe K40;
static _KLbyte_stringGVKd_13 K41;
static _KLsimple_object_vectorGVKd_2 K42;
static _KLsimple_object_vectorGVKd_3 K43;
static _KLpairGVKd K44;
static _KLsignatureGVKe K45;
static _KLbyte_stringGVKd_23 K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLkeyword_signatureAvaluesGVKi K48;
static _KLsimple_object_vectorGVKd_2 K49;
static _KLsimple_object_vectorGVKd_1 K50;
static _KLsimple_object_vectorGVKd_1 K51;
static _KLpairGVKd K52;
static _KLsignatureGVKe K53;
static _KLbyte_stringGVKd_13 K54;
static _KLpairGVKd K55;
static _KLsignatureGVKe K56;
static _KLbyte_stringGVKd_24 K57;
static _KLsimple_object_vectorGVKd_2 K58;
static _KLpairGVKd K59;
static _KLbyte_stringGVKd_17 K60;
static _KLpairGVKd K61;
static _KLsignatureAvaluesGVKi K62;
static _KLbyte_stringGVKd_15 K63;
static _KLsimple_object_vectorGVKd_2 K64;
static _KLsimple_object_vectorGVKd_1 K65;
static _KLunionGVKe K66;
static _KLsingletonGVKd K67;
static _KLpairGVKd K68;
static _KLsignatureAvaluesGVKi K69;
static _KLbyte_stringGVKd_30 K70;
static _KLsignatureGVKe K71;
extern _KLincremental_generic_functionGVKe Kaccessor_newline_sequenceYstreams_internalsVio;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_54 K74;
static _KLbyte_stringGVKd_6 K75;
static _KLpairGVKd K76;
static _KLsignatureAvaluesGVKi K77;
static _KLbyte_stringGVKd_25 K78;
static _KLsignatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_1 K80;
static _KLpairGVKd K81;
static _KLkeyword_signatureAvaluesGVKi K82;
static _KLbyte_stringGVKd_19 K83;
static _KLsimple_object_vectorGVKd_4 K84;
static _KLsimple_object_vectorGVKd_1 K85;
static _KLsymbolGVKd KJbuffer_;
static _KLbyte_stringGVKd_6 K87;
extern _KLsimple_methodGVKe Kaccessor_force_outputYstreams_internalsVioMM0;
D Kaccessor_force_outputYstreams_internalsVioMM0I (D, D);
static _KLpairGVKd K90;
static _KLsignatureGVKe K91;
static _KLbyte_stringGVKd_21 K92;
static _KLsimple_object_vectorGVKd_2 K93;
static _KLpairGVKd K94;
static _KLkeyword_signatureAvaluesGVKi K95;
static _KLbyte_stringGVKd_19 K96;
static _KLsimple_object_vectorGVKd_2 K97;
static _KLsimple_object_vectorGVKd_2 K98;
static _KLsymbolGVKd KJreturn_fresh_bufferQ_;
static _KLbyte_stringGVKd_20 K100;
static _KLpairGVKd K101;
static _KLsignatureAvaluesGVKi K102;
static _KLbyte_stringGVKd_8 K103;
static _KLimplementation_classGVKe K104;
static _KLsimple_object_vectorGVKd_4 K105;
static _KLsimple_object_vectorGVKd_1 K106;
static _KLsimple_object_vectorGVKd_6 K107;
static _KLsimple_object_vectorGVKd_2 K108;
static _KLsimple_object_vectorGVKd_6 K109;
static _KLsimple_object_vectorGVKd_3 K110;
static _KLinit_arg_descriptorGVKe KlocatorHLexternal_streamGYstreams_internalsVio;
static _KLinit_arg_descriptorGVKe Kif_existsHLexternal_streamGYstreams_internalsVio;
static _KLinit_arg_descriptorGVKe Kif_does_not_existHLexternal_streamGYstreams_internalsVio;
static _KLbyte_stringGVKd_17 K114;
extern _KLincremental_generic_functionGVKe Kaccessor_synchronizeYstreams_internalsVio;
extern _KLsimple_methodGVKe Kaccessor_synchronizeYstreams_internalsVioMM0;
D Kaccessor_synchronizeYstreams_internalsVioMM0I (D, D);
static _KLpairGVKd K118;
static _KLpairGVKd K119;
static _KLbyte_stringGVKd_20 K120;
extern _KLincremental_generic_functionGVKe Kaccessor_wait_for_completionYstreams_internalsVio;
extern _KLsimple_methodGVKe Kaccessor_wait_for_completionYstreams_internalsVioMM0;
D Kaccessor_wait_for_completionYstreams_internalsVioMM0I (D);
static _KLpairGVKd K124;
static _KLsignatureGVKe K125;
static _KLbyte_stringGVKd_28 K126;
extern _KLincremental_generic_functionGVKe Kaccessor_size_setterYstreams_internalsVio;
static _KLbyte_stringGVKd_20 K128;
extern _KLincremental_generic_functionGVKe Kaccessor_openQYstreams_internalsVio;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_14 K131;
extern _KLincremental_generic_functionGVKe Kaccessor_closeYstreams_internalsVio;
static _KLpairGVKd K133;
static _KLkeyword_signatureAvaluesGVKi K134;
static _KLbyte_stringGVKd_14 K135;
static _KLsimple_object_vectorGVKd_2 K136;
extern _KLincremental_generic_functionGVKe Kaccessor_fdYstreams_internalsVio;
static _KLpairGVKd K138;
static _KLsignatureAvaluesGVKi K139;
static _KLbyte_stringGVKd_11 K140;
static _KLsimple_object_vectorGVKd_1 K141;
static _KLunionGVKe K142;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF147;
static D Kanonymous_of_initializeF147I (D);
static _KLsymbolGVKd KJalready_registeredQ_;
static _KLbyte_stringGVKd_19 K146;
static _KLbyte_stringGVKd_15 K148;
static _KLsignatureGVKe K149;
static _KLkeyword_signatureGVKe K150;
static _KLsimple_object_vectorGVKd_4 K151;
static _KLsimple_object_vectorGVKd_2 K152;
static _KLimplementation_classGVKe K153;
static _KLsimple_object_vectorGVKd_1 K154;
static _KLsimple_object_vectorGVKd_6 K155;
static _KLbyte_stringGVKd_26 K156;
extern _KLsimple_methodGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0;
D Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0;
D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM0;
D Kforce_outputYstreams_protocolVcommon_dylanMioM0I (D, D, D);
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM1;
D KcloseYcommon_extensionsVcommon_dylanMioM1I (D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_closeF175;
static D Kanonymous_of_closeF175I (D);
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLsymbolGVKd KJalready_unregisteredQ_;
static _KLbyte_stringGVKd_21 K173;
static _KLbyte_stringGVKd_12 K174;
static _KLkeyword_signatureGVKe K176;
static _KLsimple_object_vectorGVKd_8 K177;
static _KLsimple_object_vectorGVKd_4 K178;
static _KLkeyword_signatureGVKe K179;
static _KLsimple_object_vectorGVKd_2 K180;
static _KLsimple_object_vectorGVKd_1 K181;
static _KLsignatureGVKe K182;
static _KLpairGVKd K183;
static _KLpairGVKd K184;

/* Indirection variables */

static D IKJstream_ = &KJstream_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJreturn_fresh_bufferQ_ = &KJreturn_fresh_bufferQ_;
static D IKJalready_registeredQ_ = &KJalready_registeredQ_;
static D IKJsynchronizeQ_ = &KJsynchronizeQ_;
static D IKJalready_unregisteredQ_ = &KJalready_unregisteredQ_;

/* Variables */

D new_accessorYstreams_internalsVio = &Knew_accessorYstreams_internalsVioMM0;
D Lexternal_stream_accessorGYstreams_internalsVio = &KLexternal_stream_accessorGYstreams_internalsVio;
D Lexternal_streamGYstreams_internalsVio = &KLexternal_streamGYstreams_internalsVio;
D accessorYstreams_internalsVio = &KaccessorYstreams_internalsVio;
D accessor_setterYstreams_internalsVio = &Kaccessor_setterYstreams_internalsVio;
D Dopen_external_streamsYstreams_internalsVio = &KPunboundVKi;
D close_external_streamsYstreams_internalsVio = &Kclose_external_streamsYstreams_internalsVio;
D platform_accessor_classYstreams_internalsVio = &Kplatform_accessor_classYstreams_internalsVio;
D accessor_fdYstreams_internalsVio = &Kaccessor_fdYstreams_internalsVio;
D accessor_openYstreams_internalsVio = &Kaccessor_openYstreams_internalsVio;
D accessor_closeYstreams_internalsVio = &Kaccessor_closeYstreams_internalsVio;
D accessor_openQYstreams_internalsVio = &Kaccessor_openQYstreams_internalsVio;
D accessor_at_endQYstreams_internalsVio = &Kaccessor_at_endQYstreams_internalsVio;
D accessor_at_endQ_setterYstreams_internalsVio = &Kaccessor_at_endQ_setterYstreams_internalsVio;
D accessor_sizeYstreams_internalsVio = &Kaccessor_sizeYstreams_internalsVio;
D accessor_size_setterYstreams_internalsVio = &Kaccessor_size_setterYstreams_internalsVio;
D accessor_positionableQYstreams_internalsVio = &Kaccessor_positionableQYstreams_internalsVio;
D accessor_positionYstreams_internalsVio = &Kaccessor_positionYstreams_internalsVio;
D accessor_position_setterYstreams_internalsVio = &Kaccessor_position_setterYstreams_internalsVio;
D accessor_preferred_buffer_sizeYstreams_internalsVio = &Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
D accessor_read_intoXYstreams_internalsVio = &Kaccessor_read_intoXYstreams_internalsVio;
D accessor_write_fromYstreams_internalsVio = &Kaccessor_write_fromYstreams_internalsVio;
D accessor_force_outputYstreams_internalsVio = &Kaccessor_force_outputYstreams_internalsVio;
D accessor_wait_for_completionYstreams_internalsVio = &Kaccessor_wait_for_completionYstreams_internalsVio;
D accessor_synchronizeYstreams_internalsVio = &Kaccessor_synchronizeYstreams_internalsVio;
D accessor_newline_sequenceYstreams_internalsVio = &Kaccessor_newline_sequenceYstreams_internalsVio;

/* Objects */

_KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K156,
  &K153,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K153,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KinitializeVKdMioM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K150,
  &key_mep_4,
  &KinitializeVKdMioM3I,
  &K151
};

_KLclassGVKd KLexternal_streamGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K114,
  &K104,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLexternal_streamGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K104,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K102,
  (D) 1,
  &K103,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_write_fromYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_4,
  &K95,
  &KPfalseVKi,
  &K96,
  &K94,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_force_outputYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K91,
  &KPfalseVKi,
  &K92,
  &K90,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_read_intoXYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_4,
  &K82,
  &KPfalseVKi,
  &K83,
  &K81,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Knewline_sequenceYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K79,
  &Knewline_sequenceYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kclose_external_streamsYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K71,
  &Kclose_external_streamsYstreams_internalsVioI
};

_KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K69,
  &KPfalseVKi,
  &K70,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K62,
  (D) 1,
  &K63,
  &K61,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_positionYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K53,
  &KPfalseVKi,
  &K60,
  &K59,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_position_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K56,
  &KPfalseVKi,
  &K57,
  &K55,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_sizeYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K53,
  &KPfalseVKi,
  &K54,
  &K52,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Knew_accessorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K48,
  &key_mep_3,
  &Knew_accessorYstreams_internalsVioMM0I,
  &K49
};

_KLincremental_generic_functionGVKe Kaccessor_at_endQYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K28,
  &KPfalseVKi,
  &K36,
  &K35,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kaccessor_at_endQYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_at_endQ_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K32,
  &KPfalseVKi,
  &K33,
  &K31,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kaccessor_at_endQ_setterYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_positionableQYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K28,
  &KPfalseVKi,
  &K29,
  &K27,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &Kaccessor_positionableQYstreams_internalsVioRD_ioRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_positionableQYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K30,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_22 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "accessor-positionable?"
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_at_endQ_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K34,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_23 K33 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "accessor-at-end?-setter"
};

static _KLsimple_object_vectorGVKd_2 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_at_endQYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "accessor-at-end?"
};

_KLincremental_generic_functionGVKe Kplatform_accessor_classYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K45,
  (D) 1,
  &K46,
  &K44,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kaccessor_openYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K40,
  &KPfalseVKi,
  &K41,
  &K39,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_openYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K40 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42729481,
  &K42,
  &K43,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_13 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "accessor-open"
};

static _KLsimple_object_vectorGVKd_2 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_3 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJdirection_,
  &KJif_exists_,
  &KJif_does_not_exist_
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kplatform_accessor_classYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K45 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K47
};

static _KLbyte_stringGVKd_23 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "platform-accessor-class"
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsymbolGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K48 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K50,
  &K51,
  &KDsignature_LobjectG_typesVKi,
  &K30
};

static _KLsimple_object_vectorGVKd_2 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJlocator_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsimple_object_vectorGVKd_1 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJlocator_
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_sizeYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K53 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K30
};

static _KLbyte_stringGVKd_13 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "accessor-size"
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_position_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K56 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K58
};

static _KLbyte_stringGVKd_24 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "accessor-position-setter"
};

static _KLsimple_object_vectorGVKd_2 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_positionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "accessor-position"
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K62 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K64,
  &K65
};

static _KLbyte_stringGVKd_15 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "accessor-setter"
};

static _KLsimple_object_vectorGVKd_2 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K66,
  &KLexternal_streamGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K66
};

static _KLunionGVKe K66 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K67,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

static _KLsingletonGVKd K67 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K69 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K30,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_30 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "accessor-preferred-buffer-size"
};

static _KLsignatureGVKe K71 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

_KLincremental_generic_functionGVKe Kaccessor_newline_sequenceYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K77,
  &KPfalseVKi,
  &K78,
  &K76,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K75
};

static _KLbyte_stringGVKd_54 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Can\'t get newline-sequence of a closed external stream"
};

static _KLbyte_stringGVKd_6 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_newline_sequenceYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K77 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K30,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_25 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "accessor-newline-sequence"
};

static _KLsignatureAvaluesGVKi K79 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K80,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexternal_streamGYstreams_internalsVio
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_read_intoXYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K82 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817617,
  &K84,
  &K85,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_19 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "accessor-read-into!"
};

static _KLsimple_object_vectorGVKd_4 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbuffer_
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K87
};

static _KLbyte_stringGVKd_6 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

_KLsimple_methodGVKe Kaccessor_force_outputYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K91,
  &Kaccessor_force_outputYstreams_internalsVioMM0I
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_force_outputYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K91 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K93
};

static _KLbyte_stringGVKd_21 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "accessor-force-output"
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_streamGYstreams_internalsVio
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_write_fromYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K95 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818641,
  &K84,
  &K97,
  &KDsignature_LobjectG_typesVKi,
  &K98
};

static _KLbyte_stringGVKd_19 K96 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "accessor-write-from"
};

static _KLsimple_object_vectorGVKd_2 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbuffer_,
  &KJreturn_fresh_bufferQ_
};

static _KLsimple_object_vectorGVKd_2 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio
};

static _KLsymbolGVKd KJreturn_fresh_bufferQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K100
};

static _KLbyte_stringGVKd_20 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "return-fresh-buffer?"
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &KaccessorYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K102 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K80,
  &K65
};

static _KLbyte_stringGVKd_8 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "accessor"
};

static _KLimplementation_classGVKe K104 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989073,
  &KLexternal_streamGYstreams_internalsVio,
  &KLexternal_streamGYstreams_internalsVioW,
  &KPfalseVKi,
  &K105,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K106,
  &K107,
  (D) 17,
  &K108,
  &K109,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K184,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K105,
  &KPempty_vectorVKi,
  &K110,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG
};

static _KLsimple_object_vectorGVKd_1 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLexternal_streamGYstreams_internalsVio,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  (D) 25,
  (D) 33
};

static _KLsimple_object_vectorGVKd_6 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLbyte_element_streamGYstreams_internalsVio,
  &KLbyte_char_element_streamGYstreams_internalsVio,
  &KLtyped_streamGYstreams_internalsVio,
  &KLgeneral_typed_streamGYstreams_internalsVio,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_3 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KlocatorHLexternal_streamGYstreams_internalsVio,
  &Kif_existsHLexternal_streamGYstreams_internalsVio,
  &Kif_does_not_existHLexternal_streamGYstreams_internalsVio
};

static _KLinit_arg_descriptorGVKe KlocatorHLexternal_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLexternal_streamGYstreams_internalsVio,
  &KJlocator_,
  &KLobjectGVKd
};

static _KLinit_arg_descriptorGVKe Kif_existsHLexternal_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLexternal_streamGYstreams_internalsVio,
  &KJif_exists_,
  &KLobjectGVKd
};

static _KLinit_arg_descriptorGVKe Kif_does_not_existHLexternal_streamGYstreams_internalsVio = {
  &KLinit_arg_descriptorGVKeW /* wrapper */,
  (D) 1,
  &KPfalseVKi,
  &KLexternal_streamGYstreams_internalsVio,
  &KJif_does_not_exist_,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_17 K114 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<external-stream>"
};

_KLincremental_generic_functionGVKe Kaccessor_synchronizeYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K91,
  &KPfalseVKi,
  &K120,
  &K118,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kaccessor_synchronizeYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K91,
  &Kaccessor_synchronizeYstreams_internalsVioMM0I
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_synchronizeYstreams_internalsVioMM0,
  &K119
};

static _KLpairGVKd K119 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_synchronizeYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "accessor-synchronize"
};

_KLincremental_generic_functionGVKe Kaccessor_wait_for_completionYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K125,
  &KPfalseVKi,
  &K126,
  &K124,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kaccessor_wait_for_completionYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K125,
  &Kaccessor_wait_for_completionYstreams_internalsVioMM0I
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_wait_for_completionYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K125 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K30
};

static _KLbyte_stringGVKd_28 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "accessor-wait-for-completion"
};

_KLincremental_generic_functionGVKe Kaccessor_size_setterYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K56,
  &KPfalseVKi,
  &K128,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_20 K128 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "accessor-size-setter"
};

_KLincremental_generic_functionGVKe Kaccessor_openQYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K28,
  &KPfalseVKi,
  &K131,
  &K130,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_openQYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "accessor-open?"
};

_KLincremental_generic_functionGVKe Kaccessor_closeYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K134,
  &KPfalseVKi,
  &K135,
  &K133,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_closeYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K134 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K30,
  &K136,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_14 K135 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "accessor-close"
};

static _KLsimple_object_vectorGVKd_2 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJabortQ_,
  &KJwaitQ_
};

_KLincremental_generic_functionGVKe Kaccessor_fdYstreams_internalsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K139,
  &KPfalseVKi,
  &K140,
  &K138,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_internals_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_fdYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K139 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K30,
  &K141
};

static _KLbyte_stringGVKd_11 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "accessor-fd"
};

static _KLsimple_object_vectorGVKd_1 K141 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K142
};

static _KLunionGVKe K142 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K67,
  &KLmachine_wordGVKe
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF147 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K149,
  &Kanonymous_of_initializeF147I,
  (D) 1
};

static _KLsymbolGVKd KJalready_registeredQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K146
};

static _KLbyte_stringGVKd_19 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "already-registered?"
};

static _KLbyte_stringGVKd_15 K148 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureGVKe K149 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K150 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K80,
  &K152,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJlocator_,
  &KPfalseVKi,
  &KJalready_registeredQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJlocator_,
  &KJalready_registeredQ_
};

static _KLimplementation_classGVKe K153 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_stream_accessorGYstreams_internalsVioW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K154,
  &K155,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K183,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_26 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<external-stream-accessor>"
};

_KLsimple_methodGVKe Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K182,
  &Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K182,
  &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0I
};

_KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K179,
  &key_mep_3,
  &Kforce_outputYstreams_protocolVcommon_dylanMioM0I,
  &K180
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K176,
  &key_mep_6,
  &KcloseYcommon_extensionsVcommon_dylanMioM1I,
  &K177
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_closeF175 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K149,
  &Kanonymous_of_closeF175I,
  (D) 1
};

static _KLsymbolGVKd KJsynchronizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K174
};

static _KLsymbolGVKd KJalready_unregisteredQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K173
};

static _KLbyte_stringGVKd_21 K173 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "already-unregistered?"
};

static _KLbyte_stringGVKd_12 K174 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLkeyword_signatureGVKe K176 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K80,
  &K178,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K177 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJabortQ_,
  &KPfalseVKi,
  &KJwaitQ_,
  &KPtrueVKi,
  &KJsynchronizeQ_,
  &KPfalseVKi,
  &KJalready_unregisteredQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K178 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJabortQ_,
  &KJwaitQ_,
  &KJsynchronizeQ_,
  &KJalready_unregisteredQ_
};

static _KLkeyword_signatureGVKe K179 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K80,
  &K181,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsynchronizeQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsynchronizeQ_
};

static _KLsignatureGVKe K182 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K80
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &KLexternal_file_accessorGYstreams_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &KLfile_streamGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D KinitializeVKdMioM3I (D the_stream_, D keys_, D locator_, D already_registeredQ_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:33
  T10 = primitive_copy_vector(keys_);
  T8 = primitive_next_methods_parameter();
  T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF147, 3, T10, T8, the_stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:40
  APPLY4(T9, the_stream_, IKJalready_registeredQ_, &KPtrueVKi, T10);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:42
  if (already_registeredQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:42
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    T11 = SLOT_VALUE_INITD(Dopen_external_streamsYstreams_internalsVio, 0);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    T14 = primitive_instanceQ(the_stream_,T11);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
      T13.vector_element_[0] = &KJvalue_;
      T13.vector_element_[1] = the_stream_;
      T13.vector_element_[2] = &KJtype_;
      T13.vector_element_[3] = T11;
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T12 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T13);
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T12, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    KputhashVKiI(the_stream_, Dopen_external_streamsYstreams_internalsVio, the_stream_);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:43
    T5 = &KPfalseVKi;
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:42
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:33
  MV_SET_COUNT(0);
  return(T7);
}

D Knewline_sequenceYstreams_internalsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4_0;
  D T5;
  D T6_0;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T8_0;
  D T9_0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:100
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:102
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:102
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:103
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:103
    T4_0 = CALL1(&Kaccessor_newline_sequenceYstreams_internalsVio, T3);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:103
    T9_0 = T4_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T4_0);
      primitive_type_check(T9_0, &KLstringGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:105
    T7.vector_element_[0] = IKJstream_;
    T7.vector_element_[1] = stream_;
    T7.vector_element_[2] = &KJformat_string_;
    T7.vector_element_[3] = &K74;
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:105
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLstream_closed_errorGYstreamsVio, &T7);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:105
    T8_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
    T6_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:102
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:100
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kclose_external_streamsYstreams_internalsVioI () {
  D T0;
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6T, T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:27
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T0 = CONGRUENT_CALL1(Dopen_external_streamsYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T1 = T0;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T2 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T3 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T4 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T5 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  T6T = T1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
    T6 = T6T;
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
    T7 = CALL3(T4, Dopen_external_streamsYstreams_internalsVio, T6, T2);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
      T8 = CALL2(T5, Dopen_external_streamsYstreams_internalsVio, T6);
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:29
      CALL1(&KcloseYcommon_extensionsVcommon_dylan, T8);
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
      T9 = CALL2(T3, Dopen_external_streamsYstreams_internalsVio, T6);
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
      T6T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
    T10 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:28
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:27
  MV_SET_COUNT(0);
  return(T10);
}

D Knew_accessorYstreams_internalsVioMM0I (D type_, D initargs_, D locator_) {
  D T4;
  D T5_0;
  D T6_0;
  D new_one_;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:142
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:145
  CONGRUENT_CALL_PROLOG(&Kplatform_accessor_classYstreams_internalsVio, 2);
  T4 = CONGRUENT_CALL2(type_, locator_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:145
  new_one_ = APPLY2(&KmakeVKd, T4, initargs_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:146
  APPLY3(&Kaccessor_openYstreams_internalsVio, new_one_, locator_, initargs_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:147
  T5_0 = new_one_;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:142
  T6_0 = T5_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T5_0);
    primitive_type_check(T6_0, &KLexternal_stream_accessorGYstreams_internalsVio);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:142
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kaccessor_force_outputYstreams_internalsVioMM0I (D accessor_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:235
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:238
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:235
  MV_SET_COUNT(0);
  return(T3);
}

D Kaccessor_synchronizeYstreams_internalsVioMM0I (D accessor_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:241
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:244
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:241
  MV_SET_COUNT(0);
  return(T3);
}

D Kaccessor_wait_for_completionYstreams_internalsVioMM0I (D accessor_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:217
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:220
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:217
  MV_SET_COUNT(0);
  return(T2);
}

static D Kanonymous_of_initializeF147I (D Unext_method_argsU_) {
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
    T14 = KerrorVKdMM1I(&K148, &KPempty_vectorVKi);
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

D Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:93
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:95
  CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
  T2 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:95
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:96
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T3 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:96
    T4 = CALL1(&Kaccessor_wait_for_completionYstreams_internalsVio, T3);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:95
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:95
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:93
  MV_SET_COUNT(0);
  return(T6);
}

D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:88
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:90
  T3.vector_element_[0] = IKJsynchronizeQ_;
  T3.vector_element_[1] = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:90
  CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
  T2 = CONGRUENT_CALL2(stream_, &T3);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:88
  MV_SET_COUNT(0);
  return(T2);
}

D Kforce_outputYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D synchronizeQ_) {
  D synchronizeQF4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:76
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:76
  primitive_type_check(synchronizeQ_, &KLbooleanGVKd);
  synchronizeQF4 = synchronizeQ_;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:79
  CONGRUENT_CALL_PROLOG(&Kdo_force_outputYstreams_internalsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:80
  CONGRUENT_CALL_PROLOG(&Kwait_for_io_completionYstreams_protocolVcommon_dylan, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:81
  if (synchronizeQF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:82
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T5 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:82
    T6 = CALL2(&Kaccessor_synchronizeYstreams_internalsVio, T5, stream_);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:81
    T7 = &KPfalseVKi;
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:81
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:76
  MV_SET_COUNT(0);
  return(T8);
}

D KcloseYcommon_extensionsVcommon_dylanMioM1I (D stream_, D keys_, D abortQ_, D waitQ_, D synchronizeQ_, D already_unregisteredQ_) {
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T18;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:49
  T14 = primitive_copy_vector(keys_);
  T12 = primitive_next_methods_parameter();
  T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_closeF175, 3, T14, T12, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:53
  CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
  T7 = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:53
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:54
    if (abortQ_ == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:55
      if (synchronizeQ_ != &KPfalseVKi) {
        T15 = synchronizeQ_;
        // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:56
        T16.vector_element_[0] = IKJsynchronizeQ_;
        T16.vector_element_[1] = T15;
        // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:56
        CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
        CONGRUENT_CALL2(stream_, &T16);
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:55
        if (waitQ_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:58
          T17.vector_element_[0] = IKJsynchronizeQ_;
          T17.vector_element_[1] = &KPfalseVKi;
          // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:58
          CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
          CONGRUENT_CALL2(stream_, &T17);
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:60
          CONGRUENT_CALL_PROLOG(&Kdo_force_outputYstreams_internalsVio, 1);
          CONGRUENT_CALL1(stream_);
        }
        // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:55
      }
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:55
    }
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:54
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:63
    CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
    T8 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:63
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:64
      CONGRUENT_CALL_PROLOG(&KaccessorYstreams_internalsVio, 1);
      T9 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:64
      CALL5(&Kaccessor_closeYstreams_internalsVio, T9, &KJabortQ_, abortQ_, &KJwaitQ_, waitQ_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:63
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:66
    if (already_unregisteredQ_ == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:67
      Kremove_keyXVKdMM0I(Dopen_external_streamsYstreams_internalsVio, stream_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:66
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:71
    T18 = APPLY4(T13, stream_, IKJalready_unregisteredQ_, &KPtrueVKi, T14);
    T11 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:53
    T10 = &KPfalseVKi;
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:53
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:49
  MV_SET_COUNT(0);
  return(T11);
}

static D Kanonymous_of_closeF175I (D Unext_method_argsU_) {
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
    T14 = KerrorVKdMM1I(&K148, &KPempty_vectorVKi);
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


/* SYSTEM INIT CODE */

void _Init_io__X_7Eexternal_stream_for_system () {
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

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_repeated_slot_value_setter(T0, &K97, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K85, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJreturn_fresh_bufferQ_);
    if (T0 != &KJreturn_fresh_bufferQ_) {
      primitive_repeated_slot_value_setter(T0, &K97, 1, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJalready_registeredQ_);
    if (T0 != &KJalready_registeredQ_) {
      primitive_repeated_slot_value_setter(T0, &K152, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K151, 1, 2);
      IKJalready_registeredQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      IKJsynchronizeQ_ = T0;
      primitive_repeated_slot_value_setter(T0, &K181, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K180, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K178, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K177, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJalready_unregisteredQ_);
    if (T0 != &KJalready_unregisteredQ_) {
      primitive_repeated_slot_value_setter(T0, &K178, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K177, 1, 6);
      IKJalready_unregisteredQ_ = T0;
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:9
  T0 = KPadd_classVKeI(&KLexternal_stream_accessorGYstreams_internalsVio);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_io__X_7Eexternal_stream_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:25
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:25
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:25
  Dopen_external_streamsYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:25
  T0 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:33
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I4;
}
I4:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:49
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I168;
}
I168:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:76
  T0 = KPadd_a_methodVKnI(&Kforce_outputYstreams_protocolVcommon_dylan, &Kforce_outputYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I165;
}
I165:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:88
  T0 = KPadd_a_methodVKnI(&Ksynchronize_outputYstreams_protocolVcommon_dylan, &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I162;
}
I162:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/external-stream.dylan:93
  T0 = KPadd_a_methodVKnI(&Kwait_for_io_completionYstreams_protocolVcommon_dylan, &Kwait_for_io_completionYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I159;
}
I159:

  return;
}


/* eof */
