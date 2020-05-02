#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: lisit's head
 *
 * Return: address of new node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
