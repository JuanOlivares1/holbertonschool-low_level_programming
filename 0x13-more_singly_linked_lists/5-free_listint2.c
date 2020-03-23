#include "lists.h"

/**
 * free_listint2 - free the memory reserved for a linked list
 * @head: pointer to a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *head2 = *head;

	if (head == NULL)
		return;

	if (head2 == NULL)
		return;

	free_listint2(&(head2->next));
	free(head2);
}
