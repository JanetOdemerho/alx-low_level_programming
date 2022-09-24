#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);

/**
 * add_strings - entry point
 * Description: add the numbers stored in the strings
 * @n1: first parameter
 * @n2: second parameter
 * @r: third parameter
 * @r_index: fourth parameter
 * Return: result or 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}

/**
 * infinite_add - entry point
 * Decription: adds two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: third parameter
 * @size_r: fourth parameter
 * Return: result if r can store the sum
 *         0 if r cannot store the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1l = 0, n2l = 0;

	for (i = 0; *(n1 + i); i++)
		n1l++;

	for (i = 0; *(n2 + i); i++)
		n2l++;

	if (size_r <= n1l + 1 || size_r <= n2l + 1)
		return (0);

	n1 += n1l - 1;
	n2 += n2l - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
