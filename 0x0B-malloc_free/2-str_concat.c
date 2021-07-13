#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i = 0, j = 0, len, k = 0, m = 0;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	len = i + j;
	p = malloc(sizeof(char) * len + 1);
	if (p)
	{
		for (; k < i; k++)
		{
			p[k] = s1[k];
		}
		for (; k < len; k++)
		{
			p[k] = s2[m];
			m++;
		}
	}
	return (p);
}
