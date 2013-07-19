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
  D mep_;
} _KLsimple_methodGVKe;

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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLexternal_stream_accessorGYstreams_internalsVio;

typedef struct {
  D wrapper;
} _KLexternal_file_accessorGYstreams_internalsVio;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(13);

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D file_descriptor_;
  D file_position_;
  D asynchronousQ_;
  D accessor_positionableQ_;
  D accessor_preferred_buffer_size_;
  D accessor_at_endQ_;
} _KLnative_file_accessorGYstreams_internalsVio;


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
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW;
extern _KLclassGVKd KLexternal_file_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_file_accessorGYstreams_internalsVioW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe Kaccessor_at_endQYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_at_endQ_setterYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
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
extern _KLincremental_generic_functionGVKe Kaccessor_positionableQYstreams_internalsVio;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_methodGVKe Kunix_fd_infoYio_internalsVio;
extern _KLsimple_methodGVKe Kunix_lseekYio_internalsVio;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJinput_;
extern _KLsymbolGVKd KJif_exists_;
extern _KLsymbolGVKd KJif_does_not_exist_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_methodGVKe Kunix_closeYio_internalsVio;
D Kunix_errorYio_internalsVioI (D syscall_, D Urest_, D errno_);
extern _KLsymbolGVKd KJabortQ_;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLincremental_generic_functionGVKe Kstream_input_bufferYstreams_internalsVio;
extern _KLsimple_methodGVKe Kunix_readYio_internalsVio;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLfile_streamGYstreams_internalsVioW;
extern _KLincremental_generic_functionGVKe Kstream_output_bufferYstreams_internalsVio;
extern _KLsimple_methodGVKe Kunix_writeYio_internalsVio;
extern _KLsimple_methodGVKe Kunix_fsyncYio_internalsVio;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kaccessor_newline_sequenceYstreams_internalsVioMM0;
D Kaccessor_newline_sequenceYstreams_internalsVioMM0I (D);
extern _KLsimple_methodGVKe Kaccessor_synchronizeYstreams_internalsVioMM1;
D Kaccessor_synchronizeYstreams_internalsVioMM1I (D, D);
extern _KLkeyword_methodGVKe Kaccessor_write_fromYstreams_internalsVioMM0;
D Kaccessor_write_fromYstreams_internalsVioMM0I (D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe Kaccessor_read_intoXYstreams_internalsVioMM0;
D Kaccessor_read_intoXYstreams_internalsVioMM0I (D, D, D, D, D, D);
extern _KLgetter_methodGVKi Kaccessor_preferred_buffer_sizeYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kaccessor_position_setterYstreams_internalsVioMM0;
D Kaccessor_position_setterYstreams_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kaccessor_positionYstreams_internalsVioMM0;
D Kaccessor_positionYstreams_internalsVioMM0I (D accessor_);
extern _KLgetter_methodGVKi Kaccessor_positionableQYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_positionableQYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kaccessor_sizeYstreams_internalsVioMM0;
D Kaccessor_sizeYstreams_internalsVioMM0I (D);
extern _KLsetter_methodGVKi Kaccessor_at_endQ_setterYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_at_endQ_setterYstreams_internalsVioRD_ioRD_0;
extern _KLgetter_methodGVKi Kaccessor_at_endQYstreams_internalsVioMM0;
extern _KLmethod_domainGVKe Kaccessor_at_endQYstreams_internalsVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kaccessor_openQYstreams_internalsVioMM0;
D Kaccessor_openQYstreams_internalsVioMM0I (D);
extern _KLkeyword_methodGVKe Kaccessor_closeYstreams_internalsVioMM0;
D Kaccessor_closeYstreams_internalsVioMM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Kaccessor_openYstreams_internalsVioMM0;
D Kaccessor_openYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kplatform_accessor_classYstreams_internalsVioMM0;
D Kplatform_accessor_classYstreams_internalsVioMM0I (D, D);
extern _KLsimple_methodGVKe Kaccessor_fdYstreams_internalsVioMM0;
D Kaccessor_fdYstreams_internalsVioMM0I (D);
static _KLunionGVKe K32;
static _KLsingletonGVKd K33;
static _KLsignatureAvaluesGVKi K34;
static _KLsimple_object_vectorGVKd_1 K35;
static _KLsimple_object_vectorGVKd_1 K36;
extern _KLclassGVKd KLnative_file_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLnative_file_accessorGYstreams_internalsVioW;
static _KLimplementation_classGVKe K39;
static _KLsimple_object_vectorGVKd_6 K40;
extern _KLkeyword_methodGVKe KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0;
D KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K43;
static _KLsimple_object_vectorGVKd_6 K44;
static _KLunionGVKe K45;
static _KLkeyword_signatureAvaluesGVKi K46;
static _KLsimple_object_vectorGVKd_6 K47;
static _KLsymbolGVKd KJfile_descriptor_;
static _KLsymbolGVKd KJfile_position_;
static _KLsymbolGVKd KJasynchronousQ_;
static _KLbyte_stringGVKd_13 K51;
static _KLbyte_stringGVKd_13 K52;
static _KLbyte_stringGVKd_15 K53;
static _KLsimple_object_vectorGVKd_3 K54;
extern _KLinstance_slot_descriptorGVKe Kfile_descriptorYio_internalsVioHLnative_file_accessorG;
extern _KLinstance_slot_descriptorGVKe Kfile_positionYio_internalsVioHLnative_file_accessorG;
extern _KLinstance_slot_descriptorGVKe KasynchronousQYio_internalsVioHLnative_file_accessorG;
extern _KLinstance_slot_descriptorGVKe Kaccessor_positionableQYstreams_internalsVioHLnative_file_accessorG;
extern _KLinstance_slot_descriptorGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVioHLnative_file_accessorG;
extern _KLinstance_slot_descriptorGVKe Kaccessor_at_endQYstreams_internalsVioHLnative_file_accessorG;
extern _KLsealed_generic_functionGVKe Kaccessor_preferred_buffer_size_setterYio_internalsVio;
extern _KLsetter_methodGVKi Kaccessor_preferred_buffer_size_setterYio_internalsVioMM0;
static _KLpairGVKd K63;
static _KLbyte_stringGVKd_37 K64;
extern _KLsealed_generic_functionGVKe Kaccessor_positionableQ_setterYio_internalsVio;
extern _KLsetter_methodGVKi Kaccessor_positionableQ_setterYio_internalsVioMM0;
static _KLpairGVKd K67;
static _KLbyte_stringGVKd_29 K68;
extern _KLsealed_generic_functionGVKe KasynchronousQYio_internalsVio;
extern _KLgetter_methodGVKi KasynchronousQYio_internalsVioMM0;
static _KLpairGVKd K71;
extern _KLsealed_generic_functionGVKe Kfile_positionYio_internalsVio;
extern _KLsealed_generic_functionGVKe Kfile_position_setterYio_internalsVio;
extern _KLsetter_methodGVKi Kfile_position_setterYio_internalsVioMM0;
static _KLpairGVKd K75;
static _KLbyte_stringGVKd_20 K76;
extern _KLgetter_methodGVKi Kfile_positionYio_internalsVioMM0;
static _KLpairGVKd K78;
extern _KLsealed_generic_functionGVKe Kfile_descriptorYio_internalsVio;
extern _KLsealed_generic_functionGVKe Kfile_descriptor_setterYio_internalsVio;
extern _KLsetter_methodGVKi Kfile_descriptor_setterYio_internalsVioMM0;
static _KLpairGVKd K82;
static _KLbyte_stringGVKd_22 K83;
extern _KLgetter_methodGVKi Kfile_descriptorYio_internalsVioMM0;
static _KLpairGVKd K85;
static _KLbyte_stringGVKd_22 K86;
static _KLsignatureAvaluesGVKi K87;
static _KLsimple_object_vectorGVKd_2 K88;
static _KLsimple_object_vectorGVKd_1 K89;
static _KLsingletonGVKd K90;
static _KLsingletonGVKd K91;
static _KLsymbolGVKd KJfile_;
static _KLbyte_stringGVKd_4 K93;
static _KLkeyword_signatureGVKe K94;
static _KLsimple_object_vectorGVKd_12 K95;
static _KLsymbolGVKd KJfile_size_;
static _KLbyte_stringGVKd_9 K97;
static _KLsimple_object_vectorGVKd_2 K98;
static _KLsimple_object_vectorGVKd_6 K99;
static _KLbyte_stringGVKd_5 K100;
static _KLkeyword_signatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_4 K102;
static _KLsimple_object_vectorGVKd_2 K103;
static _KLsignatureAvaluesGVKi K104;
static _KLsignatureAvaluesGVKi K105;
static _KLsimple_object_vectorGVKd_1 K106;
static _KLsignatureAvaluesGVKi K107;
static _KLbyte_stringGVKd_5 K108;
static _KLbyte_stringGVKd_29 K109;
static _KLsignatureAvaluesGVKi K110;
static _KLsimple_object_vectorGVKd_2 K111;
static _KLbyte_stringGVKd_4 K112;
static _KLkeyword_signatureAvaluesGVKi K113;
static _KLsimple_object_vectorGVKd_2 K114;
static _KLsymbolGVKd KJbuffer_;
static _KLbyte_stringGVKd_6 K116;
static _KLsimple_object_vectorGVKd_4 K117;
static _KLsimple_object_vectorGVKd_1 K118;
static _KLbyte_stringGVKd_5 K119;
static _KLkeyword_signatureAvaluesGVKi K120;
static _KLsimple_object_vectorGVKd_4 K121;
static _KLsymbolGVKd KJreturn_fresh_bufferQ_;
static _KLbyte_stringGVKd_20 K123;
static _KLsimple_object_vectorGVKd_2 K124;
static _KLsimple_object_vectorGVKd_2 K125;
static _KLsignatureGVKe K126;
static _KLsimple_object_vectorGVKd_2 K127;
static _KLbyte_stringGVKd_1 K128;
static _KLsignatureAvaluesGVKi K129;

/* Indirection variables */

static D IKJfile_descriptor_ = &KJfile_descriptor_;
static D IKJfile_position_ = &KJfile_position_;
static D IKJasynchronousQ_ = &KJasynchronousQ_;
static D IKJfile_ = &KJfile_;
static D IKJfile_size_ = &KJfile_size_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJreturn_fresh_bufferQ_ = &KJreturn_fresh_bufferQ_;

/* Variables */

D Lnative_file_accessorGYstreams_internalsVio = &KLnative_file_accessorGYstreams_internalsVio;

/* Objects */

_KLsimple_methodGVKe Kaccessor_newline_sequenceYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K129,
  &Kaccessor_newline_sequenceYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kaccessor_synchronizeYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K126,
  &Kaccessor_synchronizeYstreams_internalsVioMM1I
};

