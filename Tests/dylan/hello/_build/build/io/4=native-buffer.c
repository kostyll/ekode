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

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(13);

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);

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
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
  D size_slot_descriptor_;
} _KLrepeated_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_getter_methodGVKi;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

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
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;


/* Typedefs for defined classes */

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


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
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
D KPadd_nonsiblinged_domainVKnI (D, D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe Kcopy_bytesYbyte_vectorVcommon_dylan;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
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
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D Kallocate_instanceVKeI (D, D);
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsealed_generic_functionGVKe Kbuffer_startYstreamsVio;
D KerrorVKdMM1I (D, D);
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJfill_;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
D KmakeVKdMM33I (D, D, D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kelement_range_errorVKeI (D, D);
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
D Kclass_constructor_atomicallyVKiI (D);
extern _KLkeyword_methodGVKe KmakeVKdMM51;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D, D);
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kstreams_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLgetter_methodGVKi KsizeVKdMioM0;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_ioRD_0;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_4;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_3;
extern _KLkeyword_methodGVKe KmakeVKdMioM1;
D KmakeVKdMioM1I (D class_, D all_keys_, D fill_);
extern _KLkeyword_methodGVKe KelementVKdMioM0;
D KelementVKdMioM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMioM0;
D Kelement_no_bounds_checkVKeMioM0I (D buffer_, D index_, D Urest_, D default_);
extern _KLsimple_methodGVKe Kelement_setterVKdMioM0;
D Kelement_setterVKdMioM0I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMioM1;
D Kelement_setterVKdMioM1I (D, D, D);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMioM0;
D Kelement_no_bounds_check_setterVKeMioM0I (D new_value_, D buffer_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMioM1;
D Kelement_no_bounds_check_setterVKeMioM1I (D new_value_, D buffer_, D index_);
extern _KLsimple_methodGVKe KemptyQVKdMioM0;
D KemptyQVKdMioM0I (D buffer_);
extern _KLsimple_methodGVKe KasVKdMioM0;
D KasVKdMioM0I (D, D);
extern _KLsimple_methodGVKe KasVKdMioM1;
D KasVKdMioM1I (D, D);
extern _KLsimple_methodGVKe KasVKdMioM2;
D KasVKdMioM2I (D, D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMioM0;
D Kforward_iteration_protocolVKdMioM0I (D buffer_);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM0;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM0I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM1;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM1I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM2;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM2I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM3;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM3I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM4;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM4I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM5;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM5I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM6;
D Kcopy_bytesYbyte_vectorVcommon_dylanMioM6I (D, D, D, D, D);
extern _KLgetter_methodGVKi Kbuffer_startYstreamsVioMM0;
extern _KLsimple_methodGVKe Kbuffer_ref_setterYstreams_internalsVio;
D Kbuffer_ref_setterYstreams_internalsVioI (D value_, D buffer_, D index_);
extern _KLsealed_generic_functionGVKe Kbuffer_fillYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_nextYstreamsVio;
extern _KLsimple_methodGVKe Kbuffer_sizeYstreamsVioMM0;
D Kbuffer_sizeYstreamsVioMM0I (D buffer_);
extern _KLsealed_generic_functionGVKe Kbuffer_dirtyQ_setterYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_next_setterYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_endYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_end_setterYstreamsVio;
extern _KLsimple_methodGVKe Kbuffer_refYstreams_internalsVio;
D Kbuffer_refYstreams_internalsVioI (D buffer_, D index_);
D Kbuffer_fillYstreamsVioMM0I (D, D, D, D, D);
D KLbufferGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D, D, D);
extern _KLsealed_generic_functionGVKe Kbuffer_positionYstreamsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_owning_streamYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_owning_stream_setterYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_dirtyQYstreamsVio;
extern _KLgetter_methodGVKi Kbuffer_dirtyQYstreamsVioMM0;
static _KLpairGVKd K88;
static _KLbyte_stringGVKd_13 K89;
extern _KLinstance_slot_descriptorGVKe Kbuffer_dirtyQYstreamsVioHLbufferG;
static _KLsymbolGVKd KJbuffer_dirtyQ_;
extern _KLsetter_methodGVKi Kbuffer_owning_stream_setterYstreams_internalsVioMM0;
static _KLpairGVKd K93;
static _KLbyte_stringGVKd_27 K94;
extern _KLinstance_slot_descriptorGVKe Kbuffer_owning_streamYstreams_internalsVioHLbufferG;
static _KLsymbolGVKd KJstream_id_;
static _KLunionGVKe K97;
static _KLsingletonGVKd K98;
static _KLbyte_stringGVKd_9 K99;
extern _KLgetter_methodGVKi Kbuffer_owning_streamYstreams_internalsVioMM0;
static _KLpairGVKd K101;
static _KLbyte_stringGVKd_20 K102;
extern _KLgetter_methodGVKi Kbuffer_positionYstreamsVioMM0;
static _KLpairGVKd K104;
static _KLbyte_stringGVKd_15 K105;
extern _KLinstance_slot_descriptorGVKe Kbuffer_positionYstreamsVioHLbufferG;
static _KLsymbolGVKd KJbuffer_position_;
extern _KLsealed_generic_functionGVKe Kbuffer_position_setterYstreamsVio;
extern _KLsetter_methodGVKi Kbuffer_position_setterYstreamsVioMM0;
static _KLpairGVKd K110;
static _KLbyte_stringGVKd_22 K111;
static _KLsignatureAvaluesGVKi K112;
static _KLsimple_object_vectorGVKd_2 K113;
extern _KLsetter_methodGVKi Kbuffer_end_setterYstreamsVioMM0;
static _KLpairGVKd K115;
static _KLbyte_stringGVKd_17 K116;
extern _KLinstance_slot_descriptorGVKe Kbuffer_endYstreamsVioHLbufferG;
static _KLsymbolGVKd KJbuffer_end_;
static _KLbyte_stringGVKd_10 K119;
extern _KLgetter_methodGVKi Kbuffer_endYstreamsVioMM0;
static _KLpairGVKd K121;
extern _KLsetter_methodGVKi Kbuffer_next_setterYstreamsVioMM0;
static _KLpairGVKd K123;
static _KLbyte_stringGVKd_18 K124;
extern _KLinstance_slot_descriptorGVKe Kbuffer_nextYstreamsVioHLbufferG;
static _KLsymbolGVKd KJbuffer_next_;
static _KLbyte_stringGVKd_11 K127;
extern _KLsetter_methodGVKi Kbuffer_dirtyQ_setterYstreamsVioMM0;
static _KLpairGVKd K129;
static _KLbyte_stringGVKd_20 K130;
static _KLsignatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_1 K132;
extern _KLgetter_methodGVKi Kbuffer_nextYstreamsVioMM0;
static _KLpairGVKd K134;
extern _KLkeyword_methodGVKe Kbuffer_fillYstreamsVioMM0;
extern _KLkeyword_methodGVKe Kbuffer_fillYstreamsVioMM1;
D Kbuffer_fillYstreamsVioMM1I (D, D, D, D, D);
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLkeyword_signatureGVKe K140;
static _KLbyte_stringGVKd_11 K141;
static _KLkeyword_signatureGVKe K142;
static _KLsimple_object_vectorGVKd_4 K143;
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsimple_object_vectorGVKd_2 K145;
static _KLsimple_object_vectorGVKd_2 K146;
static _KLkeyword_signatureGVKe K147;
static _KLsignatureGVKe K148;
static _KLsimple_object_vectorGVKd_3 K149;
extern _KLinstance_slot_descriptorGVKe Kbuffer_startYstreamsVioHLbufferG;
static _KLsymbolGVKd KJbuffer_start_;
extern _KLsealed_generic_functionGVKe Kbuffer_start_setterYstreamsVio;
extern _KLsetter_methodGVKi Kbuffer_start_setterYstreamsVioMM0;
static _KLpairGVKd K154;
static _KLbyte_stringGVKd_19 K155;
static _KLbyte_stringGVKd_12 K156;
D Kcopy_bytes_range_errorYstreams_internalsVioI (D, D, D, D, D);
static _KLbyte_stringGVKd_63 K158;
static _KLsignatureGVKe K159;
static _KLsimple_object_vectorGVKd_5 K160;
extern _KLsealed_generic_functionGVKe Kbuffer_element_setterYstreams_internalsVio;
extern _KLrepeated_setter_methodGVKi Kbuffer_element_setterYstreams_internalsVioMM0;
static _KLpairGVKd K163;
static _KLbyte_stringGVKd_21 K164;
extern _KLrepeated_slot_descriptorGVKe Kbuffer_elementYstreams_internalsVioHLbufferG;
extern _KLsealed_generic_functionGVKe Kbuffer_elementYstreams_internalsVio;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLbufferGYstreamsVio;
extern _KLrepeated_getter_methodGVKi Kbuffer_elementYstreams_internalsVioMM0;
static _KLpairGVKd K169;
static _KLbyte_stringGVKd_14 K170;
static _KLsignatureGVKe K171;
static _KLsimple_object_vectorGVKd_5 K172;
static _KLsignatureGVKe K173;
static _KLsimple_object_vectorGVKd_5 K174;
static _KLsignatureGVKe K175;
static _KLsimple_object_vectorGVKd_5 K176;
static _KLsignatureGVKe K177;
static _KLsimple_object_vectorGVKd_5 K178;
static _KLsignatureGVKe K179;
static _KLsimple_object_vectorGVKd_5 K180;
static _KLsignatureGVKe K181;
static _KLsimple_object_vectorGVKd_5 K182;
static _KLbyte_stringGVKd_15 K183;
extern _KLsimple_methodGVKe Kbuffer_current_elementYstreams_internalsVio;
D Kbuffer_current_elementYstreams_internalsVioI (D buffer_, D state_);
extern _KLsimple_methodGVKe Kbuffer_current_element_setterYstreams_internalsVio;
D Kbuffer_current_element_setterYstreams_internalsVioI (D new_value_, D buffer_, D state_);
static _KLsignatureGVKe K188;
static _KLsignatureAvaluesGVKi K189;
static _KLsimple_object_vectorGVKd_8 K190;
static _KLsignatureAvaluesGVKi K191;
static _KLsimple_object_vectorGVKd_2 K192;
static _KLsingletonGVKd K193;
static _KLsignatureAvaluesGVKi K194;
static _KLsimple_object_vectorGVKd_2 K195;
static _KLsingletonGVKd K196;
static _KLsignatureAvaluesGVKi K197;
static _KLsimple_object_vectorGVKd_2 K198;
static _KLsingletonGVKd K199;
static _KLsignatureAvaluesGVKi K200;
static _KLsignatureGVKe K201;
static _KLsimple_object_vectorGVKd_3 K202;
static _KLsignatureGVKe K203;
static _KLkeyword_signatureAvaluesGVKi K204;
static _KLsimple_object_vectorGVKd_2 K205;
static _KLsimple_object_vectorGVKd_1 K206;
static _KLsimple_object_vectorGVKd_2 K207;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF210;
static D Kanonymous_of_makeF210I (D Unext_method_argsU_);
static _KLsignatureGVKe K211;
static _KLkeyword_signatureAvaluesGVKi K212;
static _KLsimple_object_vectorGVKd_2 K213;
static _KLsimple_object_vectorGVKd_1 K214;
static _KLsimple_object_vectorGVKd_1 K215;
static _KLsubclassGVKe K216;
static _KLimplementation_classGVKe K217;
static _KLsimple_object_vectorGVKd_10 K218;
extern _KLkeyword_methodGVKe KLbufferGZ32ZconstructorYstreams_internalsVioMM0;
static _KLsimple_object_vectorGVKd_1 K220;
static _KLsimple_object_vectorGVKd_10 K221;
static _KLsimple_object_vectorGVKd_10 K222;
extern _KLinstance_slot_descriptorGVKe Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG;
extern _KLinstance_slot_descriptorGVKe Kbuffer_use_countYstreams_internalsVioHLbufferG;
static _KLsymbolGVKd KJuse_count_;
extern _KLsealed_generic_functionGVKe Kbuffer_use_countYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_use_count_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_use_count_setterYstreams_internalsVioMM0;
static _KLpairGVKd K230;
static _KLbyte_stringGVKd_23 K231;
extern _KLgetter_methodGVKi Kbuffer_use_countYstreams_internalsVioMM0;
static _KLpairGVKd K233;
static _KLbyte_stringGVKd_16 K234;
static _KLbyte_stringGVKd_9 K235;
extern _KLsealed_generic_functionGVKe Kbuffer_off_page_bitsYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_off_page_bits_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_off_page_bits_setterYstreams_internalsVioMM0;
static _KLpairGVKd K239;
static _KLbyte_stringGVKd_27 K240;
extern _KLgetter_methodGVKi Kbuffer_off_page_bitsYstreams_internalsVioMM0;
static _KLpairGVKd K242;
static _KLbyte_stringGVKd_20 K243;
extern _KLsealed_generic_functionGVKe Kbuffer_on_page_bitsYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kbuffer_on_page_bits_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kbuffer_on_page_bits_setterYstreams_internalsVioMM0;
static _KLpairGVKd K247;
static _KLbyte_stringGVKd_26 K248;
extern _KLgetter_methodGVKi Kbuffer_on_page_bitsYstreams_internalsVioMM0;
static _KLpairGVKd K250;
static _KLbyte_stringGVKd_19 K251;
static _KLkeyword_signatureAvaluesGVKi K252;
static _KLsimple_object_vectorGVKd_16 K253;
static _KLsimple_object_vectorGVKd_8 K254;
static _KLbyte_stringGVKd_8 K255;

/* Indirection variables */

static D IKJbuffer_dirtyQ_ = &KJbuffer_dirtyQ_;
static D IKJstream_id_ = &KJstream_id_;
static D IKJbuffer_position_ = &KJbuffer_position_;
static D IKJbuffer_end_ = &KJbuffer_end_;
static D IKJbuffer_next_ = &KJbuffer_next_;
static D IKJbuffer_start_ = &KJbuffer_start_;
static D IKJuse_count_ = &KJuse_count_;

/* Variables */

D buffer_fillYstreamsVio = &Kbuffer_fillYstreamsVio;
D buffer_sizeYstreamsVio = &Kbuffer_sizeYstreamsVioMM0;
D buffer_nextYstreamsVio = &Kbuffer_nextYstreamsVio;
D buffer_next_setterYstreamsVio = &Kbuffer_next_setterYstreamsVio;
D buffer_endYstreamsVio = &Kbuffer_endYstreamsVio;
D buffer_end_setterYstreamsVio = &Kbuffer_end_setterYstreamsVio;
D buffer_positionYstreamsVio = &Kbuffer_positionYstreamsVio;
D buffer_position_setterYstreamsVio = &Kbuffer_position_setterYstreamsVio;
D buffer_dirtyQYstreamsVio = &Kbuffer_dirtyQYstreamsVio;
D buffer_dirtyQ_setterYstreamsVio = &Kbuffer_dirtyQ_setterYstreamsVio;
D buffer_start_setterYstreamsVio = &Kbuffer_start_setterYstreamsVio;
D buffer_on_page_bitsYstreams_internalsVio = &Kbuffer_on_page_bitsYstreams_internalsVio;
D buffer_off_page_bitsYstreams_internalsVio = &Kbuffer_off_page_bitsYstreams_internalsVio;
D buffer_use_countYstreams_internalsVio = &Kbuffer_use_countYstreams_internalsVio;
D buffer_use_count_setterYstreams_internalsVio = &Kbuffer_use_count_setterYstreams_internalsVio;
D buffer_owning_streamYstreams_internalsVio = &Kbuffer_owning_streamYstreams_internalsVio;
D buffer_owning_stream_setterYstreams_internalsVio = &Kbuffer_owning_stream_setterYstreams_internalsVio;
D LbufferGYstreamsVio = &KLbufferGYstreamsVio;
D buffer_refYstreams_internalsVio = &Kbuffer_refYstreams_internalsVio;
D buffer_ref_setterYstreams_internalsVio = &Kbuffer_ref_setterYstreams_internalsVio;
D buffer_current_elementYstreams_internalsVio = &Kbuffer_current_elementYstreams_internalsVio;
D buffer_current_element_setterYstreams_internalsVio = &Kbuffer_current_element_setterYstreams_internalsVio;
D buffer_element_setterYstreams_internalsVio = &Kbuffer_element_setterYstreams_internalsVio;

/* Objects */

_KLclassGVKd KLbufferGYstreamsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K255,
  &K217,
  (D) 1,
  &Kstreams_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K217,
  (D) 4609,
  37,
  33554460,
  (D) 1
};

_KLgetter_methodGVKi KsizeVKdMioM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLbufferGYstreamsVio
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_ioRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbufferGYstreamsVio
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_ioRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &K196
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_ioRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  (D) 5,
  &KLbufferGYstreamsVio
};

