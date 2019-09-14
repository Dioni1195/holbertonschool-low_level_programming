#include "lists.h"
/**
 * get_dnodeint_at_index - Get the node at index
 * @head: The list to verify
 * @index: The node to search
 *
 * Return: Pointer to the node
 * On error, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int cont = 0;

	if (!head)
		return (NULL);
	aux = head;
	while (aux)
	{
		if (cont == index)
			return (aux);
		cont++;
		aux = aux->next;
	}
	return (NULL);
}
