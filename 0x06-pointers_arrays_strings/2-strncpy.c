#include "main.h"

/**
 * _strncpy - entry point
 * Description: Write a function that copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\n';
	}
	return (dest);
}
