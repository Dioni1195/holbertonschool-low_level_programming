#include "lists.h"
#include <stdio.h>
/**
  * print_dlistint - Go trhought a doubly linked lists and print elements
  * @h: The list to verify
  *
  * Return: The count of nodes
  * On error, nothing
  */

size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}

