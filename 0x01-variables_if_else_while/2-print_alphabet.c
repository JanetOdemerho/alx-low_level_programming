#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Description: prints the alphabet in lowercase with putchar function only
 *
 * Return: 0
 */
int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	return (0);
}
