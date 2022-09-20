#include "main.h"
#include <stdio.h>

/**
 * puts_half - entry point
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
