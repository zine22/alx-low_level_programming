#include "lists.h"

/**
* sum_dlistint - func that returns sum
*
* @head: argument
*
* Return: sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int val_;

temp = head;
val_ = 0;

while (temp != NULL)
{
val_ += temp->n;
temp = temp->next;
}
return (val_);
}
