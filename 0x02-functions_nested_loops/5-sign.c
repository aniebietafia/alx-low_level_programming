#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 *
 * @n: The input number as an integer.
 * Description: This function prints the sign of the
 * number.
 *
 * Return: 1 if number is positive, o if number is 0,
 * or -1 if number is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
