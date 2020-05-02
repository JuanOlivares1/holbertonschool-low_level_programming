#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: lisit's head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
		return (nnodes);

	while (h != NULL)
	{
		nnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnodes);
}
