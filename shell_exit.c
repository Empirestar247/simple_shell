#include "shell.h"

/**
 * shell_exit - executes the exit command
 * @ary: an array of command inputs
 * @j: input from the user
 * @new_j: user's input having newline trunc
 * @c_num: counts the number of commands entered
 * Return: 0 (success), exit code
 */

int shell_exit(char **ary, char *j, char *new_j, int c_num)
{
	int i, m = 0;
	char *countcmd;

	if (ary[1] == NULL)
	{
		release_ev(j, new_j, ary);
		exit(2);
	}
	else
	{
		i = itois(ary[1]);
		if (i == -1)
		{
			countcmd = _printers(c_num);
			write(STDERR_FILENO, ary[0], 7);
			write(STDERR_FILENO, countcmd, length_str(countcmd));
			write(STDERR_FILENO, ": exit: cmd not found!: ", 24);
			while (ary[1][m] != '\0')
				m++;
			write(STDOUT_FILENO, ary[1], m);
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
		release_ev(j, new_j, ary);
		_exit(i);
	}
}
