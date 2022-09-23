#include "main.h"

/**
 * strcat - entry point
 * @dest: first parameter
 * @src: second parameter
 * Return: destination string
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (index = 0; src[index] != 0; index++)
	{
		dest[dest_len++] = src[index];
	}
	dest[dest_len] = '\0';
	return (dest);
}
