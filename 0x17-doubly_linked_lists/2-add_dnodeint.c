#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: doubly list
 * @n: const int to add to head
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	h = &head;

	h->prev = new;
	new->n = n;
	new->next = h;
	new->prev = NULL;
	h = new;

	return (new);
}
