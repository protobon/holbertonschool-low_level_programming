/**
 * check - check for prime number
 * @n: int
 * @i: int
 * Return: int
 */
int check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (n % i == 0 && i != 1 && i != n)
		{
			return (0);
		}
		else if (i == n)
		{
			return (1);
		}
		return (check(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (check(n, 1));
}