_KLkeyword_methodGVKe KmakeVKdMioM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K212,
  &key_mep_3,
  &KmakeVKdMioM1I,
  &K213
};

_KLkeyword_methodGVKe KelementVKdMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K204,
  &key_mep_4,
  &KelementVKdMioM0I,
  &K207
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMioM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K204,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMioM0I,
  &K205
};

_KLsimple_methodGVKe Kelement_setterVKdMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K203,
  &Kelement_setterVKdMioM0I
};

_KLsimple_methodGVKe Kelement_setterVKdMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K201,
  &Kelement_setterVKdMioM1I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K203,
  &Kelement_no_bounds_check_setterVKeMioM0I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K201,
  &Kelement_no_bounds_check_setterVKeMioM1I
};

_KLsimple_methodGVKe KemptyQVKdMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K200,
  &KemptyQVKdMioM0I
};

_KLsimple_methodGVKe KasVKdMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K197,
  &KasVKdMioM0I
};

_KLsimple_methodGVKe KasVKdMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K194,
  &KasVKdMioM1I
};

_KLsimple_methodGVKe KasVKdMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K191,
  &KasVKdMioM2I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K189,
  &Kforward_iteration_protocolVKdMioM0I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K181,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM0I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K179,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM1I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K177,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM2I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K175,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM3I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K173,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM4I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K171,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM5I
};

