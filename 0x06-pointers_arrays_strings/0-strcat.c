/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: returns string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	dest[i] = ' ';

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
