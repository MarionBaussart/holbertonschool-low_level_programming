#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: singly list to free
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head, *search = head;

	while (search && search->next)
	{
		while (start != search && start != search->next)
		{
			start = start->next;
			if (start == search->next)
			{
				return (start);
			}
		}
		search = search->next;
		start = head;
	}
	return (NULL);
}
