#include <stdio.h>
#include "lists.h"

/**
  * print_listint - elements of a linked list
  * @h: linked list head
  *
  * Return: linked list nodes
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}
