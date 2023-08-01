#include "lists.h"

/**
* free_listint2 - free list
*
* @head: head of list
*
*/

void free_listint2(listint_t **head)
{
listint_t *temp;

if (!head)
return;

for (; *head; *head = (*head)->next, free(temp))
temp = *head;
}
