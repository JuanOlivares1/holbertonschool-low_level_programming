#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the head of a list list_t
 * @head: double pointer to a list
 * @str: value of node
 *
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;
	int i;
	char *mal;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	mal = malloc(sizeof(char) * (i + 1));
	if (mal == NULL)
	{
		free(newHead);
		return (NULL);
	}

	mal = strdup(str);
	if (mal == NULL)
	{
		free(mal);
		free(newHead);
		return (NULL);
	}

	newHead->str = mal;
	newHead->len = i;
	if (*head == NULL)
		newHead->next = NULL;
	else
	        newHead->next = *head;
	*head = newHead;
	return (newHead);
}
