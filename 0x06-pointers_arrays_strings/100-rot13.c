#include "main.h"

/**
 * rot13 - entry point
 * Description: encodes a string using rot13
 * @str: string parameter
 * Return: str
 */

char *rot13(char *str)
{
	int a, b;
	char array1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char array2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(str + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if array1[b] == *(str + a)
			{
				*(str + a) = array2[b];
				break;
			}
		}
	}
	return (str);
}
