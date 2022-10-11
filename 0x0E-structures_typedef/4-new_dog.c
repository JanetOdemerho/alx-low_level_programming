#include "dog.h"
#include <stdlib.h>

int _strlength(char *s);
char *_strcpy(char *dest, char *source);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlength - length of string
 * @s: the string
 * Return: length of string
 */

int _strlength(char *s)
{
	int slen = 0;

	while (*s++)
		slen++;

	return (slen);
}

/**
 * _strcpy - copies a string pointed to by source and terminating
 *           null byte to buffer pointed to by dest
 * @dest: buffer storing the string copy
 * @source: the source string
 * Return: dest
 */

char *_strcpy(char *dest, char *source)
{
	int i = 0;

	for (i = 0; source[i]; i++)
		dest[i] = source[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	dog_new->name = malloc(sizeof(char) * (_strlength(name) + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = malloc(sizeof(char) * (_strlength(name) + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	dog_new->name = _strcpy(dog_new->name, name);
	dog_new->age = age;
	dog_new->owner = _strcpy(dog_new->owner, owner);

	return (dog_new);
}
