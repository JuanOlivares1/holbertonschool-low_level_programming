#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at index of a list
 * @head: pointer to the head
 * @index: index
 *
 * Return: 1 if succes. -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head2 = *head;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	return (delete_nodeint_at_index(&(head2->next), index - 1));
}

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
