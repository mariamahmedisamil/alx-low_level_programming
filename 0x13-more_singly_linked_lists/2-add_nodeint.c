#include "lists.h"
/**
* add_nodeint - adds some new codes to the linked list
* @head: point and focs on the new incomer codes
* @n: its time to insert the codes
*
* Return: Always (NULL)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mod;

	mod = malloc(sizeof(listint_t));
	if (!mod)
		return (NULL);

	mod->n = n;
	mod->next = *head;
	*head = mod;

	return (mod);
}
