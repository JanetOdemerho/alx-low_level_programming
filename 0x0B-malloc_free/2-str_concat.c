#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: NULL on failure or pointer to newly allocated memory
 *         which has s1, s2 and null byte
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, a, b;
	char *cpstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;
	cpstr = malloc((sizeof(char) * size) + 1);
	if (cpstr == NULL)
		return (NULL);
	a = 0;
	while (a < len1)
	{
		cpstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= size)
	{
		cpstr[a] = s2[b];
		a++;
		b++;
	}
	return (cpstr);
}
