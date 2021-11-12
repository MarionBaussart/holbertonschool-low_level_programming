#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: singly list to print
 * @str: new string to add to head
 * Return: length of the singly list : the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (*head);
}
