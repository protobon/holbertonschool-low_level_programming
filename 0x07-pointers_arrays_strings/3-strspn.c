/**
 * _strspn - calculates the length in bytes of the initial segment of s
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a = 0, b, n = 0;

	if (accept[n] == '\0')
	{
		return (n);
	}
	while (accept[a] != '\0')
	{
		a++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		b = n;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		if (j == a && b == n)
		{
			break;
		}
	}
	return (n);
}
