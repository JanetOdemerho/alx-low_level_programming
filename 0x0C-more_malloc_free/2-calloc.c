#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory of array using malloc
 * @nmemb: number of elements in array
 * @size: size of the elements
 * Return: Memory allocated or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int u;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < (nmemb * size); u++)
	{
		*((char *)(pt) + u) = 0;
	}

	return (pt);
}
