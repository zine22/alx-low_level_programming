#include "lists.h"

/**
* add_nodeint - add nodes
*
* @head: head of list
* @n: node
*
* Return: null or new
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
