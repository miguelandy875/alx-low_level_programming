#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - calculate the sum of linked list elmnt
  * @head: linked list head
  *
  * Return: sum of all the data (n) of linked list
  */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head)
	{
		while (head)
		{
			count += head->n;
			head = head->next;
		}
	}

	return (count);
}
