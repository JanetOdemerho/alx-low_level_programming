#include "main.h"

/**
 * _strcmp - entry point
 * @s1: first parameter
 * @s2: second parameter
 * Return: a negative difference if s1 < s2
 *         0 if s1 == s2
 *         a positive difference if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
