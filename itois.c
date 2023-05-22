#include "shell.h"

/**
 * itois - converts ASCII to int
 * @s: the pointer to the string to be converted
 * Return: an integer
 */
int itois(char *s)
{
	int i, n = 0;
	int tth = 1;
	unsigned int i_ger = 0;
	int sneg_fig = 0;
	int neg_fig = 0;
	int os_fig = 0;

	while (s[n] != '\0')
	{
		if (s[n] > '9' || s[n] < '0')
			return (-1);
		n++;
	}
	while ((s[i] > '9' || s[i] < '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			neg_fig++;
		if (s[i] == '+')
			os_fig++;
		i++;
	}
	if (s[i] == '\0')
		return (0);
	if ((neg_fig % 2) != 0)
		sneg_fig = 1;
	tth = p_tenths(i, s);
	while (s[i] >= '0' && s[i] <= '9')
	{
		i_ger += ((s[i] - '0') * tth);
		tth /= 10;
		i++;
	}
	if (sneg_fig == 1)
		i_ger *= -1;
	return ((int) i_ger);
}
