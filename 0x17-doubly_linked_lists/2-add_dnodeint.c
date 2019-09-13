#include "lists.h"
/**
 * add_dnodeint - And node at the beginnig of the list
 * @head: The list
 * @n: The constant number to add
 *
 * Return: The integer of lenght of the list
 * On error, nothing
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	return (*head = newNode);
}
