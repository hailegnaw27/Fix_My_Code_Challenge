#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint -  free a list
* @head: pointer to head
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *node;

while (head)
{
node = head;
head = head->next;
free(node);
}
}

