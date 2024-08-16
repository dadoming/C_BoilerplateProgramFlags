#include "../include/main_header.h"

void help_flag(t_flags *flags) {
	printf("\n\
Usage:\n\
  ./program_name [options] <arg>\n\
\n\
Options:\n\
  <arg>\t\targ name\n\
  -a <count>\t\tvalue of a\n\
  -b <count>\t\tvalue of b\n\
  -c\t\t\tflag c\n\
  -h\t\t\thelp\n\
 \n");
	exit_program(flags, 0);
}
