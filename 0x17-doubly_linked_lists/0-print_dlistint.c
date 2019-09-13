#include "lists.h"
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}

