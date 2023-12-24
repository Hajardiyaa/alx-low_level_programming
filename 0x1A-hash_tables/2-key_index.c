#include "hash_tables.h"
/**
 * key_index :index key
 * @key: is a key
 * @size:array 's size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
