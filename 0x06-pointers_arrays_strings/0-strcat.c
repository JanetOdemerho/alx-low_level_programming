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

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