_KLsimple_methodGVKe Kcopy_bytesYbyte_vectorVcommon_dylanMioM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K159,
  &Kcopy_bytesYbyte_vectorVcommon_dylanMioM6I
};

_KLgetter_methodGVKi Kbuffer_startYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_startYstreamsVioHLbufferG
};

_KLsimple_methodGVKe Kbuffer_ref_setterYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K148,
  &Kbuffer_ref_setterYstreams_internalsVioI
};

_KLsealed_generic_functionGVKe Kbuffer_fillYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K140,
  (D) 5,
  &K141,
  &K138,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_nextYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K127,
  &K134,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kbuffer_sizeYstreamsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K131,
  &Kbuffer_sizeYstreamsVioMM0I
};

_KLsealed_generic_functionGVKe Kbuffer_dirtyQ_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K130,
  &K129,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_next_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K124,
  &K123,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_endYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K119,
  &K121,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_end_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K116,
  &K115,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kbuffer_refYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K112,
  &Kbuffer_refYstreams_internalsVioI
};

_KLsealed_generic_functionGVKe Kbuffer_positionYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K105,
  &K104,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_owning_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K102,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_owning_stream_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K94,
  &K93,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_dirtyQYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K89,
  &K88,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kbuffer_dirtyQYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_dirtyQYstreamsVioHLbufferG
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_dirtyQYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K89 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "buffer-dirty?"
};

_KLinstance_slot_descriptorGVKe Kbuffer_dirtyQYstreamsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLbufferGYstreamsVio,
  &KJbuffer_dirtyQ_,
  &Kbuffer_dirtyQYstreamsVio,
  &Kbuffer_dirtyQ_setterYstreamsVio,
  &KLbooleanGVKd
};

static _KLsymbolGVKd KJbuffer_dirtyQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K89
};

_KLsetter_methodGVKi Kbuffer_owning_stream_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_owning_streamYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_owning_stream_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "buffer-owning-stream-setter"
};

_KLinstance_slot_descriptorGVKe Kbuffer_owning_streamYstreams_internalsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLbufferGYstreamsVio,
  &KJstream_id_,
  &Kbuffer_owning_streamYstreams_internalsVio,
  &Kbuffer_owning_stream_setterYstreams_internalsVio,
  &K97
};

static _KLsymbolGVKd KJstream_id_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

static _KLunionGVKe K97 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K98,
  &KLintegerGVKd
};

static _KLsingletonGVKd K98 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_9 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "stream-id"
};

_KLgetter_methodGVKi Kbuffer_owning_streamYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_owning_streamYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_owning_streamYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K102 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "buffer-owning-stream"
};

_KLgetter_methodGVKi Kbuffer_positionYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_positionYstreamsVioHLbufferG
};

static _KLpairGVKd K104 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_positionYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "buffer-position"
};

_KLinstance_slot_descriptorGVKe Kbuffer_positionYstreamsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJbuffer_position_,
  &Kbuffer_positionYstreamsVio,
  &Kbuffer_position_setterYstreamsVio,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJbuffer_position_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K105
};

_KLsealed_generic_functionGVKe Kbuffer_position_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K111,
  &K110,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_position_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_positionYstreamsVioHLbufferG
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_position_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "buffer-position-setter"
};

static _KLsignatureAvaluesGVKi K112 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K113,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

_KLsetter_methodGVKi Kbuffer_end_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_endYstreamsVioHLbufferG
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_end_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "buffer-end-setter"
};

_KLinstance_slot_descriptorGVKe Kbuffer_endYstreamsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJbuffer_end_,
  &Kbuffer_endYstreamsVio,
  &Kbuffer_end_setterYstreamsVio,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJbuffer_end_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K119
};

static _KLbyte_stringGVKd_10 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "buffer-end"
};

_KLgetter_methodGVKi Kbuffer_endYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_endYstreamsVioHLbufferG
};

