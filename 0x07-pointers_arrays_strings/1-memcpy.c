/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string
 * @src: string
 * @n: unsigned int
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
