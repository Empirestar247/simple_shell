#include "shell.h"

/**
 * length_str - to find length of strings
 * @s: the strings to use
 * Return: the length of the strings
 */

int length_str(char *s)
{
	int v = 0;
	int str_le_n = 0;

	if (s == NULL)
		return (-1);
	while (s[v] != '\0')
	{
		str_le_n = str_le_n + 1;
		v++;
	}
	return (str_le_n);
}
