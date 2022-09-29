#include "main.h"

/**
 * factorial - entry point
 * Description: Function returns the factorial of a given number
 * @n: the number
 * Return: n factorial
 */

int factorial(int n)
{
	int n_fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n_fact = factorial(n - 1);
	return (n * n_fact);
}
