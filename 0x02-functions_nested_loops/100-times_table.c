#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int argument of the function
 * Return: 0
 */
void print_times_table(int n)
{
	int l
	it o
	int y
	if (n >= 0 && n <= 15)
	{
		for (l = 0; l <= n; l++)
		{
			y = l *o;
			if (o == 0)
			{
				_putchar(k + '0');
			}
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
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
	}
}
