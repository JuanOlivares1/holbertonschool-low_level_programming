#include <string.h>
#include "lists.h"

/**
 * last_list - return the last node of a list
 * @h: pointer to a list
 *
 * Return: pointer to last node of list
 */
list_t *last_list(list_t *h)
{
	if (h == NULL)
		return (NULL);

	if (h->next == NULL)
	{
		return (h);
	}

	return (last_list(h->next));
}

/**
 * add_node_end - adds a new node at the end of a list list_t
 * @head: double pointer to a list
 * @str: value of node
 *
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *mal;
	int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	mal = malloc(sizeof(char) * (i + 1));
	if (mal == NULL)
	{
		free(new);
		return (NULL);
	}
	mal = strdup(str);
	if (mal == NULL)
	{
		free(mal);
		free(new);
		return (NULL);
	}

	new->str = mal;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = last_list(head[0]);
	last->next = new;
	return (new);
}
