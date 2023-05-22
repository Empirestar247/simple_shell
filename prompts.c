#include "shell.h"

/**
 * prompts - prints the shell prompt
 */
void prompts(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
