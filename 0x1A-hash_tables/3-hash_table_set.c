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
	hash_node_t *head, *kv, *x;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		kv = keyValidator(ht->array[index], key);
		if (kv != NULL)
		{
			free(kv->value);
			kv->value = strdup(value);
			if (kv->value == NULL)
				return (0);
			return (1);
		}
		x = add_node(&(ht->array[index]), key, value);
		if (x == NULL)
			return (0);
		return (1);
	}

        head = malloc(sizeof(hash_node_t));
        if (head == NULL)
                return (0);

	x = add_node(&head, key, value);
	if (x == NULL)
		return (0);

	ht->array[index] = head;
	return (1);
}

/**
 * add_node - adds a new node at the head of a list list_t
 * @head: double pointer to a list
 * @str: value of node
 *
 * Return: pointer to head
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
        hash_node_t *newNode;
        char *dupkey, *dupvalue;

        newNode = malloc(sizeof(hash_node_t));
        if (newNode == NULL)
                return (NULL);

        dupkey = strdup(key);
        if (dupkey == NULL)
        {
                free(newNode);
                return (NULL);
        }

	dupvalue = strdup(value);
        if (dupvalue == NULL)
        {
		free(dupkey);
                free(newNode);
                return (NULL);
        }

        newNode->key = dupkey;
        newNode->value = dupvalue;

        if (*head == NULL)
                newNode->next = NULL;
        else
                newNode->next = *head;
        *head = newNode;
        return (newNode);
}

/**
 * keyValidator - validates if the key already exist
 * @head: list head
 * @key: key
 *
 * Return: Node on success, NUll on fail
 */
hash_node_t *keyValidator(hash_node_t *head, const char *key)
{
	while(head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head);
		head = head->next;
	}
	return (NULL);
}
