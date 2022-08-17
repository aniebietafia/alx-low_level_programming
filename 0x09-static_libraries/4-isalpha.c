#include "main.h"

/**
 * _isalpha - Displays 1 if the input is a letter else it displays 0.
 *
 * @c: The input character
 * Description: Function returns 1 if character is a letter,
 *lowercase or uppercase.
 *
 * Return: 1 else 0.
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
