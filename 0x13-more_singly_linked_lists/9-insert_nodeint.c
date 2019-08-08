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
	listint_t *temp, *cpy = *head, *newNode;
	unsigned int i = 0, pre;

	while (cpy)
	{
		if (i == idx)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (NULL);
			temp = cpy->next;
			pre = cpy->n;
			cpy->next = newNode;
			cpy->n = n;
			newNode->n = pre;
			newNode->next = temp;
			return (newNode);
		}
		i++;
		cpy = cpy->next;
	}
	return (NULL);
}
