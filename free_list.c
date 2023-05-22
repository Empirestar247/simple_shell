#include "shell.h"

/**
 * com_cmd - executes an input cmd
 * @ary: pointer to arr of inputs commands
 * @env: double pointer to envoiron var
 * @y: arg vector
 * @j: input from user
 * @new_j: input without \n
 * @cn: no. of input cmds
 * Return: -1 failure, 0 success
 */
int com_cmd(char **ary, char **env, char **y, char *j, char *new_j, int cn)
{
	pid_t our_pid;
	char *cant;
	int signal;
	struct stat statuses;

	if (ary == NULL || *ary == NULL || y == NULL || *y == NULL)
		return (-1);
	if (env == NULL || *env == NULL)
		return (-1);
	if (inbt(ary, env, j, new_j, cn) == 0)
		return (0);
	our_pid = fork();
	if (our_pid == -1)
	{
		write(STDOUT_FILENO, "forking error", 13);
		return (-1);
	}
	if (our_pid == 0)
	{
		if (ary[0][0] == '/')
		{
			if (stat(ary[0], &statuses) == -1)
				mistake_h(y, ary, cn, j, new_j);
			if (access(ary[0], X_OK) == -1)
				mistake_h(y, ary, cn, j, new_j);
			execve(ary[0], ary, NULL);
		}
		else
		{
			cant = handpath(ary[0], env);
			if (cant == NULL)
				mistake_h(y, ary, cn, j, new_j);
			else
				execve(cant, ary, NULL);
		}
	}
	else
		wait(&signal);
	return (0);
}