_KLkeyword_methodGVKe Kaccessor_write_fromYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K120,
  &key_mep_7,
  &Kaccessor_write_fromYstreams_internalsVioMM0I,
  &K121
};

_KLkeyword_methodGVKe Kaccessor_read_intoXYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K113,
  &key_mep_6,
  &Kaccessor_read_intoXYstreams_internalsVioMM0I,
  &K114
};

_KLgetter_methodGVKi Kaccessor_preferred_buffer_sizeYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioHLnative_file_accessorG
};

_KLmethod_domainGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioMM0
};

_KLsimple_methodGVKe Kaccessor_position_setterYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K110,
  &Kaccessor_position_setterYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kaccessor_positionYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K107,
  &Kaccessor_positionYstreams_internalsVioMM0I
};

_KLgetter_methodGVKi Kaccessor_positionableQYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kaccessor_positionableQYstreams_internalsVioHLnative_file_accessorG
};

_KLmethod_domainGVKe Kaccessor_positionableQYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kaccessor_positionableQYstreams_internalsVioMM0
};

_KLsimple_methodGVKe Kaccessor_sizeYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K105,
  &Kaccessor_sizeYstreams_internalsVioMM0I
};

_KLsetter_methodGVKi Kaccessor_at_endQ_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kaccessor_at_endQYstreams_internalsVioHLnative_file_accessorG
};

