#include "lists.h"

/**
* print_listint - prints all elements
*
* @h: pointer
*
* Return: i
*/

size_t print_listint(const listint_t *h)
{
int i;

for (i = 0; h; h = h->next, i++)
_putchar(h->n);

return (i);
}
