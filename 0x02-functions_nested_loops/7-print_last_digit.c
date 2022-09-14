#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: int argument of the function
 * Return: last digit
 */
int print_last_digit(int d)
{
	int l = d % 10;
	{
		if (l < 0)
		{
			l *= -1;
		}
		_putchar(l + '0');
	}
	return (l);
}
