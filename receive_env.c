#include "shell.h"

/**
 * receive_env - searches for env vars
 * @joy: ptr to the var name
 * @env: double pntr to env var
 * Return: the ptr to the env var
 */
char *receive_env(const char *joy, char **env)
{
	int i = 0, n = 0;

	if (joy == NULL || env == NULL || *env == NULL)
		return (NULL);
	while (env[i] != NULL)
	{
		while (env[i][n] == joy[n])
			n++;
		if (env[i][n] == '=')
		{
			n++;
			return (&(env[i][n]));
		}
		i++;
		n = 0;
	}
	write(STDOUT_FILENO, "env var not found!", 18);
	return (NULL);
}
