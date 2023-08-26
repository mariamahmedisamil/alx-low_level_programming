#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new variabls to the end of the main list
  * @head: The main linked list
  * @str: The string to add any variabls
  *
  * Return: Always (NULL)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *number;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			number = *head;
			while (number->next)
				number = number->next;

			number->next = new_list;
			return (number);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the main of a string
  * @s: String to continue
  *
  * Return: string to add any word
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
