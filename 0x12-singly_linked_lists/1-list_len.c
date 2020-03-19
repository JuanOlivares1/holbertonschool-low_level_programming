#include "lists.h"

/**
 * list_len - calculate the lenght of a linked list
 * @h: pointer to a list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (list_len(h->next) + 1);
}
