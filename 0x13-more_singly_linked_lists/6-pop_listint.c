#include "lists.h"

/**
 * pop_listint - Frees the head node and return its information
 * @head: The linked list
 *
 * Return: The integer store int the deleted node
 * On error, nothing
*/
int pop_listint(listint_t **head)
{
	int info;
	listint_t *newLink, *temp = *head;

	if (!*head)
		return (0);
	newLink = temp->next;
	info = temp->n;
	free(temp);
	*head = newLink;
	return (info);
}
