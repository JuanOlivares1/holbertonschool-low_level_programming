#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints a name
 * @array: name to print
 * @size: funtion pointer, the function determine the format of the print
 * @action: function that performs an action to an int
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
