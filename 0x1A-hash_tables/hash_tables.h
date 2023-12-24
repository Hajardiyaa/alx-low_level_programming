#ifndef HASH_TABLES_H
#define HASH_TABLES_H
/**
Structure hash_node_s - Individual node within a hash table
*@key: A string representing the unique identifier in the HashTable
*@value: The corresponding value linked to the key
*@next: Pointer to the following node in the List
*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
*Structure hash_table_s - Data structure for a hash table
*@size: array's size
*@array: An array of size @size
*Each element of this array is a pointer to the initial node of a linked list,
*utilized for Chaining collision resolution in the HashTable
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function Prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
