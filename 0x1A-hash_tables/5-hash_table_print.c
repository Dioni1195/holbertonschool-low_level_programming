#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: The hash table
*
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int idx_arr = 0, cont = 0;

	if (ht)
	{
		printf("{");
		while (idx_arr < ht->size)
		{
			aux = ht->array[idx_arr];
			if (!aux)
			{
				idx_arr++;
				continue;
			}
			while (aux)
			{
				if (cont != 0)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				cont++;
			}
			idx_arr++;
		}
		printf("}\n");
	}
}
