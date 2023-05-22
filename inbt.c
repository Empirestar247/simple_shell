#include "shell.h"

/**
 * inbt - checks if cmd entered exists
 * @ary: double Pointer to array of cmds to execute
 * @env: the environment va
 * @j: entry from user
 * @new_j: entry from user without \n
 * @c_num: counts no of cmd args
 * Return: 0 if cmd exists. 1 when absent
 */
int inbt(char **ary, char **env, char *j, char *new_j, int c_num)
{
	if (ary == NULL || *ary == NULL)
		return (1);
	if (env == NULL || *env == NULL)
		return (1);
	if (cmp_str((ary[0]), "exit") == 0)
		return (shell_exit(ary, j, new_j, c_num));
	else if (cmp_str((ary[0]), "cd") == 0)
		return (new_dir(ary, env));
	else if (cmp_str((ary[0]), "env") == 0)
		return (_environ(env));
	else
		return (1);
}
