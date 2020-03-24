#include "lists.h"

/**
 * sum_listint - returns the sum of data on a listint_t
 * @head: pointer to the head
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
