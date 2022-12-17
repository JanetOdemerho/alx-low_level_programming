#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the int argument of the function
 * Return: 1 if successful and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
