#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at any index
  * @head: linked list head
  * @index: indexes of linked list
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *new = *head, *tmp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			new = tmp->next;
			tmp->next = new->next;
			free(new);
			return (1);
		}

		tmp = tmp->next;
		i++;
	}

	return (-1);
}
