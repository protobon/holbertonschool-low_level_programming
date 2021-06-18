#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a == 9)
		{
			continue;
		} else
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
