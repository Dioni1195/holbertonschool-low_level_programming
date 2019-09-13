#include "lists.h"
/**
 * add_dnodeint_end - Add node at the end
 * @head: The list to verify
 * @n: The constant to add at the node
 *
 * Return: Pointer to the list
 * On error, nothing
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		return (*head = newNode);
	}
	aux = *head;
	while (aux)
	{
		if (!aux->next)
		{
			newNode->prev = aux;
			aux->next = newNode;
			break;
		}
		aux = aux->next;
	}
	return (*head);
}



