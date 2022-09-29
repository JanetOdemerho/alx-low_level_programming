#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: first parameter
 * @y: second parameter
 * Description: Function returns the value of x raised to power of y
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
