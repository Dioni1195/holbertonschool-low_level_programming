#include "lists.h"

/**
 * get_nodeint_at_index - Get a node at index
 * @head: The linked list
 * @index: The selected index
 *
 * Return: Nothing
 * On error, nothing
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *chNode;
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			chNode = head;
			return (chNode);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
