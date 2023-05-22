#include "shell.h"

/**
 * _environ - deals with envs
 * @env: double pointer to the envs
 * Return: 0 (success)
 */

int _environ(char **env)
{
	int i = 0;
	int lens = 0;

	while (env[i] != NULL)
	{
		lens = length_str(env[i]);
		write(STDOUT_FILENO, env[i], lens);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
