#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: doubly list
 * @index: index of the nth node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);

	while (i < index && node)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (NULL);

	return (node);
}
