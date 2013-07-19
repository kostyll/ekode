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
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(6);

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

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
  D outer_stream_;
  D private_stream_element_type_value_;
  D private_stream_direction_value_;
  D private_stream_lock_value_;
  D Pinner_stream_;
} _KLwrapper_streamGYstreamsVio;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
} _KLstringGVKd;

typedef struct {
  D wrapper;
} _KLlocatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

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
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLrangeGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
} _KLdequeGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

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
} _KLsequenceGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D print_reference_object_;
  D print_reference_id_;
  D print_reference_count_;
} _KLprint_referenceGYprint_internalsVio;

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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D Kobject_classVKdI (D);
extern _KLincremental_generic_functionGVKe Kpprint_logical_blockYpprintVio;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLincremental_generic_functionGVKe Kas_lowercaseVKd;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Klock_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe Kunlock_streamYstreamsVio;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
D Kinteger_to_stringYcommon_extensionsVcommon_dylanI (D, D, D, D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsymbolGVKd KJdefault_;
extern _KLsymbolGVKd KJobject_;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLclosable_objectGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLbasic_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbasic_streamGYstreamsVioW;
extern _KLclassGVKd KLwrapper_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLwrapper_streamGYstreamsVioW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
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
extern _KLinstance_slot_descriptorGVKe Kouter_streamYstreamsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG;
extern _KLinstance_slot_descriptorGVKe KPinner_streamYstreams_internalsVioHLwrapper_streamG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kprint_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM19;
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM20;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmoduleGVKe Kprint_moduleYdylan_userVio;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLlocatorGYlocators_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLlocatorGYlocators_protocolVcommon_dylanW;
D Kfloat_to_stringYcommon_extensionsVcommon_dylanI (D, D, D);
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLkeyword_methodGVKe Kmachine_word_to_stringYcommon_extensionsVcommon_dylan;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLincremental_generic_functionGVKe Kwrite_elementYstreams_protocolVcommon_dylan;
D Kas_lowercaseVKdMM2I (D);
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLkeyword_methodGVKe Kinteger_to_stringYcommon_extensionsVcommon_dylan;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe Kpprint_newlineYpprintVio;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLincremental_generic_functionGVKe KlastVKd;
extern _KLclassGVKd KLrangeGVKd;
extern _KLmm_wrapperGVKi_0 KLrangeGVKdW;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLclassGVKd KLdequeGVKd;
extern _KLmm_wrapperGVKi_0 KLdequeGVKdW;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLincremental_generic_functionGVKe Kwrite_textYstreamsVio;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kinner_streamYstreamsVio;
extern _KLincremental_generic_functionGVKe Kinner_stream_setterYstreamsVio;
extern _KLincremental_generic_functionGVKe Knew_lineYstreamsVio;
extern _KLunionGVKe KLpretty_newline_kindGYprint_internalsVio;
extern _KLincremental_generic_functionGVKe Kpprint_indentYpprintVio;
extern _KLunionGVKe KLindentation_kindGYprint_internalsVio;
extern _KLincremental_generic_functionGVKe Kpprint_tabYpprintVio;
extern _KLunionGVKe KLtab_kindGYprint_internalsVio;
extern _KLincremental_generic_functionGVKe Kwrite_lineYstreamsVio;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJoutput_;
D KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLbyte_string_streamGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbyte_string_streamGYstreamsVioW;
D Kstream_contentsYstreams_protocolVcommon_dylanMioM0I (D, D, D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Kstream_at_endQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kstream_openQYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kdiscard_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Ksynchronize_outputYstreams_protocolVcommon_dylan;
extern _KLincremental_generic_functionGVKe Kforce_outputYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLprint_referenceGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLprint_referenceGYprint_internalsVioW;
extern _KLsimple_methodGVKe Knew_lineYstreamsVioMM2;
D Knew_lineYstreamsVioMM2I (D);
extern _KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM4;
D Kwrite_lineYstreamsVioMM4I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kpprint_tabYpprintVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kpprint_tabYpprintVioMM1;
D Kpprint_tabYpprintVioMM1I (D, D, D, D);
extern _KLmethod_domainGVKe Kpprint_indentYpprintVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kpprint_indentYpprintVioMM1;
D Kpprint_indentYpprintVioMM1I (D, D, D);
extern _KLmethod_domainGVKe Kpprint_newlineYpprintVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kpprint_newlineYpprintVioMM1;
D Kpprint_newlineYpprintVioMM1I (D, D);
extern _KLmethod_domainGVKe Kpprint_logical_blockYpprintVioRD_ioRD_0;
extern _KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM2;
D Kpprint_logical_blockYpprintVioMM2I (D, D, D, D, D, D, D);
extern _KLsealed_generic_functionGVKe KprintYprintVio;
extern _KLincremental_generic_functionGVKe Kprint_objectYprintVio;
D KprintYprintVioMM0I (D, D, D, D, D, D, D, D);
D Kdo_printing_objectYprintVioMM0I (D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_do_printing_objectF39;
static D Kanonymous_of_do_printing_objectF39I (D);
static _KLsymbolGVKd KJbody_;
static _KLsymbolGVKd KJprefix_;
static _KLbyte_stringGVKd_1 K33;
static _KLsymbolGVKd KJsuffix_;
static _KLbyte_stringGVKd_1 K35;
static _KLbyte_stringGVKd_6 K36;
static _KLbyte_stringGVKd_6 K37;
static _KLbyte_stringGVKd_4 K38;
static _KLbyte_stringGVKd_1 K40;
static _KLsymbolGVKd KJinner_stream_;
extern _KLclassGVKd KLcircular_print_streamGYprint_internalsVio;
extern _KLmm_wrapperGVKi_0 KLcircular_print_streamGYprint_internalsVioW;
extern _KLsimple_methodGVKe Kstart_circle_printingYprint_internalsVioMM0;
D Kstart_circle_printingYprint_internalsVioMM0I (D, D);
D Kmaybe_print_objectYprint_internalsVioMM0I (D, D);
extern _KLsealed_generic_functionGVKe Kcircular_first_passQYprint_internalsVio;
extern _KLsimple_methodGVKe Kprint_referenceYprint_internalsVioMM0;
D Kprint_referenceYprint_internalsVioMM0I (D, D);
D Koutput_print_referenceYprint_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Knew_print_reference_idYprint_internalsVioMM0;
D Knew_print_reference_idYprint_internalsVioMM0I (D, D);
static _KLbyte_stringGVKd_1 K53;
static _KLsignatureAvaluesGVKi K54;
static _KLsimple_object_vectorGVKd_2 K55;
static _KLbyte_stringGVKd_1 K56;
static _KLsignatureAvaluesGVKi K57;
static _KLsimple_object_vectorGVKd_2 K58;
static _KLsimple_object_vectorGVKd_1 K59;
extern _KLgetter_methodGVKi Kcircular_first_passQYprint_internalsVioMM0;
extern _KLsimple_methodGVKe Kcircular_first_passQYprint_internalsVioMM1;
D Kcircular_first_passQYprint_internalsVioMM1I (D);
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLbyte_stringGVKd_20 K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_1 K67;
extern _KLinstance_slot_descriptorGVKe Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG;
extern _KLsealed_generic_functionGVKe Kcircular_first_passQ_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kcircular_first_passQ_setterYprint_internalsVioMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_27 K72;
static _KLsignatureGVKe K73;
static _KLimplementation_classGVKe K74;
static _KLsimple_object_vectorGVKd_8 K75;
extern _KLkeyword_methodGVKe KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0;
D KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K78;
static _KLsimple_object_vectorGVKd_6 K79;
static _KLsimple_object_vectorGVKd_3 K80;
extern _KLinstance_slot_descriptorGVKe Kcircular_referencesYprint_internalsVioHLcircular_print_streamG;
extern _KLinstance_slot_descriptorGVKe Kcircular_next_idYprint_internalsVioHLcircular_print_streamG;
extern _KLsealed_generic_functionGVKe Kcircular_next_idYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kcircular_next_id_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kcircular_next_id_setterYprint_internalsVioMM0;
static _KLpairGVKd K86;
static _KLbyte_stringGVKd_23 K87;
extern _KLgetter_methodGVKi Kcircular_next_idYprint_internalsVioMM0;
static _KLpairGVKd K89;
static _KLbyte_stringGVKd_16 K90;
extern _KLsealed_generic_functionGVKe Kcircular_referencesYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kcircular_references_setterYprint_internalsVio;
static _KLunionGVKe K93;
static _KLsingletonGVKd K94;
extern _KLsetter_methodGVKi Kcircular_references_setterYprint_internalsVioMM0;
static _KLpairGVKd K96;
static _KLbyte_stringGVKd_26 K97;
extern _KLgetter_methodGVKi Kcircular_referencesYprint_internalsVioMM0;
static _KLpairGVKd K99;
static _KLbyte_stringGVKd_19 K100;
static D K105I ();
static _KLbyte_stringGVKd_23 K102;
static _KLunionGVKe K103;
static _KLunionGVKe K104;
static _KLkeyword_signatureAvaluesGVKi K106;
static _KLsimple_object_vectorGVKd_8 K107;
static _KLsymbolGVKd KJstream_lock_;
static _KLbyte_stringGVKd_11 K109;
static _KLsimple_object_vectorGVKd_4 K110;
static _KLsimple_object_vectorGVKd_1 K111;
static _KLbyte_stringGVKd_23 K112;
static _KLbyte_stringGVKd_12 K113;
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM0;
D Kprint_objectYprintVioMM0I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM1;
D Kprint_objectYprintVioMM1I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM2;
D Kprint_objectYprintVioMM2I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM3;
D Kprint_objectYprintVioMM3I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM4;
D Kprint_objectYprintVioMM4I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM5;
D Kprint_objectYprintVioMM5I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM6;
D Kprint_objectYprintVioMM6I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM7;
D Kprint_objectYprintVioMM7I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM8;
D Kprint_objectYprintVioMM8I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM9;
D Kprint_objectYprintVioMM9I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM10;
D Kprint_objectYprintVioMM10I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM11;
D Kprint_objectYprintVioMM11I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM12;
D Kprint_objectYprintVioMM12I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM13;
D Kprint_objectYprintVioMM13I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM14;
D Kprint_objectYprintVioMM14I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM15;
D Kprint_objectYprintVioMM15I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM16;
D Kprint_objectYprintVioMM16I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM17;
D Kprint_objectYprintVioMM17I (D, D);
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM18;
D Kprint_objectYprintVioMM18I (D, D);
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_1;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_2;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_3;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_4;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_5;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_6;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_7;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_8;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_9;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_10;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_11;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_12;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_13;
extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_14;
static _KLpairGVKd K166;
static _KLpairGVKd K167;
static _KLpairGVKd K168;
static _KLpairGVKd K169;
static _KLpairGVKd K170;
static _KLpairGVKd K171;
static _KLpairGVKd K172;
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLpairGVKd K178;
static _KLpairGVKd K179;
static _KLpairGVKd K180;
static _KLpairGVKd K181;
static _KLpairGVKd K182;
static _KLpairGVKd K183;
static _KLpairGVKd K184;
static _KLpairGVKd K185;
static _KLpairGVKd K186;
static _KLsignatureGVKe K187;
static _KLbyte_stringGVKd_12 K188;
static _KLsimple_object_vectorGVKd_2 K189;
static _KLbyte_stringGVKd_15 K190;
static _KLsignatureGVKe K191;
static _KLsimple_object_vectorGVKd_2 K192;
static _KLsignatureGVKe K193;
static _KLsimple_object_vectorGVKd_2 K194;
static _KLsignatureGVKe K195;
static _KLsimple_object_vectorGVKd_2 K196;
static _KLsignatureGVKe K197;
static _KLsimple_object_vectorGVKd_2 K198;
D Kwrite_string_escapedYprint_internalsVioMM0I (D, D);
static D Kfind_next_breakF214I (D, D, D);
D Kwrite_char_maybe_escapeYprint_internalsVioMM0I (D, D, D);
static _KLbyte_stringGVKd_2 K202;
static _KLbyte_stringGVKd_2 K203;
static _KLbyte_stringGVKd_2 K204;
static _KLbyte_stringGVKd_2 K205;
static _KLbyte_stringGVKd_2 K206;
static _KLbyte_stringGVKd_2 K207;
static _KLbyte_stringGVKd_2 K208;
static _KLbyte_stringGVKd_2 K209;
static _KLbyte_stringGVKd_2 K210;
static _KLsymbolGVKd KJbase_;
static _KLbyte_stringGVKd_2 K212;
static _KLbyte_stringGVKd_4 K213;
static _KLsignatureGVKe K215;
static _KLsimple_object_vectorGVKd_2 K216;
static _KLbyte_stringGVKd_2 K217;
static _KLsignatureGVKe K218;
static _KLsimple_object_vectorGVKd_2 K219;
static _KLbyte_stringGVKd_2 K220;
static _KLsignatureGVKe K221;
static _KLsimple_object_vectorGVKd_2 K222;
static _KLsingletonGVKd K223;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF227;
static D Kanonymous_of_print_objectF227I (D);
static _KLbyte_stringGVKd_17 K226;
extern _KLsimple_methodGVKe Kprint_itemsYprint_internalsVioMM0;
D Kprint_itemsYprint_internalsVioMM0I (D, D, D);
static _KLbyte_stringGVKd_2 K230;
static _KLbyte_stringGVKd_3 K231;
static _KLsignatureGVKe K232;
static _KLsimple_object_vectorGVKd_3 K233;
static _KLsignatureGVKe K234;
static _KLsimple_object_vectorGVKd_2 K235;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF240;
static D Kanonymous_of_print_objectF240I (D);
static _KLbyte_stringGVKd_13 K238;
static _KLbyte_stringGVKd_7 K239;
static _KLbyte_stringGVKd_9 K241;
static _KLbyte_stringGVKd_4 K242;
static _KLsignatureGVKe K243;
static _KLsimple_object_vectorGVKd_2 K244;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF249;
static D Kanonymous_of_print_objectF249I (D);
static _KLbyte_stringGVKd_13 K247;
static _KLbyte_stringGVKd_10 K248;
extern _KLsimple_methodGVKe Kprint_listYprint_internalsVioMM0;
D Kprint_listYprint_internalsVioMM0I (D, D);
static _KLbyte_stringGVKd_3 K252;
static _KLbyte_stringGVKd_2 K253;
static _KLsignatureGVKe K254;
static _KLsimple_object_vectorGVKd_2 K255;
static _KLsignatureGVKe K256;
static _KLsimple_object_vectorGVKd_2 K257;
static _KLbyte_stringGVKd_7 K258;
D Kwrite_class_nameYprint_internalsVioMM0I (D, D);
static _KLbyte_stringGVKd_15 K260;
static _KLsignatureGVKe K261;
static _KLsimple_object_vectorGVKd_2 K262;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF266;
static D Kanonymous_of_print_objectF266I (D);
static _KLbyte_stringGVKd_6 K265;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K267;
extern _KLsealed_generic_functionGVKe Kprint_specializerYprint_internalsVio;
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM0;
D Kprint_specializerYprint_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM1;
D Kprint_specializerYprint_internalsVioMM1I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM2;
D Kprint_specializerYprint_internalsVioMM2I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM3;
D Kprint_specializerYprint_internalsVioMM3I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM4;
D Kprint_specializerYprint_internalsVioMM4I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM5;
D Kprint_specializerYprint_internalsVioMM5I (D, D);
static _KLpairGVKd K281;
static _KLpairGVKd K282;
static _KLpairGVKd K283;
static _KLpairGVKd K284;
static _KLpairGVKd K285;
static _KLpairGVKd K286;
static _KLsignatureGVKe K287;
static _KLbyte_stringGVKd_17 K288;
static _KLsimple_object_vectorGVKd_2 K289;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_specializerF292;
static D Kanonymous_of_print_specializerF292I (D);
static _KLbyte_stringGVKd_6 K293;
static _KLsymbolGVKd KJlinear_;
static _KLbyte_stringGVKd_6 K295;
static _KLsignatureGVKe K296;
static _KLsimple_object_vectorGVKd_2 K297;
static _KLbyte_stringGVKd_17 K298;
static _KLbyte_stringGVKd_2 K299;
static _KLsignatureGVKe K300;
static _KLsimple_object_vectorGVKd_2 K301;
static _KLbyte_stringGVKd_9 K302;
static _KLbyte_stringGVKd_1 K303;
static _KLsignatureGVKe K304;
static _KLsimple_object_vectorGVKd_2 K305;
static _KLbyte_stringGVKd_10 K306;
static _KLsignatureGVKe K307;
static _KLsimple_object_vectorGVKd_2 K308;
static _KLsignatureGVKe K309;
static _KLsignatureGVKe K310;
static _KLsimple_object_vectorGVKd_2 K311;
static _KLunionGVKe K312;
static _KLunionGVKe K313;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF316;
static D Kanonymous_of_print_objectF316I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF321;
static D Kanonymous_of_print_objectF321I (D);
static _KLbyte_stringGVKd_6 K319;
static _KLbyte_stringGVKd_1 K320;
extern _KLsimple_methodGVKe Kprint_function_specializersYprint_internalsVioMM0;
D Kprint_function_specializersYprint_internalsVioMM0I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_function_specializersF326;
static D Kanonymous_of_print_function_specializersF326I (D);
static _KLsignatureGVKe K327;
static _KLsimple_object_vectorGVKd_2 K328;
static _KLsignatureGVKe K329;
static _KLsimple_object_vectorGVKd_2 K330;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF333;
static D Kanonymous_of_print_objectF333I (D);
static _KLbyte_stringGVKd_16 K334;
static _KLsignatureGVKe K335;
static _KLsimple_object_vectorGVKd_2 K336;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF341;
static D Kanonymous_of_print_objectF341I (D);
static _KLbyte_stringGVKd_2 K339;
static _KLbyte_stringGVKd_1 K340;
static _KLsignatureGVKe K342;
static _KLsimple_object_vectorGVKd_2 K343;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF347;
static D Kanonymous_of_print_objectF347I (D);
static _KLbyte_stringGVKd_2 K346;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K348;
extern _KLsealed_generic_functionGVKe Kwrite_string_escapedYprint_internalsVio;
extern _KLsimple_methodGVKe Kwrite_string_escapedYprint_internalsVioMM0;
extern _KLsimple_methodGVKe Kwrite_string_escapedYprint_internalsVioMM1;
D Kwrite_string_escapedYprint_internalsVioMM1I (D, D);
static _KLpairGVKd K353;
static _KLpairGVKd K354;
static _KLsignatureGVKe K355;
static _KLbyte_stringGVKd_20 K356;
static _KLsimple_object_vectorGVKd_2 K357;
extern _KLsimple_methodGVKe Kwrite_char_maybe_escapeYprint_internalsVioMM0;
static _KLsignatureGVKe K359;
static _KLsimple_object_vectorGVKd_3 K360;
static _KLunionGVKe K361;
static _KLsingletonGVKd K362;
static _KLsingletonGVKd K363;
static _KLsignatureGVKe K364;
static _KLsimple_object_vectorGVKd_2 K365;
static _KLsignatureGVKe K366;
static _KLsimple_object_vectorGVKd_2 K367;
static _KLsignatureGVKe K368;
static _KLsimple_object_vectorGVKd_2 K369;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF372;
static D Kanonymous_of_print_objectF372I (D);
extern _KLkeyword_methodGVKe KprintYprintVioMM0;
extern _KLkeyword_methodGVKe KprintYprintVioMM1;
D KprintYprintVioMM1I (D, D, D, D, D, D, D, D);
static _KLpairGVKd K376;
static _KLpairGVKd K377;
static _KLkeyword_signatureGVKe K378;
static _KLbyte_stringGVKd_5 K379;
static _KLsimple_object_vectorGVKd_5 K380;
static _KLsymbolGVKd KJlevel_;
static _KLsymbolGVKd KJlength_;
static _KLsymbolGVKd KJcircleQ_;
static _KLsymbolGVKd KJprettyQ_;
static _KLsymbolGVKd KJescapeQ_;
static _KLbyte_stringGVKd_7 K386;
static _KLbyte_stringGVKd_7 K387;
static _KLbyte_stringGVKd_7 K388;
static _KLbyte_stringGVKd_6 K389;
static _KLbyte_stringGVKd_5 K390;
static _KLkeyword_signatureGVKe K391;
static _KLsimple_object_vectorGVKd_10 K392;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_pprint_logical_blockF401;
static D Kanonymous_of_pprint_logical_blockF401I (D);
static _KLunionGVKe K395;
static _KLbyte_stringGVKd_51 K396;
static _KLsymbolGVKd KJcolumn_;
static _KLsymbolGVKd KJper_line_prefix_;
static _KLbyte_stringGVKd_15 K399;
static _KLbyte_stringGVKd_6 K400;
static _KLkeyword_signatureGVKe K402;
static _KLsimple_object_vectorGVKd_10 K403;
static _KLsimple_object_vectorGVKd_5 K404;
static _KLsimple_object_vectorGVKd_5 K405;
static _KLsymbolGVKd KJmandatory_;
static _KLbyte_stringGVKd_9 K407;
static _KLsignatureGVKe K408;
static _KLsimple_object_vectorGVKd_2 K409;
static _KLsignatureGVKe K410;
static _KLsimple_object_vectorGVKd_3 K411;
static _KLsignatureGVKe K412;
static _KLsimple_object_vectorGVKd_4 K413;
static _KLkeyword_signatureGVKe K414;
static _KLsimple_object_vectorGVKd_4 K415;
static _KLsimple_object_vectorGVKd_2 K416;
static _KLsimple_object_vectorGVKd_2 K417;
static _KLsignatureGVKe K418;
extern _KLsealed_generic_functionGVKe Kprint_to_stringYprintVio;
extern _KLkeyword_methodGVKe Kprint_to_stringYprintVioMM0;
D Kprint_to_stringYprintVioMM0I (D, D, D, D, D, D, D);
static _KLpairGVKd K422;
static _KLkeyword_signatureAvaluesGVKi K423;
static _KLbyte_stringGVKd_15 K424;
static _KLunionGVKe K425;
static _KLsymbolGVKd KJcontents_;
static _KLbyte_stringGVKd_8 K427;
static _KLkeyword_signatureAvaluesGVKi K428;
static _KLsimple_object_vectorGVKd_10 K429;
static _KLsimple_object_vectorGVKd_5 K430;
static _KLimplementation_classGVKe K431;
static _KLsimple_object_vectorGVKd_3 K432;
extern _KLkeyword_methodGVKe KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0;
D KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K435;
static _KLsimple_object_vectorGVKd_6 K436;
static _KLkeyword_signatureAvaluesGVKi K437;
static _KLsimple_object_vectorGVKd_2 K438;
static _KLsimple_object_vectorGVKd_1 K439;
extern _KLinstance_slot_descriptorGVKe Kprint_reference_objectYprint_internalsVioHLprint_referenceG;
extern _KLinstance_slot_descriptorGVKe Kprint_reference_idYprint_internalsVioHLprint_referenceG;
extern _KLinstance_slot_descriptorGVKe Kprint_reference_countYprint_internalsVioHLprint_referenceG;
extern _KLsealed_generic_functionGVKe Kprint_reference_countYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kprint_reference_count_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kprint_reference_count_setterYprint_internalsVioMM0;
static _KLpairGVKd K446;
static _KLbyte_stringGVKd_28 K447;
extern _KLgetter_methodGVKi Kprint_reference_countYprint_internalsVioMM0;
static _KLpairGVKd K449;
static _KLbyte_stringGVKd_21 K450;
extern _KLsealed_generic_functionGVKe Kprint_reference_idYprint_internalsVio;
extern _KLsealed_generic_functionGVKe Kprint_reference_id_setterYprint_internalsVio;
extern _KLsetter_methodGVKi Kprint_reference_id_setterYprint_internalsVioMM0;
static _KLpairGVKd K454;
static _KLbyte_stringGVKd_25 K455;
extern _KLgetter_methodGVKi Kprint_reference_idYprint_internalsVioMM0;
static _KLpairGVKd K457;
static _KLbyte_stringGVKd_18 K458;
extern _KLsealed_generic_functionGVKe Kprint_reference_objectYprint_internalsVio;
extern _KLgetter_methodGVKi Kprint_reference_objectYprint_internalsVioMM0;
static _KLpairGVKd K461;
static _KLbyte_stringGVKd_22 K462;
static _KLbyte_stringGVKd_17 K463;
extern _KLkeyword_methodGVKe Kdo_printing_objectYprintVioMM0;
static _KLkeyword_signatureGVKe K465;
static _KLsimple_object_vectorGVKd_4 K466;
static _KLsymbolGVKd KJtypeQ_;
static _KLsymbolGVKd KJidentityQ_;
static _KLbyte_stringGVKd_9 K469;
static _KLbyte_stringGVKd_5 K470;
static _KLsimple_object_vectorGVKd_3 K471;
static _KLsimple_object_vectorGVKd_2 K472;
extern _KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM5;
D Kstream_at_endQYstreams_protocolVcommon_dylanMioM5I (D);
extern _KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM2;
D Kstream_openQYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM2;
D Kdiscard_outputYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2;
D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2I (D);
extern _KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM2;
D Kforce_outputYstreams_protocolVcommon_dylanMioM2I (D, D, D);
extern _KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM5;
D KwriteYstreams_protocolVcommon_dylanMioM5I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM5;
D Kwrite_elementYstreams_protocolVcommon_dylanMioM5I (D, D);
static _KLsignatureGVKe K494;
static _KLsimple_object_vectorGVKd_2 K495;
static _KLkeyword_signatureGVKe K496;
static _KLsimple_object_vectorGVKd_2 K497;
static _KLsymbolGVKd KJsynchronizeQ_;
static _KLbyte_stringGVKd_12 K499;
static _KLkeyword_signatureGVKe K500;
static _KLsimple_object_vectorGVKd_2 K501;
static _KLsimple_object_vectorGVKd_1 K502;
static _KLsignatureAvaluesGVKi K503;

/* Indirection variables */

static D IKJbody_ = &KJbody_;
static D IKJprefix_ = &KJprefix_;
static D IKJsuffix_ = &KJsuffix_;
static D IKJinner_stream_ = &KJinner_stream_;
static D IKJstream_lock_ = &KJstream_lock_;
static D IKJbase_ = &KJbase_;
static D IKJlinear_ = &KJlinear_;
static D IKJlevel_ = &KJlevel_;
static D IKJlength_ = &KJlength_;
static D IKJcircleQ_ = &KJcircleQ_;
static D IKJprettyQ_ = &KJprettyQ_;
static D IKJescapeQ_ = &KJescapeQ_;
static D IKJcolumn_ = &KJcolumn_;
static D IKJper_line_prefix_ = &KJper_line_prefix_;
static D IKJmandatory_ = &KJmandatory_;
static D IKJcontents_ = &KJcontents_;
static D IKJtypeQ_ = &KJtypeQ_;
static D IKJidentityQ_ = &KJidentityQ_;
static D IKJsynchronizeQ_ = &KJsynchronizeQ_;

/* Variables */

D do_printing_objectYprintVio = &Kdo_printing_objectYprintVioMM0;
D Tdefault_lengthTYprint_internalsVio = &KPfalseVKi;
D Tprint_lengthTYprintVio = &KPunboundVKi;
D Tdefault_levelTYprint_internalsVio = &KPfalseVKi;
D Tprint_levelTYprintVio = &KPunboundVKi;
D Tdefault_circleQTYprint_internalsVio = &KPfalseVKi;
D Tprint_circleQTYprintVio = &KPunboundVKi;
D Tdefault_prettyQTYprint_internalsVio = &KPfalseVKi;
D Tprint_prettyQTYprintVio = &KPunboundVKi;
D Tdefault_escapeQTYprint_internalsVio = &KPtrueVKi;
D Tprint_escapeQTYprintVio = &KPunboundVKi;
D Tprint_depthTYprint_internalsVio = &KPunboundVKi;
D Lcircular_print_streamGYprint_internalsVio = &KLcircular_print_streamGYprint_internalsVio;
D Lprint_referenceGYprint_internalsVio = &KLprint_referenceGYprint_internalsVio;
D printYprintVio = &KprintYprintVio;
D print_objectYprintVio = &Kprint_objectYprintVio;
D print_to_stringYprintVio = &Kprint_to_stringYprintVio;
D Dprint_level_exceeded_stringYprint_internalsVio = &K56;
D Dcircular_id_prestringYprint_internalsVio = &K56;
D Dcircular_id_poststringYprint_internalsVio = &K56;

/* Objects */

_KLclassGVKd KLprint_referenceGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K463,
  &K431,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLprint_referenceGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K431,
  (D) 1,
  13,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Knew_lineYstreamsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K418,
  &Knew_lineYstreamsVioMM2I
};

_KLkeyword_methodGVKe Kwrite_lineYstreamsVioMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K414,
  &key_mep_5,
  &Kwrite_lineYstreamsVioMM4I,
  &K415
};

_KLmethod_domainGVKe Kpprint_tabYpprintVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kpprint_tabYpprintVioMM1
};

