#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - new node being add to the end of a linked list
  * @head: linked list head
  * @n: value to be add to the end of the linked list
  *
  * Return: new element address
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *tmp;

	if (head)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = new_list;
			return (tmp);
		}
	}

	return (NULL);
}
