#include "lists.h"

/**
* free_listint - free list
*
* @head: head of list
*
*/

void free_listint(listint_t *head)
{
listint_t *temp;

for (; head; head = head->next, free(temp))
temp = head;
}
