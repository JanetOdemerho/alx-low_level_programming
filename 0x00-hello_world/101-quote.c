#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main -print a string
 *
 * Description: prints a string
 * Return: 1
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", s);
	return (1);
}
