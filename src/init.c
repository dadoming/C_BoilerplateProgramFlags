#include "../include/main_header.h"

static void init_flags(t_flags *flags);

void init_program(t_flags *flags) {
	init_flags(flags);
}

static void init_flags(t_flags *flags) {
	flags->a.value = 0;
	flags->a.entered = false;
	flags->a.name = FLAG_1;

	flags->b.value = 0;
	flags->b.entered = false;
	flags->b.name = FLAG_2;

	flags->c.value = 0;
	flags->c.entered = false;
	flags->c.name = FLAG_3;

	flags->h.value = 0;
	flags->h.entered = false;
	flags->h.name = FLAG_HELP;
}
