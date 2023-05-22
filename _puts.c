#include "shell.h"

/**
 * _puts - write character to STDOUT
 * @c: character to print
 * Return: 1 on success, -1 on failure
 */
int _puts(char c)
{
	return (write(1, &c, 1));
}
