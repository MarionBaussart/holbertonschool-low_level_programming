#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: doubly list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = h->next;
		(*head)->prev = NULL;
		return (1);
	}
	else
	{
		while (i < index - 1 && h)
		{
			h = h->next;
			i++;
		}
		if (h == NULL)
			return (-1);

		tmp = h->next;
		h->next = tmp->next;
		h->prev = tmp->prev;
	}
	return (1);
}
