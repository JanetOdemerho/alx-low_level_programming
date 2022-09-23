#include "main.h"

/**
 * string_toupper - entry point
 * Decription: changes all lowercase letters to uppercase
 * @s: string parameter
 * Return: s after change
 */

char *string_toupper(char *s);
{
	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		index++;
	}

	return (s);
}
