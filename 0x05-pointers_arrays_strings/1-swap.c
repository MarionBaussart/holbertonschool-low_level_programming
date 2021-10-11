#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int valeur_de_a;

	valeur_de_a = *a;
	*a = *b;
	*b = valeur_de_a;
}
