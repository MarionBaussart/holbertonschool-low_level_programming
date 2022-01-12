#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: doubly linked list to print
 * Return: length of the doubly linked list : the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nbnode = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nbnode++;
		h = h->next;
	}
	return (nbnode);
}
