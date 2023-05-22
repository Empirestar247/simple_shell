#include "shell.h"

/**
 * cmp_str - to compares two strings
 * @st1: the first string
 * @st2: the second string
 * Return: if st1<st2, (-), st1>st2 (+), st1 = st2 (0)
 */
int cmp_str(char *st1, char *st2)
{
	while ((*st1 == *st2) && *st1 != '\0' && *st2 != '\0')
	{
		st1++;
		st2++;
	}

	if ((*st1 == '\0') && (*st2 == '\0'))
		return (0);
	else if (*st1 > *st2)
		return ((int)(*st1 - *st2));
	else
		return ((int)(*st1 - *st2));
}
