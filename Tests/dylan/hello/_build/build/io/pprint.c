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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(108);
define__KLbyte_stringGVKd(105);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(9);

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
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(13);
define__KLsimple_object_vectorGVKd(22);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

typedef struct {
  D wrapper;
} _KLdequeGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
  D xep_;
} _KLfunctionGVKd;

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
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;


/* Typedefs for defined classes */

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
  D newline_kind_;
} _KLnewlineGYprint_internalsVio;

typedef struct {
  D wrapper;
  D op_posn_;
  D section_start_depth_;
  D section_start_section_end_;
} _KLsection_startGYprint_internalsVio;

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


/* Referenced object declarations */

D KPadd_classVKeI (D);
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
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsymbolGVKd KJfill_;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kpprint_newlineYpprintVioMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLmethod_domainGVKe Kpprint_newlineYpprintVioRD_ioRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kpprint_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KsizeVKdMM30I (D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe KpopVKd;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D Kuninitialized_instanceQ_functionVKiI (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kprint_internals_moduleYdylan_userVio;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe KfillXVKd;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsealed_generic_functionGVKe KfloorSVKd;
D KmakeVKdMM33I (D, D, D, D);
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D Kelement_range_errorVKeI (D, D);
D Kcopy_bytesYbyte_vectorVcommon_dylanMM8I (D, D, D, D, D);
extern _KLsealed_generic_functionGVKe KremainderVKd;
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJoutput_;
extern _KLincremental_generic_functionGVKe Kstream_directionYstreams_internalsVio;
extern _KLclassGVKd KLdequeGVKd;
extern _KLmm_wrapperGVKi_0 KLdequeGVKdW;
D KLobject_dequeGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
D KlistVKdI (D);
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW;
extern _KLclassGVKd KLsequence_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLsequence_streamGYstreamsVioW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
D KmakeVKdMM23I (D, D, D, D);
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLsequence_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_limitYstreamsVioHLsequence_streamG;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLincremental_generic_functionGVKe Kpush_lastVKd;
extern _KLsimple_methodGVKe Kpprint_indentYpprintVioMM1;
extern _KLmethod_domainGVKe Kpprint_indentYpprintVioRD_ioRD_0;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_methodGVKe Kpprint_tabYpprintVioMM1;
extern _KLmethod_domainGVKe Kpprint_tabYpprintVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM2;
extern _KLmethod_domainGVKe Kpprint_logical_blockYpprintVioRD_ioRD_0;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLincremental_generic_functionGVKe KcloseYcommon_extensionsVcommon_dylan;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
D KEEVKdI (D, D);
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern D Tprint_prettyQTYprintVio;

/* Defined object declarations */

extern _KLclassGVKd KLlogical_blockGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLlogical_blockGYprint_internalsVioW;
extern _KLclassGVKd KLqueued_opGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLqueued_opGYprint_internalsVioW;
extern _KLincremental_generic_functionGVKe Kpprint_logical_blockYpprintVio;
extern _KLincremental_generic_functionGVKe Kpprint_tabYpprintVio;
extern _KLunionGVKe KLtab_kindGYprint_internalsVio;
extern _KLincremental_generic_functionGVKe Kpprint_indentYpprintVio;
extern _KLunionGVKe KLindentation_kindGYprint_internalsVio;
extern _KLincremental_generic_functionGVKe Kpprint_newlineYpprintVio;
extern _KLunionGVKe KLpretty_newline_kindGYprint_internalsVio;
static _KLunionGVKe K13;
static _KLsingletonGVKd K14;
static _KLsymbolGVKd KJmandatory_;
static _KLbyte_stringGVKd_9 K16;
static _KLunionGVKe K17;
static _KLsingletonGVKd K18;
static _KLsymbolGVKd KJmiser_;
static _KLbyte_stringGVKd_5 K20;
static _KLsingletonGVKd K21;
static _KLsingletonGVKd K22;
static _KLsymbolGVKd KJlinear_;
static _KLbyte_stringGVKd_6 K24;
extern _KLsimple_methodGVKe Kpprint_newlineYpprintVioMM0;
D Kpprint_newlineYpprintVioMM0I (D, D);
static _KLsignatureGVKe K27;
static _KLbyte_stringGVKd_14 K28;
static _KLsimple_object_vectorGVKd_2 K29;
static _KLbyte_stringGVKd_18 K30;
D Kenqueue_newlineYprint_internalsVioMM0I (D, D);
static _KLsymbolGVKd KJkind_;
static _KLsymbolGVKd KJdepth_;
extern _KLclassGVKd KLnewlineGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLnewlineGYprint_internalsVioW;
D KenqueueYprint_internalsVioMM0I (D, D);
extern _KLclassGVKd KLsection_startGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLsection_startGYprint_internalsVioW;
extern _KLsealed_generic_functionGVKe Ksection_start_section_endYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Ksection_start_depthYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Ksection_start_section_end_setterYprint_internalsVio;
static _KLsymbolGVKd KJliteral_;
D Kmaybe_outputYprint_internalsVioMM0I (D, D);
D KmiseringQYprint_internalsVioMM0I (D);
extern _KLsealed_generic_functionGVKe Klogical_block_section_start_lineYprint_internalsVio;
D Kfits_on_lineQYprint_internalsVioMM0I (D, D, D);
static _KLsymbolGVKd KJdont_know_;
static _KLbyte_stringGVKd_32 K48;
static _KLbyte_stringGVKd_27 K49;
D Koutput_lineYprint_internalsVioMM0I (D, D);
extern _KLclassGVKd KLindentationGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLindentationGYprint_internalsVioW;
static _KLsymbolGVKd KJblock_;
extern _KLsealed_generic_functionGVKe Klogical_block_start_columnYprint_internalsVio;
static _KLsymbolGVKd KJcurrent_;
D Kposn_columnYprint_internalsVioMM0I (D, D);
static _KLbyte_stringGVKd_31 K57;
extern _KLsimple_methodGVKe Kset_indentationYprint_internalsVioMM0;
D Kset_indentationYprint_internalsVioMM0I (D, D);
extern _KLclassGVKd KLblock_startGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLblock_startGYprint_internalsVioW;
D Kexpand_tabsYprint_internalsVioMM0I (D, D);
D Kreally_start_logical_blockYprint_internalsVioMM0I (D, D, D, D);
extern _KLclassGVKd KLblock_endGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLblock_endGYprint_internalsVioW;
D Kreally_end_logical_blockYprint_internalsVioMM0I (D);
extern _KLclassGVKd KLtabGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLtabGYprint_internalsVioW;
static _KLbyte_stringGVKd_26 K69;
static _KLimplementation_classGVKe K70;
static _KLsimple_object_vectorGVKd_5 K71;
extern _KLkeyword_methodGVKe KLtabGZ32ZconstructorYprint_internalsVioMM0;
D KLtabGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K74;
static _KLsimple_object_vectorGVKd_6 K75;
static _KLsimple_object_vectorGVKd_4 K76;
extern _KLinstance_slot_descriptorGVKe Ktab_sectionQYprint_internalsVioHLtabG;
extern _KLinstance_slot_descriptorGVKe Ktab_relativeQYprint_internalsVioHLtabG;
extern _KLinstance_slot_descriptorGVKe Ktab_colnumYprint_internalsVioHLtabG;
extern _KLinstance_slot_descriptorGVKe Ktab_colincYprint_internalsVioHLtabG;
static _KLsymbolGVKd KJcolinc_;
extern _KLsealed_generic_functionGVKe Ktab_colincYprint_internalsVio;
extern _KLgetter_methodGVKi Ktab_colincYprint_internalsVioMM0;
static _KLpairGVKd K84;
static _KLbyte_stringGVKd_10 K85;
static _KLbyte_stringGVKd_6 K86;
static _KLsymbolGVKd KJcolnum_;
extern _KLsealed_generic_functionGVKe Ktab_colnumYprint_internalsVio;
extern _KLlimited_integerGVKe KLcolumnGYprint_internalsVio;
extern _KLgetter_methodGVKi Ktab_colnumYprint_internalsVioMM0;
static _KLpairGVKd K91;
static _KLbyte_stringGVKd_10 K92;
static _KLbyte_stringGVKd_6 K93;
static _KLsymbolGVKd KJrelativeQ_;
extern _KLsealed_generic_functionGVKe Ktab_relativeQYprint_internalsVio;
extern _KLgetter_methodGVKi Ktab_relativeQYprint_internalsVioMM0;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_13 K98;
static _KLbyte_stringGVKd_9 K99;
static _KLsymbolGVKd KJsectionQ_;
extern _KLsealed_generic_functionGVKe Ktab_sectionQYprint_internalsVio;
extern _KLgetter_methodGVKi Ktab_sectionQYprint_internalsVioMM0;
static _KLpairGVKd K103;
static _KLbyte_stringGVKd_12 K104;
static _KLbyte_stringGVKd_8 K105;
static _KLbyte_stringGVKd_23 K106;
static _KLkeyword_signatureAvaluesGVKi K107;
static _KLsimple_object_vectorGVKd_8 K108;
static _KLsimple_object_vectorGVKd_4 K109;
static _KLsimple_object_vectorGVKd_1 K110;
extern _KLinstance_slot_descriptorGVKe Kop_posnYprint_internalsVioHLqueued_opG;
extern _KLsealed_generic_functionGVKe Kop_posnYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kop_posn_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kop_posn_setterYprint_internalsVioMM0;
static _KLpairGVKd K115;
static _KLbyte_stringGVKd_14 K116;
extern _KLgetter_methodGVKi Kop_posnYprint_internalsVioMM0;
static _KLpairGVKd K118;
static _KLbyte_stringGVKd_7 K119;
static _KLbyte_stringGVKd_5 K120;
extern _KLsealed_generic_functionGVKe Klogical_block_prefix_lengthYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_blocks_setterYprint_internalsVio;
static _KLbyte_stringGVKd_27 K123;
extern _KLgetter_methodGVKi Klogical_block_prefix_lengthYprint_internalsVioMM0;
static _KLpairGVKd K125;
static _KLbyte_stringGVKd_27 K126;
extern _KLinstance_slot_descriptorGVKe Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG;
static _KLsymbolGVKd KJprefix_length_;
extern _KLsealed_generic_functionGVKe Klogical_block_prefix_length_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Klogical_block_prefix_length_setterYprint_internalsVioMM0;
static _KLpairGVKd K131;
static _KLbyte_stringGVKd_34 K132;
static _KLbyte_stringGVKd_13 K133;
static _KLimplementation_classGVKe K134;
static _KLsimple_object_vectorGVKd_1 K135;
extern _KLkeyword_methodGVKe KLblock_endGZ32ZconstructorYprint_internalsVioMM0;
D KLblock_endGZ32ZconstructorYprint_internalsVioMM0I (D, D);
static _KLsimple_object_vectorGVKd_6 K138;
static _KLkeyword_signatureAvaluesGVKi K139;
static _KLsimple_object_vectorGVKd_1 K140;
static _KLbyte_stringGVKd_11 K141;
extern _KLsealed_generic_functionGVKe Klogical_block_per_line_prefix_endYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Klogical_block_suffix_lengthYprint_internalsVio;
static _KLsymbolGVKd KJstart_column_;
static _KLsymbolGVKd KJsection_column_;
static _KLsymbolGVKd KJper_line_prefix_end_;
static _KLsymbolGVKd KJsuffix_length_;
static _KLsymbolGVKd KJsection_start_line_;
extern _KLsealed_generic_functionGVKe Klogical_block_suffix_length_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Klogical_block_suffix_length_setterYprint_internalsVioMM0;
static _KLpairGVKd K151;
static _KLbyte_stringGVKd_34 K152;
extern _KLinstance_slot_descriptorGVKe Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG;
static _KLbyte_stringGVKd_18 K154;
static _KLbyte_stringGVKd_13 K155;
static _KLbyte_stringGVKd_19 K156;
static _KLbyte_stringGVKd_14 K157;
static _KLbyte_stringGVKd_12 K158;
extern _KLgetter_methodGVKi Klogical_block_suffix_lengthYprint_internalsVioMM0;
static _KLpairGVKd K160;
static _KLbyte_stringGVKd_27 K161;
extern _KLgetter_methodGVKi Klogical_block_per_line_prefix_endYprint_internalsVioMM0;
static _KLpairGVKd K163;
static _KLbyte_stringGVKd_33 K164;
extern _KLinstance_slot_descriptorGVKe Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG;
extern _KLsealed_generic_functionGVKe Klogical_block_per_line_prefix_end_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Klogical_block_per_line_prefix_end_setterYprint_internalsVioMM0;
static _KLpairGVKd K168;
static _KLbyte_stringGVKd_40 K169;
extern _KLsealed_generic_functionGVKe Klogical_block_section_columnYprint_internalsVio;
D Kposn_indexYprint_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kcompute_tab_sizeYprint_internalsVioMM0;
D Kcompute_tab_sizeYprint_internalsVioMM0I (D, D, D);
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_offset_setterYprint_internalsVio;
extern _KLsimple_methodGVKe Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0;
D Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0I (D, D, D, D, D);
static _KLbyte_stringGVKd_105 K178;
static _KLbyte_stringGVKd_108 K179;
static _KLsignatureGVKe K180;
static _KLsimple_object_vectorGVKd_5 K181;
static _KLbyte_stringGVKd_34 K182;
static _KLbyte_stringGVKd_40 K183;
static _KLsignatureAvaluesGVKi K184;
static _KLsimple_object_vectorGVKd_3 K185;
extern _KLgetter_methodGVKi Klogical_block_section_columnYprint_internalsVioMM0;
static _KLpairGVKd K187;
static _KLbyte_stringGVKd_28 K188;
extern _KLinstance_slot_descriptorGVKe Klogical_block_section_columnYprint_internalsVioHLlogical_blockG;
extern _KLsealed_generic_functionGVKe Klogical_block_section_column_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Klogical_block_section_column_setterYprint_internalsVioMM0;
static _KLpairGVKd K192;
static _KLbyte_stringGVKd_35 K193;
static _KLimplementation_classGVKe K194;
static _KLsimple_object_vectorGVKd_6 K195;
extern _KLkeyword_methodGVKe KLblock_startGZ32ZconstructorYprint_internalsVioMM0;
D KLblock_startGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K198;
static _KLsimple_object_vectorGVKd_6 K199;
static _KLsimple_object_vectorGVKd_3 K200;
extern _KLinstance_slot_descriptorGVKe Kblock_start_block_endYprint_internalsVioHLblock_startG;
extern _KLinstance_slot_descriptorGVKe Kblock_start_prefixYprint_internalsVioHLblock_startG;
extern _KLinstance_slot_descriptorGVKe Kblock_start_suffixYprint_internalsVioHLblock_startG;
static _KLsymbolGVKd KJsuffix_;
extern _KLsealed_generic_functionGVKe Kblock_start_suffixYprint_internalsVio;
static _KLunionGVKe K206;
static _KLsingletonGVKd K207;
extern _KLgetter_methodGVKi Kblock_start_suffixYprint_internalsVioMM0;
static _KLpairGVKd K209;
static _KLbyte_stringGVKd_18 K210;
static _KLbyte_stringGVKd_6 K211;
static _KLsymbolGVKd KJprefix_;
extern _KLsealed_generic_functionGVKe Kblock_start_prefixYprint_internalsVio;
extern _KLgetter_methodGVKi Kblock_start_prefixYprint_internalsVioMM0;
static _KLpairGVKd K215;
static _KLbyte_stringGVKd_18 K216;
static _KLbyte_stringGVKd_6 K217;
extern _KLsealed_generic_functionGVKe Kblock_start_block_endYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kblock_start_block_end_setterYprint_internalsVio;
static _KLunionGVKe K220;
extern _KLsetter_methodGVKi Kblock_start_block_end_setterYprint_internalsVioMM0;
static _KLpairGVKd K222;
static _KLbyte_stringGVKd_28 K223;
extern _KLgetter_methodGVKi Kblock_start_block_endYprint_internalsVioMM0;
static _KLpairGVKd K225;
static _KLbyte_stringGVKd_21 K226;
static _KLkeyword_signatureAvaluesGVKi K227;
static _KLsimple_object_vectorGVKd_6 K228;
static _KLsimple_object_vectorGVKd_3 K229;
static _KLsimple_object_vectorGVKd_1 K230;
extern _KLinstance_slot_descriptorGVKe Ksection_start_depthYprint_internalsVioHLsection_startG;
extern _KLinstance_slot_descriptorGVKe Ksection_start_section_endYprint_internalsVioHLsection_startG;
static _KLunionGVKe K233;
static _KLunionGVKe K234;
static _KLbyte_stringGVKd_13 K235;
static _KLsignatureGVKe K236;
static _KLsimple_object_vectorGVKd_2 K237;
extern _KLclassGVKd KLpretty_streamGYpprintVio;
extern _KLmm_wrapperGVKi_0 KLpretty_streamGYpprintVioW;
static _KLimplementation_classGVKe K240;
static _KLsimple_object_vectorGVKd_22 K241;
extern _KLkeyword_methodGVKe KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0;
D KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K244;
static _KLsimple_object_vectorGVKd_8 K245;
static _KLsimple_object_vectorGVKd_13 K246;
static _KLsimple_object_vectorGVKd_1 K247;
static _KLinherited_slot_descriptorGVKe Kstream_directionYstreams_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_targetYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_queueYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG;
extern _KLinstance_slot_descriptorGVKe Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG;
extern _KLsealed_generic_functionGVKe Kpretty_stream_closedQYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_closedQ_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_closedQ_setterYprint_internalsVioMM0;
static _KLpairGVKd K265;
static _KLbyte_stringGVKd_28 K266;
extern _KLgetter_methodGVKi Kpretty_stream_closedQYprint_internalsVioMM0;
static _KLpairGVKd K268;
static _KLbyte_stringGVKd_21 K269;
extern _KLsealed_generic_functionGVKe Kpretty_stream_pending_blocksYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_pending_blocks_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_pending_blocks_setterYprint_internalsVioMM0;
static _KLpairGVKd K273;
static _KLbyte_stringGVKd_35 K274;
extern _KLgetter_methodGVKi Kpretty_stream_pending_blocksYprint_internalsVioMM0;
static _KLpairGVKd K276;
static _KLbyte_stringGVKd_28 K277;
static _KLsimple_closure_methodGVKi_0 K284;
static D K284I ();
extern _KLsealed_generic_functionGVKe Kpretty_stream_queueYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_queueYprint_internalsVioMM0;
static _KLpairGVKd K282;
static _KLbyte_stringGVKd_19 K283;
static _KLsignatureGVKe K285;
static _KLsimple_closure_methodGVKi_0 K296;
static D K296I ();
extern _KLsealed_generic_functionGVKe Kpretty_stream_suffixYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_suffix_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_suffix_setterYprint_internalsVioMM0;
static _KLpairGVKd K291;
static _KLbyte_stringGVKd_27 K292;
extern _KLgetter_methodGVKi Kpretty_stream_suffixYprint_internalsVioMM0;
static _KLpairGVKd K294;
static _KLbyte_stringGVKd_20 K295;
static _KLsimple_closure_methodGVKi_0 K307;
static D K307I ();
extern _KLsealed_generic_functionGVKe Kpretty_stream_prefixYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_prefix_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_prefix_setterYprint_internalsVioMM0;
static _KLpairGVKd K302;
static _KLbyte_stringGVKd_27 K303;
extern _KLgetter_methodGVKi Kpretty_stream_prefixYprint_internalsVioMM0;
static _KLpairGVKd K305;
static _KLbyte_stringGVKd_20 K306;
static _KLsimple_closure_methodGVKi_0 K314;
static D K314I ();
extern _KLsealed_generic_functionGVKe Kpretty_stream_blocksYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_blocksYprint_internalsVioMM0;
static _KLpairGVKd K312;
static _KLbyte_stringGVKd_20 K313;
extern _KLsealed_generic_functionGVKe Kpretty_stream_line_numberYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_line_number_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_line_number_setterYprint_internalsVioMM0;
static _KLpairGVKd K318;
static _KLbyte_stringGVKd_32 K319;
extern _KLgetter_methodGVKi Kpretty_stream_line_numberYprint_internalsVioMM0;
static _KLpairGVKd K321;
static _KLbyte_stringGVKd_25 K322;
static _KLsymbolGVKd KJcolumn_;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_start_columnYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_start_column_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_buffer_start_column_setterYprint_internalsVioMM0;
static _KLpairGVKd K327;
static _KLbyte_stringGVKd_40 K328;
extern _KLgetter_methodGVKi Kpretty_stream_buffer_start_columnYprint_internalsVioMM0;
static _KLpairGVKd K330;
static _KLbyte_stringGVKd_33 K331;
static _KLbyte_stringGVKd_6 K332;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_offsetYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_buffer_offsetYprint_internalsVioMM0;
static _KLpairGVKd K335;
static _KLbyte_stringGVKd_27 K336;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_fill_pointerYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_buffer_fill_pointerYprint_internalsVioMM0;
static _KLpairGVKd K339;
static _KLbyte_stringGVKd_33 K340;
static _KLsimple_closure_methodGVKi_0 K351;
static D K351I ();
extern _KLsealed_generic_functionGVKe Kpretty_stream_bufferYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kpretty_stream_buffer_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kpretty_stream_buffer_setterYprint_internalsVioMM0;
static _KLpairGVKd K346;
static _KLbyte_stringGVKd_27 K347;
extern _KLgetter_methodGVKi Kpretty_stream_bufferYprint_internalsVioMM0;
static _KLpairGVKd K349;
static _KLbyte_stringGVKd_20 K350;
static _KLsimple_closure_methodGVKi_0 K360;
static D K360I ();
static _KLsymbolGVKd KJline_length_;
extern _KLsealed_generic_functionGVKe Kpretty_stream_line_lengthYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_line_lengthYprint_internalsVioMM0;
static _KLpairGVKd K357;
static _KLbyte_stringGVKd_25 K358;
static _KLbyte_stringGVKd_11 K359;
static _KLsymbolGVKd KJtarget_;
extern _KLsealed_generic_functionGVKe Kpretty_stream_targetYprint_internalsVio;
extern _KLgetter_methodGVKi Kpretty_stream_targetYprint_internalsVioMM0;
static _KLpairGVKd K364;
static _KLbyte_stringGVKd_20 K365;
static _KLbyte_stringGVKd_6 K366;
static D K384I ();
static D K383I ();
static D K382I ();
static _KLunionGVKe K370;
static _KLunionGVKe K371;
static D K381I ();
static D K380I ();
static D K379I ();
static D K378I ();
static D K377I ();
static _KLkeyword_signatureAvaluesGVKi K385;
static _KLsimple_object_vectorGVKd_14 K386;
static _KLsymbolGVKd KJstream_lock_;
static _KLsymbolGVKd KJcontents_;
static _KLbyte_stringGVKd_8 K389;
static _KLbyte_stringGVKd_11 K390;
static _KLsimple_object_vectorGVKd_7 K391;
static _KLsimple_object_vectorGVKd_1 K392;
static _KLbyte_stringGVKd_15 K393;
D Kindex_columnYprint_internalsVioMM0I (D, D);
D Kindex_posnYprint_internalsVioMM0I (D, D);
static _KLbyte_stringGVKd_7 K396;
extern _KLgetter_methodGVKi Klogical_block_start_columnYprint_internalsVioMM0;
static _KLpairGVKd K398;
static _KLbyte_stringGVKd_26 K399;
extern _KLinstance_slot_descriptorGVKe Klogical_block_start_columnYprint_internalsVioHLlogical_blockG;
static _KLbyte_stringGVKd_5 K401;
static _KLimplementation_classGVKe K402;
static _KLsimple_object_vectorGVKd_3 K403;
extern _KLkeyword_methodGVKe KLindentationGZ32ZconstructorYprint_internalsVioMM0;
D KLindentationGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K406;
static _KLsimple_object_vectorGVKd_2 K407;
extern _KLinstance_slot_descriptorGVKe Kindentation_kindYprint_internalsVioHLindentationG;
extern _KLinstance_slot_descriptorGVKe Kindentation_amountYprint_internalsVioHLindentationG;
static _KLsymbolGVKd KJamount_;
extern _KLsealed_generic_functionGVKe Kindentation_amountYprint_internalsVio;
extern _KLgetter_methodGVKi Kindentation_amountYprint_internalsVioMM0;
static _KLpairGVKd K413;
static _KLbyte_stringGVKd_18 K414;
static _KLbyte_stringGVKd_6 K415;
extern _KLsealed_generic_functionGVKe Kindentation_kindYprint_internalsVio;
extern _KLgetter_methodGVKi Kindentation_kindYprint_internalsVioMM0;
static _KLpairGVKd K418;
static _KLbyte_stringGVKd_16 K419;
static _KLkeyword_signatureAvaluesGVKi K420;
static _KLsimple_object_vectorGVKd_4 K421;
static _KLsimple_object_vectorGVKd_2 K422;
static _KLsimple_object_vectorGVKd_1 K423;
static _KLbyte_stringGVKd_13 K424;
extern _KLsealed_generic_functionGVKe Klogical_block_section_start_line_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Klogical_block_section_start_line_setterYprint_internalsVioMM0;
static _KLpairGVKd K427;
static _KLbyte_stringGVKd_39 K428;
extern _KLinstance_slot_descriptorGVKe Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG;
static _KLbyte_stringGVKd_9 K430;
static _KLunionGVKe K431;
static _KLunionGVKe K432;
static _KLsingletonGVKd K433;
static _KLsingletonGVKd K434;
extern _KLgetter_methodGVKi Klogical_block_section_start_lineYprint_internalsVioMM0;
static _KLpairGVKd K436;
static _KLbyte_stringGVKd_32 K437;
static _KLbyte_stringGVKd_7 K438;
extern _KLsetter_methodGVKi Ksection_start_section_end_setterYprint_internalsVioMM0;
static _KLpairGVKd K440;
static _KLbyte_stringGVKd_32 K441;
extern _KLgetter_methodGVKi Ksection_start_depthYprint_internalsVioMM0;
static _KLpairGVKd K443;
static _KLbyte_stringGVKd_19 K444;
extern _KLgetter_methodGVKi Ksection_start_section_endYprint_internalsVioMM0;
static _KLpairGVKd K446;
static _KLbyte_stringGVKd_25 K447;
static _KLimplementation_classGVKe K448;
static _KLsimple_object_vectorGVKd_3 K449;
static _KLsimple_object_vectorGVKd_6 K450;
static _KLsimple_object_vectorGVKd_2 K451;
static _KLbyte_stringGVKd_15 K452;
static _KLimplementation_classGVKe K453;
static _KLsimple_object_vectorGVKd_4 K454;
extern _KLkeyword_methodGVKe KLnewlineGZ32ZconstructorYprint_internalsVioMM0;
D KLnewlineGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K457;
static _KLsimple_object_vectorGVKd_1 K458;
extern _KLinstance_slot_descriptorGVKe Knewline_kindYprint_internalsVioHLnewlineG;
extern _KLsealed_generic_functionGVKe Knewline_kindYprint_internalsVio;
extern _KLunionGVKe KLnewline_kindGYprint_internalsVio;
static _KLsingletonGVKd K462;
extern _KLgetter_methodGVKi Knewline_kindYprint_internalsVioMM0;
static _KLpairGVKd K464;
static _KLbyte_stringGVKd_12 K465;
static _KLkeyword_signatureAvaluesGVKi K466;
static _KLsimple_object_vectorGVKd_4 K467;
static _KLsimple_object_vectorGVKd_2 K468;
static _KLsimple_object_vectorGVKd_1 K469;
static _KLbyte_stringGVKd_9 K470;
static _KLbyte_stringGVKd_5 K471;
static _KLbyte_stringGVKd_4 K472;
static _KLsignatureGVKe K473;
static _KLsimple_object_vectorGVKd_2 K474;
static _KLsingletonGVKd K475;
static _KLsingletonGVKd K476;
extern _KLsimple_methodGVKe Kpprint_indentYpprintVioMM0;
D Kpprint_indentYpprintVioMM0I (D, D, D);
extern _KLmethod_domainGVKe Kpprint_indentYpprintVioRD_ioRD_1;
static _KLpairGVKd K480;
static _KLpairGVKd K481;
static _KLsignatureGVKe K482;
static _KLbyte_stringGVKd_13 K483;
static _KLsimple_object_vectorGVKd_3 K484;
D Kenqueue_indentYprint_internalsVioMM0I (D, D, D);
static _KLsignatureGVKe K486;
static _KLsimple_object_vectorGVKd_3 K487;
static _KLunionGVKe K488;
static _KLsingletonGVKd K489;
static _KLsymbolGVKd KJsection_relative_;
static _KLbyte_stringGVKd_16 K491;
static _KLunionGVKe K492;
static _KLsingletonGVKd K493;
static _KLsymbolGVKd KJsection_;
static _KLbyte_stringGVKd_7 K495;
static _KLsingletonGVKd K496;
static _KLsingletonGVKd K497;
static _KLsymbolGVKd KJline_relative_;
static _KLbyte_stringGVKd_13 K499;
static _KLsymbolGVKd KJline_;
static _KLbyte_stringGVKd_4 K501;
extern _KLsimple_methodGVKe Kpprint_tabYpprintVioMM0;
D Kpprint_tabYpprintVioMM0I (D, D, D, D);
extern _KLmethod_domainGVKe Kpprint_tabYpprintVioRD_ioRD_1;
static _KLpairGVKd K505;
static _KLpairGVKd K506;
static _KLsignatureGVKe K507;
static _KLbyte_stringGVKd_10 K508;
static _KLsimple_object_vectorGVKd_4 K509;
extern _KLsimple_methodGVKe Kenqueue_tabYprint_internalsVioMM0;
D Kenqueue_tabYprint_internalsVioMM0I (D, D, D, D);
static _KLsignatureGVKe K512;
static _KLsimple_object_vectorGVKd_4 K513;
static _KLsignatureGVKe K514;
static _KLsimple_object_vectorGVKd_4 K515;
extern _KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM0;
D Kpprint_logical_blockYpprintVioMM0I (D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM1;
D Kpprint_logical_blockYpprintVioMM1I (D, D, D, D, D, D, D);
extern _KLmethod_domainGVKe Kpprint_logical_blockYpprintVioRD_ioRD_1;
static _KLpairGVKd K521;
static _KLpairGVKd K522;
static _KLpairGVKd K523;
static _KLkeyword_signatureGVKe K524;
static _KLbyte_stringGVKd_20 K525;
static _KLsimple_object_vectorGVKd_1 K526;
static _KLsimple_object_vectorGVKd_5 K527;
static _KLsimple_object_vectorGVKd_5 K528;
static _KLsymbolGVKd KJper_line_prefix_;
static _KLsymbolGVKd KJbody_;
static _KLbyte_stringGVKd_4 K531;
static _KLbyte_stringGVKd_15 K532;
static _KLbyte_stringGVKd_51 K533;
D Kstart_logical_blockYprint_internalsVioMM0I (D, D, D, D);
D Kend_logical_blockYprint_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kappend_raw_outputYprint_internalsVioMM0;
D Kappend_raw_outputYprint_internalsVioMM0I (D, D, D, D);
static _KLunionGVKe K538;
D Kassure_space_in_bufferYprint_internalsVioMM0I (D, D);
D Koutput_partial_lineYprint_internalsVioMM0I (D);
extern _KLsimple_methodGVKe Kposn_indexYprint_internalsVioMM0;
static _KLbyte_stringGVKd_54 K542;
static _KLsignatureAvaluesGVKi K543;
static _KLsimple_object_vectorGVKd_2 K544;
static _KLsimple_object_vectorGVKd_1 K545;
static _KLsignatureGVKe K546;
static _KLsimple_object_vectorGVKd_4 K547;
static _KLkeyword_signatureGVKe K548;
static _KLsimple_object_vectorGVKd_10 K549;
static _KLimplementation_classGVKe K550;
static _KLsimple_object_vectorGVKd_1 K551;
static _KLsimple_object_vectorGVKd_6 K552;
static _KLbyte_stringGVKd_11 K553;
static _KLimplementation_classGVKe K554;
static _KLsimple_object_vectorGVKd_6 K555;
extern _KLkeyword_methodGVKe KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0;
D KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K558;
static _KLkeyword_signatureAvaluesGVKi K559;
static _KLsimple_object_vectorGVKd_12 K560;
static _KLsimple_object_vectorGVKd_6 K561;
static _KLsimple_object_vectorGVKd_1 K562;
static _KLbyte_stringGVKd_15 K563;
static _KLunionGVKe K564;
extern _KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM6;
D KcloseYcommon_extensionsVcommon_dylanMioM6I (D, D);
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM4;
D KwriteYstreams_protocolVcommon_dylanMioM4I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM4;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM4I (D, D);
extern _KLsetter_methodGVKi Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVioMM0;
static _KLpairGVKd K575;
extern _KLsetter_methodGVKi Kpretty_stream_buffer_offset_setterYprint_internalsVioMM0;
static _KLpairGVKd K577;
extern _KLsetter_methodGVKi Kpretty_stream_blocks_setterYprint_internalsVioMM0;
static _KLpairGVKd K579;
extern _KLmethod_domainGVKe Kpprint_newlineYpprintVioRD_ioRD_1;
static _KLpairGVKd K581;
static _KLpairGVKd K582;
D Kappend_outputYprint_internalsVioMM1I (D, D, D, D);
static _KLsignatureGVKe K584;
static _KLsimple_object_vectorGVKd_2 K585;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K586;
extern _KLsealed_generic_functionGVKe Kappend_outputYprint_internalsVio;
extern _KLsimple_methodGVKe Kappend_outputYprint_internalsVioMM0;
D Kappend_outputYprint_internalsVioMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kappend_outputYprint_internalsVioMM1;
static _KLpairGVKd K591;
static _KLpairGVKd K592;
static _KLbyte_stringGVKd_13 K593;
static _KLsignatureGVKe K594;
static _KLsimple_object_vectorGVKd_4 K595;
static _KLsignatureGVKe K596;
static _KLsimple_object_vectorGVKd_4 K597;
static _KLkeyword_signatureGVKe K598;
static _KLsimple_object_vectorGVKd_4 K599;
static _KLsimple_object_vectorGVKd_2 K600;
static _KLsimple_object_vectorGVKd_2 K601;
static _KLkeyword_signatureGVKe K602;
static _KLpairGVKd K603;
static _KLpairGVKd K604;
static _KLpairGVKd K605;
static _KLpairGVKd K606;
static _KLpairGVKd K607;
static _KLpairGVKd K608;

/* Indirection variables */

static D IKJmandatory_ = &KJmandatory_;
static D IKJmiser_ = &KJmiser_;
static D IKJlinear_ = &KJlinear_;
static D IKJkind_ = &KJkind_;
static D IKJdepth_ = &KJdepth_;
static D IKJliteral_ = &KJliteral_;
static D IKJdont_know_ = &KJdont_know_;
static D IKJblock_ = &KJblock_;
static D IKJcurrent_ = &KJcurrent_;
static D IKJcolinc_ = &KJcolinc_;
static D IKJcolnum_ = &KJcolnum_;
static D IKJrelativeQ_ = &KJrelativeQ_;
static D IKJsectionQ_ = &KJsectionQ_;
static D IKJprefix_length_ = &KJprefix_length_;
static D IKJstart_column_ = &KJstart_column_;
static D IKJsection_column_ = &KJsection_column_;
static D IKJper_line_prefix_end_ = &KJper_line_prefix_end_;
static D IKJsuffix_length_ = &KJsuffix_length_;
static D IKJsection_start_line_ = &KJsection_start_line_;
static D IKJsuffix_ = &KJsuffix_;
static D IKJprefix_ = &KJprefix_;
static D IKJcolumn_ = &KJcolumn_;
static D IKJline_length_ = &KJline_length_;
static D IKJtarget_ = &KJtarget_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJcontents_ = &KJcontents_;
static D IKJamount_ = &KJamount_;
static D IKJsection_relative_ = &KJsection_relative_;
static D IKJsection_ = &KJsection_;
static D IKJline_relative_ = &KJline_relative_;
static D IKJline_ = &KJline_;
static D IKJper_line_prefix_ = &KJper_line_prefix_;
static D IKJbody_ = &KJbody_;

/* Variables */

D Tprint_miser_widthTYpprintVio = &KPfalseVKi;
D Tdefault_line_lengthTYpprintVio = (D) 321;
D Lpretty_streamGYpprintVio = &KLpretty_streamGYpprintVio;
D Llogical_blockGYprint_internalsVio = &KLlogical_blockGYprint_internalsVio;
D Lqueued_opGYprint_internalsVio = &KLqueued_opGYprint_internalsVio;
D Lsection_startGYprint_internalsVio = &KLsection_startGYprint_internalsVio;
D LnewlineGYprint_internalsVio = &KLnewlineGYprint_internalsVio;
D LindentationGYprint_internalsVio = &KLindentationGYprint_internalsVio;
D Lblock_startGYprint_internalsVio = &KLblock_startGYprint_internalsVio;
D Lblock_endGYprint_internalsVio = &KLblock_endGYprint_internalsVio;
D LtabGYprint_internalsVio = &KLtabGYprint_internalsVio;
D pprint_logical_blockYpprintVio = &Kpprint_logical_blockYpprintVio;
D pprint_newlineYpprintVio = &Kpprint_newlineYpprintVio;
D pprint_indentYpprintVio = &Kpprint_indentYpprintVio;
D pprint_tabYpprintVio = &Kpprint_tabYpprintVio;

/* Objects */

_KLclassGVKd KLlogical_blockGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K563,
  &K554,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLlogical_blockGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K554,
  (D) 1,
  25,
  33554439,
  (D) 1
};

_KLclassGVKd KLqueued_opGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K553,
  &K550,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLqueued_opGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K550,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kpprint_logical_blockYpprintVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K524,
  (D) 1,
  &K525,
  &K521,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kpprint_moduleYdylan_userVio,
  &Kpprint_logical_blockYpprintVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kpprint_tabYpprintVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K507,
  (D) 1,
  &K508,
  &K505,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kpprint_moduleYdylan_userVio,
  &Kpprint_tabYpprintVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLtab_kindGYprint_internalsVio = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K488,
  &K489
};

_KLincremental_generic_functionGVKe Kpprint_indentYpprintVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K482,
  (D) 1,
  &K483,
  &K480,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kpprint_moduleYdylan_userVio,
  &Kpprint_indentYpprintVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLindentation_kindGYprint_internalsVio = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K475,
  &K476
};

