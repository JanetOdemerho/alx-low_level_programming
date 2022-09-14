#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int argument of the function
 */
void print_times_table(int n)
{
	int l, m, p;
	{
		if (n <= 15 && n > 0)
		{
			for (l = 0; l <= n; ++l)
			{
				_putchar('0');
				_putchar(',');
				for (m = 1; m <= n; ++m)
				{
					p = m * l;
					_putchar(' ');
					if (p / 100 >= 1)
					{
						_putchar('0' + p / 100);
						_putchar('0' + p / 10 % 10);
						_putchar('0' + p % 10);
					}
					else if (p / 10 >= 1)
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					if (m < n)
						_putchar(',');
					else
						_putchar('\n');

				}
			}
		}
	}
}
