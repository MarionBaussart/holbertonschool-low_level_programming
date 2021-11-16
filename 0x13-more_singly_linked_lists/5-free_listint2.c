#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to NULL
 * @head: singly list to free
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
	}
	*head = NULL;
}
