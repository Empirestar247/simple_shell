#include "shell.h"

/**
 * free_list - to frees a linked list
 * @th: the head of linked list
 * Return: nothing
 */
void free_list(path_t *th)
{
	path_t *incomingnod;

	while (th != NULL)
	{
		incomingnod = th->next;
		free(th->dir);
		free(th);
		th = incomingnod;
	}
}
