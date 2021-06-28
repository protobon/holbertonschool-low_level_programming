#include "holberton.h"

/**
 * print_number - prints integer input
 * @n: integer
 */
void print_number(int n)
{
	unsigned int x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 9)
	{
		_putchar((x / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
