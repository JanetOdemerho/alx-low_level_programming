#include <stdlib.h>
#include "main.h"

int _strlength(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: first character
 * @s2: second character
 * @n: n bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	int num, len, a, b;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlength(s2))
		num = _strlength(s2);

	len = _strlength(s1) + num + 1;

	pt = malloc(sizeof(*pt) * len);
	if (pt == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		pt[a] = s1[a];
	for (b = 0; b < num; b++)
		pt[a + b] = s2[b];
	pt[a + b] = '\0';

	return (pt);
}

/**
 * _strlength - return string length
 * @str: string
 * Return: string length
 */

int _strlength(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
