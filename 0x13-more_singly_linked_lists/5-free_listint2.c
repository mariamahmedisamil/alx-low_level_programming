#include "lists.h"
/**
* free_listint2 - Add new lists and new fils
* @head: point and add new codes
*/
void free_listint2(listint_t **head)
{
	listint_t *mod;

	if (head == NULL)
		return;

	while (*head)
	{
		mod = (*head)->next;
		free(*head);
		*head = mod;
	}

	*head = NULL;
}
