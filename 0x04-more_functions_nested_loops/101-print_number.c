#include "holberton.h"

/**
 * print_number - prints integer input
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 999)
	{
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
	}
	else if (n > 99)
	{
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
