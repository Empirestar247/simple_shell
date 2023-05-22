#include "shell.h"

/**
 * concat_str - add source str to dest str
 * @st1: first string
 * @st2: second string
 * Return: appended string
 */
char *concat_str(char *st1, char *st2)
{
	char *s_con_catt;
	int s_le_n1 = 0;
	int s_le_n2 = 0;

	if (st1 == NULL)
	{
		st1 = malloc(sizeof(char));
		if (st1 == NULL)
			return (NULL);
		*st1 = '\0';
	}
	if (st2 == NULL)
	{
		st2 = malloc(sizeof(char));
		if (st2 == NULL)
			return (NULL);
		*st2 = '\0';
	}
	s_le_n1 = length_str(st1);
	s_le_n2 = length_str(st2);

	s_con_catt = malloc(sizeof(char) * (s_le_n1 + s_le_n2 + 1));
	if (s_con_catt == NULL)
	{
		free(st1);
		free(st2);
		return (NULL);
	}

	return (st_concat(s_con_catt, st1, st2));
}
