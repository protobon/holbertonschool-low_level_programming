#include "holberton.h"

/**
 *_strcpy - print a message with printf
 *@dest : number
 *@src : number
 *
 *Return: end program
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
