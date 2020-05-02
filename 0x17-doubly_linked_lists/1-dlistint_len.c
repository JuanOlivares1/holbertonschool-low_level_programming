#include "lists.h"

/**
 * dlistint_len - counts nodes in a doubly linked list
 * @h: lisit's head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