_KLincremental_generic_functionGVKe Kpprint_newlineYpprintVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K27,
  (D) 1,
  &K28,
  &K581,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kpprint_moduleYdylan_userVio,
  &Kpprint_newlineYpprintVioRD_ioRD_1,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLpretty_newline_kindGYprint_internalsVio = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K13,
  &K14
};

static _KLunionGVKe K13 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K17,
  &K18
};

static _KLsingletonGVKd K14 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJmandatory_
};

static _KLsymbolGVKd KJmandatory_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K16
};

static _KLbyte_stringGVKd_9 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "mandatory"
};

static _KLunionGVKe K17 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K21,
  &K22
};

static _KLsingletonGVKd K18 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJmiser_
};

static _KLsymbolGVKd KJmiser_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K20
};

static _KLbyte_stringGVKd_5 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "miser"
};

static _KLsingletonGVKd K21 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJlinear_
};

static _KLsingletonGVKd K22 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJfill_
};

static _KLsymbolGVKd KJlinear_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K24
};

static _KLbyte_stringGVKd_6 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "linear"
};

_KLsimple_methodGVKe Kpprint_newlineYpprintVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K473,
  &Kpprint_newlineYpprintVioMM0I
};

static _KLsignatureGVKe K27 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K29
};

static _KLbyte_stringGVKd_14 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "pprint-newline"
};

static _KLsimple_object_vectorGVKd_2 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_newline_kindGYprint_internalsVio,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_18 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "%= has been closed"
};

static _KLsymbolGVKd KJkind_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K472
};

static _KLsymbolGVKd KJdepth_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K471
};

_KLclassGVKd KLnewlineGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K470,
  &K453,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLnewlineGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K453,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLclassGVKd KLsection_startGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K452,
  &K448,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLsection_startGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K448,
  (D) 1,
  13,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Ksection_start_section_endYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K447,
  &K446,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksection_start_depthYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K444,
  &K443,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksection_start_section_end_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K441,
  &K440,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJliteral_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K438
};

_KLsealed_generic_functionGVKe Klogical_block_section_start_lineYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K437,
  &K436,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJdont_know_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K430
};

static _KLbyte_stringGVKd_32 K48 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_27 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "Strange kind of newline: %="
};

_KLclassGVKd KLindentationGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K424,
  &K402,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLindentationGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K402,
  (D) 1,
  13,
  33554439,
  (D) 1
};

static _KLsymbolGVKd KJblock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K401
};

_KLsealed_generic_functionGVKe Klogical_block_start_columnYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K399,
  &K398,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJcurrent_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K396
};

static _KLbyte_stringGVKd_31 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Strange kind of indentation: %="
};

_KLsimple_methodGVKe Kset_indentationYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K236,
  &Kset_indentationYprint_internalsVioMM0I
};

_KLclassGVKd KLblock_startGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K235,
  &K194,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLblock_startGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K194,
  (D) 1,
  25,
  33554439,
  (D) 1
};

_KLclassGVKd KLblock_endGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K141,
  &K134,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLblock_endGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K134,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLtabGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K120,
  &K70,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLtabGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K70,
  (D) 1,
  21,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_26 K69 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "Strange thing in queue: %="
};

static _KLimplementation_classGVKe K70 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433749,
  &KLtabGYprint_internalsVio,
  &KLtabGYprint_internalsVioW,
  &KPfalseVKi,
  &K71,
  (D) -3,
  &KLtabGZ32ZconstructorYprint_internalsVioMM0,
  &K74,
  &K75,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K76,
  &K71,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kop_posnYprint_internalsVioHLqueued_opG,
  &Ktab_sectionQYprint_internalsVioHLtabG,
  &Ktab_relativeQYprint_internalsVioHLtabG,
  &Ktab_colnumYprint_internalsVioHLtabG,
  &Ktab_colincYprint_internalsVioHLtabG
};

_KLkeyword_methodGVKe KLtabGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K107,
  &key_mep_2,
  &KLtabGZ32ZconstructorYprint_internalsVioMM0I,
  &K108
};

static _KLsimple_object_vectorGVKd_1 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLqueued_opGYprint_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLtabGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Ktab_sectionQYprint_internalsVioHLtabG,
  &Ktab_relativeQYprint_internalsVioHLtabG,
  &Ktab_colnumYprint_internalsVioHLtabG,
  &Ktab_colincYprint_internalsVioHLtabG
};

_KLinstance_slot_descriptorGVKe Ktab_sectionQYprint_internalsVioHLtabG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtabGYprint_internalsVio,
  &KJsectionQ_,
  &Ktab_sectionQYprint_internalsVio,
  &KPfalseVKi,
  &KLbooleanGVKd
};

_KLinstance_slot_descriptorGVKe Ktab_relativeQYprint_internalsVioHLtabG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtabGYprint_internalsVio,
  &KJrelativeQ_,
  &Ktab_relativeQYprint_internalsVio,
  &KPfalseVKi,
  &KLbooleanGVKd
};

_KLinstance_slot_descriptorGVKe Ktab_colnumYprint_internalsVioHLtabG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtabGYprint_internalsVio,
  &KJcolnum_,
  &Ktab_colnumYprint_internalsVio,
  &KPfalseVKi,
  &KLcolumnGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Ktab_colincYprint_internalsVioHLtabG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtabGYprint_internalsVio,
  &KJcolinc_,
  &Ktab_colincYprint_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJcolinc_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K86
};

_KLsealed_generic_functionGVKe Ktab_colincYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K85,
  &K84,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktab_colincYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktab_colincYprint_internalsVioHLtabG
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &Ktab_colincYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "tab-colinc"
};

static _KLbyte_stringGVKd_6 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "colinc"
};

static _KLsymbolGVKd KJcolnum_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K93
};

_KLsealed_generic_functionGVKe Ktab_colnumYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K92,
  &K91,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLlimited_integerGVKe KLcolumnGYprint_internalsVio = {
  &KLlimited_integerGVKeW /* wrapper */,
  &Kuninitialized_instanceQ_functionVKiI,
  (D) 1,
  &KPfalseVKi
};

_KLgetter_methodGVKi Ktab_colnumYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktab_colnumYprint_internalsVioHLtabG
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Ktab_colnumYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "tab-colnum"
};

static _KLbyte_stringGVKd_6 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "colnum"
};

static _KLsymbolGVKd KJrelativeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

_KLsealed_generic_functionGVKe Ktab_relativeQYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K98,
  &K97,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktab_relativeQYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktab_relativeQYprint_internalsVioHLtabG
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Ktab_relativeQYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "tab-relative?"
};

static _KLbyte_stringGVKd_9 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "relative?"
};

static _KLsymbolGVKd KJsectionQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K105
};

_KLsealed_generic_functionGVKe Ktab_sectionQYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K104,
  &K103,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktab_sectionQYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktab_sectionQYprint_internalsVioHLtabG
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &Ktab_sectionQYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K104 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "tab-section?"
};

static _KLbyte_stringGVKd_8 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "section?"
};

static _KLbyte_stringGVKd_23 K106 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K107 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K109,
  &KDsignature_LobjectG_typesVKi,
  &K110
};

static _KLsimple_object_vectorGVKd_8 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJsectionQ_,
  &KPunboundVKi,
  &KJrelativeQ_,
  &KPunboundVKi,
  &KJcolnum_,
  &KPunboundVKi,
  &KJcolinc_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsectionQ_,
  &KJrelativeQ_,
  &KJcolnum_,
  &KJcolinc_
};

static _KLsimple_object_vectorGVKd_1 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtabGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Kop_posnYprint_internalsVioHLqueued_opG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLqueued_opGYprint_internalsVio,
  &KPfalseVKi,
  &Kop_posnYprint_internalsVio,
  &Kop_posn_setterYprint_internalsVio,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kop_posnYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K119,
  &K118,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kop_posn_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K116,
  &K115,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kop_posn_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kop_posnYprint_internalsVioHLqueued_opG
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Kop_posn_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "op-posn-setter"
};

_KLgetter_methodGVKi Kop_posnYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kop_posnYprint_internalsVioHLqueued_opG
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &Kop_posnYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "op-posn"
};

static _KLbyte_stringGVKd_5 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "<tab>"
};

_KLsealed_generic_functionGVKe Klogical_block_prefix_lengthYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K126,
  &K125,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_blocks_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K123,
  &K579,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLbyte_stringGVKd_27 K123 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pretty-stream-blocks-setter"
};

_KLgetter_methodGVKi Klogical_block_prefix_lengthYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_prefix_lengthYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "logical-block-prefix-length"
};

_KLinstance_slot_descriptorGVKe Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJprefix_length_,
  &Klogical_block_prefix_lengthYprint_internalsVio,
  &Klogical_block_prefix_length_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

static _KLsymbolGVKd KJprefix_length_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K133
};

_KLsealed_generic_functionGVKe Klogical_block_prefix_length_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K132,
  &K131,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klogical_block_prefix_length_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_prefix_length_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "logical-block-prefix-length-setter"
};

static _KLbyte_stringGVKd_13 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "prefix-length"
};

static _KLimplementation_classGVKe K134 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLblock_endGYprint_internalsVio,
  &KLblock_endGYprint_internalsVioW,
  &KPfalseVKi,
  &K135,
  (D) -3,
  &KLblock_endGZ32ZconstructorYprint_internalsVioMM0,
  &K74,
  &K138,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K135,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kop_posnYprint_internalsVioHLqueued_opG
};

_KLkeyword_methodGVKe KLblock_endGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K139,
  &key_mep_2,
  &KLblock_endGZ32ZconstructorYprint_internalsVioMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLblock_endGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K139 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K140
};

static _KLsimple_object_vectorGVKd_1 K140 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLblock_endGYprint_internalsVio
};

