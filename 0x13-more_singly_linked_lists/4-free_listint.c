#include "lists.h"
/**
* free_listint - do more codes if you can
* @head: creating new file with new list
*/
void free_listint(listint_t *head)
{
	listint_t *mod;

	while (head)
	{
		mod = head->next;
		free(head);
		head = mod;
	}
}
