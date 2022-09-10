#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0, p, t;
		while (i <= 9)
		{
			p = 0;
			while (p <= 9)
			{
				t = 0;
				while (t <= 9)
				{
					if (i != p && i < p && p != t && p < t)
					{
						putchar(i + 48);
						putchar(p + 48);
						putchar(t + 48);
						if (i + p + t != 24)
						{
							putchar(',');
							putchar(' ');
						}
					}
					++t;
				}
				++p;
			}
			++i
		}
		putchar('\n');
	return (0);
}
