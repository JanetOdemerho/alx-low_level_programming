#include "main.h"

/**
 * _strlen_recursion - entry point
 * Description: Function returns the length of a string
 * @s: string parameter
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
}
