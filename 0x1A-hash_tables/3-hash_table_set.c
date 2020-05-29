#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 on succes - 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *newNode;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head != NULL && strcmp(head->key, key) > 0)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->key = strdup(value);

	ht->array[index] = newNode;
	ht->array[index]->next = head;
	return (1);
}
