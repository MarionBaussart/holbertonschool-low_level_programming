#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string setted
 * @to: string wanted
 */

void set_string(char **s, char *to)
{
	*s = to;
}
