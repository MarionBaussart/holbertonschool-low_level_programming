#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: singly list
 * @n: new int to add to head
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

/* keep in memory head */
    tmp = *head;

while (idx != 0)
	{
        node = *head;
		*head = node->next;
		idx--;
	}
	node = *head;
	*head = node->next;

/* add the int n when we are to idx */
    node->n = n;
    node->next = tmp;
	tmp->next = node->next;

	if (node == NULL)
	{
		return (NULL);
	}

	return (tmp);
}
