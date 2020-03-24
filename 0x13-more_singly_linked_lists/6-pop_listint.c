#include "lists.h"

/**
 * pop_listint - function that deletes head nodes
 * @head: pointer to the head
 *
 * Return: the value of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int r;

	if (head == NULL || *head == NULL)
		return (0);

	r = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (r);
}
