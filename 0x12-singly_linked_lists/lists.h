#ifndef HEADER_FILE
#define HEADER_FILE lists.h
#include <stddef.h>

/**
 * struct singly_linked_list - singly_linked_list
 *
 * @str: string
 * @len: length of the string
 * @next: name of the next struct linked
 */
typedef struct singly_linked_list
{
	char *str;
	int len;
	struct singly_linked_list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
