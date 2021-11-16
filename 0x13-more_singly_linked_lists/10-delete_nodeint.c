#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - function that delete a  node at
 * a given position
 * @head: singly list
 * @index: position for delete the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *next;
	unsigned int i = 0;

	if (*head == NULL)
    {
        return (-1);
    }

    if (index == 0)
	{
        *head = tmp->next;
		free(tmp);
        return (1);
	}
	else
	{
		while (i < index - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			return (-1);
		}

        next = tmp->next;
		tmp->next = next->next;
		free(next);
	}

	return (1);
}
