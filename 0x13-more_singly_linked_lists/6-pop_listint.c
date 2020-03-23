#include "lists.h"

/**
 * pop_listint - function that deletes head nodes
 * @head: pointer to the head
 *
 * Return: the value of deleted node
 */
int pop_listint(listint_t **head)
{
	int r;
	listint_t *ptr = (*head)->next;

	if (head == NULL)
                return (0);

	if (*head == NULL)
		return (0);

	r = (*head)->n;
	free(*head);
	*head = ptr;
	return (r);
}
