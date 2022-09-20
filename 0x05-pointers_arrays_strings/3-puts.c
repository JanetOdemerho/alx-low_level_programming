#include <stdio.h>
#include "main.h"

/**
 * _puts - entry point
 * @str: parameter
 * Return: void
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		putchar(*(str + c));
		c++;
	}
	putchar(10);
}
