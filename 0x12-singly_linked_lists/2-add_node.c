#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - Adds some new variabls to linked list
  * @head: The basic linked list
  * @str: So bad to add any value
  *
  * Return: The new list is NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *num;

	if (head != NULL && str != NULL)
	{
		num = malloc(sizeof(list_t));
		if (num == NULL)
		return (NULL);

		num->str = strdup(str);
		num->len = _strlen(str);
		num->next = *head;
		*head = num;
		return (num);
	}
	return (0);
}
/**
  * _strlen - Returns the length of a string
  * @s: so bad to count
  *
  * Return: Always (0)
*/
int _strlen(const char *s)
{
	int g = 0;

	while (*s)
	{
		s++;
		g++;
	}
	return (g);
}
