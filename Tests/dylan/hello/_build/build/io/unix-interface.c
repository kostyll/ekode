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
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);


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
extern int io_fd_info (unsigned int);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern int close (unsigned int);
extern int io_errno ();
extern long io_lseek (int, long, int);
extern int read (unsigned int, D, unsigned long);
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern DBSTR strerror (int);
D Kcopy_sequenceVKdMM3I (D, D, D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern int write (unsigned int, D, unsigned long);
extern int fsync (unsigned int);

/* Defined object declarations */

extern _KLsimple_methodGVKe Kunix_fsyncYio_internalsVio;
D Kunix_fsyncYio_internalsVioI (D);
extern _KLsimple_methodGVKe Kunix_writeYio_internalsVio;
D Kunix_writeYio_internalsVioI (D, D, D, D);
D Kunix_errorYio_internalsVioI (D, D, D);
extern _KLsimple_methodGVKe Kunix_readYio_internalsVio;
D Kunix_readYio_internalsVioI (D, D, D, D);
extern _KLsimple_methodGVKe Kunix_lseekYio_internalsVio;
D Kunix_lseekYio_internalsVioI (D, D, D);
extern _KLsimple_methodGVKe Kunix_closeYio_internalsVio;
D Kunix_closeYio_internalsVioI (D);
extern _KLsimple_methodGVKe Kunix_fd_infoYio_internalsVio;
D Kunix_fd_infoYio_internalsVioI (D);
static _KLsignatureAvaluesGVKi K13;
static _KLsimple_object_vectorGVKd_2 K14;
D Kunix_errnoYio_internalsVioI ();
static _KLsignatureAvaluesGVKi K16;
static _KLsignatureAvaluesGVKi K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_4 K19;
extern _KLsimple_methodGVKe Kget_unix_errorYio_internalsVio;
D Kget_unix_errorYio_internalsVioI (D);
static _KLbyte_stringGVKd_6 K22;
static _KLsignatureAvaluesGVKi K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsimple_object_vectorGVKd_4 K25;

/* Indirection variables */


/* Variables */

D unix_closeYio_internalsVio = &Kunix_closeYio_internalsVio;
D unix_readYio_internalsVio = &Kunix_readYio_internalsVio;
D unix_writeYio_internalsVio = &Kunix_writeYio_internalsVio;
D unix_lseekYio_internalsVio = &Kunix_lseekYio_internalsVio;
D unix_fsyncYio_internalsVio = &Kunix_fsyncYio_internalsVio;
D unix_fd_infoYio_internalsVio = &Kunix_fd_infoYio_internalsVio;

/* Objects */

_KLsimple_methodGVKe Kunix_fsyncYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K16,
  &Kunix_fsyncYio_internalsVioI
};

_KLsimple_methodGVKe Kunix_writeYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K24,
  &Kunix_writeYio_internalsVioI
};

_KLsimple_methodGVKe Kunix_readYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K18,
  &Kunix_readYio_internalsVioI
};

_KLsimple_methodGVKe Kunix_lseekYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K17,
  &Kunix_lseekYio_internalsVioI
};

_KLsimple_methodGVKe Kunix_closeYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K16,
  &Kunix_closeYio_internalsVioI
};

_KLsimple_methodGVKe Kunix_fd_infoYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K13,
  &Kunix_fd_infoYio_internalsVioI
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LintegerG_typesVKi,
  &K14
};

static _KLsimple_object_vectorGVKd_2 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLbooleanGVKd
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K17 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K19,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLbufferGYstreamsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kget_unix_errorYio_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &Kget_unix_errorYio_internalsVioI
};

static _KLbyte_stringGVKd_6 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "%s: %s"
};

static _KLsignatureAvaluesGVKi K23 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K25,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

/* Code */

