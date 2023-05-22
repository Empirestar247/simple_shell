#include "shell.h"

/**
 * p_tenths - finds mult factor of tens
 * @x: counter of where the no begins in str
 * @z: pointer to the string
 * Return: tens multiplier
 */

int p_tenths(int x, char *z)
{
	double ptr_tenth = 1;

	while (z[x] >= '0' && z[x] <= '9')
	{
		ptr_tenth *= 10;
		x++;
	}
	ptr_tenth /= 10;
	return ((int) ptr_tenth);
}
