#include "shell.h"

/**
 * mistake_h - Dealing with errors
 * @argv: arg vector
 * @ary: ptr to token array from user
 * @cnum: number of cmd inputs
 * @j: user line input
 * @new_j: user input lacking '\n' character
 */
void mistake_h(char **argv, char **ary, int cnum, char *j, char *new_j)
{
	char *z;

	z = _printers(cnum);
	write(STDERR_FILENO, argv[0], length_str(argv[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, z, length_str(z));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, ary[0], length_str(ary[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found\n", 10);
	free(z);
	release_ev(j, new_j, ary);
	exit(0);
}
