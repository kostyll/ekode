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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(15);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D head_;
  D tail_;
} _KLpairGVKd;

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
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

#define  define__KLunicode_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D string_element_[nrepeated+1]; \
  } _KLunicode_stringGVKd_##nrepeated;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(3);
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

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


/* Typedefs for defined classes */

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
} _KLunicode_string_streamGYstreamsVio;


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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_contents_asYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLincremental_generic_functionGVKe Kstream_limit_setterYstreams_internalsVio;
extern _KLsymbolGVKd KJoutput_;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
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
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
D KmakeVKdMM33I (D, D, D, D);
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe Kstream_limitYstreamsVio;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLsimple_methodGVKe Kstream_sequenceYstreams_internalsVioMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D KmakeVKdMM23I (D, D, D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLpositionable_streamGYstreams_protocolVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLclassGVKd KLbasic_positionable_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_positionable_streamGYstreamsVioW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG;
extern _KLinstance_slot_descriptorGVKe Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLincremental_generic_functionGVKe Ksize_setterVKd;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstretchy_vectorG_typesVKi;
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kobject_classVKdI (D);
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D KmakeVKdMM34I (D, D, D, D);
extern _KLclassGVKd KLunicode_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLunicode_stringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lunicode_stringG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
D KPadd_nonsiblinged_domainVKnI (D, D);
extern _KLincremental_generic_functionGVKe Kstream_contentsYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_sizeYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_input_availableQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_intoXYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KreadYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe KpeekYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kunread_elementYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kread_elementYstreams_protocolVcommon_dylan;
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
D Kensure_readableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe KelementVKd;
D Kend_of_stream_valueYstreams_internalsVioI (D, D);
D KEEVKdI (D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLincomplete_read_errorGYstreams_protocolVcommon_dylanW;
D KsignalVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kensure_writableYstreams_internalsVioI (D);
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLpretty_streamGYpprintVio;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM1;
D Kstream_sequence_classYstreamsVioMM1I (D);
extern _KLgetter_methodGVKi Kstream_limitYstreamsVioMM1;
extern _KLsetter_methodGVKi Kstream_limit_setterYstreams_internalsVioMM0;
extern _KLclassGVKd KLstring_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLstring_streamGYstreamsVioW;
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW;
extern _KLsealed_generic_functionGVKe Kgrow_for_streamYstreams_internalsVio;
extern _KLclassGVKd KLsequence_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLsequence_streamGYstreamsVioW;
extern _KLinstance_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLsequence_streamG;
extern _KLinstance_slot_descriptorGVKe Kstream_limitYstreamsVioHLsequence_streamG;
D KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
D Kstream_contentsYstreams_protocolVcommon_dylanMioM0I (D, D, D);
static _KLsymbolGVKd KJclear_contentsQ_;
static _KLbyte_stringGVKd_15 K16;
static D K32I ();
static D K31I ();
static _KLunionGVKe K19;
static _KLunionGVKe K20;
static _KLpairGVKd K21;
static _KLpairGVKd K22;
extern _KLkeyword_methodGVKe KinitializeVKdMioM1;
D KinitializeVKdMioM1I (D, D, D, D, D);
static _KLbyte_stringGVKd_15 K25;
static _KLkeyword_signatureGVKe K26;
static _KLsimple_object_vectorGVKd_6 K27;
static _KLsimple_object_vectorGVKd_1 K28;
static _KLsimple_object_vectorGVKd_3 K29;
static _KLsingletonGVKd K30;
static _KLsimple_closure_methodGVKi_0 K46;
static D K46I ();
static _KLsymbolGVKd KJcontents_;
extern _KLsealed_generic_functionGVKe Kstream_sequenceYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kstream_sequence_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kstream_sequence_setterYstreams_internalsVioMM0;
static _KLpairGVKd K39;
static _KLbyte_stringGVKd_22 K40;
extern _KLgetter_methodGVKi Kstream_sequenceYstreams_internalsVioMM0;
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLbyte_stringGVKd_15 K44;
static _KLbyte_stringGVKd_8 K45;
static _KLsignatureGVKe K47;
static _KLimplementation_classGVKe K48;
static _KLsimple_object_vectorGVKd_9 K49;
extern _KLkeyword_methodGVKe KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K52;
static _KLsimple_object_vectorGVKd_7 K53;
static _KLsimple_object_vectorGVKd_2 K54;
static D K58I ();
static D K57I ();
static _KLkeyword_signatureAvaluesGVKi K59;
static _KLsimple_object_vectorGVKd_8 K60;
static _KLsymbolGVKd KJstream_lock_;
static _KLbyte_stringGVKd_11 K62;
static _KLsimple_object_vectorGVKd_4 K63;
static _KLbyte_stringGVKd_17 K64;
extern _KLsimple_methodGVKe Kgrow_for_streamYstreams_internalsVioMM0;
D Kgrow_for_streamYstreams_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kgrow_for_streamYstreams_internalsVioMM1;
D Kgrow_for_streamYstreams_internalsVioMM1I (D, D);
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLbyte_stringGVKd_15 K71;
static _KLsignatureAvaluesGVKi K72;
static _KLsimple_object_vectorGVKd_2 K73;
static _KLsignatureAvaluesGVKi K74;
static _KLsimple_object_vectorGVKd_2 K75;
static _KLimplementation_classGVKe K76;
extern _KLkeyword_methodGVKe KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0;
static _KLsimple_object_vectorGVKd_1 K78;
static _KLsimple_object_vectorGVKd_9 K79;
static _KLsimple_object_vectorGVKd_1 K80;
static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLbyte_string_streamG;
static _KLsimple_closure_methodGVKi_0 K84;
static D K84I ();
static _KLkeyword_signatureAvaluesGVKi K85;
static _KLsimple_object_vectorGVKd_1 K86;
static _KLbyte_stringGVKd_20 K87;
static _KLimplementation_classGVKe K88;
extern _KLkeyword_methodGVKe KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_8 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLstring_streamG;
static _KLsimple_closure_methodGVKi_0 K96;
static D K96I ();
static D K100I ();
static D K99I ();
static _KLkeyword_signatureAvaluesGVKi K101;
static _KLbyte_stringGVKd_15 K102;
static _KLsignatureGVKe K103;
extern _KLincremental_generic_functionGVKe Ktype_for_sequence_streamYstreamsVio;
extern _KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM0;
D Ktype_for_sequence_streamYstreamsVioMM0I (D);
extern _KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM1;
D Ktype_for_sequence_streamYstreamsVioMM1I (D);
extern _KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM2;
D Ktype_for_sequence_streamYstreamsVioMM2I (D);
extern _KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM3;
D Ktype_for_sequence_streamYstreamsVioMM3I (D);
extern _KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM4;
D Ktype_for_sequence_streamYstreamsVioMM4I (D);
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLpairGVKd K117;
static _KLpairGVKd K118;
static _KLpairGVKd K119;
static _KLsignatureAvaluesGVKi K120;
static _KLbyte_stringGVKd_24 K121;
static _KLsimple_object_vectorGVKd_1 K122;
static _KLunionGVKe K123;
extern _KLclassGVKd KLunicode_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLunicode_string_streamGYstreamsVioW;
static _KLimplementation_classGVKe K126;
extern _KLkeyword_methodGVKe KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0;
D KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_9 K129;
static _KLsimple_object_vectorGVKd_1 K130;
static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLunicode_string_streamG;
static _KLsimple_closure_methodGVKi_0 K134;
static D K134I ();
static D K138I ();
static D K137I ();
static _KLkeyword_signatureAvaluesGVKi K139;
static _KLsimple_object_vectorGVKd_1 K140;
static _KLbyte_stringGVKd_23 K141;
static _KLsignatureAvaluesGVKi K142;
static _KLsimple_object_vectorGVKd_1 K143;
static _KLsingletonGVKd K144;
static _KLsignatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_1 K146;
static _KLsingletonGVKd K147;
static _KLsignatureAvaluesGVKi K148;
static _KLsimple_object_vectorGVKd_1 K149;
static _KLsingletonGVKd K150;
static _KLsignatureAvaluesGVKi K151;
static _KLsimple_object_vectorGVKd_1 K152;
static _KLsingletonGVKd K153;
static _KLsignatureAvaluesGVKi K154;
static _KLsimple_object_vectorGVKd_1 K155;
extern _KLsimple_methodGVKe Kclear_contentsYstreams_internalsVioMM0;
D Kclear_contentsYstreams_internalsVioMM0I (D);
static _KLsignatureGVKe K158;
extern _KLstandalone_domainGVKe_2 Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_2 Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_2 Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_4;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_5;
extern _KLstandalone_domainGVKe_2 Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_1 Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_3;
extern _KLstandalone_domainGVKe_2 Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_1 Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_3;
extern _KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_3;
extern _KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_3;
extern _KLstandalone_domainGVKe_2 Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_1;
extern _KLstandalone_domainGVKe_1 Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_2;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_5;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_6;
extern _KLkeyword_methodGVKe Kstream_contents_asYstreams_protocolVcommon_dylanMioM0;
D Kstream_contents_asYstreams_protocolVcommon_dylanMioM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM0;
extern _KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM0;
D Kstream_sizeYstreams_protocolVcommon_dylanMioM0I (D);
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM1;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM0;
D KwriteYstreams_protocolVcommon_dylanMioM0I (D stream_, D src_, D Urest_, D start_index_, D Uend_);
extern _KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM0;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM0I (D stream_, D elt_);
extern _KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1;
D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1I (D);
extern _KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM0;
D Kread_intoXYstreams_protocolVcommon_dylanMioM0I (D stream_, D n_, D dst_, D Urest_, D start_, D on_end_of_stream_);
extern _KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM0;
D KreadYstreams_protocolVcommon_dylanMioM0I (D stream_, D n_, D Urest_, D on_end_of_stream_);
extern _KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM0;
D KpeekYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D on_end_of_stream_);
extern _KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM0;
D Kunread_elementYstreams_protocolVcommon_dylanMioM0I (D, D);
extern _KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM0;
D Kread_elementYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D on_end_of_stream_);
extern _KLkeyword_methodGVKe KmakeVKdMioM0;
D KmakeVKdMioM0I (D, D, D, D);
static _KLkeyword_signatureGVKe K254;
static _KLsimple_object_vectorGVKd_4 K255;
static _KLsimple_object_vectorGVKd_2 K256;
static _KLkeyword_signatureGVKe K257;
static _KLsimple_object_vectorGVKd_2 K258;
static _KLsymbolGVKd KJon_end_of_stream_;
static _KLbyte_stringGVKd_16 K260;
static _KLsimple_object_vectorGVKd_1 K261;
static _KLsignatureGVKe K262;
static _KLsimple_object_vectorGVKd_2 K263;
static _KLsymbolGVKd KJstream_;
static _KLsymbolGVKd KJsequence_;
static _KLbyte_stringGVKd_8 K266;
static _KLbyte_stringGVKd_6 K267;
static _KLkeyword_signatureGVKe K268;
static _KLsimple_object_vectorGVKd_2 K269;
static _KLkeyword_signatureGVKe K270;
static _KLsimple_object_vectorGVKd_4 K271;
static _KLsimple_object_vectorGVKd_3 K272;
static _KLsimple_object_vectorGVKd_2 K273;
static _KLsignatureAvaluesGVKi K274;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K275;
static _KLsignatureGVKe K276;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K277;
static _KLkeyword_signatureGVKe K278;
static _KLsimple_object_vectorGVKd_4 K279;
static _KLsimple_object_vectorGVKd_2 K280;
static _KLsimple_object_vectorGVKd_2 K281;
static _KLsignatureAvaluesGVKi K282;
static _KLkeyword_signatureAvaluesGVKi K283;
static _KLsimple_object_vectorGVKd_2 K284;
static _KLsimple_object_vectorGVKd_1 K285;
static _KLkeyword_signatureAvaluesGVKi K286;
static _KLsimple_object_vectorGVKd_2 K287;
static _KLpairGVKd K288;
static _KLpairGVKd K289;
static _KLpairGVKd K290;
static _KLpairGVKd K291;

