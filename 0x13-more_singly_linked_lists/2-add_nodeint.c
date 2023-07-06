#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - new node being add at the beginning of a linked list
  * @head: linked list head
  * @n: new node value
  *
  * Return: new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
