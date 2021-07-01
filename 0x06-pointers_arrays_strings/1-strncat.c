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
	if (i < n)
	{
		n = i;
	}
	for (; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (*p);
}
