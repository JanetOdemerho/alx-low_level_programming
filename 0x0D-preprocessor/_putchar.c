#include <unistd.h>

/**
 * _putchar - prints c
 * @c: parameter
 * Return: 1 if successful or -1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
