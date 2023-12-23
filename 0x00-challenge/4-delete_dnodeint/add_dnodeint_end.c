#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - node at the end
* @head: head pointwer
* @n: number
*
* Return: new element pointer
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *l;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
new->prev = NULL;
return (new);
}
l = *head;
while (l->next != NULL)
{
l = l->next;
}
l->next = new;
new->prev = l;
return (new);
}