_KLsimple_methodGVKe Kpprint_tabYpprintVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K412,
  &Kpprint_tabYpprintVioMM1I
};

_KLmethod_domainGVKe Kpprint_indentYpprintVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kpprint_indentYpprintVioMM1
};

_KLsimple_methodGVKe Kpprint_indentYpprintVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K410,
  &Kpprint_indentYpprintVioMM1I
};

_KLmethod_domainGVKe Kpprint_newlineYpprintVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kpprint_newlineYpprintVioMM1
};

_KLsimple_methodGVKe Kpprint_newlineYpprintVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K408,
  &Kpprint_newlineYpprintVioMM1I
};

_KLmethod_domainGVKe Kpprint_logical_blockYpprintVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kpprint_logical_blockYpprintVioMM2
};

_KLkeyword_methodGVKe Kpprint_logical_blockYpprintVioMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K402,
  &key_mep_7,
  &Kpprint_logical_blockYpprintVioMM2I,
  &K403
};

_KLsealed_generic_functionGVKe KprintYprintVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K378,
  (D) 1,
  &K379,
  &K376,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe Kprint_objectYprintVio = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K187,
  (D) 1,
  &K188,
  &K166,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_moduleYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_14,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_do_printing_objectF39 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_do_printing_objectF39I,
  (D) 1
};

static _KLsymbolGVKd KJbody_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K38
};

static _KLsymbolGVKd KJprefix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K37
};

static _KLbyte_stringGVKd_1 K33 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "{"
};

static _KLsymbolGVKd KJsuffix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K36
};

static _KLbyte_stringGVKd_1 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "}"
};

static _KLbyte_stringGVKd_6 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "suffix"
};

static _KLbyte_stringGVKd_6 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "prefix"
};

static _KLbyte_stringGVKd_4 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "body"
};

static _KLbyte_stringGVKd_1 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  " "
};

static _KLsymbolGVKd KJinner_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K113
};

_KLclassGVKd KLcircular_print_streamGYprint_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K112,
  &K74,
  (D) 1,
  &Kprint_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLcircular_print_streamGYprint_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K74,
  (D) 1,
  33,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kstart_circle_printingYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K73,
  &Kstart_circle_printingYprint_internalsVioMM0I
};

_KLsealed_generic_functionGVKe Kcircular_first_passQYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K65,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kprint_referenceYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &Kprint_referenceYprint_internalsVioMM0I
};

_KLsimple_methodGVKe Knew_print_reference_idYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &Knew_print_reference_idYprint_internalsVioMM0I
};

static _KLbyte_stringGVKd_1 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "="
};

static _KLsignatureAvaluesGVKi K54 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K55,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLprint_referenceGYprint_internalsVio
};

static _KLbyte_stringGVKd_1 K56 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "#"
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K58,
  &K59
};

static _KLsimple_object_vectorGVKd_2 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLcircular_print_streamGYprint_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLprint_referenceGYprint_internalsVio
};

_KLgetter_methodGVKi Kcircular_first_passQYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG
};

_KLsimple_methodGVKe Kcircular_first_passQYprint_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K66,
  &Kcircular_first_passQYprint_internalsVioMM1I
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_first_passQYprint_internalsVioMM0,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_first_passQYprint_internalsVioMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "circular-first-pass?"
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K67,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLinstance_slot_descriptorGVKe Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPtrueVKi,
  &KLcircular_print_streamGYprint_internalsVio,
  &KPfalseVKi,
  &Kcircular_first_passQYprint_internalsVio,
  &Kcircular_first_passQ_setterYprint_internalsVio,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe Kcircular_first_passQ_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kcircular_first_passQ_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_first_passQ_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "circular-first-pass?-setter"
};

static _KLsignatureGVKe K73 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K58
};

static _KLimplementation_classGVKe K74 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433761,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLcircular_print_streamGYprint_internalsVioW,
  &KPfalseVKi,
  &K75,
  (D) -3,
  &KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0,
  &K78,
  &K79,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K80,
  &K75,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_8 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &Kouter_streamYstreamsVioHLbasic_streamG,
  &Kprivate_stream_element_type_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_direction_valueYstreams_internalsVioHLbasic_streamG,
  &Kprivate_stream_lock_valueYstreams_internalsVioHLbasic_streamG,
  &KPinner_streamYstreams_internalsVioHLwrapper_streamG,
  &Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG,
  &Kcircular_referencesYprint_internalsVioHLcircular_print_streamG,
  &Kcircular_next_idYprint_internalsVioHLcircular_print_streamG
};

_KLkeyword_methodGVKe KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K106,
  &key_mep_2,
  &KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0I,
  &K107
};

static _KLsimple_object_vectorGVKd_1 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLwrapper_streamGYstreamsVio
};

static _KLsimple_object_vectorGVKd_6 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbasic_streamGYstreamsVio,
  &KLwrapper_streamGYstreamsVio,
  &KLcircular_print_streamGYprint_internalsVio
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kcircular_first_passQYprint_internalsVioHLcircular_print_streamG,
  &Kcircular_referencesYprint_internalsVioHLcircular_print_streamG,
  &Kcircular_next_idYprint_internalsVioHLcircular_print_streamG
};

_KLinstance_slot_descriptorGVKe Kcircular_referencesYprint_internalsVioHLcircular_print_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLcircular_print_streamGYprint_internalsVio,
  &KPfalseVKi,
  &Kcircular_referencesYprint_internalsVio,
  &Kcircular_references_setterYprint_internalsVio,
  &K93
};

_KLinstance_slot_descriptorGVKe Kcircular_next_idYprint_internalsVioHLcircular_print_streamG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLcircular_print_streamGYprint_internalsVio,
  &KPfalseVKi,
  &Kcircular_next_idYprint_internalsVio,
  &Kcircular_next_id_setterYprint_internalsVio,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kcircular_next_idYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K90,
  &K89,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcircular_next_id_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K87,
  &K86,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kcircular_next_id_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kcircular_next_idYprint_internalsVioHLcircular_print_streamG
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_next_id_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "circular-next-id-setter"
};

_KLgetter_methodGVKi Kcircular_next_idYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcircular_next_idYprint_internalsVioHLcircular_print_streamG
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_next_idYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K90 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "circular-next-id"
};

_KLsealed_generic_functionGVKe Kcircular_referencesYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K100,
  &K99,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcircular_references_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K97,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K93 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K94,
  &KLobject_tableGVKd
};

static _KLsingletonGVKd K94 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsetter_methodGVKi Kcircular_references_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kcircular_referencesYprint_internalsVioHLcircular_print_streamG
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_references_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K97 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "circular-references-setter"
};

_KLgetter_methodGVKi Kcircular_referencesYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcircular_referencesYprint_internalsVioHLcircular_print_streamG
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Kcircular_referencesYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "circular-references"
};

static _KLbyte_stringGVKd_23 K102 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLunionGVKe K103 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K94,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K104 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K94,
  &KLlockGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K106 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K110,
  &KDsignature_LobjectG_typesVKi,
  &K111
};

static _KLsimple_object_vectorGVKd_8 K107 = {
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
  &K109
};

static _KLbyte_stringGVKd_11 K109 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "stream-lock"
};

static _KLsimple_object_vectorGVKd_4 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJouter_stream_,
  &KJelement_type_,
  &KJstream_lock_,
  &KJinner_stream_
};

static _KLsimple_object_vectorGVKd_1 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLcircular_print_streamGYprint_internalsVio
};

static _KLbyte_stringGVKd_23 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<circular-print-stream>"
};

static _KLbyte_stringGVKd_12 K113 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "inner-stream"
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K187,
  &Kprint_objectYprintVioMM0I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K368,
  &Kprint_objectYprintVioMM1I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K366,
  &Kprint_objectYprintVioMM2I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K254,
  &Kprint_objectYprintVioMM3I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K342,
  &Kprint_objectYprintVioMM4I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K335,
  &Kprint_objectYprintVioMM5I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K329,
  &Kprint_objectYprintVioMM6I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K310,
  &Kprint_objectYprintVioMM7I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K261,
  &Kprint_objectYprintVioMM8I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K256,
  &Kprint_objectYprintVioMM9I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K243,
  &Kprint_objectYprintVioMM10I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K234,
  &Kprint_objectYprintVioMM11I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K221,
  &Kprint_objectYprintVioMM12I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K218,
  &Kprint_objectYprintVioMM13I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K215,
  &Kprint_objectYprintVioMM14I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K197,
  &Kprint_objectYprintVioMM15I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K195,
  &Kprint_objectYprintVioMM16I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K193,
  &Kprint_objectYprintVioMM17I
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K191,
  &Kprint_objectYprintVioMM18I
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_0,
  &Kprint_objectYprintVioMM18
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_1,
  &Kprint_objectYprintVioMM17
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_2,
  &Kprint_objectYprintVioMM16
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_3,
  &Kprint_objectYprintVioMM15
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_4,
  &Kprint_objectYprintVioMM14
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_5,
  &Kprint_objectYprintVioMM13
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_6,
  &Kprint_objectYprintVioMM12
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_7,
  &Kprint_objectYprintVioMM8
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_8,
  &Kprint_objectYprintVioMM7
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_9,
  &Kprint_objectYprintVioMM6
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_10,
  &Kprint_objectYprintVioMM5
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_11,
  &Kprint_objectYprintVioMM4
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_12,
  &Kprint_objectYprintVioMM3
};

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &Kprint_objectYprintVioRD_ioRD_13,
  &Kprint_objectYprintVioMM1
};

static _KLpairGVKd K166 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM0,
  &K167
};

static _KLpairGVKd K167 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM1,
  &K168
};

static _KLpairGVKd K168 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM2,
  &K169
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM3,
  &K170
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM4,
  &K171
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM5,
  &K172
};

static _KLpairGVKd K172 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM6,
  &K173
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM7,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM8,
  &K175
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM9,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM10,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM11,
  &K178
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM12,
  &K179
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM13,
  &K180
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM14,
  &K181
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM15,
  &K182
};

static _KLpairGVKd K182 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM16,
  &K183
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM17,
  &K184
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM18,
  &K185
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM19,
  &K186
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_objectYprintVioMM20,
  &KPempty_listVKi
};

static _KLsignatureGVKe K187 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K189
};

static _KLbyte_stringGVKd_12 K188 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "print-object"
};

static _KLsimple_object_vectorGVKd_2 K189 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_15 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLsignatureGVKe K191 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 46137353,
  &K192
};

static _KLsimple_object_vectorGVKd_2 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K193 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K194
};

static _KLsimple_object_vectorGVKd_2 K194 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfloatGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K195 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K196
};

static _KLsimple_object_vectorGVKd_2 K196 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K197 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K198
};

static _KLsimple_object_vectorGVKd_2 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_2 K202 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\0"
};

static _KLbyte_stringGVKd_2 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\a"
};

static _KLbyte_stringGVKd_2 K204 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\b"
};

static _KLbyte_stringGVKd_2 K205 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\t"
};

static _KLbyte_stringGVKd_2 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\f"
};

static _KLbyte_stringGVKd_2 K207 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\r"
};

static _KLbyte_stringGVKd_2 K208 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\n"
};

static _KLbyte_stringGVKd_2 K209 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\e"
};

static _KLbyte_stringGVKd_2 K210 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\<"
};

static _KLsymbolGVKd KJbase_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K213
};

static _KLbyte_stringGVKd_2 K212 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "\\\\"
};

static _KLbyte_stringGVKd_4 K213 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "base"
};

static _KLsignatureGVKe K215 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K216
};

static _KLsimple_object_vectorGVKd_2 K216 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsymbolGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_2 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#f"
};

