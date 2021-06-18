#include <stdio.h>
/**
 * main - prints out the alphabet in lower case
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
			continue;
		} else if (ch == 'e')
		{
			continue;
		} else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
