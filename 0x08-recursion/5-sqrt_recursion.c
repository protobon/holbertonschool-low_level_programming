/**
 * comp - gets the sq root of n
 * @n: int
 * @j: int
 * Return: int
 */
int comp(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j > n)
	{
		return (-1);
	}
	return (comp(n, j + 1));
}

/**
 * _sqrt_recursion - prints the sq root of n
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
