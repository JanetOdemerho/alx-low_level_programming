#include "main.h"

/**
 * reverse_array - entry point
 * Description: reverses the content of an array of integers
 * @a: first parameter
 * @n: second parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		t = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = t;
	}
}
