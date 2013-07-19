#include <stdlib.h>
#include "run-time.h"

int main (int argc, char *argv[]) {
  extern void _Init_io_ ();
  extern D Tcommand_argumentsT;
  extern D Tcommand_nameT;
  D args = primitive_make_vector((argc > 0) ? argc - 1 : 0);
  int i;
  if (argc > 0)
    Tcommand_nameT = primitive_raw_as_string(argv[0]);
  else
    Tcommand_nameT = primitive_raw_as_string("unknown");
  for (i = 1; i < argc; i++) 
    primitive_vector_element_setter
      (primitive_raw_as_string(argv[i]), args,
       primitive_raw_as_integer(i - 1));
  Tcommand_argumentsT = (D)args;
  _Init_io_();
  return(0);
}
