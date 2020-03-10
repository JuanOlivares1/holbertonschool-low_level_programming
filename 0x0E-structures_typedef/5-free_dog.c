#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == null)
		return;
	free(d);
}
