#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - delete the head node of a list
  * @head: head of linked list
  *
  * Return: head node data
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int i = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (i);
}
