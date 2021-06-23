#include "holberton.h"

/**
 * _isalpha - check if input is an alphabetic letter
 * @c:character
 * Return: returns 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	int i;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		i = 1;
	} else
	{
		i = 0;
	}
	return (i);
}
