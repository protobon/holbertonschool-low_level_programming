/**
 * _strspn - calculates the length in bytes of the initial segment of s
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 1;

	if (accept == 0)
	{
		return (n);
	}
	for (i = 0; accept[i] != 0; i++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
