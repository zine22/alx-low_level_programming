#include "lists.h"

/**
* listint_len - print lengh
*
* @h: pointer
*
* Return: i
*/

size_t listint_len(const listint_t *h)
{
int i;

for (i = 0; h; h = h->next, i++)
;
return (i);
}
