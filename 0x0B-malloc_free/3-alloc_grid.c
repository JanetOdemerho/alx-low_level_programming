#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first parameter
 * @height: second parameter
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **pt;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		pt = (int **) malloc(height * sizeof(int *));
		if (!pt)
		{
			free(pt);
			return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			pt[a] = (int *) malloc(width * sizeof(int));
			if (!pt[a])
			{
				for (b = 0; b <= a; b++)
					free(pt[b]);
				free(pt);
				return (NULL);
			}
		}
		for (c = 0; c < height; c++)
		{
			for (d = 0; d < width; d++)
			{
				pt[c][d] = 0;
			}
		}
		return (pt);
	}
}
