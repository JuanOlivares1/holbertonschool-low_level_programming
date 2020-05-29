#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *idxNode, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		idxNode = ht->array[i];
		while (idxNode != NULL)
                {
			free(idxNode->key);
			free(idxNode->value);
			temp = idxNode;
			idxNode = idxNode->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
