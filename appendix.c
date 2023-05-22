#include "shell.h"
/**
 * appendix - append path var to an empty path_t
 * @s: pointer to the path var
 * @lists: pointer to path_t list
 * Return: pointer to the new list
 */
path_t *appendix(char *s, path_t *lists)
{
	char *dirc;
	path_t *pter, *h;
	int i = 0, l = 0, sups = 0, dlens = 0;

	if (s == NULL || lists == NULL)
		return (NULL);
	h = lists;
	pter = h;
	while (pter != NULL)
	{
		if (s[i] == ':' || s[i] == '\0')
		{
			if (s[i] != '\0')
				i++;
			dirc = malloc(sizeof(char) * dlens + 2);
			if (dirc == NULL)
				return (NULL);
			while (s[sups] != ':' && s[sups] != '\0')
			{
				dirc[l] = s[sups];
				sups++;
				l++;
			}
			dirc[l++] = '/';
			dirc[l] = '\0';
			sups = i;
			l = 0;
			pter->dir = dirc;
			pter = pter->next;
		}
		else
		{
			dlens++;
			i++;
		}
	}
	return (h);
}
