#include "holberton.h"

/**
 * _strcpy - copies a string and saves it to another string
 * @dest : string
 * @src : string
 * Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
