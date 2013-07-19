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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(12);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
} _KLgetter_methodGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLduplicate_join_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_priority_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLunexpected_thread_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_creation_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_finalization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_finalization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_creation_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLnot_owned_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLcount_exceeded_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLunexpected_synchronization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLalready_owned_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLlock_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
} _KLconditional_update_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_inactive_errorGYthreadsVdylan;


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
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kthreads_internal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsymbolGVKd KJlock_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
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
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLmoduleGVKe Kthreads_moduleYdylan_userVdylan;
extern _KLsymbolGVKd KJthread_;

/* Defined object declarations */

extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
extern _KLclassGVKd KLduplicate_join_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLduplicate_join_errorGYthreadsVdylanW;
extern _KLclassGVKd KLthread_priority_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_priority_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLunexpected_thread_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLunexpected_thread_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLthread_creation_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_creation_errorGYthreadsVdylanW;
extern _KLclassGVKd KLthread_finalization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_finalization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLsynchronization_finalization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronization_finalization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLsynchronization_creation_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronization_creation_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLnot_owned_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLnot_owned_errorGYthreadsVdylanW;
extern _KLclassGVKd KLcount_exceeded_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLcount_exceeded_errorGYthreadsVdylanW;
extern _KLclassGVKd KLunexpected_synchronization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLunexpected_synchronization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLalready_owned_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLalready_owned_errorGYthreads_internalVdylanW;
static _KLimplementation_classGVKe K24;
static _KLsimple_object_vectorGVKd_1 K25;
extern _KLkeyword_methodGVKe KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K28;
static _KLsimple_object_vectorGVKd_6 K29;
extern _KLclassGVKd KLlock_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLlock_errorGYthreads_internalVdylanW;
static _KLimplementation_classGVKe K32;
static _KLsimple_object_vectorGVKd_1 K33;
static _KLsimple_object_vectorGVKd_6 K34;
static _KLbyte_stringGVKd_12 K35;
static _KLbyte_stringGVKd_23 K36;
static _KLkeyword_signatureAvaluesGVKi K37;
static _KLsimple_object_vectorGVKd_2 K38;
static _KLsimple_object_vectorGVKd_1 K39;
static _KLsimple_object_vectorGVKd_1 K40;
extern _KLinstance_slot_descriptorGVKe KlockYthreads_internalVdylanHLlock_errorG;
extern _KLsealed_generic_functionGVKe KlockYthreads_internalVdylan;
extern _KLgetter_methodGVKi KlockYthreads_internalVdylanMM0;
static _KLpairGVKd K44;
static _KLbyte_stringGVKd_4 K45;
static _KLbyte_stringGVKd_21 K46;
static _KLimplementation_classGVKe K47;
static _KLsimple_object_vectorGVKd_1 K48;
extern _KLkeyword_methodGVKe KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K51;
static _KLsimple_object_vectorGVKd_6 K52;
extern _KLclassGVKd KLsynchronization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronization_errorGYthreads_internalVdylanW;
static _KLimplementation_classGVKe K55;
static _KLsimple_object_vectorGVKd_6 K56;
static _KLbyte_stringGVKd_23 K57;
static _KLkeyword_signatureAvaluesGVKi K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLsimple_object_vectorGVKd_1 K60;
static _KLsimple_object_vectorGVKd_1 K61;
extern _KLinstance_slot_descriptorGVKe KsynchronizationYthreads_internalVdylanHLsynchronization_errorG;
extern _KLsealed_generic_functionGVKe KsynchronizationYthreads_internalVdylan;
extern _KLgetter_methodGVKi KsynchronizationYthreads_internalVdylanMM0;
extern _KLgetter_methodGVKi KsynchronizationYthreads_internalVdylanMM1;
static _KLpairGVKd K66;
static _KLpairGVKd K67;
static _KLbyte_stringGVKd_15 K68;
extern _KLinstance_slot_descriptorGVKe KsynchronizationYthreads_internalVdylanHLtimeout_expiredG;
static _KLbyte_stringGVKd_34 K70;
static _KLimplementation_classGVKe K71;
extern _KLkeyword_methodGVKe KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K74;
static _KLkeyword_signatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_1 K76;
static _KLbyte_stringGVKd_22 K77;
static _KLimplementation_classGVKe K78;
extern _KLkeyword_methodGVKe KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K81;
static _KLkeyword_signatureAvaluesGVKi K82;
static _KLsimple_object_vectorGVKd_1 K83;
static _KLbyte_stringGVKd_17 K84;
static _KLimplementation_classGVKe K85;
extern _KLkeyword_methodGVKe KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K88;
static _KLkeyword_signatureAvaluesGVKi K89;
static _KLsimple_object_vectorGVKd_1 K90;
static _KLbyte_stringGVKd_32 K91;
static _KLimplementation_classGVKe K92;
extern _KLkeyword_methodGVKe KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K95;
static _KLkeyword_signatureAvaluesGVKi K96;
static _KLsimple_object_vectorGVKd_1 K97;
static _KLbyte_stringGVKd_36 K98;
static _KLimplementation_classGVKe K99;
static _KLsimple_object_vectorGVKd_1 K100;
extern _KLkeyword_methodGVKe KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K103;
static _KLsimple_object_vectorGVKd_6 K104;
extern _KLclassGVKd KLthread_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_errorGYthreadsVdylanW;
static _KLimplementation_classGVKe K107;
static _KLsimple_object_vectorGVKd_6 K108;
static _KLbyte_stringGVKd_14 K109;
static _KLkeyword_signatureAvaluesGVKi K110;
static _KLsimple_object_vectorGVKd_2 K111;
static _KLsimple_object_vectorGVKd_1 K112;
static _KLsimple_object_vectorGVKd_1 K113;
extern _KLinstance_slot_descriptorGVKe KthreadYthreads_internalVdylanHLthread_errorG;
extern _KLsealed_generic_functionGVKe KthreadYthreads_internalVdylan;
extern _KLgetter_methodGVKi KthreadYthreads_internalVdylanMM0;
static _KLpairGVKd K117;
static _KLbyte_stringGVKd_6 K118;
static _KLbyte_stringGVKd_27 K119;
static _KLimplementation_classGVKe K120;
extern _KLkeyword_methodGVKe KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K123;
static _KLkeyword_signatureAvaluesGVKi K124;
static _KLsimple_object_vectorGVKd_1 K125;
static _KLbyte_stringGVKd_23 K126;
static _KLimplementation_classGVKe K127;
extern _KLkeyword_methodGVKe KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K130;
static _KLkeyword_signatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_1 K132;
static _KLbyte_stringGVKd_25 K133;
static _KLimplementation_classGVKe K134;
extern _KLkeyword_methodGVKe KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K137;
static _KLkeyword_signatureAvaluesGVKi K138;
static _KLsimple_object_vectorGVKd_1 K139;
static _KLbyte_stringGVKd_23 K140;
static _KLimplementation_classGVKe K141;
extern _KLkeyword_methodGVKe KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K144;
static _KLkeyword_signatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_1 K146;
static _KLbyte_stringGVKd_22 K147;
static _KLimplementation_classGVKe K148;
static _KLsimple_object_vectorGVKd_1 K149;
extern _KLkeyword_methodGVKe KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0;
D KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K152;
static _KLsimple_object_vectorGVKd_6 K153;
static _KLkeyword_signatureAvaluesGVKi K154;
static _KLsimple_object_vectorGVKd_1 K155;
static _KLbyte_stringGVKd_17 K156;
extern _KLclassGVKd KLconditional_update_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLconditional_update_errorGYthreadsVdylanW;
static _KLimplementation_classGVKe K159;
extern _KLkeyword_methodGVKe KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D);
static _KLsimple_object_vectorGVKd_6 K162;
static _KLkeyword_signatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_1 K164;
static _KLbyte_stringGVKd_26 K165;
extern _KLclassGVKd KLthread_inactive_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_inactive_errorGYthreadsVdylanW;
static _KLimplementation_classGVKe K168;
extern _KLkeyword_methodGVKe KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0;
D KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K171;
static _KLkeyword_signatureAvaluesGVKi K172;
static _KLsimple_object_vectorGVKd_1 K173;
static _KLbyte_stringGVKd_23 K174;
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

