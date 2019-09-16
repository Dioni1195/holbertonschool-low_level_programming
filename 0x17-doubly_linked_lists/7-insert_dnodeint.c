#include "lists.h"
/**
  * insert_dnodeint_at_index - Insert a node at index
  * @h: The list to verify
  * @idx: The index to find
  * @n: The constant to add
  *
  * Return: nothing
  * On error, nothing
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *newNode;
	unsigned int index = 1;

	if (!h)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	if (!*h && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		free(newNode);
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	aux = *h;
	while (aux)
	{
		if (index == idx && aux->next != NULL)
		{
			newNode->next = aux->next;
			newNode->prev = aux;
			newNode->n = n;
			aux->next = newNode;
			return (*h);
		} else if (index == idx && !aux->next)
		{
			free(newNode);
			return (newNode = add_dnodeint_end(h, n));
		}
		index++;
		aux = aux->next;
	}
	free(newNode);
	return (NULL);
}

