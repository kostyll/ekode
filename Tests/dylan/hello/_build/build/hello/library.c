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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(5);


/* Typedefs for defined classes */


/* Referenced object declarations */

D Kinitialize_class_dispatch_keys_vectoredVKgI (D);
D KPlibrary_version_checkVKeI (D, D);
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
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLused_libraryGVKe;
extern _KLmm_wrapperGVKi_0 KLused_libraryGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;

/* Defined object declarations */

extern _KLlibraryGVKe Khello_libraryYdylan_userVhello;
static _KLbyte_stringGVKd_5 K4;
static _KLsimple_object_vectorGVKd_2 K5;
static _KLused_libraryGVKe K6;
static _KLused_libraryGVKe K7;
static _KLsymbolGVKd KJtight_;
static _KLbyte_stringGVKd_5 K9;

/* Indirection variables */

static D IKJtight_ = &KJtight_;

/* Variables */

D hello_libraryYdylan_userVhello = &Khello_libraryYdylan_userVhello;

/* Objects */

_KLlibraryGVKe Khello_libraryYdylan_userVhello = {
  &KLlibraryGVKeW /* wrapper */,
  &K4,
  (D) 1,
  (D) 1,
  (D) 218013485,
  &K5,
  &KPempty_vectorVKi,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 1,
  (D) 1
};

static _KLbyte_stringGVKd_5 K4 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "hello"
};

static _KLsimple_object_vectorGVKd_2 K5 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K6,
  &K7
};

static _KLused_libraryGVKe K6 = {
  &KLused_libraryGVKeW /* wrapper */,
  (D) 9,
  (D) 5,
  (D) 110503493,
  &Kio_libraryYdylan_userVio,
  &KJtight_
};

static _KLused_libraryGVKe K7 = {
  &KLused_libraryGVKeW /* wrapper */,
  (D) 1,
  (D) 1,
  (D) 110111305,
  &Kcommon_dylan_libraryYdylan_userVcommon_dylan,
  &KJtight_
};

static _KLsymbolGVKd KJtight_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K9
};

static _KLbyte_stringGVKd_5 K9 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "tight"
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_hello__X_library_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtight_);
    if (T0 != &KJtight_) {
      primitive_slot_value_setter(T0, &K6, 4);
      primitive_slot_value_setter(T0, &K7, 4);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_hello__X_library_for_user () {
{
  D T0;

  T0 = Kinitialize_class_dispatch_keys_vectoredVKgI(&KPempty_vectorVKi);
  goto I0;
}
I0:

{
  D T0;

  T0 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;
  D T1;

  // /home/mike/Projects/ekode/Tests/dylan/hello/library.dylan:3
  T0 = primitive_runtime_module_handle();
  // /home/mike/Projects/ekode/Tests/dylan/hello/library.dylan:3
  T1 = KPlibrary_version_checkVKeI(&Khello_libraryYdylan_userVhello, T0);
  goto I2;
}
I2:

  return;
}


/* eof */