static _KLpairGVKd K121 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_endYstreamsVioMM0,
  &KPempty_listVKi
};

_KLsetter_methodGVKi Kbuffer_next_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_nextYstreamsVioHLbufferG
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_next_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K124 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "buffer-next-setter"
};

_KLinstance_slot_descriptorGVKe Kbuffer_nextYstreamsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJbuffer_next_,
  &Kbuffer_nextYstreamsVio,
  &Kbuffer_next_setterYstreamsVio,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJbuffer_next_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K127
};

static _KLbyte_stringGVKd_11 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "buffer-next"
};

_KLsetter_methodGVKi Kbuffer_dirtyQ_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_dirtyQYstreamsVioHLbufferG
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_dirtyQ_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K130 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "buffer-dirty?-setter"
};

static _KLsignatureAvaluesGVKi K131 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K132,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

_KLgetter_methodGVKi Kbuffer_nextYstreamsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_nextYstreamsVioHLbufferG
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_nextYstreamsVioMM0,
  &KPempty_listVKi
};

_KLkeyword_methodGVKe Kbuffer_fillYstreamsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K147,
  &key_mep_5,
  &Kbuffer_fillYstreamsVioMM0I,
  &K143
};

_KLkeyword_methodGVKe Kbuffer_fillYstreamsVioMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K142,
  &key_mep_5,
  &Kbuffer_fillYstreamsVioMM1I,
  &K143
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_fillYstreamsVioMM0,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_fillYstreamsVioMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K140 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302345,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_11 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "buffer-fill"
};

static _KLkeyword_signatureGVKe K142 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K144,
  &K145,
  &K146
};

static _KLsimple_object_vectorGVKd_4 K143 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbufferGYstreamsVio,
  &KLbyte_characterGVKe
};

static _KLsimple_object_vectorGVKd_2 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K147 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K113,
  &K145,
  &K146
};

static _KLsignatureGVKe K148 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K149
};

static _KLsimple_object_vectorGVKd_3 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_startYstreamsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJbuffer_start_,
  &Kbuffer_startYstreamsVio,
  &Kbuffer_start_setterYstreamsVio,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJbuffer_start_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K156
};

_KLsealed_generic_functionGVKe Kbuffer_start_setterYstreamsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K155,
  &K154,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_start_setterYstreamsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_startYstreamsVioHLbufferG
};

static _KLpairGVKd K154 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_start_setterYstreamsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K155 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "buffer-start-setter"
};

static _KLbyte_stringGVKd_12 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "buffer-start"
};

static _KLbyte_stringGVKd_63 K158 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "SRC-START %d DST-START %d AND N %d OUTSIDE OF SRC %= AND DST %="
};

static _KLsignatureGVKe K159 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K160
};

static _KLsimple_object_vectorGVKd_5 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kbuffer_element_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K164,
  &K163,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kbuffer_element_setterYstreams_internalsVioMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kbuffer_elementYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K163 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_element_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "buffer-element-setter"
};

_KLrepeated_slot_descriptorGVKe Kbuffer_elementYstreams_internalsVioHLbufferG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  C(' '),
  &KLbufferGYstreamsVio,
  &KJfill_,
  &Kbuffer_elementYstreams_internalsVio,
  &Kbuffer_element_setterYstreams_internalsVio,
  &KLbyte_characterGVKe,
  &KsizeVKdHLbufferGYstreamsVio
};

_KLsealed_generic_functionGVKe Kbuffer_elementYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K170,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLbufferGYstreamsVio = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLrepeated_getter_methodGVKi Kbuffer_elementYstreams_internalsVioMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kbuffer_elementYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_elementYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "buffer-element"
};

static _KLsignatureGVKe K171 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K172
};

static _KLsimple_object_vectorGVKd_5 K172 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K173 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K174
};

static _KLsimple_object_vectorGVKd_5 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K175 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K176
};

static _KLsimple_object_vectorGVKd_5 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K177 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K178
};

static _KLsimple_object_vectorGVKd_5 K178 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K179 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K180
};

static _KLsimple_object_vectorGVKd_5 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K181 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K182
};

static _KLsimple_object_vectorGVKd_5 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_15 K183 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

_KLsimple_methodGVKe Kbuffer_current_elementYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K112,
  &Kbuffer_current_elementYstreams_internalsVioI
};

_KLsimple_methodGVKe Kbuffer_current_element_setterYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K188,
  &Kbuffer_current_element_setterYstreams_internalsVioI
};

static _KLsignatureGVKe K188 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K149
};

static _KLsignatureAvaluesGVKi K189 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 37756933,
  &K132,
  &K190
};

static _KLsimple_object_vectorGVKd_8 K190 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLsignatureAvaluesGVKi K191 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K192,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K192 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K193,
  &KLbufferGYstreamsVio
};

static _KLsingletonGVKd K193 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLvectorGVKd
};

static _KLsignatureAvaluesGVKi K194 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K195,
  &K132
};

static _KLsimple_object_vectorGVKd_2 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K196,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K196 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbufferGYstreamsVio
};

static _KLsignatureAvaluesGVKi K197 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K198,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K199,
  &KLbufferGYstreamsVio
};

static _KLsingletonGVKd K199 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLsignatureAvaluesGVKi K200 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K132,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K201 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K202
};

static _KLsimple_object_vectorGVKd_3 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_characterGVKe,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd
};

static _KLsignatureGVKe K203 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K149
};

static _KLkeyword_signatureAvaluesGVKi K204 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K113,
  &K206,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K205 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPunboundVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF210 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K211,
  &Kanonymous_of_makeF210I,
  (D) 1
};

static _KLsignatureGVKe K211 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K212 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39584773,
  &K214,
  &K215,
  &KDsignature_LobjectG_typesVKi,
  &K132
};

static _KLsimple_object_vectorGVKd_2 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  C(' ')
};

static _KLsimple_object_vectorGVKd_1 K214 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K216
};

static _KLsimple_object_vectorGVKd_1 K215 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfill_
};

static _KLsubclassGVKe K216 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLbufferGYstreamsVio
};

static _KLimplementation_classGVKe K217 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958057,
  &KLbufferGYstreamsVio,
  &KLbufferGYstreamsVioW,
  &Kbuffer_elementYstreams_internalsVioHLbufferG,
  &K218,
  (D) -3,
  &KLbufferGZ32ZconstructorYstreams_internalsVioMM0,
  &K220,
  &K221,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K222,
  &K222,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_10 K218 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &Kbuffer_nextYstreamsVioHLbufferG,
  &Kbuffer_endYstreamsVioHLbufferG,
  &Kbuffer_positionYstreamsVioHLbufferG,
  &Kbuffer_dirtyQYstreamsVioHLbufferG,
  &Kbuffer_startYstreamsVioHLbufferG,
  &Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG,
  &Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG,
  &Kbuffer_use_countYstreams_internalsVioHLbufferG,
  &Kbuffer_owning_streamYstreams_internalsVioHLbufferG,
  &KsizeVKdHLbufferGYstreamsVio
};

_KLkeyword_methodGVKe KLbufferGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep,
  &K252,
  &key_mep_2,
  &KLbufferGZ32ZconstructorYstreams_internalsVioMM0I,
  &K253
};

static _KLsimple_object_vectorGVKd_1 K220 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLvectorGVKd
};

static _KLsimple_object_vectorGVKd_10 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLbufferGYstreamsVio
};

