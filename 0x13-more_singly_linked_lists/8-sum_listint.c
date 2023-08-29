#include "lists.h"
/**
* sum_listint - print new sumtions
* @head: first codes appear print thir function
*
* Return: Always (0)
*/
int sum_listint(listint_t *head)
{
	int mod = 0;
	listint_t *temp = head;

	while (temp)
	{
		mod += temp->n;
		temp = temp->next;
	}

	return (mod);
}
