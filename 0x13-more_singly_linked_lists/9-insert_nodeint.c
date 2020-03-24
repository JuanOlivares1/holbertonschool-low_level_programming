#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at index of a list
 * @head: pointer to the head
 * @idx: index
 * @n: new node's data
 *
 * Return: sum of data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head2 = *head;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
		return(add_nodeint(&(*head), n));

	return (insert_nodeint_at_index(&(head2->next), idx - 1, n));
}

/**
 * add_nodeint - function that adds a new node at the begining of the list
 * @head: pointer to the head
 * @n: new value
 *
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
