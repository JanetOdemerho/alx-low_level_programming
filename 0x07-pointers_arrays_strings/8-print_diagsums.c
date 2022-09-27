#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: first parameter array
 * @size: second parameter size of array
 * Decription: Function prints the sum of two diagonals
 *             of a square matrix of integers
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumD1, sumD2;

	size1 = 0;
	sumD1 = 0;
	sumD2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i += (size + 1))
	{
		sumD1 += a[i];
	}
	for (i = (size - 1); i < size1; i += (size - 1))
	{
		sumD2 += a[i];
	}
	printf("%d, %d\n", sumD1, sumD2);
}
