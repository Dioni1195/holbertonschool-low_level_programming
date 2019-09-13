#include "lists.h"
#include <stdio.h>
/**
  * dlistint_len - Check the lenght of a doubly linked list
  * @h: The list to verify
  *
  * Return: The integer of lenght of the list
  * On error, nothing
  */

size_t dlistint_len(const dlistint_t *h)
{
	int cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}

