#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - length of elements of a list
  * @h: linked list
  *
  * Return: total number of elmnts of list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
