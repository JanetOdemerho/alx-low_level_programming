#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int countwords(char *str);

/**
 * **strtow - splits a string into words
 * @str: string parameter
 * Return: array of strings or NULL on error
 */

char **strtow(char *str)
{
	char **matrix, tmp;
	int a, b = 0, len = 0, wrd, c = 0, start, end;

	while (*(str + len))
		len++;
	wrd = countwords(str);
	if (wrd == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (wrd + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[b] = NULL;
	return (matrix);
}

/**
 * countwords - counts the number of words in a string
 * @str: string parameter
 * Return: number of words
 */

int countwords(char *str)
{
	int result, index, num;

	result = num = 0;
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == ' ')
			result = 0;
		else if (result == 0)
		{
			result = 1;
			num++;
		}
	}
	return (num);
}
