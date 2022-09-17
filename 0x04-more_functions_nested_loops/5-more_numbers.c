#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int n_1, n_2;

	for (n_1 = 0; n_1 < 10; n_1++)
	{
		for (n_2 = 0; n_2 <= 14; n_2++)
		{
			if (n_2 > 9)
			{
				putchar((n_2 / 10) + '0');
			}
			putchar((n_2 % 10) + '0');
		}
		putchar(10)
	}
}
