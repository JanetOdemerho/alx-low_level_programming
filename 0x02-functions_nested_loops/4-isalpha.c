#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase alphabetic character
 * @c: int argument of the function
 * Return: 1 if successfull and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
