#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n, h;
		for (h = 0; h <= 9; h++)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
			}
			_putchar('\n');
		}
}
