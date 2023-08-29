#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: linked list head
  * @idx: index of the list where the new node should be added.
  * @n: integer to be used
  *
  * Return: address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *add;
	unsigned int i = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			add = *head;
			while (add)
			{
				if (i == idx)
				{
					new_node->next = add->next;
					add->next = new_node;
					return (new_node);
				}
				add = add->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
