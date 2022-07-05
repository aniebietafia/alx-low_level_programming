#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase character
 * @c: An input character
 * else it returns 0.
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times.
 *
 * Return: 1 for lowercase character else 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
