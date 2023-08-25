#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * list_len - Show me the whole numbers will appears
  * @h: The main list
  *
  * Return: The whole numbers will appears in main list
*/
size_t list_len(const list_t *h)
{
	size_t maria = 0;

	while (h)
	{
		h = h->next;
		maria++;
	}

	return (maria);
}
