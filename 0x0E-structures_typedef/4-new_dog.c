#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

/**
 * new_dog - initializes a dog structure
 * @name: name aatribute
 * @age: age atribute
 * @owner: owner atribute
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = _strdup(name);
	p->age = age;
	p->owner = _strdup(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}

/**
 * _strdup - copy a string and stores it on a newlly memory allocation
 * @str: string to copy
 *
 * Return: pointer to array.
 */
char *_strdup(char *str)
{
	int i, size;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	size = i;

	p = malloc(size + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
