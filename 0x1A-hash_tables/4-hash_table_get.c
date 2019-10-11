#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key
* @ht: The hash table
* @key: The key to looking for
* Return: The value associated with key or NULL on error
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *aux;

	idx = key_index((unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
