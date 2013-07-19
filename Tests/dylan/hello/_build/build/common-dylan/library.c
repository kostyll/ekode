#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(15);
define__KLsimple_object_vectorGVKd(2);
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
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(15);

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
} _KLserious_conditionGVKd;

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
} _KLclosable_objectGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

typedef struct {
  D wrapper;
} _KLlocatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLserver_locatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLphysical_locatorGYlocators_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLstream_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
} _KLend_of_stream_errorGYstreams_protocolVcommon_dylan;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D stream_error_stream_;
  D stream_error_count_;
} _KLincomplete_write_errorGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
} _KLpositionable_streamGYstreams_protocolVcommon_dylan;

typedef struct {
  D wrapper;
  D recent_;
  D recent_index_;
} _KLrandomGYsimple_randomVcommon_dylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan;

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan;

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan;

typedef struct {
  D wrapper;
  D bit_number_;
} _KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan;


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
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLclosable_objectGYcommon_extensionsVcommon_dylan;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLclassGVKd KLlocatorGYlocators_protocolVcommon_dylan;
extern _KLclassGVKd KLserver_locatorGYlocators_protocolVcommon_dylan;
extern _KLclassGVKd KLphysical_locatorGYlocators_protocolVcommon_dylan;
extern _KLclassGVKd KLstream_errorGYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLend_of_stream_errorGYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLincomplete_read_errorGYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLincomplete_write_errorGYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLpositionable_streamGYstreams_protocolVcommon_dylan;
extern _KLclassGVKd KLrandomGYsimple_randomVcommon_dylan;
extern _KLclassGVKd KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan;
extern _KLclassGVKd KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan;
extern _KLclassGVKd KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan;
extern _KLclassGVKd KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan;

/* Defined object declarations */

static _KLsimple_object_vectorGVKd_2 K1;
static _KLsimple_object_vectorGVKd_2 K2;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Ksimple_profiling_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Kcommon_extensions_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Klocators_protocol_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Kstreams_protocol_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Ksimple_random_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Kbyte_vector_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Ktranscendentals_moduleYdylan_userVcommon_dylan;
static _KLbyte_stringGVKd_15 K14;
static _KLbyte_stringGVKd_11 K15;
static _KLbyte_stringGVKd_22 K16;
static _KLbyte_stringGVKd_13 K17;
static _KLbyte_stringGVKd_16 K18;
static _KLbyte_stringGVKd_17 K19;
static _KLbyte_stringGVKd_17 K20;
static _KLbyte_stringGVKd_16 K21;
static _KLbyte_stringGVKd_12 K22;
static _KLsimple_object_vectorGVKd_1 K23;
static _KLused_libraryGVKe K24;
static _KLsymbolGVKd KJtight_;
static _KLbyte_stringGVKd_5 K26;
extern _KLmoduleGVKe Kcommon_dylan_moduleYdylan_userVcommon_dylan;
extern _KLmoduleGVKe Ksimple_io_moduleYdylan_userVcommon_dylan;
static _KLbyte_stringGVKd_9 K29;
extern _KLmoduleGVKe Kmachine_words_moduleYdylan_userVcommon_dylan;
static _KLbyte_stringGVKd_13 K31;
static _KLsimple_object_vectorGVKd_1 K32;
static _KLsimple_object_vectorGVKd_15 K33;

/* Indirection variables */

static D IKJtight_ = &KJtight_;

/* Variables */

D machine_words_moduleYdylan_userVcommon_dylan = &Kmachine_words_moduleYdylan_userVcommon_dylan;
D transcendentals_moduleYdylan_userVcommon_dylan = &Ktranscendentals_moduleYdylan_userVcommon_dylan;
D streams_protocol_moduleYdylan_userVcommon_dylan = &Kstreams_protocol_moduleYdylan_userVcommon_dylan;
D locators_protocol_moduleYdylan_userVcommon_dylan = &Klocators_protocol_moduleYdylan_userVcommon_dylan;
D simple_random_moduleYdylan_userVcommon_dylan = &Ksimple_random_moduleYdylan_userVcommon_dylan;
D simple_io_moduleYdylan_userVcommon_dylan = &Ksimple_io_moduleYdylan_userVcommon_dylan;
D common_dylan_moduleYdylan_userVcommon_dylan = &Kcommon_dylan_moduleYdylan_userVcommon_dylan;
D common_extensions_moduleYdylan_userVcommon_dylan = &Kcommon_extensions_moduleYdylan_userVcommon_dylan;
D byte_vector_moduleYdylan_userVcommon_dylan = &Kbyte_vector_moduleYdylan_userVcommon_dylan;
D simple_profiling_moduleYdylan_userVcommon_dylan = &Ksimple_profiling_moduleYdylan_userVcommon_dylan;
D common_dylan_libraryYdylan_userVcommon_dylan = &Kcommon_dylan_libraryYdylan_userVcommon_dylan;

