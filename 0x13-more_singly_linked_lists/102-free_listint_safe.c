#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * and sets the head to NULL
 * @h: singly list to free
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *tmp;
    size_t nbnode = 0;

    while (current)
	{
		tmp = current;
        nbnode++;
        current = current->next;
        if (detect_lfree(h, current, nbnode) != 0)
		{
            free (tmp);

			break;
		}
        free (tmp);
    }
    current = NULL;
    *h = current;

	return (nbnode);
}


/**
 * detect_lfree - detect if they are a loop in head
 * @h: singly list to print
 * @current: current node to check
 * @index: number of nodes we have to check
 * Return: 0 if no loop
 */

int detect_lfree(listint_t **h, listint_t *current, int index)
{
	while (*h != current)
	{
		*h = (*h)->next;
		index--;
	}
	return (index);
}
