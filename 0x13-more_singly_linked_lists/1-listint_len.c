#include "lists.h"

/**
 * listint_len - function that counts the number of nodes
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (listint_len(h->next) + 1);
}
