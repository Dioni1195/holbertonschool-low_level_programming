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
* _swapper - swaps the nodes
* @nod_prv: the previous node
* @nod_nxt: the next node
*/
void _swapper(listint_t *nod_prv, listint_t *nod_nxt)
{
	nod_prv->next = nod_nxt->next;
	nod_nxt->next = nod_prv;
	if (nod_prv->next)
		nod_prv->next->prev = nod_prv;
	nod_nxt->prev = nod_prv->prev;
	if (nod_prv->prev)
		nod_prv->prev->next = nod_nxt;
	nod_prv->prev = nod_nxt;
}
/**
* cocktail_sort_list - sorts the list in a cocktail way
* @list: the list given
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *nod_prv, *nod_nxt;
	size_t i, len_list, swapped = 1, init = 0;

	if (list == NULL || *list == NULL || list_len(*list) <= 1)
		return;
	len_list = list_len(*list) - 1;
	while (swapped)
	{ swapped = 0;
		for (i = init; i < len_list; i++)
		{
			nod_nxt = get_dnodeint_at_index(*list, i + 1);
			nod_prv = get_dnodeint_at_index(*list, i);
			if (nod_prv->n > nod_nxt->n)
			{
				_swapper(nod_prv, nod_nxt);
				if (!nod_nxt->prev)
					*list = nod_nxt;
				print_list(*list);
				swapped = 1;
			}
		} --len_list;
		if (swapped == 0)
			break;
		swapped = 0;
		for (i = (len_list); i >= init; i--)
		{
			nod_nxt = get_dnodeint_at_index(*list, i + 1);
			if (!nod_nxt->prev)
				break;
			nod_prv = get_dnodeint_at_index(*list, i);
			if (nod_prv->n > nod_nxt->n)
			{
				_swapper(nod_prv, nod_nxt);
				if (!nod_nxt->prev)
					*list = nod_nxt;
				print_list(*list);
				swapped = 1;
			}
		} init++;
	}
}
