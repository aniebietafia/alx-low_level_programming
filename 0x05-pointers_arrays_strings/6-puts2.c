#include "main.h"

/**
 * puts2 - Prints one char out of 2 of a string.
 * @str: input string.
 *
 * Return: no return.
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
