#include "lists.h"

/**
* free_dlistint - Frees a list
* @head: The list to verify
*
* Return: nothing
* On error, nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
