#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: doubly list
 * @idx: index of the list where the new node should be added
 * @n: new int to add to h
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h == NULL)
		*h = new;
		else
		{
			(*h)->prev = new;
			new->next = *h;
			*h = new;
		}
	}
	else
	{
		while (i < idx - 1 && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
			return (NULL);
		new->prev = tmp;
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
