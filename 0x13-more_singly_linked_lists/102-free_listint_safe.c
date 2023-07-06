#include <stdlib.h>
#include "lists.h"

/**
  * free_listint_safe - truncates the list
  * @h: linked list head
  *
  * Return: size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *j;
	
	i = 0;
	if (!h)
	return (i);
	while (*h && *h > (*h)->next)
	{
		j = *h;
		*h = (*h)->next;
		free(j);
		i++;
	}
	if (*h)
	{
		free(*h);
		*h = NULL;
		i++;
	}
	return (i);
}
