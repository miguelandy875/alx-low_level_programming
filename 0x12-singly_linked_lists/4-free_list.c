#include <stdlib.h>
#include "lists.h"

/**
  * free_list - empty a linked list.
  * @head: pointer to the 1st node of linked list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
