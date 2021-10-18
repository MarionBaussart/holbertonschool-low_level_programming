#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, column = 0;

	while (row < 8)
	{
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
		column = 0;
	}
}
