#include "main.h"

/**
 * _strlen - entry point
 * @s: parameter
 * Return: length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
