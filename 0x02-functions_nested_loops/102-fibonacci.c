#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int m, n, o, next;
		n = 1;
		o = 2;
		for (m = 1; m <= 50; ++m)
		{
			if (n != 20365011074)
			{
				printf("%ld, ", n);
			}
			else
			{
				printf("%ld\n", n);
			}
			next = n + o;
			n = o;
			o = next;
		}
	return (0)
}
