#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - new node at the beginning of a list
  * @head: primitive linked list
  * @str: string to be add to the node
  *
  * Return: new list address or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;

		return (tmp);
	}

	return (0);
}

/**
  * _strlen - strin length
  * @s: String to be counted
  *
  * Return: length
  */
int _strlen(const char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}

	return (x);
}
