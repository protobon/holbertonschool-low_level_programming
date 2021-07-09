/**
 * end_of_string - moves pointer to the end of string
 * @s: string
 * Return: 0
 */
int end_of_string(char *s)
{
	if (*s)
	{
		s++;
		return (1 + end_of_string(s));
	}
	return (0);
}

/**
 * check - checks if a string is a palindrome
 * @s: string
 * @i: int
 * @j: int
 * Return: int
 */
int check(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (check(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if s is palindrome, 0 otherwise
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = end_of_string(s);

	return (check(s, i, j - 1));
}
