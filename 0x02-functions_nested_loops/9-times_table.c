#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int n, times, p;
		for (n = 0; n <= 9; n++)
		{
			_putchar('0');
			for (times = 1; times <= 9; times++)
			{
				_putchar(',');
				_putchar(' ');
				p = n * times;
				if (p <= 9)
					_putchar(' ');
				else
					_putchar((p / 10) + '0');

				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
}
