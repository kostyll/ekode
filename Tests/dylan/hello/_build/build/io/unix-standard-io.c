#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(6);

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(15);


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJlocator_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJinput_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLfile_streamGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLfile_streamGYstreams_internalsVioW;
extern _KLsymbolGVKd KJoutput_;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;

/* Defined object declarations */

static _KLsymbolGVKd KJfile_descriptor_;
static _KLbyte_stringGVKd_15 K4;

/* Indirection variables */

static D IKJfile_descriptor_ = &KJfile_descriptor_;

/* Variables */

D Tstandard_inputTYstandard_ioVio = &KPunboundVKi;
D Tstandard_outputTYstandard_ioVio = &KPunboundVKi;
D Tstandard_errorTYstandard_ioVio = &KPunboundVKi;

/* Objects */

static _KLsymbolGVKd KJfile_descriptor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K4
};

static _KLbyte_stringGVKd_15 K4 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "file-descriptor"
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_io__X_unix_standard_io_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_descriptor_);
    if (T0 != &KJfile_descriptor_) {
      IKJfile_descriptor_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_io__X_unix_standard_io_for_user () {
{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_6 T2 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:10
  T2.vector_element_[0] = &KJlocator_;
  T2.vector_element_[1] = (D) 1;
  T2.vector_element_[2] = IKJfile_descriptor_;
  T2.vector_element_[3] = (D) 1;
  T2.vector_element_[4] = &KJdirection_;
  T2.vector_element_[5] = &KJinput_;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:10
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLfile_streamGYstreams_internalsVio, &T2);
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:9
  Tstandard_inputTYstandard_ioVio = T0;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:9
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_6 T2 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:13
  T2.vector_element_[0] = &KJlocator_;
  T2.vector_element_[1] = (D) 5;
  T2.vector_element_[2] = IKJfile_descriptor_;
  T2.vector_element_[3] = (D) 5;
  T2.vector_element_[4] = &KJdirection_;
  T2.vector_element_[5] = &KJoutput_;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:13
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLfile_streamGYstreams_internalsVio, &T2);
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:12
  Tstandard_outputTYstandard_ioVio = T0;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:12
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_6 T2 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:16
  T2.vector_element_[0] = &KJlocator_;
  T2.vector_element_[1] = (D) 9;
  T2.vector_element_[2] = IKJfile_descriptor_;
  T2.vector_element_[3] = (D) 9;
  T2.vector_element_[4] = &KJdirection_;
  T2.vector_element_[5] = &KJoutput_;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:16
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLfile_streamGYstreams_internalsVio, &T2);
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:15
  Tstandard_errorTYstandard_ioVio = T0;
  // /opt/opendylan-2013.1/sources/io/unix-standard-io.dylan:15
  T1 = &KPfalseVKi;
  goto I3;
}
I3:

  return;
}


/* eof */
