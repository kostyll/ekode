#include "run-time.h"

void _Init_hello_ () __attribute__((constructor));
void _Init_hello_ () {
  extern void _Init_Run_Time();
  extern void _Init_io_();
  extern void _Init_common_dylan_();
  extern void _Init_hello__X_library_for_system();
  extern void _Init_hello__X_hello_for_system();
  extern void _Init_hello__X_library_for_user();
  extern void _Init_hello__X_hello_for_user();
  static int initp = 0;
  if (!initp) {
    initp = 1;
    _Init_Run_Time();
    _Init_io_();
    _Init_common_dylan_();
    _Init_hello__X_library_for_system();
    _Init_hello__X_hello_for_system();
    _Init_hello__X_library_for_user();
    _Init_hello__X_hello_for_user();
  }
}