/* Objects */

static _KLsimple_object_vectorGVKd_2 K1 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K32,
  &K32
};

static _KLsimple_object_vectorGVKd_2 K2 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLserious_conditionGVKd,
  &KLerrorGVKd
};

_KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan = {
  &KLlibraryGVKeW /* wrapper */,
  &K22,
  (D) 1,
  (D) 1,
  (D) 110111305,
  &K23,
  &KPempty_vectorVKi,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 2645,
  (D) 1481
};

_KLmoduleGVKe Ksimple_profiling_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K21,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Kcommon_extensions_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K20,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Klocators_protocol_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K19,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Kstreams_protocol_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K18,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Ksimple_random_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K17,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K16,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Kbyte_vector_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K15,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Ktranscendentals_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K14,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

static _KLbyte_stringGVKd_15 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "transcendentals"
};

static _KLbyte_stringGVKd_11 K15 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "byte-vector"
};

static _KLbyte_stringGVKd_22 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "common-dylan-internals"
};

static _KLbyte_stringGVKd_13 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "simple-random"
};

static _KLbyte_stringGVKd_16 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "streams-protocol"
};

static _KLbyte_stringGVKd_17 K19 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "locators-protocol"
};

static _KLbyte_stringGVKd_17 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "common-extensions"
};

static _KLbyte_stringGVKd_16 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "simple-profiling"
};

static _KLbyte_stringGVKd_12 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "common-dylan"
};

static _KLsimple_object_vectorGVKd_1 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K24
};

static _KLused_libraryGVKe K24 = {
  &KLused_libraryGVKeW /* wrapper */,
  (D) 9,
  (D) 5,
  (D) 109746541,
  &Kdylan_libraryYdylan_userVdylan,
  &KJtight_
};

static _KLsymbolGVKd KJtight_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K26
};

static _KLbyte_stringGVKd_5 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "tight"
};

_KLmoduleGVKe Kcommon_dylan_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K22,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

_KLmoduleGVKe Ksimple_io_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K29,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

static _KLbyte_stringGVKd_9 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "simple-io"
};

_KLmoduleGVKe Kmachine_words_moduleYdylan_userVcommon_dylan = {
  &KLmoduleGVKeW /* wrapper */,
  &K31,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan
};

static _KLbyte_stringGVKd_13 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "machine-words"
};

static _KLsimple_object_vectorGVKd_1 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_15 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 61,
  &KLclosable_objectGYcommon_extensionsVcommon_dylan,
  &KLstreamGYcommon_extensionsVcommon_dylan,
  &KLlocatorGYlocators_protocolVcommon_dylan,
  &KLserver_locatorGYlocators_protocolVcommon_dylan,
  &KLphysical_locatorGYlocators_protocolVcommon_dylan,
  &KLstream_errorGYstreams_protocolVcommon_dylan,
  &KLend_of_stream_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_read_errorGYstreams_protocolVcommon_dylan,
  &KLincomplete_write_errorGYstreams_protocolVcommon_dylan,
  &KLpositionable_streamGYstreams_protocolVcommon_dylan,
  &KLrandomGYsimple_randomVcommon_dylan,
  &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_bit_numberGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_shift_quantityGYcommon_dylan_internalsVcommon_dylan,
  &KLinvalid_bit_indexGYcommon_dylan_internalsVcommon_dylan
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_library_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtight_);
    if (T0 != &KJtight_) {
      primitive_slot_value_setter(T0, &K24, 4);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_library_for_user () {
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

  // /opt/opendylan-2013.1/sources/common-dylan/library.dylan:10
  T0 = primitive_runtime_module_handle();
  // /opt/opendylan-2013.1/sources/common-dylan/library.dylan:10
  T1 = KPlibrary_version_checkVKeI(&Kcommon_dylan_libraryYdylan_userVcommon_dylan, T0);
  goto I4;
}
I4:

  return;
}


/* eof */
