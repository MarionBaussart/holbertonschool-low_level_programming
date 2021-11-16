#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: singly list
 * @index: index of the nth node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (node == NULL)
	{
		return (NULL);
	}

	while (i < index && node)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
	{
		return (NULL);
	}

	return (node);
}