/* Indirection variables */


/* Variables */

D Lthread_errorGYthreadsVdylan = &KLthread_errorGYthreadsVdylan;
D Lthread_inactive_errorGYthreadsVdylan = &KLthread_inactive_errorGYthreadsVdylan;
D Lduplicate_join_errorGYthreadsVdylan = &KLduplicate_join_errorGYthreadsVdylan;
D Lthread_creation_errorGYthreadsVdylan = &KLthread_creation_errorGYthreadsVdylan;
D Lthread_priority_errorGYthreads_internalVdylan = &KLthread_priority_errorGYthreads_internalVdylan;
D Lunexpected_thread_errorGYthreads_internalVdylan = &KLunexpected_thread_errorGYthreads_internalVdylan;
D Lthread_finalization_errorGYthreads_internalVdylan = &KLthread_finalization_errorGYthreads_internalVdylan;
D Ltimeout_expiredGYthreadsVdylan = &KLtimeout_expiredGYthreadsVdylan;
D Lsynchronization_errorGYthreads_internalVdylan = &KLsynchronization_errorGYthreads_internalVdylan;
D Lunexpected_synchronization_errorGYthreads_internalVdylan = &KLunexpected_synchronization_errorGYthreads_internalVdylan;
D Lsynchronization_creation_errorGYthreads_internalVdylan = &KLsynchronization_creation_errorGYthreads_internalVdylan;
D Lsynchronization_finalization_errorGYthreads_internalVdylan = &KLsynchronization_finalization_errorGYthreads_internalVdylan;
D Llock_errorGYthreads_internalVdylan = &KLlock_errorGYthreads_internalVdylan;
D Lcount_exceeded_errorGYthreadsVdylan = &KLcount_exceeded_errorGYthreadsVdylan;
D Lnot_owned_errorGYthreadsVdylan = &KLnot_owned_errorGYthreadsVdylan;
D Lalready_owned_errorGYthreads_internalVdylan = &KLalready_owned_errorGYthreads_internalVdylan;
D Lconditional_update_errorGYthreadsVdylan = &KLconditional_update_errorGYthreadsVdylan;

