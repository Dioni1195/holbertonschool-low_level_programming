#include "hash_tables.h"
/**
  *  *add_node - Fucntion to add a new node
  * @head: The direction of the next node
  * @value: The value to add
  * @key: The key to search
  * Return: A pointer to the new node
  * On error, nothing
  */
hash_node_t *add_node(hash_node_t **head, const char *value, const char *key)
{
	hash_node_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
* hash_table_set - Add elemtns to a hash table
* @ht: The hash table
* @key: The key
* @value: The value
* Return: On succes 1, on error, return 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *aux;
	int flg = 0;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[idx])
	{
		if (add_node(&ht->array[idx], value, key) == NULL)
			return (0);
	}
	else
	{
		aux = ht->array[idx];
		while (aux)
		{
			if (strcmp(aux->key, key) == 0)
			{
				aux->value = strdup(value);
				flg = 1;
			}
			aux = aux->next;
		}
		if (flg == 0)
		{
			if (add_node(&ht->array[idx], value, key) == NULL)
			{
				return (0);
			}
		}
	}
	return (1);
}
