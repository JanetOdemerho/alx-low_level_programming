#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0, p, t;
		for (i = 0; i <= 9; i++)
	{
		for (p = 0; p <= 9; p++)
		{
			for (t = 0; t <= 9; t++)
			{
			if (t > p && p > i)
			{
				putchar(i + '0');
				putchar(p + '0');
				putchar(t + '0');
					if (i != 7)
				{
						putchar(',');
						putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
