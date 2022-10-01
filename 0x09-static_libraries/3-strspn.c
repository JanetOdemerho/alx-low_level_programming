#include "main.h"

/**
 * _strspn - entry point
 * @s: first parameter string
 * @accept: second parameter
 * Decription: Function gets the length of a prefix substring
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, u;

	for (u = 0; *(s + u); u++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + u) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (u);
}
