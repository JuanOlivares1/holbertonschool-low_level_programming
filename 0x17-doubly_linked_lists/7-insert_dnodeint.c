#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * insert_dnodeint_at_index - adds nodes at index in a doubly linked list
 * @h: lisit's head
 * @idx: index
 * @n: data to node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *temp;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	current = get_dnodeint_at_index(*h, idx);
	if (current == NULL)
		return (NULL);
	temp = current;
	current = current->prev;
	current->next = NULL;
	new = add_dnodeint_end(h, n);
	if (new == NULL)
	{
		current->next = temp;
		return (NULL);
	}
	temp->prev = new;
	new->next = temp;
	return (new);
}
