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
	list_t *string_list, *temp;

	if (str != NULL)
	{
		string_list = malloc(sizeof(list_t));
		if (sting_list == NULL)
			return (NULL);

		string_list->str = strdup(str);
		string_list->len = _strlen(str);
		string_list->next = NULL;

		if (*head == NULL)
		{
			*head  = string_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = string_list;
			return (temp);
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
