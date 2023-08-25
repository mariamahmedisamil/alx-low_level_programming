#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_list - Prints all numbers in alx
  * @h: Teacher point on something
  *
  * Return: The number of nodes to the main list
*/
size_t print_list(const list_t *h)
{
	size_t maria = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		maria++;
	}

	return (maria);
}
