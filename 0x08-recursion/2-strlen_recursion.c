/**
 * _strlen_recursion - calculates the length of a string
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == 0)
	{
		return (n);
	}
	else
	{
		n = _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
