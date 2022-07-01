#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
