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

/**
  * delete_dnodeint_at_index - Delete a node at index
  * @head: The list to verify
  * @index: Index to delete
  *
  * Return: nothing
  * On error, nothing
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int cont = 0, len;

	if (aux != NULL)
	{
		if (index == 0)
		{
			*head = aux->next;
			free(aux);
			return (1);
		}
		else
		{
			len = (unsigned int)dlistint_len(aux);
			while (aux)
			{
				if (cont == index && len - 1 != index)
				{
					aux->prev->next = aux->next;
					aux->next->prev = aux->prev;
					free(aux);
					return (1);
				}
				else if (len - 1 == index && cont == index)
				{
					aux->prev->next = NULL;
					free(aux);
					return (1);
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
	return (-1);
}
