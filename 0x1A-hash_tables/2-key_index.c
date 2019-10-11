#include "hash_tables.h"

/**
* key_index - Return the index of a key
* @key: The key to search
* @size: The size of the array
*
* Return: The index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
