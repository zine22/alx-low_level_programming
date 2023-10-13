#include "lists.h"

/**
* print_dlistint - Func to print all elements of list
*
* @h: argument
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
size_t i;

temp = h;
i = 0;

while (temp != NULL)
{
i += 1;
printf("%d\n", temp->n);
temp = temp->next;
}
return (i);
}
