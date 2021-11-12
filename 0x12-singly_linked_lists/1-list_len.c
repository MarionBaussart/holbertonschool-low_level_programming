#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: singly list to print
 * Return: length of the singly list : the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int nbnode = 0;

	while (h != NULL)
	{
		nbnode++;
		h = h->next;
	}
	return (nbnode);
}
