#include "lists.h"

/**
 * get_dnodeint_at_index - gets node from a doubly linked list at index
 * @h: lisit's head
 * @index: index
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
