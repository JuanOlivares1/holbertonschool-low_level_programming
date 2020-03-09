#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	d->name == NULL ? (printf("Name: (nil)\n"))
		: (printf("Name: %s\n", d->name));
	d->age == NULL ? (printf("Age: (nil)\n"))
		: (printf("Age: %f\n", d->age));
	d->owner == NULL ? (printf("Owner: (nil)\n"))
		: (printf("Owner: %s\n", d->owner));
}
