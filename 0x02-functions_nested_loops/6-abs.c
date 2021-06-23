#include "holberton.h"

/**
 * _abs - prints the absolute value of an int input
 * @n:integer
 * Return: returns int
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
