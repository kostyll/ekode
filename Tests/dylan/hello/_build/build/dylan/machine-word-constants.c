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
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;

/* Defined object declarations */

static _KLmachine_wordGVKe K0;
static _KLmachine_wordGVKe K1;
static _KLmachine_wordGVKe K2;
static _KLmachine_wordGVKe K3;

/* Indirection variables */


/* Variables */

D Dmachine_word_sizeVKe = (D) 257;
D Dmaximum_signed_machine_wordVKe = &K3;
D Dminimum_signed_machine_wordVKe = &K2;
D Dmaximum_unsigned_machine_wordVKe = &K1;
D Dminimum_unsigned_machine_wordVKe = &K0;

/* Objects */

static _KLmachine_wordGVKe K0 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

static _KLmachine_wordGVKe K1 = {
  &KLmachine_wordGVKeW /* wrapper */,
  -1
};

static _KLmachine_wordGVKe K2 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0x8000000000000000L
};

static _KLmachine_wordGVKe K3 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0x7FFFFFFFFFFFFFFFL
};

/* Code */


/* SYSTEM INIT CODE */

void _Init_dylan__X_machine_word_constants_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_machine_word_constants_for_user () {
  return;
}


/* eof */
