#include "holberton.h"
/**
 * print_sign - tells me if input is a positive or negative number
 * @n:character
 *
 * Return: int
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	else
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
