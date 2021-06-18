#include <stdio.h>
/**
 * main - prints all one digit base 10 numbers
 * Return: returns 0
 */
int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
