#include "lists.h"

/**
* print_list - prints all elements
*
* @h: element
*
* Return: i
*/

size_t print_list(const list_t *h)
{
int i,
for (i = 0; h; h->next, i++)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("%s\n", h->str);
}
return (i);
}
