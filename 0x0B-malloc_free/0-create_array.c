#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *                and initializes it with a specific char
 * @size: first parameter (size of array)
 * @c: second parameter (Character to initialize array with)
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int u;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < size; u++)
	{
		array[u] = c;
	}

	return (array);
}
