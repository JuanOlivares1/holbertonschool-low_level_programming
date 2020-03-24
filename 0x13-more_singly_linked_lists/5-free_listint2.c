#include "lists.h"

/**
 * free_listint2 - free the memory reserved for a linked list
 * @head: pointer to a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
