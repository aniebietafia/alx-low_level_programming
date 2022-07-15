#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: input string.
 *
 * Return: The pointer to dest.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 *
 *check_seperators - Separators of words: space, tabulation, new line,
 *
 *,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 *
 * Return: 1 if seperator, 0 otherwise
 */

int check_seperators(char c)

{

		int i = 0;

			char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',

						'"', '(', ')', '{', '}' };

				for (; i < 13; i++)

						{

									if (c == seperators[i])

													return (1);

										}

					return (0);

}
