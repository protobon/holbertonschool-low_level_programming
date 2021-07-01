/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: returns string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char* *p;

	p = &dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	if (j <= n)
	{
		n = j;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (*p);
}
