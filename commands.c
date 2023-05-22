#include "shell.h"

/**
 * command_c - handles Ctrl+C
 * @sid: signal input
 */
void command_c(int sid)
{
	(void)sid;
	write(STDOUT_FILENO, "\n$ ", 3);
}

/**
 * command_d - control D handler
 * @line: users entry
 * Return: 0 success
 */
int command_d(char *line)
{
	free(line);
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "\n", 1);
	return (0);
}
