#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int argument of the function
 * Return: 0
 */
void print_times_table(int n)
{
	int l;
	int o;
	int y;
		if (n >= 0 && n <= 15)
			for (l = 0; l <= n; l++)
			{
				for (o = 0; o <= n; o++)
				{
					y = o * l;
					if (o == 0)
						_putchar(y + '0');
					else if (y < 10 && o != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(y + '0');
					}
					else if (y >= 10 && y < 100)
					{
						_putchar(',');
						_putchar(',');
						_putchar(' ');
						_putchar((y / 10) + '0');
						_putchar((y % 10) + '0');
					}
					else if (y >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((y / 100) + '0');
						_putchar(((y / 10) % 10) + '0');
						_putchar((y % 10) + '0');
					}
				}
				_putchar('\n');
			}
}
