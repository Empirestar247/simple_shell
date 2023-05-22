#include "shell.h"

/**
 * dev_llist - forms an empty path based on args
 * @s: ptr to the formed path variable
 * Return: ptr to the path_t struct
 */

path_t *dev_llist(char *s)
{
	int s_nodes = 1;
	int i = 0;
	path_t *ends, *h, *temp, *s_node;

	temp = malloc(sizeof(path_t));
	if (temp == NULL)
		return (NULL);
	h = temp;
	ends = malloc(sizeof(path_t));
	if (ends == NULL)
	{
		free(temp);
		return (NULL);
	}
	ends->next = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ':')
			s_nodes++;
		i++;
	}
	while ((s_nodes - 2) > 0)
	{
		s_node = malloc(sizeof(path_t));
		if (s_node == NULL)
		{
			free(temp);
			free(ends);
			return (NULL);
		}
		temp->next = s_node;
		temp = temp->next;
		s_nodes--;
	}
	temp->next = ends;
	return (h);
}