/* Objects */

_KLclassGVKd KLtimeout_expiredGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K156,
  &K148,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K148,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLduplicate_join_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K147,
  &K141,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLduplicate_join_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K141,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLthread_priority_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K140,
  &K134,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLthread_priority_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K134,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLunexpected_thread_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K133,
  &K127,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLunexpected_thread_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K127,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLthread_creation_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K126,
  &K120,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLthread_creation_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K120,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLthread_finalization_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K119,
  &K99,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLthread_finalization_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K99,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLsynchronization_finalization_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K98,
  &K92,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsynchronization_finalization_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K92,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLsynchronization_creation_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K91,
  &K85,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsynchronization_creation_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K85,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLnot_owned_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K84,
  &K78,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLnot_owned_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K78,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLcount_exceeded_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K77,
  &K71,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLcount_exceeded_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K71,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLunexpected_synchronization_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K70,
  &K47,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLunexpected_synchronization_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K47,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLalready_owned_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K46,
  &K24,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLalready_owned_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K24,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K24 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLalready_owned_errorGYthreads_internalVdylan,
  &KLalready_owned_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K25,
  (D) 7185,
  &KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K28,
  &K29,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KlockYthreads_internalVdylanHLlock_errorG
};

_KLkeyword_methodGVKe KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K37,
  &key_mep_2,
  &KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K38
};

static _KLsimple_object_vectorGVKd_1 K28 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlock_errorGYthreads_internalVdylan
};

static _KLsimple_object_vectorGVKd_6 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLlock_errorGYthreads_internalVdylan,
  &KLalready_owned_errorGYthreads_internalVdylan
};

