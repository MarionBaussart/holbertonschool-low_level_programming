#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: singly list to print
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nbnode = 0;
	const listint_t *current = head;

	if (head == NULL)
	{
		exit(98);
	}

/* print the listint_t */
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nbnode++;
		current = current->next;
		if (detect_loop(head, current, nbnode) != 0)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (nbnode);
}

/**
 * detect_loop - detect if they are a loop in head
 * @head: singly list to print
 * @current: current node to check
 * @index: number of nodes we have to check
 * Return: 0 if no loop
 */

size_t detect_loop(const listint_t *head, const listint_t *current, size_t index)
{
	while (head != current)
	{
		head = head->next;
		index--;
	}
	return (index);
}
