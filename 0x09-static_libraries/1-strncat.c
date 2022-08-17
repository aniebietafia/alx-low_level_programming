#include "main.h"

/**
 * _strncat - Concatenates two strings,
 * @dest: Destination.
 * @src: Source.
 * @n: Amount of bytes used from src.
 *
 * Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
