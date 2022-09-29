#include "main.h"

int _sqrt_recursion(int n);
int _sqrt_num(int n, int sq);

/**
 * _sqrt_recursion - entry point
 * @n: parameter
 * Description: Function returns the natural square root of n
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_num(0, n));
}

/**
 * _sqrt_num - returns the square root of the given parameter
 * @n: parameter
 * @sq: squared parameter
 * Description: _sqrt_num is a supporting function
 * Return: result
 */

int _sqrt_num(int n, int sq)
{
	if (n > sq / 2)
		return (-1);
	else if (n * n == sq)
		return (n);
	return (_sqrt_num(n + 1, sq));
}
