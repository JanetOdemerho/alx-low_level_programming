#include "main.h"

/**
 * _memset - entry point
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Description: Function fills memory with a constant byte
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
