#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: The linked list
 *
 * Return: Nothing
 * On error, nothing
*/
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head)
	{
		freeNode = head->next;
		free(head);
		head = freeNode;
	}
}
