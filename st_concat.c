#include "shell.h"

/**
 * st_concat - puts together 2 strings
 * @cat: the ptr to mem alloc to concat strings
 * @st1: 1st string
 * @st2: 2nd string
 * Return: the pointer to concatenated strings
 */
char *st_concat(char *cat, char *st1, char *st2)
{
	int indexcat = 0;
	int indexstr = 0;

	while (*(st1 + indexstr) != '\0')
	{
		*(cat + indexcat) = *(st1 + indexstr);
		indexcat++;
		indexstr++;
	}

	indexstr = 0;

	while (*(st2 + indexstr) != '\0')
	{
		*(cat + indexcat) = *(st2 + indexstr);
		indexcat++;
		indexstr++;
	}
	*(cat + indexcat) = '\0';
	return (cat);
}
