#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Print each element of each node of a linked list
  * @h: The linked list
  *
  * Return: The number of nodes
  * On error, nothing
   */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
