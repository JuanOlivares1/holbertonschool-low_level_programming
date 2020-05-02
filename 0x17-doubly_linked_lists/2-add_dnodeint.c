#include "lists.h"

/**
 * add_dnodeint - adds nodes in a doubly linked list
 * @head: lisit's head
 * @n: data to node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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

	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
