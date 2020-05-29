#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size = ht->size;
	hash_node_t  *idxNode;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < size; i++)
	{
		idxNode = ht->array[i];
		while (idxNode != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", idxNode->key, idxNode->value);
			flag = 1;
			idxNode = idxNode->next;
		}
	}
	printf("}\n");
}
