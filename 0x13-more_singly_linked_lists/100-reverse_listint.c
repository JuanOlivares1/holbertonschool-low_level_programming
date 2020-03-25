#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head
 *
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
        int i = (int)listint_len(*head);

	if (head == NULL || *head == NULL || i == 0)
		return (NULL);

	if (i == 1)
                return (*head);

	i -= 2;

	while (i >= 0)
	{
		prev = get_nodeint_at_index(*head, i);
		if (prev->next->next == NULL)
		{
			prev->next->next = prev;
			*head = current;
			i--;
			continue;
		}
		current->next = prev;
		i--;
	}
	prev->next = NULL;
	return (*head);
}

/**
 * listint_len - function that counts the number of nodes
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
        if (h == NULL)
                return (0);

        return (listint_len(h->next) + 1);
}

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
