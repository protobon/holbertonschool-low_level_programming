#include "holberton.h"

/**
 * print_diagonal - draws a diagonal in terminal with n backslashes
 * @n: integer
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
