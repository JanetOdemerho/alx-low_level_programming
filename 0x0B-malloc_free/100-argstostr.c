#include "main.h"
#include <stdlib.h>

/**
 * argstostr -concatenates all the arguments of your program
 * @ac: first parameter
 * @av: second parameter
 * Return: new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *arg;

	c = d = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			d++;
			b++;
		}
		d++;
		a++;
	}
	arg = malloc((sizeof(char) * d) + 1);
	if (arg == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			arg[c] = av[a][b];
			b++;
			c++;
		}
		arg[c] = '\n';
		c++;
		a++;
	}
	arg[c] = '\0';
	return (arg);
}
