#include "shell.h"

/**
 * dup_str - to duplciates strings
 * @s: the string to duplicate
 * Return: ptr to the duplicated strings
 */
char *dup_str(char *s)
{
	int q = 0;
	int s_le_n = 0;
	char *str_str;

	if (s == NULL)
		return (NULL);
	while (*(s + q) != '\0')
	{
		s_le_n++;
		q++;
	}

	q = 0;
	str_str = malloc(sizeof(char) * s_le_n + 1);
	if (str_str == NULL)
		return (NULL);
	while (*(s + q) != '\0')
	{
		*(str_str + q) = *(s + q);
		q++;
	}
	*(str_str + q) = '\0';
	return (str_str);
}
