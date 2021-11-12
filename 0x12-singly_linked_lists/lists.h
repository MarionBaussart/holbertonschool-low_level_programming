#ifndef HEADER_FILE
#define HEADER_FILE lists.h
#include <stddef.h>
#include <stdarg.h>

/**
 * struct singly_linked_list - singly_linked_list
 *
 * @str: string
 * @nfunc: name of the function to use
 */
typedef struct singly_linked_list
{
	char *str;
	int len;
	struct singly_linked_list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
