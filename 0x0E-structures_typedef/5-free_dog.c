#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free dogs
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
