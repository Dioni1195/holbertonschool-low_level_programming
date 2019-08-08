#include "lists.h"

/**
 *  *add_nodeint_end - Fucntion to add a new node at the end
 * @head: The direction of the next node
 * @n: The int to add
 *
 * Return: A pointer to the new node
 * On error, nothing
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		return (*head = newNode);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (*head);
}

