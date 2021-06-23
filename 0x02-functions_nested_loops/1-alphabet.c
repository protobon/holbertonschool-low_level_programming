#include "holberton.h"

/**
 * print_alphabet - prints alphabet lowercase followed by a new line
 * Return: returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
