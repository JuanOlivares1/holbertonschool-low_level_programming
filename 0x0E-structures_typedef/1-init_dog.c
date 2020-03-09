#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the structure to initialice.
 * @name: name aatribute
 * @age: age atribute
 * @owner: owner atribute
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
