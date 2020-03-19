#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to lists' head
 *
 * Return: number of nodes in size_t vartype
 */
size_t print_list(const list_t *h)
{
	if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (1);
		}
		printf("[%d] %s\n", h->len, h->str);
		return (1);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	printf("[%d] %s\n", h->len, h->str);
	return (print_list(h->next) + 1);
}
