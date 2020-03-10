#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
