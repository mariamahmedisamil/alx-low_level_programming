#include "lists.h"
/**
* add_nodeint_end - adds a new code at the end of a linked list
* @head: point and copy the right code here
* @n: data to data alayziz
*
* Return: Always (NULL)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mod;
	listint_t *temp = *head;

	mod = malloc(sizeof(listint_t));
	if (!mod)
		return (NULL);

	mod->n = n;
	mod->next = NULL;

	if (*head == NULL)
	{
		*head = mod;
		return (mod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = mod;

	return (mod);
}
