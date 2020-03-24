#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the head
 * @index: node index
 *
 * Return: pointer to element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index != 0)
	{
		head = head->next;
		index--;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
