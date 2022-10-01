#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: first parameter string
 * @accept: second parameter
 * Description: Function searches a string for any of a set of bytes
 * Return: pointer to the byte in s that matches one of the bytes
 *         in accept or return Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, u;

	for (i = 0; *(s + i); i++)
	{
		for (u = 0; *(accept + u); u++)
		{
			if (*(s + i) == *(accept + u))
			{
				break;
			}
		}
		if (*(accept + u) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
