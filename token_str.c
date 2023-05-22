#include "shell.h"
#define STRING_DELIM " \t\0"

/**
 * token_str - divides user input int tokens
 * @j: user's input
 * Return: array of tokens
 */
char **token_str(char *j)
{
	int a = 0;
	int str_tkn_index = 0;
	char **str_tkn_arr;
	char *str_tkn, *str_tkncpy;

	if (j == NULL)
		return (NULL);
	while (*(j + a) != '\0')
	{
		if (j[a] != ' ' && (j[a + 1] == ' ' || j[a + 1] == '\0'
					|| j[a + 1] == '\t'))
			str_tkn_index++;
		a++;
	}

	a = 0;
	str_tkn_arr = malloc(sizeof(char *) * (str_tkn_index + 1));
	if (str_tkn_arr == NULL)
		return (NULL);
	str_tkn = strtok(j, STRING_DELIM);
	while (str_tkn != NULL)
	{
		str_tkncpy = dup_str(str_tkn);
		if (str_tkncpy == NULL)
		{
			free(str_tkn_arr);
			return (NULL);
		}
		*(str_tkn_arr + a) = str_tkncpy;
		str_tkn = strtok(NULL, STRING_DELIM);
		a++;
	}
	*(str_tkn_arr + a) = NULL;
	return (str_tkn_arr);
}
