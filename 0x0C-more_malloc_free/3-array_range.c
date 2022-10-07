#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum parameter
 * @max: maximum parameter
 * Return: newly created array or NULL if malloc fails and min > max
 */

int *array_range(int min, int max)
{
	int rng, i;
	int *pt;

	rng = 0;

	if (min > max)
		return (NULL);

	rng = ((max + 1) - min);

	pt = malloc(rng * sizeof(int));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < rng; i++)
	{
		*(pt + i) = min + i;
	}

	return (pt);
}
