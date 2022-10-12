#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: array to iterates over
 * @size: size of the array
 * @action: pointer to function used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (!array || !action)
		return;

	for (u = 0; u < size; u++)
		action(array[u]);
}
