#include "shell.h"
/**
 * main - Entry of the program
 * @ac: arg counts
 * @av: arg vectors
 * @env: double pointer to current environment
 * Return: 0 (EOF) after pressing Ctrl + D
 */
int main(int ac, char **av, char **env)
{
	char *j, *new_j;
	size_t length = 0;
	ssize_t lsize;
	char **tkns_array;
	int cmdn = 0;

	(void)ac, (void)av;
	while (1)
	{
		j = NULL;
		length = 0;
		cmdn++;
		if (isatty(STDIN_FILENO) == 1)
			prompts();
		signal(SIGINT, command_c);
		lsize = getline(&j, &length, stdin);
		if (lsize == EOF || lsize == -1)
			return (command_d(j));
		if (j[0] == '\n')
		{
			free(j);
			continue;
		}
		new_j = on_alloc(j);
		if (new_j == NULL)
		{
			free(j);
			return (0);
		}
		tkns_array = token_str(new_j);
		if (tkns_array == NULL)
		{
			free(j);
			free(new_j);
			return (0);
		}
		com_cmd(tkns_array, env, av, j, new_j, cmdn);
		release_ev(j, new_j, tkns_array);
	}
}
