#include "dog.h"
#include <stdio.h>
/**
 * print_dog - initializesprints a dog structure
 * @d: pointer to the structure to printinitialice.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
