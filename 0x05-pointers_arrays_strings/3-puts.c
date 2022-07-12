#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: input string.
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		i++;
	}
	_putchar('\n');
}
