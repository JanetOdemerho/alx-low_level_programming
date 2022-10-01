#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: counting parameter
 * @argv: argument parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int c, v;

	if (argc == 3)
	{
		c = atoi(argv[1]);
		v = atoi(argv[2]);
		printf("%i\n", c * v);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
