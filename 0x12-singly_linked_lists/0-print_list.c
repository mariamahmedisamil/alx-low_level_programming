#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the number of nodes of list_h
* @h: pointer to the number of nodes at list_h
* Return: the number of nodes
*/
size_t print_list(const list_t *h);
{
size_t m = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
m++;
}
return (m);
}
