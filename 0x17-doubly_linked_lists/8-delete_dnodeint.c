#include "lists.h"
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - deletes nodes at index in a doubly linked list
 * @head: lisit's head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tempN, *tempP;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		tempN = current->next;
		tempN->prev = NULL;
		free(current);
		*head = tempN;
		return (1);
	}
	if (index == (dlistint_len(*head) - 1))
	{
		current = get_dnodeint_at_index(*head, index);
		tempP = current->prev;
		free(current);
		tempP->next = NULL;
		return (1);
	}

	if (index >= dlistint_len(*head))
		return (-1);

	current = get_dnodeint_at_index(*head, index);
	tempP = current->prev;
	tempN = current->next;
	free(current);
	tempP->next = tempN;
	tempN->prev = tempP;
	return (1);
}