static _KLbyte_stringGVKd_11 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "<block-end>"
};

_KLsealed_generic_functionGVKe Klogical_block_per_line_prefix_endYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K164,
  &K163,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Klogical_block_suffix_lengthYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K161,
  &K160,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJstart_column_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K158
};

static _KLsymbolGVKd KJsection_column_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K157
};

static _KLsymbolGVKd KJper_line_prefix_end_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K156
};

static _KLsymbolGVKd KJsuffix_length_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K155
};

static _KLsymbolGVKd KJsection_start_line_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K154
};

_KLsealed_generic_functionGVKe Klogical_block_suffix_length_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K152,
  &K151,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klogical_block_suffix_length_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K151 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_suffix_length_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K152 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "logical-block-suffix-length-setter"
};

_KLinstance_slot_descriptorGVKe Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJsuffix_length_,
  &Klogical_block_suffix_lengthYprint_internalsVio,
  &Klogical_block_suffix_length_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

static _KLbyte_stringGVKd_18 K154 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "section-start-line"
};

static _KLbyte_stringGVKd_13 K155 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "suffix-length"
};

static _KLbyte_stringGVKd_19 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "per-line-prefix-end"
};

static _KLbyte_stringGVKd_14 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "section-column"
};

static _KLbyte_stringGVKd_12 K158 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "start-column"
};

_KLgetter_methodGVKi Klogical_block_suffix_lengthYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K160 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_suffix_lengthYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K161 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "logical-block-suffix-length"
};

_KLgetter_methodGVKi Klogical_block_per_line_prefix_endYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K163 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_per_line_prefix_endYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "logical-block-per-line-prefix-end"
};

_KLinstance_slot_descriptorGVKe Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJper_line_prefix_end_,
  &Klogical_block_per_line_prefix_endYprint_internalsVio,
  &Klogical_block_per_line_prefix_end_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

_KLsealed_generic_functionGVKe Klogical_block_per_line_prefix_end_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K169,
  &K168,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klogical_block_per_line_prefix_end_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K168 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_per_line_prefix_end_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_40 K169 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "logical-block-per-line-prefix-end-setter"
};

_KLsealed_generic_functionGVKe Klogical_block_section_columnYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K188,
  &K187,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kcompute_tab_sizeYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K184,
  &Kcompute_tab_sizeYprint_internalsVioMM0I
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K183,
  &K575,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_offset_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K182,
  &K577,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K180,
  &Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0I
};

static _KLbyte_stringGVKd_105 K178 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 421,
  "Source parameters for copy-maybe-overlapping-bytes from %= are out of range - start at %d, copy %d bytes."
};

static _KLbyte_stringGVKd_108 K179 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 433,
  "Destination parameters for copy-maybe-overlapping-bytes to %= are out of range - start at %d, copy %d bytes."
};

static _KLsignatureGVKe K180 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K181
};

static _KLsimple_object_vectorGVKd_5 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_34 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "pretty-stream-buffer-offset-setter"
};

static _KLbyte_stringGVKd_40 K183 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "pretty-stream-buffer-fill-pointer-setter"
};

static _KLsignatureAvaluesGVKi K184 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K185,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K185 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtabGYprint_internalsVio,
  &KLcolumnGYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

_KLgetter_methodGVKi Klogical_block_section_columnYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_section_columnYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_section_columnYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K188 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "logical-block-section-column"
};

_KLinstance_slot_descriptorGVKe Klogical_block_section_columnYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJsection_column_,
  &Klogical_block_section_columnYprint_internalsVio,
  &Klogical_block_section_column_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

_KLsealed_generic_functionGVKe Klogical_block_section_column_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K193,
  &K192,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klogical_block_section_column_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klogical_block_section_columnYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K192 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_section_column_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_35 K193 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "logical-block-section-column-setter"
};

static _KLimplementation_classGVKe K194 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433753,
  &KLblock_startGYprint_internalsVio,
  &KLblock_startGYprint_internalsVioW,
  &KPfalseVKi,
  &K195,
  (D) -3,
  &KLblock_startGZ32ZconstructorYprint_internalsVioMM0,
  &K198,
  &K199,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K200,
  &K195,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Kop_posnYprint_internalsVioHLqueued_opG,
  &Ksection_start_depthYprint_internalsVioHLsection_startG,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG,
  &Kblock_start_block_endYprint_internalsVioHLblock_startG,
  &Kblock_start_prefixYprint_internalsVioHLblock_startG,
  &Kblock_start_suffixYprint_internalsVioHLblock_startG
};

_KLkeyword_methodGVKe KLblock_startGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K227,
  &key_mep_2,
  &KLblock_startGZ32ZconstructorYprint_internalsVioMM0I,
  &K228
};

static _KLsimple_object_vectorGVKd_1 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsection_startGYprint_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K199 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLsection_startGYprint_internalsVio,
  &KLblock_startGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kblock_start_block_endYprint_internalsVioHLblock_startG,
  &Kblock_start_prefixYprint_internalsVioHLblock_startG,
  &Kblock_start_suffixYprint_internalsVioHLblock_startG
};

_KLinstance_slot_descriptorGVKe Kblock_start_block_endYprint_internalsVioHLblock_startG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLblock_startGYprint_internalsVio,
  &KPfalseVKi,
  &Kblock_start_block_endYprint_internalsVio,
  &Kblock_start_block_end_setterYprint_internalsVio,
  &K220
};

_KLinstance_slot_descriptorGVKe Kblock_start_prefixYprint_internalsVioHLblock_startG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLblock_startGYprint_internalsVio,
  &KJprefix_,
  &Kblock_start_prefixYprint_internalsVio,
  &KPfalseVKi,
  &K206
};

_KLinstance_slot_descriptorGVKe Kblock_start_suffixYprint_internalsVioHLblock_startG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLblock_startGYprint_internalsVio,
  &KJsuffix_,
  &Kblock_start_suffixYprint_internalsVio,
  &KPfalseVKi,
  &K206
};

static _KLsymbolGVKd KJsuffix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K211
};

_KLsealed_generic_functionGVKe Kblock_start_suffixYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K210,
  &K209,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K206 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K207 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLgetter_methodGVKi Kblock_start_suffixYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kblock_start_suffixYprint_internalsVioHLblock_startG
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &Kblock_start_suffixYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K210 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "block-start-suffix"
};

static _KLbyte_stringGVKd_6 K211 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "suffix"
};

static _KLsymbolGVKd KJprefix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K217
};

_KLsealed_generic_functionGVKe Kblock_start_prefixYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K216,
  &K215,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kblock_start_prefixYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kblock_start_prefixYprint_internalsVioHLblock_startG
};

static _KLpairGVKd K215 = {
  &KLpairGVKdW /* wrapper */,
  &Kblock_start_prefixYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K216 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "block-start-prefix"
};

static _KLbyte_stringGVKd_6 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "prefix"
};

_KLsealed_generic_functionGVKe Kblock_start_block_endYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K226,
  &K225,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kblock_start_block_end_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K223,
  &K222,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K220 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLblock_endGYprint_internalsVio
};

_KLsetter_methodGVKi Kblock_start_block_end_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kblock_start_block_endYprint_internalsVioHLblock_startG
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &Kblock_start_block_end_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K223 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "block-start-block-end-setter"
};

_KLgetter_methodGVKi Kblock_start_block_endYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kblock_start_block_endYprint_internalsVioHLblock_startG
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &Kblock_start_block_endYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K226 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "block-start-block-end"
};

static _KLkeyword_signatureAvaluesGVKi K227 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K229,
  &KDsignature_LobjectG_typesVKi,
  &K230
};

static _KLsimple_object_vectorGVKd_6 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJdepth_,
  &KPunboundVKi,
  &KJprefix_,
  &KPunboundVKi,
  &KJsuffix_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K229 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJdepth_,
  &KJprefix_,
  &KJsuffix_
};

static _KLsimple_object_vectorGVKd_1 K230 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLblock_startGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Ksection_start_depthYprint_internalsVioHLsection_startG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLsection_startGYprint_internalsVio,
  &KJdepth_,
  &Ksection_start_depthYprint_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Ksection_start_section_endYprint_internalsVioHLsection_startG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsection_startGYprint_internalsVio,
  &KPfalseVKi,
  &Ksection_start_section_endYprint_internalsVio,
  &Ksection_start_section_end_setterYprint_internalsVio,
  &K233
};

static _KLunionGVKe K233 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K234,
  &KLblock_endGYprint_internalsVio
};

static _KLunionGVKe K234 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLnewlineGYprint_internalsVio
};

static _KLbyte_stringGVKd_13 K235 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<block-start>"
};

static _KLsignatureGVKe K236 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K237
};

static _KLsimple_object_vectorGVKd_2 K237 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_streamGYpprintVio,
  &KLcolumnGYprint_internalsVio
};

_KLclassGVKd KLpretty_streamGYpprintVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K393,
  &K240,
  (D) 1,
  &Kpprint_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLpretty_streamGYpprintVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K240,
  (D) 1,
  89,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K240 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433817,
  &KLpretty_streamGYpprintVio,
  &KLpretty_streamGYpprintVioW,
  &KPfalseVKi,
  &K241,
  (D) -3,
  &KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0,
  &K244,
  &K245,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K246,
  &K241,
  &K247,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_22 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 89,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kstream_sequenceYstreams_internalsVioHLsequence_streamG,
  &Kstream_limitYstreamsVioHLsequence_streamG,
  &Kpretty_stream_targetYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_queueYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG
};

_KLkeyword_methodGVKe KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K385,
  &key_mep_2,
  &KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0I,
  &K386
};

static _KLsimple_object_vectorGVKd_1 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequence_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_8 K245 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio,
  &KLpretty_streamGYpprintVio
};

static _KLsimple_object_vectorGVKd_13 K246 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
  &Kpretty_stream_targetYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_queueYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG,
  &Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG
};

static _KLsimple_object_vectorGVKd_1 K247 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_directionYstreams_internalsVioHLpretty_streamG
};

static _KLinherited_slot_descriptorGVKe Kstream_directionYstreams_internalsVioHLpretty_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 29,
  &KJoutput_,
  &KLpretty_streamGYpprintVio,
  &Kstream_directionYstreams_internalsVio
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_targetYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLpretty_streamGYpprintVio,
  &KJtarget_,
  &Kpretty_stream_targetYprint_internalsVio,
  &KPfalseVKi,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K360,
  &KLpretty_streamGYpprintVio,
  &KJline_length_,
  &Kpretty_stream_line_lengthYprint_internalsVio,
  &KPfalseVKi,
  &KLcolumnGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K351,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_bufferYprint_internalsVio,
  &Kpretty_stream_buffer_setterYprint_internalsVio,
  &KLbyte_stringGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVio,
  &Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_buffer_offsetYprint_internalsVio,
  &Kpretty_stream_buffer_offset_setterYprint_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLpretty_streamGYpprintVio,
  &KJcolumn_,
  &Kpretty_stream_buffer_start_columnYprint_internalsVio,
  &Kpretty_stream_buffer_start_column_setterYprint_internalsVio,
  &KLcolumnGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_line_numberYprint_internalsVio,
  &Kpretty_stream_line_number_setterYprint_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K314,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_blocksYprint_internalsVio,
  &Kpretty_stream_blocks_setterYprint_internalsVio,
  &KLlistGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K307,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_prefixYprint_internalsVio,
  &Kpretty_stream_prefix_setterYprint_internalsVio,
  &KLbyte_stringGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K296,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_suffixYprint_internalsVio,
  &Kpretty_stream_suffix_setterYprint_internalsVio,
  &KLbyte_stringGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_queueYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K284,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_queueYprint_internalsVio,
  &KPfalseVKi,
  &KLdequeGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_listVKi,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_pending_blocksYprint_internalsVio,
  &Kpretty_stream_pending_blocks_setterYprint_internalsVio,
  &KLlistGVKd
};

_KLinstance_slot_descriptorGVKe Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLpretty_streamGYpprintVio,
  &KPfalseVKi,
  &Kpretty_stream_closedQYprint_internalsVio,
  &Kpretty_stream_closedQ_setterYprint_internalsVio,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe Kpretty_stream_closedQYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K269,
  &K268,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_closedQ_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K266,
  &K265,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_closedQ_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K265 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_closedQ_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K266 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "pretty-stream-closed?-setter"
};

_KLgetter_methodGVKi Kpretty_stream_closedQYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_closedQYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_closedQYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K269 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "pretty-stream-closed?"
};

_KLsealed_generic_functionGVKe Kpretty_stream_pending_blocksYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K277,
  &K276,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_pending_blocks_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K274,
  &K273,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_pending_blocks_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K273 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_pending_blocks_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_35 K274 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "pretty-stream-pending-blocks-setter"
};

_KLgetter_methodGVKi Kpretty_stream_pending_blocksYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_pending_blocksYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_pending_blocksYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K277 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "pretty-stream-pending-blocks"
};

static _KLsimple_closure_methodGVKi_0 K284 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K284I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpretty_stream_queueYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K283,
  &K282,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_queueYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_queueYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K282 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_queueYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K283 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "pretty-stream-queue"
};

static _KLsignatureGVKe K285 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 K296 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K296I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpretty_stream_suffixYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K295,
  &K294,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_suffix_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K292,
  &K291,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_suffix_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K291 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_suffix_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K292 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pretty-stream-suffix-setter"
};

_KLgetter_methodGVKi Kpretty_stream_suffixYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_suffixYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K294 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_suffixYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K295 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pretty-stream-suffix"
};

static _KLsimple_closure_methodGVKi_0 K307 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K307I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpretty_stream_prefixYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K306,
  &K305,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_prefix_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K303,
  &K302,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_prefix_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K302 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_prefix_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pretty-stream-prefix-setter"
};

_KLgetter_methodGVKi Kpretty_stream_prefixYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_prefixYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K305 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_prefixYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K306 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pretty-stream-prefix"
};

static _KLsimple_closure_methodGVKi_0 K314 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K314I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpretty_stream_blocksYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K313,
  &K312,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_blocksYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K312 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_blocksYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K313 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pretty-stream-blocks"
};

_KLsealed_generic_functionGVKe Kpretty_stream_line_numberYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K322,
  &K321,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_line_number_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K319,
  &K318,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_line_number_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K318 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_line_number_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_32 K319 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "pretty-stream-line-number-setter"
};

_KLgetter_methodGVKi Kpretty_stream_line_numberYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_line_numberYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_line_numberYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K322 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "pretty-stream-line-number"
};

static _KLsymbolGVKd KJcolumn_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K332
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_start_columnYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K331,
  &K330,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_start_column_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K328,
  &K327,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_buffer_start_column_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K327 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_start_column_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_40 K328 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "pretty-stream-buffer-start-column-setter"
};

_KLgetter_methodGVKi Kpretty_stream_buffer_start_columnYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K330 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_start_columnYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K331 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "pretty-stream-buffer-start-column"
};

static _KLbyte_stringGVKd_6 K332 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "column"
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_offsetYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K336,
  &K335,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_buffer_offsetYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K335 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_offsetYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K336 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pretty-stream-buffer-offset"
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_fill_pointerYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K340,
  &K339,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_buffer_fill_pointerYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K339 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K340 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "pretty-stream-buffer-fill-pointer"
};

static _KLsimple_closure_methodGVKi_0 K351 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K351I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpretty_stream_bufferYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K350,
  &K349,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpretty_stream_buffer_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K347,
  &K346,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpretty_stream_buffer_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K346 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K347 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pretty-stream-buffer-setter"
};

_KLgetter_methodGVKi Kpretty_stream_bufferYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_bufferYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K349 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_bufferYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K350 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pretty-stream-buffer"
};

static _KLsimple_closure_methodGVKi_0 K360 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K285,
  &K360I,
  (D) 1
};

static _KLsymbolGVKd KJline_length_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K359
};

_KLsealed_generic_functionGVKe Kpretty_stream_line_lengthYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K358,
  &K357,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_line_lengthYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K357 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_line_lengthYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K358 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "pretty-stream-line-length"
};

static _KLbyte_stringGVKd_11 K359 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "line-length"
};

static _KLsymbolGVKd KJtarget_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K366
};

_KLsealed_generic_functionGVKe Kpretty_stream_targetYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K365,
  &K364,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpretty_stream_targetYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpretty_stream_targetYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K364 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_targetYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K365 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pretty-stream-target"
};

static _KLbyte_stringGVKd_6 K366 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "target"
};

static _KLunionGVKe K370 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K371 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLlockGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K385 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K391,
  &KDsignature_LobjectG_typesVKi,
  &K392
};

static _KLsimple_object_vectorGVKd_14 K386 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KJouter_stream_,
  &KPunboundVKi,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJstream_lock_,
  &KPunboundVKi,
  &KJcontents_,
  &KPunboundVKi,
  &KJtarget_,
  &KPunboundVKi,
  &KJline_length_,
  &KPunboundVKi,
  &KJcolumn_,
  (D) 1
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K390
};

static _KLsymbolGVKd KJcontents_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K389
};

static _KLbyte_stringGVKd_8 K389 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "contents"
};

static _KLbyte_stringGVKd_11 K390 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_7 K391 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJcontents_,
  &KJtarget_,
  &KJline_length_,
  &KJcolumn_
};

static _KLsimple_object_vectorGVKd_1 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpretty_streamGYpprintVio
};

static _KLbyte_stringGVKd_15 K393 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<pretty-stream>"
};

static _KLbyte_stringGVKd_7 K396 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "current"
};

_KLgetter_methodGVKi Klogical_block_start_columnYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_start_columnYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K398 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_start_columnYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K399 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "logical-block-start-column"
};

_KLinstance_slot_descriptorGVKe Klogical_block_start_columnYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJstart_column_,
  &Klogical_block_start_columnYprint_internalsVio,
  &KPfalseVKi,
  &KLcolumnGYprint_internalsVio
};

static _KLbyte_stringGVKd_5 K401 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "block"
};

static _KLimplementation_classGVKe K402 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLindentationGYprint_internalsVio,
  &KLindentationGYprint_internalsVioW,
  &KPfalseVKi,
  &K403,
  (D) -3,
  &KLindentationGZ32ZconstructorYprint_internalsVioMM0,
  &K74,
  &K406,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K407,
  &K403,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K403 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kop_posnYprint_internalsVioHLqueued_opG,
  &Kindentation_kindYprint_internalsVioHLindentationG,
  &Kindentation_amountYprint_internalsVioHLindentationG
};

_KLkeyword_methodGVKe KLindentationGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K420,
  &key_mep_2,
  &KLindentationGZ32ZconstructorYprint_internalsVioMM0I,
  &K421
};

static _KLsimple_object_vectorGVKd_6 K406 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLindentationGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K407 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kindentation_kindYprint_internalsVioHLindentationG,
  &Kindentation_amountYprint_internalsVioHLindentationG
};

_KLinstance_slot_descriptorGVKe Kindentation_kindYprint_internalsVioHLindentationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLindentationGYprint_internalsVio,
  &KJkind_,
  &Kindentation_kindYprint_internalsVio,
  &KPfalseVKi,
  &KLindentation_kindGYprint_internalsVio
};

_KLinstance_slot_descriptorGVKe Kindentation_amountYprint_internalsVioHLindentationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLindentationGYprint_internalsVio,
  &KJamount_,
  &Kindentation_amountYprint_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJamount_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K415
};

_KLsealed_generic_functionGVKe Kindentation_amountYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K414,
  &K413,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kindentation_amountYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kindentation_amountYprint_internalsVioHLindentationG
};

static _KLpairGVKd K413 = {
  &KLpairGVKdW /* wrapper */,
  &Kindentation_amountYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K414 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "indentation-amount"
};

static _KLbyte_stringGVKd_6 K415 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "amount"
};

_KLsealed_generic_functionGVKe Kindentation_kindYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K419,
  &K418,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kindentation_kindYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kindentation_kindYprint_internalsVioHLindentationG
};

static _KLpairGVKd K418 = {
  &KLpairGVKdW /* wrapper */,
  &Kindentation_kindYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K419 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "indentation-kind"
};

static _KLkeyword_signatureAvaluesGVKi K420 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K422,
  &KDsignature_LobjectG_typesVKi,
  &K423
};

static _KLsimple_object_vectorGVKd_4 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJkind_,
  &KPunboundVKi,
  &KJamount_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K422 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJkind_,
  &KJamount_
};

static _KLsimple_object_vectorGVKd_1 K423 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLindentationGYprint_internalsVio
};

static _KLbyte_stringGVKd_13 K424 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<indentation>"
};

_KLsealed_generic_functionGVKe Klogical_block_section_start_line_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K428,
  &K427,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klogical_block_section_start_line_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K427 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_section_start_line_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_39 K428 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "logical-block-section-start-line-setter"
};

_KLinstance_slot_descriptorGVKe Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlogical_blockGYprint_internalsVio,
  &KJsection_start_line_,
  &Klogical_block_section_start_lineYprint_internalsVio,
  &Klogical_block_section_start_line_setterYprint_internalsVio,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_9 K430 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "dont-know"
};

static _KLunionGVKe K431 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K432,
  &K433
};

static _KLunionGVKe K432 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K434,
  &K207
};

static _KLsingletonGVKd K433 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJdont_know_
};

static _KLsingletonGVKd K434 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

_KLgetter_methodGVKi Klogical_block_section_start_lineYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG
};

static _KLpairGVKd K436 = {
  &KLpairGVKdW /* wrapper */,
  &Klogical_block_section_start_lineYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_32 K437 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "logical-block-section-start-line"
};

static _KLbyte_stringGVKd_7 K438 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "literal"
};

_KLsetter_methodGVKi Ksection_start_section_end_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG
};

static _KLpairGVKd K440 = {
  &KLpairGVKdW /* wrapper */,
  &Ksection_start_section_end_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_32 K441 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "section-start-section-end-setter"
};

_KLgetter_methodGVKi Ksection_start_depthYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksection_start_depthYprint_internalsVioHLsection_startG
};

static _KLpairGVKd K443 = {
  &KLpairGVKdW /* wrapper */,
  &Ksection_start_depthYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K444 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "section-start-depth"
};

_KLgetter_methodGVKi Ksection_start_section_endYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG
};

static _KLpairGVKd K446 = {
  &KLpairGVKdW /* wrapper */,
  &Ksection_start_section_endYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K447 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "section-start-section-end"
};

static _KLimplementation_classGVKe K448 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 460587021,
  &KLsection_startGYprint_internalsVio,
  &KLsection_startGYprint_internalsVioW,
  &KPfalseVKi,
  &K449,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K74,
  &K450,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K607,
  &KPempty_vectorVKi,
  &K451,
  &K449,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K449 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kop_posnYprint_internalsVioHLqueued_opG,
  &Ksection_start_depthYprint_internalsVioHLsection_startG,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG
};

static _KLsimple_object_vectorGVKd_6 K450 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLsection_startGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K451 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Ksection_start_depthYprint_internalsVioHLsection_startG,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG
};

static _KLbyte_stringGVKd_15 K452 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<section-start>"
};

static _KLimplementation_classGVKe K453 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433745,
  &KLnewlineGYprint_internalsVio,
  &KLnewlineGYprint_internalsVioW,
  &KPfalseVKi,
  &K454,
  (D) -3,
  &KLnewlineGZ32ZconstructorYprint_internalsVioMM0,
  &K198,
  &K457,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K458,
  &K454,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K454 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kop_posnYprint_internalsVioHLqueued_opG,
  &Ksection_start_depthYprint_internalsVioHLsection_startG,
  &Ksection_start_section_endYprint_internalsVioHLsection_startG,
  &Knewline_kindYprint_internalsVioHLnewlineG
};

_KLkeyword_methodGVKe KLnewlineGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K466,
  &key_mep_2,
  &KLnewlineGZ32ZconstructorYprint_internalsVioMM0I,
  &K467
};

static _KLsimple_object_vectorGVKd_6 K457 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KLsection_startGYprint_internalsVio,
  &KLnewlineGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K458 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Knewline_kindYprint_internalsVioHLnewlineG
};

