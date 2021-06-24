/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: integer
 * Return: returns 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
