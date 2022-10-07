#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory allocated
 * @old_size: size of ptr in bytes
 * @new_size: size of new memory block in bytes
 * Return: new memory block or NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *npt;
	unsigned int u;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		npt = malloc(new_size);
		if (npt == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		npt = malloc(new_size);
		if (npt == NULL)
			return (npt);
		for (u = 0; u < old_size; u++)
			npt[u] = *((char *)ptr + 1);
		free(ptr);
	}

	return (npt);
}
