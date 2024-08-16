#include "../include/main_header.h"

int main(int argc, char **argv) {
	t_flags flags;

	init_program(&flags);
	parse_input(argc, argv, &flags);

	printf("%s Flag a: %ld\n", flags.a.entered == true ? "True" : "False", flags.a.value);
	printf("%s Flag b: %ld\n", flags.b.entered == true ? "True" : "False", flags.b.value);
	printf("%s Flag c: %d\n", flags.c.entered == true ? "True" : "False", flags.c.entered);
	printf("%s Flag h: %ld\n", flags.h.entered == true ? "True" : "False", flags.h.value);
	return 0;
}
