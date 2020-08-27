#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value of item to search
 *
 * Return: index of fist value found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, newsize = 0,  mid;
	int index = -1;

	if (array == NULL)
		return (-1);

	/* finding mid pointer of array and defining new array size */
	if (size % 2 == 0)
		mid = (size / 2) - 1;
	else
		mid = (size / 2);

	/* printing current array */
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
		if (i > mid)
			newsize++;
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);

	/* recursively finding index of value */
	if (array[mid] == value)
	{
		index = mid;
		if (index == -1)
			return (-1);
		else
			return (index);
	} else if (array[mid] > value)
	{
		index = binary_search(array, newsize, value);
		if (index == -1)
			return (-1);
		else
			return (mid - index);
	} else if (array[mid] < value)
	{
		index  = binary_search(&array[mid] + 1, newsize, value);
		if (index == -1)
                        return (-1);
                else
			return (mid + index);
	}
	return (-1);
}
