#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: singly list to print
 * Return: length of the singly list : the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int nbnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nbnode++;
		h = h->next;
	}
	return (nbnode);
}
