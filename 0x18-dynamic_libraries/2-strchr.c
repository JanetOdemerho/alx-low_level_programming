#include "main.h"

/**
 * _strchr - entry point
 * @s: first parameter string
 * @c: second parameter character
 * Description: Function locates a character in a string
 * Return: pointer to the first occurrence of the c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
