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
	size_t first_idx = 0, last_idx = size - 1, mid = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (first_idx <= last_idx)
	{
		mid = (first_idx + last_idx) / 2;

		printf("Searching in array: ");
		for (i = first_idx; i <= last_idx; i++)
		{
			if (i == last_idx)
			{
				printf("%i\n", array[i]);
				break;
			}
			printf("%i, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			first_idx = mid + 1;
		else if (value < array[mid])
		{
			if (mid == 0)
				return (-1);
			last_idx = mid - 1;
		}
	}
	return (-1);
}
