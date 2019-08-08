#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: The linked list
 *
 * Return: Nothing
 * On error, nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *freeNode, *temp = *head;

	while (temp)
	{
		freeNode = temp->next;
		free(temp);
		temp = freeNode;
	}
	free(temp);
	*head = NULL;
}
