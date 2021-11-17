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
	listint_t *tmp;
	size_t nbnode = 0;

	delete_loop(*h);

	while (*h)
	{
		tmp = *h;
		nbnode++;
		*h = (*h)->next;
		free(tmp);
	}

	*h = NULL;

	return (nbnode);
}

/**
 * delete_loop - delete the loop
 * @head: singly list to print
 * Return: No return
 */

void delete_loop(listint_t *head)
{
	listint_t *next = head, *prev = head;
	int index = 0;

	while (next)
	{
		next = next->next;
		index++;
		if (detect_loop(head, next, index) != 0)
		{
			prev->next = NULL;
			break;
		}
		prev = prev->next;
	}
}
