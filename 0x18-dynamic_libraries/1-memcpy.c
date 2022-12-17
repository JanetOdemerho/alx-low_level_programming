#include "main.h"

/**
 * _memcpy - entry point
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Description: Function copies memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
