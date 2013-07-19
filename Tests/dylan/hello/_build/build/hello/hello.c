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
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(14);


/* Typedefs for defined classes */


/* Referenced object declarations */

D Kapplication_nameYcommon_extensionsVcommon_dylanI ();
D Kapplication_argumentsYcommon_extensionsVcommon_dylanI ();
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
D Kformat_outYformat_outVioMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D Kexit_applicationYcommon_extensionsVcommon_dylanI (D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;

/* Defined object declarations */

D KmainVhelloI (D, D);
static _KLbyte_stringGVKd_14 K2;

/* Indirection variables */


/* Variables */


/* Objects */

static _KLbyte_stringGVKd_14 K2 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "Hello, world!\n"
};

/* Code */

D KmainVhelloI (D name_, D arguments_) {
  D T2;

  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:6
  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:7
  Kformat_outYformat_outVioMM0I(&K2, &KPempty_vectorVKi);
  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:8
  T2 = Kexit_applicationYcommon_extensionsVcommon_dylanI((D) 1);
  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:6
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_hello__X_hello_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_hello__X_hello_for_user () {
{
  D T0;
  D T1;
  D T2;

  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:11
  T0 = Kapplication_nameYcommon_extensionsVcommon_dylanI();
  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:11
  T1 = Kapplication_argumentsYcommon_extensionsVcommon_dylanI();
  // /home/mike/Projects/ekode/Tests/dylan/hello/hello.dylan:11
  T2 = KmainVhelloI(T0, T1);
  goto I0;
}
I0:

  return;
}


/* eof */
