#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: singly list
 * @idx: position for add the new node
 * @n: new int to add to head
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
