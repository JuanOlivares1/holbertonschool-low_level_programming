#include "hash_tables.h"
/**
 * key_index - gives index of key
 * @key: key to hash
 * @size: size of array
 *
 * Return: index of array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