_KLclassGVKd KLlock_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K35,
  &K32,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlock_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K32,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K32 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLlock_errorGYthreads_internalVdylan,
  &KLlock_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K25,
  (D) 7161,
  &Kdefault_class_constructorVKi,
  &K33,
  &K34,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K184,
  &KPempty_vectorVKi,
  &K25,
  &K25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_6 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLlock_errorGYthreads_internalVdylan,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_12 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "<lock-error>"
};

static _KLbyte_stringGVKd_23 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K37 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K39,
  &KDsignature_LobjectG_typesVKi,
  &K40
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJlock_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJlock_
};

static _KLsimple_object_vectorGVKd_1 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLalready_owned_errorGYthreads_internalVdylan
};

_KLinstance_slot_descriptorGVKe KlockYthreads_internalVdylanHLlock_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlock_errorGYthreads_internalVdylan,
  &KJlock_,
  &KlockYthreads_internalVdylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe KlockYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K45,
  &K44,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KlockYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KlockYthreads_internalVdylanHLlock_errorG
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KlockYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K45 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "lock"
};

static _KLbyte_stringGVKd_21 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<already-owned-error>"
};

static _KLimplementation_classGVKe K47 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLunexpected_synchronization_errorGYthreads_internalVdylan,
  &KLunexpected_synchronization_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K48,
  (D) 7137,
  &KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K51,
  &K52,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K48,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsynchronizationYthreads_internalVdylanHLsynchronization_errorG
};

_KLkeyword_methodGVKe KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K58,
  &key_mep_2,
  &KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K59
};

static _KLsimple_object_vectorGVKd_1 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronization_errorGYthreads_internalVdylan
};

static _KLsimple_object_vectorGVKd_6 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KLunexpected_synchronization_errorGYthreads_internalVdylan
};

_KLclassGVKd KLsynchronization_errorGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K57,
  &K55,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsynchronization_errorGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K55,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K55 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KLsynchronization_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K48,
  (D) 7129,
  &Kdefault_class_constructorVKi,
  &K33,
  &K56,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K181,
  &KPempty_vectorVKi,
  &K48,
  &K48,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<synchronization-error>"
};

static _KLkeyword_signatureAvaluesGVKi K58 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K60,
  &KDsignature_LobjectG_typesVKi,
  &K61
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsynchronization_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsynchronization_
};

static _KLsimple_object_vectorGVKd_1 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunexpected_synchronization_errorGYthreads_internalVdylan
};

_KLinstance_slot_descriptorGVKe KsynchronizationYthreads_internalVdylanHLsynchronization_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KJsynchronization_,
  &KsynchronizationYthreads_internalVdylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe KsynchronizationYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K68,
  &K66,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KsynchronizationYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsynchronizationYthreads_internalVdylanHLtimeout_expiredG
};

_KLgetter_methodGVKi KsynchronizationYthreads_internalVdylanMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsynchronizationYthreads_internalVdylanHLsynchronization_errorG
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &KsynchronizationYthreads_internalVdylanMM0,
  &K67
};

static _KLpairGVKd K67 = {
  &KLpairGVKdW /* wrapper */,
  &KsynchronizationYthreads_internalVdylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "synchronization"
};

_KLinstance_slot_descriptorGVKe KsynchronizationYthreads_internalVdylanHLtimeout_expiredG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtimeout_expiredGYthreadsVdylan,
  &KJsynchronization_,
  &KsynchronizationYthreads_internalVdylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_34 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "<unexpected-synchronization-error>"
};

static _KLimplementation_classGVKe K71 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLcount_exceeded_errorGYthreadsVdylan,
  &KLcount_exceeded_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K25,
  (D) 7169,
  &KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K28,
  &K74,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K75,
  &key_mep_2,
  &KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K38
};

static _KLsimple_object_vectorGVKd_6 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLlock_errorGYthreads_internalVdylan,
  &KLcount_exceeded_errorGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K75 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K39,
  &KDsignature_LobjectG_typesVKi,
  &K76
};

static _KLsimple_object_vectorGVKd_1 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLcount_exceeded_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_22 K77 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<count-exceeded-error>"
};

