#include "lists.h"

/**
 * list_len - calculate the lenght of a linked list
 * @h: pointer to a list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h->next == NULL)
		return (1);

	return (list_len(h->next) + 1);
}
