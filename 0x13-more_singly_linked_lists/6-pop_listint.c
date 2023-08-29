#include "lists.h"
/**
* pop_listint - deletes all codes and creat new lists
* @head: pointer to get new variabls
*
* Return: Always (num)
*/
int pop_listint(listint_t **head)
{
	listint_t *mod;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	mod = (*head)->next;
	free(*head);
	*head = mod;

	return (num);
}
