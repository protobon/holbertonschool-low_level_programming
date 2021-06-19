#include <stdio.h>
/**
 * main - prints every possible combination between two digits
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		int c = a + 1;

		for (b = 0; b <= 9; b++)
		{
			if (a >= b)
			{
				continue;
			}
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
