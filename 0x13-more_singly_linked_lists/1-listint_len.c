#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counter for linked list element
  * @h: linked list head 
  *
  * Return: linked list nodes
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}

	return (i);
}
