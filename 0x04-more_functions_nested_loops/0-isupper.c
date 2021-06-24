#include "holberton.h"

/**
 * _isupper - checks if input is an uppercase character
 * @c: character
 * Return: returns 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
