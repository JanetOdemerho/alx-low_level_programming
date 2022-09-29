#include "main.h"

int is_palindrome(char *s);
void _detect(char *s, int o, int e, int *result);

/**
 * is_palindrome - entry point
 * Description: Function detects if s is a palindrome
 * @s: parameter
 * Return: 1 if yes or 0 is no
 */

int is_palindrome(char *s)
{
	int result = 1;

	_detect(s, 0, _strlen_recursion(s) - 1, &result);
	return (result);
}

/**
 * _detect - a specialized function to detect palindrome
 * @s: string parameter
 * @o: starting point
 * @e: end point
 * @result: result if a string is a palindrome
 * Return: nothing
 */

void _detect(char *s, int o, int e, int *result)
{
	if (o <= e)
	{
		if (s[o] == s[e])
			*result *= 1;
		else
			*result *= 0;
		_detect(s, o + 1, e - 1, result);
	}
}