static _KLsimple_object_vectorGVKd_10 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &Kbuffer_nextYstreamsVioHLbufferG,
  &Kbuffer_endYstreamsVioHLbufferG,
  &Kbuffer_positionYstreamsVioHLbufferG,
  &Kbuffer_dirtyQYstreamsVioHLbufferG,
  &Kbuffer_startYstreamsVioHLbufferG,
  &Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG,
  &Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG,
  &Kbuffer_use_countYstreams_internalsVioHLbufferG,
  &Kbuffer_owning_streamYstreams_internalsVioHLbufferG,
  &Kbuffer_elementYstreams_internalsVioHLbufferG
};

_KLinstance_slot_descriptorGVKe Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbufferGYstreamsVio,
  &KPfalseVKi,
  &Kbuffer_on_page_bitsYstreams_internalsVio,
  &Kbuffer_on_page_bits_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLbufferGYstreamsVio,
  &KPfalseVKi,
  &Kbuffer_off_page_bitsYstreams_internalsVio,
  &Kbuffer_off_page_bits_setterYstreams_internalsVio,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kbuffer_use_countYstreams_internalsVioHLbufferG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLbufferGYstreamsVio,
  &KJuse_count_,
  &Kbuffer_use_countYstreams_internalsVio,
  &Kbuffer_use_count_setterYstreams_internalsVio,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJuse_count_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K235
};

_KLsealed_generic_functionGVKe Kbuffer_use_countYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K234,
  &K233,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_use_count_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K231,
  &K230,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_use_count_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_use_countYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_use_count_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K231 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "buffer-use-count-setter"
};

_KLgetter_methodGVKi Kbuffer_use_countYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_use_countYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K233 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_use_countYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K234 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "buffer-use-count"
};

static _KLbyte_stringGVKd_9 K235 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "use-count"
};

_KLsealed_generic_functionGVKe Kbuffer_off_page_bitsYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K243,
  &K242,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_off_page_bits_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K240,
  &K239,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_off_page_bits_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_off_page_bits_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K240 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "buffer-off-page-bits-setter"
};

_KLgetter_methodGVKi Kbuffer_off_page_bitsYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_off_page_bitsYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K242 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_off_page_bitsYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K243 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "buffer-off-page-bits"
};

_KLsealed_generic_functionGVKe Kbuffer_on_page_bitsYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K251,
  &K250,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbuffer_on_page_bits_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K248,
  &K247,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kbuffer_on_page_bits_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_on_page_bits_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K248 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "buffer-on-page-bits-setter"
};

_KLgetter_methodGVKi Kbuffer_on_page_bitsYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kbuffer_on_page_bitsYstreams_internalsVioHLbufferG
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &Kbuffer_on_page_bitsYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K251 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "buffer-on-page-bits"
};

static _KLkeyword_signatureAvaluesGVKi K252 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K254,
  &KDsignature_LobjectG_typesVKi,
  &K132
};

static _KLsimple_object_vectorGVKd_16 K253 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 65,
  &KJbuffer_next_,
  (D) 1,
  &KJbuffer_end_,
  (D) 1,
  &KJbuffer_position_,
  (D) 1,
  &KJbuffer_dirtyQ_,
  &KPfalseVKi,
  &KJbuffer_start_,
  (D) 1,
  &KJuse_count_,
  (D) 1,
  &KJstream_id_,
  &KPfalseVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_8 K254 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJbuffer_next_,
  &KJbuffer_end_,
  &KJbuffer_position_,
  &KJbuffer_dirtyQ_,
  &KJbuffer_start_,
  &KJuse_count_,
  &KJstream_id_,
  &KJsize_
};

static _KLbyte_stringGVKd_8 K255 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "<buffer>"
};

/* Code */

D KmakeVKdMioM1I (D class_, D all_keys_, D fill_) {
  D T4;
  D T5_0;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:46
  T6 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF210, 2, all_keys_, class_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:50
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, fill_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:50
  T7_0 = APPLY4(T6, class_, &KJfill_, T4, all_keys_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:46
  T5_0 = T7_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T7_0);
    primitive_type_check(T5_0, &KLbufferGYstreamsVio);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:46
  MV_SET_COUNT(1);
  return(T5_0);
}

