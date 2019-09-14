#include "lists.h"
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

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int cont = 0;
	int ret = -1;
	size_t len;

	aux = *head;
	if (aux != NULL)
	{
		if (index == 0)
		{
			*head = aux->next;
			free(aux);
			ret = 1;
		}
		else
		{
			len = dlistint_len(aux);
			while (aux)
			{
				if (cont == index && len != (size_t)index)
				{
					aux->prev->next = aux->next;
					aux->next->prev = aux->prev;
					free(aux);
					ret = 1;
					break;
				}
				else if (len != (size_t)index)
				{
					aux = NULL;
					free(aux);
					ret = 1;
					break;
				}
				cont++;
				aux = aux->next;
			}
		}
	
	}
	else
	{
		*head = NULL;
		free(aux);
	}
	return (ret);
}
