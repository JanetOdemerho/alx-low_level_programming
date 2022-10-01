#include <stdio.h>

/**
 * main - print the all arguments it receives
 * @argc: counting parameter
 * @argv: argument parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%i\n", argv[count]);
			count++;
		}
	}
	return (0);
}
