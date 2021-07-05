#include <stddef.h>
/**
 * _strstr - finds a substring inside a string
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p = NULL;

	if (haystack && needle && needle[0] != '\0')
	{
		for (; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				if (j == 0)
				{
					p = haystack + i;
				}
				j++;
				if (needle[j] == 0)
				{
					break;
				}
			}
			else
			{
				j = 0;
				p = NULL;
			}
		}
	}
	return (p);
}
