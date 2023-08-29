#include "lists.h"
/**
* print_listint - prints all the codes of the new list
* @h: link the new list and its codes
*
* Return: Always (0)
*/
size_t print_listint(const listint_t *h)
{
	size_t g = 0;

	while (h)
	{
		printf("%d\n", h->n);
		g++;
		h = h->next;
	}

	return (g);
}
