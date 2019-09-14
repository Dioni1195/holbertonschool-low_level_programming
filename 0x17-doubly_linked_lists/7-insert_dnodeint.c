#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *newNode;
	unsigned int index = 1;

	if (!h)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!*h && idx != 0)
		return (NULL);
	else if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		return (*h = newNode);
	}
	aux = *h;
	while (aux)
	{
		if (index == idx)
		{
			newNode->next = aux->next;
			newNode->prev = aux;
			aux->next = newNode;
			return (*h);
		}
		index++;
		aux = aux->next;
	}
	return (NULL);
}

