#include "shell.h"

/**
 * on_alloc - memory reallocation for char
 * @o: pointer to an array of strings
 * Return: pointer to the reallocated mem
 */
char *on_alloc(char *o)
{
	int i = 0;
	char *ptr_new;

	if (o == NULL)
		return (NULL);

	while (*(o + i) != '\n')
		i++;
	ptr_new = malloc(sizeof(char) * i + 1);
	if (ptr_new == NULL)
		return (NULL);
	i = 0;
	while (*(o + i) != '\n')
	{
		*(ptr_new + i) = *(o + i);
		i++;
	}
	*(ptr_new + i) = '\0';
	return (ptr_new);
}