/* Indirection variables */

static D IKJclear_contentsQ_ = &KJclear_contentsQ_;
static D IKJcontents_ = &KJcontents_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJon_end_of_stream_ = &KJon_end_of_stream_;
static D IKJstream_ = &KJstream_;
static D IKJsequence_ = &KJsequence_;

/* Variables */

D clear_contentsYstreams_internalsVio = &Kclear_contentsYstreams_internalsVioMM0;
D grow_for_streamYstreams_internalsVio = &Kgrow_for_streamYstreams_internalsVio;
D stream_sequenceYstreams_internalsVio = &Kstream_sequenceYstreams_internalsVio;
D Lsequence_streamGYstreamsVio = &KLsequence_streamGYstreamsVio;
D Lstring_streamGYstreamsVio = &KLstring_streamGYstreamsVio;
D Lbyte_string_streamGYstreamsVio = &KLbyte_string_streamGYstreamsVio;
D Lunicode_string_streamGYstreamsVio = &KLunicode_string_streamGYstreamsVio;
D type_for_sequence_streamYstreamsVio = &Ktype_for_sequence_streamYstreamsVio;

/* Objects */

_KLsimple_methodGVKe Kstream_sequence_classYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K103,
  &Kstream_sequence_classYstreamsVioMM1I
};

_KLgetter_methodGVKi Kstream_limitYstreamsVioMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_limitYstreamsVioHLsequence_streamG
};

_KLsetter_methodGVKi Kstream_limit_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstream_limitYstreamsVioHLsequence_streamG
};

_KLclassGVKd KLstring_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K102,
  &K88,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLstring_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K88,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLclassGVKd KLbyte_string_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K87,
  &K76,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K76,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kgrow_for_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 9,
  &K71,
  &K69,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLclassGVKd KLsequence_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K64,
  &K48,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLsequence_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K48,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLinstance_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLsequence_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K46,
  &KLsequence_streamGYstreamsVio,
  &KJcontents_,
  &Kstream_sequenceYstreams_internalsVio,
  &Kstream_sequence_setterYstreams_internalsVio,
  &KLsequenceGVKd
};

_KLinstance_slot_descriptorGVKe Kstream_limitYstreamsVioHLsequence_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsequence_streamGYstreamsVio,
  &KPfalseVKi,
  &Kstream_limitYstreamsVio,
  &Kstream_limit_setterYstreams_internalsVio,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJclear_contentsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K16
};

static _KLbyte_stringGVKd_15 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "clear-contents?"
};

static _KLunionGVKe K19 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K30,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K20 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K30,
  &KLlockGYthreadsVdylan
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMioM0,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

_KLkeyword_methodGVKe KinitializeVKdMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K26,
  &key_mep_5,
  &KinitializeVKdMioM1I,
  &K27
};

static _KLbyte_stringGVKd_15 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K26 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K28,
  &K29,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJdirection_,
  &KPfalseVKi,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K28 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequence_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_3 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJdirection_,
  &KJstart_,
  &KJend_
};

static _KLsingletonGVKd K30 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsimple_closure_methodGVKi_0 K46 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K47,
  &K46I,
  (D) 1
};

static _KLsymbolGVKd KJcontents_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K45
};

_KLsealed_generic_functionGVKe Kstream_sequenceYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K44,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstream_sequence_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K40,
  &K39,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kstream_sequence_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstream_sequenceYstreams_internalsVioHLsequence_streamG
};

static _KLpairGVKd K39 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequence_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "stream-sequence-setter"
};

_KLgetter_methodGVKi Kstream_sequenceYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstream_sequenceYstreams_internalsVioHLsequence_streamG
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequenceYstreams_internalsVioMM0,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kstream_sequenceYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K44 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "stream-sequence"
};

static _KLbyte_stringGVKd_8 K45 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "contents"
};

static _KLsignatureGVKe K47 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLimplementation_classGVKe K48 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 392691749,
  &KLsequence_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVioW,
  &KPfalseVKi,
  &K49,
  (D) -3,
  &KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K52,
  &K53,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K288,
  &KPempty_vectorVKi,
  &K54,
  &K49,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &Kinitial_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kcurrent_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kfinal_positionYstreams_internalsVioHLbasic_positionable_streamG,
  &Kstream_sequenceYstreams_internalsVioHLsequence_streamG,
  &Kstream_limitYstreamsVioHLsequence_streamG
};

_KLkeyword_methodGVKe KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K59,
  &key_mep_2,
  &KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K60
};

static _KLsimple_object_vectorGVKd_1 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbasic_positionable_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_7 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_2 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kstream_sequenceYstreams_internalsVioHLsequence_streamG,
  &Kstream_limitYstreamsVioHLsequence_streamG
};

static _KLkeyword_signatureAvaluesGVKi K59 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K63,
  &KDsignature_LobjectG_typesVKi,
  &K28
};

static _KLsimple_object_vectorGVKd_8 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJouter_stream_,
  &KPunboundVKi,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJstream_lock_,
  &KPunboundVKi,
  &KJcontents_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJstream_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K62
};

