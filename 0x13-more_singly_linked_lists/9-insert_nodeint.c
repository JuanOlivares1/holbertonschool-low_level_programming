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
	listint_t *new, *head2 = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		head2 = head2->next;
		i++;
		if (head2->next == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head2->next;
	head2->next = new;
	return (head2);
}
