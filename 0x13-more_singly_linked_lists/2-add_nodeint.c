#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: singly list to print
 * @n: new int to add to head
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *first;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		first = *head;
		*head = new;
		new->next = first;
	}

	return (new);
}