D Kunix_fsyncYio_internalsVioI (D fd_) {
  int T1;
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:89
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
L0: ;
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:94
    T7 = primitive_cast_integer_as_raw(fd_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:94
    T6 = primitive_machine_word_shift_right(T7,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:92
    T1 = fsync(T6);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:91
    T8 = primitive_machine_word_shift_left_signal_overflow(T1,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:91
    T9 = primitive_machine_word_logior(T8,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:91
    T10 = primitive_cast_raw_as_integer(T9);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
    T11 = primitive_machine_word_less_thanQ(T9,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
      T2 = Kunix_errnoYio_internalsVioI();
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
      T12 = primitive_idQ(T2,(D) 17);
      T3 = T12;
    } else {
      T3 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
      goto L0;
      T5 = T13;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
      T4 = T10;
      MV_SET_ELT(0, T10);
      MV_SET_COUNT(1);
      T5 = T4;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:90
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:89
  return(T5);
}

D Kunix_writeYio_internalsVioI (D fd_, D data_, D offset_, D count_) {
  DSINT T4;
  D T5;
  DADDR T6;
  DADDR T7;
  DWORD T8;
  D T9;
  int T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:59
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
L0: ;
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:67
    T16 = primitive_cast_integer_as_raw(fd_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:67
    T15 = primitive_machine_word_shift_right(T16,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:71
    T4 = primitive_repeated_slot_offset(data_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:71
    T5 = primitive_repeated_slot_as_raw(data_,T4);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:70
    T6 = primitive_cast_pointer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:72
    T18 = primitive_cast_integer_as_raw(offset_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:72
    T17 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:72
    T7 = primitive_cast_pointer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:69
    T8 = primitive_machine_word_add(T6,T7);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:68
    T9 = primitive_cast_raw_as_pointer(T8);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:73
    T20 = primitive_cast_integer_as_raw(count_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:73
    T19 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:63
    T10 = write(T15, T9, T19);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:62
    T21 = primitive_machine_word_shift_left_signal_overflow(T10,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:62
    T22 = primitive_machine_word_logior(T21,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:62
    T23 = primitive_cast_raw_as_integer(T22);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
    T24 = primitive_machine_word_less_thanQ(T22,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
      T11 = Kunix_errnoYio_internalsVioI();
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
      T25 = primitive_idQ(T11,(D) 17);
      T12 = T25;
    } else {
      T12 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
      goto L0;
      T14 = T26;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
      T13 = T23;
      MV_SET_ELT(0, T23);
      MV_SET_COUNT(1);
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:61
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:59
  return(T14);
}

D Kunix_errorYio_internalsVioI (D syscall_, D Urest_, D errno_) {
  D T4;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T8_0;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:123
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:126
  if (errno_ != &KPfalseVKi) {
    T5 = errno_;
  } else {
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:126
    T4 = Kunix_errnoYio_internalsVioI();
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:126
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:126
  T6 = CALL1(&Kget_unix_errorYio_internalsVio, T5);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:127
  T7.vector_element_[0] = syscall_;
  T7.vector_element_[1] = T6;
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:127
  T8_0 = KerrorVKdMM1I(&K22, &T7);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:123
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kunix_readYio_internalsVioI (D fd_, D data_, D offset_, D count_) {
  D T4;
  DADDR T5;
  DADDR T6;
  DWORD T7;
  D T8;
  int T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
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

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:40
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
L0: ;
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:48
    T15 = primitive_cast_integer_as_raw(fd_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:48
    T14 = primitive_machine_word_shift_right(T15,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:52
    T4 = primitive_repeated_slot_as_raw(data_,11);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:51
    T5 = primitive_cast_pointer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:53
    T17 = primitive_cast_integer_as_raw(offset_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:53
    T16 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:53
    T6 = primitive_cast_pointer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:50
    T7 = primitive_machine_word_add(T5,T6);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:49
    T8 = primitive_cast_raw_as_pointer(T7);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:54
    T19 = primitive_cast_integer_as_raw(count_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:54
    T18 = primitive_machine_word_shift_right(T19,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:44
    T9 = read(T14, T8, T18);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:43
    T20 = primitive_machine_word_shift_left_signal_overflow(T9,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:43
    T21 = primitive_machine_word_logior(T20,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:43
    T22 = primitive_cast_raw_as_integer(T21);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
    T23 = primitive_machine_word_less_thanQ(T21,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
      T10 = Kunix_errnoYio_internalsVioI();
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
      T24 = primitive_idQ(T10,(D) 17);
      T11 = T24;
    } else {
      T11 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
      goto L0;
      T13 = T25;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
      T12 = T22;
      MV_SET_ELT(0, T22);
      MV_SET_COUNT(1);
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:42
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:40
  return(T13);
}

D Kunix_lseekYio_internalsVioI (D fd_, D position_, D mode_) {
  long T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:78
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T5 = primitive_cast_integer_as_raw(fd_);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T7 = primitive_cast_integer_as_raw(position_);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T9 = primitive_cast_integer_as_raw(mode_);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:85
  T8 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:81
  T3 = io_lseek(T4, T6, T8);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:80
  T10 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:80
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:80
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:80
  T13_0 = T12;
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:78
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kunix_closeYio_internalsVioI (D fd_) {
  int T1;
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:31
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
L0: ;
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:36
    T7 = primitive_cast_integer_as_raw(fd_);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:36
    T6 = primitive_machine_word_shift_right(T7,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:34
    T1 = close(T6);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:33
    T8 = primitive_machine_word_shift_left_signal_overflow(T1,2);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:33
    T9 = primitive_machine_word_logior(T8,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:33
    T10 = primitive_cast_raw_as_integer(T9);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
    T11 = primitive_machine_word_less_thanQ(T9,1);
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
      T2 = Kunix_errnoYio_internalsVioI();
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
      T12 = primitive_idQ(T2,(D) 17);
      T3 = T12;
    } else {
      T3 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
      goto L0;
      T5 = T13;
    } else {
      // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
      T4 = T10;
      MV_SET_ELT(0, T10);
      MV_SET_COUNT(1);
      T5 = T4;
    }
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
    // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:32
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:31
  return(T5);
}

D Kunix_fd_infoYio_internalsVioI (D fd_) {
  int T1;
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:98
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:104
  T3 = primitive_cast_integer_as_raw(fd_);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:104
  T2 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:102
  T1 = io_fd_info(T2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:102
  T4 = primitive_machine_word_shift_left_signal_overflow(T1,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:102
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:106
  T6 = primitive_machine_word_logand(T5,0xFFFFFFFFFFFFFFF9L);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:106
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:106
  T8 = primitive_machine_word_logbitQ(2,T5);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:106
  T9_0 = T7;
  T9_1 = T8;
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:98
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D Kunix_errnoYio_internalsVioI () {
  int T0;
  DWORD T1;
  DWORD T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:11
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:13
  T0 = io_errno();
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:12
  T1 = primitive_machine_word_shift_left_signal_overflow(T0,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:12
  T2 = primitive_machine_word_logior(T1,1);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:12
  T3 = primitive_cast_raw_as_integer(T2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:12
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:11
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kget_unix_errorYio_internalsVioI (D errno_) {
  DBSTR T1;
  D T2;
  DWORD T3;
  DWORD T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:109
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:114
  T4 = primitive_cast_integer_as_raw(errno_);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:114
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:112
  T1 = strerror(T3);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:111
  T2 = primitive_raw_as_string(T1);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:117
  T5_0 = Kcopy_sequenceVKdMM3I(T2, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
  // /opt/opendylan-2013.1/sources/io/unix-interface.dylan:109
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_unix_interface_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_io__X_unix_interface_for_user () {
  return;
}


/* eof */
