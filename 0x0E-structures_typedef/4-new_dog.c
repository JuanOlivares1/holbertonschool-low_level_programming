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

	__attribute__((unused))char *name_cp;
	__attribute__((unused))char *owner_cp;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	name_cp = _strdup(name);
	owner_cp = _strdup(owner);

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
                return (NULL);

        for (i = 0; i < size; i++)
        {
                p[i] = str[i];
        }
        return (p);
}
