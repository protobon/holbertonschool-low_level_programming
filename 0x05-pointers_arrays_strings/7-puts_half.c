#include "holberton.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	j = j / 2;

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
