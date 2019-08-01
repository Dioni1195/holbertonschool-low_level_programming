#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* print_list - Print each element of each node of a linked list
* @h: The linked list
*
* Return: Nothing
* On error, nothing
 */
size_t print_list(const list_t *h)
{
	char *p;
	unsigned int i;
	size_t j = 0;

	while (h)
	{
		p = h->str;
		i = h->len;
		if (p == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i, p);
		h = h->next;
		j++;
	}
	return (j);
}
