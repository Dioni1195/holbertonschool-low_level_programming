#include "lists.h"

/**
 * sum_listint - Sum the data of each node of a linked list
 * @head: The linked list
 *
 * Return: The sum of the data
 * On error, nothing
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
