#include "lists.h"

/**
* get_dnodeint_at_index - func to return nth node
*
* @head: argument
* @index: argument
*
* Return: nth or null
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int i;

temp = head;
i = 0;

while (temp != NULL)
{
if (i == index)
{
return (temp);
}
else
{
temp = temp->next;
i += 1;
}
}
return (NULL);
}