_KLmethod_domainGVKe Kaccessor_at_endQ_setterYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kaccessor_at_endQ_setterYstreams_internalsVioMM0
};

_KLgetter_methodGVKi Kaccessor_at_endQYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kaccessor_at_endQYstreams_internalsVioHLnative_file_accessorG
};

_KLmethod_domainGVKe Kaccessor_at_endQYstreams_internalsVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kaccessor_at_endQYstreams_internalsVioMM0
};

_KLsimple_methodGVKe Kaccessor_openQYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kaccessor_openQYstreams_internalsVioMM0I
};

_KLkeyword_methodGVKe Kaccessor_closeYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K101,
  &key_mep_4,
  &Kaccessor_closeYstreams_internalsVioMM0I,
  &K102
};

_KLkeyword_methodGVKe Kaccessor_openYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K94,
  &key_mep_9,
  &Kaccessor_openYstreams_internalsVioMM0I,
  &K95
};

_KLsimple_methodGVKe Kplatform_accessor_classYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K87,
  &Kplatform_accessor_classYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kaccessor_fdYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K34,
  &Kaccessor_fdYstreams_internalsVioMM0I
};

static _KLunionGVKe K32 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K33,
  &KLmachine_wordGVKe
};

static _KLsingletonGVKd K33 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K34 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K35,
  &K36
};

