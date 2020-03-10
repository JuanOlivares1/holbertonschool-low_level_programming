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
	char *name_cp;
        char *owner_cp;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	name_cp = _strdup(name);
	if (name_cp == NULL)
	{
		free(name_cp);
		return (NULL);
	}
	owner_cp = _strdup(owner);
	if (owner_cp == NULL)
	{
		free(owner_cp);
		return (NULL);
	}

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
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
