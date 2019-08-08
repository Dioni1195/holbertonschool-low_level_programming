#include "lists.h"
/**
  *  listint_len- Calculate the lenght of a linked list
  * @h: The list passed
  *
  * Return: An unsigned int that is the count of nodes
  * On error, nothing
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
