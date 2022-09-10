#include <stdio.h>
#include <unistd.h>

/**
 * main - print all single digit numbers of base 10 without the char function
 *
 * Return: 0
 */
int main(void)
{
	int n;
		for (n = '0'; n <= '9'; n++)
			putchar(n);
		putchar('\n');
		return (0);
}
