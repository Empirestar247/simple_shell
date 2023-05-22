#include "shell.h"

/**
 * _printers - prints an integer
 * @number: num to change to str
 * Return: no. of characters on STDOUT
 */

char *_printers(int number)
{
	int teh = 1;
	int i = 0;
	int teh_ints = number;
	char *i_ger;

	i_ger = malloc(34);
	if (i_ger == NULL)
		return (NULL);
	if (number == 0)
	{
		i_ger[i] = 0 + '0';
		return (i_ger);
	}
	number = number / 10;

	while (teh != 0)
	{
		i_ger[i] = (teh_ints / teh) + '0';
		teh_ints = teh_ints % teh;
		teh /= 10;
		i++;
	}
	i_ger[i] = '\0';
	return (i_ger);
}
