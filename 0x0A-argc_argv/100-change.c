#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *        for an amount of money
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int coins[] = {25, 10, 5, 2, 1};

	a = b = c = d = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	if (b <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[a] != '\0')
	{
		if (b >= coins[a])
		{
			d = (b / coins[a]);
			c += d;
			b -= coins[a] * d;
		}
		a++;
	}
	printf("%i\n", c);
	return (0);
}
