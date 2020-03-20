#include "lists.h"

/**
 * free_list - free the memory reserved for a linked list
 * @head: pointer to a list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (temp == NULL)
		return;

	free_list(head->next);
	free(temp->str);
	free(temp);
}
