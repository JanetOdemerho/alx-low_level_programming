#include "main.h"

/**
 * cap_string - entry point
 * Description: capitalizes all words of a string
 * @s: string parameter
 * Return: s after been capitalized
 */

char *cap_string(char *s)
{
	int i = 0, c;
	char array[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (c = 0; c <= 12; c++)
				{
					if (array[c] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
