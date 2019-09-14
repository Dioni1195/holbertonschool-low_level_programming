#include "lists.h"
/**
 * sum_dlistint - add nodes of a list
 * @head: The list to verify
 *
 * Return: integer of sum of nodes
 * On error, nothing
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int sum = 0;

	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
