#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char rev[999];

	while (s[j] != '\0')
	{
		j++;
	}

	j -= 1;

	for (; j >= 0; j--)
	{
		rev[j] = s[i];
		i++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = rev[i];
	}
}
