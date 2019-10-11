#include "hash_tables.h"

/**
* hash_table_create - Function to create a hash table
*@size: Size of the array
*
* Return: Return a pointer to a hashTable, on error, return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(sizeof(hash_node_t) * size);
	if (!hash_table->array)
		return (NULL);
	return (hash_table);
}
