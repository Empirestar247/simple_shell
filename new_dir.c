#include "shell.h"

/**
 * new_dir - changes dirs
 * @ary: double pointer to array of cmd inputs
 * @env: double pointer to the envs
 * Return: 0 for success
 */
int new_dir(char **ary, char **env)
{
	int i = 0;
	char cw_dir[1024];
	char *dir_new;

	if (ary[1] == NULL)
	{
		if (chdir(receive_env("ROOT", env)) == -1)
		{
			perror(ary[0]);
			write(STDERR_FILENO, "cd: cannot cd to root\n", 22);
		}
	}
	else
	{
		getcwd(cw_dir, 1024);
		while (cw_dir[i] != '\0')
			i++;
		cw_dir[i++] = '/';
		cw_dir[i] = '\0';
		dir_new = concat_str(cw_dir, ary[1]);
		if (dir_new == NULL)
			return (0);
		if (chdir(dir_new) == -1)
		{
			perror(ary[0]);
			write(STDERR_FILENO, "DIR cant be found\n", 18);
		}
		free(dir_new);
	}
	return (0);
}
