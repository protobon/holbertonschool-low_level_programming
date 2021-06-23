#include "holberton.h"

/**
 * _islower - if input is lowercase prints 1, prints 0 otherwise
 * @c:character
 * Return: returns either 1 or 0 depending on input
 */

int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	} else
	{
		i = 0;
	}
	return (i);
}
