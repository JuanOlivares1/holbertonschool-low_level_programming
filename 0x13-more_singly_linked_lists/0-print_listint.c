#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements on a linked list
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
        if (h == NULL)
                return (0);

        printf("%i\n", h->n);
	if (h->next == NULL)
		return (1);
        return (print_listint(h->next) + 1);
}