static _KLimplementation_classGVKe K78 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLnot_owned_errorGYthreadsVdylan,
  &KLnot_owned_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K25,
  (D) 7177,
  &KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K28,
  &K81,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K82,
  &key_mep_2,
  &KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K38
};

static _KLsimple_object_vectorGVKd_6 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLlock_errorGYthreads_internalVdylan,
  &KLnot_owned_errorGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K82 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K39,
  &KDsignature_LobjectG_typesVKi,
  &K83
};

static _KLsimple_object_vectorGVKd_1 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnot_owned_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_17 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<not-owned-error>"
};

static _KLimplementation_classGVKe K85 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLsynchronization_creation_errorGYthreads_internalVdylan,
  &KLsynchronization_creation_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K48,
  (D) 7145,
  &KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K51,
  &K88,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K48,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K89,
  &key_mep_2,
  &KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K59
};

static _KLsimple_object_vectorGVKd_6 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KLsynchronization_creation_errorGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K89 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K60,
  &KDsignature_LobjectG_typesVKi,
  &K90
};

static _KLsimple_object_vectorGVKd_1 K90 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronization_creation_errorGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_32 K91 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "<synchronization-creation-error>"
};

static _KLimplementation_classGVKe K92 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLsynchronization_finalization_errorGYthreads_internalVdylan,
  &KLsynchronization_finalization_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K48,
  (D) 7153,
  &KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K51,
  &K95,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K48,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K96,
  &key_mep_2,
  &KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K59
};

static _KLsimple_object_vectorGVKd_6 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &KLsynchronization_finalization_errorGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K96 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K60,
  &KDsignature_LobjectG_typesVKi,
  &K97
};

static _KLsimple_object_vectorGVKd_1 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronization_finalization_errorGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_36 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "<synchronization-finalization-error>"
};

static _KLimplementation_classGVKe K99 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLthread_finalization_errorGYthreads_internalVdylan,
  &KLthread_finalization_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7113,
  &KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K104,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KthreadYthreads_internalVdylanHLthread_errorG
};

_KLkeyword_methodGVKe KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K110,
  &key_mep_2,
  &KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_1 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthread_errorGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLthread_finalization_errorGYthreads_internalVdylan
};

_KLclassGVKd KLthread_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K109,
  &K107,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLthread_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K107,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K107 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLthread_errorGYthreadsVdylan,
  &KLthread_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7065,
  &Kdefault_class_constructorVKi,
  &K33,
  &K108,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K175,
  &KPempty_vectorVKi,
  &K100,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_14 K109 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<thread-error>"
};

static _KLkeyword_signatureAvaluesGVKi K110 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K113
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJthread_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJthread_
};

static _KLsimple_object_vectorGVKd_1 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthread_finalization_errorGYthreads_internalVdylan
};

_KLinstance_slot_descriptorGVKe KthreadYthreads_internalVdylanHLthread_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLthread_errorGYthreadsVdylan,
  &KJthread_,
  &KthreadYthreads_internalVdylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe KthreadYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K118,
  &K117,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KthreadYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KthreadYthreads_internalVdylanHLthread_errorG
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &KthreadYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "thread"
};

static _KLbyte_stringGVKd_27 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<thread-finalization-error>"
};

static _KLimplementation_classGVKe K120 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLthread_creation_errorGYthreadsVdylan,
  &KLthread_creation_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7089,
  &KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K123,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K124,
  &key_mep_2,
  &KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_6 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLthread_creation_errorGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K124 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K125
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthread_creation_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_23 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<thread-creation-error>"
};

static _KLimplementation_classGVKe K127 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLunexpected_thread_errorGYthreads_internalVdylan,
  &KLunexpected_thread_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7105,
  &KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K130,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K131,
  &key_mep_2,
  &KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_6 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLunexpected_thread_errorGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K131 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K132
};

static _KLsimple_object_vectorGVKd_1 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunexpected_thread_errorGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_25 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "<unexpected-thread-error>"
};

static _KLimplementation_classGVKe K134 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLthread_priority_errorGYthreads_internalVdylan,
  &KLthread_priority_errorGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7097,
  &KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K137,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K138,
  &key_mep_2,
  &KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_6 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLthread_priority_errorGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K138 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K139
};

