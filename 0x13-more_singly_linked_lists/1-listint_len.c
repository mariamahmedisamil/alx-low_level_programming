#include "lists.h"
/**
* listint_len - Make linkes bettwen the tirminal and the linked list
* @h: linked list is having all new codes
*
* Return: Always (0)
*/
size_t listint_len(const listint_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}

	return (g);
}
