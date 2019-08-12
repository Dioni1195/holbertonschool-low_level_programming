#include "lists.h"

/**
 * insert_nodeint_at_index - Add a new node at selected index
 * @head: The linked list
 * @idx: The selected index
 * @n: The new int
 *
 * Return: The New Node
 * On error, nothing
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	if (!head)
	{
		newNode->next = NULL;
		newNode->n = n;
		*head = newNode;
		return (*head);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (*head);
	}
	while (tmp)
	{
		if (i == (idx - 1))
		{
			newNode->next = tmp->next;
			newNode->n = n;
			tmp->next = newNode;
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	free(newNode);
	return (NULL);
}
