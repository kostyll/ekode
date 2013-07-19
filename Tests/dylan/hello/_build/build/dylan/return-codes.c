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


/* Typedefs for defined classes */


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

/* Defined object declarations */


/* Indirection variables */


/* Variables */

D DsuccessYthreads_primitivesVdylan = (D) 1;
D Dgeneral_errorYthreads_primitivesVdylan = (D) -3;
D DtimeoutYthreads_primitivesVdylan = (D) 5;
D DunlockedYthreads_primitivesVdylan = (D) 9;
D Dpre_lockedYthreads_primitivesVdylan = (D) 9;
D Dcount_exceededYthreads_primitivesVdylan = (D) 13;
D Dcreation_errorYthreads_primitivesVdylan = (D) 5;
D Dpriority_errorYthreads_primitivesVdylan = (D) 9;
D DfalseYthreads_primitivesVdylan = (D) 1;
D DtrueYthreads_primitivesVdylan = (D) 5;

/* Objects */

/* Code */


/* SYSTEM INIT CODE */

void _Init_dylan__X_return_codes_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_return_codes_for_user () {
  return;
}


/* eof */
