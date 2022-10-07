#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *s);
char *array_x(int size);
char *iterate_zeroes(char *s);
void mul_string(char *result, char *s, int d, int z);
void add_nums(char *r1, char *r2, int r_len);

/**
 * str_len - finds string length
 * @s: string parameter
 * Return: string length
 */

int str_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * array_x - creates an array of character and initialize it with x
 * @size: size of array
 * Return: the array
 */

char *array_x(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}

/**
 * iterate_zeroes - iterates through a string of numbers containing leading
 *                  zeroes until it hits a non-zero number
 * @s: string of numbers
 * Return: the non-zero element
 */

char *iterate_zeroes(char *s)
{
	while (*s && *s == '0')
		s++;
	return (s);
}

/**
 * convert_digit - converts a digit character to a corresponding integer
 * @d: digit
 * Return: converted digit
 */

int convert_digit(char d)
{
	int digit = d - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * mul_string - multiplies a string of numbers by a single digit
 * @result: result
 * @s: string of numbers
 * @d: digit
 * @z: necessary number of leading zeros
 * Return: nothing
 */

void mul_string(char *result, char *s, int d, int z)
{
	int mul_len, num, tens = 0;

	mul_len = str_len(s) - 1;
	s += mul_len;

	while (*result)
	{
		*result = 'x';
		result++;
	}
	result--;

	while (z--)
	{
		*result = '0';
		result--;
	}

	for (; mul_len >= 0; mul_len--, s--, result--)
	{
		if (*s < '0' || *s > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*s - '0') * d;
		num += tens;
		*result = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*result = (tens % 10) + '0';
}

/**
 * add_nums - adds the numbers stored in two strings
 * @r1: running final result
 * @r2: next result to be add
 * @r_len: length of the next result
 * Return: void
 */

void add_nums(char *r1, char *r2, int r_len)
{
	int num, tens = 0;

	while (*(r1 + 1))
		r1++;

	while (*(r2 + 1))
		r2++;

	for (; *r1 != 'x'; r1--)
	{
		num = (*r1 - '0') + (*r2 - '0');
		num += tens;
		*r1 = (num % 10) + '0';
		tens = num / 10;

		r2--;
		r_len--;
	}

	for (; r_len >= 0 && *r2 != 'x'; r_len--)
	{
		num = (*r2 - '0');
		num += tens;
		*r1 = (num % 10) + '0';
		tens = num / 10;

		r1--;
		r2--;
	}
	if (tens)
		*r1 = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argc: array of pointers to the arguments
 * @argv: number of arguments
 * Return: 0 if successful or 1 on error
 */

int main(int argc, char *argv[])
{
	char *r1, *r2;
	int size, i, d, z = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = str_len(argv[1]) + str_len(argv[2]);
	r1 = array_x(size + 1);
	r2 = array_x(size + 1);

	for (i = str_len(argv[2]) - 1; i >= 0; i--)
	{
		d = convert_digit(*(argv[2] + i));
		mul_string(r2, argv[1], d, z++);
		add_nums(r1, r2, size - 1);
	}
	for (i = 0; r1[i]; i++)
	{
		if (r1[i] != 'x')
			putchar(r1[i]);
	}
	putchar('\n');
	free(r2);
	free(r1);
	return (0);
}
