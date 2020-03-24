#include "lists.h"

/**
 * free_listint2 - free the memory reserved for a linked list
 * @head: pointer to a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *head2 = *head;

	if (head == NULL)
		return;

	if (head2 == NULL)
		return;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return;
	ptr = head2->next;
	free_listint2(&(ptr));
	free(ptr);
	free(head2);
	*head = NULL;
}
