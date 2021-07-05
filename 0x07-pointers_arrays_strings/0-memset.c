/**
 * _memset - fill a block of memory with a particular value n times
 * @s: string
 * @b: char
 * @n: int
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
