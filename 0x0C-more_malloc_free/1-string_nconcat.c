#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int, number of chars to concatenate
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int i, j, k, l;

	i = 0;
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	j = 0;
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (n < j)
	{
		j = n;
	}
	p = malloc(i + j + 1);
	if (p)
	{
		for (k = 0; (k < i) && s1; k++)
		{
			p[k] = s1[k];
		}
		for (l = 0; (l < j) && s2; l++)
		{
			p[k + l] = s2[l];
		}
		p[k + l] = '\0';
	}
	return (p);
}
