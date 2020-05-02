#include "lists.h"

/**
 * dlistint_len - counts nodes in a doubly linked list
 * @h: lsit's head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
		return (nnodes);

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
