#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - truncates a linked list
  * @head: linked list head
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
