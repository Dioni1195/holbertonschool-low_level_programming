#include "lists.h"
/**
*  list_len- Calculate the lenght of a string
* @h: The list passed
*
* Return: An unsigned int that is the count of nodes
* On error, nothing
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
