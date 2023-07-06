#include <stdio.h>
#include "lists.h"

/**
  * print_listint_safe - prints linked list by loop
  * @head: head of linked list
  * Return: number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	listint_t *j = (listint_t *)head;

	i = 0;
	while (j && j > j->next)
	{
		printf("[%p] %d\n", (void *)j, j->n);
		j = j->next;
		i++;
	}
	if (j)
	{
		printf("[%p] %d\n", (void *)j, j->n);
		printf("-> [%p] %d\n", (void *)j->next, j->next->n);
		i++;
	}
	return (i);
}
