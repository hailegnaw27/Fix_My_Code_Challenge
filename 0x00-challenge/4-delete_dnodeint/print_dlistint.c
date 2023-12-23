#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - printes the list
 * @h: pinter to head
 *
 * Return: prited number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

