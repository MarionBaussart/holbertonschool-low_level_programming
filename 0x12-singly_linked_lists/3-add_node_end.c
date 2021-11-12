#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: singly list to print
 * @str: new string to add to head
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* count the size of str */
	while (str[i])
	{
		i++;
	}

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	*head = new;

	return (*head);
}
