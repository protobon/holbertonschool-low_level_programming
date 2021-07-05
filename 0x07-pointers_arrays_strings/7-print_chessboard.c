#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 2 dim string
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
