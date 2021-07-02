#include "holberton.h"
/**
 * cap_string - capitalizes every word of a string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i, j;
	int a[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != 0; j++)
		{
			if (s[i] == a[j])
			{
				if (s[i] == 9)
				{
					s[i] = 32;
				}
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
				break;
			}
		}
		j = 0;
	}
	return (s);
}
