#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * print_alphabet - print alphabet in lowerbcase
 */

void print_alphabet_x10(void)
{
    int a = 0;

    while (a < 10)
	{
        int b;

	    b = 97;
	    while (b < 123)
	    {
		    _putchar(b);
		    b++;
	    }
	    _putchar('\n');
         a++;
	}
}