static _KLbyte_stringGVKd_11 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_4 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJcontents_
};

static _KLbyte_stringGVKd_17 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<sequence-stream>"
};

_KLsimple_methodGVKe Kgrow_for_streamYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K74,
  &Kgrow_for_streamYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kgrow_for_streamYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K72,
  &Kgrow_for_streamYstreams_internalsVioMM1I
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &Kgrow_for_streamYstreams_internalsVioMM0,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &Kgrow_for_streamYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K71 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "grow-for-stream"
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K73,
  &KDsignature_Lstretchy_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_vectorGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K74 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K75,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequenceGVKd,
  &KLintegerGVKd
};

static _KLimplementation_classGVKe K76 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102117,
  &KLbyte_string_streamGYstreamsVio,
  &KLbyte_string_streamGYstreamsVioW,
  &KPfalseVKi,
  &K49,
  (D) -3,
  &KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K78,
  &K79,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K49,
  &K80,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K85,
  &key_mep_2,
  &KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K60
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstring_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_9 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio,
  &KLstring_streamGYstreamsVio,
  &KLbyte_string_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_1 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_sequenceYstreams_internalsVioHLbyte_string_streamG
};

static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLbyte_string_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 21,
  &K84,
  &KLbyte_string_streamGYstreamsVio,
  &Kstream_sequenceYstreams_internalsVio
};

static _KLsimple_closure_methodGVKi_0 K84 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K47,
  &K84I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K85 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K63,
  &KDsignature_LobjectG_typesVKi,
  &K86
};

static _KLsimple_object_vectorGVKd_1 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

static _KLbyte_stringGVKd_20 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<byte-string-stream>"
};

static _KLimplementation_classGVKe K88 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 392691749,
  &KLstring_streamGYstreamsVio,
  &KLstring_streamGYstreamsVioW,
  &KPfalseVKi,
  &K49,
  (D) -3,
  &KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K28,
  &K91,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K290,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K49,
  &K92,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K101,
  &key_mep_2,
  &KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K60
};

static _KLsimple_object_vectorGVKd_8 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio,
  &KLstring_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_sequenceYstreams_internalsVioHLstring_streamG
};

static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLstring_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 21,
  &K96,
  &KLstring_streamGYstreamsVio,
  &Kstream_sequenceYstreams_internalsVio
};

static _KLsimple_closure_methodGVKi_0 K96 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K47,
  &K96I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K101 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K63,
  &KDsignature_LobjectG_typesVKi,
  &K78
};

static _KLbyte_stringGVKd_15 K102 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<string-stream>"
};

static _KLsignatureGVKe K103 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K28
};

_KLincremental_generic_functionGVKe Ktype_for_sequence_streamYstreamsVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K120,
  &KPfalseVKi,
  &K121,
  &K115,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstreams_moduleYdylan_userVio,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K154,
  &Ktype_for_sequence_streamYstreamsVioMM0I
};

_KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K151,
  &Ktype_for_sequence_streamYstreamsVioMM1I
};

_KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K148,
  &Ktype_for_sequence_streamYstreamsVioMM2I
};

_KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K145,
  &Ktype_for_sequence_streamYstreamsVioMM3I
};

_KLsimple_methodGVKe Ktype_for_sequence_streamYstreamsVioMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K142,
  &Ktype_for_sequence_streamYstreamsVioMM4I
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_sequence_streamYstreamsVioMM0,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_sequence_streamYstreamsVioMM1,
  &K117
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_sequence_streamYstreamsVioMM2,
  &K118
};

static _KLpairGVKd K118 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_sequence_streamYstreamsVioMM3,
  &K119
};

static _KLpairGVKd K119 = {
  &KLpairGVKdW /* wrapper */,
  &Ktype_for_sequence_streamYstreamsVioMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K120 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K122,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_24 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "type-for-sequence-stream"
};

static _KLsimple_object_vectorGVKd_1 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K123
};

static _KLunionGVKe K123 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K30,
  &KLsequenceGVKd
};

_KLclassGVKd KLunicode_string_streamGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K141,
  &K126,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLunicode_string_streamGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K126,
  (D) 1,
  37,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K126 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102117,
  &KLunicode_string_streamGYstreamsVio,
  &KLunicode_string_streamGYstreamsVioW,
  &KPfalseVKi,
  &K49,
  (D) -3,
  &KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0,
  &K78,
  &K129,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K49,
  &K130,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K139,
  &key_mep_2,
  &KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0I,
  &K60
};

static _KLsimple_object_vectorGVKd_9 K129 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLbasic_positionable_streamGYstreamsVio,
  &KLsequence_streamGYstreamsVio,
  &KLstring_streamGYstreamsVio,
  &KLunicode_string_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_1 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstream_sequenceYstreams_internalsVioHLunicode_string_streamG
};

static _KLinherited_slot_descriptorGVKe Kstream_sequenceYstreams_internalsVioHLunicode_string_streamG = {
  &KLinherited_slot_descriptorGVKeW /* wrapper */,
  (D) 21,
  &K134,
  &KLunicode_string_streamGYstreamsVio,
  &Kstream_sequenceYstreams_internalsVio
};

static _KLsimple_closure_methodGVKi_0 K134 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K47,
  &K134I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K139 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K63,
  &KDsignature_LobjectG_typesVKi,
  &K140
};

static _KLsimple_object_vectorGVKd_1 K140 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

static _KLbyte_stringGVKd_23 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<unicode-string-stream>"
};

static _KLsignatureAvaluesGVKi K142 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lunicode_stringG_typesVKi,
  &K143
};

static _KLsimple_object_vectorGVKd_1 K143 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K144
};

static _KLsingletonGVKd K144 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLunicode_string_streamGYstreamsVio
};

static _KLsignatureAvaluesGVKi K145 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K146
};

static _KLsimple_object_vectorGVKd_1 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K147
};

static _KLsingletonGVKd K147 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_string_streamGYstreamsVio
};

static _KLsignatureAvaluesGVKi K148 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LstringG_typesVKi,
  &K149
};

static _KLsimple_object_vectorGVKd_1 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K150
};

static _KLsingletonGVKd K150 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstring_streamGYstreamsVio
};

static _KLsignatureAvaluesGVKi K151 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &K152
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K153
};

static _KLsingletonGVKd K153 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsequence_streamGYstreamsVio
};

static _KLsignatureAvaluesGVKi K154 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K155,
  &K152
};

static _KLsimple_object_vectorGVKd_1 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K30
};

_KLsimple_methodGVKe Kclear_contentsYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &Kclear_contentsYstreams_internalsVioMM0I
};

static _KLsignatureGVKe K158 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K28
};

_KLstandalone_domainGVKe_2 Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLtypeGVKd,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLunicode_string_streamGYstreamsVio,
  &KLsequenceGVKd
};

_KLstandalone_domainGVKe_2 Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLunicode_string_streamGYstreamsVio,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_1 Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 13,
  &KLunicode_string_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

_KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLunicode_string_streamGYstreamsVio,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_2 Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLunicode_string_streamGYstreamsVio,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_1 Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLunicode_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &K144
};

_KLstandalone_domainGVKe_2 Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLtypeGVKd,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_2 KwriteYstreams_protocolVcommon_dylanRD_ioRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLsequenceGVKd
};

_KLstandalone_domainGVKe_2 Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_1 Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_3 Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 13,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

_KLstandalone_domainGVKe_2 KreadYstreams_protocolVcommon_dylanRD_ioRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_1 KpeekYstreams_protocolVcommon_dylanRD_ioRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_2 Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 9,
  &KLbyte_string_streamGYstreamsVio,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_1 Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbyte_string_streamGYstreamsVio
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &K147
};

_KLkeyword_methodGVKe Kstream_contents_asYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K286,
  &key_mep_4,
  &Kstream_contents_asYstreams_protocolVcommon_dylanMioM0I,
  &K284
};

_KLkeyword_methodGVKe Kstream_contentsYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K283,
  &key_mep_3,
  &Kstream_contentsYstreams_protocolVcommon_dylanMioM0I,
  &K284
};

_KLsimple_methodGVKe Kstream_sizeYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K282,
  &Kstream_sizeYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K274,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K278,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM0I,
  &K279
};

_KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K276,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K274,
  &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1I
};

_KLkeyword_methodGVKe Kread_intoXYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K270,
  &key_mep_6,
  &Kread_intoXYstreams_protocolVcommon_dylanMioM0I,
  &K271
};

_KLkeyword_methodGVKe KreadYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K268,
  &key_mep_4,
  &KreadYstreams_protocolVcommon_dylanMioM0I,
  &K258
};

