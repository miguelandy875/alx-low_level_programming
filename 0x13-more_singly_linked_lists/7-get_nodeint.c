#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - operation on list.
  * @head: linked link head
  * @index: node index
  *
  * Return: nth node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
				return (head);

			head = head->next;
			i++;
		}
	}

	return (NULL);
}
