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
	d->name == '\0' ? (printf("Name: (nil)\n"))
		: (printf("Name: %s\n", d->name));
	d->age == 0 ? (printf("Age: (nil)\n"))
		: (printf("Age: %f\n", d->age));
	d->owner == '\0' ? (printf("Owner: (nil)\n"))
		: (printf("Owner: %s\n", d->owner));
}
