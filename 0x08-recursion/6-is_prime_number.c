#include "main.h"

int is_prime_number(int n);
int _prime_num(int n, int o);

/**
 * is_prime_number - entry point
 * Description: Function detect prime numbers
 * @n: parameter
 * Return: prime numbers
 */

int is_prime_number(int n)
{
	int o = n / 2;

	if (n <= 1)
		return (0);
	return (_prime_num(n, o));
}

/**
 * _prime_num - returns prime numbers
 * @n: parameter
 * @o: starting point
 * Description: _prime_num is a supporting function
 * Return: result or otherwise error
 */

int _prime_num(int n, int o)
{
	if (o <= 1)
		return (1);
	else if (n % o == 0)
		return (0);
	return (_prime_num(n, o - 1));
}
