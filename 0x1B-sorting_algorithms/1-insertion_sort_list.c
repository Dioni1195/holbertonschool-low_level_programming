#include "sort.h"

/**
*  list_len- Calculate the lenght of a string
* @h: The list passed
*
* Return: An unsigned int that is the count of nodes
* On error, nothing
*/
size_t list_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *aux = h;

	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}

/**
 * get_dnodeint_at_index - Get the node at index
 * @head: The list to verify
 * @index: The node to search
 *
 * Return: Pointer to the node
 * On error, NULL
*/
listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
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

/**
  * insertion_sort_list - Insertion algorithm implementation
  * @list: The list
  *
  *
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list, *nod_nxt, *nod_prv;
	unsigned int i = 1, j;
	size_t len_list;

	if (list == NULL || *list == NULL)
		return;
	len_list = list_len(aux);
	if (len_list <= 1)
		return;

	while (i < len_list)
	{
		nod_nxt = get_dnodeint_at_index(aux, i);
		nod_prv = get_dnodeint_at_index(aux, i - 1);
		j = i;
		while (j > 0 && (nod_prv->n > nod_nxt->n))
		{
			nod_prv->next = nod_nxt->next;
			nod_nxt->next = nod_prv;
			if (j != len_list - 1)
				nod_prv->next->prev = nod_prv;
			nod_nxt->prev = nod_prv->prev;
			if (j != 1)
				nod_prv->prev->next = nod_nxt;
			nod_prv->prev = nod_nxt;
			j--;
			if (!nod_nxt->prev)
				*list = nod_nxt;
			nod_prv = get_dnodeint_at_index(*list, j - 1);
			nod_nxt = get_dnodeint_at_index(*list, j);
			print_list(*list);
		}
		aux = *list;
		i++;
	}
}
