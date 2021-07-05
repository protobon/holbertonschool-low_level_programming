/**
 * _strchr - returns the first occurrence of char c in the string s
 * @s: string
 * @c: char
 * Return: pointer of string starting in matching char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			p = s + i;
			break;
		}
	}
	return (p);
}
