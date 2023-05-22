#include "shell.h"

/**
 * release_ev - frees all var used
 * @j: user input
 * @new_j: user input without newline
 * @ary: double pointer to argument array
 */

void release_ev(char *j, char *new_j, char **ary)
{
	free_tkn(ary);
	free(j);
	free(new_j);
	free(ary);
}
