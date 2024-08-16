#ifndef PROGRAM_MAIN_HEADER_H
#define PROGRAM_MAIN_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <stdbool.h>

#define FLAG_1 "a"
#define FLAG_2 "b"
#define FLAG_3 "c"
#define FLAG_HELP "h"
#define AVAILABLE_FLAGS FLAG_1 FLAG_2 FLAG_3 FLAG_HELP

typedef struct s_flag
{
	long value;
	bool entered;
	char *name;
} t_flag;

typedef struct s_flags{
	t_flag a;
	t_flag b;
	t_flag c;
	t_flag h;
} t_flags;

void init_program(t_flags *flags);
void parse_input(int argc, char **argv, t_flags *flags);
void exit_program(t_flags *flags, int num);
void help_flag(t_flags *flags);

#endif //PROGRAM_MAIN_HEADER_H
