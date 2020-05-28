#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_create - creates hash table
 * @size: size of array
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = calloc(sizeof(hash_node_t), 1);
	if (ht == NULL)
		return (NULL);
	ht->array = calloc(sizeof(hash_node_t *), size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
