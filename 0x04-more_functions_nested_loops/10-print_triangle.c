#include "holberton.h"

/**
 * print_triangle - prints an input size tirangle
 * @size: integer
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