_KLkeyword_methodGVKe KpeekYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K257,
  &key_mep_3,
  &KpeekYstreams_protocolVcommon_dylanMioM0I,
  &K258
};

_KLsimple_methodGVKe Kunread_elementYstreams_protocolVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K262,
  &Kunread_elementYstreams_protocolVcommon_dylanMioM0I
};

_KLkeyword_methodGVKe Kread_elementYstreams_protocolVcommon_dylanMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K257,
  &key_mep_3,
  &Kread_elementYstreams_protocolVcommon_dylanMioM0I,
  &K258
};

_KLkeyword_methodGVKe KmakeVKdMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K254,
  &key_mep_4,
  &KmakeVKdMioM0I,
  &K255
};

static _KLkeyword_signatureGVKe K254 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47449093,
  &K152,
  &K256,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJcontents_,
  &KPfalseVKi,
  &KJelement_type_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcontents_,
  &KJelement_type_
};

static _KLkeyword_signatureGVKe K257 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K28,
  &K261,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K258 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJon_end_of_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K260
};

static _KLbyte_stringGVKd_16 K260 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "on-end-of-stream"
};

static _KLsimple_object_vectorGVKd_1 K261 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJon_end_of_stream_
};

static _KLsignatureGVKe K262 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K263 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequence_streamGYstreamsVio,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K267
};

static _KLsymbolGVKd KJsequence_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K266
};

static _KLbyte_stringGVKd_8 K266 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "sequence"
};

static _KLbyte_stringGVKd_6 K267 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLkeyword_signatureGVKe K268 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K269,
  &K261,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K269 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequence_streamGYstreamsVio,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K270 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206221,
  &K272,
  &K273,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K271 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJon_end_of_stream_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K272 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsequence_streamGYstreamsVio,
  &KLintegerGVKd,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K273 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJon_end_of_stream_
};

static _KLsignatureAvaluesGVKi K274 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K28,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K275 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kgrow_for_streamYstreams_internalsVio
};

static _KLsignatureGVKe K276 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K263
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K277 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kgrow_for_streamYstreams_internalsVio
};

static _KLkeyword_signatureGVKe K278 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K280,
  &K281,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K279 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K280 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequence_streamGYstreamsVio,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K281 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsignatureAvaluesGVKi K282 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K28,
  &KDsignature_LintegerG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K283 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K28,
  &K285,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K284 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJclear_contentsQ_,
  &KPtrueVKi
};

static _KLsimple_object_vectorGVKd_1 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJclear_contentsQ_
};

static _KLkeyword_signatureAvaluesGVKi K286 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K287,
  &K285,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLsequence_streamGYstreamsVio
};

static _KLpairGVKd K288 = {
  &KLpairGVKdW /* wrapper */,
  &KLpretty_streamGYpprintVio,
  &K289
};

static _KLpairGVKd K289 = {
  &KLpairGVKdW /* wrapper */,
  &KLstring_streamGYstreamsVio,
  &KPempty_listVKi
};

static _KLpairGVKd K290 = {
  &KLpairGVKdW /* wrapper */,
  &KLunicode_string_streamGYstreamsVio,
  &K291
};

static _KLpairGVKd K291 = {
  &KLpairGVKdW /* wrapper */,
  &KLbyte_string_streamGYstreamsVio,
  &KPempty_listVKi
};

/* Code */

D Kstream_sequence_classYstreamsVioMM1I (D stream_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:329
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:331
  T3 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:331
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T2_0 = CONGRUENT_CALL1(T3);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:329
  MV_SET_COUNT(1);
  return(T2_0);
}

D KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_sequence_) {
  D T7;
  D T8;
  D Uunique_private_stream_lock_valueF9;
  D T10;
  D T11;
  D Uunique_stream_sequenceF12;
  D T13;
  D Uunique_outer_streamF14;
  D Uunique_outer_streamF15;
  D Uunique_private_stream_element_type_valueF16;
  D Uunique_private_stream_lock_valueF17;
  D Uunique_stream_sequenceF18;
  D T19_0;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  T20 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  if (T20 != &KPfalseVKi) {
    T7 = K32I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  T21 = primitive_idQ(Uunique_stream_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  if (T21 != &KPfalseVKi) {
    T10 = K31I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
    T11 = T10;
    Uunique_stream_sequenceF12 = T11;
  } else {
    Uunique_stream_sequenceF12 = Uunique_stream_sequence_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  T13 = primitive_object_allocate_filled(10,&KLbyte_string_streamGYstreamsVioW,9,&KPunboundVKi,0,0,&KPunboundVKi);
  T22 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T22 != &KPfalseVKi) {
    Uunique_outer_streamF15 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K19);
    Uunique_outer_streamF14 = Uunique_outer_stream_;
    Uunique_outer_streamF15 = Uunique_outer_streamF14;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF15, T13, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF16 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF16, T13, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T13, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K20);
  Uunique_private_stream_lock_valueF17 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF17, T13, 3);
  SLOT_VALUE_SETTER((D) 1, T13, 4);
  SLOT_VALUE_SETTER((D) 1, T13, 5);
  SLOT_VALUE_SETTER((D) 1, T13, 6);
  primitive_type_check(Uunique_stream_sequenceF12, &KLsequenceGVKd);
  Uunique_stream_sequenceF18 = Uunique_stream_sequenceF12;
  SLOT_VALUE_SETTER(Uunique_stream_sequenceF18, T13, 7);
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 8);
  MEP_APPLY2(&KinitializeVKdMioM1, &K21, T13, init_args_);
  T19_0 = T13;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:24
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kstream_contentsYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D clear_contentsQ_) {
  D type_;
  D T5_0;
  D T6;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:308
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:311
  T6 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:311
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  type_ = CONGRUENT_CALL1(T6);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:312
  T7.vector_element_[0] = IKJclear_contentsQ_;
  T7.vector_element_[1] = clear_contentsQ_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:312
  CONGRUENT_CALL_PROLOG(&Kstream_contents_asYstreams_protocolVcommon_dylan, 3);
  T5_0 = CONGRUENT_CALL3(type_, stream_, &T7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:308
  MV_SET_COUNT(1);
  return(T5_0);
}

static D K32I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K31I () {
  D T1_0;
  D init_value_;

  init_value_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KinitializeVKdMioM1I (D stream_, D Urest_, D direction_, D Ustart_, D Uend_) {
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

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:81
  T11 = primitive_copy_vector(Urest_);
  T10 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
  T12 = primitive_idQ(T10,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
    KerrorVKdMM1I(&K25, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
    T13 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
    T14 = SLOT_VALUE_INITD(T10, 1);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
    MEP_CALL_PROLOG(T13, T14, 2);
    MEP_CALL2(T13, stream_, T11);
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:84
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:85
  SLOT_VALUE_SETTER(Ustart_, stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:86
  SLOT_VALUE_SETTER(Ustart_, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:87
  CONGRUENT_CALL_PROLOG(&Kstream_limit_setterYstreams_internalsVio, 2);
  CONGRUENT_CALL2(Uend_, stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:88
  T15 = primitive_idQ(direction_,&KJoutput_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:88
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:89
    SLOT_VALUE_SETTER(Ustart_, stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:89
    T6 = &KPfalseVKi;
    T9 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:91
    T16 = SLOT_VALUE_INITD(stream_, 7);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:91
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(T16);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:91
    SLOT_VALUE_SETTER(T7, stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:91
    T8 = &KPfalseVKi;
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:88
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:81
  MV_SET_COUNT(0);
  return(T9);
}

static D K46I () {
  D T0_0;
  D T1_0;
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:12
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:12
  T1_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:12
  T2 = T1_0;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:12
  T0_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:12
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLsequence_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_sequence_) {
  D T7;
  D T8;
  D Uunique_private_stream_lock_valueF9;
  D T10;
  D T11;
  D Uunique_stream_sequenceF12;
  D T13;
  D Uunique_outer_streamF14;
  D Uunique_outer_streamF15;
  D Uunique_private_stream_element_type_valueF16;
  D Uunique_private_stream_lock_valueF17;
  D Uunique_stream_sequenceF18;
  D T19_0;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  T20 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  if (T20 != &KPfalseVKi) {
    T7 = K58I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  T21 = primitive_idQ(Uunique_stream_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  if (T21 != &KPfalseVKi) {
    T10 = K57I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
    T11 = T10;
    Uunique_stream_sequenceF12 = T11;
  } else {
    Uunique_stream_sequenceF12 = Uunique_stream_sequence_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  T13 = primitive_object_allocate_filled(10,&KLsequence_streamGYstreamsVioW,9,&KPunboundVKi,0,0,&KPunboundVKi);
  T22 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T22 != &KPfalseVKi) {
    Uunique_outer_streamF15 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K19);
    Uunique_outer_streamF14 = Uunique_outer_stream_;
    Uunique_outer_streamF15 = Uunique_outer_streamF14;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF15, T13, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF16 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF16, T13, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T13, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K20);
  Uunique_private_stream_lock_valueF17 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF17, T13, 3);
  SLOT_VALUE_SETTER((D) 1, T13, 4);
  SLOT_VALUE_SETTER((D) 1, T13, 5);
  SLOT_VALUE_SETTER((D) 1, T13, 6);
  primitive_type_check(Uunique_stream_sequenceF12, &KLsequenceGVKd);
  Uunique_stream_sequenceF18 = Uunique_stream_sequenceF12;
  SLOT_VALUE_SETTER(Uunique_stream_sequenceF18, T13, 7);
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 8);
  APPLY2(&KinitializeVKd, T13, init_args_);
  T19_0 = T13;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:11
  MV_SET_COUNT(1);
  return(T19_0);
}

static D K58I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K57I () {
  D T0_0;
  D T1_0;
  D T2;

  T1_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 1);
  T2 = T1_0;
  T0_0 = T2;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kgrow_for_streamYstreams_internalsVioMM0I (D seq_, D min_size_) {
  D T3;
  D n_;
  D T5;
  D new_seq_;
  D T7_0;
  D T8_0;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:268
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:271
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(seq_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:271
  primitive_type_check(T3, &KLintegerGVKd);
  n_ = T3;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T5 = Kobject_classVKdI(seq_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T10 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T9 = primitive_machine_word_shift_right(T10,2);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T11 = primitive_machine_word_multiply_signal_overflow(8,T9);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T15 = primitive_cast_integer_as_raw(min_size_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T16 = primitive_machine_word_less_thanQ(T12,T15);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  if (T16 != &KPfalseVKi) {
    T14 = min_size_;
  } else {
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  T17.vector_element_[0] = &KJsize_;
  T17.vector_element_[1] = T14;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:272
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  new_seq_ = CONGRUENT_CALL2(T5, &T17);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:273
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(new_seq_, (D) 1, seq_, (D) 1, n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:274
  T7_0 = new_seq_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:268
  T8_0 = T7_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T7_0);
    primitive_type_check(T8_0, &KLsequenceGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:268
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kgrow_for_streamYstreams_internalsVioMM1I (D vec_, D min_size_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:277
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:280
  CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
  CONGRUENT_CALL2(min_size_, vec_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:281
  T3_0 = vec_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:277
  MV_SET_COUNT(1);
  return(T3_0);
}

static D K84I () {
  D T1_0;
  D init_value_;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:25
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:25
  init_value_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:25
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:25
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLstring_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_sequence_) {
  D T7;
  D T8;
  D Uunique_private_stream_lock_valueF9;
  D T10;
  D T11;
  D Uunique_stream_sequenceF12;
  D T13;
  D Uunique_outer_streamF14;
  D Uunique_outer_streamF15;
  D Uunique_private_stream_element_type_valueF16;
  D Uunique_private_stream_lock_valueF17;
  D Uunique_stream_sequenceF18;
  D T19_0;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  T20 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  if (T20 != &KPfalseVKi) {
    T7 = K100I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  T21 = primitive_idQ(Uunique_stream_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  if (T21 != &KPfalseVKi) {
    T10 = K99I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
    T11 = T10;
    Uunique_stream_sequenceF12 = T11;
  } else {
    Uunique_stream_sequenceF12 = Uunique_stream_sequence_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  T13 = primitive_object_allocate_filled(10,&KLstring_streamGYstreamsVioW,9,&KPunboundVKi,0,0,&KPunboundVKi);
  T22 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T22 != &KPfalseVKi) {
    Uunique_outer_streamF15 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K19);
    Uunique_outer_streamF14 = Uunique_outer_stream_;
    Uunique_outer_streamF15 = Uunique_outer_streamF14;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF15, T13, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF16 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF16, T13, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T13, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K20);
  Uunique_private_stream_lock_valueF17 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF17, T13, 3);
  SLOT_VALUE_SETTER((D) 1, T13, 4);
  SLOT_VALUE_SETTER((D) 1, T13, 5);
  SLOT_VALUE_SETTER((D) 1, T13, 6);
  primitive_type_check(Uunique_stream_sequenceF12, &KLsequenceGVKd);
  Uunique_stream_sequenceF18 = Uunique_stream_sequenceF12;
  SLOT_VALUE_SETTER(Uunique_stream_sequenceF18, T13, 7);
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 8);
  APPLY2(&KinitializeVKd, T13, init_args_);
  T19_0 = T13;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:20
  MV_SET_COUNT(1);
  return(T19_0);
}

static D K96I () {
  D T1_0;
  D T2_0;
  D init_value_;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:21
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:21
  T2_0 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:21
  init_value_ = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:21
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:21
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K100I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K99I () {
  D T1_0;
  D T2_0;
  D init_value_;

  T2_0 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
  init_value_ = T2_0;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Ktype_for_sequence_streamYstreamsVioMM0I (D contents_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:99
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:101
  T2_0 = &KLsequence_streamGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:99
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_sequence_streamYstreamsVioMM1I (D contents_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:104
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:106
  T2_0 = &KLsequence_streamGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:104
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_sequence_streamYstreamsVioMM2I (D contents_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:109
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:111
  T2_0 = &KLstring_streamGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:109
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_sequence_streamYstreamsVioMM3I (D contents_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:114
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:116
  T2_0 = &KLbyte_string_streamGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:114
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_sequence_streamYstreamsVioMM4I (D contents_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:119
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:121
  T2_0 = &KLunicode_string_streamGYstreamsVio;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:119
  MV_SET_COUNT(1);
  return(T2_0);
}

D KLunicode_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_stream_sequence_) {
  D T7;
  D T8;
  D Uunique_private_stream_lock_valueF9;
  D T10;
  D T11;
  D Uunique_stream_sequenceF12;
  D T13;
  D Uunique_outer_streamF14;
  D Uunique_outer_streamF15;
  D Uunique_private_stream_element_type_valueF16;
  D Uunique_private_stream_lock_valueF17;
  D Uunique_stream_sequenceF18;
  D T19_0;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  T20 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  if (T20 != &KPfalseVKi) {
    T7 = K138I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  T21 = primitive_idQ(Uunique_stream_sequence_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  if (T21 != &KPfalseVKi) {
    T10 = K137I();
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
    T11 = T10;
    Uunique_stream_sequenceF12 = T11;
  } else {
    Uunique_stream_sequenceF12 = Uunique_stream_sequence_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  T13 = primitive_object_allocate_filled(10,&KLunicode_string_streamGYstreamsVioW,9,&KPunboundVKi,0,0,&KPunboundVKi);
  T22 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T22 != &KPfalseVKi) {
    Uunique_outer_streamF15 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K19);
    Uunique_outer_streamF14 = Uunique_outer_stream_;
    Uunique_outer_streamF15 = Uunique_outer_streamF14;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF15, T13, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF16 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF16, T13, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T13, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K20);
  Uunique_private_stream_lock_valueF17 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF17, T13, 3);
  SLOT_VALUE_SETTER((D) 1, T13, 4);
  SLOT_VALUE_SETTER((D) 1, T13, 5);
  SLOT_VALUE_SETTER((D) 1, T13, 6);
  primitive_type_check(Uunique_stream_sequenceF12, &KLsequenceGVKd);
  Uunique_stream_sequenceF18 = Uunique_stream_sequenceF12;
  SLOT_VALUE_SETTER(Uunique_stream_sequenceF18, T13, 7);
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 8);
  MEP_APPLY2(&KinitializeVKdMioM1, &K21, T13, init_args_);
  T19_0 = T13;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:28
  MV_SET_COUNT(1);
  return(T19_0);
}

static D K134I () {
  D T1_0;
  D init_value_;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:29
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:29
  init_value_ = KmakeVKdMM34I(&KLunicode_stringGVKd, &KPempty_vectorVKi, &KPunboundVKi, (D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:29
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:29
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K138I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K137I () {
  D T1_0;
  D init_value_;

  init_value_ = KmakeVKdMM34I(&KLunicode_stringGVKd, &KPempty_vectorVKi, &KPunboundVKi, (D) 1);
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kclear_contentsYstreams_internalsVioMM0I (D stream_) {
  D Utmp_;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:303
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:304
  SLOT_VALUE_SETTER((D) 1, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:305
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:305
  if (Utmp_ != &KPfalseVKi) {
    T3 = Utmp_;
  } else {
    T3 = (D) 1;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:305
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:305
  SLOT_VALUE_SETTER(T3, stream_, 6);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:305
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:303
  MV_SET_COUNT(0);
  return(T4);
}

D Kstream_contents_asYstreams_protocolVcommon_dylanMioM0I (D type_, D stream_, D Urest_, D clear_contentsQ_) {
  D Utmp_;
  D Uend_;
  D n_;
  D result_;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T14;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:318
  T11 = SLOT_VALUE_INITD(stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:319
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:319
  if (Utmp_ != &KPfalseVKi) {
    Uend_ = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:319
    T12 = SLOT_VALUE_INITD(stream_, 6);
    Uend_ = T12;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:319
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:320
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  n_ = CONGRUENT_CALL2(Uend_, T11);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:321
  T13.vector_element_[0] = &KJsize_;
  T13.vector_element_[1] = n_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:321
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  result_ = CONGRUENT_CALL2(type_, &T13);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:322
  T14 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:322
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(result_, (D) 1, T14, T11, n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:323
  if (clear_contentsQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:324
    Kclear_contentsYstreams_internalsVioMM0I(stream_);
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:323
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:326
  T9_0 = result_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:315
  T10_0 = T9_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T9_0);
    primitive_type_check(T10_0, &KLsequenceGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:315
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kstream_sizeYstreams_protocolVcommon_dylanMioM0I (D stream_) {
  D Utmp_;
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:297
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:299
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:299
  if (Utmp_ != &KPfalseVKi) {
    T3 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:299
    T6 = SLOT_VALUE_INITD(stream_, 6);
    T3 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:299
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:300
  T7 = SLOT_VALUE_INITD(stream_, 4);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:299
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T4_0 = CONGRUENT_CALL2(T3, T7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:297
  T5_0 = T4_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T4_0);
    primitive_type_check(T5_0, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:297
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2_0;
  D T3;
  D limit_;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:287
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:289
  T7 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:289
  T8 = primitive_idQ(T7,(D) 9);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:289
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:290
    T2_0 = &KPfalseVKi;
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:292
    T9 = SLOT_VALUE(stream_, 2);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:292
    T10 = primitive_idQ(T9,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:292
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:292
      CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
      T3 = CONGRUENT_CALL1(stream_);
      limit_ = T3;
    } else {
      limit_ = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:292
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    T11 = SLOT_VALUE_INITD(stream_, 5);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    if (limit_ != &KPfalseVKi) {
      T5 = limit_;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
      T12 = SLOT_VALUE_INITD(stream_, 6);
      T5 = T12;
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T13 = CONGRUENT_CALL2(T11, T5);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    T15 = primitive_not(T13);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:293
    T14_0 = T15;
    T6_0 = T14_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:289
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:287
  MV_SET_COUNT(1);
  return(T6_0);
}

D KwriteYstreams_protocolVcommon_dylanMioM0I (D stream_, D src_, D Urest_, D start_index_, D Uend_) {
  D pos_;
  D T7;
  D T8;
  D T9;
  D count_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D dst_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D T35;
  D T36_0;
  D T37;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:248
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:251
  Kensure_writableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:252
  T22 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:251
  dst_ = T22;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:253
  T23 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:253
  primitive_type_check(T23, &KLintegerGVKd);
  pos_ = T23;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:254
  if (Uend_ != &KPfalseVKi) {
    T8 = Uend_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:254
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(src_);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:254
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T9 = CONGRUENT_CALL2(T8, start_index_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:254
  primitive_type_check(T9, &KLintegerGVKd);
  count_ = T9;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:255
  T24 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:255
  T25 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:255
  T26 = primitive_machine_word_logxor(T25,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:255
  T27 = primitive_machine_word_add_signal_overflow(T24,T26);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:255
  T28 = primitive_cast_raw_as_integer(T27);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
    T19 = dst_;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T12 = CONGRUENT_CALL1(T19);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T13 = CONGRUENT_CALL2(T12, T28);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:257
      T21 = dst_;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:257
      ENGINE_NODE_CALL_PROLOG(&Kgrow_for_streamYstreams_internalsVio, &K277, 2);
      T29 = ENGINE_NODE_CALL2(&K277, T21, T28);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:257
      primitive_type_check(T29, &KLsequenceGVKd);
      T11 = T29;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:257
      dst_ = T11;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:258
      T20 = dst_;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:258
      SLOT_VALUE_SETTER(T20, stream_, 7);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:256
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:260
  T18 = dst_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:260
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(T18, pos_, src_, start_index_, count_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:261
  T30 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:261
  T31 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:261
  T32 = primitive_machine_word_logxor(T31,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:261
  T33 = primitive_machine_word_add_signal_overflow(T30,T32);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:261
  T34 = primitive_cast_raw_as_integer(T33);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:262
  SLOT_VALUE_SETTER(T34, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
  T35 = SLOT_VALUE_INITD(stream_, 6);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T36_0 = CONGRUENT_CALL2(T35, T34);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
  T37 = T36_0;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:264
    SLOT_VALUE_SETTER(T34, stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:264
    T14 = &KPfalseVKi;
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
    T15 = &KPfalseVKi;
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:263
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:248
  MV_SET_COUNT(0);
  return(T16);
}

D Kwrite_elementYstreams_protocolVcommon_dylanMioM0I (D stream_, D elt_) {
  D pos_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D seq_;
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
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:228
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:230
  Kensure_writableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:231
  T16 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:230
  seq_ = T16;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:232
  T17 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:232
  primitive_type_check(T17, &KLintegerGVKd);
  pos_ = T17;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:234
  T15 = seq_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:234
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(T15);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:234
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T18 = CONGRUENT_CALL2(pos_, T4);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:234
  if (T18 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
      T12 = seq_;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T6 = CONGRUENT_CALL1(T12);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T19 = CONGRUENT_CALL2(pos_, T6);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        T20 = primitive_cast_integer_as_raw(pos_);
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        T21 = primitive_machine_word_add_signal_overflow(T20,4);
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        T22 = primitive_cast_raw_as_integer(T21);
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        T14 = seq_;
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        ENGINE_NODE_CALL_PROLOG(&Kgrow_for_streamYstreams_internalsVio, &K275, 2);
        T23 = ENGINE_NODE_CALL2(&K275, T14, T22);
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        primitive_type_check(T23, &KLsequenceGVKd);
        T5 = T23;
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:236
        seq_ = T5;
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:237
        T13 = seq_;
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:237
        SLOT_VALUE_SETTER(T13, stream_, 7);
        // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:235
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:234
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:241
  T11 = seq_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:241
  CALL3(&Kelement_setterVKd, elt_, T11, pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:242
  T24 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:242
  T25 = primitive_machine_word_add_signal_overflow(T24,4);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:242
  T26 = primitive_cast_raw_as_integer(T25);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:242
  SLOT_VALUE_SETTER(T26, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:243
  T27 = SLOT_VALUE_INITD(stream_, 6);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:243
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T28 = CONGRUENT_CALL2(pos_, T27);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:243
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:243
    T8 = &KPfalseVKi;
    T9 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:244
    T29 = primitive_cast_integer_as_raw(pos_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:244
    T30 = primitive_machine_word_add_signal_overflow(T29,4);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:244
    T31 = primitive_cast_raw_as_integer(T30);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:244
    SLOT_VALUE_SETTER(T31, stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:244
    T7 = &KPfalseVKi;
    T9 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:243
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:228
  MV_SET_COUNT(0);
  return(T9);
}

D Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1I (D stream_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:219
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  T5 = SLOT_VALUE(stream_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  T7 = primitive_machine_word_logand(T6,5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  T9 = primitive_idQ(T8,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:222
    CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
    T2 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:222
    T11 = primitive_not(T2);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:222
    T10_0 = T11;
    T4_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:221
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:219
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kread_intoXYstreams_protocolVcommon_dylanMioM0I (D stream_, D n_, D dst_, D Urest_, D start_, D on_end_of_stream_) {
  D T7;
  D on_end_of_streamF8;
  D pos_;
  D Utmp_;
  D T11;
  D T12;
  D src_n_;
  D T14;
  D T15;
  D dst_n_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  D T42;
  DWORD T43;
  DWORD T44;
  D T45;
  D T46;
  _KLsimple_object_vectorGVKd_4 T47 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T48 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  T23 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF8 = T7;
  } else {
    on_end_of_streamF8 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:201
  Kensure_readableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:202
  T24 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:203
  T25 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:203
  primitive_type_check(T25, &KLintegerGVKd);
  pos_ = T25;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
  if (Utmp_ != &KPfalseVKi) {
    T11 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
    T26 = SLOT_VALUE_INITD(stream_, 6);
    T11 = T26;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T12 = CONGRUENT_CALL2(T11, pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:204
  primitive_type_check(T12, &KLintegerGVKd);
  src_n_ = T12;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:205
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T14 = CONGRUENT_CALL1(dst_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:205
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T15 = CONGRUENT_CALL2(T14, start_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:205
  primitive_type_check(T15, &KLintegerGVKd);
  dst_n_ = T15;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  T28 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  T29 = primitive_cast_integer_as_raw(src_n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  T30 = primitive_machine_word_less_thanQ(T28,T29);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  if (T30 != &KPfalseVKi) {
    T27 = T28;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
    T34 = primitive_cast_integer_as_raw(src_n_);
    T27 = T34;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  T32 = primitive_cast_integer_as_raw(dst_n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  T33 = primitive_machine_word_less_thanQ(T27,T32);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  if (T33 != &KPfalseVKi) {
    T31 = T27;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
    T39 = primitive_cast_integer_as_raw(dst_n_);
    T31 = T39;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:206
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  T40 = primitive_cast_raw_as_integer(T31);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:207
  CONGRUENT_CALL_PROLOG(&Kcopy_bytesYbyte_vectorVcommon_dylan, 5);
  CONGRUENT_CALL5(dst_, start_, T24, pos_, T40);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  T35 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  T36 = primitive_machine_word_logxor(T31,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  T37 = primitive_machine_word_add_signal_overflow(T35,T36);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  T38 = primitive_cast_raw_as_integer(T37);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:208
  SLOT_VALUE_SETTER(T38, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  T41 = primitive_cast_integer_as_raw(src_n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  T42 = primitive_machine_word_less_thanQ(T41,T28);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  if (T42 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
    T43 = primitive_cast_integer_as_raw(src_n_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
    T44 = primitive_cast_integer_as_raw(dst_n_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
    T45 = primitive_machine_word_less_thanQ(T43,T44);
    T17 = T45;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:210
    T46 = primitive_idQ(on_end_of_streamF8,DunsuppliedYcommon_extensionsVcommon_dylan);
    T18 = T46;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:214
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T19 = CONGRUENT_CALL2(start_, T40);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:214
    T47.vector_element_[0] = &KJstart_;
    T47.vector_element_[1] = start_;
    T47.vector_element_[2] = &KJend_;
    T47.vector_element_[3] = T19;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:214
    CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
    T20 = CONGRUENT_CALL2(dst_, &T47);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:211
    T48.vector_element_[0] = IKJstream_;
    T48.vector_element_[1] = stream_;
    T48.vector_element_[2] = &KJcount_;
    T48.vector_element_[3] = T40;
    T48.vector_element_[4] = IKJsequence_;
    T48.vector_element_[5] = T20;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:211
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T21 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T48);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:211
    KsignalVKdMM0I(T21, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:216
  T22_0 = T40;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  MV_SET_COUNT(1);
  return(T22_0);
}

D KreadYstreams_protocolVcommon_dylanMioM0I (D stream_, D n_, D Urest_, D on_end_of_stream_) {
  D T5;
  D on_end_of_streamF6;
  D pos_;
  D Utmp_;
  D T9;
  D T10;
  D src_n_;
  D T12;
  D T13;
  D elements_;
  D T15_0;
  D nF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  _KLsimple_object_vectorGVKd_4 T33 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_6 T34 = {&KLsimple_object_vectorGVKdW, (D) 25};
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  _KLsimple_object_vectorGVKd_4 T40 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  nF16 = n_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  T20 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF6 = T5;
  } else {
    on_end_of_streamF6 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:179
  Kensure_readableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:180
  T21 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:181
  T22 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:181
  primitive_type_check(T22, &KLintegerGVKd);
  pos_ = T22;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
  if (Utmp_ != &KPfalseVKi) {
    T9 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
    T23 = SLOT_VALUE_INITD(stream_, 6);
    T9 = T23;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T10 = CONGRUENT_CALL2(T9, pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:182
  primitive_type_check(T10, &KLintegerGVKd);
  src_n_ = T10;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  T19 = nF16;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  T24 = primitive_cast_integer_as_raw(src_n_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  T25 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  T26 = primitive_machine_word_less_thanQ(T24,T25);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:184
    T27 = primitive_idQ(on_end_of_streamF6,DunsuppliedYcommon_extensionsVcommon_dylan);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:184
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T28 = primitive_cast_integer_as_raw(pos_);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T29 = primitive_cast_integer_as_raw(src_n_);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T30 = primitive_machine_word_logxor(T29,1);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T31 = primitive_machine_word_add_signal_overflow(T28,T30);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T32 = primitive_cast_raw_as_integer(T31);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      T33.vector_element_[0] = &KJstart_;
      T33.vector_element_[1] = pos_;
      T33.vector_element_[2] = &KJend_;
      T33.vector_element_[3] = T32;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:188
      CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
      T12 = CONGRUENT_CALL2(T21, &T33);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:185
      T34.vector_element_[0] = IKJstream_;
      T34.vector_element_[1] = stream_;
      T34.vector_element_[2] = &KJcount_;
      T34.vector_element_[3] = src_n_;
      T34.vector_element_[4] = IKJsequence_;
      T34.vector_element_[5] = T12;
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:185
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T13 = CONGRUENT_CALL2(&KLincomplete_read_errorGYstreams_protocolVcommon_dylan, &T34);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:185
      KsignalVKdMM0I(T13, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:184
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:190
    nF16 = src_n_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:183
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T18 = nF16;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T35 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T36 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T37 = primitive_machine_word_logxor(T36,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T38 = primitive_machine_word_add_signal_overflow(T35,T37);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T39 = primitive_cast_raw_as_integer(T38);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  T40.vector_element_[0] = &KJstart_;
  T40.vector_element_[1] = pos_;
  T40.vector_element_[2] = &KJend_;
  T40.vector_element_[3] = T39;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:192
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  elements_ = CONGRUENT_CALL2(T21, &T40);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T17 = nF16;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T41 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T42 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T43 = primitive_machine_word_logxor(T42,1);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T44 = primitive_machine_word_add_signal_overflow(T41,T43);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  T45 = primitive_cast_raw_as_integer(T44);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:193
  SLOT_VALUE_SETTER(T45, stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:194
  T15_0 = elements_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  MV_SET_COUNT(1);
  return(T15_0);
}

D KpeekYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D pos_;
  D Utmp_;
  DWORD T8;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  T12 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:164
  Kensure_readableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:165
  T13 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:166
  T14 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:166
  primitive_type_check(T14, &KLintegerGVKd);
  pos_ = T14;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
    primitive_type_check(Utmp_, &KLintegerGVKd);
    T16 = Utmp_;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
    T20 = primitive_cast_integer_as_raw(T16);
    T8 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
    T15 = SLOT_VALUE_INITD(stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
    primitive_type_check(T15, &KLintegerGVKd);
    T17 = T15;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
    T21 = primitive_cast_integer_as_raw(T17);
    T8 = T21;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:167
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
  T18 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
  T19 = primitive_machine_word_less_thanQ(T18,T8);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:169
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T9_0 = CONGRUENT_CALL3(T13, pos_, &KPempty_vectorVKi);
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:171
    T10_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:168
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kunread_elementYstreams_protocolVcommon_dylanMioM0I (D stream_, D elt_) {
  D pos_;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:144
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:147
  Kensure_readableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:148
  T6 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:147
  primitive_type_check(T6, &KLintegerGVKd);
  pos_ = T6;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:149
  T7 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:149
  T8 = primitive_machine_word_less_thanQ(1,T7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:149
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:150
    T9 = primitive_cast_integer_as_raw(pos_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:150
    T10 = primitive_machine_word_subtract_signal_overflow(T9,4);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:150
    T11 = primitive_cast_raw_as_integer(T10);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:150
    SLOT_VALUE_SETTER(T11, stream_, 5);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:151
    T12 = SLOT_VALUE_INITD(stream_, 7);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    T13 = primitive_cast_integer_as_raw(pos_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    T14 = primitive_machine_word_subtract_signal_overflow(T13,4);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    T15 = primitive_cast_raw_as_integer(T14);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T4 = CONGRUENT_CALL3(T12, T15, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    T16 = KEEVKdI(T4, elt_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:154
      T17 = primitive_cast_integer_as_raw(pos_);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:154
      T18 = primitive_machine_word_subtract_signal_overflow(T17,4);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:154
      T19 = primitive_cast_raw_as_integer(T18);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:154
      CALL3(&Kelement_setterVKd, elt_, T12, T19);
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:153
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:149
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:157
  T5_0 = elt_;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:144
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kread_elementYstreams_protocolVcommon_dylanMioM0I (D stream_, D Urest_, D on_end_of_stream_) {
  D T4;
  D on_end_of_streamF5;
  D pos_;
  D Utmp_;
  DWORD T8;
  D elt_;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  T13 = primitive_idQ(on_end_of_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
    T4 = DunsuppliedYcommon_extensionsVcommon_dylan;
    on_end_of_streamF5 = T4;
  } else {
    on_end_of_streamF5 = on_end_of_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:131
  Kensure_readableYstreams_internalsVioI(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:132
  T14 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:133
  T15 = SLOT_VALUE_INITD(stream_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:133
  primitive_type_check(T15, &KLintegerGVKd);
  pos_ = T15;
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
  CONGRUENT_CALL_PROLOG(&Kstream_limitYstreamsVio, 1);
  Utmp_ = CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
    primitive_type_check(Utmp_, &KLintegerGVKd);
    T17 = Utmp_;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
    T21 = primitive_cast_integer_as_raw(T17);
    T8 = T21;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
    T16 = SLOT_VALUE_INITD(stream_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
    primitive_type_check(T16, &KLintegerGVKd);
    T18 = T16;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
    T22 = primitive_cast_integer_as_raw(T18);
    T8 = T22;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:134
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
  T19 = primitive_cast_integer_as_raw(pos_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
  T20 = primitive_machine_word_less_thanQ(T19,T8);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:136
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    elt_ = CONGRUENT_CALL3(T14, pos_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:137
    T23 = primitive_cast_integer_as_raw(pos_);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:137
    T24 = primitive_machine_word_add_signal_overflow(T23,4);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:137
    T25 = primitive_cast_raw_as_integer(T24);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:137
    SLOT_VALUE_SETTER(T25, stream_, 5);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:138
    T10_0 = elt_;
    T12_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:140
    T11_0 = Kend_of_stream_valueYstreams_internalsVioI(stream_, on_end_of_streamF5);
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:135
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  MV_SET_COUNT(1);
  return(T12_0);
}

D KmakeVKdMioM0I (D class_, D initargs_, D contents_, D element_type_) {
  D type_;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:70
  T8 = primitive_copy_vector(initargs_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:73
  type_ = CALL1(&Ktype_for_sequence_streamYstreamsVio, contents_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:74
  T9 = primitive_idQ(type_,class_);
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:74
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
    T12 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
      T15 = KerrorVKdMM1I(&K25, &KPempty_vectorVKi);
      T11 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
      T13 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
      T14 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
      MEP_CALL_PROLOG(T13, T14, 2);
      T10 = MEP_CALL2(T13, class_, T8);
      T11 = T10;
    }
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
    T16_0 = T11;
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:75
    T18_0 = T16_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T16_0);
      primitive_type_check(T18_0, &KLsequence_streamGYstreamsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T18_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:77
    T17_0 = APPLY2(&KmakeVKd, type_, T8);
    // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:77
    T19_0 = T17_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T17_0);
      primitive_type_check(T19_0, &KLsequence_streamGYstreamsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T19_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:74
  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:70
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_3Esequence_stream_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclear_contentsQ_);
    if (T0 != &KJclear_contentsQ_) {
      primitive_repeated_slot_value_setter(T0, &K285, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K284, 1, 0);
      IKJclear_contentsQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcontents_);
    if (T0 != &KJcontents_) {
      primitive_repeated_slot_value_setter(T0, &K256, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K255, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K63, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K60, 1, 6);
      primitive_slot_value_setter(T0, &Kstream_sequenceYstreams_internalsVioHLsequence_streamG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K63, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K60, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJon_end_of_stream_);
    if (T0 != &KJon_end_of_stream_) {
      primitive_repeated_slot_value_setter(T0, &K273, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K271, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K261, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K258, 1, 0);
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

    T0 = KPresolve_symbolVKiI(&KJsequence_);
    if (T0 != &KJsequence_) {
      IKJsequence_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_3Esequence_stream_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:70
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I253;
}
I253:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:81
  T0 = KPadd_a_methodVKnI(&KinitializeVKd, &KinitializeVKdMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I250;
}
I250:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:127
  T0 = KPadd_a_methodVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I249;
}
I249:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:144
  T0 = KPadd_a_methodVKnI(&Kunread_elementYstreams_protocolVcommon_dylan, &Kunread_elementYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I246;
}
I246:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:160
  T0 = KPadd_a_methodVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I243;
}
I243:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:175
  T0 = KPadd_a_methodVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I240;
}
I240:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:197
  T0 = KPadd_a_methodVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I237;
}
I237:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:219
  T0 = KPadd_a_methodVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I234;
}
I234:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:228
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I231;
}
I231:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:248
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I228;
}
I228:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:287
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I225;
}
I225:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:297
  T0 = KPadd_a_methodVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I222;
}
I222:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:308
  T0 = KPadd_a_methodVKnI(&Kstream_contentsYstreams_protocolVcommon_dylan, &Kstream_contentsYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I219;
}
I219:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:315
  T0 = KPadd_a_methodVKnI(&Kstream_contents_asYstreams_protocolVcommon_dylan, &Kstream_contents_asYstreams_protocolVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I217;
}
I217:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:337
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_ioRD_6);
  goto I214;
}
I214:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:338
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_ioRD_5);
  goto I212;
}
I212:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:339
  T0 = KPadd_nonsiblinged_domainVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I210;
}
I210:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:340
  T0 = KPadd_nonsiblinged_domainVKnI(&Kunread_elementYstreams_protocolVcommon_dylan, &Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I208;
}
I208:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:341
  T0 = KPadd_nonsiblinged_domainVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanRD_ioRD_3);
  goto I206;
}
I206:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:342
  T0 = KPadd_nonsiblinged_domainVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanRD_ioRD_3);
  goto I204;
}
I204:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:343
  T0 = KPadd_nonsiblinged_domainVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_3);
  goto I202;
}
I202:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:344
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I200;
}
I200:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:345
  T0 = KPadd_nonsiblinged_domainVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I198;
}
I198:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:346
  T0 = KPadd_nonsiblinged_domainVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanRD_ioRD_3);
  goto I196;
}
I196:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:347
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I194;
}
I194:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:348
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I192;
}
I192:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:350
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_contentsYstreams_protocolVcommon_dylan, &Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I190;
}
I190:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:351
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_contents_asYstreams_protocolVcommon_dylan, &Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I188;
}
I188:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:353
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_ioRD_5);
  goto I186;
}
I186:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:354
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_ioRD_4);
  goto I184;
}
I184:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:355
  T0 = KPadd_nonsiblinged_domainVKnI(&Kread_elementYstreams_protocolVcommon_dylan, &Kread_elementYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I182;
}
I182:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:356
  T0 = KPadd_nonsiblinged_domainVKnI(&Kunread_elementYstreams_protocolVcommon_dylan, &Kunread_elementYstreams_protocolVcommon_dylanRD_ioRD_0);
  goto I180;
}
I180:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:357
  T0 = KPadd_nonsiblinged_domainVKnI(&KpeekYstreams_protocolVcommon_dylan, &KpeekYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I178;
}
I178:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:358
  T0 = KPadd_nonsiblinged_domainVKnI(&KreadYstreams_protocolVcommon_dylan, &KreadYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I176;
}
I176:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:359
  T0 = KPadd_nonsiblinged_domainVKnI(&Kread_intoXYstreams_protocolVcommon_dylan, &Kread_intoXYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I174;
}
I174:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:360
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_input_availableQYstreams_protocolVcommon_dylan, &Kstream_input_availableQYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I172;
}
I172:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:361
  T0 = KPadd_nonsiblinged_domainVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I170;
}
I170:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:362
  T0 = KPadd_nonsiblinged_domainVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanRD_ioRD_2);
  goto I168;
}
I168:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:363
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I166;
}
I166:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:364
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_sizeYstreams_protocolVcommon_dylan, &Kstream_sizeYstreams_protocolVcommon_dylanRD_ioRD_1);
  goto I164;
}
I164:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:366
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_contentsYstreams_protocolVcommon_dylan, &Kstream_contentsYstreams_protocolVcommon_dylanRD_ioRD_0);
  goto I162;
}
I162:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/sequence-stream.dylan:367
  T0 = KPadd_nonsiblinged_domainVKnI(&Kstream_contents_asYstreams_protocolVcommon_dylan, &Kstream_contents_asYstreams_protocolVcommon_dylanRD_ioRD_0);
  goto I160;
}
I160:

  return;
}


/* eof */