static _KLsimple_object_vectorGVKd_1 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnative_file_accessorGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_1 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K32
};

_KLclassGVKd KLnative_file_accessorGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K86,
  &K39,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLnative_file_accessorGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K39,
  (D) 1,
  25,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K39 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433753,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KLnative_file_accessorGYstreams_internalsVioW,
  &KPfalseVKi,
  &K40,
  (D) -3,
  &KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0,
  &K43,
  &K44,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K40,
  &K40,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Kfile_descriptorYio_internalsVioHLnative_file_accessorG,
  &Kfile_positionYio_internalsVioHLnative_file_accessorG,
  &KasynchronousQYio_internalsVioHLnative_file_accessorG,
  &Kaccessor_positionableQYstreams_internalsVioHLnative_file_accessorG,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioHLnative_file_accessorG,
  &Kaccessor_at_endQYstreams_internalsVioHLnative_file_accessorG
};

_KLkeyword_methodGVKe KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K46,
  &key_mep_2,
  &KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0I,
  &K47
};

static _KLsimple_object_vectorGVKd_1 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexternal_file_accessorGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLexternal_file_accessorGYstreams_internalsVio,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLunionGVKe K45 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K33,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K46 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K54,
  &KDsignature_LobjectG_typesVKi,
  &K35
};

static _KLsimple_object_vectorGVKd_6 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJfile_descriptor_,
  &KPfalseVKi,
  &KJfile_position_,
  (D) 1,
  &KJasynchronousQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJfile_descriptor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K53
};

static _KLsymbolGVKd KJfile_position_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K52
};

static _KLsymbolGVKd KJasynchronousQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K51
};

static _KLbyte_stringGVKd_13 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "asynchronous?"
};

static _KLbyte_stringGVKd_13 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "file-position"
};

static _KLbyte_stringGVKd_15 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "file-descriptor"
};

static _KLsimple_object_vectorGVKd_3 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJfile_descriptor_,
  &KJfile_position_,
  &KJasynchronousQ_
};

_KLinstance_slot_descriptorGVKe Kfile_descriptorYio_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KJfile_descriptor_,
  &Kfile_descriptorYio_internalsVio,
  &Kfile_descriptor_setterYio_internalsVio,
  &K45
};

_KLinstance_slot_descriptorGVKe Kfile_positionYio_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KJfile_position_,
  &Kfile_positionYio_internalsVio,
  &Kfile_position_setterYio_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KasynchronousQYio_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KJasynchronousQ_,
  &KasynchronousQYio_internalsVio,
  &KPfalseVKi,
  &KLbooleanGVKd
};

_KLinstance_slot_descriptorGVKe Kaccessor_positionableQYstreams_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kaccessor_positionableQYstreams_internalsVio,
  &Kaccessor_positionableQ_setterYio_internalsVio,
  &KLbooleanGVKd
};

_KLinstance_slot_descriptorGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVio,
  &Kaccessor_preferred_buffer_size_setterYio_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kaccessor_at_endQYstreams_internalsVioHLnative_file_accessorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KPfalseVKi,
  &Kaccessor_at_endQYstreams_internalsVio,
  &Kaccessor_at_endQ_setterYstreams_internalsVio,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe Kaccessor_preferred_buffer_size_setterYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K64,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kaccessor_preferred_buffer_size_setterYio_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kaccessor_preferred_buffer_sizeYstreams_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_preferred_buffer_size_setterYio_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_37 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "accessor-preferred-buffer-size-setter"
};

_KLsealed_generic_functionGVKe Kaccessor_positionableQ_setterYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K68,
  &K67,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kaccessor_positionableQ_setterYio_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kaccessor_positionableQYstreams_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &Kaccessor_positionableQ_setterYio_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_29 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "accessor-positionable?-setter"
};

_KLsealed_generic_functionGVKe KasynchronousQYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K51,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KasynchronousQYio_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KasynchronousQYio_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &KasynchronousQYio_internalsVioMM0,
  &KPempty_listVKi
};

_KLsealed_generic_functionGVKe Kfile_positionYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K52,
  &K78,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kfile_position_setterYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K76,
  &K75,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfile_position_setterYio_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfile_positionYio_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &Kfile_position_setterYio_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "file-position-setter"
};

