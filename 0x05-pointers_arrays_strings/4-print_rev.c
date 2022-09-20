#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - entry point
 * @s: parameter
 * Return: void
 */

void print_rev(char *s)
{
	int string = strlen(s);

	while (string--)
		putchar(*(s + string));
	putchar(10);
}
