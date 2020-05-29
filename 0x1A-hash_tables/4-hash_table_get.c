#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: value associated to key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (!key || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);
	while(strcmp(head->key, key) != 0 && head->next != NULL)
		head = head->next;
	if (strcmp(head->key, key) == 0)
		return (head->value);
	return (NULL);
}