_KLgetter_methodGVKi Kfile_positionYio_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfile_positionYio_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Kfile_positionYio_internalsVioMM0,
  &KPempty_listVKi
};

_KLsealed_generic_functionGVKe Kfile_descriptorYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K53,
  &K85,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kfile_descriptor_setterYio_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K83,
  &K82,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfile_descriptor_setterYio_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfile_descriptorYio_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &Kfile_descriptor_setterYio_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "file-descriptor-setter"
};

_KLgetter_methodGVKi Kfile_descriptorYio_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfile_descriptorYio_internalsVioHLnative_file_accessorG
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &Kfile_descriptorYio_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<native-file-accessor>"
};

static _KLsignatureAvaluesGVKi K87 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K88,
  &K89
};

static _KLsimple_object_vectorGVKd_2 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K91,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K90
};

static _KLsingletonGVKd K90 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLnative_file_accessorGYstreams_internalsVio
};

static _KLsingletonGVKd K91 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJfile_
};

static _KLsymbolGVKd KJfile_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K93
};

static _KLbyte_stringGVKd_4 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "file"
};

static _KLkeyword_signatureGVKe K94 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42729481,
  &K98,
  &K99,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_12 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJdirection_,
  &KJinput_,
  &KJif_exists_,
  &KPfalseVKi,
  &KJif_does_not_exist_,
  &KPfalseVKi,
  &KJfile_descriptor_,
  &KPfalseVKi,
  &KJfile_position_,
  &KPfalseVKi,
  &KJfile_size_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJfile_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K97
};

static _KLbyte_stringGVKd_9 K97 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "file-size"
};

static _KLsimple_object_vectorGVKd_2 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_6 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJdirection_,
  &KJif_exists_,
  &KJif_does_not_exist_,
  &KJfile_descriptor_,
  &KJfile_position_,
  &KJfile_size_
};

static _KLbyte_stringGVKd_5 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "close"
};

static _KLkeyword_signatureAvaluesGVKi K101 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K35,
  &K103,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJabortQ_,
  &KPfalseVKi,
  &KJwaitQ_,
  &KPtrueVKi
};

static _KLsimple_object_vectorGVKd_2 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJabortQ_,
  &KJwaitQ_
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K35,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K105 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K35,
  &K106
};

static _KLsimple_object_vectorGVKd_1 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K45
};

static _KLsignatureAvaluesGVKi K107 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K35,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_5 K108 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "lseek"
};

static _KLbyte_stringGVKd_29 K109 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "lseek seeked to wrong postion"
};

static _KLsignatureAvaluesGVKi K110 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K111,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLnative_file_accessorGYstreams_internalsVio
};

static _KLbyte_stringGVKd_4 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "read"
};

static _KLkeyword_signatureAvaluesGVKi K113 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817617,
  &K117,
  &K118,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbuffer_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K116
};

static _KLbyte_stringGVKd_6 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

static _KLsimple_object_vectorGVKd_4 K117 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJbuffer_
};

static _KLbyte_stringGVKd_5 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "write"
};

static _KLkeyword_signatureAvaluesGVKi K120 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818641,
  &K117,
  &K124,
  &KDsignature_LobjectG_typesVKi,
  &K125
};

static _KLsimple_object_vectorGVKd_4 K121 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJbuffer_,
  &KPfalseVKi,
  &KJreturn_fresh_bufferQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJreturn_fresh_bufferQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K123
};

static _KLbyte_stringGVKd_20 K123 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "return-fresh-buffer?"
};

static _KLsimple_object_vectorGVKd_2 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJbuffer_,
  &KJreturn_fresh_bufferQ_
};

static _KLsimple_object_vectorGVKd_2 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio
};

static _KLsignatureGVKe K126 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K127
};

static _KLsimple_object_vectorGVKd_2 K127 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnative_file_accessorGYstreams_internalsVio,
  &KLfile_streamGYstreams_internalsVio
};

static _KLbyte_stringGVKd_1 K128 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "\n"
};

static _KLsignatureAvaluesGVKi K129 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K35,
  &KDsignature_LstringG_typesVKi
};

/* Code */

