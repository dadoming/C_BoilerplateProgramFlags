#include "../include/main_header.h"

static long convert_flag_value_to_number(t_flag *flag, char *value_str);

void parse_input(int argc, char **argv, t_flags *flags) {
	int opt;
	while ((opt = getopt(argc, argv, "a:b:ch")) != -1) {
		switch (opt) {
			case 'a':
				flags->a.entered = true;
				flags->a.value = convert_flag_value_to_number(&flags->a, optarg);
				break;
			case 'b':
				flags->b.entered = true;
				flags->b.value = convert_flag_value_to_number(&flags->b, optarg);
				break;
			case 'c':
				flags->c.entered = true;
				break;
			case 'h':
				help_flag(flags);
				break;
			default:
				printf("Invalid flag: %c\n", opt);
				exit_program(NULL, 1);
		}
	}
}

static long convert_flag_value_to_number(t_flag *flag, char *value_str) {
	char *endptr;
	long value = strtol(value_str, &endptr, 10);
	if (*endptr != '\0' || value < 0) {
		printf("Invalid value for flag -%s: %s\n", flag->name, value_str);
		exit_program(NULL, 1);
	}
	return value;
}
