#include <lists.h>

/**
* dlistint_len - Func that returns num of elements
*
* @h: argument
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t i;

temp = h;
i = 0;

while (temp != NULL)
{
i += 1;
temp = temp->next;
}
return (i);
}
