#include "shell.h"

/**
 * handpath - loops through path var and concats cmd
 * @s: pointer to path var
 * @env: double pointer to env var
 * Return: pointer to concat s
 */

char *handpath(char *s, char **env)
{
	char *scant, *s_route;
	path_t *s_lists, *temp;
	struct stat mk;

	if (s == NULL || env == NULL || *env == NULL)
		return (NULL);
	s_route = receive_env("PATH", env);
	if (s_route == NULL)
	{
		write(STDERR_FILENO, "No path available", 17);
		_exit(0);
	}
	s_lists = dev_llist(s_route);
	if (s_lists == NULL)
	{
		write(STDERR_FILENO, "faulty path", 11);
		_exit(0);
	}
	s_lists = appendix(s_route, s_lists);
	temp = s_lists;
	while (temp != NULL)
	{
		if (s_route[0] == ':')
			scant = concat_str("./", s);
		else
			scant = concat_str(temp->dir, s);
		if (scant == NULL)
			return (NULL);
		if (stat(scant, &mk) == 0 && access(scant, X_OK) == 0)
		{
			free_list(s_lists);
			return (scant);
		}
		temp = temp->next;
		free(scant);
	}
	free_list(s_lists);
	return (NULL);
}
