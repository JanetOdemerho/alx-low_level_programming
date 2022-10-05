#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: string parameter
 * Return: NULL if str is empty
 */

char *_strdup(char *str)
{
	char *cpstr;
	unsigned int len, u;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	cpstr = malloc(sizeof(char) * (len + 1));
	if (cpstr == NULL)
		return (NULL);

	for (u = 0; u < len; u++)
		cpstr[u] = str[u];

	cpstr[len] = '\0';

	return (cpstr);
}