D Kaccessor_newline_sequenceYstreams_internalsVioMM0I (D accessor_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:177
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:180
  T2_0 = &K128;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:177
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kaccessor_synchronizeYstreams_internalsVioMM1I (D accessor_, D stream_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:170
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:174
  T4 = SLOT_VALUE_INITD(accessor_, 0);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:174
  T3 = CALL1(&Kunix_fsyncYio_internalsVio, T4);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:170
  MV_SET_COUNT(0);
  return(T3);
}

D Kaccessor_write_fromYstreams_internalsVioMM0I (D accessor_, D stream_, D offset_, D count_, D Urest_, D buffer_, D return_fresh_bufferQ_) {
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD offsetF30T, offsetF30;
  DWORD countF31T, countF31;
  DWORD T32;
  D T33;
  DWORD T34;
  D T35;
  D T36_0;
  D T36_1;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:149
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:154
  if (buffer_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:154
    primitive_type_check(buffer_, &KLbufferGYstreamsVio);
    T10 = buffer_;
    T9 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:154
    CONGRUENT_CALL_PROLOG(&Kstream_output_bufferYstreams_internalsVio, 1);
    T8 = CONGRUENT_CALL1(stream_);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:154
    primitive_type_check(T8, &KLbufferGYstreamsVio);
    T11 = T8;
    T9 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:154
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
  T32 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
  T34 = primitive_cast_integer_as_raw(offset_);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
  offsetF30T = T34;
  countF31T = T32;
L0: ;
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
    offsetF30 = offsetF30T;
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
    T35 = primitive_cast_raw_as_integer(offsetF30);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
    countF31 = countF31T;
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
    T33 = primitive_cast_raw_as_integer(countF31);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:157
    T13 = SLOT_VALUE_INITD(accessor_, 0);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:157
    T12 = CALL4(&Kunix_writeYio_internalsVio, T13, T9, T35, T33);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:158
    T14 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:158
    T15 = primitive_machine_word_less_thanQ(T14,1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:158
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:159
      Kunix_errorYio_internalsVioI(&K119, &KPempty_vectorVKi, &KPfalseVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T16 = SLOT_VALUE_INITD(accessor_, 1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T17 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T18 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T19 = primitive_machine_word_logxor(T18,1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T20 = primitive_machine_word_add_signal_overflow(T17,T19);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      T21 = primitive_cast_raw_as_integer(T20);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:161
      SLOT_VALUE_SETTER(T21, accessor_, 1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
      T22 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
      T23 = primitive_machine_word_less_thanQ(T22,countF31);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T24 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T25 = primitive_machine_word_logxor(T24,1);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T26 = primitive_machine_word_add_signal_overflow(offsetF30,T25);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T27 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T28 = primitive_machine_word_logxor(T27,1);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        T29 = primitive_machine_word_subtract_signal_overflow(countF31,T28);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
        offsetF30T = T26;
        countF31T = T29;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:162
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:158
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:163
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:167
  T36_0 = count_;
  T36_1 = T9;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:149
  MV_SET_ELT(1, T36_1);
  MV_SET_COUNT(2);
  return(T36_0);
}

D Kaccessor_read_intoXYstreams_internalsVioMM0I (D accessor_, D stream_, D offset_, D count_, D Urest_, D buffer_) {
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:127
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:131
  T13 = SLOT_VALUE_INITD(accessor_, 5);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:131
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:132
    T7_0 = (D) 1;
    T12_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:134
    if (buffer_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:134
      primitive_type_check(buffer_, &KLbufferGYstreamsVio);
      T14 = buffer_;
      T9 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:134
      CONGRUENT_CALL_PROLOG(&Kstream_input_bufferYstreams_internalsVio, 1);
      T8 = CONGRUENT_CALL1(stream_);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:134
      primitive_type_check(T8, &KLbufferGYstreamsVio);
      T15 = T8;
      T9 = T15;
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:134
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:135
    T16 = SLOT_VALUE_INITD(accessor_, 1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:137
    T17 = SLOT_VALUE_INITD(accessor_, 0);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:137
    T10 = CALL4(&Kunix_readYio_internalsVio, T17, T9, offset_, count_);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
    T18 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
    T19 = primitive_machine_word_less_thanQ(T18,1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:139
      Kunix_errorYio_internalsVioI(&K112, &KPempty_vectorVKi, &KPfalseVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:140
      T20 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:140
      T21 = primitive_machine_word_equalQ(T20,1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:141
        SLOT_VALUE_SETTER(&KPtrueVKi, accessor_, 5);
      } else {
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        T22 = primitive_cast_integer_as_raw(T16);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        T23 = primitive_cast_integer_as_raw(T10);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        T24 = primitive_machine_word_logxor(T23,1);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        T25 = primitive_machine_word_add_signal_overflow(T22,T24);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        T26 = primitive_cast_raw_as_integer(T25);
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:143
        SLOT_VALUE_SETTER(T26, accessor_, 1);
      }
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:138
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:145
    T11_0 = T10;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:131
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:127
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kaccessor_position_setterYstreams_internalsVioMM0I (D position_, D accessor_) {
  D new_position_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  DWORD T17;
  D T18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:105
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:108
  T10 = SLOT_VALUE_INITD(accessor_, 1);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:109
  T11 = primitive_cast_integer_as_raw(position_);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:109
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:109
  T13 = primitive_machine_word_equalQ(T11,T12);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:109
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:123
    T8_0 = position_;
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:111
    T14 = SLOT_VALUE_INITD(accessor_, 0);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:111
    new_position_ = CALL3(&Kunix_lseekYio_internalsVio, T14, position_, (D) 1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:112
    T15 = primitive_cast_integer_as_raw(new_position_);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:112
    T16 = primitive_machine_word_equalQ(T11,T15);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:112
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:119
      SLOT_VALUE_SETTER(&KPfalseVKi, accessor_, 5);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:120
      SLOT_VALUE_SETTER(new_position_, accessor_, 1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:120
      T6_0 = new_position_;
      T7_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:113
      T17 = primitive_cast_integer_as_raw(new_position_);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:113
      T18 = primitive_machine_word_less_thanQ(T17,1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:113
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:114
        T4_0 = Kunix_errorYio_internalsVioI(&K108, &KPempty_vectorVKi, &KPfalseVKi);
        T5_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:116
        T19_0 = KerrorVKdMM1I(&K109, &KPempty_vectorVKi);
        T5_0 = T19_0;
      }
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:113
      T7_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:112
    T9_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:109
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:105
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kaccessor_positionYstreams_internalsVioMM0I (D accessor_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:99
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:102
  T2 = SLOT_VALUE_INITD(accessor_, 1);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:102
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:99
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kaccessor_sizeYstreams_internalsVioMM0I (D accessor_) {
  D new_position_;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:85
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:88
  T10 = SLOT_VALUE_INITD(accessor_, 3);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:88
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:90
    T11 = SLOT_VALUE_INITD(accessor_, 0);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:91
    T12 = SLOT_VALUE_INITD(accessor_, 1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:92
    new_position_ = CALL3(&Kunix_lseekYio_internalsVio, T11, (D) 1, (D) 9);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    T13 = primitive_cast_integer_as_raw(new_position_);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    T14 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    if (T14 != &KPfalseVKi) {
      T4 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:94
      T3 = CALL3(&Kunix_lseekYio_internalsVio, T11, T12, (D) 1);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:94
      T15 = primitive_cast_integer_as_raw(T3);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:94
      T16 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:94
      T17 = primitive_machine_word_equalQ(T15,T16);
      T4 = T17;
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:95
      T5_0 = new_position_;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
      T6_0 = &KPfalseVKi;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:93
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:88
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:88
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:85
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kaccessor_openQYstreams_internalsVioMM0I (D accessor_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:80
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:82
  T5 = SLOT_VALUE_INITD(accessor_, 0);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:82
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:82
    T2_0 = &KPtrueVKi;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:82
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:82
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:80
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kaccessor_closeYstreams_internalsVioMM0I (D accessor_, D Urest_, D abortQ_, D waitQ_) {
  D T5;
  D T6;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:65
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:69
  T8 = SLOT_VALUE_INITD(accessor_, 0);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:70
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    T5 = CALL1(&Kunix_closeYio_internalsVio, T8);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    T9 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    T10 = primitive_machine_word_less_thanQ(T9,1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
      T11 = primitive_not(abortQ_);
      T6 = T11;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:72
      Kunix_errorYio_internalsVioI(&K100, &KPempty_vectorVKi, &KPfalseVKi);
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:74
      SLOT_VALUE_SETTER(&KPfalseVKi, accessor_, 0);
    }
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:71
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:70
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:77
  T7_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:65
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kaccessor_openYstreams_internalsVioMM0I (D accessor_, D locator_, D Urest_, D direction_, D if_exists_, D if_does_not_exist_, D initial_file_descriptor_, D initial_file_position_, D initial_file_size_) {
  D T10_0;
  D T10_1;
  D preferred_size_;
  D positionableQ_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:49
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:56
  CALL2(&Kfile_descriptor_setterYio_internalsVio, initial_file_descriptor_, accessor_);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:57
  T10_0 = CALL1(&Kunix_fd_infoYio_internalsVio, initial_file_descriptor_);
  T10_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:56
  preferred_size_ = T10_0;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:56
  positionableQ_ = T10_1;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:58
  SLOT_VALUE_SETTER(preferred_size_, accessor_, 4);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:59
  SLOT_VALUE_SETTER(positionableQ_, accessor_, 3);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
  if (positionableQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
    T18 = primitive_not(initial_file_position_);
    T13 = T18;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:61
    T14 = CALL3(&Kunix_lseekYio_internalsVio, initial_file_descriptor_, (D) 1, (D) 5);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:61
    SLOT_VALUE_SETTER(T14, accessor_, 1);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:61
    T15 = &KPfalseVKi;
    T17 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
    T16 = &KPfalseVKi;
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:60
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:49
  MV_SET_COUNT(0);
  return(T17);
}

D Kplatform_accessor_classYstreams_internalsVioMM0I (D type_, D locator_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:28
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:31
  T3_0 = &KLnative_file_accessorGYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:28
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kaccessor_fdYstreams_internalsVioMM0I (D the_accessor_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:34
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:37
  T5 = SLOT_VALUE_INITD(the_accessor_, 0);
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:37
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:38
    T6 = SLOT_VALUE_INITD(the_accessor_, 0);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:38
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T2_0 = CONGRUENT_CALL2(&KLmachine_wordGVKe, T6);
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:38
    T7_0 = T2_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T2_0);
      primitive_type_check(T7_0, &K32);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T4_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:37
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:37
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:34
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLnative_file_accessorGZ32ZconstructorYio_internalsVioMM0I (D class_, D init_args_, D Uunique_file_descriptor_, D Uunique_file_position_, D Uunique_asynchronousQ_) {
  D T6;
  D Uunique_file_descriptorF7;
  D Uunique_file_positionF8;
  D Uunique_asynchronousQF9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:11
  T6 = primitive_object_allocate_filled(7,&KLnative_file_accessorGYstreams_internalsVioW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  primitive_type_check(Uunique_file_descriptor_, &K45);
  Uunique_file_descriptorF7 = Uunique_file_descriptor_;
  SLOT_VALUE_SETTER(Uunique_file_descriptorF7, T6, 0);
  primitive_type_check(Uunique_file_position_, &KLintegerGVKd);
  Uunique_file_positionF8 = Uunique_file_position_;
  SLOT_VALUE_SETTER(Uunique_file_positionF8, T6, 1);
  primitive_type_check(Uunique_asynchronousQ_, &KLbooleanGVKd);
  Uunique_asynchronousQF9 = Uunique_asynchronousQ_;
  SLOT_VALUE_SETTER(Uunique_asynchronousQF9, T6, 2);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 3);
  SLOT_VALUE_SETTER((D) 1, T6, 4);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 5);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T10_0 = T6;
  // /opt/opendylan-2013.1/sources/io/unix-file-accessor.dylan:11
  MV_SET_COUNT(1);
  return(T10_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_unix_file_accessor_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_descriptor_);
    if (T0 != &KJfile_descriptor_) {
      primitive_repeated_slot_value_setter(T0, &K99, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K95, 1, 6);
      primitive_slot_value_setter(T0, &Kfile_descriptorYio_internalsVioHLnative_file_accessorG, 3);
      primitive_repeated_slot_value_setter(T0, &K54, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K47, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_position_);
    if (T0 != &KJfile_position_) {
      primitive_repeated_slot_value_setter(T0, &K99, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K95, 1, 8);
      primitive_slot_value_setter(T0, &Kfile_positionYio_internalsVioHLnative_file_accessorG, 3);
      primitive_repeated_slot_value_setter(T0, &K54, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K47, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJasynchronousQ_);
    if (T0 != &KJasynchronousQ_) {
      primitive_slot_value_setter(T0, &KasynchronousQYio_internalsVioHLnative_file_accessorG, 3);
      primitive_repeated_slot_value_setter(T0, &K54, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K47, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_);
    if (T0 != &KJfile_) {
      primitive_slot_value_setter(T0, &K91, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_size_);
    if (T0 != &KJfile_size_) {
      primitive_repeated_slot_value_setter(T0, &K99, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K95, 1, 10);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_repeated_slot_value_setter(T0, &K124, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K121, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K118, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K114, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJreturn_fresh_bufferQ_);
    if (T0 != &KJreturn_fresh_bufferQ_) {
      primitive_repeated_slot_value_setter(T0, &K124, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K121, 1, 2);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_unix_file_accessor_for_user () {
  return;
}


/* eof */
