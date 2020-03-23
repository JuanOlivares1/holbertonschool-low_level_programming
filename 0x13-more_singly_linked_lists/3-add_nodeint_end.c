#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the begining of the list
 * @head: pointer to the head
 * @n: new value
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	last = last_nodeint(*head);
	if (last == NULL)
		*head = new;
	else
		last->next = new;

	return (new);
}


/**
 * add_nodeint_end - function that returns the last element of a list
 * @head: pointer to the head
 *
 * Return: pointer to last element
 */
listint_t *last_nodeint(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	if (head->next == NULL)
		return (head);

	return (last_nodeint(head->next));
}
