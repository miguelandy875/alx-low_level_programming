#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - truncates a list & set head to null.
  * @head: linked list head
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