static _KLsignatureGVKe K218 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K219
};

static _KLsimple_object_vectorGVKd_2 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K94,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_2 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#t"
};

static _KLsignatureGVKe K221 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K222
};

static _KLsimple_object_vectorGVKd_2 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K223,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsingletonGVKd K223 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF227 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF227I,
  (D) 1
};

static _KLbyte_stringGVKd_17 K226 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "{stretchy vector "
};

_KLsimple_methodGVKe Kprint_itemsYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K232,
  &Kprint_itemsYprint_internalsVioMM0I
};

static _KLbyte_stringGVKd_2 K230 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ", "
};

static _KLbyte_stringGVKd_3 K231 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "..."
};

static _KLsignatureGVKe K232 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K233
};

static _KLsimple_object_vectorGVKd_3 K233 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLcollectionGVKd,
  &KLfunctionGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K234 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K235
};

static _KLsimple_object_vectorGVKd_2 K235 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_vectorGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF240 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF240I,
  (D) 1
};

static _KLbyte_stringGVKd_13 K238 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "{empty range}"
};

static _KLbyte_stringGVKd_7 K239 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "{range "
};

static _KLbyte_stringGVKd_9 K241 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  " through "
};

static _KLbyte_stringGVKd_4 K242 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  " by "
};

static _KLsignatureGVKe K243 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K244
};

static _KLsimple_object_vectorGVKd_2 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrangeGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF249 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF249I,
  (D) 1
};

static _KLbyte_stringGVKd_13 K247 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "{empty deque}"
};

static _KLbyte_stringGVKd_10 K248 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "{deque of "
};

_KLsimple_methodGVKe Kprint_listYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K254,
  &Kprint_listYprint_internalsVioMM0I
};

static _KLbyte_stringGVKd_3 K252 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  " . "
};

static _KLbyte_stringGVKd_2 K253 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ". "
};

static _KLsignatureGVKe K254 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K255
};

static _KLsimple_object_vectorGVKd_2 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K256 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K257
};

static _KLsimple_object_vectorGVKd_2 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdequeGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_7 K258 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "{class "
};

static _KLbyte_stringGVKd_15 K260 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<unnamed-class>"
};

static _KLsignatureGVKe K261 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K262
};

static _KLsimple_object_vectorGVKd_2 K262 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF266 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K309,
  &Kanonymous_of_print_objectF266I,
  (D) 1
};

static _KLbyte_stringGVKd_6 K265 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "{Type "
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K267 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_specializerYprint_internalsVio
};

_KLsealed_generic_functionGVKe Kprint_specializerYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K287,
  (D) 9,
  &K288,
  &K281,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K287,
  &Kprint_specializerYprint_internalsVioMM0I
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K261,
  &Kprint_specializerYprint_internalsVioMM1I
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K307,
  &Kprint_specializerYprint_internalsVioMM2I
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K304,
  &Kprint_specializerYprint_internalsVioMM3I
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K300,
  &Kprint_specializerYprint_internalsVioMM4I
};

_KLsimple_methodGVKe Kprint_specializerYprint_internalsVioMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K296,
  &Kprint_specializerYprint_internalsVioMM5I
};

static _KLpairGVKd K281 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM0,
  &K282
};

static _KLpairGVKd K282 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM1,
  &K283
};

static _KLpairGVKd K283 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM2,
  &K284
};

static _KLpairGVKd K284 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM3,
  &K285
};

static _KLpairGVKd K285 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM4,
  &K286
};

static _KLpairGVKd K286 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYprint_internalsVioMM5,
  &KPempty_listVKi
};

static _KLsignatureGVKe K287 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K289
};

static _KLbyte_stringGVKd_17 K288 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "print-specializer"
};

static _KLsimple_object_vectorGVKd_2 K289 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_specializerF292 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_specializerF292I,
  (D) 1
};

static _KLbyte_stringGVKd_6 K293 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "Union "
};

static _KLsymbolGVKd KJlinear_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K295
};

static _KLbyte_stringGVKd_6 K295 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "linear"
};

static _KLsignatureGVKe K296 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K297
};

static _KLsimple_object_vectorGVKd_2 K297 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunionGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_17 K298 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "{Limited integer "
};

static _KLbyte_stringGVKd_2 K299 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ".."
};

static _KLsignatureGVKe K300 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K301
};

static _KLsimple_object_vectorGVKd_2 K301 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_integerGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_9 K302 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "subclass("
};

static _KLbyte_stringGVKd_1 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  ")"
};

static _KLsignatureGVKe K304 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K305
};

static _KLsimple_object_vectorGVKd_2 K305 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsubclassGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLbyte_stringGVKd_10 K306 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "singleton("
};

static _KLsignatureGVKe K307 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K308
};

static _KLsimple_object_vectorGVKd_2 K308 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingletonGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K309 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K67
};

static _KLsignatureGVKe K310 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K311
};

static _KLsimple_object_vectorGVKd_2 K311 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K312,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLunionGVKe K312 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K313,
  &KLunionGVKe
};

static _KLunionGVKe K313 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLsingletonGVKd,
  &KLlimited_integerGVKe
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF316 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF316I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF321 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF321I,
  (D) 1
};

static _KLbyte_stringGVKd_6 K319 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "method"
};

static _KLbyte_stringGVKd_1 K320 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "("
};

_KLsimple_methodGVKe Kprint_function_specializersYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K327,
  &Kprint_function_specializersYprint_internalsVioMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_function_specializersF326 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_function_specializersF326I,
  (D) 1
};

static _KLsignatureGVKe K327 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K328
};

static _KLsimple_object_vectorGVKd_2 K328 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K329 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K330
};

static _KLsimple_object_vectorGVKd_2 K330 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethodGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF333 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF333I,
  (D) 1
};

static _KLbyte_stringGVKd_16 K334 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "generic function"
};

static _KLsignatureGVKe K335 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K336
};

static _KLsimple_object_vectorGVKd_2 K336 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF341 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF341I,
  (D) 1
};

static _KLbyte_stringGVKd_2 K339 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#["
};

static _KLbyte_stringGVKd_1 K340 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "]"
};

static _KLsignatureGVKe K342 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K343
};

static _KLsimple_object_vectorGVKd_2 K343 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF347 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF347I,
  (D) 1
};

static _KLbyte_stringGVKd_2 K346 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#("
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K348 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kwrite_string_escapedYprint_internalsVio
};

_KLsealed_generic_functionGVKe Kwrite_string_escapedYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K355,
  (D) 5,
  &K356,
  &K353,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kwrite_string_escapedYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K364,
  &Kwrite_string_escapedYprint_internalsVioMM0I
};

_KLsimple_methodGVKe Kwrite_string_escapedYprint_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K355,
  &Kwrite_string_escapedYprint_internalsVioMM1I
};

static _KLpairGVKd K353 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_string_escapedYprint_internalsVioMM0,
  &K354
};

static _KLpairGVKd K354 = {
  &KLpairGVKdW /* wrapper */,
  &Kwrite_string_escapedYprint_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K355 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K357
};

static _KLbyte_stringGVKd_20 K356 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "write-string-escaped"
};

static _KLsimple_object_vectorGVKd_2 K357 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLstringGVKd
};

_KLsimple_methodGVKe Kwrite_char_maybe_escapeYprint_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K359,
  &Kwrite_char_maybe_escapeYprint_internalsVioMM0I
};

static _KLsignatureGVKe K359 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K360
};

static _KLsimple_object_vectorGVKd_3 K360 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLcharacterGVKd,
  &K361
};

static _KLunionGVKe K361 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K362,
  &K363
};

static _KLsingletonGVKd K362 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  C('\'')
};

static _KLsingletonGVKd K363 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  C('\"')
};

static _KLsignatureGVKe K364 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K365
};

static _KLsimple_object_vectorGVKd_2 K365 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLbyte_stringGVKd
};

static _KLsignatureGVKe K366 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K367
};

static _KLsimple_object_vectorGVKd_2 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstringGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K368 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K369
};

static _KLsimple_object_vectorGVKd_2 K369 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcharacterGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF372 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF372I,
  (D) 1
};

_KLkeyword_methodGVKe KprintYprintVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K378,
  &key_mep_8,
  &KprintYprintVioMM0I,
  &K392
};

_KLkeyword_methodGVKe KprintYprintVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K391,
  &key_mep_8,
  &KprintYprintVioMM1I,
  &K392
};

static _KLpairGVKd K376 = {
  &KLpairGVKdW /* wrapper */,
  &KprintYprintVioMM0,
  &K377
};

static _KLpairGVKd K377 = {
  &KLpairGVKdW /* wrapper */,
  &KprintYprintVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K378 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K189,
  &K380,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_5 K379 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "print"
};

static _KLsimple_object_vectorGVKd_5 K380 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJlevel_,
  &KJlength_,
  &KJcircleQ_,
  &KJprettyQ_,
  &KJescapeQ_
};

static _KLsymbolGVKd KJlevel_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K390
};

static _KLsymbolGVKd KJlength_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K389
};

static _KLsymbolGVKd KJcircleQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K388
};

static _KLsymbolGVKd KJprettyQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K387
};

static _KLsymbolGVKd KJescapeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K386
};

static _KLbyte_stringGVKd_7 K386 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "escape?"
};

static _KLbyte_stringGVKd_7 K387 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "pretty?"
};

static _KLbyte_stringGVKd_7 K388 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "circle?"
};

static _KLbyte_stringGVKd_6 K389 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "length"
};

static _KLbyte_stringGVKd_5 K390 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "level"
};

static _KLkeyword_signatureGVKe K391 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K58,
  &K380,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_10 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJlevel_,
  &KPunboundVKi,
  &KJlength_,
  &KPunboundVKi,
  &KJcircleQ_,
  &KPunboundVKi,
  &KJprettyQ_,
  &KPunboundVKi,
  &KJescapeQ_,
  &KPunboundVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_pprint_logical_blockF401 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_pprint_logical_blockF401I,
  (D) 1
};

static _KLunionGVKe K395 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K94,
  &KLbyte_stringGVKd
};

static _KLbyte_stringGVKd_51 K396 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Can\'t specify both a prefix: and a per-line-prefix:"
};

static _KLsymbolGVKd KJcolumn_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K400
};

static _KLsymbolGVKd KJper_line_prefix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K399
};

static _KLbyte_stringGVKd_15 K399 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "per-line-prefix"
};

static _KLbyte_stringGVKd_6 K400 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "column"
};

static _KLkeyword_signatureGVKe K402 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K111,
  &K404,
  &K405
};

static _KLsimple_object_vectorGVKd_10 K403 = {
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

static _KLsimple_object_vectorGVKd_5 K404 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJcolumn_,
  &KJprefix_,
  &KJper_line_prefix_,
  &KJbody_,
  &KJsuffix_
};

static _KLsimple_object_vectorGVKd_5 K405 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLintegerGVKd,
  &K395,
  &K395,
  &KLfunctionGVKd,
  &K395
};

static _KLsymbolGVKd KJmandatory_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K407
};

static _KLbyte_stringGVKd_9 K407 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "mandatory"
};

static _KLsignatureGVKe K408 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K409
};

static _KLsimple_object_vectorGVKd_2 K409 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpretty_newline_kindGYprint_internalsVio,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K410 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K411
};

static _KLsimple_object_vectorGVKd_3 K411 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLindentation_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLsignatureGVKe K412 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K413
};

static _KLsimple_object_vectorGVKd_4 K413 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLtab_kindGYprint_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

static _KLkeyword_signatureGVKe K414 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K416,
  &K417,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K416 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_2 K417 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsignatureGVKe K418 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K111
};

_KLsealed_generic_functionGVKe Kprint_to_stringYprintVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K423,
  &KPfalseVKi,
  &K424,
  &K422,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kprint_to_stringYprintVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K428,
  &key_mep_7,
  &Kprint_to_stringYprintVioMM0I,
  &K429
};

static _KLpairGVKd K422 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_to_stringYprintVioMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K423 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &KDsignature_LobjectG_typesVKi,
  &K380,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_15 K424 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "print-to-string"
};

static _KLunionGVKe K425 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K94,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJcontents_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K427
};

static _KLbyte_stringGVKd_8 K427 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "contents"
};

static _KLkeyword_signatureAvaluesGVKi K428 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &KDsignature_LobjectG_typesVKi,
  &K380,
  &K430,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_10 K429 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJlevel_,
  &KPfalseVKi,
  &KJlength_,
  &KPfalseVKi,
  &KJcircleQ_,
  &KPfalseVKi,
  &KJprettyQ_,
  &KPfalseVKi,
  &KJescapeQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_5 K430 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &K425,
  &K425,
  &KLbooleanGVKd,
  &KLbooleanGVKd,
  &KLbooleanGVKd
};

static _KLimplementation_classGVKe K431 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLprint_referenceGYprint_internalsVio,
  &KLprint_referenceGYprint_internalsVioW,
  &KPfalseVKi,
  &K432,
  (D) -3,
  &KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0,
  &K435,
  &K436,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K432,
  &K432,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kprint_reference_objectYprint_internalsVioHLprint_referenceG,
  &Kprint_reference_idYprint_internalsVioHLprint_referenceG,
  &Kprint_reference_countYprint_internalsVioHLprint_referenceG
};

_KLkeyword_methodGVKe KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K437,
  &key_mep_2,
  &KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0I,
  &K438
};

static _KLsimple_object_vectorGVKd_1 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K436 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLprint_referenceGYprint_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K437 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K439,
  &KDsignature_LobjectG_typesVKi,
  &K59
};

static _KLsimple_object_vectorGVKd_2 K438 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJobject_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K439 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJobject_
};

_KLinstance_slot_descriptorGVKe Kprint_reference_objectYprint_internalsVioHLprint_referenceG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLprint_referenceGYprint_internalsVio,
  &KJobject_,
  &Kprint_reference_objectYprint_internalsVio,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kprint_reference_idYprint_internalsVioHLprint_referenceG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLprint_referenceGYprint_internalsVio,
  &KPfalseVKi,
  &Kprint_reference_idYprint_internalsVio,
  &Kprint_reference_id_setterYprint_internalsVio,
  &K395
};

_KLinstance_slot_descriptorGVKe Kprint_reference_countYprint_internalsVioHLprint_referenceG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLprint_referenceGYprint_internalsVio,
  &KPfalseVKi,
  &Kprint_reference_countYprint_internalsVio,
  &Kprint_reference_count_setterYprint_internalsVio,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kprint_reference_countYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K450,
  &K449,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kprint_reference_count_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K447,
  &K446,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kprint_reference_count_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kprint_reference_countYprint_internalsVioHLprint_referenceG
};

static _KLpairGVKd K446 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_reference_count_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K447 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "print-reference-count-setter"
};

_KLgetter_methodGVKi Kprint_reference_countYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprint_reference_countYprint_internalsVioHLprint_referenceG
};

static _KLpairGVKd K449 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_reference_countYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K450 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "print-reference-count"
};

_KLsealed_generic_functionGVKe Kprint_reference_idYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K458,
  &K457,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kprint_reference_id_setterYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K455,
  &K454,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kprint_reference_id_setterYprint_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kprint_reference_idYprint_internalsVioHLprint_referenceG
};

static _KLpairGVKd K454 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_reference_id_setterYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K455 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "print-reference-id-setter"
};

_KLgetter_methodGVKi Kprint_reference_idYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprint_reference_idYprint_internalsVioHLprint_referenceG
};

static _KLpairGVKd K457 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_reference_idYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K458 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "print-reference-id"
};

_KLsealed_generic_functionGVKe Kprint_reference_objectYprint_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K462,
  &K461,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kprint_reference_objectYprint_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kprint_reference_objectYprint_internalsVioHLprint_referenceG
};

static _KLpairGVKd K461 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_reference_objectYprint_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K462 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "print-reference-object"
};

static _KLbyte_stringGVKd_17 K463 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<print-reference>"
};

_KLkeyword_methodGVKe Kdo_printing_objectYprintVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K465,
  &key_mep_6,
  &Kdo_printing_objectYprintVioMM0I,
  &K466
};

static _KLkeyword_signatureGVKe K465 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205197,
  &K471,
  &K472,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K466 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtypeQ_,
  &KPtrueVKi,
  &KJidentityQ_,
  &KPtrueVKi
};

static _KLsymbolGVKd KJtypeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K470
};

static _KLsymbolGVKd KJidentityQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K469
};

static _KLbyte_stringGVKd_9 K469 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "identity?"
};

static _KLbyte_stringGVKd_5 K470 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "type?"
};

static _KLsimple_object_vectorGVKd_3 K471 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_2 K472 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtypeQ_,
  &KJidentityQ_
};

_KLsimple_methodGVKe Kstream_at_endQYstreams_protocolVcommon_dylanMioM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K503,
  &Kstream_at_endQYstreams_protocolVcommon_dylanMioM5I
};

_KLsimple_methodGVKe Kstream_openQYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K503,
  &Kstream_openQYstreams_protocolVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Kdiscard_outputYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K418,
  &Kdiscard_outputYstreams_protocolVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K418,
  &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2I
};

_KLkeyword_methodGVKe Kforce_outputYstreams_protocolVcommon_dylanMioM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K500,
  &key_mep_3,
  &Kforce_outputYstreams_protocolVcommon_dylanMioM2I,
  &K501
};

_KLkeyword_methodGVKe KwriteYstreams_protocolVcommon_dylanMioM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K496,
  &key_mep_5,
  &KwriteYstreams_protocolVcommon_dylanMioM5I,
  &K415
};

_KLsimple_methodGVKe Kwrite_elementYstreams_protocolVcommon_dylanMioM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K494,
  &Kwrite_elementYstreams_protocolVcommon_dylanMioM5I
};

static _KLsignatureGVKe K494 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K495
};

static _KLsimple_object_vectorGVKd_2 K495 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K496 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K497,
  &K417,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K497 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcircular_print_streamGYprint_internalsVio,
  &KLsequenceGVKd
};

static _KLsymbolGVKd KJsynchronizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K499
};

static _KLbyte_stringGVKd_12 K499 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "synchronize?"
};

static _KLkeyword_signatureGVKe K500 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K111,
  &K502,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K501 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsynchronizeQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K502 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsynchronizeQ_
};

static _KLsignatureAvaluesGVKi K503 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K111,
  &KDsignature_LbooleanG_typesVKi
};

/* Code */

D Knew_lineYstreamsVioMM2I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1048
  // /opt/opendylan-2013.1/sources/io/print.dylan:1050
  T2 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1050
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1050
    T8 = SLOT_VALUE_INITD(stream_, 5);
    T3 = T8;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1050
  // /opt/opendylan-2013.1/sources/io/print.dylan:1050
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1050
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1051
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1051
    CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
    T5 = CONGRUENT_CALL1(T4);
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1050
  // /opt/opendylan-2013.1/sources/io/print.dylan:1048
  MV_SET_COUNT(0);
  return(T7);
}

