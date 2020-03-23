#include "lists.h"

/**
 * free_listint - free the memory reserved for a linked list
 * @head: pointer to a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
