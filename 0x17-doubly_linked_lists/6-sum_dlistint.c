#include "lists.h"

/**
 * sum_dlistint - adds all nodes' data in a doubly linked list
 * @head: lisit's head
 *
 * Return: result of adding all data
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
