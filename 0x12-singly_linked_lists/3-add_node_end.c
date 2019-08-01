#include "lists.h"
/**
*  _str_len- Calculate the lenth of a string
* @str: The pointer to string
*
* Return: An unsigned int that is the count of chars
* On error, nothing
*/
unsigned int _str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 *  *add_node_end - Fucntion to add a new node
 * @head: The direction of the next node
 * @str: The string to add
 *
 * Return: A pointer to the new node
 * On error, nothing
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp;

	tmp = *head;
	if (!head)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _str_len(str);
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != '\0')
		tmp = tmp->next;
	tmp->next = newNode;
	return (*head);
}