_KLinstance_slot_descriptorGVKe Knewline_kindYprint_internalsVioHLnewlineG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLnewlineGYprint_internalsVio,
  &KJkind_,
  &Knewline_kindYprint_internalsVio,
  &KPfalseVKi,
  &KLnewline_kindGYprint_internalsVio
};

_KLsealed_generic_functionGVKe Knewline_kindYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K465,
  &K464,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLunionGVKe KLnewline_kindGYprint_internalsVio = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLpretty_newline_kindGYprint_internalsVio,
  &K462
};

static _KLsingletonGVKd K462 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJliteral_
};

_KLgetter_methodGVKi Knewline_kindYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Knewline_kindYprint_internalsVioHLnewlineG
};

static _KLpairGVKd K464 = {
  &KLpairGVKdW /* wrapper */,
  &Knewline_kindYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K465 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "newline-kind"
};

static _KLkeyword_signatureAvaluesGVKi K466 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K468,
  &KDsignature_LobjectG_typesVKi,
  &K469
};

static _KLsimple_object_vectorGVKd_4 K467 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdepth_,
  &KPunboundVKi,
  &KJkind_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K468 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdepth_,
  &KJkind_
};

static _KLsimple_object_vectorGVKd_1 K469 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnewlineGYprint_internalsVio
};

static _KLbyte_stringGVKd_9 K470 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "<newline>"
};

static _KLbyte_stringGVKd_5 K471 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "depth"
};

static _KLbyte_stringGVKd_4 K472 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "kind"
};

static _KLsignatureGVKe K473 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K474
};

static _KLsimple_object_vectorGVKd_2 K474 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_newline_kindGYprint_internalsVio,
  &KLpretty_streamGYpprintVio
};

static _KLsingletonGVKd K475 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJblock_
};

static _KLsingletonGVKd K476 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJcurrent_
};

_KLsimple_methodGVKe Kpprint_indentYpprintVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K486,
  &Kpprint_indentYpprintVioMM0I
};

_KLmethod_domainGVKe Kpprint_indentYpprintVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kpprint_indentYpprintVioRD_ioRD_0,
  &Kpprint_indentYpprintVioMM0
};

static _KLpairGVKd K480 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_indentYpprintVioMM0,
  &K481
};

static _KLpairGVKd K481 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_indentYpprintVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K482 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K484
};

static _KLbyte_stringGVKd_13 K483 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "pprint-indent"
};

static _KLsimple_object_vectorGVKd_3 K484 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLindentation_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K486 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K487
};

static _KLsimple_object_vectorGVKd_3 K487 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLindentation_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLpretty_streamGYpprintVio
};

static _KLunionGVKe K488 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K492,
  &K493
};

static _KLsingletonGVKd K489 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJsection_relative_
};

static _KLsymbolGVKd KJsection_relative_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K491
};

static _KLbyte_stringGVKd_16 K491 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "section-relative"
};

static _KLunionGVKe K492 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K496,
  &K497
};

static _KLsingletonGVKd K493 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJsection_
};

static _KLsymbolGVKd KJsection_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K495
};

static _KLbyte_stringGVKd_7 K495 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "section"
};

static _KLsingletonGVKd K496 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJline_
};

static _KLsingletonGVKd K497 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJline_relative_
};

static _KLsymbolGVKd KJline_relative_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K499
};

static _KLbyte_stringGVKd_13 K499 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "line-relative"
};

static _KLsymbolGVKd KJline_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K501
};

static _KLbyte_stringGVKd_4 K501 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "line"
};

_KLsimple_methodGVKe Kpprint_tabYpprintVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K514,
  &Kpprint_tabYpprintVioMM0I
};

_KLmethod_domainGVKe Kpprint_tabYpprintVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kpprint_tabYpprintVioRD_ioRD_0,
  &Kpprint_tabYpprintVioMM0
};

static _KLpairGVKd K505 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_tabYpprintVioMM0,
  &K506
};

static _KLpairGVKd K506 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_tabYpprintVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K507 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K509
};

static _KLbyte_stringGVKd_10 K508 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "pprint-tab"
};

static _KLsimple_object_vectorGVKd_4 K509 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLtab_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLsimple_methodGVKe Kenqueue_tabYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K512,
  &Kenqueue_tabYprint_internalsVioMM0I
};

static _KLsignatureGVKe K512 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K513
};

static _KLsimple_object_vectorGVKd_4 K513 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLpretty_streamGYpprintVio,
  &KLtab_kindGYprint_internalsVio,
  &KLcolumnGYprint_internalsVio,
  &KLintegerGVKd
};

static _KLsignatureGVKe K514 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K515
};

static _KLsimple_object_vectorGVKd_4 K515 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLtab_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLpretty_streamGYpprintVio
};

_KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K524,
  &key_mep_7,
  &Kpprint_logical_blockYpprintVioMM0I,
  &K549
};

_KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K548,
  &key_mep_7,
  &Kpprint_logical_blockYpprintVioMM1I,
  &K549
};

_KLmethod_domainGVKe Kpprint_logical_blockYpprintVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kpprint_logical_blockYpprintVioRD_ioRD_0,
  &Kpprint_logical_blockYpprintVioMM1
};

static _KLpairGVKd K521 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_logical_blockYpprintVioMM0,
  &K522
};

static _KLpairGVKd K522 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_logical_blockYpprintVioMM1,
  &K523
};

static _KLpairGVKd K523 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_logical_blockYpprintVioMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K524 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K526,
  &K527,
  &K528
};

static _KLbyte_stringGVKd_20 K525 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pprint-logical-block"
};

static _KLsimple_object_vectorGVKd_1 K526 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_object_vectorGVKd_5 K527 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJcolumn_,
  &KJprefix_,
  &KJper_line_prefix_,
  &KJbody_,
  &KJsuffix_
};

static _KLsimple_object_vectorGVKd_5 K528 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLintegerGVKd,
  &K206,
  &K206,
  &KLfunctionGVKd,
  &K206
};

static _KLsymbolGVKd KJper_line_prefix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K532
};

static _KLsymbolGVKd KJbody_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K531
};

static _KLbyte_stringGVKd_4 K531 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "body"
};

static _KLbyte_stringGVKd_15 K532 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "per-line-prefix"
};

static _KLbyte_stringGVKd_51 K533 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Can\'t specify both a prefix: and a per-line-prefix:"
};

_KLsimple_methodGVKe Kappend_raw_outputYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K546,
  &Kappend_raw_outputYprint_internalsVioMM0I
};

static _KLunionGVKe K538 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLbufferGYstreamsVio,
  &KLbyte_stringGVKd
};

_KLsimple_methodGVKe Kposn_indexYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K543,
  &Kposn_indexYprint_internalsVioMM0I
};

static _KLbyte_stringGVKd_54 K542 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Output-partial-line called when nothing can be output."
};

static _KLsignatureAvaluesGVKi K543 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K544,
  &K545
};

static _KLsimple_object_vectorGVKd_2 K544 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLpretty_streamGYpprintVio
};

static _KLsimple_object_vectorGVKd_1 K545 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLcolumnGYprint_internalsVio
};

static _KLsignatureGVKe K546 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K547
};

static _KLsimple_object_vectorGVKd_4 K547 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLpretty_streamGYpprintVio,
  &K538,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K548 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K392,
  &K527,
  &K528
};

static _KLsimple_object_vectorGVKd_10 K549 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJcolumn_,
  (D) 1,
  &KJprefix_,
  &KPfalseVKi,
  &KJper_line_prefix_,
  &KPfalseVKi,
  &KJbody_,
  &KPfalseVKi,
  &KJsuffix_,
  &KPfalseVKi
};

static _KLimplementation_classGVKe K550 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 460587013,
  &KLqueued_opGYprint_internalsVio,
  &KLqueued_opGYprint_internalsVioW,
  &KPfalseVKi,
  &K135,
  (D) -3,
  &Kdefault_class_constructorVKi,
  &K551,
  &K552,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K603,
  &KPempty_vectorVKi,
  &K135,
  &K135,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K551 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K552 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLqueued_opGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_11 K553 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "<queued-op>"
};

static _KLimplementation_classGVKe K554 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433753,
  &KLlogical_blockGYprint_internalsVio,
  &KLlogical_blockGYprint_internalsVioW,
  &KPfalseVKi,
  &K555,
  (D) -3,
  &KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0,
  &K551,
  &K558,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K555,
  &K555,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K555 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Klogical_block_start_columnYprint_internalsVioHLlogical_blockG,
  &Klogical_block_section_columnYprint_internalsVioHLlogical_blockG,
  &Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG,
  &Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG,
  &Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG,
  &Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG
};

_KLkeyword_methodGVKe KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K559,
  &key_mep_2,
  &KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0I,
  &K560
};

static _KLsimple_object_vectorGVKd_6 K558 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlogical_blockGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K559 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K561,
  &KDsignature_LobjectG_typesVKi,
  &K562
};

static _KLsimple_object_vectorGVKd_12 K560 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJstart_column_,
  &KPunboundVKi,
  &KJsection_column_,
  &KPunboundVKi,
  &KJper_line_prefix_end_,
  &KPunboundVKi,
  &KJprefix_length_,
  &KPunboundVKi,
  &KJsuffix_length_,
  &KPunboundVKi,
  &KJsection_start_line_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_6 K561 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_column_,
  &KJsection_column_,
  &KJper_line_prefix_end_,
  &KJprefix_length_,
  &KJsuffix_length_,
  &KJsection_start_line_
};

static _KLsimple_object_vectorGVKd_1 K562 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlogical_blockGYprint_internalsVio
};

static _KLbyte_stringGVKd_15 K563 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<logical-block>"
};

static _KLunionGVKe K564 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K207,
  &KLintegerGVKd
};

_KLkeyword_methodGVKe KcloseYcommon_extensionsVcommon_dylanMioM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K602,
  &key_mep_2,
  &KcloseYcommon_extensionsVcommon_dylanMioM6I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K598,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM4I,
  &K599
};

_KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K584,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM4I
};

_KLsetter_methodGVKi Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_buffer_fill_pointerYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K575 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

_KLsetter_methodGVKi Kpretty_stream_buffer_offset_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_buffer_offsetYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K577 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_buffer_offset_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

_KLsetter_methodGVKi Kpretty_stream_blocks_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpretty_stream_blocksYprint_internalsVioHLpretty_streamG
};

static _KLpairGVKd K579 = {
  &KLpairGVKdW /* wrapper */,
  &Kpretty_stream_blocks_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

_KLmethod_domainGVKe Kpprint_newlineYpprintVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kpprint_newlineYpprintVioRD_ioRD_0,
  &Kpprint_newlineYpprintVioMM0
};

static _KLpairGVKd K581 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_newlineYpprintVioMM0,
  &K582
};

static _KLpairGVKd K582 = {
  &KLpairGVKdW /* wrapper */,
  &Kpprint_newlineYpprintVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K584 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K585
};

static _KLsimple_object_vectorGVKd_2 K585 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_streamGYpprintVio,
  &KLcharacterGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K586 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kappend_outputYprint_internalsVio
};

_KLsealed_generic_functionGVKe Kappend_outputYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 53,
  &K593,
  &K591,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kappend_outputYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K596,
  &Kappend_outputYprint_internalsVioMM0I
};

_KLsimple_methodGVKe Kappend_outputYprint_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K594,
  &Kappend_outputYprint_internalsVioMM1I
};

static _KLpairGVKd K591 = {
  &KLpairGVKdW /* wrapper */,
  &Kappend_outputYprint_internalsVioMM0,
  &K592
};

static _KLpairGVKd K592 = {
  &KLpairGVKdW /* wrapper */,
  &Kappend_outputYprint_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K593 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "append-output"
};

static _KLsignatureGVKe K594 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K595
};

static _KLsimple_object_vectorGVKd_4 K595 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLpretty_streamGYpprintVio,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K596 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K597
};

static _KLsimple_object_vectorGVKd_4 K597 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLpretty_streamGYpprintVio,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K598 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K600,
  &K601,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K599 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KPfalseVKi,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K600 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_streamGYpprintVio,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_2 K601 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureGVKe K602 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43253765,
  &K392,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLpairGVKd K603 = {
  &KLpairGVKdW /* wrapper */,
  &KLtabGYprint_internalsVio,
  &K604
};

static _KLpairGVKd K604 = {
  &KLpairGVKdW /* wrapper */,
  &KLblock_endGYprint_internalsVio,
  &K605
};

static _KLpairGVKd K605 = {
  &KLpairGVKdW /* wrapper */,
  &KLindentationGYprint_internalsVio,
  &K606
};

