#include <stdio.h>

/**
 * main -Prints the alphabet in lowercase and uppercase,followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		for (ch = 'A'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');

	return (0);
}