D Kwrite_lineYstreamsVioMM4I (D stream_, D string_, D Urest_, D start_, D stop_) {
  D startF6;
  D T7;
  D T8;
  D stopF9;
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
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  T16 = primitive_idQ(stop_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1042
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(string_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1040
    T8 = T7;
    // /opt/opendylan-2013.1/sources/io/print.dylan:1040
    primitive_type_check(T8, &KLintegerGVKd);
    T17 = T8;
    stopF9 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1040
    primitive_type_check(stop_, &KLintegerGVKd);
    T18 = stop_;
    stopF9 = T18;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  // /opt/opendylan-2013.1/sources/io/print.dylan:1043
  T10 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1043
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1043
    T19 = SLOT_VALUE_INITD(stream_, 5);
    T11 = T19;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1043
  // /opt/opendylan-2013.1/sources/io/print.dylan:1043
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1043
    T14 = &KPfalseVKi;
    T15 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1044
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T12 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1044
    T20.vector_element_[0] = &KJstart_;
    T20.vector_element_[1] = startF6;
    T20.vector_element_[2] = &KJend_;
    T20.vector_element_[3] = stopF9;
    // /opt/opendylan-2013.1/sources/io/print.dylan:1044
    CONGRUENT_CALL_PROLOG(&Kwrite_lineYstreamsVio, 3);
    T13 = CONGRUENT_CALL3(T12, string_, &T20);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1043
  // /opt/opendylan-2013.1/sources/io/print.dylan:1040
  MV_SET_COUNT(0);
  return(T15);
}

D Kpprint_tabYpprintVioMM1I (D kind_, D colnum_, D colinc_, D stream_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1170
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  T5 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1174
    CONGRUENT_CALL_PROLOG(&Kcircular_first_passQYprint_internalsVio, 1);
    T6 = CONGRUENT_CALL1(stream_);
    T7 = T6;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  if (T7 != &KPfalseVKi) {
    T9 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1175
    T8 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1176
    T10 = CALL1(&Kinner_streamYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1176
    CONGRUENT_CALL_PROLOG(&Kpprint_tabYpprintVio, 4);
    T11 = CONGRUENT_CALL4(kind_, colnum_, colinc_, T10);
    T13 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1174
    T12 = &KPfalseVKi;
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1174
  // /opt/opendylan-2013.1/sources/io/print.dylan:1170
  MV_SET_COUNT(0);
  return(T13);
}

D Kpprint_indentYpprintVioMM1I (D relative_to_, D n_, D stream_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1161
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  T4 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1164
    CONGRUENT_CALL_PROLOG(&Kcircular_first_passQYprint_internalsVio, 1);
    T5 = CONGRUENT_CALL1(stream_);
    T6 = T5;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  if (T6 != &KPfalseVKi) {
    T8 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1165
    T7 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1166
    T9 = CALL1(&Kinner_streamYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1166
    CONGRUENT_CALL_PROLOG(&Kpprint_indentYpprintVio, 3);
    T10 = CONGRUENT_CALL3(relative_to_, n_, T9);
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1164
    T11 = &KPfalseVKi;
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1164
  // /opt/opendylan-2013.1/sources/io/print.dylan:1161
  MV_SET_COUNT(0);
  return(T12);
}

D Kpprint_newlineYpprintVioMM1I (D kind_, D stream_) {
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
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1149
  // /opt/opendylan-2013.1/sources/io/print.dylan:1153
  T3 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1153
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1153
    CONGRUENT_CALL_PROLOG(&Kcircular_first_passQYprint_internalsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    T5 = T4;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1153
  // /opt/opendylan-2013.1/sources/io/print.dylan:1153
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1154
    T6 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1153
  // /opt/opendylan-2013.1/sources/io/print.dylan:1152
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1155
    T8 = CALL1(&Kinner_streamYstreamsVio, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1155
    CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
    T9 = CONGRUENT_CALL2(kind_, T8);
    T13 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1156
    T14 = primitive_idQ(kind_,IKJmandatory_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1152
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1157
      CONGRUENT_CALL_PROLOG(&Knew_lineYstreamsVio, 1);
      T10 = CONGRUENT_CALL1(stream_);
      T12 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1152
      T11 = &KPfalseVKi;
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:1152
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1152
  // /opt/opendylan-2013.1/sources/io/print.dylan:1149
  MV_SET_COUNT(0);
  return(T13);
}

D Kpprint_logical_blockYpprintVioMM2I (D stream_, D Urest_, D column_, D prefix_, D per_line_prefix_, D body_, D suffix_) {
  D columnF8;
  D prefixF9;
  D per_line_prefixF10;
  D bodyF11;
  D suffixF12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D target_;
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
  _KLsimple_object_vectorGVKd_10 T30 = {&KLsimple_object_vectorGVKdW, (D) 41};

  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  primitive_type_check(column_, &KLintegerGVKd);
  columnF8 = column_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  primitive_type_check(prefix_, &K395);
  prefixF9 = prefix_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  primitive_type_check(per_line_prefix_, &K395);
  per_line_prefixF10 = per_line_prefix_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  primitive_type_check(body_, &KLfunctionGVKd);
  bodyF11 = body_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  primitive_type_check(suffix_, &K395);
  suffixF12 = suffix_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1116
  if (prefixF9 != &KPfalseVKi) {
    T13 = per_line_prefixF10;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1116
  // /opt/opendylan-2013.1/sources/io/print.dylan:1116
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1117
    KerrorVKdMM1I(&K396, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1116
  // /opt/opendylan-2013.1/sources/io/print.dylan:1120
  T14 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1120
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1120
    T29 = SLOT_VALUE_INITD(stream_, 5);
    T15 = T29;
  } else {
    T15 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1120
  // /opt/opendylan-2013.1/sources/io/print.dylan:1119
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1120
    T16 = &KPfalseVKi;
    T27 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1121
    T17 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1119
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1122
      CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
      target_ = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1127
      T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_pprint_logical_blockF401, 3, target_, bodyF11, stream_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1123
      T30.vector_element_[0] = IKJcolumn_;
      T30.vector_element_[1] = columnF8;
      T30.vector_element_[2] = IKJprefix_;
      T30.vector_element_[3] = prefixF9;
      T30.vector_element_[4] = IKJper_line_prefix_;
      T30.vector_element_[5] = per_line_prefixF10;
      T30.vector_element_[6] = IKJbody_;
      T30.vector_element_[7] = T19;
      T30.vector_element_[8] = IKJsuffix_;
      T30.vector_element_[9] = suffixF12;
      // /opt/opendylan-2013.1/sources/io/print.dylan:1123
      CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
      T20 = CONGRUENT_CALL2(target_, &T30);
      T26 = T20;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1139
      if (prefixF9 != &KPfalseVKi) {
        T21 = prefixF9;
      } else {
        T21 = per_line_prefixF10;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:1139
      // /opt/opendylan-2013.1/sources/io/print.dylan:1139
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:1140
        if (prefixF9 != &KPfalseVKi) {
          T22 = prefixF9;
        } else {
          T22 = per_line_prefixF10;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:1140
        // /opt/opendylan-2013.1/sources/io/print.dylan:1140
        CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T22);
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:1139
      // /opt/opendylan-2013.1/sources/io/print.dylan:1142
      CALL1(bodyF11, stream_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1143
      if (suffixF12 != &KPfalseVKi) {
        T28 = suffixF12;
        // /opt/opendylan-2013.1/sources/io/print.dylan:1143
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        T23 = CONGRUENT_CALL3(stream_, T28, &KPempty_vectorVKi);
        T25 = T23;
      } else {
        // /opt/opendylan-2013.1/sources/io/print.dylan:1143
        T24 = &KPfalseVKi;
        T25 = T24;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:1143
      T26 = T25;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:1119
    T27 = T26;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1119
  // /opt/opendylan-2013.1/sources/io/print.dylan:1111
  MV_SET_COUNT(0);
  return(T27);
}

D KprintYprintVioMM0I (D object_, D stream_, D Urest_, D level_, D length_, D circleQ_, D prettyQ_, D escapeQ_) {
  volatile D T9;
  volatile D levelF10;
  volatile D T11;
  volatile D lengthF12;
  volatile D T13;
  volatile D circleQF14;
  volatile D T15;
  volatile D prettyQF16;
  volatile D T17;
  volatile D escapeQF18;
  volatile D T19;
  volatile D Pold_valuePF20;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D Pold_valuePF24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D Pold_valuePF28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D Pold_valuePF32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D Pold_valuePF36;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D p_stream_;
  volatile D T43;
  volatile D T44;
  volatile D T45;
  volatile D T46;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile D T50;
  volatile D T51;
  volatile D T52;
  volatile D T53;
  volatile D T54;
  volatile D T55;
  volatile D T56;
  volatile D T57;
  volatile _KLsimple_object_vectorGVKd_2 T58 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  T45 = primitive_idQ(level_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:203
    T9 = DunsuppliedYcommon_extensionsVcommon_dylan;
    levelF10 = T9;
  } else {
    levelF10 = level_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  T46 = primitive_idQ(length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  if (T46 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:203
    T11 = DunsuppliedYcommon_extensionsVcommon_dylan;
    lengthF12 = T11;
  } else {
    lengthF12 = length_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  T47 = primitive_idQ(circleQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:203
    T13 = DunsuppliedYcommon_extensionsVcommon_dylan;
    circleQF14 = T13;
  } else {
    circleQF14 = circleQ_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  T48 = primitive_idQ(prettyQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  if (T48 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:203
    T15 = DunsuppliedYcommon_extensionsVcommon_dylan;
    prettyQF16 = T15;
  } else {
    prettyQF16 = prettyQ_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  T49 = primitive_idQ(escapeQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  if (T49 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:203
    T17 = DunsuppliedYcommon_extensionsVcommon_dylan;
    escapeQF18 = T17;
  } else {
    escapeQF18 = escapeQ_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  // /opt/opendylan-2013.1/sources/io/print.dylan:209
  ENTER_UNWIND_FRAME(T19);
  if (!nlx_setjmp(FRAME_DEST(T19))) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:214
    CONGRUENT_CALL_PROLOG(&Klock_streamYstreamsVio, 1);
    CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:217
    Pold_valuePF20 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
    // /opt/opendylan-2013.1/sources/io/print.dylan:217
    ENTER_UNWIND_FRAME(T21);
    if (!nlx_setjmp(FRAME_DEST(T21))) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      T50 = primitive_idQ(lengthF12,DunsuppliedYcommon_extensionsVcommon_dylan);
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:217
        T22 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
        T23 = T22;
      } else {
        T23 = lengthF12;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      primitive_write_thread_variable(Tprint_lengthTYprintVio, T23);
      // /opt/opendylan-2013.1/sources/io/print.dylan:218
      Pold_valuePF24 = primitive_read_thread_variable(Tprint_levelTYprintVio);
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      ENTER_UNWIND_FRAME(T25);
      if (!nlx_setjmp(FRAME_DEST(T25))) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:218
        T51 = primitive_idQ(levelF10,DunsuppliedYcommon_extensionsVcommon_dylan);
        // /opt/opendylan-2013.1/sources/io/print.dylan:218
        if (T51 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:218
          T26 = primitive_read_thread_variable(Tprint_levelTYprintVio);
          T27 = T26;
        } else {
          T27 = levelF10;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:218
        // /opt/opendylan-2013.1/sources/io/print.dylan:218
        primitive_write_thread_variable(Tprint_levelTYprintVio, T27);
        // /opt/opendylan-2013.1/sources/io/print.dylan:219
        Pold_valuePF28 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
        // /opt/opendylan-2013.1/sources/io/print.dylan:217
        ENTER_UNWIND_FRAME(T29);
        if (!nlx_setjmp(FRAME_DEST(T29))) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:219
          T52 = primitive_idQ(circleQF14,DunsuppliedYcommon_extensionsVcommon_dylan);
          // /opt/opendylan-2013.1/sources/io/print.dylan:219
          if (T52 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:219
            T30 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
            T31 = T30;
          } else {
            // /opt/opendylan-2013.1/sources/io/print.dylan:203
            primitive_type_check(circleQF14, &KLbooleanGVKd);
            T53 = circleQF14;
            T31 = T53;
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:219
          // /opt/opendylan-2013.1/sources/io/print.dylan:219
          primitive_write_thread_variable(Tprint_circleQTYprintVio, T31);
          // /opt/opendylan-2013.1/sources/io/print.dylan:220
          Pold_valuePF32 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
          // /opt/opendylan-2013.1/sources/io/print.dylan:217
          ENTER_UNWIND_FRAME(T33);
          if (!nlx_setjmp(FRAME_DEST(T33))) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:220
            T54 = primitive_idQ(prettyQF16,DunsuppliedYcommon_extensionsVcommon_dylan);
            // /opt/opendylan-2013.1/sources/io/print.dylan:220
            if (T54 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/print.dylan:220
              T34 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
              T35 = T34;
            } else {
              // /opt/opendylan-2013.1/sources/io/print.dylan:203
              primitive_type_check(prettyQF16, &KLbooleanGVKd);
              T55 = prettyQF16;
              T35 = T55;
            }
            // /opt/opendylan-2013.1/sources/io/print.dylan:220
            // /opt/opendylan-2013.1/sources/io/print.dylan:220
            primitive_write_thread_variable(Tprint_prettyQTYprintVio, T35);
            // /opt/opendylan-2013.1/sources/io/print.dylan:221
            Pold_valuePF36 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
            // /opt/opendylan-2013.1/sources/io/print.dylan:217
            ENTER_UNWIND_FRAME(T37);
            if (!nlx_setjmp(FRAME_DEST(T37))) {
              // /opt/opendylan-2013.1/sources/io/print.dylan:221
              T56 = primitive_idQ(escapeQF18,DunsuppliedYcommon_extensionsVcommon_dylan);
              // /opt/opendylan-2013.1/sources/io/print.dylan:221
              if (T56 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:221
                T38 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
                T39 = T38;
              } else {
                // /opt/opendylan-2013.1/sources/io/print.dylan:203
                primitive_type_check(escapeQF18, &KLbooleanGVKd);
                T57 = escapeQF18;
                T39 = T57;
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:221
              // /opt/opendylan-2013.1/sources/io/print.dylan:221
              primitive_write_thread_variable(Tprint_escapeQTYprintVio, T39);
              // /opt/opendylan-2013.1/sources/io/print.dylan:227
              T40 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
              // /opt/opendylan-2013.1/sources/io/print.dylan:227
              if (T40 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:228
                T58.vector_element_[0] = IKJinner_stream_;
                T58.vector_element_[1] = stream_;
                // /opt/opendylan-2013.1/sources/io/print.dylan:228
                CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                T41 = CONGRUENT_CALL2(&KLcircular_print_streamGYprint_internalsVio, &T58);
                p_stream_ = T41;
              } else {
                p_stream_ = stream_;
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:227
              // /opt/opendylan-2013.1/sources/io/print.dylan:235
              T43 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
              // /opt/opendylan-2013.1/sources/io/print.dylan:235
              if (T43 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:236
                CALL2(&Kstart_circle_printingYprint_internalsVioMM0, object_, p_stream_);
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:235
              // /opt/opendylan-2013.1/sources/io/print.dylan:240
              T44 = Kmaybe_print_objectYprint_internalsVioMM0I(object_, p_stream_);
              // /opt/opendylan-2013.1/sources/io/print.dylan:217
              FALL_THROUGH_UNWIND(T44);
            }
            // /opt/opendylan-2013.1/sources/io/print.dylan:221
            primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valuePF36);
            // /opt/opendylan-2013.1/sources/io/print.dylan:217
            CONTINUE_UNWIND();
            // /opt/opendylan-2013.1/sources/io/print.dylan:217
            FALL_THROUGH_UNWIND(T44);
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:220
          primitive_write_thread_variable(Tprint_prettyQTYprintVio, Pold_valuePF32);
          // /opt/opendylan-2013.1/sources/io/print.dylan:217
          CONTINUE_UNWIND();
          // /opt/opendylan-2013.1/sources/io/print.dylan:217
          FALL_THROUGH_UNWIND(T44);
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:219
        primitive_write_thread_variable(Tprint_circleQTYprintVio, Pold_valuePF28);
        // /opt/opendylan-2013.1/sources/io/print.dylan:217
        CONTINUE_UNWIND();
        // /opt/opendylan-2013.1/sources/io/print.dylan:217
        FALL_THROUGH_UNWIND(T44);
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:218
      primitive_write_thread_variable(Tprint_levelTYprintVio, Pold_valuePF24);
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/io/print.dylan:217
      FALL_THROUGH_UNWIND(T44);
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:217
    primitive_write_thread_variable(Tprint_lengthTYprintVio, Pold_valuePF20);
    // /opt/opendylan-2013.1/sources/io/print.dylan:217
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/print.dylan:209
    FALL_THROUGH_UNWIND(T44);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:243
  CONGRUENT_CALL_PROLOG(&Kunlock_streamYstreamsVio, 1);
  CONGRUENT_CALL1(stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:209
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/print.dylan:203
  MV_SET_COUNT(0);
  return(T44);
}

D Kdo_printing_objectYprintVioMM0I (D object_, D stream_, D continuation_, D Urest_, D typeQ_, D identityQ_) {
  D class_;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:1193
  // /opt/opendylan-2013.1/sources/io/print.dylan:1196
  class_ = Kobject_classVKdI(object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1197
  T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_do_printing_objectF39, 4, class_, identityQ_, typeQ_, continuation_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1197
  T10.vector_element_[0] = IKJbody_;
  T10.vector_element_[1] = T8;
  T10.vector_element_[2] = IKJprefix_;
  T10.vector_element_[3] = &K33;
  T10.vector_element_[4] = IKJsuffix_;
  T10.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1197
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T9 = CONGRUENT_CALL2(stream_, &T10);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1193
  MV_SET_COUNT(0);
  return(T9);
}

static D Kanonymous_of_do_printing_objectF39I (D stream_) {
  D T1;
  D T2;
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
  D T13;
  D T14;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:1197
  // /opt/opendylan-2013.1/sources/io/print.dylan:1199
  if (CREF(2) != &KPfalseVKi) {
    T1 = CREF(1);
  } else {
    T1 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1199
  // /opt/opendylan-2013.1/sources/io/print.dylan:1198
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1200
    CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
    T2 = CONGRUENT_CALL1(CREF(0));
    // /opt/opendylan-2013.1/sources/io/print.dylan:1200
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T3 = CONGRUENT_CALL2(&KLbyte_stringGVKd, T2);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1200
    CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
    T4 = CONGRUENT_CALL1(T3);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1200
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T4);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1201
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K40);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1202
    T5 = CALL1(CREF(3), stream_);
    T14 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1198
    if (CREF(2) != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1206
      CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
      T6 = CONGRUENT_CALL1(CREF(0));
      // /opt/opendylan-2013.1/sources/io/print.dylan:1206
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T7 = CONGRUENT_CALL2(&KLbyte_stringGVKd, T6);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1206
      CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
      T8 = CONGRUENT_CALL1(T7);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1206
      CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T8);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1207
      CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K40);
      // /opt/opendylan-2013.1/sources/io/print.dylan:1208
      T9 = CALL1(CREF(3), stream_);
      T13 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:1198
      if (CREF(1) != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:1210
        T10 = CALL1(CREF(3), stream_);
        T12 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/io/print.dylan:1214
        T11 = CALL1(CREF(3), stream_);
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:1198
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:1198
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1198
  // /opt/opendylan-2013.1/sources/io/print.dylan:1197
  return(T14);
}

D Kstart_circle_printingYprint_internalsVioMM0I (D object_, D stream_) {
  D ref_;
  D T4;
  D T5;
  D T6;
  D table_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;

  // /opt/opendylan-2013.1/sources/io/print.dylan:283
  // /opt/opendylan-2013.1/sources/io/print.dylan:284
  T10 = SLOT_VALUE_INITD(stream_, 6);
  // /opt/opendylan-2013.1/sources/io/print.dylan:284
  table_ = T10;
  // /opt/opendylan-2013.1/sources/io/print.dylan:285
  T9 = table_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:285
  if (T9 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:286
    T12_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/io/print.dylan:286
    T11 = T12_0;
    // /opt/opendylan-2013.1/sources/io/print.dylan:286
    table_ = T11;
    // /opt/opendylan-2013.1/sources/io/print.dylan:287
    T8 = table_;
    // /opt/opendylan-2013.1/sources/io/print.dylan:287
    SLOT_VALUE_SETTER(T8, stream_, 6);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:285
  // /opt/opendylan-2013.1/sources/io/print.dylan:289
  ref_ = Kprint_referenceYprint_internalsVioMM0I(object_, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:290
  T13 = SLOT_VALUE_INITD(ref_, 2);
  // /opt/opendylan-2013.1/sources/io/print.dylan:290
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/io/print.dylan:290
  T15 = primitive_machine_word_add_signal_overflow(T14,4);
  // /opt/opendylan-2013.1/sources/io/print.dylan:290
  T16 = primitive_cast_raw_as_integer(T15);
  // /opt/opendylan-2013.1/sources/io/print.dylan:291
  SLOT_VALUE_SETTER(T16, ref_, 2);
  // /opt/opendylan-2013.1/sources/io/print.dylan:292
  T17 = primitive_machine_word_equalQ(T15,5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:292
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:295
    SLOT_VALUE_SETTER(&KPtrueVKi, stream_, 5);
    // /opt/opendylan-2013.1/sources/io/print.dylan:296
    CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
    CONGRUENT_CALL2(object_, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:297
    SLOT_VALUE_SETTER(&KPfalseVKi, stream_, 5);
    // /opt/opendylan-2013.1/sources/io/print.dylan:297
    T4 = &KPfalseVKi;
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:292
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:292
  // /opt/opendylan-2013.1/sources/io/print.dylan:283
  MV_SET_COUNT(0);
  return(T6);
}

D Kmaybe_print_objectYprint_internalsVioMM0I (D object_, D stream_) {
  D T3;
  D Pold_valueP_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D ref_;
  D T13;
  D T14;
  D T15;
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
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;

  // /opt/opendylan-2013.1/sources/io/print.dylan:307
  // /opt/opendylan-2013.1/sources/io/print.dylan:308
  T3 = primitive_read_thread_variable(Tprint_depthTYprint_internalsVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:308
  T22 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/io/print.dylan:308
  T23 = primitive_machine_word_add_signal_overflow(T22,4);
  // /opt/opendylan-2013.1/sources/io/print.dylan:308
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/io/print.dylan:309
  Pold_valueP_ = primitive_read_thread_variable(Tprint_depthTYprint_internalsVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:309
  ENTER_UNWIND_FRAME(T5);
  if (!nlx_setjmp(FRAME_DEST(T5))) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:309
    primitive_write_thread_variable(Tprint_depthTYprint_internalsVio, T24);
    // /opt/opendylan-2013.1/sources/io/print.dylan:310
    T6 = primitive_read_thread_variable(Tprint_levelTYprintVio);
    // /opt/opendylan-2013.1/sources/io/print.dylan:312
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:240
      T21 = T6;
      // /opt/opendylan-2013.1/sources/io/print.dylan:312
      T25 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/io/print.dylan:312
      T26 = primitive_machine_word_less_thanQ(T25,T23);
      T7 = T26;
    } else {
      T7 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:312
    // /opt/opendylan-2013.1/sources/io/print.dylan:311
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:313
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      T8 = CONGRUENT_CALL3(stream_, Dprint_level_exceeded_stringYprint_internalsVio, &KPempty_vectorVKi);
      T20 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:314
      T9 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
      // /opt/opendylan-2013.1/sources/io/print.dylan:311
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:316
        CONGRUENT_CALL_PROLOG(&Kcircular_first_passQYprint_internalsVio, 1);
        T11 = CONGRUENT_CALL1(stream_);
        // /opt/opendylan-2013.1/sources/io/print.dylan:311
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:319
          ref_ = CALL2(&Kprint_referenceYprint_internalsVioMM0, object_, stream_);
          // /opt/opendylan-2013.1/sources/io/print.dylan:320
          T27 = SLOT_VALUE_INITD(ref_, 2);
          // /opt/opendylan-2013.1/sources/io/print.dylan:320
          T28 = primitive_cast_integer_as_raw(T27);
          // /opt/opendylan-2013.1/sources/io/print.dylan:320
          T29 = primitive_machine_word_add_signal_overflow(T28,4);
          // /opt/opendylan-2013.1/sources/io/print.dylan:320
          T30 = primitive_cast_raw_as_integer(T29);
          // /opt/opendylan-2013.1/sources/io/print.dylan:321
          SLOT_VALUE_SETTER(T30, ref_, 2);
          // /opt/opendylan-2013.1/sources/io/print.dylan:322
          T31 = primitive_machine_word_equalQ(T29,5);
          // /opt/opendylan-2013.1/sources/io/print.dylan:322
          if (T31 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:325
            CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
            T13 = CONGRUENT_CALL2(object_, stream_);
            T15 = T13;
          } else {
            // /opt/opendylan-2013.1/sources/io/print.dylan:322
            T14 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T15 = T14;
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:322
          T18 = T15;
        } else {
          // /opt/opendylan-2013.1/sources/io/print.dylan:328
          T16 = CALL2(&Kprint_referenceYprint_internalsVioMM0, object_, stream_);
          // /opt/opendylan-2013.1/sources/io/print.dylan:328
          T17 = Koutput_print_referenceYprint_internalsVioMM0I(T16, stream_);
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:311
        T19 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/io/print.dylan:315
        CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
        T10 = CONGRUENT_CALL2(object_, stream_);
        T19 = T10;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:311
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:311
    // /opt/opendylan-2013.1/sources/io/print.dylan:309
    FALL_THROUGH_UNWIND(T20);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:309
  primitive_write_thread_variable(Tprint_depthTYprint_internalsVio, Pold_valueP_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:309
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/print.dylan:307
  return(T20);
}

D Kprint_referenceYprint_internalsVioMM0I (D object_, D stream_) {
  D refF3;
  D T4_0;
  D refF5;
  D T6_0;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_2 T9 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:141
  // /opt/opendylan-2013.1/sources/io/print.dylan:144
  T8 = SLOT_VALUE_INITD(stream_, 6);
  // /opt/opendylan-2013.1/sources/io/print.dylan:145
  refF3 = CALL4(&KelementVKd, T8, object_, &KJdefault_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:146
  if (refF3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:147
    T4_0 = refF3;
    // /opt/opendylan-2013.1/sources/io/print.dylan:147
    T10_0 = T4_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T4_0);
      primitive_type_check(T10_0, &KLprint_referenceGYprint_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T7_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:149
    T9.vector_element_[0] = &KJobject_;
    T9.vector_element_[1] = object_;
    // /opt/opendylan-2013.1/sources/io/print.dylan:149
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    refF5 = CONGRUENT_CALL2(&KLprint_referenceGYprint_internalsVio, &T9);
    // /opt/opendylan-2013.1/sources/io/print.dylan:150
    CALL3(&Kelement_setterVKd, refF5, T8, object_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:150
    T6_0 = refF5;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:146
  // /opt/opendylan-2013.1/sources/io/print.dylan:141
  MV_SET_COUNT(1);
  return(T7_0);
}

D Koutput_print_referenceYprint_internalsVioMM0I (D ref_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/io/print.dylan:338
  // /opt/opendylan-2013.1/sources/io/print.dylan:339
  T9 = SLOT_VALUE_INITD(ref_, 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:341
  T10 = SLOT_VALUE_INITD(ref_, 2);
  // /opt/opendylan-2013.1/sources/io/print.dylan:341
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/io/print.dylan:341
  T12 = primitive_machine_word_equalQ(T11,5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:340
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:342
    T13 = SLOT_VALUE_INITD(ref_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:342
    CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
    T3 = CONGRUENT_CALL2(T13, stream_);
    T8 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:340
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:350
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, Dcircular_id_prestringYprint_internalsVio, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:351
      CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T9);
      // /opt/opendylan-2013.1/sources/io/print.dylan:352
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      T6 = CONGRUENT_CALL3(stream_, Dcircular_id_poststringYprint_internalsVio, &KPempty_vectorVKi);
      T7 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:344
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, Dcircular_id_prestringYprint_internalsVio, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:345
      T4 = CALL2(&Knew_print_reference_idYprint_internalsVioMM0, stream_, ref_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:345
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, T4, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:346
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, Dcircular_id_poststringYprint_internalsVio, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:347
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, &K53, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:348
      T14 = SLOT_VALUE_INITD(ref_, 0);
      // /opt/opendylan-2013.1/sources/io/print.dylan:348
      CONGRUENT_CALL_PROLOG(&Kprint_objectYprintVio, 2);
      T5 = CONGRUENT_CALL2(T14, stream_);
      T7 = T5;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:340
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:340
  // /opt/opendylan-2013.1/sources/io/print.dylan:338
  MV_SET_COUNT(0);
  return(T8);
}

D Knew_print_reference_idYprint_internalsVioMM0I (D stream_, D ref_) {
  D T3;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:159
  // /opt/opendylan-2013.1/sources/io/print.dylan:162
  T5 = SLOT_VALUE_INITD(stream_, 7);
  // /opt/opendylan-2013.1/sources/io/print.dylan:163
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:163
  T7 = primitive_machine_word_add_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/io/print.dylan:163
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/io/print.dylan:163
  SLOT_VALUE_SETTER(T8, stream_, 7);
  // /opt/opendylan-2013.1/sources/io/print.dylan:164
  T3 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T5, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:164
  SLOT_VALUE_SETTER(T3, ref_, 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:164
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/print.dylan:159
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcircular_first_passQYprint_internalsVioMM1I (D stream_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:90
  // /opt/opendylan-2013.1/sources/io/print.dylan:91
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/print.dylan:90
  MV_SET_COUNT(1);
  return(T2_0);
}

D KLcircular_print_streamGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_outer_stream_, D Uunique_private_stream_element_type_value_, D Uunique_private_stream_lock_value_, D Uunique_Pinner_stream_) {
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

  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  T19 = primitive_idQ(Uunique_private_stream_lock_value_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  if (T19 != &KPfalseVKi) {
    T7 = K105I();
    // /opt/opendylan-2013.1/sources/io/print.dylan:72
    T8 = T7;
    Uunique_private_stream_lock_valueF9 = T8;
  } else {
    Uunique_private_stream_lock_valueF9 = Uunique_private_stream_lock_value_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  T20 = primitive_idQ(Uunique_Pinner_stream_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = IKJinner_stream_;
    T22 = KerrorVKdMM1I(&K102, &T21);
    // /opt/opendylan-2013.1/sources/io/print.dylan:72
    T10 = T22;
    Uunique_Pinner_streamF11 = T10;
  } else {
    Uunique_Pinner_streamF11 = Uunique_Pinner_stream_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  T12 = primitive_object_allocate_filled(9,&KLcircular_print_streamGYprint_internalsVioW,8,&KPunboundVKi,0,0,&KPunboundVKi);
  T23 = primitive_idQ(Uunique_outer_stream_,&KPunboundVKi);
  if (T23 != &KPfalseVKi) {
    Uunique_outer_streamF14 = Uunique_outer_stream_;
  } else {
    primitive_type_check(Uunique_outer_stream_, &K103);
    Uunique_outer_streamF13 = Uunique_outer_stream_;
    Uunique_outer_streamF14 = Uunique_outer_streamF13;
  }
  SLOT_VALUE_SETTER(Uunique_outer_streamF14, T12, 0);
  primitive_type_check(Uunique_private_stream_element_type_value_, &KLtypeGVKd);
  Uunique_private_stream_element_type_valueF15 = Uunique_private_stream_element_type_value_;
  SLOT_VALUE_SETTER(Uunique_private_stream_element_type_valueF15, T12, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T12, 2);
  primitive_type_check(Uunique_private_stream_lock_valueF9, &K104);
  Uunique_private_stream_lock_valueF16 = Uunique_private_stream_lock_valueF9;
  SLOT_VALUE_SETTER(Uunique_private_stream_lock_valueF16, T12, 3);
  primitive_type_check(Uunique_Pinner_streamF11, &KLstreamGYcommon_extensionsVcommon_dylan);
  Uunique_Pinner_streamF17 = Uunique_Pinner_streamF11;
  SLOT_VALUE_SETTER(Uunique_Pinner_streamF17, T12, 4);
  SLOT_VALUE_SETTER(&KPtrueVKi, T12, 5);
  SLOT_VALUE_SETTER(&KPfalseVKi, T12, 6);
  SLOT_VALUE_SETTER((D) 1, T12, 7);
  APPLY2(&KinitializeVKd, T12, init_args_);
  T18_0 = T12;
  // /opt/opendylan-2013.1/sources/io/print.dylan:72
  MV_SET_COUNT(1);
  return(T18_0);
}

static D K105I () {
  D T0_0;
  D T1;
  D T2_0;

  T2_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T1 = T2_0;
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kprint_objectYprintVioMM0I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:367
  // /opt/opendylan-2013.1/sources/io/print.dylan:368
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF372, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:368
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K33;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:368
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:367
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM1I (D char_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/print.dylan:441
  // /opt/opendylan-2013.1/sources/io/print.dylan:442
  T3 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:442
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:443
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    CONGRUENT_CALL2(stream_, C('\''));
    // /opt/opendylan-2013.1/sources/io/print.dylan:444
    Kwrite_char_maybe_escapeYprint_internalsVioMM0I(stream_, char_, C('\''));
    // /opt/opendylan-2013.1/sources/io/print.dylan:445
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    T4 = CONGRUENT_CALL2(stream_, C('\''));
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:447
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    T5 = CONGRUENT_CALL2(stream_, char_);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:442
  // /opt/opendylan-2013.1/sources/io/print.dylan:441
  MV_SET_COUNT(0);
  return(T6);
}

D Kprint_objectYprintVioMM2I (D object_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/print.dylan:491
  // /opt/opendylan-2013.1/sources/io/print.dylan:492
  T3 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:492
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:493
    ENGINE_NODE_CALL_PROLOG(&Kwrite_string_escapedYprint_internalsVio, &K348, 2);
    T6 = ENGINE_NODE_CALL2(&K348, stream_, object_);
    T5 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:495
    CONGRUENT_CALL_PROLOG(&Kwrite_textYstreamsVio, 3);
    T4 = CONGRUENT_CALL3(stream_, object_, &KPempty_vectorVKi);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:492
  // /opt/opendylan-2013.1/sources/io/print.dylan:491
  MV_SET_COUNT(0);
  return(T5);
}

D Kprint_objectYprintVioMM3I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:577
  // /opt/opendylan-2013.1/sources/io/print.dylan:578
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF347, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:578
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K346;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K303;
  // /opt/opendylan-2013.1/sources/io/print.dylan:578
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:577
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM4I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:669
  // /opt/opendylan-2013.1/sources/io/print.dylan:671
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF341, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:671
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K339;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K340;
  // /opt/opendylan-2013.1/sources/io/print.dylan:671
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:669
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM5I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:682
  // /opt/opendylan-2013.1/sources/io/print.dylan:684
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF333, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:684
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K33;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:684
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:682
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM6I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:695
  // /opt/opendylan-2013.1/sources/io/print.dylan:696
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF316, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:696
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K33;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:696
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:695
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM7I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:827
  // /opt/opendylan-2013.1/sources/io/print.dylan:832
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF266, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:829
  T5.vector_element_[0] = IKJprefix_;
  T5.vector_element_[1] = &K265;
  T5.vector_element_[2] = IKJbody_;
  T5.vector_element_[3] = T3;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:829
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:827
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM8I (D object_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/print.dylan:840
  // /opt/opendylan-2013.1/sources/io/print.dylan:841
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K258, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:842
  Kwrite_class_nameYprint_internalsVioMM0I(object_, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:843
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K35, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:840
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_objectYprintVioMM9I (D deque_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  _KLsimple_object_vectorGVKd_6 T8 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:865
  // /opt/opendylan-2013.1/sources/io/print.dylan:867
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T3 = CONGRUENT_CALL1(deque_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:867
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:868
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T4 = CONGRUENT_CALL3(stream_, &K247, &KPempty_vectorVKi);
    T7 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:870
    T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF249, 1, deque_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:870
    T8.vector_element_[0] = IKJbody_;
    T8.vector_element_[1] = T5;
    T8.vector_element_[2] = IKJprefix_;
    T8.vector_element_[3] = &K248;
    T8.vector_element_[4] = IKJsuffix_;
    T8.vector_element_[5] = &K35;
    // /opt/opendylan-2013.1/sources/io/print.dylan:870
    CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
    T6 = CONGRUENT_CALL2(stream_, &T8);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:867
  // /opt/opendylan-2013.1/sources/io/print.dylan:865
  MV_SET_COUNT(0);
  return(T7);
}

D Kprint_objectYprintVioMM10I (D r_, D stream_) {
  D s_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_6 T12 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:876
  // /opt/opendylan-2013.1/sources/io/print.dylan:878
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  s_ = CONGRUENT_CALL1(r_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:879
  if (s_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:879
    CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
    T4 = CONGRUENT_CALL1(s_);
    T5 = T4;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:879
  // /opt/opendylan-2013.1/sources/io/print.dylan:879
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:880
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T6 = CONGRUENT_CALL3(stream_, &K238, &KPempty_vectorVKi);
    T9 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:882
    T10 = SLOT_VALUE_INITD(r_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:883
    T11 = SLOT_VALUE_INITD(r_, 1);
    // /opt/opendylan-2013.1/sources/io/print.dylan:884
    T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF240, 4, T11, T10, s_, r_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:884
    T12.vector_element_[0] = IKJbody_;
    T12.vector_element_[1] = T7;
    T12.vector_element_[2] = IKJprefix_;
    T12.vector_element_[3] = &K239;
    T12.vector_element_[4] = IKJsuffix_;
    T12.vector_element_[5] = &K35;
    // /opt/opendylan-2013.1/sources/io/print.dylan:884
    CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
    T8 = CONGRUENT_CALL2(stream_, &T12);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:879
  // /opt/opendylan-2013.1/sources/io/print.dylan:876
  MV_SET_COUNT(0);
  return(T9);
}

D Kprint_objectYprintVioMM11I (D object_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:900
  // /opt/opendylan-2013.1/sources/io/print.dylan:902
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF227, 1, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:902
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K226;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:902
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:900
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM12I (D object_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/print.dylan:909
  // /opt/opendylan-2013.1/sources/io/print.dylan:911
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K220, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:909
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_objectYprintVioMM13I (D object_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/print.dylan:916
  // /opt/opendylan-2013.1/sources/io/print.dylan:918
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K217, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:916
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_objectYprintVioMM14I (D object_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/io/print.dylan:923
  // /opt/opendylan-2013.1/sources/io/print.dylan:925
  T3 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:925
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:926
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    CONGRUENT_CALL2(stream_, C('#'));
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T7 = SLOT_VALUE_INITD(object_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T8_0 = T7;
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T6_0 = T8_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T8_0);
      primitive_type_check(T6_0, &KLbyte_stringGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T9 = T6_0;
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T10 = Kas_lowercaseVKdMM2I(T9);
    // /opt/opendylan-2013.1/sources/io/print.dylan:927
    T11 = Kwrite_string_escapedYprint_internalsVioMM0I(stream_, T10);
    T5 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    T13 = SLOT_VALUE_INITD(object_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    T14_0 = T13;
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    T12_0 = T14_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T14_0);
      primitive_type_check(T12_0, &KLbyte_stringGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    T15 = T12_0;
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    T16 = Kas_lowercaseVKdMM2I(T15);
    // /opt/opendylan-2013.1/sources/io/print.dylan:929
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T4 = CONGRUENT_CALL3(stream_, T16, &KPempty_vectorVKi);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:925
  // /opt/opendylan-2013.1/sources/io/print.dylan:923
  MV_SET_COUNT(0);
  return(T5);
}

D Kprint_objectYprintVioMM15I (D object_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/print.dylan:938
  // /opt/opendylan-2013.1/sources/io/print.dylan:940
  T3 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(object_, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:940
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T4 = CONGRUENT_CALL3(stream_, T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:938
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM16I (D object_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/print.dylan:954
  // /opt/opendylan-2013.1/sources/io/print.dylan:956
  T3 = CALL1(&Kmachine_word_to_stringYcommon_extensionsVcommon_dylan, object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:956
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T4 = CONGRUENT_CALL3(stream_, T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:954
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM17I (D float_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/print.dylan:963
  // /opt/opendylan-2013.1/sources/io/print.dylan:965
  T3 = Kfloat_to_stringYcommon_extensionsVcommon_dylanI(float_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:965
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T4 = CONGRUENT_CALL3(stream_, T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:963
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_objectYprintVioMM18I (D locator_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/print.dylan:972
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/print.dylan:974
  T3 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:974
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:975
    T8 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/print.dylan:975
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:975
      KerrorVKdMM1I(&K190, &KPempty_vectorVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:975
      T9 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/io/print.dylan:975
      T10 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/io/print.dylan:975
      MEP_CALL_PROLOG(T9, T10, 2);
      MEP_CALL2(T9, locator_, stream_);
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:975
    // /opt/opendylan-2013.1/sources/io/print.dylan:975
    T11 = &KPfalseVKi;
    T6 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:977
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4 = CONGRUENT_CALL2(&KLstringGVKd, locator_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:977
    T5 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T4);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:974
  // /opt/opendylan-2013.1/sources/io/print.dylan:972
  MV_SET_COUNT(0);
  return(T6);
}

D Kwrite_string_escapedYprint_internalsVioMM0I (D stream_, D object_) {
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D next_break_;
  D char_;
  D T8;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D fromF14T, fromF14;

  // /opt/opendylan-2013.1/sources/io/print.dylan:515
  // /opt/opendylan-2013.1/sources/io/print.dylan:517
  T4 = SLOT_VALUE_INITD(object_, 0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:547
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2(stream_, C('\"'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:543
  fromF14T = (D) 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/print.dylan:543
    fromF14 = fromF14T;
    // /opt/opendylan-2013.1/sources/io/print.dylan:537
    T5_0 = Kfind_next_breakF214I(T4, object_, fromF14);
    T5_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/io/print.dylan:537
    next_break_ = T5_0;
    // /opt/opendylan-2013.1/sources/io/print.dylan:537
    char_ = T5_1;
    // /opt/opendylan-2013.1/sources/io/print.dylan:538
    T8 = primitive_idQ(fromF14,next_break_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:538
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:539
      T9.vector_element_[0] = &KJstart_;
      T9.vector_element_[1] = fromF14;
      T9.vector_element_[2] = &KJend_;
      T9.vector_element_[3] = next_break_;
      // /opt/opendylan-2013.1/sources/io/print.dylan:539
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      CONGRUENT_CALL3(stream_, object_, &T9);
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:538
    // /opt/opendylan-2013.1/sources/io/print.dylan:541
    T10 = primitive_idQ(next_break_,T4);
    // /opt/opendylan-2013.1/sources/io/print.dylan:541
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:542
      Kwrite_char_maybe_escapeYprint_internalsVioMM0I(stream_, char_, C('\"'));
      // /opt/opendylan-2013.1/sources/io/print.dylan:543
      T11 = primitive_cast_integer_as_raw(next_break_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:543
      T12 = primitive_machine_word_add_signal_overflow(T11,4);
      // /opt/opendylan-2013.1/sources/io/print.dylan:543
      T13 = primitive_cast_raw_as_integer(T12);
      // /opt/opendylan-2013.1/sources/io/print.dylan:543
      fromF14T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:541
    // /opt/opendylan-2013.1/sources/io/print.dylan:543
  // /opt/opendylan-2013.1/sources/io/print.dylan:549
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  T3 = CONGRUENT_CALL2(stream_, C('\"'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:515
  MV_SET_COUNT(0);
  return(T3);
}

static D Kfind_next_breakF214I (D implicit_argument_, D object_, D index_) {
  D UtmpF4;
  D UtmpF5;
  D T6;
  D T7_0;
  D T7_1;
  D T8_0;
  D T8_1;
  D T9_0;
  D T9_1;
  D T10;
  D T11_0;
  D T11_1;
  D T12_0;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  DBCHR T17;
  D T18;
  DBCHR T19;
  DWORD T20;
  DWORD T21;
  DSINT T22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T30_1;
  DWORD T31;
  D T32;

  // /opt/opendylan-2013.1/sources/io/print.dylan:518
  // /opt/opendylan-2013.1/sources/io/print.dylan:522
  T10 = primitive_idQ(index_,implicit_argument_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:522
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:525
    T11_0 = index_;
    T11_1 = C('x');
    T9_0 = T11_0;
    T9_1 = T11_1;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    T13 = SLOT_VALUE_INITD(object_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    T14 = primitive_cast_integer_as_raw(index_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    T15 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    T16 = primitive_machine_word_unsigned_less_thanQ(T14,T15);
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:527
      T17 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(object_, 1, T14);
      T19 = T17;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:527
      T12_0 = Kelement_range_errorVKeI(object_, index_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:527
      T18 = T12_0;
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T22 = primitive_byte_character_as_raw(T18);
      T19 = T22;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:527
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    T23 = primitive_raw_as_byte_character(T19);
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    T20 = primitive_machine_word_shift_left_signal_overflow(T19,2);
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    T21 = primitive_machine_word_logior(T20,1);
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    T24 = primitive_machine_word_less_thanQ(T21,129);
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    if (T24 != &KPfalseVKi) {
      UtmpF4 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T25 = primitive_idQ(T23,C('\"'));
      UtmpF4 = T25;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    if (UtmpF4 != &KPfalseVKi) {
      UtmpF5 = UtmpF4;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T26 = primitive_idQ(T23,C('\\'));
      UtmpF5 = T26;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    if (UtmpF5 != &KPfalseVKi) {
      T6 = UtmpF5;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T27 = primitive_machine_word_shift_left_signal_overflow(T19,2);
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T28 = primitive_machine_word_logior(T27,1);
      // /opt/opendylan-2013.1/sources/io/print.dylan:528
      T29 = primitive_machine_word_less_thanQ(505,T28);
      T6 = T29;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:529
      T30_0 = index_;
      T30_1 = T23;
      T8_0 = T30_0;
      T8_1 = T30_1;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:531
      T31 = primitive_machine_word_add_signal_overflow(T14,4);
      // /opt/opendylan-2013.1/sources/io/print.dylan:531
      T32 = primitive_cast_raw_as_integer(T31);
      // /opt/opendylan-2013.1/sources/io/print.dylan:531
      T7_0 = Kfind_next_breakF214I(implicit_argument_, object_, T32);
      T7_1 = MV_GET_ELT(1);
      T8_0 = T7_0;
      T8_1 = T7_1;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:528
    T9_0 = T8_0;
    T9_1 = T8_1;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:522
  // /opt/opendylan-2013.1/sources/io/print.dylan:518
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D Kwrite_char_maybe_escapeYprint_internalsVioMM0I (D stream_, D char_, D Uquote_) {
  D T4;
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
  D T30;
  D T31;
  D T32;
  D T33;
  D T34_0;
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
  D T48_0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:455
  // /opt/opendylan-2013.1/sources/io/print.dylan:459
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T33 = CONGRUENT_CALL2(&KLintegerGVKd, char_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:459
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T34_0 = CONGRUENT_CALL2(T33, (D) 129);
  // /opt/opendylan-2013.1/sources/io/print.dylan:459
  T35 = T34_0;
  // /opt/opendylan-2013.1/sources/io/print.dylan:458
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:460
    T36 = primitive_idQ(char_,C('\x0'));
    // /opt/opendylan-2013.1/sources/io/print.dylan:460
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:461
      CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
      T4 = CONGRUENT_CALL3(stream_, &K202, &KPempty_vectorVKi);
      T22 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:460
      T37 = primitive_idQ(char_,C('\x7'));
      // /opt/opendylan-2013.1/sources/io/print.dylan:460
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:462
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        T5 = CONGRUENT_CALL3(stream_, &K203, &KPempty_vectorVKi);
        T21 = T5;
      } else {
        // /opt/opendylan-2013.1/sources/io/print.dylan:460
        T38 = primitive_idQ(char_,C('\x8'));
        // /opt/opendylan-2013.1/sources/io/print.dylan:460
        if (T38 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:463
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          T6 = CONGRUENT_CALL3(stream_, &K204, &KPempty_vectorVKi);
          T20 = T6;
        } else {
          // /opt/opendylan-2013.1/sources/io/print.dylan:460
          T39 = primitive_idQ(char_,C('\t'));
          // /opt/opendylan-2013.1/sources/io/print.dylan:460
          if (T39 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:464
            CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
            T7 = CONGRUENT_CALL3(stream_, &K205, &KPempty_vectorVKi);
            T19 = T7;
          } else {
            // /opt/opendylan-2013.1/sources/io/print.dylan:460
            T40 = primitive_idQ(char_,C('\f'));
            // /opt/opendylan-2013.1/sources/io/print.dylan:460
            if (T40 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/print.dylan:465
              CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
              T8 = CONGRUENT_CALL3(stream_, &K206, &KPempty_vectorVKi);
              T18 = T8;
            } else {
              // /opt/opendylan-2013.1/sources/io/print.dylan:460
              T41 = primitive_idQ(char_,C('\r'));
              // /opt/opendylan-2013.1/sources/io/print.dylan:460
              if (T41 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:466
                CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                T9 = CONGRUENT_CALL3(stream_, &K207, &KPempty_vectorVKi);
                T17 = T9;
              } else {
                // /opt/opendylan-2013.1/sources/io/print.dylan:460
                T42 = primitive_idQ(char_,C('\n'));
                // /opt/opendylan-2013.1/sources/io/print.dylan:460
                if (T42 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/print.dylan:467
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  T10 = CONGRUENT_CALL3(stream_, &K208, &KPempty_vectorVKi);
                  T16 = T10;
                } else {
                  // /opt/opendylan-2013.1/sources/io/print.dylan:460
                  T43 = primitive_idQ(char_,C('\x1B'));
                  // /opt/opendylan-2013.1/sources/io/print.dylan:460
                  if (T43 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/print.dylan:468
                    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                    T11 = CONGRUENT_CALL3(stream_, &K209, &KPempty_vectorVKi);
                    T15 = T11;
                  } else {
                    // /opt/opendylan-2013.1/sources/io/print.dylan:470
                    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                    CONGRUENT_CALL3(stream_, &K210, &KPempty_vectorVKi);
                    // /opt/opendylan-2013.1/sources/io/print.dylan:471
                    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
                    T12 = CONGRUENT_CALL2(&KLintegerGVKd, char_);
                    // /opt/opendylan-2013.1/sources/io/print.dylan:471
                    T13 = CALL3(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, T12, IKJbase_, (D) 65);
                    // /opt/opendylan-2013.1/sources/io/print.dylan:471
                    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                    CONGRUENT_CALL3(stream_, T13, &KPempty_vectorVKi);
                    // /opt/opendylan-2013.1/sources/io/print.dylan:472
                    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
                    T14 = CONGRUENT_CALL2(stream_, C('>'));
                    T15 = T14;
                  }
                  // /opt/opendylan-2013.1/sources/io/print.dylan:460
                  T16 = T15;
                }
                // /opt/opendylan-2013.1/sources/io/print.dylan:460
                T17 = T16;
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:460
              T18 = T17;
            }
            // /opt/opendylan-2013.1/sources/io/print.dylan:460
            T19 = T18;
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:460
          T20 = T19;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:460
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:460
      T22 = T21;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:460
    T32 = T22;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:474
    T44 = primitive_idQ(char_,Uquote_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:458
    if (T44 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:475
      CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
      CONGRUENT_CALL2(stream_, C('\\'));
      // /opt/opendylan-2013.1/sources/io/print.dylan:476
      CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
      T23 = CONGRUENT_CALL2(stream_, char_);
      T31 = T23;
    } else {
      // /opt/opendylan-2013.1/sources/io/print.dylan:477
      T45 = primitive_idQ(char_,C('\\'));
      // /opt/opendylan-2013.1/sources/io/print.dylan:458
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:478
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        T24 = CONGRUENT_CALL3(stream_, &K212, &KPempty_vectorVKi);
        T30 = T24;
      } else {
        // /opt/opendylan-2013.1/sources/io/print.dylan:479
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T47 = CONGRUENT_CALL2(&KLintegerGVKd, char_);
        // /opt/opendylan-2013.1/sources/io/print.dylan:479
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T48_0 = CONGRUENT_CALL2((D) 505, T47);
        // /opt/opendylan-2013.1/sources/io/print.dylan:479
        T46 = T48_0;
        // /opt/opendylan-2013.1/sources/io/print.dylan:458
        if (T46 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:480
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          CONGRUENT_CALL3(stream_, &K210, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/io/print.dylan:481
          CONGRUENT_CALL_PROLOG(&KasVKd, 2);
          T25 = CONGRUENT_CALL2(&KLintegerGVKd, char_);
          // /opt/opendylan-2013.1/sources/io/print.dylan:481
          T26 = CALL3(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, T25, IKJbase_, (D) 65);
          // /opt/opendylan-2013.1/sources/io/print.dylan:481
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          CONGRUENT_CALL3(stream_, T26, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/io/print.dylan:482
          CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
          T27 = CONGRUENT_CALL2(stream_, C('>'));
          T29 = T27;
        } else {
          // /opt/opendylan-2013.1/sources/io/print.dylan:484
          CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
          T28 = CONGRUENT_CALL2(stream_, char_);
          T29 = T28;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:458
        T30 = T29;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:458
      T31 = T30;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:458
    T32 = T31;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:458
  // /opt/opendylan-2013.1/sources/io/print.dylan:455
  MV_SET_COUNT(0);
  return(T32);
}

static D Kanonymous_of_print_objectF227I (D stream_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:902
  // /opt/opendylan-2013.1/sources/io/print.dylan:903
  T1 = CALL3(&Kprint_itemsYprint_internalsVioMM0, CREF(0), &KprintYprintVio, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:902
  return(T1);
}

D Kprint_itemsYprint_internalsVioMM0I (D items_, D print_fun_, D stream_) {
  D exitPexit_53_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13T, T13;
  D count_T, count_;
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

  // /opt/opendylan-2013.1/sources/io/print.dylan:736
  // /opt/opendylan-2013.1/sources/io/print.dylan:738
  // /opt/opendylan-2013.1/sources/io/print.dylan:739
  T6 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T7 = CONGRUENT_CALL1(items_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T8 = T7;
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T9 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T10 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T11 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T12 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:740
  T13T = T8;
  count_T = (D) 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    count_ = count_T;
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    T15 = CALL3(T11, items_, T13, T9);
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    if (T15 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:740
      T16 = CALL2(T12, items_, T13);
      // /opt/opendylan-2013.1/sources/io/print.dylan:742
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T24 = CONGRUENT_CALL2(count_, (D) 1);
      // /opt/opendylan-2013.1/sources/io/print.dylan:742
      if (T24 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:743
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        CONGRUENT_CALL3(stream_, &K230, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/print.dylan:744
        CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
        CONGRUENT_CALL2(&KJfill_, stream_);
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:742
      // /opt/opendylan-2013.1/sources/io/print.dylan:746
      if (T6 != &KPfalseVKi) {
        T23 = T6;
        // /opt/opendylan-2013.1/sources/io/print.dylan:746
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T17 = CONGRUENT_CALL2(count_, T23);
        T18 = T17;
      } else {
        T18 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:746
      // /opt/opendylan-2013.1/sources/io/print.dylan:746
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:747
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        CONGRUENT_CALL3(stream_, &K231, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/print.dylan:738
        T25 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
        // /opt/opendylan-2013.1/sources/io/print.dylan:738
        T22 = T25;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:746
      // /opt/opendylan-2013.1/sources/io/print.dylan:750
      CALL2(print_fun_, T16, stream_);
      // /opt/opendylan-2013.1/sources/io/print.dylan:740
      T19 = CALL2(T10, items_, T13);
      // /opt/opendylan-2013.1/sources/io/print.dylan:741
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T20 = CONGRUENT_CALL2(count_, (D) 5);
      // /opt/opendylan-2013.1/sources/io/print.dylan:740
      T13T = T19;
      count_T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
    T21 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/io/print.dylan:740
  // /opt/opendylan-2013.1/sources/io/print.dylan:738
  T22 = T21;
  L1: ;
  // /opt/opendylan-2013.1/sources/io/print.dylan:738
  // /opt/opendylan-2013.1/sources/io/print.dylan:736
  MV_SET_COUNT(0);
  return(T22);
}

static D Kanonymous_of_print_objectF240I (D stream_) {
  D T1;
  D T2;
  D T3;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:884
  // /opt/opendylan-2013.1/sources/io/print.dylan:885
  if (CREF(2) != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:886
    CALL2(&Kprint_objectYprintVio, CREF(1), stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:887
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K241);
    // /opt/opendylan-2013.1/sources/io/print.dylan:888
    CONGRUENT_CALL_PROLOG(&KlastVKd, 2);
    T1 = CONGRUENT_CALL2(CREF(3), &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/print.dylan:888
    CALL2(&Kprint_objectYprintVio, T1, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:889
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K242);
    // /opt/opendylan-2013.1/sources/io/print.dylan:890
    T2 = CALL2(&Kprint_objectYprintVio, CREF(0), stream_);
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:892
    CALL2(&Kprint_objectYprintVio, CREF(1), stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:893
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K242);
    // /opt/opendylan-2013.1/sources/io/print.dylan:894
    T3 = CALL2(&Kprint_objectYprintVio, CREF(0), stream_);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:885
  // /opt/opendylan-2013.1/sources/io/print.dylan:884
  return(T4);
}

static D Kanonymous_of_print_objectF249I (D stream_) {
  D T1;
  D T2;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:870
  // /opt/opendylan-2013.1/sources/io/print.dylan:871
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T1 = CONGRUENT_CALL2(&KLlistGVKd, CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:871
  T2 = CALL2(&Kprint_listYprint_internalsVioMM0, T1, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:870
  return(T2);
}

D Kprint_listYprint_internalsVioMM0I (D object_, D stream_) {
  D exitPexit_52_;
  D T4;
  D T5;
  D T6;
  D T7;
  D circleQ_;
  D first_passQ_;
  D remaining_T, remaining_;
  D count_T, count_;
  D T12;
  D T13;
  D refF14;
  D T15;
  D refF16;
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
  DWORD T27;
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
  DWORD T38;
  DWORD T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  D T47;

  // /opt/opendylan-2013.1/sources/io/print.dylan:585
  // /opt/opendylan-2013.1/sources/io/print.dylan:586
  // /opt/opendylan-2013.1/sources/io/print.dylan:587
  T5 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:588
  if (T5 != &KPfalseVKi) {
    T24 = T5;
    // /opt/opendylan-2013.1/sources/io/print.dylan:588
    T27 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/print.dylan:588
    T28 = primitive_machine_word_less_thanQ(1,T27);
    // /opt/opendylan-2013.1/sources/io/print.dylan:588
    T26 = primitive_not(T28);
    T6 = T26;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:588
  // /opt/opendylan-2013.1/sources/io/print.dylan:588
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:589
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T7 = CONGRUENT_CALL3(stream_, &K231, &KPempty_vectorVKi);
    T22 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:591
    T29 = SLOT_VALUE_INITD(object_, 0);
    // /opt/opendylan-2013.1/sources/io/print.dylan:591
    CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
    CONGRUENT_CALL3(T29, stream_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/print.dylan:592
    circleQ_ = primitive_read_thread_variable(Tprint_circleQTYprintVio);
    // /opt/opendylan-2013.1/sources/io/print.dylan:593
    CONGRUENT_CALL_PROLOG(&Kcircular_first_passQYprint_internalsVio, 1);
    first_passQ_ = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:594
    T30 = SLOT_VALUE_INITD(object_, 1);
    // /opt/opendylan-2013.1/sources/io/print.dylan:594
    remaining_T = T30;
    count_T = (D) 5;
  L0: ;
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
      remaining_ = remaining_T;
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
      count_ = count_T;
      // /opt/opendylan-2013.1/sources/io/print.dylan:596
      T31 = primitive_idQ(remaining_,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
      if (T31 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:597
        T32 = primitive_instanceQ(remaining_,&KLlistGVKd);
        // /opt/opendylan-2013.1/sources/io/print.dylan:597
        if (T32 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:599
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          CONGRUENT_CALL3(stream_, &K252, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/io/print.dylan:600
          CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
          CONGRUENT_CALL2(&KJfill_, stream_);
          // /opt/opendylan-2013.1/sources/io/print.dylan:601
          CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
          CONGRUENT_CALL3(remaining_, stream_, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/io/print.dylan:602
          T33 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
          // /opt/opendylan-2013.1/sources/io/print.dylan:602
          T23 = T33;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:597
        // /opt/opendylan-2013.1/sources/io/print.dylan:604
        CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
        CONGRUENT_CALL3(stream_, &K230, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/print.dylan:605
        CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
        CONGRUENT_CALL2(&KJfill_, stream_);
        // /opt/opendylan-2013.1/sources/io/print.dylan:607
        if (T5 != &KPfalseVKi) {
          T25 = T5;
          // /opt/opendylan-2013.1/sources/io/print.dylan:607
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T34 = CONGRUENT_CALL2(count_, T25);
          // /opt/opendylan-2013.1/sources/io/print.dylan:607
          T35 = primitive_not(T34);
          T12 = T35;
        } else {
          T12 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:607
        // /opt/opendylan-2013.1/sources/io/print.dylan:606
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:609
          CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
          CONGRUENT_CALL3(stream_, &K231, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/io/print.dylan:610
          T36 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
          // /opt/opendylan-2013.1/sources/io/print.dylan:610
          T23 = T36;
          goto L1;
        } else {
          // /opt/opendylan-2013.1/sources/io/print.dylan:606
          if (circleQ_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:606
            if (first_passQ_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/print.dylan:616
              refF14 = CALL2(&Kprint_referenceYprint_internalsVioMM0, remaining_, stream_);
              // /opt/opendylan-2013.1/sources/io/print.dylan:617
              T37 = SLOT_VALUE_INITD(refF14, 2);
              // /opt/opendylan-2013.1/sources/io/print.dylan:617
              T38 = primitive_cast_integer_as_raw(T37);
              // /opt/opendylan-2013.1/sources/io/print.dylan:617
              T39 = primitive_machine_word_add_signal_overflow(T38,4);
              // /opt/opendylan-2013.1/sources/io/print.dylan:617
              T40 = primitive_cast_raw_as_integer(T39);
              // /opt/opendylan-2013.1/sources/io/print.dylan:618
              SLOT_VALUE_SETTER(T40, refF14, 2);
              // /opt/opendylan-2013.1/sources/io/print.dylan:619
              T41 = primitive_machine_word_equalQ(T39,5);
              // /opt/opendylan-2013.1/sources/io/print.dylan:619
              if (T41 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:621
                T15 = CALL1(&KheadVKd, remaining_);
                // /opt/opendylan-2013.1/sources/io/print.dylan:621
                CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
                CONGRUENT_CALL3(T15, stream_, &KPempty_vectorVKi);
              } else {
                // /opt/opendylan-2013.1/sources/io/print.dylan:625
                T42 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                // /opt/opendylan-2013.1/sources/io/print.dylan:625
                T23 = T42;
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:619
            } else {
              // /opt/opendylan-2013.1/sources/io/print.dylan:629
              refF16 = CALL2(&Kprint_referenceYprint_internalsVioMM0, remaining_, stream_);
              // /opt/opendylan-2013.1/sources/io/print.dylan:630
              T43 = SLOT_VALUE_INITD(refF16, 1);
              // /opt/opendylan-2013.1/sources/io/print.dylan:632
              T44 = SLOT_VALUE_INITD(refF16, 2);
              // /opt/opendylan-2013.1/sources/io/print.dylan:632
              T45 = primitive_cast_integer_as_raw(T44);
              // /opt/opendylan-2013.1/sources/io/print.dylan:632
              T46 = primitive_machine_word_equalQ(T45,5);
              // /opt/opendylan-2013.1/sources/io/print.dylan:631
              if (T46 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/print.dylan:635
                T17 = CALL1(&KheadVKd, remaining_);
                // /opt/opendylan-2013.1/sources/io/print.dylan:635
                CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
                CONGRUENT_CALL3(T17, stream_, &KPempty_vectorVKi);
              } else {
                // /opt/opendylan-2013.1/sources/io/print.dylan:631
                if (T43 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/io/print.dylan:650
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, &K253, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:651
                  CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
                  CONGRUENT_CALL2(&KJfill_, stream_);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:652
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, Dcircular_id_prestringYprint_internalsVio, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:653
                  CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T43);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:654
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, Dcircular_id_poststringYprint_internalsVio, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:586
                  T47 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:586
                  T23 = T47;
                  goto L1;
                } else {
                  // /opt/opendylan-2013.1/sources/io/print.dylan:640
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, &K253, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:641
                  CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
                  CONGRUENT_CALL2(&KJfill_, stream_);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:642
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, Dcircular_id_prestringYprint_internalsVio, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:643
                  T18 = CALL2(&Knew_print_reference_idYprint_internalsVioMM0, stream_, refF16);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:643
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, T18, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:644
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, Dcircular_id_poststringYprint_internalsVio, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:645
                  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
                  CONGRUENT_CALL3(stream_, &K53, &KPempty_vectorVKi);
                  // /opt/opendylan-2013.1/sources/io/print.dylan:646
                  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
                  CONGRUENT_CALL3(remaining_, stream_, &KPempty_vectorVKi);
                }
                // /opt/opendylan-2013.1/sources/io/print.dylan:631
              }
              // /opt/opendylan-2013.1/sources/io/print.dylan:631
            }
            // /opt/opendylan-2013.1/sources/io/print.dylan:606
          } else {
            // /opt/opendylan-2013.1/sources/io/print.dylan:613
            T13 = CALL1(&KheadVKd, remaining_);
            // /opt/opendylan-2013.1/sources/io/print.dylan:613
            CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
            CONGRUENT_CALL3(T13, stream_, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:606
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:606
        // /opt/opendylan-2013.1/sources/io/print.dylan:594
        T19 = CALL1(&KtailVKd, remaining_);
        // /opt/opendylan-2013.1/sources/io/print.dylan:595
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T20 = CONGRUENT_CALL2(count_, (D) 5);
        // /opt/opendylan-2013.1/sources/io/print.dylan:594
        remaining_T = T19;
        count_T = T20;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
      T21 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/io/print.dylan:594
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:588
  // /opt/opendylan-2013.1/sources/io/print.dylan:586
  T23 = T22;
  L1: ;
  // /opt/opendylan-2013.1/sources/io/print.dylan:586
  // /opt/opendylan-2013.1/sources/io/print.dylan:585
  MV_SET_COUNT(0);
  return(T23);
}

D Kwrite_class_nameYprint_internalsVioMM0I (D object_, D stream_) {
  D name_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:851
  // /opt/opendylan-2013.1/sources/io/print.dylan:853
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  name_ = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:854
  if (name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:855
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4 = CONGRUENT_CALL2(&KLbyte_stringGVKd, name_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:855
    CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
    T5 = CONGRUENT_CALL1(T4);
    // /opt/opendylan-2013.1/sources/io/print.dylan:855
    T6 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:857
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T7 = CONGRUENT_CALL3(stream_, &K260, &KPempty_vectorVKi);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:854
  // /opt/opendylan-2013.1/sources/io/print.dylan:851
  MV_SET_COUNT(0);
  return(T8);
}

static D Kanonymous_of_print_objectF266I (D stream_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:832
  // /opt/opendylan-2013.1/sources/io/print.dylan:833
  ENGINE_NODE_CALL_PROLOG(&Kprint_specializerYprint_internalsVio, &K267, 2);
  T1 = ENGINE_NODE_CALL2(&K267, CREF(0), stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:832
  MV_SET_COUNT(0);
  return(T1);
}

D Kprint_specializerYprint_internalsVioMM0I (D type_, D stream_) {
  D T3;

  // /opt/opendylan-2013.1/sources/io/print.dylan:766
  // /opt/opendylan-2013.1/sources/io/print.dylan:768
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  T3 = CONGRUENT_CALL3(type_, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:766
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYprint_internalsVioMM1I (D type_, D stream_) {
  D name_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:771
  // /opt/opendylan-2013.1/sources/io/print.dylan:772
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  name_ = CONGRUENT_CALL1(type_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:773
  if (name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:774
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4 = CONGRUENT_CALL2(&KLbyte_stringGVKd, name_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:774
    CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
    T5 = CONGRUENT_CALL1(T4);
    // /opt/opendylan-2013.1/sources/io/print.dylan:774
    T6 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:776
    CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
    T7 = CONGRUENT_CALL3(type_, stream_, &KPempty_vectorVKi);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:773
  // /opt/opendylan-2013.1/sources/io/print.dylan:771
  MV_SET_COUNT(0);
  return(T8);
}

D Kprint_specializerYprint_internalsVioMM2I (D type_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/print.dylan:780
  // /opt/opendylan-2013.1/sources/io/print.dylan:781
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K306, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:782
  T4 = SLOT_VALUE_INITD(type_, 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:782
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  CONGRUENT_CALL3(T4, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:783
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K303, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:780
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYprint_internalsVioMM3I (D type_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/print.dylan:786
  // /opt/opendylan-2013.1/sources/io/print.dylan:787
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K302, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:788
  T4 = SLOT_VALUE_INITD(type_, 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:788
  Kprint_specializerYprint_internalsVioMM1I(T4, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:789
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K303, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:786
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYprint_internalsVioMM4I (D type_, D stream_) {
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/io/print.dylan:792
  // /opt/opendylan-2013.1/sources/io/print.dylan:794
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K298, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:797
  T4 = SLOT_VALUE_INITD(type_, 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:797
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  CONGRUENT_CALL3(T4, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:798
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K299, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:799
  T5 = SLOT_VALUE_INITD(type_, 2);
  // /opt/opendylan-2013.1/sources/io/print.dylan:799
  CONGRUENT_CALL_PROLOG(&KprintYprintVio, 3);
  CONGRUENT_CALL3(T5, stream_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:800
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T3 = CONGRUENT_CALL3(stream_, &K35, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:792
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYprint_internalsVioMM5I (D type_, D stream_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_6 T5 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:803
  // /opt/opendylan-2013.1/sources/io/print.dylan:805
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_specializerF292, 1, type_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:805
  T5.vector_element_[0] = IKJbody_;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = IKJprefix_;
  T5.vector_element_[3] = &K33;
  T5.vector_element_[4] = IKJsuffix_;
  T5.vector_element_[5] = &K35;
  // /opt/opendylan-2013.1/sources/io/print.dylan:805
  CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
  T4 = CONGRUENT_CALL2(stream_, &T5);
  // /opt/opendylan-2013.1/sources/io/print.dylan:803
  MV_SET_COUNT(0);
  return(T4);
}

static D Kanonymous_of_print_specializerF292I (D stream_) {
  D T1;
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:805
  // /opt/opendylan-2013.1/sources/io/print.dylan:806
  CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K293);
  // /opt/opendylan-2013.1/sources/io/print.dylan:807
  CALL2(&Kpprint_newlineYpprintVio, &KJfill_, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:809
  T2 = SLOT_VALUE_INITD(CREF(0), 1);
  // /opt/opendylan-2013.1/sources/io/print.dylan:809
  CALL2(&KprintYprintVio, T2, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:810
  CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K230);
  // /opt/opendylan-2013.1/sources/io/print.dylan:811
  CALL2(&Kpprint_newlineYpprintVio, IKJlinear_, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:812
  T3 = SLOT_VALUE_INITD(CREF(0), 2);
  // /opt/opendylan-2013.1/sources/io/print.dylan:812
  T1 = CALL2(&KprintYprintVio, T3, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:805
  return(T1);
}

static D Kanonymous_of_print_objectF316I (D stream_) {
  D name_;
  D T3;
  D T4;
  D T5;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:696
  // /opt/opendylan-2013.1/sources/io/print.dylan:697
  CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K319);
  // /opt/opendylan-2013.1/sources/io/print.dylan:698
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  name_ = CONGRUENT_CALL1(CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:699
  if (name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:700
    CALL2(&Kwrite_elementYstreams_protocolVcommon_dylan, stream_, C(' '));
    // /opt/opendylan-2013.1/sources/io/print.dylan:701
    CALL2(&Kpprint_newlineYpprintVio, &KJfill_, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:702
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T3 = CONGRUENT_CALL2(&KLbyte_stringGVKd, name_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:702
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T3);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:699
  // /opt/opendylan-2013.1/sources/io/print.dylan:704
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  CONGRUENT_CALL1(CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:705
  CALL2(&Kwrite_elementYstreams_protocolVcommon_dylan, stream_, C(' '));
  // /opt/opendylan-2013.1/sources/io/print.dylan:706
  CALL2(&Kpprint_newlineYpprintVio, &KJfill_, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:707
  T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF321, 1, CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:707
  T5 = CALL7(&Kpprint_logical_blockYpprintVio, stream_, IKJbody_, T4, IKJprefix_, &K320, IKJsuffix_, &K303);
  // /opt/opendylan-2013.1/sources/io/print.dylan:696
  return(T5);
}

static D Kanonymous_of_print_objectF321I (D stream_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:707
  // /opt/opendylan-2013.1/sources/io/print.dylan:708
  T1 = CALL2(&Kprint_function_specializersYprint_internalsVioMM0, CREF(0), stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:707
  return(T1);
}

D Kprint_function_specializersYprint_internalsVioMM0I (D object_, D stream_) {
  D specializers_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_6 T9 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/print.dylan:713
  // /opt/opendylan-2013.1/sources/io/print.dylan:715
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  specializers_ = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:716
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(specializers_, &KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:716
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:716
    T7 = &KPfalseVKi;
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:717
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    CONGRUENT_CALL2(stream_, C(' '));
    // /opt/opendylan-2013.1/sources/io/print.dylan:718
    CONGRUENT_CALL_PROLOG(&Kpprint_newlineYpprintVio, 2);
    CONGRUENT_CALL2(&KJfill_, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:719
    T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_function_specializersF326, 1, specializers_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:719
    T9.vector_element_[0] = IKJbody_;
    T9.vector_element_[1] = T5;
    T9.vector_element_[2] = IKJprefix_;
    T9.vector_element_[3] = &K320;
    T9.vector_element_[4] = IKJsuffix_;
    T9.vector_element_[5] = &K303;
    // /opt/opendylan-2013.1/sources/io/print.dylan:719
    CONGRUENT_CALL_PROLOG(&Kpprint_logical_blockYpprintVio, 2);
    T6 = CONGRUENT_CALL2(stream_, &T9);
    T8 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:716
  // /opt/opendylan-2013.1/sources/io/print.dylan:713
  MV_SET_COUNT(0);
  return(T8);
}

static D Kanonymous_of_print_function_specializersF326I (D stream_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:719
  // /opt/opendylan-2013.1/sources/io/print.dylan:720
  T1 = CALL3(&Kprint_itemsYprint_internalsVioMM0, CREF(0), &Kprint_specializerYprint_internalsVio, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:719
  return(T1);
}

static D Kanonymous_of_print_objectF333I (D stream_) {
  D name_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:684
  // /opt/opendylan-2013.1/sources/io/print.dylan:685
  CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K334);
  // /opt/opendylan-2013.1/sources/io/print.dylan:686
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  name_ = CONGRUENT_CALL1(CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:687
  if (name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:688
    CALL2(&Kwrite_elementYstreams_protocolVcommon_dylan, stream_, C(' '));
    // /opt/opendylan-2013.1/sources/io/print.dylan:689
    CALL2(&Kpprint_newlineYpprintVio, &KJfill_, stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:690
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T3 = CONGRUENT_CALL2(&KLbyte_stringGVKd, name_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:690
    CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
    T4 = CONGRUENT_CALL1(T3);
    // /opt/opendylan-2013.1/sources/io/print.dylan:690
    T5 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T4);
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:687
    T6 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:687
  // /opt/opendylan-2013.1/sources/io/print.dylan:684
  return(T7);
}

static D Kanonymous_of_print_objectF341I (D stream_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:671
  // /opt/opendylan-2013.1/sources/io/print.dylan:672
  T1 = CALL3(&Kprint_itemsYprint_internalsVioMM0, CREF(0), &KprintYprintVio, stream_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:671
  return(T1);
}

static D Kanonymous_of_print_objectF347I (D stream_) {
  D T1;
  D T2;
  D T3;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:578
  // /opt/opendylan-2013.1/sources/io/print.dylan:579
  T4 = primitive_idQ(CREF(0),&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:579
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:579
    T2 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T3 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:580
    T1 = CALL2(&Kprint_listYprint_internalsVioMM0, CREF(0), stream_);
    T3 = T1;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:579
  // /opt/opendylan-2013.1/sources/io/print.dylan:578
  return(T3);
}

D Kwrite_string_escapedYprint_internalsVioMM1I (D stream_, D object_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/io/print.dylan:557
  // /opt/opendylan-2013.1/sources/io/print.dylan:559
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  CONGRUENT_CALL2(stream_, C('\"'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T4 = T3;
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/io/print.dylan:560
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/io/print.dylan:560
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/io/print.dylan:560
    T10 = CALL3(T7, object_, T9, T5);
    // /opt/opendylan-2013.1/sources/io/print.dylan:560
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:560
      T11 = CALL2(T8, object_, T9);
      // /opt/opendylan-2013.1/sources/io/print.dylan:561
      CALL3(&Kwrite_char_maybe_escapeYprint_internalsVioMM0, stream_, T11, C('\"'));
      // /opt/opendylan-2013.1/sources/io/print.dylan:560
      T12 = CALL2(T6, object_, T9);
      // /opt/opendylan-2013.1/sources/io/print.dylan:560
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:560
    // /opt/opendylan-2013.1/sources/io/print.dylan:560
  // /opt/opendylan-2013.1/sources/io/print.dylan:563
  CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
  T13 = CONGRUENT_CALL2(stream_, C('\"'));
  // /opt/opendylan-2013.1/sources/io/print.dylan:557
  MV_SET_COUNT(0);
  return(T13);
}

static D Kanonymous_of_print_objectF372I (D stream_) {
  D obj_class_;
  D cname_;
  D T4;
  D T5;
  D oname_;
  D T7;
  D T8;
  D T9;
  D T10;
  DADDR T11;
  D T12;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:368
  // /opt/opendylan-2013.1/sources/io/print.dylan:369
  obj_class_ = Kobject_classVKdI(CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:370
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  cname_ = CONGRUENT_CALL1(obj_class_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:371
  if (cname_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:372
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4 = CONGRUENT_CALL2(&KLbyte_stringGVKd, cname_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:372
    CONGRUENT_CALL_PROLOG(&Kas_lowercaseVKd, 1);
    T5 = CONGRUENT_CALL1(T4);
    // /opt/opendylan-2013.1/sources/io/print.dylan:372
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T5);
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:374
    CALL2(&KprintYprintVio, obj_class_, stream_);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:371
  // /opt/opendylan-2013.1/sources/io/print.dylan:376
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  oname_ = CONGRUENT_CALL1(CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:377
  if (oname_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:378
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K40);
    // /opt/opendylan-2013.1/sources/io/print.dylan:379
    T7 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, oname_);
    T10 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:381
    CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, &K40);
    // /opt/opendylan-2013.1/sources/io/print.dylan:382
    T11 = primitive_cast_pointer_as_raw(CREF(0));
    // /opt/opendylan-2013.1/sources/io/print.dylan:382
    T12 = primitive_wrap_machine_word(T11);
    // /opt/opendylan-2013.1/sources/io/print.dylan:382
    T8 = CALL1(&Kmachine_word_to_stringYcommon_extensionsVcommon_dylan, T12);
    // /opt/opendylan-2013.1/sources/io/print.dylan:382
    T9 = CALL2(&KwriteYstreams_protocolVcommon_dylan, stream_, T8);
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:377
  // /opt/opendylan-2013.1/sources/io/print.dylan:368
  return(T10);
}

D KprintYprintVioMM1I (D object_, D stream_, D Urest_, D level_, D length_, D circleQ_, D prettyQ_, D escapeQ_) {
  volatile D T9;
  volatile D levelF10;
  volatile D T11;
  volatile D lengthF12;
  volatile D T13;
  volatile D prettyQF14;
  volatile D T15;
  volatile D escapeQF16;
  volatile D Pold_valuePF17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D Pold_valuePF21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D Pold_valuePF25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D Pold_valuePF29;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43;

  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  T34 = primitive_idQ(level_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:247
    T9 = DunsuppliedYcommon_extensionsVcommon_dylan;
    levelF10 = T9;
  } else {
    levelF10 = level_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  T35 = primitive_idQ(length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:247
    T11 = DunsuppliedYcommon_extensionsVcommon_dylan;
    lengthF12 = T11;
  } else {
    lengthF12 = length_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  T36 = primitive_idQ(prettyQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:247
    T13 = DunsuppliedYcommon_extensionsVcommon_dylan;
    prettyQF14 = T13;
  } else {
    prettyQF14 = prettyQ_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  T37 = primitive_idQ(escapeQ_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:247
    T15 = DunsuppliedYcommon_extensionsVcommon_dylan;
    escapeQF16 = T15;
  } else {
    escapeQF16 = escapeQ_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  // /opt/opendylan-2013.1/sources/io/print.dylan:253
  Pold_valuePF17 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:253
  ENTER_UNWIND_FRAME(T18);
  if (!nlx_setjmp(FRAME_DEST(T18))) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    T38 = primitive_idQ(lengthF12,DunsuppliedYcommon_extensionsVcommon_dylan);
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:253
      T19 = primitive_read_thread_variable(Tprint_lengthTYprintVio);
      T20 = T19;
    } else {
      T20 = lengthF12;
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    primitive_write_thread_variable(Tprint_lengthTYprintVio, T20);
    // /opt/opendylan-2013.1/sources/io/print.dylan:254
    Pold_valuePF21 = primitive_read_thread_variable(Tprint_levelTYprintVio);
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    ENTER_UNWIND_FRAME(T22);
    if (!nlx_setjmp(FRAME_DEST(T22))) {
      // /opt/opendylan-2013.1/sources/io/print.dylan:254
      T39 = primitive_idQ(levelF10,DunsuppliedYcommon_extensionsVcommon_dylan);
      // /opt/opendylan-2013.1/sources/io/print.dylan:254
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:254
        T23 = primitive_read_thread_variable(Tprint_levelTYprintVio);
        T24 = T23;
      } else {
        T24 = levelF10;
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:254
      // /opt/opendylan-2013.1/sources/io/print.dylan:254
      primitive_write_thread_variable(Tprint_levelTYprintVio, T24);
      // /opt/opendylan-2013.1/sources/io/print.dylan:255
      Pold_valuePF25 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
      // /opt/opendylan-2013.1/sources/io/print.dylan:253
      ENTER_UNWIND_FRAME(T26);
      if (!nlx_setjmp(FRAME_DEST(T26))) {
        // /opt/opendylan-2013.1/sources/io/print.dylan:255
        T40 = primitive_idQ(prettyQF14,DunsuppliedYcommon_extensionsVcommon_dylan);
        // /opt/opendylan-2013.1/sources/io/print.dylan:255
        if (T40 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:255
          T27 = primitive_read_thread_variable(Tprint_prettyQTYprintVio);
          T28 = T27;
        } else {
          // /opt/opendylan-2013.1/sources/io/print.dylan:247
          primitive_type_check(prettyQF14, &KLbooleanGVKd);
          T41 = prettyQF14;
          T28 = T41;
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:255
        // /opt/opendylan-2013.1/sources/io/print.dylan:255
        primitive_write_thread_variable(Tprint_prettyQTYprintVio, T28);
        // /opt/opendylan-2013.1/sources/io/print.dylan:256
        Pold_valuePF29 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
        // /opt/opendylan-2013.1/sources/io/print.dylan:253
        ENTER_UNWIND_FRAME(T30);
        if (!nlx_setjmp(FRAME_DEST(T30))) {
          // /opt/opendylan-2013.1/sources/io/print.dylan:256
          T42 = primitive_idQ(escapeQF16,DunsuppliedYcommon_extensionsVcommon_dylan);
          // /opt/opendylan-2013.1/sources/io/print.dylan:256
          if (T42 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/print.dylan:256
            T31 = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
            T32 = T31;
          } else {
            // /opt/opendylan-2013.1/sources/io/print.dylan:247
            primitive_type_check(escapeQF16, &KLbooleanGVKd);
            T43 = escapeQF16;
            T32 = T43;
          }
          // /opt/opendylan-2013.1/sources/io/print.dylan:256
          // /opt/opendylan-2013.1/sources/io/print.dylan:256
          primitive_write_thread_variable(Tprint_escapeQTYprintVio, T32);
          // /opt/opendylan-2013.1/sources/io/print.dylan:257
          T33 = Kmaybe_print_objectYprint_internalsVioMM0I(object_, stream_);
          // /opt/opendylan-2013.1/sources/io/print.dylan:253
          FALL_THROUGH_UNWIND(T33);
        }
        // /opt/opendylan-2013.1/sources/io/print.dylan:256
        primitive_write_thread_variable(Tprint_escapeQTYprintVio, Pold_valuePF29);
        // /opt/opendylan-2013.1/sources/io/print.dylan:253
        CONTINUE_UNWIND();
        // /opt/opendylan-2013.1/sources/io/print.dylan:253
        FALL_THROUGH_UNWIND(T33);
      }
      // /opt/opendylan-2013.1/sources/io/print.dylan:255
      primitive_write_thread_variable(Tprint_prettyQTYprintVio, Pold_valuePF25);
      // /opt/opendylan-2013.1/sources/io/print.dylan:253
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/io/print.dylan:253
      FALL_THROUGH_UNWIND(T33);
    }
    // /opt/opendylan-2013.1/sources/io/print.dylan:254
    primitive_write_thread_variable(Tprint_levelTYprintVio, Pold_valuePF21);
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/print.dylan:253
    FALL_THROUGH_UNWIND(T33);
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:253
  primitive_write_thread_variable(Tprint_lengthTYprintVio, Pold_valuePF17);
  // /opt/opendylan-2013.1/sources/io/print.dylan:253
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/io/print.dylan:247
  MV_SET_COUNT(0);
  return(T33);
}

static D Kanonymous_of_pprint_logical_blockF401I (D pretty_stream_) {
  D T1;
  D orig_target_;
  D T3;
  D T4;
  D T5;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/print.dylan:1127
  // /opt/opendylan-2013.1/sources/io/print.dylan:1128
  T5 = primitive_idQ(pretty_stream_,CREF(0));
  // /opt/opendylan-2013.1/sources/io/print.dylan:1128
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1129
    T1 = CALL1(CREF(1), CREF(2));
    T4 = T1;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1131
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    orig_target_ = CONGRUENT_CALL1(CREF(2));
    // /opt/opendylan-2013.1/sources/io/print.dylan:1132
    CALL2(&Kinner_stream_setterYstreamsVio, pretty_stream_, CREF(2));
    // /opt/opendylan-2013.1/sources/io/print.dylan:1133
    CALL1(CREF(1), CREF(2));
    // /opt/opendylan-2013.1/sources/io/print.dylan:1134
    CONGRUENT_CALL_PROLOG(&Kinner_stream_setterYstreamsVio, 2);
    CONGRUENT_CALL2(orig_target_, CREF(2));
    // /opt/opendylan-2013.1/sources/io/print.dylan:1134
    T3 = orig_target_;
    MV_SET_ELT(0, orig_target_);
    MV_SET_COUNT(1);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1128
  // /opt/opendylan-2013.1/sources/io/print.dylan:1127
  return(T4);
}

D Kprint_to_stringYprintVioMM0I (D object_, D args_, D level_, D length_, D circleQ_, D prettyQ_, D escapeQ_) {
  D T8_0;
  D s_;
  D T10_0;
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12_0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  primitive_type_check(level_, &K425);
  level_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  primitive_type_check(length_, &K425);
  length_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  primitive_type_check(circleQ_, &KLbooleanGVKd);
  circleQ_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  primitive_type_check(prettyQ_, &KLbooleanGVKd);
  prettyQ_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  primitive_type_check(escapeQ_, &KLbooleanGVKd);
  escapeQ_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:994
  T11.vector_element_[0] = IKJcontents_;
  T11.vector_element_[1] = &KPempty_stringVKi;
  T11.vector_element_[2] = &KJdirection_;
  T11.vector_element_[3] = &KJoutput_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:994
  T10_0 = KLbyte_string_streamGZ32ZconstructorYstreams_internalsVioMM0I(&KLbyte_string_streamGYstreamsVio, &T11, &KPunboundVKi, &KLobjectGVKd, &KPunboundVKi, &KPempty_stringVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:994
  s_ = T10_0;
  // /opt/opendylan-2013.1/sources/io/print.dylan:995
  MEP_APPLY3(&KprintYprintVioMM0, &KPempty_listVKi, object_, s_, args_);
  // /opt/opendylan-2013.1/sources/io/print.dylan:996
  T12_0 = Kstream_contentsYstreams_protocolVcommon_dylanMioM0I(s_, &KPempty_vectorVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  T8_0 = T12_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T12_0);
    primitive_type_check(T8_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:988
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLprint_referenceGZ32ZconstructorYprint_internalsVioMM0I (D class_, D init_args_, D Uunique_print_reference_object_) {
  D T4;
  D Uunique_print_reference_objectF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  T8 = primitive_idQ(Uunique_print_reference_object_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJobject_;
    T10 = KerrorVKdMM1I(&K102, &T9);
    // /opt/opendylan-2013.1/sources/io/print.dylan:112
    T4 = T10;
    Uunique_print_reference_objectF5 = T4;
  } else {
    Uunique_print_reference_objectF5 = Uunique_print_reference_object_;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  T6 = primitive_object_allocate_filled(4,&KLprint_referenceGYprint_internalsVioW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_print_reference_objectF5, T6, 0);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 1);
  SLOT_VALUE_SETTER((D) 1, T6, 2);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kstream_at_endQYstreams_protocolVcommon_dylanMioM5I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1071
  // /opt/opendylan-2013.1/sources/io/print.dylan:1073
  T2 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1073
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1073
    T8 = SLOT_VALUE_INITD(stream_, 5);
    T3 = T8;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1073
  // /opt/opendylan-2013.1/sources/io/print.dylan:1073
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1073
    T6_0 = &KPfalseVKi;
    T7_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1074
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1074
    CONGRUENT_CALL_PROLOG(&Kstream_at_endQYstreams_protocolVcommon_dylan, 1);
    T5_0 = CONGRUENT_CALL1(T4);
    T7_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1073
  // /opt/opendylan-2013.1/sources/io/print.dylan:1071
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kstream_openQYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1055
  // /opt/opendylan-2013.1/sources/io/print.dylan:1057
  T2 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1057
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1057
    T8 = SLOT_VALUE_INITD(stream_, 5);
    T3 = T8;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1057
  // /opt/opendylan-2013.1/sources/io/print.dylan:1057
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1057
    T6_0 = &KPfalseVKi;
    T7_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1058
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1058
    CONGRUENT_CALL_PROLOG(&Kstream_openQYstreams_protocolVcommon_dylan, 1);
    T5_0 = CONGRUENT_CALL1(T4);
    T7_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1057
  // /opt/opendylan-2013.1/sources/io/print.dylan:1055
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdiscard_outputYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1033
  // /opt/opendylan-2013.1/sources/io/print.dylan:1035
  T2 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1035
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1035
    T8 = SLOT_VALUE_INITD(stream_, 5);
    T3 = T8;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1035
  // /opt/opendylan-2013.1/sources/io/print.dylan:1035
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1035
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1036
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1036
    CONGRUENT_CALL_PROLOG(&Kdiscard_outputYstreams_protocolVcommon_dylan, 1);
    T5 = CONGRUENT_CALL1(T4);
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1035
  // /opt/opendylan-2013.1/sources/io/print.dylan:1033
  MV_SET_COUNT(0);
  return(T7);
}

D Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2I (D stream_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1026
  // /opt/opendylan-2013.1/sources/io/print.dylan:1028
  T2 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1028
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1028
    T8 = SLOT_VALUE_INITD(stream_, 5);
    T3 = T8;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1028
  // /opt/opendylan-2013.1/sources/io/print.dylan:1028
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1028
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1029
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T4 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1029
    CONGRUENT_CALL_PROLOG(&Ksynchronize_outputYstreams_protocolVcommon_dylan, 1);
    T5 = CONGRUENT_CALL1(T4);
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1028
  // /opt/opendylan-2013.1/sources/io/print.dylan:1026
  MV_SET_COUNT(0);
  return(T7);
}

D Kforce_outputYstreams_protocolVcommon_dylanMioM2I (D stream_, D Urest_, D synchronizeQ_) {
  D synchronizeQF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/print.dylan:1019
  // /opt/opendylan-2013.1/sources/io/print.dylan:1019
  primitive_type_check(synchronizeQ_, &KLbooleanGVKd);
  synchronizeQF4 = synchronizeQ_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1021
  T5 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1021
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1021
    T11 = SLOT_VALUE_INITD(stream_, 5);
    T6 = T11;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1021
  // /opt/opendylan-2013.1/sources/io/print.dylan:1021
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1021
    T9 = &KPfalseVKi;
    T10 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1022
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T7 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1022
    T12.vector_element_[0] = IKJsynchronizeQ_;
    T12.vector_element_[1] = synchronizeQF4;
    // /opt/opendylan-2013.1/sources/io/print.dylan:1022
    CONGRUENT_CALL_PROLOG(&Kforce_outputYstreams_protocolVcommon_dylan, 2);
    T8 = CONGRUENT_CALL2(T7, &T12);
    T10 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1021
  // /opt/opendylan-2013.1/sources/io/print.dylan:1019
  MV_SET_COUNT(0);
  return(T10);
}

D KwriteYstreams_protocolVcommon_dylanMioM5I (D stream_, D seq_, D Urest_, D start_, D stop_) {
  D startF6;
  D T7;
  D T8;
  D stopF9;
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
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  T16 = primitive_idQ(stop_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1013
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(seq_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1011
    T8 = T7;
    // /opt/opendylan-2013.1/sources/io/print.dylan:1011
    primitive_type_check(T8, &KLintegerGVKd);
    T17 = T8;
    stopF9 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1011
    primitive_type_check(stop_, &KLintegerGVKd);
    T18 = stop_;
    stopF9 = T18;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  // /opt/opendylan-2013.1/sources/io/print.dylan:1014
  T10 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1014
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1014
    T19 = SLOT_VALUE_INITD(stream_, 5);
    T11 = T19;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1014
  // /opt/opendylan-2013.1/sources/io/print.dylan:1014
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1014
    T14 = &KPfalseVKi;
    T15 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1015
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T12 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1015
    T20.vector_element_[0] = &KJstart_;
    T20.vector_element_[1] = startF6;
    T20.vector_element_[2] = &KJend_;
    T20.vector_element_[3] = stopF9;
    // /opt/opendylan-2013.1/sources/io/print.dylan:1015
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T13 = CONGRUENT_CALL3(T12, seq_, &T20);
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1014
  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  MV_SET_COUNT(0);
  return(T15);
}

D Kwrite_elementYstreams_protocolVcommon_dylanMioM5I (D stream_, D ele_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1004
  // /opt/opendylan-2013.1/sources/io/print.dylan:1006
  T3 = primitive_read_thread_variable(Tprint_circleQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/print.dylan:1006
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1006
    T9 = SLOT_VALUE_INITD(stream_, 5);
    T4 = T9;
  } else {
    T4 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1006
  // /opt/opendylan-2013.1/sources/io/print.dylan:1006
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1006
    T7 = &KPfalseVKi;
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/print.dylan:1007
    CONGRUENT_CALL_PROLOG(&Kinner_streamYstreamsVio, 1);
    T5 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/print.dylan:1007
    CONGRUENT_CALL_PROLOG(&Kwrite_elementYstreams_protocolVcommon_dylan, 2);
    T6 = CONGRUENT_CALL2(T5, ele_);
    T8 = T6;
  }
  // /opt/opendylan-2013.1/sources/io/print.dylan:1006
  // /opt/opendylan-2013.1/sources/io/print.dylan:1004
  MV_SET_COUNT(0);
  return(T8);
}


/* SYSTEM INIT CODE */

void _Init_io__X_print_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbody_);
    if (T0 != &KJbody_) {
      primitive_repeated_slot_value_setter(T0, &K404, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K403, 1, 6);
      IKJbody_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprefix_);
    if (T0 != &KJprefix_) {
      primitive_repeated_slot_value_setter(T0, &K404, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K403, 1, 2);
      IKJprefix_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsuffix_);
    if (T0 != &KJsuffix_) {
      primitive_repeated_slot_value_setter(T0, &K404, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K403, 1, 8);
      IKJsuffix_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJinner_stream_);
    if (T0 != &KJinner_stream_) {
      primitive_repeated_slot_value_setter(T0, &K110, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K107, 1, 6);
      IKJinner_stream_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_lock_);
    if (T0 != &KJstream_lock_) {
      primitive_repeated_slot_value_setter(T0, &K110, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K107, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbase_);
    if (T0 != &KJbase_) {
      IKJbase_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJlinear_);
    if (T0 != &KJlinear_) {
      IKJlinear_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJlevel_);
    if (T0 != &KJlevel_) {
      primitive_repeated_slot_value_setter(T0, &K429, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K392, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K380, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJlength_);
    if (T0 != &KJlength_) {
      primitive_repeated_slot_value_setter(T0, &K429, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K392, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K380, 1, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcircleQ_);
    if (T0 != &KJcircleQ_) {
      primitive_repeated_slot_value_setter(T0, &K429, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K392, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K380, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprettyQ_);
    if (T0 != &KJprettyQ_) {
      primitive_repeated_slot_value_setter(T0, &K429, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K392, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K380, 1, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJescapeQ_);
    if (T0 != &KJescapeQ_) {
      primitive_repeated_slot_value_setter(T0, &K429, 1, 8);
      primitive_repeated_slot_value_setter(T0, &K392, 1, 8);
      primitive_repeated_slot_value_setter(T0, &K380, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcolumn_);
    if (T0 != &KJcolumn_) {
      primitive_repeated_slot_value_setter(T0, &K404, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K403, 1, 0);
      IKJcolumn_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJper_line_prefix_);
    if (T0 != &KJper_line_prefix_) {
      primitive_repeated_slot_value_setter(T0, &K404, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K403, 1, 4);
      IKJper_line_prefix_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmandatory_);
    if (T0 != &KJmandatory_) {
      IKJmandatory_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcontents_);
    if (T0 != &KJcontents_) {
      IKJcontents_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtypeQ_);
    if (T0 != &KJtypeQ_) {
      primitive_repeated_slot_value_setter(T0, &K472, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K466, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJidentityQ_);
    if (T0 != &KJidentityQ_) {
      primitive_repeated_slot_value_setter(T0, &K472, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K466, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsynchronizeQ_);
    if (T0 != &KJsynchronizeQ_) {
      primitive_repeated_slot_value_setter(T0, &K502, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K501, 1, 0);
      IKJsynchronizeQ_ = T0;
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:112
  T0 = KPadd_classVKeI(&KLprint_referenceGYprint_internalsVio);
  goto I6;
}
I6:

  return;
}

/* USER INIT CODE */

void _Init_io__X_print_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/print.dylan:42
  T0 = Tdefault_lengthTYprint_internalsVio;
  // /opt/opendylan-2013.1/sources/io/print.dylan:42
  Tprint_lengthTYprintVio = primitive_allocate_thread_variable(T0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:42
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/print.dylan:47
  T0 = Tdefault_levelTYprint_internalsVio;
  // /opt/opendylan-2013.1/sources/io/print.dylan:47
  Tprint_levelTYprintVio = primitive_allocate_thread_variable(T0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:47
  T1 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/print.dylan:51
  T0 = Tdefault_circleQTYprint_internalsVio;
  // /opt/opendylan-2013.1/sources/io/print.dylan:51
  Tprint_circleQTYprintVio = primitive_allocate_thread_variable(T0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:51
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/print.dylan:55
  T0 = Tdefault_prettyQTYprint_internalsVio;
  // /opt/opendylan-2013.1/sources/io/print.dylan:55
  Tprint_prettyQTYprintVio = primitive_allocate_thread_variable(T0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:55
  T1 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/print.dylan:60
  T0 = Tdefault_escapeQTYprint_internalsVio;
  // /opt/opendylan-2013.1/sources/io/print.dylan:60
  Tprint_escapeQTYprintVio = primitive_allocate_thread_variable(T0);
  // /opt/opendylan-2013.1/sources/io/print.dylan:60
  T1 = &KPfalseVKi;
  goto I4;
}
I4:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:65
  Tprint_depthTYprint_internalsVio = primitive_allocate_thread_variable((D) -3);
  // /opt/opendylan-2013.1/sources/io/print.dylan:65
  T0 = &KPfalseVKi;
  goto I5;
}
I5:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1004
  T0 = KPadd_a_methodVKnI(&Kwrite_elementYstreams_protocolVcommon_dylan, &Kwrite_elementYstreams_protocolVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I493;
}
I493:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1011
  T0 = KPadd_a_methodVKnI(&KwriteYstreams_protocolVcommon_dylan, &KwriteYstreams_protocolVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I490;
}
I490:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1019
  T0 = KPadd_a_methodVKnI(&Kforce_outputYstreams_protocolVcommon_dylan, &Kforce_outputYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I487;
}
I487:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1026
  T0 = KPadd_a_methodVKnI(&Ksynchronize_outputYstreams_protocolVcommon_dylan, &Ksynchronize_outputYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I484;
}
I484:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1033
  T0 = KPadd_a_methodVKnI(&Kdiscard_outputYstreams_protocolVcommon_dylan, &Kdiscard_outputYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I481;
}
I481:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1055
  T0 = KPadd_a_methodVKnI(&Kstream_openQYstreams_protocolVcommon_dylan, &Kstream_openQYstreams_protocolVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I478;
}
I478:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/print.dylan:1071
  T0 = KPadd_a_methodVKnI(&Kstream_at_endQYstreams_protocolVcommon_dylan, &Kstream_at_endQYstreams_protocolVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I475;
}
I475:

  return;
}


/* eof */