static _KLpairGVKd K606 = {
  &KLpairGVKdW /* wrapper */,
  &KLsection_startGYprint_internalsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K607 = {
  &KLpairGVKdW /* wrapper */,
  &KLblock_startGYprint_internalsVio,
  &K608
};

static _KLpairGVKd K608 = {
  &KLpairGVKdW /* wrapper */,
  &KLnewlineGYprint_internalsVio,
  &KPempty_listVKi
};

/* Code */

D Kpprint_newlineYpprintVioMM0I (D kind_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1231
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1233
  T4 = SLOT_VALUE_INITD(stream_, 21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1233
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1234
    KerrorVKdMM1I(&K30, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1233
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1236
  T3 = Kenqueue_newlineYprint_internalsVioMM0I(stream_, kind_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1231
  MV_SET_COUNT(0);
  return(T3);
}

D Kenqueue_newlineYprint_internalsVioMM0I (D stream_, D kind_) {
  D T3;
  D newline_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
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
  D depth_;
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:564
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:566
  T22 = SLOT_VALUE_INITD(stream_, 20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:566
  depth_ = KsizeVKdMM30I(T22);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:567
  T24.vector_element_[0] = IKJkind_;
  T24.vector_element_[1] = kind_;
  T24.vector_element_[2] = IKJdepth_;
  T24.vector_element_[3] = depth_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:567
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLnewlineGYprint_internalsVio, &T24);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:567
  newline_ = KenqueueYprint_internalsVioMM0I(stream_, T3);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T25 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(T25);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T6 = T5;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  T11T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
    T12 = CALL3(T9, T25, T11, T7);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
      T13 = CALL2(T10, T25, T11);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      T26 = primitive_idQ(newline_,T13);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      if (T26 != &KPfalseVKi) {
        T14 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:570
        T27 = primitive_instanceQ(T13,&KLsection_startGYprint_internalsVio);
        T14 = T27;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:571
        T15 = CALL1(&Ksection_start_section_endYprint_internalsVio, T13);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:571
        T28 = primitive_not(T15);
        T16 = T28;
      } else {
        T16 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:572
        T17 = CALL1(&Ksection_start_depthYprint_internalsVio, T13);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:572
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T29 = CONGRUENT_CALL2(T17, depth_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:572
        T30 = primitive_not(T29);
        T18 = T30;
      } else {
        T18 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:573
        CALL2(&Ksection_start_section_end_setterYprint_internalsVio, newline_, T13);
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:569
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
      T19 = CALL2(T8, T25, T11);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
      T11T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:568
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
  T31 = primitive_idQ(kind_,IKJliteral_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
  if (T31 != &KPfalseVKi) {
    T20 = T31;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
    T32 = primitive_idQ(kind_,IKJmandatory_);
    T20 = T32;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
  T21 = Kmaybe_outputYprint_internalsVioMM0I(stream_, T20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:564
  MV_SET_COUNT(0);
  return(T21);
}

D KenqueueYprint_internalsVioMM0I (D stream_, D op_) {
  D T3;
  D T4_0;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:505
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:508
  T5 = SLOT_VALUE_INITD(stream_, 12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:508
  T3 = Kindex_posnYprint_internalsVioMM0I(T5, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:508
  SLOT_VALUE_SETTER(T3, op_, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:509
  T6 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:509
  CONGRUENT_CALL_PROLOG(&Kpush_lastVKd, 2);
  CONGRUENT_CALL2(T6, op_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:510
  T4_0 = op_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:505
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kmaybe_outputYprint_internalsVioMM0I (D stream_, D force_newlinesQ_) {
  D returnPexit_51_;
  D next_;
  D UtmpF5;
  D T6;
  D T7;
  D UtmpF8;
  D T9;
  D UtmpF10;
  D UobjectF11;
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
  D UobjectF25;
  D T26;
  D T27;
  D T28;
  D T29_0;
  D output_anythingQ_;
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
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47_0;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  _KLsimple_object_vectorGVKd_1 T55 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T56;
  _KLsimple_object_vectorGVKd_1 T57 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  _KLsimple_object_vectorGVKd_1 T67 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  _KLsimple_object_vectorGVKd_1 T79 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T80;
  D T81;
  _KLsimple_object_vectorGVKd_1 T82 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:902
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:905
  T36 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:906
  output_anythingQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:907
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T28 = CONGRUENT_CALL1(T36);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
    if (T28 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:910
      CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
      next_ = CONGRUENT_CALL2(T36, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
      T37 = primitive_instanceQ(next_,&KLnewlineGYprint_internalsVio);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
        T32 = next_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:914
        T38 = SLOT_VALUE_INITD(T32, 3);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        T39 = primitive_idQ(T38,IKJliteral_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        if (T39 != &KPfalseVKi) {
          UtmpF5 = T39;
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
          T40 = primitive_idQ(T38,IKJmandatory_);
          UtmpF5 = T40;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        if (UtmpF5 != &KPfalseVKi) {
          T6 = UtmpF5;
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
          T41 = primitive_idQ(T38,IKJlinear_);
          T6 = T41;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        if (T6 != &KPfalseVKi) {
          T18 = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:920
          T42 = primitive_idQ(T38,IKJmiser_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
          if (T42 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:921
            T7 = KmiseringQYprint_internalsVioMM0I(stream_);
            T17 = T7;
          } else {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:922
            T43 = primitive_idQ(T38,&KJfill_);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
            if (T43 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:923
              UtmpF8 = KmiseringQYprint_internalsVioMM0I(stream_);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:923
              if (UtmpF8 != &KPfalseVKi) {
                UtmpF10 = UtmpF8;
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:924
                T44 = SLOT_VALUE_INITD(stream_, 15);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:925
                T45 = SLOT_VALUE_INITD(stream_, 16);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:925
                T46 = SLOT_VALUE_INITD(T45, 0);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:925
                T9 = CALL1(&Klogical_block_section_start_lineYprint_internalsVio, T46);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:924
                CONGRUENT_CALL_PROLOG(&KLVKd, 2);
                T47_0 = CONGRUENT_CALL2(T9, T44);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:924
                T48 = T47_0;
                UtmpF10 = T48;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:923
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:923
              if (UtmpF10 != &KPfalseVKi) {
                T15 = UtmpF10;
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:928
                T49 = SLOT_VALUE_INITD(T32, 2);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                UobjectF11 = Kfits_on_lineQYprint_internalsVioMM0I(stream_, T49, force_newlinesQ_);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                T50 = primitive_idQ(UobjectF11,&KPtrueVKi);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                if (T50 != &KPfalseVKi) {
                  T14 = &KPfalseVKi;
                } else {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                  if (UobjectF11 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                    T51 = primitive_idQ(UobjectF11,IKJdont_know_);
                    // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                    if (T51 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/io/pprint.dylan:932
                      T52 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                      // /opt/opendylan-2013.1/sources/io/pprint.dylan:932
                      T52;
                      goto L1;
                      // /opt/opendylan-2013.1/sources/io/pprint.dylan:932
                      T54 = T53;
                      T12 = T54;
                    } else {
                      // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                      T55.vector_element_[0] = UobjectF11;
                      // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                      T56 = KerrorVKdMM1I(&K48, &T55);
                      T12 = T56;
                    }
                    // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                    T13 = T12;
                  } else {
                    T13 = &KPtrueVKi;
                  }
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                  T14 = T13;
                }
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
                T15 = T14;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:923
              T16 = T15;
            } else {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:935
              T57.vector_element_[0] = T38;
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:935
              T58 = KerrorVKdMM1I(&K49, &T57);
              T16 = T58;
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
            T17 = T16;
          }
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:937
          output_anythingQ_ = &KPtrueVKi;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:938
          Koutput_lineYprint_internalsVioMM0I(stream_, T32);
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:915
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:940
        T59 = primitive_instanceQ(next_,&KLindentationGYprint_internalsVio);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
        if (T59 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
          T33 = next_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:942
          T19 = KmiseringQYprint_internalsVioMM0I(stream_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:942
          if (T19 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:944
            T60 = SLOT_VALUE_INITD(T33, 2);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
            T61 = SLOT_VALUE_INITD(T33, 1);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
            T62 = primitive_idQ(T61,IKJblock_);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
            if (T62 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:947
              T63 = SLOT_VALUE_INITD(stream_, 16);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:947
              T64 = SLOT_VALUE_INITD(T63, 0);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:947
              T20 = CALL1(&Klogical_block_start_columnYprint_internalsVio, T64);
              T23 = T20;
            } else {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
              T65 = primitive_idQ(T61,IKJcurrent_);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
              if (T65 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:950
                T66 = SLOT_VALUE_INITD(T33, 0);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:950
                T21 = Kposn_columnYprint_internalsVioMM0I(T66, stream_);
                T22 = T21;
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:952
                T67.vector_element_[0] = T61;
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:952
                T68 = KerrorVKdMM1I(&K57, &T67);
                T22 = T68;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
              T23 = T22;
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:945
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:944
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T24 = CONGRUENT_CALL2(T60, T23);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:943
            CALL2(&Kset_indentationYprint_internalsVioMM0, stream_, T24);
          }
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:942
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:956
          T69 = primitive_instanceQ(next_,&KLblock_startGYprint_internalsVio);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
          if (T69 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
            T34 = next_;
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
            T70 = SLOT_VALUE_INITD(T34, 2);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
            UobjectF25 = Kfits_on_lineQYprint_internalsVioMM0I(stream_, T70, force_newlinesQ_);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
            T71 = primitive_idQ(UobjectF25,&KPtrueVKi);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
            if (T71 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:964
              T72 = SLOT_VALUE_INITD(T34, 3);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:965
              Kexpand_tabsYprint_internalsVioMM0I(stream_, T72);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
            L2: ;
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
                CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
                T26 = CONGRUENT_CALL2(T36, &KPempty_vectorVKi);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
                T73 = primitive_idQ(T26,T72);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
                if (T73 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:967
                  CONGRUENT_CALL_PROLOG(&KpopVKd, 1);
                  CONGRUENT_CALL1(T36);
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
                  goto L2;
                }
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:966
            } else {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
              if (UobjectF25 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
                T77 = primitive_idQ(UobjectF25,IKJdont_know_);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
                if (T77 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:907
                  T78 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:907
                  T78;
                  goto L1;
                } else {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
                  T79.vector_element_[0] = UobjectF25;
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
                  KerrorVKdMM1I(&K48, &T79);
                }
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:972
                T74 = SLOT_VALUE_INITD(T34, 0);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:972
                T27 = Kposn_columnYprint_internalsVioMM0I(T74, stream_);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:973
                T75 = SLOT_VALUE_INITD(T34, 4);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:974
                T76 = SLOT_VALUE_INITD(T34, 5);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:971
                Kreally_start_logical_blockYprint_internalsVioMM0I(stream_, T27, T75, T76);
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:958
          } else {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:979
            T80 = primitive_instanceQ(next_,&KLblock_endGYprint_internalsVio);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
            if (T80 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:981
              Kreally_end_logical_blockYprint_internalsVioMM0I(stream_);
            } else {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:982
              T81 = primitive_instanceQ(next_,&KLtabGYprint_internalsVio);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
              if (T81 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:576
                T35 = next_;
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:984
                Kexpand_tabsYprint_internalsVioMM0I(stream_, T35);
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:986
                T82.vector_element_[0] = next_;
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:986
                KerrorVKdMM1I(&K69, &T82);
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
          }
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:911
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:988
      CONGRUENT_CALL_PROLOG(&KpopVKd, 1);
      CONGRUENT_CALL1(T36);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:908
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:907
  L1: ;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:991
  T31 = output_anythingQ_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:991
  T29_0 = T31;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:902
  MV_SET_COUNT(1);
  return(T29_0);
}

D KmiseringQYprint_internalsVioMM0I (D stream_) {
  D T2;
  D start_column_;
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:998
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1000
  T2 = Tprint_miser_widthTYpprintVio;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1000
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1001
    T8 = SLOT_VALUE_INITD(stream_, 10);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1002
    T9 = SLOT_VALUE_INITD(stream_, 16);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1003
    T10 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1003
    start_column_ = CALL1(&Klogical_block_start_columnYprint_internalsVio, T10);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1004
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T4 = CONGRUENT_CALL2(T8, start_column_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1004
    T5 = Tprint_miser_widthTYpprintVio;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1004
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T11 = CONGRUENT_CALL2(T5, T4);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1004
    T13 = primitive_not(T11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1004
    T12_0 = T13;
    T7_0 = T12_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1000
    T6_0 = &KPfalseVKi;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1000
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:998
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kfits_on_lineQYprint_internalsVioMM0I (D stream_, D until_op_, D force_newlinesQ_) {
  D T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1013
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1017
  T13 = SLOT_VALUE_INITD(stream_, 10);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
  if (until_op_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:927
    T12 = until_op_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T14 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T4 = Kposn_columnYprint_internalsVioMM0I(T14, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T17 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T18 = primitive_cast_integer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T19 = primitive_machine_word_less_thanQ(T17,T18);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T16 = primitive_not(T19);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T15_0 = T16;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1024
    T24_0 = T15_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T15_0);
      primitive_type_check(T24_0, &K431);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T11_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
    if (force_newlinesQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1026
      T5_0 = &KPfalseVKi;
      T10_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1027
      T20 = SLOT_VALUE_INITD(stream_, 12);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1027
      T6 = Kindex_columnYprint_internalsVioMM0I(T20, stream_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1027
      T21 = primitive_cast_integer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1027
      T22 = primitive_cast_integer_as_raw(T6);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1027
      T23 = primitive_machine_word_less_thanQ(T21,T22);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1029
        T7_0 = &KPfalseVKi;
        T9_0 = T7_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1031
        T8_0 = IKJdont_know_;
        T9_0 = T8_0;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
      T10_0 = T9_0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1023
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1013
  MV_SET_COUNT(1);
  return(T11_0);
}

D Koutput_lineYprint_internalsVioMM0I (D stream_, D newline_) {
  D amount_to_consume_;
  D amount_to_print_;
  D T5;
  D T6;
  D prefix_len_;
  D shift_;
  D new_fill_ptr_;
  D extra_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D new_buffer_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D new_index_;
  D T28;
  D T29;
  D T30;
  D indexF31T, indexF31;
  D T32;
  D T33;
  D T34;
  _KLsimple_object_vectorGVKd_4 T35 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44_0;
  D T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  D T62;
  D T63;
  D T64;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1041
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1042
  T21 = SLOT_VALUE_INITD(stream_, 9);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1043
  T22 = SLOT_VALUE_INITD(stream_, 11);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1044
  T23 = SLOT_VALUE_INITD(newline_, 3);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1045
  T24 = primitive_idQ(T23,IKJliteral_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1046
  T25 = SLOT_VALUE_INITD(newline_, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1046
  amount_to_consume_ = Kposn_indexYprint_internalsVioMM0I(T25, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1048
  if (T24 != &KPfalseVKi) {
    amount_to_print_ = amount_to_consume_;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1061
    indexF31T = amount_to_consume_;
  L0: ;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1061
      indexF31 = indexF31T;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1054
      CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
      T26 = CONGRUENT_CALL1(indexF31);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1054
      if (T26 != &KPfalseVKi) {
        T34 = (D) 1;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1057
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        new_index_ = CONGRUENT_CALL2(indexF31, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1058
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T28 = CONGRUENT_CALL3(T22, new_index_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1058
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T29 = CONGRUENT_CALL2(T28, C(' '));
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1058
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:1061
          indexF31T = new_index_;
          goto L0;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:1065
          T32 = T30;
          T33 = T32;
        } else {
          T33 = indexF31;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:1058
        T34 = T33;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1054
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1061
    amount_to_print_ = T34;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1048
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1067
  T35.vector_element_[0] = &KJstart_;
  T35.vector_element_[1] = (D) 1;
  T35.vector_element_[2] = &KJend_;
  T35.vector_element_[3] = amount_to_print_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1067
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(T21, T22, &T35);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1068
  T36 = SLOT_VALUE_INITD(stream_, 15);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1068
  T37 = primitive_cast_integer_as_raw(T36);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1068
  T38 = primitive_machine_word_add_signal_overflow(T37,4);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1068
  T39 = primitive_cast_raw_as_integer(T38);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1080
  CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
  CONGRUENT_CALL1(T21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1081
  SLOT_VALUE_SETTER(T39, stream_, 15);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1082
  SLOT_VALUE_SETTER((D) 1, stream_, 14);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1085
  T40 = SLOT_VALUE_INITD(stream_, 12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1086
  T41 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1086
  T42 = SLOT_VALUE_INITD(T41, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1087
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1088
    T5 = CALL1(&Klogical_block_per_line_prefix_endYprint_internalsVio, T42);
    prefix_len_ = T5;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1090
    T6 = CALL1(&Klogical_block_prefix_lengthYprint_internalsVio, T42);
    prefix_len_ = T6;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1087
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1092
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  shift_ = CONGRUENT_CALL2(amount_to_consume_, prefix_len_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1093
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  new_fill_ptr_ = CONGRUENT_CALL2(T40, shift_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1094
  new_buffer_ = T22;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1095
  T43 = SLOT_VALUE_INITD(T22, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1096
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T44_0 = CONGRUENT_CALL2(T43, new_fill_ptr_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1096
  T45 = T44_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1096
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1097
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    extra_ = CONGRUENT_CALL2(new_fill_ptr_, T43);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T46 = primitive_cast_integer_as_raw(T43);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T47 = primitive_machine_word_logxor(T46,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T48 = primitive_machine_word_multiply_signal_overflow(T47,2);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T49 = primitive_machine_word_logior(T48,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T50 = primitive_cast_raw_as_integer(T49);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    CONGRUENT_CALL_PROLOG(&KTVKd, 2);
    T11 = CONGRUENT_CALL2(extra_, (D) 21);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    T12 = CALL2(&KfloorSVKd, T11, (D) 17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    T51 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    T52 = primitive_machine_word_logxor(T51,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    T53 = primitive_machine_word_add_signal_overflow(T46,T52);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1100
    T54 = primitive_cast_raw_as_integer(T53);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    T56 = primitive_machine_word_less_thanQ(T53,T49);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    if (T56 != &KPfalseVKi) {
      T55 = T50;
    } else {
      T55 = T54;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1099
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1098
    T57 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T55);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1098
    new_buffer_ = T57;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1101
    T20 = new_buffer_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1101
    SLOT_VALUE_SETTER(T20, stream_, 11);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1096
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1105
  T58 = primitive_cast_integer_as_raw(T40);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1105
  T59 = primitive_cast_integer_as_raw(amount_to_consume_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1105
  T60 = primitive_machine_word_logxor(T59,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1105
  T61 = primitive_machine_word_subtract_signal_overflow(T58,T60);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1105
  T62 = primitive_cast_raw_as_integer(T61);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1103
  T19 = new_buffer_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1103
  CALL5(&Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0, T22, amount_to_consume_, T19, prefix_len_, T62);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1106
  T63 = SLOT_VALUE_INITD(stream_, 17);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1106
  T18 = new_buffer_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1106
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(T18, (D) 1, T63, (D) 1, prefix_len_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1107
  CALL2(&Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio, new_fill_ptr_, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1109
  T64 = SLOT_VALUE_INITD(stream_, 13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1109
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T13 = CONGRUENT_CALL2(T64, shift_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1108
  CALL2(&Kpretty_stream_buffer_offset_setterYprint_internalsVio, T13, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1110
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1110
    T15 = &KPfalseVKi;
    T16 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1111
    CALL2(&Klogical_block_section_column_setterYprint_internalsVio, prefix_len_, T42);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1112
    CALL2(&Klogical_block_section_start_line_setterYprint_internalsVio, T39, T42);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1112
    T14 = &KPfalseVKi;
    T16 = T14;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1110
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1041
  MV_SET_COUNT(0);
  return(T16);
}

D Kposn_columnYprint_internalsVioMM0I (D posn_, D stream_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:217
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:220
  T3 = Kposn_indexYprint_internalsVioMM0I(posn_, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:220
  T4_0 = Kindex_columnYprint_internalsVioMM0I(T3, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:217
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kset_indentationYprint_internalsVioMM0I (D stream_, D column_) {
  D current_;
  D minimum_;
  D T5;
  D T6;
  D T7;
  D T8;
  D prefix_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19;
  D T20_0;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D new_prefix_;
  D T34_0;
  D T35;
  _KLsimple_object_vectorGVKd_4 T36 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:436
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:438
  T13 = SLOT_VALUE_INITD(stream_, 17);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:438
  prefix_ = T13;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:439
  T12 = prefix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:439
  T14 = SLOT_VALUE_INITD(T12, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:440
  T15 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:440
  T16 = SLOT_VALUE_INITD(T15, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:441
  current_ = CALL1(&Klogical_block_prefix_lengthYprint_internalsVio, T16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:442
  minimum_ = CALL1(&Klogical_block_per_line_prefix_endYprint_internalsVio, T16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:443
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T17_0 = CONGRUENT_CALL2(column_, minimum_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:443
  T18 = T17_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:443
  if (T18 != &KPfalseVKi) {
    T19 = minimum_;
  } else {
    T19 = column_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:443
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:444
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T20_0 = CONGRUENT_CALL2(T14, T19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:444
  T21 = T20_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:444
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T22 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T23 = primitive_machine_word_logxor(T22,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T24 = primitive_machine_word_multiply_signal_overflow(T23,2);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T25 = primitive_machine_word_logior(T24,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T26 = primitive_cast_raw_as_integer(T25);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T5 = CONGRUENT_CALL2(T19, T14);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    CONGRUENT_CALL_PROLOG(&KTVKd, 2);
    T6 = CONGRUENT_CALL2(T5, (D) 21);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T7 = CALL2(&KfloorSVKd, T6, (D) 17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T27 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T28 = primitive_machine_word_logxor(T27,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T29 = primitive_machine_word_add_signal_overflow(T22,T28);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T30 = primitive_cast_raw_as_integer(T29);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    T32 = primitive_machine_word_less_thanQ(T29,T25);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    if (T32 != &KPfalseVKi) {
      T31 = T26;
    } else {
      T31 = T30;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:446
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:447
    new_prefix_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T31);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:448
    T11 = prefix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:448
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(new_prefix_, (D) 1, T11, (D) 1, current_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:449
    SLOT_VALUE_SETTER(new_prefix_, stream_, 17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:449
    prefix_ = new_prefix_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:444
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:451
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T34_0 = CONGRUENT_CALL2(current_, T19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:451
  T35 = T34_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:451
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:452
    T10 = prefix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:452
    T36.vector_element_[0] = &KJstart_;
    T36.vector_element_[1] = current_;
    T36.vector_element_[2] = &KJend_;
    T36.vector_element_[3] = T19;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:452
    CONGRUENT_CALL_PROLOG(&KfillXVKd, 3);
    CONGRUENT_CALL3(T10, C(' '), &T36);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:451
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:454
  CALL2(&Klogical_block_prefix_length_setterYprint_internalsVio, T19, T16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:454
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:436
  MV_SET_COUNT(0);
  return(T8);
}

D Kexpand_tabsYprint_internalsVioMM0I (D stream_, D through_) {
  D section_startF3;
  D returnPexit_50_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D index_;
  D T15;
  D tabsize_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D new_fill_ptr_;
  D T23;
  D T24;
  D T25;
  D T26T, T26;
  D srcpos_;
  D amount_;
  D dstpos_;
  D tabpos_;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D insertions_;
  D T39;
  D T40;
  D T41;
  D additional_;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D column_;
  D T50;
  D T51;
  D T52;
  D section_startF53;
  D T54;
  D new_buffer_;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D stop_;
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
  DWORD T72;
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
  D T84_0;
  D T85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  DWORD T89;
  D T90;
  DWORD T91;
  DWORD T92;
  DWORD T93;
  DWORD T94;
  D T95;
  D T96;
  D T97;
  D T98;
  D T99;
  D T100;
  D T101;
  _KLsimple_object_vectorGVKd_4 T102 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T103_0;
  D T104;
  D T105_0;
  D T106;
  D T107;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:805
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:807
  insertions_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:808
  additional_ = (D) 1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:809
  T66 = SLOT_VALUE_INITD(stream_, 14);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:809
  column_ = T66;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:811
  T67 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:811
  T68 = SLOT_VALUE_INITD(T67, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:811
  section_startF3 = CALL1(&Klogical_block_section_columnYprint_internalsVio, T68);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:811
  section_startF53 = section_startF3;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:812
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T69 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(T69);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T6 = T5;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  T11T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
    T12 = CALL3(T9, T69, T11, T7);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
      T13 = CALL2(T10, T69, T11);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:814
      T70 = primitive_instanceQ(T13,&KLtabGYprint_internalsVio);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:814
      if (T70 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:965
        T64 = T13;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:815
        T71 = SLOT_VALUE_INITD(T64, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:815
        index_ = Kposn_indexYprint_internalsVioMM0I(T71, stream_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:816
        T52 = column_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:816
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T15 = CONGRUENT_CALL2(T52, index_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:816
        T54 = section_startF53;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:816
        tabsize_ = CALL3(&Kcompute_tab_sizeYprint_internalsVioMM0, T64, T54, T15);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:817
        T72 = primitive_cast_integer_as_raw(tabsize_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:817
        T73 = primitive_machine_word_equalQ(T72,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:817
        if (T73 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          T74 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          SLOT_VALUE_SETTER(index_, T74, 0);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          SLOT_VALUE_SETTER(tabsize_, T74, 1);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          T41 = insertions_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          T75 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          SLOT_VALUE_SETTER(T74, T75, 0);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          SLOT_VALUE_SETTER(T41, T75, 1);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:818
          insertions_ = T75;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:819
          T48 = additional_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:819
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T17 = CONGRUENT_CALL2(T48, tabsize_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:819
          additional_ = T17;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:820
          T51 = column_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:820
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T18 = CONGRUENT_CALL2(T51, tabsize_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:820
          column_ = T18;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:817
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:822
        T76 = primitive_instanceQ(T13,&KLsection_startGYprint_internalsVio);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:814
        if (T76 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:965
          T65 = T13;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:823
          T77 = SLOT_VALUE_INITD(T65, 0);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:823
          T19 = Kposn_indexYprint_internalsVioMM0I(T77, stream_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:823
          T50 = column_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:823
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T20 = CONGRUENT_CALL2(T50, T19);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:823
          section_startF53 = T20;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:814
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:814
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:825
      T78 = primitive_idQ(T13,through_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:825
      if (T78 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:812
        T79 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:812
        T79;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:825
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
      T21 = CALL2(T8, T69, T11);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
      T11T = T21;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:813
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:812
  L1: ;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:830
  T40 = insertions_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:830
  T80 = primitive_idQ(T40,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:830
  if (T80 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:830
    T36 = &KPfalseVKi;
    T37 = T36;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:831
    T81 = SLOT_VALUE_INITD(stream_, 12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:832
    T47 = additional_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:832
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    new_fill_ptr_ = CONGRUENT_CALL2(T81, T47);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:833
    T82 = SLOT_VALUE_INITD(stream_, 11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:834
    new_buffer_ = T82;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:835
    T83 = SLOT_VALUE_INITD(T82, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:836
    stop_ = T81;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:837
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T84_0 = CONGRUENT_CALL2(T83, new_fill_ptr_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:837
    T85 = T84_0;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:837
    if (T85 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T86 = primitive_cast_integer_as_raw(T83);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T87 = primitive_machine_word_logxor(T86,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T88 = primitive_machine_word_multiply_signal_overflow(T87,2);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T89 = primitive_machine_word_logior(T88,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T90 = primitive_cast_raw_as_integer(T89);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T46 = additional_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      CONGRUENT_CALL_PROLOG(&KTVKd, 2);
      T23 = CONGRUENT_CALL2(T46, (D) 21);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T24 = CALL2(&KfloorSVKd, T23, (D) 17);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T91 = primitive_cast_integer_as_raw(T81);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T92 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T93 = primitive_machine_word_logxor(T92,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T94 = primitive_machine_word_add_signal_overflow(T91,T93);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T95 = primitive_cast_raw_as_integer(T94);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      T97 = primitive_machine_word_less_thanQ(T94,T89);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      if (T97 != &KPfalseVKi) {
        T96 = T90;
      } else {
        T96 = T95;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:838
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:839
      T98 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T96);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:839
      new_buffer_ = T98;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:840
      T60 = new_buffer_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:840
      SLOT_VALUE_SETTER(T60, stream_, 11);
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:837
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:842
    CALL2(&Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio, new_fill_ptr_, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:844
    T99 = SLOT_VALUE_INITD(stream_, 13);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:844
    T45 = additional_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:844
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T25 = CONGRUENT_CALL2(T99, T45);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:843
    CALL2(&Kpretty_stream_buffer_offset_setterYprint_internalsVio, T25, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
    T39 = insertions_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
    T26T = T39;
  L2: ;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
      T26 = T26T;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
      insertions_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
      T100 = primitive_idQ(T26,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
      if (T100 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        insertions_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T101 = SLOT_VALUE_INITD(T26, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:846
        srcpos_ = CALL1(&KheadVKd, T101);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:847
        amount_ = CALL1(&KtailVKd, T101);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:848
        T44 = additional_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:848
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        dstpos_ = CONGRUENT_CALL2(srcpos_, T44);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:849
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        tabpos_ = CONGRUENT_CALL2(dstpos_, amount_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:851
        T63 = stop_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:851
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T31 = CONGRUENT_CALL2(T63, srcpos_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:850
        T59 = new_buffer_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:850
        CALL5(&Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0, T82, srcpos_, T59, dstpos_, T31);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:852
        T58 = new_buffer_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:852
        T102.vector_element_[0] = &KJstart_;
        T102.vector_element_[1] = tabpos_;
        T102.vector_element_[2] = &KJend_;
        T102.vector_element_[3] = dstpos_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:852
        CONGRUENT_CALL_PROLOG(&KfillXVKd, 3);
        CONGRUENT_CALL3(T58, C(' '), &T102);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:853
        T43 = additional_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:853
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T32 = CONGRUENT_CALL2(T43, amount_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:853
        additional_ = T32;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:854
        stop_ = tabpos_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        insertions_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T104 = SLOT_VALUE_INITD(T26, 1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T105_0 = T104;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T103_0 = T105_0;
        {
          MV_CHECK_TYPE_PROLOGUE(T105_0);
          primitive_type_check(T103_0, &KLlistGVKd);
          MV_CHECK_TYPE_EPILOGUE();
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T106 = T103_0;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
        T26T = T106;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:845
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:856
    T57 = new_buffer_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:856
    T107 = primitive_idQ(T57,T82);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:856
    if (T107 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:856
      T34 = &KPfalseVKi;
      T35 = T34;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:857
      T56 = new_buffer_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:857
      T62 = stop_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:857
      CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
      T33 = CONGRUENT_CALL5(T56, (D) 1, T82, (D) 1, T62);
      T35 = T33;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:856
    T37 = T35;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:830
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:805
  MV_SET_COUNT(0);
  return(T37);
}

D Kreally_start_logical_blockYprint_internalsVioMM0I (D stream_, D column_, D prefix_, D suffix_) {
  D per_line_end_;
  D prefix_length_;
  D suffix_length_;
  D new_block_;
  D T9;
  D T10;
  D T11;
  D additional_;
  D new_suffix_len_;
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
  D total_suffix_;
  D T25;
  D T26;
  D T27;
  D T28;
  D total_suffix_len_;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_12 T39 = {&KLsimple_object_vectorGVKdW, (D) 49};
  D T40;
  D T41;
  D T42;
  D T43;
  D T44_0;
  D T45;
  D T46_0;
  D T47;
  D T48;
  D new_total_suffix_;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:379
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:382
  T36 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:383
  T37 = SLOT_VALUE_INITD(T36, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:384
  per_line_end_ = CALL1(&Klogical_block_per_line_prefix_endYprint_internalsVio, T37);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:385
  prefix_length_ = CALL1(&Klogical_block_prefix_lengthYprint_internalsVio, T37);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:386
  suffix_length_ = CALL1(&Klogical_block_suffix_lengthYprint_internalsVio, T37);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:393
  T38 = SLOT_VALUE_INITD(stream_, 15);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:387
  T39.vector_element_[0] = IKJstart_column_;
  T39.vector_element_[1] = column_;
  T39.vector_element_[2] = IKJsection_column_;
  T39.vector_element_[3] = column_;
  T39.vector_element_[4] = IKJper_line_prefix_end_;
  T39.vector_element_[5] = per_line_end_;
  T39.vector_element_[6] = IKJprefix_length_;
  T39.vector_element_[7] = prefix_length_;
  T39.vector_element_[8] = IKJsuffix_length_;
  T39.vector_element_[9] = suffix_length_;
  T39.vector_element_[10] = IKJsection_start_line_;
  T39.vector_element_[11] = T38;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:387
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  new_block_ = CONGRUENT_CALL2(&KLlogical_blockGYprint_internalsVio, &T39);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:394
  T40 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:394
  SLOT_VALUE_SETTER(new_block_, T40, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:394
  SLOT_VALUE_SETTER(T36, T40, 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:394
  SLOT_VALUE_SETTER(T40, stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:395
  Kset_indentationYprint_internalsVioMM0I(stream_, column_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:396
  if (prefix_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:971
    T34 = prefix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:402
    SLOT_VALUE_SETTER(column_, new_block_, 2);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:403
    T41 = SLOT_VALUE_INITD(stream_, 17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:403
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T9 = CONGRUENT_CALL1(T34);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:403
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T10 = CONGRUENT_CALL2(column_, T9);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:405
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T11 = CONGRUENT_CALL1(T34);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:403
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(T41, T10, T34, (D) 1, T11);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:396
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:407
  if (suffix_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:971
    T35 = suffix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:408
    T42 = SLOT_VALUE_INITD(stream_, 18);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:408
    total_suffix_ = T42;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:409
    T28 = total_suffix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:409
    T43 = SLOT_VALUE_INITD(T28, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:409
    total_suffix_len_ = T43;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:410
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    additional_ = CONGRUENT_CALL1(T35);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:411
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    new_suffix_len_ = CONGRUENT_CALL2(suffix_length_, additional_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:412
    T33 = total_suffix_len_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:412
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T44_0 = CONGRUENT_CALL2(T33, new_suffix_len_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:412
    T45 = T44_0;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:412
    if (T45 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      T32 = total_suffix_len_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      CONGRUENT_CALL_PROLOG(&KTVKd, 2);
      T14 = CONGRUENT_CALL2(T32, (D) 9);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:415
      CONGRUENT_CALL_PROLOG(&KTVKd, 2);
      T15 = CONGRUENT_CALL2(additional_, (D) 21);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:415
      T16 = CALL2(&KfloorSVKd, T15, (D) 17);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:415
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T17 = CONGRUENT_CALL2(suffix_length_, T16);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T46_0 = CONGRUENT_CALL2(T17, T14);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      T47 = T46_0;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      if (T47 != &KPfalseVKi) {
        T48 = T14;
      } else {
        T48 = T17;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:414
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:416
      new_total_suffix_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T48);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:417
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T18 = CONGRUENT_CALL2(T48, suffix_length_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:418
      T31 = total_suffix_len_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:418
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T19 = CONGRUENT_CALL2(T31, suffix_length_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:417
      T27 = total_suffix_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:417
      CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
      CONGRUENT_CALL5(new_total_suffix_, T18, T27, T19, suffix_length_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:420
      total_suffix_ = new_total_suffix_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:421
      total_suffix_len_ = T48;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:422
      T26 = total_suffix_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:422
      SLOT_VALUE_SETTER(T26, stream_, 18);
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:412
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:424
    T30 = total_suffix_len_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:424
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T20 = CONGRUENT_CALL2(T30, new_suffix_len_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:424
    T25 = total_suffix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:424
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(T25, T20, T35, (D) 1, additional_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:427
    CALL2(&Klogical_block_suffix_length_setterYprint_internalsVio, new_suffix_len_, new_block_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:427
    T21 = &KPfalseVKi;
    T23 = T21;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:407
    T22 = &KPfalseVKi;
    T23 = T22;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:407
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:379
  MV_SET_COUNT(0);
  return(T23);
}

D Kreally_end_logical_blockYprint_internalsVioMM0I (D stream_) {
  D old_indent_;
  D new_indent_;
  D T4;
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
  _KLsimple_object_vectorGVKd_4 T16 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:462
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:464
  T7 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:464
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:465
  old_indent_ = CALL1(&Klogical_block_prefix_lengthYprint_internalsVio, T8);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:466
  T9 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:466
  T10 = SLOT_VALUE_INITD(T9, 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:466
  CALL2(&Kpretty_stream_blocks_setterYprint_internalsVio, T10, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:467
  T11 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:467
  T12 = SLOT_VALUE_INITD(T11, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:468
  new_indent_ = CALL1(&Klogical_block_prefix_lengthYprint_internalsVio, T12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:469
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T13_0 = CONGRUENT_CALL2(old_indent_, new_indent_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:469
  T14 = T13_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:469
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:470
    T15 = SLOT_VALUE_INITD(stream_, 17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:470
    T16.vector_element_[0] = &KJstart_;
    T16.vector_element_[1] = old_indent_;
    T16.vector_element_[2] = &KJend_;
    T16.vector_element_[3] = new_indent_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:470
    CONGRUENT_CALL_PROLOG(&KfillXVKd, 3);
    T4 = CONGRUENT_CALL3(T15, C(' '), &T16);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:469
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:469
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:462
  MV_SET_COUNT(0);
  return(T6);
}

D KLtabGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_tab_sectionQ_, D Uunique_tab_relativeQ_, D Uunique_tab_colnum_, D Uunique_tab_colinc_) {
  D T7;
  D Uunique_tab_sectionQF8;
  D T9;
  D Uunique_tab_relativeQF10;
  D T11;
  D Uunique_tab_colnumF12;
  D T13;
  D Uunique_tab_colincF14;
  D T15;
  D Uunique_tab_sectionQF16;
  D Uunique_tab_relativeQF17;
  D Uunique_tab_colnumF18;
  D Uunique_tab_colincF19;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  T21 = primitive_idQ(Uunique_tab_sectionQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  if (T21 != &KPfalseVKi) {
    T22.vector_element_[0] = IKJsectionQ_;
    T23 = KerrorVKdMM1I(&K106, &T22);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
    T7 = T23;
    Uunique_tab_sectionQF8 = T7;
  } else {
    Uunique_tab_sectionQF8 = Uunique_tab_sectionQ_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  T24 = primitive_idQ(Uunique_tab_relativeQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = IKJrelativeQ_;
    T26 = KerrorVKdMM1I(&K106, &T25);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
    T9 = T26;
    Uunique_tab_relativeQF10 = T9;
  } else {
    Uunique_tab_relativeQF10 = Uunique_tab_relativeQ_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  T27 = primitive_idQ(Uunique_tab_colnum_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  if (T27 != &KPfalseVKi) {
    T28.vector_element_[0] = IKJcolnum_;
    T29 = KerrorVKdMM1I(&K106, &T28);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
    T11 = T29;
    Uunique_tab_colnumF12 = T11;
  } else {
    Uunique_tab_colnumF12 = Uunique_tab_colnum_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  T30 = primitive_idQ(Uunique_tab_colinc_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  if (T30 != &KPfalseVKi) {
    T31.vector_element_[0] = IKJcolinc_;
    T32 = KerrorVKdMM1I(&K106, &T31);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
    T13 = T32;
    Uunique_tab_colincF14 = T13;
  } else {
    Uunique_tab_colincF14 = Uunique_tab_colinc_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  T15 = primitive_object_allocate_filled(6,&KLtabGYprint_internalsVioW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T15, 0);
  primitive_type_check(Uunique_tab_sectionQF8, &KLbooleanGVKd);
  Uunique_tab_sectionQF16 = Uunique_tab_sectionQF8;
  SLOT_VALUE_SETTER(Uunique_tab_sectionQF16, T15, 1);
  primitive_type_check(Uunique_tab_relativeQF10, &KLbooleanGVKd);
  Uunique_tab_relativeQF17 = Uunique_tab_relativeQF10;
  SLOT_VALUE_SETTER(Uunique_tab_relativeQF17, T15, 2);
  primitive_type_check(Uunique_tab_colnumF12, &KLcolumnGYprint_internalsVio);
  Uunique_tab_colnumF18 = Uunique_tab_colnumF12;
  SLOT_VALUE_SETTER(Uunique_tab_colnumF18, T15, 3);
  primitive_type_check(Uunique_tab_colincF14, &KLintegerGVKd);
  Uunique_tab_colincF19 = Uunique_tab_colincF14;
  SLOT_VALUE_SETTER(Uunique_tab_colincF19, T15, 4);
  APPLY2(&KinitializeVKd, T15, init_args_);
  T20_0 = T15;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:694
  MV_SET_COUNT(1);
  return(T20_0);
}

D KLblock_endGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:661
  T3 = primitive_object_allocate_filled(2,&KLblock_endGYprint_internalsVioW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T3, 0);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:661
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kposn_indexYprint_internalsVioMM0I (D posn_, D stream_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:205
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T4 = SLOT_VALUE_INITD(stream_, 13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T5 = primitive_cast_integer_as_raw(posn_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T7 = primitive_machine_word_logxor(T6,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T8 = primitive_machine_word_subtract_signal_overflow(T5,T7);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:208
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:205
  T3_0 = T10_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T10_0);
    primitive_type_check(T3_0, &KLcolumnGYprint_internalsVio);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:205
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcompute_tab_sizeYprint_internalsVioMM0I (D tab_, D section_start_, D column_) {
  DWORD origin_;
  D newposn_;
  D rem_;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D colnum_;
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
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD rmremainder_;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41_0;
  D T42_0;
  D T43_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:742
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:745
  T22 = SLOT_VALUE_INITD(tab_, 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:745
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
    T32 = primitive_cast_integer_as_raw(section_start_);
    origin_ = T32;
  } else {
    origin_ = 1;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:745
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
  T33 = primitive_cast_raw_as_integer(origin_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:746
  T23 = SLOT_VALUE_INITD(tab_, 3);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:746
  colnum_ = T23;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:747
  T24 = SLOT_VALUE_INITD(tab_, 4);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:748
  T25 = SLOT_VALUE_INITD(tab_, 2);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:748
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:749
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:749
    T27 = primitive_machine_word_less_thanQ(5,T26);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:749
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:750
      T21 = colnum_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:750
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      newposn_ = CONGRUENT_CALL2(column_, T21);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:751
      rem_ = CALL2(&KremainderVKd, newposn_, T24);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:752
      CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
      T7 = CONGRUENT_CALL1(rem_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:752
      if (T7 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:753
        T20 = colnum_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:753
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T8 = CONGRUENT_CALL2(T20, T24);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:753
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T9 = CONGRUENT_CALL2(T8, rem_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:753
        colnum_ = T9;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:752
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:749
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:756
    T19 = colnum_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:756
    T10_0 = T19;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:756
    T42_0 = T10_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T10_0);
      primitive_type_check(T42_0, &KLintegerGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T15_0 = T42_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:757
    T18 = colnum_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:757
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T11 = CONGRUENT_CALL2(T18, T33);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:757
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T28 = CONGRUENT_CALL2(T11, column_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:748
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T29 = primitive_cast_integer_as_raw(column_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T30 = primitive_machine_word_logxor(origin_,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T31 = primitive_machine_word_subtract_signal_overflow(T29,T30);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T35 = primitive_machine_word_shift_right(T31,2);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T37 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T36 = primitive_machine_word_shift_right(T37,2);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      rmremainder_ = primitive_machine_word_truncateS_remainder(T35,T36);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T38 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T39 = primitive_machine_word_subtract_signal_overflow(T37,T38);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T40 = primitive_cast_raw_as_integer(T39);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:760
      T41_0 = T40;
      T14_0 = T41_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:758
      T17 = colnum_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:758
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T12 = CONGRUENT_CALL2(T17, T33);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:758
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T13_0 = CONGRUENT_CALL2(T12, column_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:758
      T43_0 = T13_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T13_0);
        primitive_type_check(T43_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T14_0 = T43_0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:748
    T15_0 = T14_0;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:748
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:742
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kcopy_maybe_overlapping_bytesYprint_internalsVioMM0I (D src_, D src_start_, D dst_, D dst_start_, D n_) {
  D T6;
  D T7;
  DWORD src_iF8T, src_iF8;
  DWORD dst_iF9T, dst_iF9;
  D T10;
  D T11;
  DWORD src_iF12T, src_iF12;
  DWORD dst_iF13T, dst_iF13;
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
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD T30;
  D T31;
  _KLsimple_object_vectorGVKd_3 T32 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T33;
  DWORD T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DWORD T40;
  D T41;
  _KLsimple_object_vectorGVKd_3 T42 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T43;
  D T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55_0;
  D T56;
  DWORD T57;
  D T58;
  DBCHR T59;
  D T60;
  DBCHR T61;
  D T62;
  DWORD T63;
  D T64;
  DSINT T65;
  DWORD T66;
  DWORD T67;
  D T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79_0;
  D T80;
  DWORD T81;
  D T82;
  DBCHR T83;
  D T84;
  DBCHR T85;
  D T86;
  DWORD T87;
  D T88;
  DSINT T89;
  DWORD T90;
  DWORD T91;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:53
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:58
  T22 = primitive_idQ(src_,dst_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
    T24 = primitive_cast_integer_as_raw(src_start_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
    T25 = primitive_machine_word_less_thanQ(T24,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
    if (T25 != &KPfalseVKi) {
      T6 = T25;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T26 = primitive_cast_integer_as_raw(n_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T27 = primitive_machine_word_logxor(T26,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T28 = primitive_machine_word_add_signal_overflow(T24,T27);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T29 = SLOT_VALUE_INITD(src_, 0);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T30 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
      T31 = primitive_machine_word_less_thanQ(T30,T28);
      T6 = T31;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:62
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:63
      T32.vector_element_[0] = src_;
      T32.vector_element_[1] = src_start_;
      T32.vector_element_[2] = n_;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:63
      T33 = KerrorVKdMM1I(&K178, &T32);
      T20 = T33;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
      T34 = primitive_cast_integer_as_raw(dst_start_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
      T35 = primitive_machine_word_less_thanQ(T34,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
      if (T35 != &KPfalseVKi) {
        T7 = T35;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T36 = primitive_cast_integer_as_raw(n_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T37 = primitive_machine_word_logxor(T36,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T38 = primitive_machine_word_add_signal_overflow(T34,T37);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T39 = SLOT_VALUE_INITD(dst_, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T40 = primitive_cast_integer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
        T41 = primitive_machine_word_less_thanQ(T40,T38);
        T7 = T41;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:66
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:67
        T42.vector_element_[0] = dst_;
        T42.vector_element_[1] = dst_start_;
        T42.vector_element_[2] = n_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:67
        T43 = KerrorVKdMM1I(&K179, &T42);
        T19 = T43;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:70
        T44 = primitive_machine_word_less_thanQ(T24,T34);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          T45 = primitive_cast_integer_as_raw(n_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          T46 = primitive_machine_word_logxor(T45,1);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          T47 = primitive_machine_word_add_signal_overflow(T24,T46);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          T48 = primitive_machine_word_subtract_signal_overflow(T47,4);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:73
          T49 = primitive_machine_word_add_signal_overflow(T34,T46);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:73
          T50 = primitive_machine_word_subtract_signal_overflow(T49,4);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          src_iF8T = T48;
          dst_iF9T = T50;
        L0: ;
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            src_iF8 = src_iF8T;
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            T52 = primitive_cast_raw_as_integer(src_iF8);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            dst_iF9 = dst_iF9T;
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            T54 = primitive_cast_raw_as_integer(dst_iF9);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            T51 = primitive_machine_word_less_thanQ(src_iF8,T24);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            if (T51 != &KPfalseVKi) {
              T10 = &KPtrueVKi;
            } else {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
              T53 = primitive_machine_word_less_thanQ(dst_iF9,T34);
              T10 = T53;
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            if (T10 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T56 = SLOT_VALUE_INITD(src_, 0);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T57 = primitive_cast_integer_as_raw(T56);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T58 = primitive_machine_word_unsigned_less_thanQ(src_iF8,T57);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              if (T58 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                T59 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(src_, 1, src_iF8);
                T61 = T59;
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                T55_0 = Kelement_range_errorVKeI(src_, T52);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                T60 = T55_0;
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                T65 = primitive_byte_character_as_raw(T60);
                T61 = T65;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T62 = SLOT_VALUE_INITD(dst_, 0);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T63 = primitive_cast_integer_as_raw(T62);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              T64 = primitive_machine_word_unsigned_less_thanQ(dst_iF9,T63);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              if (T64 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T61, dst_, 1, dst_iF9);
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
                Kelement_range_errorVKeI(dst_, T54);
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:74
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
              T66 = primitive_machine_word_add_signal_overflow(src_iF8,0xFFFFFFFFFFFFFFFCL);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
              T67 = primitive_machine_word_add_signal_overflow(dst_iF9,0xFFFFFFFFFFFFFFFCL);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
              src_iF8T = T66;
              dst_iF9T = T67;
              goto L0;
            }
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
            T11 = &KPfalseVKi;
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:72
          T18 = T11;
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:76
          T68 = primitive_machine_word_less_thanQ(T34,T24);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
          if (T68 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            T69 = primitive_cast_integer_as_raw(n_);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            T70 = primitive_machine_word_logxor(T69,1);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            T71 = primitive_machine_word_add_signal_overflow(T24,T70);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            T72 = primitive_machine_word_subtract_signal_overflow(T71,4);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:79
            T73 = primitive_machine_word_add_signal_overflow(T34,T70);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:79
            T74 = primitive_machine_word_subtract_signal_overflow(T73,4);
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            src_iF12T = T24;
            dst_iF13T = T34;
          L1: ;
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              src_iF12 = src_iF12T;
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              T76 = primitive_cast_raw_as_integer(src_iF12);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              dst_iF13 = dst_iF13T;
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              T78 = primitive_cast_raw_as_integer(dst_iF13);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              T75 = primitive_machine_word_less_thanQ(T72,src_iF12);
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              if (T75 != &KPfalseVKi) {
                T14 = &KPtrueVKi;
              } else {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
                T77 = primitive_machine_word_less_thanQ(T74,dst_iF13);
                T14 = T77;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              if (T14 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T80 = SLOT_VALUE_INITD(src_, 0);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T81 = primitive_cast_integer_as_raw(T80);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T82 = primitive_machine_word_unsigned_less_thanQ(src_iF12,T81);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                if (T82 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  T83 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(src_, 1, src_iF12);
                  T85 = T83;
                } else {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  T79_0 = Kelement_range_errorVKeI(src_, T76);
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  T84 = T79_0;
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  T89 = primitive_byte_character_as_raw(T84);
                  T85 = T89;
                }
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T86 = SLOT_VALUE_INITD(dst_, 0);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T87 = primitive_cast_integer_as_raw(T86);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                T88 = primitive_machine_word_unsigned_less_thanQ(dst_iF13,T87);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                if (T88 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T85, dst_, 1, dst_iF13);
                } else {
                  // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                  Kelement_range_errorVKeI(dst_, T78);
                }
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:80
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
                T90 = primitive_machine_word_add_signal_overflow(src_iF12,4);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
                T91 = primitive_machine_word_add_signal_overflow(dst_iF13,4);
                // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
                src_iF12T = T90;
                dst_iF13T = T91;
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
              T15 = &KPfalseVKi;
              // /opt/opendylan-2013.1/sources/io/pprint.dylan:78
            T17 = T15;
          } else {
            // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
            T16 = &KPfalseVKi;
            T17 = T16;
          }
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
        T19 = T18;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
    T21 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:61
    T23 = Kcopy_bytesYbyte_vectorVcommon_dylanMM8I(dst_, dst_start_, src_, src_start_, n_);
    T21 = T23;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:57
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:53
  MV_SET_COUNT(0);
  return(T21);
}

D KLblock_startGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_section_start_depth_, D Uunique_block_start_prefix_, D Uunique_block_start_suffix_) {
  D T6;
  D Uunique_section_start_depthF7;
  D T8;
  D Uunique_block_start_prefixF9;
  D T10;
  D Uunique_block_start_suffixF11;
  D T12;
  D Uunique_section_start_depthF13;
  D Uunique_block_start_prefixF14;
  D Uunique_block_start_suffixF15;
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

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  T17 = primitive_idQ(Uunique_section_start_depth_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = IKJdepth_;
    T19 = KerrorVKdMM1I(&K106, &T18);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
    T6 = T19;
    Uunique_section_start_depthF7 = T6;
  } else {
    Uunique_section_start_depthF7 = Uunique_section_start_depth_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  T20 = primitive_idQ(Uunique_block_start_prefix_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = IKJprefix_;
    T22 = KerrorVKdMM1I(&K106, &T21);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
    T8 = T22;
    Uunique_block_start_prefixF9 = T8;
  } else {
    Uunique_block_start_prefixF9 = Uunique_block_start_prefix_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  T23 = primitive_idQ(Uunique_block_start_suffix_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = IKJsuffix_;
    T25 = KerrorVKdMM1I(&K106, &T24);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
    T10 = T25;
    Uunique_block_start_suffixF11 = T10;
  } else {
    Uunique_block_start_suffixF11 = Uunique_block_start_suffix_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  T12 = primitive_object_allocate_filled(7,&KLblock_startGYprint_internalsVioW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T12, 0);
  primitive_type_check(Uunique_section_start_depthF7, &KLintegerGVKd);
  Uunique_section_start_depthF13 = Uunique_section_start_depthF7;
  SLOT_VALUE_SETTER(Uunique_section_start_depthF13, T12, 1);
  SLOT_VALUE_SETTER(&KPfalseVKi, T12, 2);
  SLOT_VALUE_SETTER(&KPfalseVKi, T12, 3);
  primitive_type_check(Uunique_block_start_prefixF9, &K206);
  Uunique_block_start_prefixF14 = Uunique_block_start_prefixF9;
  SLOT_VALUE_SETTER(Uunique_block_start_prefixF14, T12, 4);
  primitive_type_check(Uunique_block_start_suffixF11, &K206);
  Uunique_block_start_suffixF15 = Uunique_block_start_suffixF11;
  SLOT_VALUE_SETTER(Uunique_block_start_suffixF15, T12, 5);
  APPLY2(&KinitializeVKd, T12, init_args_);
  T16_0 = T12;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:618
  MV_SET_COUNT(1);
  return(T16_0);
}

D KLpretty_streamGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_sequence_, D Uunique_pretty_stream_target_, D Uunique_pretty_stream_line_length_, D Uunique_pretty_stream_buffer_start_column_) {
  D T10;
  D T11;
  D Uunique_private_stream_lock_valueF12;
  D T13;
  D T14;
  D Uunique_stream_sequenceF15;
  D T16;
  D Uunique_pretty_stream_targetF17;
  D T18;
  D T19;
  D Uunique_pretty_stream_line_lengthF20;
  D T21;
  D Uunique_outer_streamF22;
  D Uunique_outer_streamF23;
  D Uunique_private_stream_element_type_valueF24;
  D Uunique_private_stream_lock_valueF25;
  D Uunique_stream_sequenceF26;
  D Uunique_pretty_stream_targetF27;
  D Uunique_pretty_stream_line_lengthF28;
  D T29;
  D Uunique_pretty_stream_buffer_start_columnF30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35_0;
  D T36;
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T40;
  D T41;
  D T42;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  T36 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  if (T36 != &KPfalseVKi) {
    T10 = K384I();
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
    T11 = T10;
    Uunique_private_stream_lock_valueF12 = T11;
  } else {
    Uunique_private_stream_lock_valueF12 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  T37 = primitive_idQ(Uunique_stream_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  if (T37 != &KPfalseVKi) {
    T13 = K383I();
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
    T14 = T13;
    Uunique_stream_sequenceF15 = T14;
  } else {
    Uunique_stream_sequenceF15 = Uunique_stream_sequence_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  T38 = primitive_idQ(Uunique_pretty_stream_target_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  if (T38 != &KPfalseVKi) {
    T39.vector_element_[0] = IKJtarget_;
    T40 = KerrorVKdMM1I(&K106, &T39);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
    T16 = T40;
    Uunique_pretty_stream_targetF17 = T16;
  } else {
    Uunique_pretty_stream_targetF17 = Uunique_pretty_stream_target_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  T41 = primitive_idQ(Uunique_pretty_stream_line_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  if (T41 != &KPfalseVKi) {
    T18 = K382I();
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
    T19 = T18;
    Uunique_pretty_stream_line_lengthF20 = T19;
  } else {
    Uunique_pretty_stream_line_lengthF20 = Uunique_pretty_stream_line_length_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  T21 = primitive_object_allocate_filled(23,&KLpretty_streamGYpprintVioW,22,&KPunboundVKi,0,0,&KPunboundVKi);
  T42 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T42 != &KPfalseVKi) {
    Uunique_outer_streamF23 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K370);
    Uunique_outer_streamF22 = Uunique_outer_stream_;
    Uunique_outer_streamF23 = Uunique_outer_streamF22;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF23, T21, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF24 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF24, T21, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T21, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF12, &K371);
  Uunique_private_stream_lock_valueF25 = Uunique_private_stream_lock_valueF12;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF25, T21, 3);
  SLOT_VALUE_SETTER((D) 1, T21, 4);
  SLOT_VALUE_SETTER((D) 1, T21, 5);
  SLOT_VALUE_SETTER((D) 1, T21, 6);
  primitive_type_check(Uunique_stream_sequenceF15, &KLsequenceGVKd);
  Uunique_stream_sequenceF26 = Uunique_stream_sequenceF15;
  SLOT_VALUE_SETTER(Uunique_stream_sequenceF26, T21, 7);
  SLOT_VALUE_SETTER(&KPfalseVKi, T21, 8);
  primitive_type_check(Uunique_pretty_stream_targetF17, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_pretty_stream_targetF27 = Uunique_pretty_stream_targetF17;
  SLOT_VALUE_SETTER(Uunique_pretty_stream_targetF27, T21, 9);
  primitive_type_check(Uunique_pretty_stream_line_lengthF20, &KLcolumnGYprint_internalsVio);
  Uunique_pretty_stream_line_lengthF28 = Uunique_pretty_stream_line_lengthF20;
  SLOT_VALUE_SETTER(Uunique_pretty_stream_line_lengthF28, T21, 10);
  T29 = K381I();
  SLOT_VALUE_SETTER(T29, T21, 11);
  SLOT_VALUE_SETTER((D) 1, T21, 12);
  SLOT_VALUE_SETTER((D) 1, T21, 13);
  primitive_type_check(Uunique_pretty_stream_buffer_start_column_, &KLcolumnGYprint_internalsVio);
  Uunique_pretty_stream_buffer_start_columnF30 = Uunique_pretty_stream_buffer_start_column_;
  SLOT_VALUE_SETTER(Uunique_pretty_stream_buffer_start_columnF30, T21, 14);
  SLOT_VALUE_SETTER((D) 1, T21, 15);
  T31 = K380I();
  SLOT_VALUE_SETTER(T31, T21, 16);
  T32 = K379I();
  SLOT_VALUE_SETTER(T32, T21, 17);
  T33 = K378I();
  SLOT_VALUE_SETTER(T33, T21, 18);
  T34 = K377I();
  SLOT_VALUE_SETTER(T34, T21, 19);
  SLOT_VALUE_SETTER(&KPempty_listVKi, T21, 20);
  SLOT_VALUE_SETTER(&KPfalseVKi, T21, 21);
  APPLY2(&KinitializeVKd, T21, init_args_);
  T35_0 = T21;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:104
  MV_SET_COUNT(1);
  return(T35_0);
}

static D K284I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:173
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:173
  T2_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:173
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:173
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:173
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K296I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:169
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:169
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:169
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:169
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K307I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:162
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:162
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:162
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:162
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K314I () {
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_12 T3 = {&KLsimple_object_vectorGVKdW, (D) 49};
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  T3.vector_element_[0] = IKJstart_column_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = IKJsection_column_;
  T3.vector_element_[3] = (D) 1;
  T3.vector_element_[4] = IKJper_line_prefix_end_;
  T3.vector_element_[5] = (D) 1;
  T3.vector_element_[6] = IKJprefix_length_;
  T3.vector_element_[7] = (D) 1;
  T3.vector_element_[8] = IKJsuffix_length_;
  T3.vector_element_[9] = (D) 1;
  T3.vector_element_[10] = IKJsection_start_line_;
  T3.vector_element_[11] = (D) 1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLlogical_blockGYprint_internalsVio, &T3);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  T4.vector_element_[0] = T0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  T1 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:150
  MV_SET_COUNT(1);
  return(T2_0);
}

static D K351I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:126
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:126
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:126
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:126
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K360I () {
  D T0;
  D init_value_;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:113
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:113
  T0 = Tdefault_line_lengthTYpprintVio;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:113
  primitive_type_check(T0, &KLcolumnGYprint_internalsVio);
  init_value_ = T0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:113
  T2_0 = init_value_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:113
  MV_SET_COUNT(1);
  return(T2_0);
}

static D K384I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K383I () {
  D T0_0;
  D T1_0;
  D T2;

  T1_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 1);
  T2 = T1_0;
  T0_0 = T2;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K382I () {
  D T0;
  D init_value_;
  D T2_0;

  T0 = Tdefault_line_lengthTYpprintVio;
  primitive_type_check(T0, &KLcolumnGYprint_internalsVio);
  init_value_ = T0;
  T2_0 = init_value_;
  MV_SET_COUNT(1);
  return(T2_0);
}

static D K381I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K380I () {
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_12 T3 = {&KLsimple_object_vectorGVKdW, (D) 49};
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};

  T3.vector_element_[0] = IKJstart_column_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = IKJsection_column_;
  T3.vector_element_[3] = (D) 1;
  T3.vector_element_[4] = IKJper_line_prefix_end_;
  T3.vector_element_[5] = (D) 1;
  T3.vector_element_[6] = IKJprefix_length_;
  T3.vector_element_[7] = (D) 1;
  T3.vector_element_[8] = IKJsuffix_length_;
  T3.vector_element_[9] = (D) 1;
  T3.vector_element_[10] = IKJsection_start_line_;
  T3.vector_element_[11] = (D) 1;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLlogical_blockGYprint_internalsVio, &T3);
  T4.vector_element_[0] = T0;
  T1 = KlistVKdI(&T4);
  T2_0 = T1;
  MV_SET_COUNT(1);
  return(T2_0);
}

static D K379I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K378I () {
  D T0_0;
  D T1;

  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 513);
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K377I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kindex_columnYprint_internalsVioMM0I (D index_, D stream_) {
  D section_startF3;
  D end_posn_;
  D returnPexit_49_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
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
  D T23_0;
  D T24_0;
  D column_;
  D T26;
  D T27;
  D T28;
  D T29;
  D section_startF30;
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
  D T42;
  D T43;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:775
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:778
  T34 = SLOT_VALUE_INITD(stream_, 14);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:778
  column_ = T34;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:780
  T35 = SLOT_VALUE_INITD(stream_, 16);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:780
  T36 = SLOT_VALUE_INITD(T35, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:780
  section_startF3 = CALL1(&Klogical_block_section_columnYprint_internalsVio, T36);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:780
  section_startF30 = section_startF3;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:781
  end_posn_ = Kindex_posnYprint_internalsVioMM0I(index_, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:782
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T37 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(T37);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T7 = T6;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  T12T = T7;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
    T13 = CALL3(T10, T37, T12, T8);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
      T14 = CALL2(T11, T37, T12);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:784
      T15 = CALL1(&Kop_posnYprint_internalsVio, T14);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:784
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T38 = CONGRUENT_CALL2(T15, end_posn_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:784
      if (T38 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:782
        T39 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:782
        T39;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:784
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:787
      T40 = primitive_instanceQ(T14,&KLtabGYprint_internalsVio);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:787
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:220
        T32 = T14;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:790
        T41 = SLOT_VALUE_INITD(T32, 0);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:790
        T16 = Kposn_indexYprint_internalsVioMM0I(T41, stream_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:790
        T29 = column_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:790
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T17 = CONGRUENT_CALL2(T29, T16);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:789
        T31 = section_startF30;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:789
        T18 = CALL3(&Kcompute_tab_sizeYprint_internalsVioMM0, T32, T31, T17);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:788
        T28 = column_;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:788
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T19 = CONGRUENT_CALL2(T28, T18);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:788
        column_ = T19;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:791
        T42 = primitive_instanceQ(T14,&KLsection_startGYprint_internalsVio);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:787
        if (T42 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:220
          T33 = T14;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:792
          T43 = SLOT_VALUE_INITD(T33, 0);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:792
          T20 = Kposn_indexYprint_internalsVioMM0I(T43, stream_);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:792
          T27 = column_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:792
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T21 = CONGRUENT_CALL2(T27, T20);
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:792
          section_startF30 = T21;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:787
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:787
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
      T22 = CALL2(T9, T37, T12);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
      T12T = T22;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:783
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:782
  L1: ;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:796
  T26 = column_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:796
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T23_0 = CONGRUENT_CALL2(T26, index_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:775
  T24_0 = T23_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T23_0);
    primitive_type_check(T24_0, &KLcolumnGYprint_internalsVio);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:775
  MV_SET_COUNT(1);
  return(T24_0);
}

D Kindex_posnYprint_internalsVioMM0I (D index_, D stream_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:195
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T3 = SLOT_VALUE_INITD(stream_, 13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T4 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T6 = primitive_machine_word_logxor(T5,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T7 = primitive_machine_word_add_signal_overflow(T4,T6);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:198
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:195
  MV_SET_COUNT(1);
  return(T9_0);
}

D KLindentationGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_indentation_kind_, D Uunique_indentation_amount_) {
  D T5;
  D Uunique_indentation_kindF6;
  D T7;
  D Uunique_indentation_amountF8;
  D T9;
  D Uunique_indentation_kindF10;
  D Uunique_indentation_amountF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  T13 = primitive_idQ(Uunique_indentation_kind_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = IKJkind_;
    T15 = KerrorVKdMM1I(&K106, &T14);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
    T5 = T15;
    Uunique_indentation_kindF6 = T5;
  } else {
    Uunique_indentation_kindF6 = Uunique_indentation_kind_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  T16 = primitive_idQ(Uunique_indentation_amount_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = IKJamount_;
    T18 = KerrorVKdMM1I(&K106, &T17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
    T7 = T18;
    Uunique_indentation_amountF8 = T7;
  } else {
    Uunique_indentation_amountF8 = Uunique_indentation_amount_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  T9 = primitive_object_allocate_filled(4,&KLindentationGYprint_internalsVioW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T9, 0);
  primitive_type_check(Uunique_indentation_kindF6, &KLindentation_kindGYprint_internalsVio);
  Uunique_indentation_kindF10 = Uunique_indentation_kindF6;
  SLOT_VALUE_SETTER(Uunique_indentation_kindF10, T9, 1);
  primitive_type_check(Uunique_indentation_amountF8, &KLintegerGVKd);
  Uunique_indentation_amountF11 = Uunique_indentation_amountF8;
  SLOT_VALUE_SETTER(Uunique_indentation_amountF11, T9, 2);
  APPLY2(&KinitializeVKd, T9, init_args_);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:590
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLnewlineGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_section_start_depth_, D Uunique_newline_kind_) {
  D T5;
  D Uunique_section_start_depthF6;
  D T7;
  D Uunique_newline_kindF8;
  D T9;
  D Uunique_section_start_depthF10;
  D Uunique_newline_kindF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  T13 = primitive_idQ(Uunique_section_start_depth_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = IKJdepth_;
    T15 = KerrorVKdMM1I(&K106, &T14);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
    T5 = T15;
    Uunique_section_start_depthF6 = T5;
  } else {
    Uunique_section_start_depthF6 = Uunique_section_start_depth_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  T16 = primitive_idQ(Uunique_newline_kind_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = IKJkind_;
    T18 = KerrorVKdMM1I(&K106, &T17);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
    T7 = T18;
    Uunique_newline_kindF8 = T7;
  } else {
    Uunique_newline_kindF8 = Uunique_newline_kind_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  T9 = primitive_object_allocate_filled(5,&KLnewlineGYprint_internalsVioW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER((D) 1, T9, 0);
  primitive_type_check(Uunique_section_start_depthF6, &KLintegerGVKd);
  Uunique_section_start_depthF10 = Uunique_section_start_depthF6;
  SLOT_VALUE_SETTER(Uunique_section_start_depthF10, T9, 1);
  SLOT_VALUE_SETTER(&KPfalseVKi, T9, 2);
  primitive_type_check(Uunique_newline_kindF8, &KLnewline_kindGYprint_internalsVio);
  Uunique_newline_kindF11 = Uunique_newline_kindF8;
  SLOT_VALUE_SETTER(Uunique_newline_kindF11, T9, 3);
  APPLY2(&KinitializeVKd, T9, init_args_);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:547
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kpprint_indentYpprintVioMM0I (D relative_to_, D n_, D stream_) {
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1247
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1250
  T5 = SLOT_VALUE_INITD(stream_, 21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1250
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1251
    KerrorVKdMM1I(&K30, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1250
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1253
  T4 = Kenqueue_indentYprint_internalsVioMM0I(stream_, relative_to_, n_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1247
  MV_SET_COUNT(0);
  return(T4);
}

D Kenqueue_indentYprint_internalsVioMM0I (D stream_, D kind_, D amount_) {
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:609
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:611
  T6.vector_element_[0] = IKJkind_;
  T6.vector_element_[1] = kind_;
  T6.vector_element_[2] = IKJamount_;
  T6.vector_element_[3] = amount_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:611
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLindentationGYprint_internalsVio, &T6);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:611
  T5 = KenqueueYprint_internalsVioMM0I(stream_, T4);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:609
  MV_SET_COUNT(0);
  return(T5);
}

D Kpprint_tabYpprintVioMM0I (D kind_, D colnum_, D colinc_, D stream_) {
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1264
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1267
  T6 = SLOT_VALUE_INITD(stream_, 21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1267
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1268
    KerrorVKdMM1I(&K30, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1267
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1270
  T5 = CALL4(&Kenqueue_tabYprint_internalsVioMM0, stream_, kind_, colnum_, colinc_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1264
  MV_SET_COUNT(0);
  return(T5);
}

D Kenqueue_tabYprint_internalsVioMM0I (D stream_, D kind_, D colnum_, D colinc_) {
  D T5_0;
  D T5_1;
  D T6_0;
  D T6_1;
  D T7_0;
  D T7_1;
  D T8_0;
  D T8_1;
  D sectionQ_;
  D relativeQ_;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;
  D T15;
  D T16_0;
  D T16_1;
  D T17;
  D T18_0;
  D T18_1;
  D T19;
  D T20_0;
  D T20_1;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22_0;
  D T22_1;
  _KLsimple_object_vectorGVKd_8 T23 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:719
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
  T13 = primitive_idQ(kind_,IKJline_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:724
    T14_0 = &KPfalseVKi;
    T14_1 = &KPfalseVKi;
    T8_0 = T14_0;
    T8_1 = T14_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
    T15 = primitive_idQ(kind_,IKJline_relative_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:725
      T16_0 = &KPfalseVKi;
      T16_1 = &KPtrueVKi;
      T7_0 = T16_0;
      T7_1 = T16_1;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
      T17 = primitive_idQ(kind_,IKJsection_);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:726
        T18_0 = &KPtrueVKi;
        T18_1 = &KPfalseVKi;
        T6_0 = T18_0;
        T6_1 = T18_1;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
        T19 = primitive_idQ(kind_,IKJsection_relative_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:727
          T20_0 = &KPtrueVKi;
          T20_1 = &KPtrueVKi;
          T5_0 = T20_0;
          T5_1 = T20_1;
        } else {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
          T21.vector_element_[0] = kind_;
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
          T22_0 = KerrorVKdMM1I(&K48, &T21);
          T22_1 = MV_GET_ELT(1);
          T5_0 = T22_0;
          T5_1 = T22_1;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
        T6_0 = T5_0;
        T6_1 = T5_1;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
      T7_0 = T6_0;
      T7_1 = T6_1;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
    T8_0 = T7_0;
    T8_1 = T7_1;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:723
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:722
  sectionQ_ = T8_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:722
  relativeQ_ = T8_1;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:730
  T23.vector_element_[0] = IKJsectionQ_;
  T23.vector_element_[1] = sectionQ_;
  T23.vector_element_[2] = IKJrelativeQ_;
  T23.vector_element_[3] = relativeQ_;
  T23.vector_element_[4] = IKJcolnum_;
  T23.vector_element_[5] = colnum_;
  T23.vector_element_[6] = IKJcolinc_;
  T23.vector_element_[7] = colinc_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:730
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T11 = CONGRUENT_CALL2(&KLtabGYprint_internalsVio, &T23);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:729
  T12 = KenqueueYprint_internalsVioMM0I(stream_, T11);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:719
  MV_SET_COUNT(0);
  return(T12);
}

D Kpprint_logical_blockYpprintVioMM0I (D stream_, D Urest_, D column_, D prefix_, D per_line_prefix_, D body_, D suffix_) {
  D columnF8;
  D prefixF9;
  D per_line_prefixF10;
  D bodyF11;
  D suffixF12;
  D T13;
  D T14;
  D streamF15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  primitive_type_check(column_, &KLintegerGVKd);
  columnF8 = column_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  primitive_type_check(prefix_, &K206);
  prefixF9 = prefix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  primitive_type_check(per_line_prefix_, &K206);
  per_line_prefixF10 = per_line_prefix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  primitive_type_check(body_, &KLfunctionGVKd);
  bodyF11 = body_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  primitive_type_check(suffix_, &K206);
  suffixF12 = suffix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1176
  if (prefixF9 != &KPfalseVKi) {
    T13 = per_line_prefixF10;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1176
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1176
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1177
    KerrorVKdMM1I(&K533, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1176
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1180
  T14 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1179
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1181
    T24.vector_element_[0] = IKJtarget_;
    T24.vector_element_[1] = stream_;
    T24.vector_element_[2] = IKJcolumn_;
    T24.vector_element_[3] = columnF8;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1181
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    streamF15 = CONGRUENT_CALL2(&KLpretty_streamGYpprintVio, &T24);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1182
    Kpprint_logical_blockYpprintVioMM1I(streamF15, &KPempty_vectorVKi, (D) 1, prefixF9, per_line_prefixF10, bodyF11, suffixF12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1187
    CONGRUENT_CALL_PROLOG(&KcloseYcommon_extensionsVcommon_dylan, 2);
    T16 = CONGRUENT_CALL2(streamF15, &KPempty_vectorVKi);
    T22 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1189
    if (prefixF9 != &KPfalseVKi) {
      T17 = prefixF9;
    } else {
      T17 = per_line_prefixF10;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1189
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1189
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1190
      if (prefixF9 != &KPfalseVKi) {
        T18 = prefixF9;
      } else {
        T18 = per_line_prefixF10;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1190
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1190
      CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T18);
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1189
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1192
    CALL1(bodyF11, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1193
    if (suffixF12 != &KPfalseVKi) {
      T23 = suffixF12;
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1193
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      T19 = CONGRUENT_CALL3(stream_, T23, &KPempty_vectorVKi);
      T21 = T19;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:1193
      T20 = &KPfalseVKi;
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1193
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1179
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1169
  MV_SET_COUNT(0);
  return(T22);
}

D Kpprint_logical_blockYpprintVioMM1I (D stream_, D Urest_, D column_, D prefix_, D per_line_prefix_, D body_, D suffix_) {
  D prefixF8;
  D per_line_prefixF9;
  D bodyF10;
  D suffixF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D abortedQ_;
  D T17;
  D T18;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  primitive_type_check(column_, &KLintegerGVKd);
  column_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  primitive_type_check(prefix_, &K206);
  prefixF8 = prefix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  primitive_type_check(per_line_prefix_, &K206);
  per_line_prefixF9 = per_line_prefix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  primitive_type_check(body_, &KLfunctionGVKd);
  bodyF10 = body_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  primitive_type_check(suffix_, &K206);
  suffixF11 = suffix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1206
  if (prefixF8 != &KPfalseVKi) {
    T12 = per_line_prefixF9;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1206
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1206
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1207
    KerrorVKdMM1I(&K533, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1206
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1209
  T18 = SLOT_VALUE_INITD(stream_, 21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1209
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1210
    KerrorVKdMM1I(&K30, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1209
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1206
  abortedQ_ = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1213
  ENTER_UNWIND_FRAME(T13);
  if (!nlx_setjmp(FRAME_DEST(T13))) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1214
    if (prefixF8 != &KPfalseVKi) {
      T14 = prefixF8;
    } else {
      T14 = per_line_prefixF9;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1214
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1215
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T19 = CONGRUENT_CALL2(per_line_prefixF9, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1215
    T20 = primitive_not(T19);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1214
    Kstart_logical_blockYprint_internalsVioMM0I(stream_, T14, T20, suffixF11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1217
    CALL1(bodyF10, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1218
    abortedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1218
    T15 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1213
    FALL_THROUGH_UNWIND(T15);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1220
  T17 = abortedQ_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1220
  Kend_logical_blockYprint_internalsVioMM0I(stream_, T17);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1213
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1199
  MV_SET_COUNT(0);
  return(T15);
}

D Kstart_logical_blockYprint_internalsVioMM0I (D stream_, D prefix_, D per_lineQ_, D suffix_) {
  D T5;
  D T6;
  D start_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_6 T13 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T14;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:642
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:645
  if (prefix_ != &KPfalseVKi) {
    T9 = prefix_;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:646
    T10 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:646
    Kappend_raw_outputYprint_internalsVioMM0I(stream_, T9, (D) 1, T10);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:645
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:648
  T11 = SLOT_VALUE_INITD(stream_, 20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:651
  if (per_lineQ_ != &KPfalseVKi) {
    T5 = prefix_;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:651
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:653
  T12 = KsizeVKdMM30I(T11);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:650
  T13.vector_element_[0] = IKJprefix_;
  T13.vector_element_[1] = T5;
  T13.vector_element_[2] = IKJsuffix_;
  T13.vector_element_[3] = suffix_;
  T13.vector_element_[4] = IKJdepth_;
  T13.vector_element_[5] = T12;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:650
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLblock_startGYprint_internalsVio, &T13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:649
  start_ = KenqueueYprint_internalsVioMM0I(stream_, T6);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:654
  T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:654
  SLOT_VALUE_SETTER(start_, T14, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:654
  SLOT_VALUE_SETTER(T11, T14, 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:654
  SLOT_VALUE_SETTER(T14, stream_, 20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:654
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:642
  MV_SET_COUNT(0);
  return(T8);
}

D Kend_logical_blockYprint_internalsVioMM0I (D stream_, D abortedQ_) {
  D T3;
  D suffix_;
  D T5;
  D stop_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:679
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:681
  T9 = SLOT_VALUE_INITD(stream_, 20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:682
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:683
  T11 = SLOT_VALUE_INITD(T9, 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:683
  CALL2(&Kpretty_stream_pending_blocks_setterYprint_internalsVio, T11, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:684
  if (abortedQ_ != &KPfalseVKi) {
    suffix_ = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:684
    T3 = CALL1(&Kblock_start_suffixYprint_internalsVio, T10);
    suffix_ = T3;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:684
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:685
  T12.vector_element_[0] = IKJsuffix_;
  T12.vector_element_[1] = suffix_;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:685
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T5 = CONGRUENT_CALL2(&KLblock_endGYprint_internalsVio, &T12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:685
  stop_ = KenqueueYprint_internalsVioMM0I(stream_, T5);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:686
  if (suffix_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:687
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(suffix_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:687
    CALL4(&Kappend_raw_outputYprint_internalsVioMM0, stream_, suffix_, (D) 1, T7);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:686
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:689
  CALL2(&Kblock_start_block_end_setterYprint_internalsVio, stop_, T10);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:689
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:679
  MV_SET_COUNT(0);
  return(T8);
}

D Kappend_raw_outputYprint_internalsVioMM0I (D stream_, D stuff_, D start_, D stop_) {
  D available_;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  D streamF30T, streamF30;
  D T31;
  D stuffF32T, stuffF32;
  D T33;
  D startF34T, startF34;
  D T35;
  D stopF36T, stopF36;
  D T37;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:316
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
  streamF30T = stream_;
  stuffF32T = stuff_;
  startF34T = start_;
  stopF36T = stop_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    streamF30 = streamF30T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    primitive_type_check(streamF30, &KLpretty_streamGYpprintVio);
    T31 = streamF30;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    stuffF32 = stuffF32T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    primitive_type_check(stuffF32, &K538);
    T33 = stuffF32;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    startF34 = startF34T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    primitive_type_check(startF34, &KLintegerGVKd);
    T35 = startF34;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    stopF36 = stopF36T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
    primitive_type_check(stopF36, &KLintegerGVKd);
    T37 = stopF36;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:319
    T8 = primitive_cast_integer_as_raw(T37);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:319
    T9 = primitive_cast_integer_as_raw(T35);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:319
    T10 = primitive_machine_word_logxor(T9,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:319
    T11 = primitive_machine_word_subtract_signal_overflow(T8,T10);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:319
    T12 = primitive_cast_raw_as_integer(T11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:320
    available_ = Kassure_space_in_bufferYprint_internalsVioMM0I(T31, T12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:321
    T14 = primitive_cast_integer_as_raw(available_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:321
    T15 = primitive_machine_word_less_thanQ(T11,T14);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:321
    if (T15 != &KPfalseVKi) {
      T13 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
      T21 = primitive_cast_integer_as_raw(available_);
      T13 = T21;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:321
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
    T22 = primitive_cast_raw_as_integer(T13);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:322
    T16 = SLOT_VALUE_INITD(T31, 12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
    T18 = primitive_machine_word_logxor(T13,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
    T19 = primitive_machine_word_add_signal_overflow(T17,T18);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:323
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:324
    T23 = SLOT_VALUE_INITD(T31, 11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:324
    CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
    CONGRUENT_CALL5(T23, T16, T33, T35, T22);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:325
    CALL2(&Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio, T20, T31);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:326
    T24 = primitive_idQ(T22,T12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:326
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:326
      T6 = &KPfalseVKi;
      T7 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
      T25 = primitive_cast_integer_as_raw(T35);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
      T26 = primitive_machine_word_logxor(T13,1);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
      T27 = primitive_machine_word_add_signal_overflow(T25,T26);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
      T28 = primitive_cast_raw_as_integer(T27);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
      streamF30T = stream_;
      stuffF32T = stuff_;
      startF34T = T28;
      stopF36T = stop_;
      goto L0;
      T7 = T29;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:326
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:327
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:316
  MV_SET_COUNT(0);
  return(T7);
}

D Kassure_space_in_bufferYprint_internalsVioMM0I (D stream_, D want_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27_0;
  DWORD T27_1;
  DWORD quotient_;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D new_buffer_;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  D T38_0;
  D T39;
  D T40_0;
  D streamF41T, streamF41;
  D T42;
  D wantF43T, wantF43;
  D T44;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:871
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
  streamF41T = stream_;
  wantF43T = want_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
    streamF41 = streamF41T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
    primitive_type_check(streamF41, &KLpretty_streamGYpprintVio);
    T42 = streamF41;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
    wantF43 = wantF43T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
    primitive_type_check(wantF43, &KLintegerGVKd);
    T44 = wantF43;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:874
    T7 = SLOT_VALUE_INITD(T42, 11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:875
    T8 = SLOT_VALUE_INITD(T7, 0);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:876
    T9 = SLOT_VALUE_INITD(T42, 12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:877
    T10 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:877
    T11 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:877
    T12 = primitive_machine_word_logxor(T11,1);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:877
    T13 = primitive_machine_word_subtract_signal_overflow(T10,T12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:877
    T14 = primitive_cast_raw_as_integer(T13);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:878
    T15 = primitive_machine_word_less_thanQ(1,T13);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:878
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:879
      T3_0 = T14;
      T6_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:880
      T16 = SLOT_VALUE_INITD(T42, 10);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:880
      T17 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:880
      T18 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:880
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:878
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:881
        T4 = Kmaybe_outputYprint_internalsVioMM0I(T42, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:881
        if (T4 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:882
          Koutput_partial_lineYprint_internalsVioMM0I(T42);
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:881
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
        streamF41T = stream_;
        wantF43T = want_;
        goto L0;
        T5_0 = T40_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T20 = primitive_machine_word_logxor(T10,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T21 = primitive_machine_word_multiply_signal_overflow(T20,2);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T22 = primitive_machine_word_logior(T21,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T23 = primitive_cast_integer_as_raw(T44);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T24 = primitive_machine_word_logxor(T23,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T25 = primitive_machine_word_multiply_signal_overflow(T24,5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T26 = primitive_machine_word_shift_right(T25,2);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T27_0 = primitive_machine_word_floorS_byref(T26,4,(DWORD*)&T27_1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        quotient_ = T27_0;
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T29 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T30 = primitive_machine_word_add_signal_overflow(T10,T29);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        T32 = primitive_machine_word_less_thanQ(T30,T22);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        if (T32 != &KPfalseVKi) {
          T31 = T22;
        } else {
          T31 = T30;
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:886
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T39 = primitive_cast_raw_as_integer(T31);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:887
        new_buffer_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T39);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:888
        SLOT_VALUE_SETTER(new_buffer_, T42, 11);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:889
        Kcopy_bytesYbyte_vectorVcommon_dylanMM8I(new_buffer_, (D) 1, T7, (D) 1, T9);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T34 = primitive_cast_integer_as_raw(T9);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T35 = primitive_machine_word_logxor(T34,1);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T36 = primitive_machine_word_subtract_signal_overflow(T31,T35);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T37 = primitive_cast_raw_as_integer(T36);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:890
        T38_0 = T37;
        T5_0 = T38_0;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:878
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:878
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:884
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:871
  MV_SET_COUNT(1);
  return(T6_0);
}

D Koutput_partial_lineYprint_internalsVioMM0I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD count_;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1121
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1122
  T8 = SLOT_VALUE_INITD(stream_, 12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1123
  T9 = SLOT_VALUE_INITD(stream_, 19);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1124
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T2 = CONGRUENT_CALL1(T9);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1124
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
    T14 = primitive_cast_integer_as_raw(T8);
    count_ = T14;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1127
    CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
    T3 = CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1127
    T4 = CALL1(&Kop_posnYprint_internalsVio, T3);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1127
    T5 = CALL2(&Kposn_indexYprint_internalsVioMM0, T4, stream_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
    T15 = primitive_cast_integer_as_raw(T5);
    count_ = T15;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1124
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
  T16 = primitive_cast_raw_as_integer(count_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
  T11 = primitive_machine_word_logxor(count_,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
  T12 = primitive_machine_word_subtract_signal_overflow(T10,T11);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1129
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1130
  T17 = SLOT_VALUE_INITD(stream_, 11);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1131
  T18 = primitive_machine_word_equalQ(count_,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1131
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:1132
    KerrorVKdMM1I(&K542, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1131
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1134
  T19 = SLOT_VALUE_INITD(stream_, 9);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1134
  T20.vector_element_[0] = &KJstart_;
  T20.vector_element_[1] = (D) 1;
  T20.vector_element_[2] = &KJend_;
  T20.vector_element_[3] = T16;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1134
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(T19, T17, &T20);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1136
  T21 = SLOT_VALUE_INITD(stream_, 14);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1136
  T22 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1136
  T23 = primitive_machine_word_logxor(count_,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1136
  T24 = primitive_machine_word_add_signal_overflow(T22,T23);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1136
  T25 = primitive_cast_raw_as_integer(T24);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1135
  CALL2(&Kpretty_stream_buffer_start_column_setterYprint_internalsVio, T25, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1137
  Kcopy_bytesYbyte_vectorVcommon_dylanMM8I(T17, (D) 1, T17, T16, T13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1138
  CALL2(&Kpretty_stream_buffer_fill_pointer_setterYprint_internalsVio, T13, stream_);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1140
  T26 = SLOT_VALUE_INITD(stream_, 13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1140
  T27 = primitive_cast_integer_as_raw(T26);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1140
  T28 = primitive_machine_word_logxor(count_,1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1140
  T29 = primitive_machine_word_add_signal_overflow(T27,T28);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1140
  T30 = primitive_cast_raw_as_integer(T29);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1139
  SLOT_VALUE_SETTER(T30, stream_, 13);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1139
  T7 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:1121
  MV_SET_COUNT(0);
  return(T7);
}

D KLlogical_blockGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_logical_block_start_column_, D Uunique_logical_block_section_column_, D Uunique_logical_block_per_line_prefix_end_, D Uunique_logical_block_prefix_length_, D Uunique_logical_block_suffix_length_, D Uunique_logical_block_section_start_line_) {
  D T9;
  D Uunique_logical_block_start_columnF10;
  D T11;
  D Uunique_logical_block_section_columnF12;
  D T13;
  D Uunique_logical_block_per_line_prefix_endF14;
  D T15;
  D Uunique_logical_block_prefix_lengthF16;
  D T17;
  D Uunique_logical_block_suffix_lengthF18;
  D T19;
  D Uunique_logical_block_section_start_lineF20;
  D T21;
  D Uunique_logical_block_start_columnF22;
  D Uunique_logical_block_section_columnF23;
  D Uunique_logical_block_per_line_prefix_endF24;
  D Uunique_logical_block_prefix_lengthF25;
  D Uunique_logical_block_suffix_lengthF26;
  D Uunique_logical_block_section_start_lineF27;
  D T28_0;
  D T29;
  _KLsimple_object_vectorGVKd_1 T30 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_1 T36 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_1 T45 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T46;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T29 = primitive_idQ(Uunique_logical_block_start_column_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T29 != &KPfalseVKi) {
    T30.vector_element_[0] = IKJstart_column_;
    T31 = KerrorVKdMM1I(&K106, &T30);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T9 = T31;
    Uunique_logical_block_start_columnF10 = T9;
  } else {
    Uunique_logical_block_start_columnF10 = Uunique_logical_block_start_column_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T32 = primitive_idQ(Uunique_logical_block_section_column_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T32 != &KPfalseVKi) {
    T33.vector_element_[0] = IKJsection_column_;
    T34 = KerrorVKdMM1I(&K106, &T33);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T11 = T34;
    Uunique_logical_block_section_columnF12 = T11;
  } else {
    Uunique_logical_block_section_columnF12 = Uunique_logical_block_section_column_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T35 = primitive_idQ(Uunique_logical_block_per_line_prefix_end_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T35 != &KPfalseVKi) {
    T36.vector_element_[0] = IKJper_line_prefix_end_;
    T37 = KerrorVKdMM1I(&K106, &T36);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T13 = T37;
    Uunique_logical_block_per_line_prefix_endF14 = T13;
  } else {
    Uunique_logical_block_per_line_prefix_endF14 = Uunique_logical_block_per_line_prefix_end_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T38 = primitive_idQ(Uunique_logical_block_prefix_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T38 != &KPfalseVKi) {
    T39.vector_element_[0] = IKJprefix_length_;
    T40 = KerrorVKdMM1I(&K106, &T39);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T15 = T40;
    Uunique_logical_block_prefix_lengthF16 = T15;
  } else {
    Uunique_logical_block_prefix_lengthF16 = Uunique_logical_block_prefix_length_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T41 = primitive_idQ(Uunique_logical_block_suffix_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T41 != &KPfalseVKi) {
    T42.vector_element_[0] = IKJsuffix_length_;
    T43 = KerrorVKdMM1I(&K106, &T42);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T17 = T43;
    Uunique_logical_block_suffix_lengthF18 = T17;
  } else {
    Uunique_logical_block_suffix_lengthF18 = Uunique_logical_block_suffix_length_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T44 = primitive_idQ(Uunique_logical_block_section_start_line_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  if (T44 != &KPfalseVKi) {
    T45.vector_element_[0] = IKJsection_start_line_;
    T46 = KerrorVKdMM1I(&K106, &T45);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
    T19 = T46;
    Uunique_logical_block_section_start_lineF20 = T19;
  } else {
    Uunique_logical_block_section_start_lineF20 = Uunique_logical_block_section_start_line_;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T21 = primitive_object_allocate_filled(7,&KLlogical_blockGYprint_internalsVioW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  primitive_type_check(Uunique_logical_block_start_columnF10, &KLcolumnGYprint_internalsVio);
  Uunique_logical_block_start_columnF22 = Uunique_logical_block_start_columnF10;
  SLOT_VALUE_SETTER(Uunique_logical_block_start_columnF22, T21, 0);
  primitive_type_check(Uunique_logical_block_section_columnF12, &KLcolumnGYprint_internalsVio);
  Uunique_logical_block_section_columnF23 = Uunique_logical_block_section_columnF12;
  SLOT_VALUE_SETTER(Uunique_logical_block_section_columnF23, T21, 1);
  primitive_type_check(Uunique_logical_block_per_line_prefix_endF14, &KLcolumnGYprint_internalsVio);
  Uunique_logical_block_per_line_prefix_endF24 = Uunique_logical_block_per_line_prefix_endF14;
  SLOT_VALUE_SETTER(Uunique_logical_block_per_line_prefix_endF24, T21, 2);
  primitive_type_check(Uunique_logical_block_prefix_lengthF16, &KLcolumnGYprint_internalsVio);
  Uunique_logical_block_prefix_lengthF25 = Uunique_logical_block_prefix_lengthF16;
  SLOT_VALUE_SETTER(Uunique_logical_block_prefix_lengthF25, T21, 3);
  primitive_type_check(Uunique_logical_block_suffix_lengthF18, &KLcolumnGYprint_internalsVio);
  Uunique_logical_block_suffix_lengthF26 = Uunique_logical_block_suffix_lengthF18;
  SLOT_VALUE_SETTER(Uunique_logical_block_suffix_lengthF26, T21, 4);
  primitive_type_check(Uunique_logical_block_section_start_lineF20, &KLintegerGVKd);
  Uunique_logical_block_section_start_lineF27 = Uunique_logical_block_section_start_lineF20;
  SLOT_VALUE_SETTER(Uunique_logical_block_section_start_lineF27, T21, 5);
  APPLY2(&KinitializeVKd, T21, init_args_);
  T28_0 = T21;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  MV_SET_COUNT(1);
  return(T28_0);
}

D KcloseYcommon_extensionsVcommon_dylanMioM6I (D stream_, D keys_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:238
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:240
  T6 = SLOT_VALUE_INITD(stream_, 21);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:240
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:240
    T4 = &KPfalseVKi;
    T5 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:241
    Kmaybe_outputYprint_internalsVioMM0I(stream_, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:242
    Kexpand_tabsYprint_internalsVioMM0I(stream_, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:243
    T7 = SLOT_VALUE_INITD(stream_, 9);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:243
    T8 = SLOT_VALUE_INITD(stream_, 11);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:244
    T9 = SLOT_VALUE_INITD(stream_, 12);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:243
    T10.vector_element_[0] = &KJstart_;
    T10.vector_element_[1] = (D) 1;
    T10.vector_element_[2] = &KJend_;
    T10.vector_element_[3] = T9;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:243
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    CONGRUENT_CALL3(T7, T8, &T10);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:245
    SLOT_VALUE_SETTER(&KPtrueVKi, stream_, 21);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:245
    T3 = &KPfalseVKi;
    T5 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:240
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:238
  MV_SET_COUNT(0);
  return(T5);
}

D KwriteYstreams_protocolVcommon_dylanMioM4I (D stream_, D string_, D Urest_, D start_, D stop_) {
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:233
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
  if (start_ != &KPfalseVKi) {
    T6 = start_;
  } else {
    T6 = (D) 1;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
  if (stop_ != &KPfalseVKi) {
    T8 = stop_;
  } else {
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(string_);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:235
  ENGINE_NODE_CALL_PROLOG(&Kappend_outputYprint_internalsVio, &K586, 4);
  T9 = ENGINE_NODE_CALL4(&K586, stream_, string_, T6, T8);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:233
  MV_SET_COUNT(0);
  return(T9);
}

D Kwrite_elementYstreams_protocolVcommon_dylanMioM4I (D stream_, D char_) {
  D T3_0;
  D string_;
  D T5;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:226
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:228
  T3_0 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 5);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:228
  string_ = T3_0;
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:229
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(char_, string_, (D) 1);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:230
  T5 = Kappend_outputYprint_internalsVioMM1I(stream_, string_, (D) 1, (D) 5);
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:226
  MV_SET_COUNT(0);
  return(T5);
}

D Kappend_outputYprint_internalsVioMM1I (D stream_, D buffer_, D start_, D stop_) {
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
  D T18;
  D chunk_startF19;
  D indexF20;
  D T21;
  D chunk_startF22T, chunk_startF22;
  D indexF23T, indexF23;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:286
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
  chunk_startF22T = start_;
  indexF23T = start_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:302
    chunk_startF22 = chunk_startF22T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:302
    indexF23 = indexF23T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
    chunk_startF19 = chunk_startF22;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
    indexF20 = indexF23;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:291
    T16 = primitive_idQ(indexF20,stop_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:291
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:292
      T5 = KEEVKdI(chunk_startF19, indexF20);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:292
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:292
        T7 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T8 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:293
        T6 = CALL4(&Kappend_raw_outputYprint_internalsVioMM0, stream_, buffer_, chunk_startF19, indexF20);
        T8 = T6;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:292
      T15 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:295
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T9 = CONGRUENT_CALL3(buffer_, indexF20, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:295
      T17 = primitive_idQ(T9,C('\n'));
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:291
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:296
        T10 = KEEVKdI(chunk_startF19, indexF20);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:296
        if (T10 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:297
          CALL4(&Kappend_raw_outputYprint_internalsVioMM0, stream_, buffer_, chunk_startF19, indexF20);
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:296
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:299
        Kenqueue_newlineYprint_internalsVioMM0I(stream_, IKJliteral_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T11 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T12 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
        chunk_startF22T = T11;
        indexF23T = T12;
        goto L0;
        T14 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:302
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T13 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:302
        chunk_startF22T = chunk_startF19;
        indexF23T = T13;
        goto L0;
        T14 = T21;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:291
      T15 = T14;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:291
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:300
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:286
  return(T15);
}

D Kappend_outputYprint_internalsVioMM0I (D stream_, D buffer_, D start_, D stop_) {
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
  D T18;
  D chunk_startF19;
  D indexF20;
  D T21;
  D chunk_startF22T, chunk_startF22;
  D indexF23T, indexF23;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:264
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
  chunk_startF22T = start_;
  indexF23T = start_;
L0: ;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:280
    chunk_startF22 = chunk_startF22T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:280
    indexF23 = indexF23T;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
    chunk_startF19 = chunk_startF22;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
    indexF20 = indexF23;
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:269
    T16 = primitive_idQ(indexF20,stop_);
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:269
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:270
      T5 = KEEVKdI(chunk_startF19, indexF20);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:270
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:270
        T7 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T8 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:271
        T6 = CALL4(&Kappend_raw_outputYprint_internalsVioMM0, stream_, buffer_, chunk_startF19, indexF20);
        T8 = T6;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:270
      T15 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:273
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T9 = CONGRUENT_CALL3(buffer_, indexF20, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:273
      T17 = primitive_idQ(T9,(D) 41);
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:269
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:274
        T10 = KEEVKdI(chunk_startF19, indexF20);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:274
        if (T10 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/pprint.dylan:275
          CALL4(&Kappend_raw_outputYprint_internalsVioMM0, stream_, buffer_, chunk_startF19, indexF20);
        }
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:274
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:277
        Kenqueue_newlineYprint_internalsVioMM0I(stream_, IKJliteral_);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T11 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T12 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
        chunk_startF22T = T11;
        indexF23T = T12;
        goto L0;
        T14 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:280
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T13 = CONGRUENT_CALL2(indexF20, (D) 5);
        // /opt/opendylan-2013.1/sources/io/pprint.dylan:280
        chunk_startF22T = chunk_startF19;
        indexF23T = T13;
        goto L0;
        T14 = T21;
      }
      // /opt/opendylan-2013.1/sources/io/pprint.dylan:269
      T15 = T14;
    }
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:269
    // /opt/opendylan-2013.1/sources/io/pprint.dylan:278
  // /opt/opendylan-2013.1/sources/io/pprint.dylan:264
  return(T15);
}


/* SYSTEM INIT CODE */

void _Init_io__X_pprint_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmandatory_);
    if (T0 != &KJmandatory_) {
      IKJmandatory_ = T0;
      primitive_slot_value_setter(T0, &K14, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmiser_);
    if (T0 != &KJmiser_) {
      IKJmiser_ = T0;
      primitive_slot_value_setter(T0, &K18, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJlinear_);
    if (T0 != &KJlinear_) {
      IKJlinear_ = T0;
      primitive_slot_value_setter(T0, &K21, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJkind_);
    if (T0 != &KJkind_) {
      IKJkind_ = T0;
      primitive_repeated_slot_value_setter(T0, &K468, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K467, 1, 2);
      primitive_slot_value_setter(T0, &Knewline_kindYprint_internalsVioHLnewlineG, 3);
      primitive_repeated_slot_value_setter(T0, &K422, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K421, 1, 0);
      primitive_slot_value_setter(T0, &Kindentation_kindYprint_internalsVioHLindentationG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdepth_);
    if (T0 != &KJdepth_) {
      IKJdepth_ = T0;
      primitive_repeated_slot_value_setter(T0, &K468, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K467, 1, 0);
      primitive_slot_value_setter(T0, &Ksection_start_depthYprint_internalsVioHLsection_startG, 3);
      primitive_repeated_slot_value_setter(T0, &K229, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K228, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJliteral_);
    if (T0 != &KJliteral_) {
      IKJliteral_ = T0;
      primitive_slot_value_setter(T0, &K462, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdont_know_);
    if (T0 != &KJdont_know_) {
      primitive_slot_value_setter(T0, &K433, 1);
      IKJdont_know_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJblock_);
    if (T0 != &KJblock_) {
      primitive_slot_value_setter(T0, &K475, 1);
      IKJblock_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcurrent_);
    if (T0 != &KJcurrent_) {
      primitive_slot_value_setter(T0, &K476, 1);
      IKJcurrent_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcolinc_);
    if (T0 != &KJcolinc_) {
      IKJcolinc_ = T0;
      primitive_repeated_slot_value_setter(T0, &K109, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K108, 1, 6);
      primitive_slot_value_setter(T0, &Ktab_colincYprint_internalsVioHLtabG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcolnum_);
    if (T0 != &KJcolnum_) {
      IKJcolnum_ = T0;
      primitive_repeated_slot_value_setter(T0, &K109, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K108, 1, 4);
      primitive_slot_value_setter(T0, &Ktab_colnumYprint_internalsVioHLtabG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJrelativeQ_);
    if (T0 != &KJrelativeQ_) {
      IKJrelativeQ_ = T0;
      primitive_repeated_slot_value_setter(T0, &K109, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K108, 1, 2);
      primitive_slot_value_setter(T0, &Ktab_relativeQYprint_internalsVioHLtabG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsectionQ_);
    if (T0 != &KJsectionQ_) {
      IKJsectionQ_ = T0;
      primitive_repeated_slot_value_setter(T0, &K109, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K108, 1, 0);
      primitive_slot_value_setter(T0, &Ktab_sectionQYprint_internalsVioHLtabG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprefix_length_);
    if (T0 != &KJprefix_length_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 6);
      IKJprefix_length_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_prefix_lengthYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstart_column_);
    if (T0 != &KJstart_column_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 0);
      IKJstart_column_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_start_columnYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsection_column_);
    if (T0 != &KJsection_column_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 2);
      IKJsection_column_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_section_columnYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJper_line_prefix_end_);
    if (T0 != &KJper_line_prefix_end_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 4);
      IKJper_line_prefix_end_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_per_line_prefix_endYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsuffix_length_);
    if (T0 != &KJsuffix_length_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 8);
      IKJsuffix_length_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_suffix_lengthYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsection_start_line_);
    if (T0 != &KJsection_start_line_) {
      primitive_repeated_slot_value_setter(T0, &K561, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K560, 1, 10);
      IKJsection_start_line_ = T0;
      primitive_slot_value_setter(T0, &Klogical_block_section_start_lineYprint_internalsVioHLlogical_blockG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsuffix_);
    if (T0 != &KJsuffix_) {
      primitive_repeated_slot_value_setter(T0, &K549, 1, 8);
      IKJsuffix_ = T0;
      primitive_repeated_slot_value_setter(T0, &K527, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K229, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K228, 1, 4);
      primitive_slot_value_setter(T0, &Kblock_start_suffixYprint_internalsVioHLblock_startG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprefix_);
    if (T0 != &KJprefix_) {
      primitive_repeated_slot_value_setter(T0, &K549, 1, 2);
      IKJprefix_ = T0;
      primitive_repeated_slot_value_setter(T0, &K527, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K229, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K228, 1, 2);
      primitive_slot_value_setter(T0, &Kblock_start_prefixYprint_internalsVioHLblock_startG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcolumn_);
    if (T0 != &KJcolumn_) {
      IKJcolumn_ = T0;
      primitive_repeated_slot_value_setter(T0, &K549, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K527, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K391, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K386, 1, 12);
      primitive_slot_value_setter(T0, &Kpretty_stream_buffer_start_columnYprint_internalsVioHLpretty_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJline_length_);
    if (T0 != &KJline_length_) {
      primitive_repeated_slot_value_setter(T0, &K391, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K386, 1, 10);
      primitive_slot_value_setter(T0, &Kpretty_stream_line_lengthYprint_internalsVioHLpretty_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtarget_);
    if (T0 != &KJtarget_) {
      IKJtarget_ = T0;
      primitive_repeated_slot_value_setter(T0, &K391, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K386, 1, 8);
      primitive_slot_value_setter(T0, &Kpretty_stream_targetYprint_internalsVioHLpretty_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K391, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K386, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcontents_);
    if (T0 != &KJcontents_) {
      primitive_repeated_slot_value_setter(T0, &K391, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K386, 1, 6);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJamount_);
    if (T0 != &KJamount_) {
      IKJamount_ = T0;
      primitive_repeated_slot_value_setter(T0, &K422, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K421, 1, 2);
      primitive_slot_value_setter(T0, &Kindentation_amountYprint_internalsVioHLindentationG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsection_relative_);
    if (T0 != &KJsection_relative_) {
      IKJsection_relative_ = T0;
      primitive_slot_value_setter(T0, &K489, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsection_);
    if (T0 != &KJsection_) {
      IKJsection_ = T0;
      primitive_slot_value_setter(T0, &K493, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJline_relative_);
    if (T0 != &KJline_relative_) {
      IKJline_relative_ = T0;
      primitive_slot_value_setter(T0, &K497, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJline_);
    if (T0 != &KJline_) {
      IKJline_ = T0;
      primitive_slot_value_setter(T0, &K496, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJper_line_prefix_);
    if (T0 != &KJper_line_prefix_) {
      primitive_repeated_slot_value_setter(T0, &K549, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K527, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbody_);
    if (T0 != &KJbody_) {
      primitive_repeated_slot_value_setter(T0, &K549, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K527, 1, 3);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:339
  T0 = KPadd_classVKeI(&KLlogical_blockGYprint_internalsVio);
  goto I0;
}
I0:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:490
  T0 = KPadd_classVKeI(&KLqueued_opGYprint_internalsVio);
  goto I3;
}
I3:

  return;
}

/* USER INIT CODE */

void _Init_io__X_pprint_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:226
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I573;
}
I573:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:233
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I570;
}
I570:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/pprint.dylan:238
  T0 = KPadd_a_methodVKnI(&KcloseYcommon_extensionsVcommon_dylan, &KcloseYcommon_extensionsVcommon_dylanMioM6, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I567;
}
I567:

  return;
}


/* eof */
