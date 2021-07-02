/**
 * _strncpy - copies a string into another
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; src[j] != '\0'; j++);

	j -= 1;
	
	for (; i < n; i++)
	{
		if (i <= j)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
