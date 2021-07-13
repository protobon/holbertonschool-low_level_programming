#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int i, j;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		p = malloc(sizeof(char) * i + 1);
		if (p)
		{
			for (j = 0; j <= i; j++)
			{
				p[j] = str[j];
			}
		}
	}
	return (p);
}
