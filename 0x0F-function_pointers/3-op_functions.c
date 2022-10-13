#include "3.calc.h"

/**
 * op_add - calculates the sum of two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the differences of two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of one parameter by another parameter
 * @a: first parameter
 * @b: second parameter
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
