#include "lists.h"
/**
 *  *add_nodeint - Fucntion to add a new node
 * @head: The direction of the next node
 * @n: The int to add
 *
 * Return: A pointer to the new node
 * On error, nothing
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
