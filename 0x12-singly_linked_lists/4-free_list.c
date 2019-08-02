#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
  * free_list - Frees a linked list
  * @head: The linked list
  *
  * Return: Nothing
  * On error, nothing
   */
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *new;

	tmp = head;
	while (tmp)
	{
		new = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = new;
	}
	head = NULL;
}

