#include "main.h"

/**
 * swap_int - entry point
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sw = *a;

	*a = *b;
	*b = sw;
}
