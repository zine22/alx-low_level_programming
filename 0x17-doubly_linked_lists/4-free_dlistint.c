#include "lists.h"

/**
* free_dlistint - Func to free a list
*
* @head: argument
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}

head = NULL;
}