static _KLsimple_object_vectorGVKd_1 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthread_priority_errorGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_23 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<thread-priority-error>"
};

static _KLimplementation_classGVKe K141 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLduplicate_join_errorGYthreadsVdylan,
  &KLduplicate_join_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7081,
  &KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K144,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K145,
  &key_mep_2,
  &KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_6 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLduplicate_join_errorGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K145 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K146
};

static _KLsimple_object_vectorGVKd_1 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLduplicate_join_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_22 K147 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<duplicate-join-error>"
};

static _KLimplementation_classGVKe K148 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLtimeout_expiredGYthreadsVdylan,
  &KLtimeout_expiredGYthreadsVdylanW,
  &KPfalseVKi,
  &K149,
  (D) 7121,
  &KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0,
  &K152,
  &K153,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K149,
  &K149,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsynchronizationYthreads_internalVdylanHLtimeout_expiredG
};

_KLkeyword_methodGVKe KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K154,
  &key_mep_2,
  &KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K59
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLserious_conditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLtimeout_expiredGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K154 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K60,
  &KDsignature_LobjectG_typesVKi,
  &K155
};

static _KLsimple_object_vectorGVKd_1 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtimeout_expiredGYthreadsVdylan
};

static _KLbyte_stringGVKd_17 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<timeout-expired>"
};

_KLclassGVKd KLconditional_update_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K165,
  &K159,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLconditional_update_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K159,
  (D) 2049,
  1,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K159 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102081,
  &KLconditional_update_errorGYthreadsVdylan,
  &KLconditional_update_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 7193,
  &KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K33,
  &K162,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K163,
  &key_mep_2,
  &KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLconditional_update_errorGYthreadsVdylan,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K163 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K164
};

static _KLsimple_object_vectorGVKd_1 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconditional_update_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_26 K165 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<conditional-update-error>"
};

_KLclassGVKd KLthread_inactive_errorGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K174,
  &K168,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLthread_inactive_errorGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K168,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K168 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102085,
  &KLthread_inactive_errorGYthreadsVdylan,
  &KLthread_inactive_errorGYthreadsVdylanW,
  &KPfalseVKi,
  &K100,
  (D) 7073,
  &KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0,
  &K103,
  &K171,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K100,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K172,
  &key_mep_2,
  &KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K111
};

static _KLsimple_object_vectorGVKd_6 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLthread_errorGYthreadsVdylan,
  &KLthread_inactive_errorGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K172 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K112,
  &KDsignature_LobjectG_typesVKi,
  &K173
};

static _KLsimple_object_vectorGVKd_1 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthread_inactive_errorGYthreadsVdylan
};

static _KLbyte_stringGVKd_23 K174 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<thread-inactive-error>"
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &KLthread_finalization_errorGYthreads_internalVdylan,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KLunexpected_thread_errorGYthreads_internalVdylan,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KLthread_priority_errorGYthreads_internalVdylan,
  &K178
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &KLthread_creation_errorGYthreadsVdylan,
  &K179
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &KLduplicate_join_errorGYthreadsVdylan,
  &K180
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &KLthread_inactive_errorGYthreadsVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &KLsynchronization_finalization_errorGYthreads_internalVdylan,
  &K182
};

static _KLpairGVKd K182 = {
  &KLpairGVKdW /* wrapper */,
  &KLsynchronization_creation_errorGYthreads_internalVdylan,
  &K183
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &KLunexpected_synchronization_errorGYthreads_internalVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &KLalready_owned_errorGYthreads_internalVdylan,
  &K185
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &KLnot_owned_errorGYthreadsVdylan,
  &K186
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &KLcount_exceeded_errorGYthreadsVdylan,
  &KPempty_listVKi
};

/* Code */

