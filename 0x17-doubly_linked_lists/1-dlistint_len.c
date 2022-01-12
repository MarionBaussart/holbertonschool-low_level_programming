#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: doubly list
 * Return: length of the doubly list : the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nbnode = 0;

	while (h)
	{
		nbnode++;
		h = h->next;
	}
	return (nbnode);
}
