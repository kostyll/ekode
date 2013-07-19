#include "run-time.h"

void _Init_common_dylan_ () __attribute__((constructor));
void _Init_common_dylan_ () {
  extern void _Init_Run_Time();
  extern void _Init_dylan_();
  extern void _Init_common_dylan__X_library_for_system();
  extern void _Init_common_dylan__X_macros_for_system();
  extern void _Init_common_dylan__X_common_extensions_for_system();
  extern void _Init_common_dylan__X_linux_common_extensions_for_system();
  extern void _Init_common_dylan__X_unix_common_extensions_for_system();
  extern void _Init_common_dylan__X_locators_protocol_for_system();
  extern void _Init_common_dylan__X_streams_protocol_for_system();
  extern void _Init_common_dylan__X_random_for_system();
  extern void _Init_common_dylan__X_numerics_for_system();
  extern void _Init_common_dylan__X_format_for_system();
  extern void _Init_common_dylan__X_byte_vector_for_system();
  extern void _Init_common_dylan__X_transcendentals_for_system();
  extern void _Init_common_dylan__X_12Eutilities_for_system();
  extern void _Init_common_dylan__X_13Emachine_word_for_system();
  extern void _Init_common_dylan__X_14Elogicals_for_system();
  extern void _Init_common_dylan__X_15Earithmetic_for_system();
  extern void _Init_common_dylan__X_16Edivision_for_system();
  extern void _Init_common_dylan__X_17Eshift_for_system();
  extern void _Init_common_dylan__X_18Eunsigned_for_system();
  extern void _Init_common_dylan__X_19Esignal_overflow_for_system();
  extern void _Init_common_dylan__X_20Edouble_for_system();
  extern void _Init_common_dylan__X_21Eunsigned_double_for_system();
  extern void _Init_common_dylan__X_library_for_user();
  extern void _Init_common_dylan__X_macros_for_user();
  extern void _Init_common_dylan__X_common_extensions_for_user();
  extern void _Init_common_dylan__X_linux_common_extensions_for_user();
  extern void _Init_common_dylan__X_unix_common_extensions_for_user();
  extern void _Init_common_dylan__X_locators_protocol_for_user();
  extern void _Init_common_dylan__X_streams_protocol_for_user();
  extern void _Init_common_dylan__X_random_for_user();
  extern void _Init_common_dylan__X_numerics_for_user();
  extern void _Init_common_dylan__X_format_for_user();
  extern void _Init_common_dylan__X_byte_vector_for_user();
  extern void _Init_common_dylan__X_transcendentals_for_user();
  extern void _Init_common_dylan__X_12Eutilities_for_user();
  extern void _Init_common_dylan__X_13Emachine_word_for_user();
  extern void _Init_common_dylan__X_14Elogicals_for_user();
  extern void _Init_common_dylan__X_15Earithmetic_for_user();
  extern void _Init_common_dylan__X_16Edivision_for_user();
  extern void _Init_common_dylan__X_17Eshift_for_user();
  extern void _Init_common_dylan__X_18Eunsigned_for_user();
  extern void _Init_common_dylan__X_19Esignal_overflow_for_user();
  extern void _Init_common_dylan__X_20Edouble_for_user();
  extern void _Init_common_dylan__X_21Eunsigned_double_for_user();
  static int initp = 0;
  if (!initp) {
    initp = 1;
    _Init_Run_Time();
    _Init_dylan_();
    _Init_common_dylan__X_library_for_system();
    _Init_common_dylan__X_macros_for_system();
    _Init_common_dylan__X_common_extensions_for_system();
    _Init_common_dylan__X_linux_common_extensions_for_system();
    _Init_common_dylan__X_unix_common_extensions_for_system();
    _Init_common_dylan__X_locators_protocol_for_system();
    _Init_common_dylan__X_streams_protocol_for_system();
    _Init_common_dylan__X_random_for_system();
    _Init_common_dylan__X_numerics_for_system();
    _Init_common_dylan__X_format_for_system();
    _Init_common_dylan__X_byte_vector_for_system();
    _Init_common_dylan__X_transcendentals_for_system();
    _Init_common_dylan__X_12Eutilities_for_system();
    _Init_common_dylan__X_13Emachine_word_for_system();
    _Init_common_dylan__X_14Elogicals_for_system();
    _Init_common_dylan__X_15Earithmetic_for_system();
    _Init_common_dylan__X_16Edivision_for_system();
    _Init_common_dylan__X_17Eshift_for_system();
    _Init_common_dylan__X_18Eunsigned_for_system();
    _Init_common_dylan__X_19Esignal_overflow_for_system();
    _Init_common_dylan__X_20Edouble_for_system();
    _Init_common_dylan__X_21Eunsigned_double_for_system();
    _Init_common_dylan__X_library_for_user();
    _Init_common_dylan__X_macros_for_user();
    _Init_common_dylan__X_common_extensions_for_user();
    _Init_common_dylan__X_linux_common_extensions_for_user();
    _Init_common_dylan__X_unix_common_extensions_for_user();
    _Init_common_dylan__X_locators_protocol_for_user();
    _Init_common_dylan__X_streams_protocol_for_user();
    _Init_common_dylan__X_random_for_user();
    _Init_common_dylan__X_numerics_for_user();
    _Init_common_dylan__X_format_for_user();
    _Init_common_dylan__X_byte_vector_for_user();
    _Init_common_dylan__X_transcendentals_for_user();
    _Init_common_dylan__X_12Eutilities_for_user();
    _Init_common_dylan__X_13Emachine_word_for_user();
    _Init_common_dylan__X_14Elogicals_for_user();
    _Init_common_dylan__X_15Earithmetic_for_user();
    _Init_common_dylan__X_16Edivision_for_user();
    _Init_common_dylan__X_17Eshift_for_user();
    _Init_common_dylan__X_18Eunsigned_for_user();
    _Init_common_dylan__X_19Esignal_overflow_for_user();
    _Init_common_dylan__X_20Edouble_for_user();
    _Init_common_dylan__X_21Eunsigned_double_for_user();
  }
}
