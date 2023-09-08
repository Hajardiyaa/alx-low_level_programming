#include "hash_tables.h"

/**
 * key_index - every value of a key pair should be stored in array 
 * @key: The key .
 * @size: The size of the array .
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