D KLalready_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_lock_) {
  D T4;
  D Uunique_lockF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
  T8 = primitive_idQ(Uunique_lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJlock_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
    T4 = T10;
    Uunique_lockF5 = T4;
  } else {
    Uunique_lockF5 = Uunique_lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
  T6 = primitive_object_allocate_filled(2,&KLalready_owned_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_lockF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:72
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLunexpected_synchronization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_) {
  D T4;
  D Uunique_synchronizationF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
  T8 = primitive_idQ(Uunique_synchronization_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJsynchronization_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
    T4 = T10;
    Uunique_synchronizationF5 = T4;
  } else {
    Uunique_synchronizationF5 = Uunique_synchronization_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
  T6 = primitive_object_allocate_filled(2,&KLunexpected_synchronization_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_synchronizationF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:48
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLcount_exceeded_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_lock_) {
  D T4;
  D Uunique_lockF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
  T8 = primitive_idQ(Uunique_lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJlock_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
    T4 = T10;
    Uunique_lockF5 = T4;
  } else {
    Uunique_lockF5 = Uunique_lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
  T6 = primitive_object_allocate_filled(2,&KLcount_exceeded_errorGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_lockF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:66
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLnot_owned_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_lock_) {
  D T4;
  D Uunique_lockF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
  T8 = primitive_idQ(Uunique_lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJlock_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
    T4 = T10;
    Uunique_lockF5 = T4;
  } else {
    Uunique_lockF5 = Uunique_lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
  T6 = primitive_object_allocate_filled(2,&KLnot_owned_errorGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_lockF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:69
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsynchronization_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_) {
  D T4;
  D Uunique_synchronizationF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
  T8 = primitive_idQ(Uunique_synchronization_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJsynchronization_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
    T4 = T10;
    Uunique_synchronizationF5 = T4;
  } else {
    Uunique_synchronizationF5 = Uunique_synchronization_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
  T6 = primitive_object_allocate_filled(2,&KLsynchronization_creation_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_synchronizationF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:51
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsynchronization_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_) {
  D T4;
  D Uunique_synchronizationF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
  T8 = primitive_idQ(Uunique_synchronization_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJsynchronization_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
    T4 = T10;
    Uunique_synchronizationF5 = T4;
  } else {
    Uunique_synchronizationF5 = Uunique_synchronization_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
  T6 = primitive_object_allocate_filled(2,&KLsynchronization_finalization_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_synchronizationF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:54
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLthread_finalization_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
  T6 = primitive_object_allocate_filled(2,&KLthread_finalization_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:32
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLthread_creation_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
  T6 = primitive_object_allocate_filled(2,&KLthread_creation_errorGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:23
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLunexpected_thread_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
  T6 = primitive_object_allocate_filled(2,&KLunexpected_thread_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:29
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLthread_priority_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
  T6 = primitive_object_allocate_filled(2,&KLthread_priority_errorGYthreads_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:26
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLduplicate_join_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
  T6 = primitive_object_allocate_filled(2,&KLduplicate_join_errorGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:20
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLtimeout_expiredGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_) {
  D T4;
  D Uunique_synchronizationF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
  T8 = primitive_idQ(Uunique_synchronization_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJsynchronization_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
    T4 = T10;
    Uunique_synchronizationF5 = T4;
  } else {
    Uunique_synchronizationF5 = Uunique_synchronization_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
  T6 = primitive_object_allocate_filled(2,&KLtimeout_expiredGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_synchronizationF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:36
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLconditional_update_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:76
  T3 = primitive_object_allocate_filled(1,&KLconditional_update_errorGYthreadsVdylanW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:76
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLthread_inactive_errorGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_thread_) {
  D T4;
  D Uunique_threadF5;
  D T6;
  D T7_0;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
  T8 = primitive_idQ(Uunique_thread_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
  if (T8 != &KPfalseVKi) {
    T9.vector_element_[0] = &KJthread_;
    T10 = KerrorVKdMM1I(&K36, &T9);
    // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
    T4 = T10;
    Uunique_threadF5 = T4;
  } else {
    Uunique_threadF5 = Uunique_thread_;
  }
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
  T6 = primitive_object_allocate_filled(2,&KLthread_inactive_errorGYthreadsVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_threadF5, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/threads-conditions.dylan:17
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_threads_conditions_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_threads_conditions_for_user () {
  return;
}


/* eof */
