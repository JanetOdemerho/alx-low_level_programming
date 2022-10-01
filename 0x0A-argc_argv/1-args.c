#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: counting parameter
 * @argv: argument parameter
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
