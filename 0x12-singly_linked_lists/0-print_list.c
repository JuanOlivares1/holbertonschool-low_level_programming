#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to lists' head
 *
 * Return: number of nodes in size_t vartype
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (h->next == NULL)
	{
		return (elements + 1);
	}

	if (h->str == NULL)
	{
		printf("[%d] (nil)\n", h->len);
		return (print_list(h->next) + 1);
	}
	printf("[%d] %s\n", h->len, h->str);
        return (print_list(h->next) + 1);
}
