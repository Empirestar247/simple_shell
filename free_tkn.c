#include "shell.h"

/**
 * free_tkn - to free the tokens
 * @tkn_array: double pointer to tokens to free
 */

void free_tkn(char **tkn_array)
{
	int a = 0;

	while (tkn_array[a] != NULL)
	{
		free(tkn_array[a]);
		a++;
	}
	free(tkn_array[a]);
}
