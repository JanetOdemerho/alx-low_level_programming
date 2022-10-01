#include "main.h"

/**
 * _atoi - entry point
 * @s: parameter
 * Return: interger
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int u = 0;
	int m = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			u = (u * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}
		c++;
	}
	u *= m;

	return (u);
}
