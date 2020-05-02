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
	new->next = *head;
	*head->prev = new;
	*head = new;
	return (*head);
}