D KelementVKdMioM0I (D buffer_, D index_, D Urest_, D default_) {
  D T5;
  D defaultF6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DBCHR T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20_0;
  D T21;
  D T22_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  T11 = primitive_idQ(default_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
    T5 = DunsuppliedYcommon_extensionsVcommon_dylan;
    defaultF6 = T5;
  } else {
    defaultF6 = default_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  T12 = SLOT_VALUE_INITD(buffer_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  T13 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  T15 = primitive_machine_word_unsigned_less_thanQ(T13,T14);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:66
    T16 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T13);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:66
    T17 = primitive_machine_word_shift_left_signal_overflow(T16,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:66
    T18 = primitive_machine_word_logior(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:66
    T19 = primitive_cast_raw_as_integer(T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:66
    T20_0 = T19;
    T10_0 = T20_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:68
    T21 = primitive_idQ(defaultF6,DunsuppliedYcommon_extensionsVcommon_dylan);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:68
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:69
      T7_0 = Kelement_range_errorVKeI(buffer_, index_);
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:71
      T8_0 = defaultF6;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:71
      T22_0 = T8_0;
      {
        MV_CHECK_TYPE_PROLOGUE(T8_0);
        primitive_type_check(T22_0, &KLintegerGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T9_0 = T22_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:68
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:65
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kelement_no_bounds_checkVKeMioM0I (D buffer_, D index_, D Urest_, D default_) {
  DBCHR T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:84
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T5 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T7 = primitive_machine_word_shift_left_signal_overflow(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:87
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:84
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kelement_setterVKdMioM0I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DSINT T14;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  T7 = SLOT_VALUE_INITD(vector_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    T13 = primitive_cast_integer_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    T12 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    T11 = primitive_raw_as_byte_character(T12);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    T14 = primitive_byte_character_as_raw(T11);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T14, vector_, 10, T8);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:98
    T4_0 = T11;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:100
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:97
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:94
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMioM1I (D new_value_, D vector_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:104
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  T8 = SLOT_VALUE_INITD(vector_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  T11 = primitive_machine_word_unsigned_less_thanQ(T9,T10);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:108
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, new_value_);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:108
    CALL3(&Kbuffer_element_setterYstreams_internalsVio, T4, vector_, index_);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:108
    T5_0 = T4;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:110
    T6_0 = Kelement_range_errorVKeI(vector_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:107
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:104
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_check_setterVKeMioM0I (D new_value_, D buffer_, D index_) {
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  DSINT T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:119
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T5 = primitive_raw_as_byte_character(T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T8 = primitive_byte_character_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T8, buffer_, 10, T9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:122
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:119
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMioM1I (D new_value_, D buffer_, D index_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:125
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:128
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:128
  CALL3(&Kbuffer_element_setterYstreams_internalsVio, T4, buffer_, index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:128
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:125
  MV_SET_COUNT(1);
  return(T5_0);
}

D KemptyQVKdMioM0I (D buffer_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:135
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:137
  T2 = SLOT_VALUE_INITD(buffer_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:137
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:137
  T4 = primitive_machine_word_equalQ(T3,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:137
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:135
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMioM0I (D bsc_, D buffer_) {
  DWORD i_T, i_;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  DBCHR T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:142
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:144
  T5 = SLOT_VALUE_INITD(buffer_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:144
  T6 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T5);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
    T8 = primitive_machine_word_less_thanQ(i_,T7);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:148
      T9 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, i_);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:148
      REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T9, T6, 1, i_);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
      T10 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
      i_T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:146
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:151
  T4_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:142
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMioM1I (D buffer_class_, D bs_) {
  DWORD i_T, i_;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T10;
  D T11;
  D T12;
  DBCHR T13;
  D T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:154
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:156
  T6 = SLOT_VALUE_INITD(bs_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:156
  T9.vector_element_[0] = &KJfill_;
  T9.vector_element_[1] = C(' ');
  T9.vector_element_[2] = &KJsize_;
  T9.vector_element_[3] = T6;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:156
  T8_0 = KLbufferGZ32ZconstructorYstreams_internalsVioMM0I(&KLbufferGYstreamsVio, &T9, (D) 1, (D) 1, (D) 1, &KPfalseVKi, (D) 1, (D) 1, &KPfalseVKi, T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:156
  T7 = T8_0;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
  T10 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
    T12 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
    T11 = primitive_machine_word_less_thanQ(i_,T10);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:159
      T13 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(bs_, 1, i_);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:159
      T14 = primitive_raw_as_byte_character(T13);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:159
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T4 = CONGRUENT_CALL2(&KLbyte_characterGVKe, T14);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:159
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T4, T7, T12);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:158
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:162
  T5_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:154
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMioM2I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:166
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:168
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:166
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMioM0I (D buffer_) {
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_key_;
  D copy_state_;
  D T8_0;
  D T8_1;
  D T8_2;
  D T8_3;
  D T8_4;
  D T8_5;
  D T8_6;
  D T8_7;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D T16_1;
  D T16_2;
  D T16_3;
  D T16_4;
  D T16_5;
  D T16_6;
  D T16_7;
  D T17_0;
  D T17_1;
  D T17_2;
  D T17_3;
  D T17_4;
  D T17_5;
  D T17_6;
  D T17_7;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:186
  T9 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
  T12 = primitive_idQ(T9,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
    T15 = KerrorVKdMM1I(&K183, &KPempty_vectorVKi);
    T11 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
    T13 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
    T14 = SLOT_VALUE_INITD(T9, 1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
    MEP_CALL_PROLOG(T13, T14, 1);
    T10 = MEP_CALL1(T13, buffer_);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:195
  T16_0 = T11;
  T16_1 = MV_GET_ELT(1);
  T16_2 = MV_GET_ELT(2);
  T16_3 = MV_GET_ELT(3);
  T16_4 = MV_GET_ELT(4);
  T16_5 = MV_GET_ELT(5);
  T16_6 = MV_GET_ELT(6);
  T16_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  initial_state_ = T16_0;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  limit_ = T16_1;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  next_state_ = T16_2;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  finished_stateQ_ = T16_3;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  current_key_ = T16_4;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:193
  copy_state_ = T16_7;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:197
  T17_0 = initial_state_;
  T17_1 = limit_;
  T17_2 = next_state_;
  T17_3 = finished_stateQ_;
  T17_4 = current_key_;
  T17_5 = &Kbuffer_current_elementYstreams_internalsVio;
  T17_6 = &Kbuffer_current_element_setterYstreams_internalsVio;
  T17_7 = copy_state_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:186
  T8_0 = T17_0;
  T8_1 = T17_1;
  T8_2 = T17_2;
  T8_3 = T17_3;
  T8_4 = T17_4;
  T8_5 = T17_5;
  T8_6 = T17_6;
  T8_7 = T17_7;
  {
    MV_CHECK_TYPE_PROLOGUE(T17_0);
    primitive_type_check(T8_0, &KLintegerGVKd);
    primitive_type_check(T8_1, &KLintegerGVKd);
    primitive_type_check(T8_2, &KLfunctionGVKd);
    primitive_type_check(T8_3, &KLfunctionGVKd);
    primitive_type_check(T8_4, &KLfunctionGVKd);
    primitive_type_check(T8_5, &KLfunctionGVKd);
    primitive_type_check(T8_6, &KLfunctionGVKd);
    primitive_type_check(T8_7, &KLfunctionGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:186
  MV_SET_ELT(1, T8_1);
  MV_SET_ELT(2, T8_2);
  MV_SET_ELT(3, T8_3);
  MV_SET_ELT(4, T8_4);
  MV_SET_ELT(5, T8_5);
  MV_SET_ELT(6, T8_6);
  MV_SET_ELT(7, T8_7);
  MV_SET_COUNT(8);
  return(T8_0);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM0I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
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
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:249
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:252
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:252
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:252
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:252
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:253
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:253
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T24 = SLOT_VALUE_INITD(src_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:256
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:257
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:258
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:255
    primitive_replace_bytesX(dst_,2,T32,src_,11,T33,T34);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:255
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:260
    T11 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:249
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM1I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
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
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:264
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:267
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:267
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:267
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:267
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:268
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:268
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:270
    T28 = SLOT_VALUE_INITD(dst_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:270
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:270
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:270
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:272
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:273
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:274
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:271
    primitive_replace_bytesX(dst_,11,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:271
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:276
    T11 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:269
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:264
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM2I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
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
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:280
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:283
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:283
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:283
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:283
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:284
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:284
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T24 = SLOT_VALUE_INITD(src_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T28 = SLOT_VALUE_INITD(dst_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:287
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:288
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:289
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:286
    primitive_replace_bytesX(dst_,11,T32,src_,11,T33,T34);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:286
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:291
    T11 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:285
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:280
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM3I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
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
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:295
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:298
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:298
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:298
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:298
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:299
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:299
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T24 = SLOT_VALUE_INITD(src_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T28 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:302
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:303
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:304
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:301
    primitive_replace_bytesX(dst_,2,T32,src_,11,T33,T34);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:301
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:306
    T11 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:300
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:295
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM4I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
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
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:310
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:313
  T13 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:313
  T14 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:313
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:313
  T16 = primitive_machine_word_add_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:314
  T17 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:314
  T18 = primitive_machine_word_add_signal_overflow(T17,T15);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  T19 = primitive_machine_word_less_thanQ(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  if (T19 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T21 = primitive_machine_word_less_thanQ(T13,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T20 = primitive_not(T21);
    T6 = T20;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T23 = primitive_machine_word_less_thanQ(T17,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T22 = primitive_not(T23);
    T7 = T22;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T24 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T27 = primitive_machine_word_less_thanQ(T26,T16);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
    T25 = primitive_not(T27);
    T8 = T25;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:316
    T28 = SLOT_VALUE_INITD(dst_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:316
    T30 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:316
    T31 = primitive_machine_word_less_thanQ(T30,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:316
    T29 = primitive_not(T31);
    T9 = T29;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:318
    T32 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:319
    T33 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:320
    T34 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:317
    primitive_replace_bytesX(dst_,11,T32,src_,2,T33,T34);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:317
    T10 = &KPfalseVKi;
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:322
    T11 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:315
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:310
  MV_SET_COUNT(0);
  return(T12);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM5I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD src_i_T, src_i_;
  DWORD dst_i_T, dst_i_;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:326
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:329
  T16 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:329
  T17 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:329
  T18 = primitive_machine_word_logxor(T17,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:329
  T19 = primitive_machine_word_add_signal_overflow(T16,T18);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:330
  T20 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:330
  T21 = primitive_machine_word_add_signal_overflow(T20,T18);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  T22 = primitive_machine_word_less_thanQ(T17,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  if (T22 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T24 = primitive_machine_word_less_thanQ(T16,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T23 = primitive_not(T24);
    T6 = T23;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T26 = primitive_machine_word_less_thanQ(T20,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T25 = primitive_not(T26);
    T7 = T25;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T27 = SLOT_VALUE_INITD(src_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T29 = primitive_cast_integer_as_raw(T27);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T30 = primitive_machine_word_less_thanQ(T29,T19);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T28 = primitive_not(T30);
    T8 = T28;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T31 = SLOT_VALUE_INITD(dst_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T33 = primitive_cast_integer_as_raw(T31);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T34 = primitive_machine_word_less_thanQ(T33,T21);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
    T32 = primitive_not(T34);
    T9 = T32;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
    src_i_T = T16;
    dst_i_T = T20;
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      src_i_ = src_i_T;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      dst_i_ = dst_i_T;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      T39 = primitive_cast_raw_as_integer(dst_i_);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      T35 = primitive_machine_word_less_thanQ(src_i_,T19);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:335
        T36 = REPEATED_D_SLOT_VALUE_TAGGED(src_, 1, src_i_);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:335
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T12 = CONGRUENT_CALL2(&KLbyte_characterGVKe, T36);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:334
        CALL3(&Kbuffer_element_setterYstreams_internalsVio, T12, dst_, T39);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
        T37 = primitive_machine_word_add_signal_overflow(src_i_,4);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
        T38 = primitive_machine_word_add_signal_overflow(dst_i_,4);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
        src_i_T = T37;
        dst_i_T = T38;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
      T13 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:332
    T15 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:338
    T14 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:331
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:326
  MV_SET_COUNT(0);
  return(T15);
}

D Kcopy_bytesYbyte_vectorVcommon_dylanMioM6I (D dst_, D dst_start_, D src_, D src_start_, D n_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD src_i_T, src_i_;
  DWORD dst_i_T, dst_i_;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  DBCHR T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;
  DWORD T40;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:342
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:346
  T15 = primitive_cast_integer_as_raw(src_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:346
  T16 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:346
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:346
  T18 = primitive_machine_word_add_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:347
  T19 = primitive_cast_integer_as_raw(dst_start_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:347
  T20 = primitive_machine_word_add_signal_overflow(T19,T17);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  T21 = primitive_machine_word_less_thanQ(T16,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  if (T21 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T23 = primitive_machine_word_less_thanQ(T15,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T22 = primitive_not(T23);
    T6 = T22;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T25 = primitive_machine_word_less_thanQ(T19,1);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T24 = primitive_not(T25);
    T7 = T24;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T26 = SLOT_VALUE_INITD(src_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T28 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T29 = primitive_machine_word_less_thanQ(T28,T18);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T27 = primitive_not(T29);
    T8 = T27;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T30 = SLOT_VALUE_INITD(dst_, 0);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T32 = primitive_cast_integer_as_raw(T30);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T33 = primitive_machine_word_less_thanQ(T32,T20);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
    T31 = primitive_not(T33);
    T9 = T31;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
    src_i_T = T15;
    dst_i_T = T19;
  L0: ;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      src_i_ = src_i_T;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      dst_i_ = dst_i_T;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      T34 = primitive_machine_word_less_thanQ(src_i_,T18);
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:352
        T35 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(src_, 10, src_i_);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:352
        T36 = primitive_machine_word_shift_left_signal_overflow(T35,2);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:352
        T37 = primitive_machine_word_logior(T36,1);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:352
        T38 = primitive_cast_raw_as_integer(T37);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:352
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T38, dst_, 1, dst_i_);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
        T39 = primitive_machine_word_add_signal_overflow(src_i_,4);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
        T40 = primitive_machine_word_add_signal_overflow(dst_i_,4);
        // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
        src_i_T = T39;
        dst_i_T = T40;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
      T12 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:350
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:356
    T13 = Kcopy_bytes_range_errorYstreams_internalsVioI(src_, src_start_, dst_, dst_start_, n_);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:348
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:342
  MV_SET_COUNT(0);
  return(T14);
}

D Kbuffer_ref_setterYstreams_internalsVioI (D value_, D buffer_, D index_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:212
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:214
  T5 = primitive_cast_integer_as_raw(value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:214
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:214
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:214
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T4, buffer_, 10, T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:214
  T3 = value_;
  MV_SET_ELT(0, value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:212
  return(T3);
}

D Kbuffer_sizeYstreamsVioMM0I (D buffer_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:53
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:55
  T2 = SLOT_VALUE_INITD(buffer_, 9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:55
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:53
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kbuffer_refYstreams_internalsVioI (D buffer_, D index_) {
  DBCHR T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:206
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T4 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T3 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T4);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T5 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:209
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:206
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kbuffer_fillYstreamsVioMM0I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D lastF8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  T10 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:228
    T11 = SLOT_VALUE_INITD(target_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
    T7 = T11;
    lastF8 = T7;
  } else {
    lastF8 = last_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:230
  T9 = Kcheck_start_compute_endVKeMM0I(target_, startF6, lastF8);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T14 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T13 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T15 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T16 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T17 = primitive_machine_word_subtract_signal_overflow(T15,T16);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T18 = primitive_machine_word_shift_right(T17,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T20 = primitive_cast_integer_as_raw(value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T19 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  primitive_fill_bytesX(target_,11,T13,T18,T19);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:231
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:226
  MV_SET_COUNT(0);
  return(T12);
}

D KLbufferGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_buffer_next_, D Uunique_buffer_end_, D Uunique_buffer_position_, D Uunique_buffer_dirtyQ_, D Uunique_buffer_start_, D Uunique_buffer_use_count_, D Uunique_buffer_owning_stream_, D Uunique_size_) {
  D T11;
  D object_;
  D Uunique_buffer_nextF13;
  D Uunique_buffer_endF14;
  D Uunique_buffer_positionF15;
  D Uunique_buffer_dirtyQF16;
  D Uunique_buffer_startF17;
  D Uunique_buffer_use_countF18;
  D Uunique_buffer_owning_streamF19;
  D Uunique_sizeF20;
  D T21_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:21
  T11 = Kallocate_instanceVKeI(&KLbufferGYstreamsVio, init_args_);
  primitive_type_check(T11, &KLbufferGYstreamsVio);
  object_ = T11;
  primitive_type_check(Uunique_buffer_next_, &KLintegerGVKd);
  Uunique_buffer_nextF13 = Uunique_buffer_next_;
  SLOT_VALUE_SETTER(Uunique_buffer_nextF13, object_, 0);
  primitive_type_check(Uunique_buffer_end_, &KLintegerGVKd);
  Uunique_buffer_endF14 = Uunique_buffer_end_;
  SLOT_VALUE_SETTER(Uunique_buffer_endF14, object_, 1);
  primitive_type_check(Uunique_buffer_position_, &KLintegerGVKd);
  Uunique_buffer_positionF15 = Uunique_buffer_position_;
  SLOT_VALUE_SETTER(Uunique_buffer_positionF15, object_, 2);
  primitive_type_check(Uunique_buffer_dirtyQ_, &KLbooleanGVKd);
  Uunique_buffer_dirtyQF16 = Uunique_buffer_dirtyQ_;
  SLOT_VALUE_SETTER(Uunique_buffer_dirtyQF16, object_, 3);
  primitive_type_check(Uunique_buffer_start_, &KLintegerGVKd);
  Uunique_buffer_startF17 = Uunique_buffer_start_;
  SLOT_VALUE_SETTER(Uunique_buffer_startF17, object_, 4);
  SLOT_VALUE_SETTER(&KPunboundVKi, object_, 5);
  SLOT_VALUE_SETTER(&KPunboundVKi, object_, 6);
  primitive_type_check(Uunique_buffer_use_count_, &KLintegerGVKd);
  Uunique_buffer_use_countF18 = Uunique_buffer_use_count_;
  SLOT_VALUE_SETTER(Uunique_buffer_use_countF18, object_, 7);
  primitive_type_check(Uunique_buffer_owning_stream_, &K97);
  Uunique_buffer_owning_streamF19 = Uunique_buffer_owning_stream_;
  SLOT_VALUE_SETTER(Uunique_buffer_owning_streamF19, object_, 8);
  primitive_type_check(Uunique_size_, &KLintegerGVKd);
  Uunique_sizeF20 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF20, object_, 9);
  T21_0 = object_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:21
  MV_SET_COUNT(1);
  return(T21_0);
}

D Kbuffer_fillYstreamsVioMM1I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D lastF8;
  D T9;
  D T10;
  DSINT T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  T9 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:236
    T10 = SLOT_VALUE_INITD(target_, 9);
    // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
    T7 = T10;
    lastF8 = T7;
  } else {
    lastF8 = last_;
  }
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:237
  T11 = primitive_byte_character_as_raw(value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:237
  T12 = primitive_machine_word_shift_left_signal_overflow(T11,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:237
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:237
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:237
  T15 = Kbuffer_fillYstreamsVioMM0I(target_, T14, &KPempty_vectorVKi, startF6, lastF8);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:234
  MV_SET_COUNT(0);
  return(T15);
}

D Kcopy_bytes_range_errorYstreams_internalsVioI (D src_, D src_start_, D dst_, D dst_start_, D n_) {
  _KLsimple_object_vectorGVKd_5 T5 = {&KLsimple_object_vectorGVKdW, (D) 21};
  D T6;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:242
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:245
  T5.vector_element_[0] = src_start_;
  T5.vector_element_[1] = dst_start_;
  T5.vector_element_[2] = n_;
  T5.vector_element_[3] = src_;
  T5.vector_element_[4] = dst_;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:245
  T6 = KerrorVKdMM1I(&K158, &T5);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:242
  MV_SET_COUNT(0);
  return(T6);
}

D Kbuffer_current_elementYstreams_internalsVioI (D buffer_, D state_) {
  DBCHR T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:174
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T3 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(buffer_, 10, T4);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T5 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:177
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:174
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kbuffer_current_element_setterYstreams_internalsVioI (D new_value_, D buffer_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:180
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:183
  T5 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:183
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:183
  T6 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:183
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T4, buffer_, 10, T6);
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:183
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:180
  MV_SET_COUNT(0);
  return(T3);
}

static D Kanonymous_of_makeF210I (D Unext_method_argsU_) {
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


/* SYSTEM INIT CODE */

void _Init_io__X_4Enative_buffer_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_dirtyQ_);
    if (T0 != &KJbuffer_dirtyQ_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 6);
      primitive_slot_value_setter(T0, &Kbuffer_dirtyQYstreamsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_id_);
    if (T0 != &KJstream_id_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 12);
      primitive_slot_value_setter(T0, &Kbuffer_owning_streamYstreams_internalsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_position_);
    if (T0 != &KJbuffer_position_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 4);
      primitive_slot_value_setter(T0, &Kbuffer_positionYstreamsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_end_);
    if (T0 != &KJbuffer_end_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 2);
      primitive_slot_value_setter(T0, &Kbuffer_endYstreamsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_next_);
    if (T0 != &KJbuffer_next_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 0);
      primitive_slot_value_setter(T0, &Kbuffer_nextYstreamsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_start_);
    if (T0 != &KJbuffer_start_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 8);
      primitive_slot_value_setter(T0, &Kbuffer_startYstreamsVioHLbufferG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJuse_count_);
    if (T0 != &KJuse_count_) {
      primitive_repeated_slot_value_setter(T0, &K254, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K253, 1, 10);
      primitive_slot_value_setter(T0, &Kbuffer_use_countYstreams_internalsVioHLbufferG, 3);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:21
  T0 = KPadd_classVKeI(&KLbufferGYstreamsVio);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_io__X_4Enative_buffer_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:34
  T0 = KPadd_a_methodVKnI(&KsizeVKd, &KsizeVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I4;
}
I4:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:42
  T0 = KPadd_nonsiblinged_domainVKnI(&KsizeVKd, &KsizeVKdRD_ioRD_0);
  goto I6;
}
I6:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:43
  T0 = KPadd_nonsiblinged_domainVKnI(&KmakeVKd, &KmakeVKdRD_ioRD_4);
  goto I8;
}
I8:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:44
  T0 = KPadd_nonsiblinged_domainVKnI(&KinitializeVKd, &KinitializeVKdRD_ioRD_3);
  goto I10;
}
I10:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:46
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I11;
}
I11:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:62
  T0 = KPadd_a_methodVKnI(&KelementVKd, &KelementVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I16;
}
I16:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:84
  T0 = KPadd_a_methodVKnI(&Kelement_no_bounds_checkVKe, &Kelement_no_bounds_checkVKeMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I19;
}
I19:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:94
  T0 = KPadd_a_methodVKnI(&Kelement_setterVKd, &Kelement_setterVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I22;
}
I22:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:104
  T0 = KPadd_a_methodVKnI(&Kelement_setterVKd, &Kelement_setterVKdMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I25;
}
I25:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:119
  T0 = KPadd_a_methodVKnI(&Kelement_no_bounds_check_setterVKe, &Kelement_no_bounds_check_setterVKeMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I28;
}
I28:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:125
  T0 = KPadd_a_methodVKnI(&Kelement_no_bounds_check_setterVKe, &Kelement_no_bounds_check_setterVKeMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I31;
}
I31:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:135
  T0 = KPadd_a_methodVKnI(&KemptyQVKd, &KemptyQVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I34;
}
I34:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:142
  T0 = KPadd_a_methodVKnI(&KasVKd, &KasVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I37;
}
I37:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:154
  T0 = KPadd_a_methodVKnI(&KasVKd, &KasVKdMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I40;
}
I40:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:166
  T0 = KPadd_a_methodVKnI(&KasVKd, &KasVKdMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I43;
}
I43:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:186
  T0 = KPadd_a_methodVKnI(&Kforward_iteration_protocolVKd, &Kforward_iteration_protocolVKdMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPfalseVKi);
  goto I46;
}
I46:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:249
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM0, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I49;
}
I49:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:264
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM1, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I52;
}
I52:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:280
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM2, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I55;
}
I55:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:295
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM3, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I58;
}
I58:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:310
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM4, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I61;
}
I61:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:326
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM5, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I64;
}
I64:

{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/native-buffer.dylan:342
  T0 = KPadd_a_methodVKnI(&Kcopy_bytesYbyte_vectorVcommon_dylan, &Kcopy_bytesYbyte_vectorVcommon_dylanMioM6, &Kio_libraryYdylan_userVio, &KPfalseVKi, &KPfalseVKi, &KPtrueVKi);
  goto I67;
}
I67:

  return;
}


/* eof */
