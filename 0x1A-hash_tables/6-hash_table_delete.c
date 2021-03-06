#include "hash_tables.h"

/**
* hash_table_delete - Prints a hash table
* @ht: The hash table
*
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *aux2;
	unsigned int idx_arr = 0;

	if (!ht)
		return;
	while (idx_arr < ht->size)
	{
		aux = ht->array[idx_arr];
			while (aux)
		{
			aux2 = aux;
			free(aux2->value);
			free(aux2->key);
			aux = aux->next;
			free(aux2);
		}
		idx_arr++;
	}
	free(ht->array);
	free(ht);
}
