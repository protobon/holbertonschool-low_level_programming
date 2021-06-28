#include "holberton.h"

/**
 * _strlen - count the number of characters in a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
