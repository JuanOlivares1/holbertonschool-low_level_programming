#include "lists.h"

/**
 * add_dnodeint_end - adds nodes at the end in a doubly linked list
 * @head: lisit's head
 * @n: data to node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL) /* if list is empty creates first node */
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	last = last_dnodeint(*head);
	last->next = new;
	new->prev = last;
	new->next = NULL;
	return (new);
}

/**
 * last_dnodeint - finds last node in a doubly linked list
 * @h: lisit's head
 *
 * Return: address of new node
 */

dlistint_t *last_dnodeint(dlistint_t *h)
{
	dlistint_t *last, *current = h;

	while(current->next != NULL)
	{
		current = current->next;
	}
	last = current;
	return (last);
}
