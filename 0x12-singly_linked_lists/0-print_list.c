#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly list to print
 * Return: length of the singly list : the number of nodes.
 */

size_t print_list(const list_t *h)
{
    int nbnode = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        nbnode++;
        h = h->next;
    }
    return (nbnode);
}