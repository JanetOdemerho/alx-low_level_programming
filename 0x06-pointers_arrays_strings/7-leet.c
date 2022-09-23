#include "main.h"

/**
 * leet - entry point
 * Description: encodes a string into 1337
 * @str: string parameter
 * Return: str after encoding
 */

char *leet(char *str)
{
	int a, b;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (a = 0; *(str + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (array1[b] == *(str + a))
				*(str + a) = array2[b];
		}
	}
	return (str);
}
